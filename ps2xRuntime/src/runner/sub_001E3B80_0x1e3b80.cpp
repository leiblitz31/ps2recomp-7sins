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

// Function: sub_001E3B80
// Address: 0x1e3b80 - 0x1e4420
void sub_001E3B80_0x1e3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3B80_0x1e3b80");
#endif

    switch (ctx->pc) {
        case 0x1e3b80u: goto label_1e3b80;
        case 0x1e3b84u: goto label_1e3b84;
        case 0x1e3b88u: goto label_1e3b88;
        case 0x1e3b8cu: goto label_1e3b8c;
        case 0x1e3b90u: goto label_1e3b90;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3b9cu: goto label_1e3b9c;
        case 0x1e3ba0u: goto label_1e3ba0;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bacu: goto label_1e3bac;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bb8u: goto label_1e3bb8;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bc0u: goto label_1e3bc0;
        case 0x1e3bc4u: goto label_1e3bc4;
        case 0x1e3bc8u: goto label_1e3bc8;
        case 0x1e3bccu: goto label_1e3bcc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bd4u: goto label_1e3bd4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be0u: goto label_1e3be0;
        case 0x1e3be4u: goto label_1e3be4;
        case 0x1e3be8u: goto label_1e3be8;
        case 0x1e3becu: goto label_1e3bec;
        case 0x1e3bf0u: goto label_1e3bf0;
        case 0x1e3bf4u: goto label_1e3bf4;
        case 0x1e3bf8u: goto label_1e3bf8;
        case 0x1e3bfcu: goto label_1e3bfc;
        case 0x1e3c00u: goto label_1e3c00;
        case 0x1e3c04u: goto label_1e3c04;
        case 0x1e3c08u: goto label_1e3c08;
        case 0x1e3c0cu: goto label_1e3c0c;
        case 0x1e3c10u: goto label_1e3c10;
        case 0x1e3c14u: goto label_1e3c14;
        case 0x1e3c18u: goto label_1e3c18;
        case 0x1e3c1cu: goto label_1e3c1c;
        case 0x1e3c20u: goto label_1e3c20;
        case 0x1e3c24u: goto label_1e3c24;
        case 0x1e3c28u: goto label_1e3c28;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c30u: goto label_1e3c30;
        case 0x1e3c34u: goto label_1e3c34;
        case 0x1e3c38u: goto label_1e3c38;
        case 0x1e3c3cu: goto label_1e3c3c;
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c44u: goto label_1e3c44;
        case 0x1e3c48u: goto label_1e3c48;
        case 0x1e3c4cu: goto label_1e3c4c;
        case 0x1e3c50u: goto label_1e3c50;
        case 0x1e3c54u: goto label_1e3c54;
        case 0x1e3c58u: goto label_1e3c58;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c60u: goto label_1e3c60;
        case 0x1e3c64u: goto label_1e3c64;
        case 0x1e3c68u: goto label_1e3c68;
        case 0x1e3c6cu: goto label_1e3c6c;
        case 0x1e3c70u: goto label_1e3c70;
        case 0x1e3c74u: goto label_1e3c74;
        case 0x1e3c78u: goto label_1e3c78;
        case 0x1e3c7cu: goto label_1e3c7c;
        case 0x1e3c80u: goto label_1e3c80;
        case 0x1e3c84u: goto label_1e3c84;
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3c8cu: goto label_1e3c8c;
        case 0x1e3c90u: goto label_1e3c90;
        case 0x1e3c94u: goto label_1e3c94;
        case 0x1e3c98u: goto label_1e3c98;
        case 0x1e3c9cu: goto label_1e3c9c;
        case 0x1e3ca0u: goto label_1e3ca0;
        case 0x1e3ca4u: goto label_1e3ca4;
        case 0x1e3ca8u: goto label_1e3ca8;
        case 0x1e3cacu: goto label_1e3cac;
        case 0x1e3cb0u: goto label_1e3cb0;
        case 0x1e3cb4u: goto label_1e3cb4;
        case 0x1e3cb8u: goto label_1e3cb8;
        case 0x1e3cbcu: goto label_1e3cbc;
        case 0x1e3cc0u: goto label_1e3cc0;
        case 0x1e3cc4u: goto label_1e3cc4;
        case 0x1e3cc8u: goto label_1e3cc8;
        case 0x1e3cccu: goto label_1e3ccc;
        case 0x1e3cd0u: goto label_1e3cd0;
        case 0x1e3cd4u: goto label_1e3cd4;
        case 0x1e3cd8u: goto label_1e3cd8;
        case 0x1e3cdcu: goto label_1e3cdc;
        case 0x1e3ce0u: goto label_1e3ce0;
        case 0x1e3ce4u: goto label_1e3ce4;
        case 0x1e3ce8u: goto label_1e3ce8;
        case 0x1e3cecu: goto label_1e3cec;
        case 0x1e3cf0u: goto label_1e3cf0;
        case 0x1e3cf4u: goto label_1e3cf4;
        case 0x1e3cf8u: goto label_1e3cf8;
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d00u: goto label_1e3d00;
        case 0x1e3d04u: goto label_1e3d04;
        case 0x1e3d08u: goto label_1e3d08;
        case 0x1e3d0cu: goto label_1e3d0c;
        case 0x1e3d10u: goto label_1e3d10;
        case 0x1e3d14u: goto label_1e3d14;
        case 0x1e3d18u: goto label_1e3d18;
        case 0x1e3d1cu: goto label_1e3d1c;
        case 0x1e3d20u: goto label_1e3d20;
        case 0x1e3d24u: goto label_1e3d24;
        case 0x1e3d28u: goto label_1e3d28;
        case 0x1e3d2cu: goto label_1e3d2c;
        case 0x1e3d30u: goto label_1e3d30;
        case 0x1e3d34u: goto label_1e3d34;
        case 0x1e3d38u: goto label_1e3d38;
        case 0x1e3d3cu: goto label_1e3d3c;
        case 0x1e3d40u: goto label_1e3d40;
        case 0x1e3d44u: goto label_1e3d44;
        case 0x1e3d48u: goto label_1e3d48;
        case 0x1e3d4cu: goto label_1e3d4c;
        case 0x1e3d50u: goto label_1e3d50;
        case 0x1e3d54u: goto label_1e3d54;
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d5cu: goto label_1e3d5c;
        case 0x1e3d60u: goto label_1e3d60;
        case 0x1e3d64u: goto label_1e3d64;
        case 0x1e3d68u: goto label_1e3d68;
        case 0x1e3d6cu: goto label_1e3d6c;
        case 0x1e3d70u: goto label_1e3d70;
        case 0x1e3d74u: goto label_1e3d74;
        case 0x1e3d78u: goto label_1e3d78;
        case 0x1e3d7cu: goto label_1e3d7c;
        case 0x1e3d80u: goto label_1e3d80;
        case 0x1e3d84u: goto label_1e3d84;
        case 0x1e3d88u: goto label_1e3d88;
        case 0x1e3d8cu: goto label_1e3d8c;
        case 0x1e3d90u: goto label_1e3d90;
        case 0x1e3d94u: goto label_1e3d94;
        case 0x1e3d98u: goto label_1e3d98;
        case 0x1e3d9cu: goto label_1e3d9c;
        case 0x1e3da0u: goto label_1e3da0;
        case 0x1e3da4u: goto label_1e3da4;
        case 0x1e3da8u: goto label_1e3da8;
        case 0x1e3dacu: goto label_1e3dac;
        case 0x1e3db0u: goto label_1e3db0;
        case 0x1e3db4u: goto label_1e3db4;
        case 0x1e3db8u: goto label_1e3db8;
        case 0x1e3dbcu: goto label_1e3dbc;
        case 0x1e3dc0u: goto label_1e3dc0;
        case 0x1e3dc4u: goto label_1e3dc4;
        case 0x1e3dc8u: goto label_1e3dc8;
        case 0x1e3dccu: goto label_1e3dcc;
        case 0x1e3dd0u: goto label_1e3dd0;
        case 0x1e3dd4u: goto label_1e3dd4;
        case 0x1e3dd8u: goto label_1e3dd8;
        case 0x1e3ddcu: goto label_1e3ddc;
        case 0x1e3de0u: goto label_1e3de0;
        case 0x1e3de4u: goto label_1e3de4;
        case 0x1e3de8u: goto label_1e3de8;
        case 0x1e3decu: goto label_1e3dec;
        case 0x1e3df0u: goto label_1e3df0;
        case 0x1e3df4u: goto label_1e3df4;
        case 0x1e3df8u: goto label_1e3df8;
        case 0x1e3dfcu: goto label_1e3dfc;
        case 0x1e3e00u: goto label_1e3e00;
        case 0x1e3e04u: goto label_1e3e04;
        case 0x1e3e08u: goto label_1e3e08;
        case 0x1e3e0cu: goto label_1e3e0c;
        case 0x1e3e10u: goto label_1e3e10;
        case 0x1e3e14u: goto label_1e3e14;
        case 0x1e3e18u: goto label_1e3e18;
        case 0x1e3e1cu: goto label_1e3e1c;
        case 0x1e3e20u: goto label_1e3e20;
        case 0x1e3e24u: goto label_1e3e24;
        case 0x1e3e28u: goto label_1e3e28;
        case 0x1e3e2cu: goto label_1e3e2c;
        case 0x1e3e30u: goto label_1e3e30;
        case 0x1e3e34u: goto label_1e3e34;
        case 0x1e3e38u: goto label_1e3e38;
        case 0x1e3e3cu: goto label_1e3e3c;
        case 0x1e3e40u: goto label_1e3e40;
        case 0x1e3e44u: goto label_1e3e44;
        case 0x1e3e48u: goto label_1e3e48;
        case 0x1e3e4cu: goto label_1e3e4c;
        case 0x1e3e50u: goto label_1e3e50;
        case 0x1e3e54u: goto label_1e3e54;
        case 0x1e3e58u: goto label_1e3e58;
        case 0x1e3e5cu: goto label_1e3e5c;
        case 0x1e3e60u: goto label_1e3e60;
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e6cu: goto label_1e3e6c;
        case 0x1e3e70u: goto label_1e3e70;
        case 0x1e3e74u: goto label_1e3e74;
        case 0x1e3e78u: goto label_1e3e78;
        case 0x1e3e7cu: goto label_1e3e7c;
        case 0x1e3e80u: goto label_1e3e80;
        case 0x1e3e84u: goto label_1e3e84;
        case 0x1e3e88u: goto label_1e3e88;
        case 0x1e3e8cu: goto label_1e3e8c;
        case 0x1e3e90u: goto label_1e3e90;
        case 0x1e3e94u: goto label_1e3e94;
        case 0x1e3e98u: goto label_1e3e98;
        case 0x1e3e9cu: goto label_1e3e9c;
        case 0x1e3ea0u: goto label_1e3ea0;
        case 0x1e3ea4u: goto label_1e3ea4;
        case 0x1e3ea8u: goto label_1e3ea8;
        case 0x1e3eacu: goto label_1e3eac;
        case 0x1e3eb0u: goto label_1e3eb0;
        case 0x1e3eb4u: goto label_1e3eb4;
        case 0x1e3eb8u: goto label_1e3eb8;
        case 0x1e3ebcu: goto label_1e3ebc;
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        case 0x1e3f34u: goto label_1e3f34;
        case 0x1e3f38u: goto label_1e3f38;
        case 0x1e3f3cu: goto label_1e3f3c;
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        case 0x1e3f98u: goto label_1e3f98;
        case 0x1e3f9cu: goto label_1e3f9c;
        case 0x1e3fa0u: goto label_1e3fa0;
        case 0x1e3fa4u: goto label_1e3fa4;
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fb0u: goto label_1e3fb0;
        case 0x1e3fb4u: goto label_1e3fb4;
        case 0x1e3fb8u: goto label_1e3fb8;
        case 0x1e3fbcu: goto label_1e3fbc;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fc4u: goto label_1e3fc4;
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fd0u: goto label_1e3fd0;
        case 0x1e3fd4u: goto label_1e3fd4;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3fdcu: goto label_1e3fdc;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fe4u: goto label_1e3fe4;
        case 0x1e3fe8u: goto label_1e3fe8;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e3ff4u: goto label_1e3ff4;
        case 0x1e3ff8u: goto label_1e3ff8;
        case 0x1e3ffcu: goto label_1e3ffc;
        case 0x1e4000u: goto label_1e4000;
        case 0x1e4004u: goto label_1e4004;
        case 0x1e4008u: goto label_1e4008;
        case 0x1e400cu: goto label_1e400c;
        case 0x1e4010u: goto label_1e4010;
        case 0x1e4014u: goto label_1e4014;
        case 0x1e4018u: goto label_1e4018;
        case 0x1e401cu: goto label_1e401c;
        case 0x1e4020u: goto label_1e4020;
        case 0x1e4024u: goto label_1e4024;
        case 0x1e4028u: goto label_1e4028;
        case 0x1e402cu: goto label_1e402c;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e4034u: goto label_1e4034;
        case 0x1e4038u: goto label_1e4038;
        case 0x1e403cu: goto label_1e403c;
        case 0x1e4040u: goto label_1e4040;
        case 0x1e4044u: goto label_1e4044;
        case 0x1e4048u: goto label_1e4048;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4050u: goto label_1e4050;
        case 0x1e4054u: goto label_1e4054;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e405cu: goto label_1e405c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4064u: goto label_1e4064;
        case 0x1e4068u: goto label_1e4068;
        case 0x1e406cu: goto label_1e406c;
        case 0x1e4070u: goto label_1e4070;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4078u: goto label_1e4078;
        case 0x1e407cu: goto label_1e407c;
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        case 0x1e40d8u: goto label_1e40d8;
        case 0x1e40dcu: goto label_1e40dc;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40e4u: goto label_1e40e4;
        case 0x1e40e8u: goto label_1e40e8;
        case 0x1e40ecu: goto label_1e40ec;
        case 0x1e40f0u: goto label_1e40f0;
        case 0x1e40f4u: goto label_1e40f4;
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4104u: goto label_1e4104;
        case 0x1e4108u: goto label_1e4108;
        case 0x1e410cu: goto label_1e410c;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4114u: goto label_1e4114;
        case 0x1e4118u: goto label_1e4118;
        case 0x1e411cu: goto label_1e411c;
        case 0x1e4120u: goto label_1e4120;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e412cu: goto label_1e412c;
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        case 0x1e41f0u: goto label_1e41f0;
        case 0x1e41f4u: goto label_1e41f4;
        case 0x1e41f8u: goto label_1e41f8;
        case 0x1e41fcu: goto label_1e41fc;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4204u: goto label_1e4204;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e420cu: goto label_1e420c;
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42b8u: goto label_1e42b8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c0u: goto label_1e42c0;
        case 0x1e42c4u: goto label_1e42c4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42ccu: goto label_1e42cc;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        case 0x1e43b8u: goto label_1e43b8;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        default: break;
    }

    ctx->pc = 0x1e3b80u;

label_1e3b80:
    // 0x1e3b80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1e3b84:
    // 0x1e3b84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e3b88:
    // 0x1e3b88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e3b8c:
    // 0x1e3b8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e3b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e3b90:
    // 0x1e3b90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e3b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e3b94:
    // 0x1e3b94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e3b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e3b98:
    // 0x1e3b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e3b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e3b9c:
    // 0x1e3b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e3ba0:
    // 0x1e3ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3ba4:
    // 0x1e3ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3ba8:
    // 0x1e3ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3bac:
    // 0x1e3bac: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1e3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_1e3bb0:
    // 0x1e3bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3bb4:
    // 0x1e3bb4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3bb8:
    // 0x1e3bb8: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x1e3bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
label_1e3bbc:
    // 0x1e3bbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e3bbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bc0:
    // 0x1e3bc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e3bc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bc4:
    // 0x1e3bc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e3bc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bc8:
    // 0x1e3bc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e3bc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bcc:
    // 0x1e3bcc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e3bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3bd0:
    // 0x1e3bd0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e3bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3bd4:
    // 0x1e3bd4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e3bd8:
    // 0x1e3bd8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3bdc:
    // 0x1e3bdc: 0xc10746c  jal         func_41D1B0
label_1e3be0:
    if (ctx->pc == 0x1E3BE0u) {
        ctx->pc = 0x1E3BE4u;
        goto label_1e3be4;
    }
    ctx->pc = 0x1E3BDCu;
    SET_GPR_U32(ctx, 31, 0x1E3BE4u);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x1E3BDCu, 0x1E3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BE4u;
label_1e3be4:
    // 0x1e3be4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3be8:
    // 0x1e3be8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3bec:
    // 0x1e3bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bf0:
    // 0x1e3bf0: 0xc079b40  jal         func_1E6D00
label_1e3bf4:
    if (ctx->pc == 0x1E3BF4u) {
        ctx->pc = 0x1E3BF8u;
        goto label_1e3bf8;
    }
    ctx->pc = 0x1E3BF0u;
    SET_GPR_U32(ctx, 31, 0x1E3BF8u);
    ctx->pc = 0x1E6D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6D00u, 0x1E3BF0u, 0x1E3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BF8u;
label_1e3bf8:
    // 0x1e3bf8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e3bfc:
    // 0x1e3bfc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3c00:
    // 0x1e3c00: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1e3c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e3c04:
    // 0x1e3c04: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e3c08:
    // 0x1e3c08: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1e3c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e3c0c:
    // 0x1e3c0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e3c10:
    // 0x1e3c10: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x1e3c10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_1e3c14:
    // 0x1e3c14: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e3c18:
    if (ctx->pc == 0x1E3C18u) {
        ctx->pc = 0x1E3C1Cu;
        goto label_1e3c1c;
    }
    ctx->pc = 0x1E3C14u;
    {
        const bool branch_taken_0x1e3c14 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e3c14) {
            ctx->pc = 0x1E3C24u;
            goto label_1e3c24;
        }
    }
    ctx->pc = 0x1E3C1Cu;
label_1e3c1c:
    // 0x1e3c1c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1e3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1e3c20:
    // 0x1e3c20: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x1e3c20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_1e3c24:
    // 0x1e3c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c28:
    // 0x1e3c28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e3c2c:
    // 0x1e3c2c: 0x8c42e988  lw          $v0, -0x1678($v0)
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961544)));
label_1e3c30:
    // 0x1e3c30: 0x40f809  jalr        $v0
label_1e3c34:
    if (ctx->pc == 0x1E3C34u) {
        ctx->pc = 0x1E3C38u;
        goto label_1e3c38;
    }
    ctx->pc = 0x1E3C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3C38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3C30u, 0x1E3C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3C38u;
label_1e3c38:
    // 0x1e3c38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e3c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1e3c3c:
    // 0x1e3c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c40:
    // 0x1e3c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c44:
    // 0x1e3c44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e3c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3c48:
    // 0x1e3c48: 0xc1075c0  jal         func_41D700
label_1e3c4c:
    if (ctx->pc == 0x1E3C4Cu) {
        ctx->pc = 0x1E3C50u;
        goto label_1e3c50;
    }
    ctx->pc = 0x1E3C48u;
    SET_GPR_U32(ctx, 31, 0x1E3C50u);
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x1E3C48u, 0x1E3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C50u;
label_1e3c50:
    // 0x1e3c50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e3c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c54:
    // 0x1e3c54: 0x8e36000c  lw          $s6, 0xC($s1)
    ctx->pc = 0x1e3c54u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e3c58:
    // 0x1e3c58: 0x8e350010  lw          $s5, 0x10($s1)
    ctx->pc = 0x1e3c58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e3c5c:
    // 0x1e3c5c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1e3c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c60:
    // 0x1e3c60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e3c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c64:
    // 0x1e3c64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3c68:
    // 0x1e3c68: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c6c:
    // 0x1e3c6c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3c70:
    // 0x1e3c70: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1e3c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c74:
    // 0x1e3c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e3c78:
    // 0x1e3c78: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e3c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1e3c7c:
    // 0x1e3c7c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3c80:
    // 0x1e3c80: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e3c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c84:
    // 0x1e3c84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3c88:
    // 0x1e3c88: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x1e3c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c8c:
    // 0x1e3c8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3c8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e3c90:
    // 0x1e3c90: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e3c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1e3c94:
    // 0x1e3c94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3c98:
    // 0x1e3c98: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_1e3c9c:
    if (ctx->pc == 0x1E3C9Cu) {
        ctx->pc = 0x1E3CA0u;
        goto label_1e3ca0;
    }
    ctx->pc = 0x1E3C98u;
    {
        const bool branch_taken_0x1e3c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c98) {
            ctx->pc = 0x1E432Cu;
            goto label_1e432c;
        }
    }
    ctx->pc = 0x1E3CA0u;
label_1e3ca0:
    // 0x1e3ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3ca4:
    // 0x1e3ca4: 0x10000195  b           . + 4 + (0x195 << 2)
label_1e3ca8:
    if (ctx->pc == 0x1E3CA8u) {
        ctx->pc = 0x1E3CACu;
        goto label_1e3cac;
    }
    ctx->pc = 0x1E3CA4u;
    {
        const bool branch_taken_0x1e3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ca4) {
            ctx->pc = 0x1E42FCu;
            goto label_1e42fc;
        }
    }
    ctx->pc = 0x1E3CACu;
label_1e3cac:
    // 0x1e3cac: 0x128000fe  beqz        $s4, . + 4 + (0xFE << 2)
label_1e3cb0:
    if (ctx->pc == 0x1E3CB0u) {
        ctx->pc = 0x1E3CB4u;
        goto label_1e3cb4;
    }
    ctx->pc = 0x1E3CACu;
    {
        const bool branch_taken_0x1e3cac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3cac) {
            ctx->pc = 0x1E40A8u;
            goto label_1e40a8;
        }
    }
    ctx->pc = 0x1E3CB4u;
label_1e3cb4:
    // 0x1e3cb4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e3cb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3cb8:
    // 0x1e3cb8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3cbc:
    // 0x1e3cbc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e3cc0:
    // 0x1e3cc0: 0xc077f1c  jal         func_1DFC70
label_1e3cc4:
    if (ctx->pc == 0x1E3CC4u) {
        ctx->pc = 0x1E3CC8u;
        goto label_1e3cc8;
    }
    ctx->pc = 0x1E3CC0u;
    SET_GPR_U32(ctx, 31, 0x1E3CC8u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E3CC0u, 0x1E3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3CC8u;
label_1e3cc8:
    // 0x1e3cc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e3ccc:
    // 0x1e3ccc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e3cd0:
    if (ctx->pc == 0x1E3CD0u) {
        ctx->pc = 0x1E3CD4u;
        goto label_1e3cd4;
    }
    ctx->pc = 0x1E3CCCu;
    {
        const bool branch_taken_0x1e3ccc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e3ccc) {
            ctx->pc = 0x1E3CE8u;
            goto label_1e3ce8;
        }
    }
    ctx->pc = 0x1E3CD4u;
label_1e3cd4:
    // 0x1e3cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3cd8:
    // 0x1e3cd8: 0x0  nop
    ctx->pc = 0x1e3cd8u;
    // NOP
label_1e3cdc:
    // 0x1e3cdc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3ce0:
    // 0x1e3ce0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3ce4:
    if (ctx->pc == 0x1E3CE4u) {
        ctx->pc = 0x1E3CE8u;
        goto label_1e3ce8;
    }
    ctx->pc = 0x1E3CE0u;
    {
        const bool branch_taken_0x1e3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ce0) {
            ctx->pc = 0x1E3D04u;
            goto label_1e3d04;
        }
    }
    ctx->pc = 0x1E3CE8u;
label_1e3ce8:
    // 0x1e3ce8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e3cec:
    // 0x1e3cec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e3cf0:
    // 0x1e3cf0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3cf4:
    // 0x1e3cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3cf8:
    // 0x1e3cf8: 0x0  nop
    ctx->pc = 0x1e3cf8u;
    // NOP
label_1e3cfc:
    // 0x1e3cfc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3d00:
    // 0x1e3d00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e3d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e3d04:
    // 0x1e3d04: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e3d04u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3d08:
    // 0x1e3d08: 0x0  nop
    ctx->pc = 0x1e3d08u;
    // NOP
label_1e3d0c:
    // 0x1e3d0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3d10:
    // 0x1e3d10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e3d10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e3d14:
    // 0x1e3d14: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e3d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e3d18:
    // 0x1e3d18: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3d1c:
    // 0x1e3d1c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e3d20:
    // 0x1e3d20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d24:
    // 0x1e3d24: 0xc077fa0  jal         func_1DFE80
label_1e3d28:
    if (ctx->pc == 0x1E3D28u) {
        ctx->pc = 0x1E3D2Cu;
        goto label_1e3d2c;
    }
    ctx->pc = 0x1E3D24u;
    SET_GPR_U32(ctx, 31, 0x1E3D2Cu);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E3D24u, 0x1E3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D2Cu;
label_1e3d2c:
    // 0x1e3d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3d30:
    // 0x1e3d30: 0xc077f2c  jal         func_1DFCB0
label_1e3d34:
    if (ctx->pc == 0x1E3D34u) {
        ctx->pc = 0x1E3D38u;
        goto label_1e3d38;
    }
    ctx->pc = 0x1E3D30u;
    SET_GPR_U32(ctx, 31, 0x1E3D38u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E3D30u, 0x1E3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D38u;
label_1e3d38:
    // 0x1e3d38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e3d3c:
    if (ctx->pc == 0x1E3D3Cu) {
        ctx->pc = 0x1E3D40u;
        goto label_1e3d40;
    }
    ctx->pc = 0x1E3D38u;
    {
        const bool branch_taken_0x1e3d38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e3d38) {
            ctx->pc = 0x1E3D54u;
            goto label_1e3d54;
        }
    }
    ctx->pc = 0x1E3D40u;
label_1e3d40:
    // 0x1e3d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3d44:
    // 0x1e3d44: 0x0  nop
    ctx->pc = 0x1e3d44u;
    // NOP
label_1e3d48:
    // 0x1e3d48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3d4c:
    // 0x1e3d4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3d50:
    if (ctx->pc == 0x1E3D50u) {
        ctx->pc = 0x1E3D54u;
        goto label_1e3d54;
    }
    ctx->pc = 0x1E3D4Cu;
    {
        const bool branch_taken_0x1e3d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3d4c) {
            ctx->pc = 0x1E3D70u;
            goto label_1e3d70;
        }
    }
    ctx->pc = 0x1E3D54u;
label_1e3d54:
    // 0x1e3d54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e3d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e3d58:
    // 0x1e3d58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e3d5c:
    // 0x1e3d5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3d60:
    // 0x1e3d60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3d64:
    // 0x1e3d64: 0x0  nop
    ctx->pc = 0x1e3d64u;
    // NOP
label_1e3d68:
    // 0x1e3d68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3d6c:
    // 0x1e3d6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e3d6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e3d70:
    // 0x1e3d70: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1e3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e3d74:
    // 0x1e3d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3d78:
    // 0x1e3d78: 0x0  nop
    ctx->pc = 0x1e3d78u;
    // NOP
label_1e3d7c:
    // 0x1e3d7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3d7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3d80:
    // 0x1e3d80: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1e3d80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e3d84:
    // 0x1e3d84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e3d88:
    // 0x1e3d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3d8c:
    // 0x1e3d8c: 0x0  nop
    ctx->pc = 0x1e3d8cu;
    // NOP
label_1e3d90:
    // 0x1e3d90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3d90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e3d94:
    // 0x1e3d94: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e3d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1e3d98:
    // 0x1e3d98: 0xc78382d4  lwc1        $f3, -0x7D2C($gp)
    ctx->pc = 0x1e3d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e3d9c:
    // 0x1e3d9c: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1e3da0:
    if (ctx->pc == 0x1E3DA0u) {
        ctx->pc = 0x1E3DA4u;
        goto label_1e3da4;
    }
    ctx->pc = 0x1E3D9Cu;
    {
        const bool branch_taken_0x1e3d9c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x1e3d9c) {
            ctx->pc = 0x1E3DB8u;
            goto label_1e3db8;
        }
    }
    ctx->pc = 0x1E3DA4u;
label_1e3da4:
    // 0x1e3da4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1e3da4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3da8:
    // 0x1e3da8: 0x0  nop
    ctx->pc = 0x1e3da8u;
    // NOP
label_1e3dac:
    // 0x1e3dac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e3dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e3db0:
    // 0x1e3db0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3db4:
    if (ctx->pc == 0x1E3DB4u) {
        ctx->pc = 0x1E3DB8u;
        goto label_1e3db8;
    }
    ctx->pc = 0x1E3DB0u;
    {
        const bool branch_taken_0x1e3db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3db0) {
            ctx->pc = 0x1E3DD4u;
            goto label_1e3dd4;
        }
    }
    ctx->pc = 0x1E3DB8u;
label_1e3db8:
    // 0x1e3db8: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1e3dbc:
    // 0x1e3dbc: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1e3dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1e3dc0:
    // 0x1e3dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3dc4:
    // 0x1e3dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3dc8:
    // 0x1e3dc8: 0x0  nop
    ctx->pc = 0x1e3dc8u;
    // NOP
label_1e3dcc:
    // 0x1e3dcc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e3dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e3dd0:
    // 0x1e3dd0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1e3dd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1e3dd4:
    // 0x1e3dd4: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x1e3dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3dd8:
    // 0x1e3dd8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e3dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3ddc:
    // 0x1e3ddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e3ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3de0:
    // 0x1e3de0: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_1e3de4:
    if (ctx->pc == 0x1E3DE4u) {
        ctx->pc = 0x1E3DE8u;
        goto label_1e3de8;
    }
    ctx->pc = 0x1E3DE0u;
    {
        const bool branch_taken_0x1e3de0 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x1e3de0) {
            ctx->pc = 0x1E3DFCu;
            goto label_1e3dfc;
        }
    }
    ctx->pc = 0x1E3DE8u;
label_1e3de8:
    // 0x1e3de8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1e3de8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3dec:
    // 0x1e3dec: 0x0  nop
    ctx->pc = 0x1e3decu;
    // NOP
label_1e3df0:
    // 0x1e3df0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3df4:
    // 0x1e3df4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3df8:
    if (ctx->pc == 0x1E3DF8u) {
        ctx->pc = 0x1E3DFCu;
        goto label_1e3dfc;
    }
    ctx->pc = 0x1E3DF4u;
    {
        const bool branch_taken_0x1e3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3df4) {
            ctx->pc = 0x1E3E18u;
            goto label_1e3e18;
        }
    }
    ctx->pc = 0x1E3DFCu;
label_1e3dfc:
    // 0x1e3dfc: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_1e3e00:
    // 0x1e3e00: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x1e3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_1e3e04:
    // 0x1e3e04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3e08:
    // 0x1e3e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3e0c:
    // 0x1e3e0c: 0x0  nop
    ctx->pc = 0x1e3e0cu;
    // NOP
label_1e3e10:
    // 0x1e3e10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3e14:
    // 0x1e3e14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e3e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e3e18:
    // 0x1e3e18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e3e18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3e1c:
    // 0x1e3e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3e20:
    // 0x1e3e20: 0x0  nop
    ctx->pc = 0x1e3e20u;
    // NOP
label_1e3e24:
    // 0x1e3e24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e3e24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1e3e28:
    // 0x1e3e28: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e3e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e3e2c:
    // 0x1e3e2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e3e2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e3e30:
    // 0x1e3e30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e3e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e3e34:
    // 0x1e3e34: 0x0  nop
    ctx->pc = 0x1e3e34u;
    // NOP
label_1e3e38:
    // 0x1e3e38: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_1e3e3c:
    // 0x1e3e3c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1e3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1e3e40:
    // 0x1e3e40: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e3e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e3e44:
    // 0x1e3e44: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
label_1e3e48:
    if (ctx->pc == 0x1E3E48u) {
        ctx->pc = 0x1E3E4Cu;
        goto label_1e3e4c;
    }
    ctx->pc = 0x1E3E44u;
    {
        const bool branch_taken_0x1e3e44 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x1e3e44) {
            ctx->pc = 0x1E3E60u;
            goto label_1e3e60;
        }
    }
    ctx->pc = 0x1E3E4Cu;
label_1e3e4c:
    // 0x1e3e4c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1e3e4cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3e50:
    // 0x1e3e50: 0x0  nop
    ctx->pc = 0x1e3e50u;
    // NOP
label_1e3e54:
    // 0x1e3e54: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e3e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e3e58:
    // 0x1e3e58: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3e5c:
    if (ctx->pc == 0x1E3E5Cu) {
        ctx->pc = 0x1E3E60u;
        goto label_1e3e60;
    }
    ctx->pc = 0x1E3E58u;
    {
        const bool branch_taken_0x1e3e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e58) {
            ctx->pc = 0x1E3E7Cu;
            goto label_1e3e7c;
        }
    }
    ctx->pc = 0x1E3E60u;
label_1e3e60:
    // 0x1e3e60: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_1e3e64:
    // 0x1e3e64: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x1e3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1e3e68:
    // 0x1e3e68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3e6c:
    // 0x1e3e6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3e70:
    // 0x1e3e70: 0x0  nop
    ctx->pc = 0x1e3e70u;
    // NOP
label_1e3e74:
    // 0x1e3e74: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e3e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e3e78:
    // 0x1e3e78: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1e3e78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1e3e7c:
    // 0x1e3e7c: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x1e3e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3e80:
    // 0x1e3e80: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3e84:
    // 0x1e3e84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e3e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3e88:
    // 0x1e3e88: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
label_1e3e8c:
    if (ctx->pc == 0x1E3E8Cu) {
        ctx->pc = 0x1E3E90u;
        goto label_1e3e90;
    }
    ctx->pc = 0x1E3E88u;
    {
        const bool branch_taken_0x1e3e88 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x1e3e88) {
            ctx->pc = 0x1E3EA4u;
            goto label_1e3ea4;
        }
    }
    ctx->pc = 0x1E3E90u;
label_1e3e90:
    // 0x1e3e90: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1e3e90u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3e94:
    // 0x1e3e94: 0x0  nop
    ctx->pc = 0x1e3e94u;
    // NOP
label_1e3e98:
    // 0x1e3e98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3e9c:
    // 0x1e3e9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3ea0:
    if (ctx->pc == 0x1E3EA0u) {
        ctx->pc = 0x1E3EA4u;
        goto label_1e3ea4;
    }
    ctx->pc = 0x1E3E9Cu;
    {
        const bool branch_taken_0x1e3e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e9c) {
            ctx->pc = 0x1E3EC0u;
            goto label_1e3ec0;
        }
    }
    ctx->pc = 0x1E3EA4u;
label_1e3ea4:
    // 0x1e3ea4: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x1e3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_1e3ea8:
    // 0x1e3ea8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x1e3ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_1e3eac:
    // 0x1e3eac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3eb0:
    // 0x1e3eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3eb4:
    // 0x1e3eb4: 0x0  nop
    ctx->pc = 0x1e3eb4u;
    // NOP
label_1e3eb8:
    // 0x1e3eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3ebc:
    // 0x1e3ebc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e3ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e3ec0:
    // 0x1e3ec0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e3ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3ec4:
    // 0x1e3ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3ec8:
    // 0x1e3ec8: 0x0  nop
    ctx->pc = 0x1e3ec8u;
    // NOP
label_1e3ecc:
    // 0x1e3ecc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e3eccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1e3ed0:
    // 0x1e3ed0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e3ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e3ed4:
    // 0x1e3ed4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e3ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e3ed8:
    // 0x1e3ed8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e3ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1e3edc:
    // 0x1e3edc: 0x0  nop
    ctx->pc = 0x1e3edcu;
    // NOP
label_1e3ee0:
    // 0x1e3ee0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1e3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1e3ee4:
    // 0x1e3ee4: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1e3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1e3ee8:
    // 0x1e3ee8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1e3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1e3eec:
    // 0x1e3eec: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e3eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1e3ef0:
    // 0x1e3ef0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1e3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1e3ef4:
    // 0x1e3ef4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1e3ef8:
    // 0x1e3ef8: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1e3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1e3efc:
    // 0x1e3efc: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1e3efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e3f00:
    // 0x1e3f00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e3f04:
    // 0x1e3f04: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x1e3f04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
label_1e3f08:
    // 0x1e3f08: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1e3f0c:
    if (ctx->pc == 0x1E3F0Cu) {
        ctx->pc = 0x1E3F10u;
        goto label_1e3f10;
    }
    ctx->pc = 0x1E3F08u;
    {
        const bool branch_taken_0x1e3f08 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e3f08) {
            ctx->pc = 0x1E3F18u;
            goto label_1e3f18;
        }
    }
    ctx->pc = 0x1E3F10u;
label_1e3f10:
    // 0x1e3f10: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1e3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_1e3f14:
    // 0x1e3f14: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1e3f18:
    // 0x1e3f18: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1e3f18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3f1c:
    // 0x1e3f1c: 0x8efe0000  lw          $fp, 0x0($s7)
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e3f20:
    // 0x1e3f20: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x1e3f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_1e3f24:
    // 0x1e3f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3f28:
    // 0x1e3f28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3f2c:
    // 0x1e3f2c: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x1e3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1e3f30:
    // 0x1e3f30: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x1e3f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1e3f34:
    // 0x1e3f34: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e3f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f38:
    // 0x1e3f38: 0xc1071a8  jal         func_41C6A0
label_1e3f3c:
    if (ctx->pc == 0x1E3F3Cu) {
        ctx->pc = 0x1E3F40u;
        goto label_1e3f40;
    }
    ctx->pc = 0x1E3F38u;
    SET_GPR_U32(ctx, 31, 0x1E3F40u);
    ctx->pc = 0x41C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C6A0u, 0x1E3F38u, 0x1E3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F40u;
label_1e3f40:
    // 0x1e3f40: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3f44:
    // 0x1e3f44: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e3f48:
    // 0x1e3f48: 0xc077f1c  jal         func_1DFC70
label_1e3f4c:
    if (ctx->pc == 0x1E3F4Cu) {
        ctx->pc = 0x1E3F50u;
        goto label_1e3f50;
    }
    ctx->pc = 0x1E3F48u;
    SET_GPR_U32(ctx, 31, 0x1E3F50u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E3F48u, 0x1E3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F50u;
label_1e3f50:
    // 0x1e3f50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e3f54:
    if (ctx->pc == 0x1E3F54u) {
        ctx->pc = 0x1E3F58u;
        goto label_1e3f58;
    }
    ctx->pc = 0x1E3F50u;
    {
        const bool branch_taken_0x1e3f50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e3f50) {
            ctx->pc = 0x1E3F6Cu;
            goto label_1e3f6c;
        }
    }
    ctx->pc = 0x1E3F58u;
label_1e3f58:
    // 0x1e3f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3f5c:
    // 0x1e3f5c: 0x0  nop
    ctx->pc = 0x1e3f5cu;
    // NOP
label_1e3f60:
    // 0x1e3f60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3f64:
    // 0x1e3f64: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3f68:
    if (ctx->pc == 0x1E3F68u) {
        ctx->pc = 0x1E3F6Cu;
        goto label_1e3f6c;
    }
    ctx->pc = 0x1E3F64u;
    {
        const bool branch_taken_0x1e3f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f64) {
            ctx->pc = 0x1E3F88u;
            goto label_1e3f88;
        }
    }
    ctx->pc = 0x1E3F6Cu;
label_1e3f6c:
    // 0x1e3f6c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e3f70:
    // 0x1e3f70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e3f74:
    // 0x1e3f74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3f78:
    // 0x1e3f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3f7c:
    // 0x1e3f7c: 0x0  nop
    ctx->pc = 0x1e3f7cu;
    // NOP
label_1e3f80:
    // 0x1e3f80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3f84:
    // 0x1e3f84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e3f84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e3f88:
    // 0x1e3f88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e3f88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3f8c:
    // 0x1e3f8c: 0x0  nop
    ctx->pc = 0x1e3f8cu;
    // NOP
label_1e3f90:
    // 0x1e3f90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3f94:
    // 0x1e3f94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e3f94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e3f98:
    // 0x1e3f98: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e3f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e3f9c:
    // 0x1e3f9c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e3fa0:
    // 0x1e3fa0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e3fa4:
    // 0x1e3fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3fa8:
    // 0x1e3fa8: 0xc077fa0  jal         func_1DFE80
label_1e3fac:
    if (ctx->pc == 0x1E3FACu) {
        ctx->pc = 0x1E3FB0u;
        goto label_1e3fb0;
    }
    ctx->pc = 0x1E3FA8u;
    SET_GPR_U32(ctx, 31, 0x1E3FB0u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E3FA8u, 0x1E3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FB0u;
label_1e3fb0:
    // 0x1e3fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3fb4:
    // 0x1e3fb4: 0xc077f2c  jal         func_1DFCB0
label_1e3fb8:
    if (ctx->pc == 0x1E3FB8u) {
        ctx->pc = 0x1E3FBCu;
        goto label_1e3fbc;
    }
    ctx->pc = 0x1E3FB4u;
    SET_GPR_U32(ctx, 31, 0x1E3FBCu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E3FB4u, 0x1E3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FBCu;
label_1e3fbc:
    // 0x1e3fbc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e3fc0:
    if (ctx->pc == 0x1E3FC0u) {
        ctx->pc = 0x1E3FC4u;
        goto label_1e3fc4;
    }
    ctx->pc = 0x1E3FBCu;
    {
        const bool branch_taken_0x1e3fbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e3fbc) {
            ctx->pc = 0x1E3FD8u;
            goto label_1e3fd8;
        }
    }
    ctx->pc = 0x1E3FC4u;
label_1e3fc4:
    // 0x1e3fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3fc8:
    // 0x1e3fc8: 0x0  nop
    ctx->pc = 0x1e3fc8u;
    // NOP
label_1e3fcc:
    // 0x1e3fcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3fd0:
    // 0x1e3fd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3fd4:
    if (ctx->pc == 0x1E3FD4u) {
        ctx->pc = 0x1E3FD8u;
        goto label_1e3fd8;
    }
    ctx->pc = 0x1E3FD0u;
    {
        const bool branch_taken_0x1e3fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3fd0) {
            ctx->pc = 0x1E3FF4u;
            goto label_1e3ff4;
        }
    }
    ctx->pc = 0x1E3FD8u;
label_1e3fd8:
    // 0x1e3fd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e3fdc:
    // 0x1e3fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e3fe0:
    // 0x1e3fe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3fe4:
    // 0x1e3fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3fe8:
    // 0x1e3fe8: 0x0  nop
    ctx->pc = 0x1e3fe8u;
    // NOP
label_1e3fec:
    // 0x1e3fec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e3fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3ff0:
    // 0x1e3ff0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e3ff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e3ff4:
    // 0x1e3ff4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1e3ff4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3ff8:
    // 0x1e3ff8: 0x0  nop
    ctx->pc = 0x1e3ff8u;
    // NOP
label_1e3ffc:
    // 0x1e3ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e4000:
    // 0x1e4000: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e4000u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e4004:
    // 0x1e4004: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e4004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e4008:
    // 0x1e4008: 0x93a200e4  lbu         $v0, 0xE4($sp)
    ctx->pc = 0x1e4008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 228)));
label_1e400c:
    // 0x1e400c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e400cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4010:
    // 0x1e4010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4014:
    // 0x1e4014: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1e4014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1e4018:
    // 0x1e4018: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e401c:
    if (ctx->pc == 0x1E401Cu) {
        ctx->pc = 0x1E4020u;
        goto label_1e4020;
    }
    ctx->pc = 0x1E4018u;
    {
        const bool branch_taken_0x1e4018 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e4018) {
            ctx->pc = 0x1E4028u;
            goto label_1e4028;
        }
    }
    ctx->pc = 0x1E4020u;
label_1e4020:
    // 0x1e4020: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4024:
    // 0x1e4024: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4028:
    // 0x1e4028: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1e4028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e402c:
    // 0x1e402c: 0x93a200e5  lbu         $v0, 0xE5($sp)
    ctx->pc = 0x1e402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 229)));
label_1e4030:
    // 0x1e4030: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e4030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4034:
    // 0x1e4034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4038:
    // 0x1e4038: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1e4038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1e403c:
    // 0x1e403c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4040:
    if (ctx->pc == 0x1E4040u) {
        ctx->pc = 0x1E4044u;
        goto label_1e4044;
    }
    ctx->pc = 0x1E403Cu;
    {
        const bool branch_taken_0x1e403c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e403c) {
            ctx->pc = 0x1E404Cu;
            goto label_1e404c;
        }
    }
    ctx->pc = 0x1E4044u;
label_1e4044:
    // 0x1e4044: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e4048:
    // 0x1e4048: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e404c:
    // 0x1e404c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x1e404cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4050:
    // 0x1e4050: 0x93a200e6  lbu         $v0, 0xE6($sp)
    ctx->pc = 0x1e4050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 230)));
label_1e4054:
    // 0x1e4054: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e4054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4058:
    // 0x1e4058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e405c:
    // 0x1e405c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1e405cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1e4060:
    // 0x1e4060: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4064:
    if (ctx->pc == 0x1E4064u) {
        ctx->pc = 0x1E4068u;
        goto label_1e4068;
    }
    ctx->pc = 0x1E4060u;
    {
        const bool branch_taken_0x1e4060 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e4060) {
            ctx->pc = 0x1E4070u;
            goto label_1e4070;
        }
    }
    ctx->pc = 0x1E4068u;
label_1e4068:
    // 0x1e4068: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e406c:
    // 0x1e406c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e406cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e4070:
    // 0x1e4070: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x1e4070u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4074:
    // 0x1e4074: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1e4074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e4078:
    // 0x1e4078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e407c:
    // 0x1e407c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e407cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4080:
    // 0x1e4080: 0xc079934  jal         func_1E64D0
label_1e4084:
    if (ctx->pc == 0x1E4084u) {
        ctx->pc = 0x1E4088u;
        goto label_1e4088;
    }
    ctx->pc = 0x1E4080u;
    SET_GPR_U32(ctx, 31, 0x1E4088u);
    ctx->pc = 0x1E64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E64D0u, 0x1E4080u, 0x1E4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4088u;
label_1e4088:
    // 0x1e4088: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1e4088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e408c:
    // 0x1e408c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4090:
    // 0x1e4090: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4094:
    // 0x1e4094: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1e4094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e4098:
    // 0x1e4098: 0xc079994  jal         func_1E6650
label_1e409c:
    if (ctx->pc == 0x1E409Cu) {
        ctx->pc = 0x1E40A0u;
        goto label_1e40a0;
    }
    ctx->pc = 0x1E4098u;
    SET_GPR_U32(ctx, 31, 0x1E40A0u);
    ctx->pc = 0x1E6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6650u, 0x1E4098u, 0x1E40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E40A0u;
label_1e40a0:
    // 0x1e40a0: 0x10000095  b           . + 4 + (0x95 << 2)
label_1e40a4:
    if (ctx->pc == 0x1E40A4u) {
        ctx->pc = 0x1E40A8u;
        goto label_1e40a8;
    }
    ctx->pc = 0x1E40A0u;
    {
        const bool branch_taken_0x1e40a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40a0) {
            ctx->pc = 0x1E42F8u;
            goto label_1e42f8;
        }
    }
    ctx->pc = 0x1E40A8u;
label_1e40a8:
    // 0x1e40a8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e40ac:
    // 0x1e40ac: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e40acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e40b0:
    // 0x1e40b0: 0xc077f1c  jal         func_1DFC70
label_1e40b4:
    if (ctx->pc == 0x1E40B4u) {
        ctx->pc = 0x1E40B8u;
        goto label_1e40b8;
    }
    ctx->pc = 0x1E40B0u;
    SET_GPR_U32(ctx, 31, 0x1E40B8u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E40B0u, 0x1E40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E40B8u;
label_1e40b8:
    // 0x1e40b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e40bc:
    if (ctx->pc == 0x1E40BCu) {
        ctx->pc = 0x1E40C0u;
        goto label_1e40c0;
    }
    ctx->pc = 0x1E40B8u;
    {
        const bool branch_taken_0x1e40b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e40b8) {
            ctx->pc = 0x1E40D4u;
            goto label_1e40d4;
        }
    }
    ctx->pc = 0x1E40C0u;
label_1e40c0:
    // 0x1e40c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e40c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e40c4:
    // 0x1e40c4: 0x0  nop
    ctx->pc = 0x1e40c4u;
    // NOP
label_1e40c8:
    // 0x1e40c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e40c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e40cc:
    // 0x1e40cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e40d0:
    if (ctx->pc == 0x1E40D0u) {
        ctx->pc = 0x1E40D4u;
        goto label_1e40d4;
    }
    ctx->pc = 0x1E40CCu;
    {
        const bool branch_taken_0x1e40cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40cc) {
            ctx->pc = 0x1E40F0u;
            goto label_1e40f0;
        }
    }
    ctx->pc = 0x1E40D4u;
label_1e40d4:
    // 0x1e40d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e40d8:
    // 0x1e40d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e40d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e40dc:
    // 0x1e40dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e40dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e40e0:
    // 0x1e40e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e40e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e40e4:
    // 0x1e40e4: 0x0  nop
    ctx->pc = 0x1e40e4u;
    // NOP
label_1e40e8:
    // 0x1e40e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e40e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e40ec:
    // 0x1e40ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e40ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e40f0:
    // 0x1e40f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e40f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e40f4:
    // 0x1e40f4: 0x0  nop
    ctx->pc = 0x1e40f4u;
    // NOP
label_1e40f8:
    // 0x1e40f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e40f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e40fc:
    // 0x1e40fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e40fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e4100:
    // 0x1e4100: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e4100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e4104:
    // 0x1e4104: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e4108:
    // 0x1e4108: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e4108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e410c:
    // 0x1e410c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4110:
    // 0x1e4110: 0xc077fa0  jal         func_1DFE80
label_1e4114:
    if (ctx->pc == 0x1E4114u) {
        ctx->pc = 0x1E4118u;
        goto label_1e4118;
    }
    ctx->pc = 0x1E4110u;
    SET_GPR_U32(ctx, 31, 0x1E4118u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E4110u, 0x1E4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4118u;
label_1e4118:
    // 0x1e4118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e411c:
    // 0x1e411c: 0xc077f2c  jal         func_1DFCB0
label_1e4120:
    if (ctx->pc == 0x1E4120u) {
        ctx->pc = 0x1E4124u;
        goto label_1e4124;
    }
    ctx->pc = 0x1E411Cu;
    SET_GPR_U32(ctx, 31, 0x1E4124u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E411Cu, 0x1E4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4124u;
label_1e4124:
    // 0x1e4124: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1e4128:
    if (ctx->pc == 0x1E4128u) {
        ctx->pc = 0x1E412Cu;
        goto label_1e412c;
    }
    ctx->pc = 0x1E4124u;
    {
        const bool branch_taken_0x1e4124 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e4124) {
            ctx->pc = 0x1E4140u;
            goto label_1e4140;
        }
    }
    ctx->pc = 0x1E412Cu;
label_1e412c:
    // 0x1e412c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4130:
    // 0x1e4130: 0x0  nop
    ctx->pc = 0x1e4130u;
    // NOP
label_1e4134:
    // 0x1e4134: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e4134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e4138:
    // 0x1e4138: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e413c:
    if (ctx->pc == 0x1E413Cu) {
        ctx->pc = 0x1E4140u;
        goto label_1e4140;
    }
    ctx->pc = 0x1E4138u;
    {
        const bool branch_taken_0x1e4138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4138) {
            ctx->pc = 0x1E415Cu;
            goto label_1e415c;
        }
    }
    ctx->pc = 0x1E4140u;
label_1e4140:
    // 0x1e4140: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e4140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1e4144:
    // 0x1e4144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e4148:
    // 0x1e4148: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e4148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e414c:
    // 0x1e414c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e414cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4150:
    // 0x1e4150: 0x0  nop
    ctx->pc = 0x1e4150u;
    // NOP
label_1e4154:
    // 0x1e4154: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e4154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e4158:
    // 0x1e4158: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e4158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e415c:
    // 0x1e415c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1e415cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4160:
    // 0x1e4160: 0x0  nop
    ctx->pc = 0x1e4160u;
    // NOP
label_1e4164:
    // 0x1e4164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e4164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e4168:
    // 0x1e4168: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e4168u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1e416c:
    // 0x1e416c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e4170:
    // 0x1e4170: 0xc78381b0  lwc1        $f3, -0x7E50($gp)
    ctx->pc = 0x1e4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e4174:
    // 0x1e4174: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4178:
    // 0x1e4178: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e417c:
    // 0x1e417c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e417cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4180:
    // 0x1e4180: 0xc78181b8  lwc1        $f1, -0x7E48($gp)
    ctx->pc = 0x1e4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4184:
    // 0x1e4184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4188:
    // 0x1e4188: 0x0  nop
    ctx->pc = 0x1e4188u;
    // NOP
label_1e418c:
    // 0x1e418c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e418cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1e4190:
    // 0x1e4190: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e4190u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e4194:
    // 0x1e4194: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e4194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e4198:
    // 0x1e4198: 0xc78381b0  lwc1        $f3, -0x7E50($gp)
    ctx->pc = 0x1e4198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e419c:
    // 0x1e419c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e41a0:
    // 0x1e41a0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e41a4:
    // 0x1e41a4: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e41a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e41a8:
    // 0x1e41a8: 0xc78181a0  lwc1        $f1, -0x7E60($gp)
    ctx->pc = 0x1e41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e41ac:
    // 0x1e41ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e41acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e41b0:
    // 0x1e41b0: 0x0  nop
    ctx->pc = 0x1e41b0u;
    // NOP
label_1e41b4:
    // 0x1e41b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e41b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1e41b8:
    // 0x1e41b8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e41b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e41bc:
    // 0x1e41bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e41bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1e41c0:
    // 0x1e41c0: 0xc78381b0  lwc1        $f3, -0x7E50($gp)
    ctx->pc = 0x1e41c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e41c4:
    // 0x1e41c4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e41c8:
    // 0x1e41c8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e41c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e41cc:
    // 0x1e41cc: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e41ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e41d0:
    // 0x1e41d0: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x1e41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e41d4:
    // 0x1e41d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e41d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e41d8:
    // 0x1e41d8: 0x0  nop
    ctx->pc = 0x1e41d8u;
    // NOP
label_1e41dc:
    // 0x1e41dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e41dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1e41e0:
    // 0x1e41e0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e41e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e41e4:
    // 0x1e41e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e41e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1e41e8:
    // 0x1e41e8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e41ec:
    // 0x1e41ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e41ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e41f0:
    // 0x1e41f0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e41f4:
    // 0x1e41f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e41f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e41f8:
    // 0x1e41f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1e41fc:
    // 0x1e41fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e41fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4200:
    // 0x1e4200: 0x0  nop
    ctx->pc = 0x1e4200u;
    // NOP
label_1e4204:
    // 0x1e4204: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4208:
    // 0x1e4208: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1e420c:
    if (ctx->pc == 0x1E420Cu) {
        ctx->pc = 0x1E4210u;
        goto label_1e4210;
    }
    ctx->pc = 0x1E4208u;
    {
        const bool branch_taken_0x1e4208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4208) {
            ctx->pc = 0x1E4220u;
            goto label_1e4220;
        }
    }
    ctx->pc = 0x1E4210u;
label_1e4210:
    // 0x1e4210: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e4214:
    // 0x1e4214: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1e4214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1e4218:
    // 0x1e4218: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e421c:
    if (ctx->pc == 0x1E421Cu) {
        ctx->pc = 0x1E4220u;
        goto label_1e4220;
    }
    ctx->pc = 0x1E4218u;
    {
        const bool branch_taken_0x1e4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4218) {
            ctx->pc = 0x1E4234u;
            goto label_1e4234;
        }
    }
    ctx->pc = 0x1E4220u;
label_1e4220:
    // 0x1e4220: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e4224:
    // 0x1e4224: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e4228:
    // 0x1e4228: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1e4228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1e422c:
    // 0x1e422c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e4230:
    // 0x1e4230: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1e4230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1e4234:
    // 0x1e4234: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e4234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e4238:
    // 0x1e4238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e423c:
    // 0x1e423c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4240:
    // 0x1e4240: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e4240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e4244:
    // 0x1e4244: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1e4244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1e4248:
    // 0x1e4248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e424c:
    // 0x1e424c: 0x0  nop
    ctx->pc = 0x1e424cu;
    // NOP
label_1e4250:
    // 0x1e4250: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4254:
    // 0x1e4254: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1e4258:
    if (ctx->pc == 0x1E4258u) {
        ctx->pc = 0x1E425Cu;
        goto label_1e425c;
    }
    ctx->pc = 0x1E4254u;
    {
        const bool branch_taken_0x1e4254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4254) {
            ctx->pc = 0x1E426Cu;
            goto label_1e426c;
        }
    }
    ctx->pc = 0x1E425Cu;
label_1e425c:
    // 0x1e425c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e425cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e4260:
    // 0x1e4260: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1e4260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1e4264:
    // 0x1e4264: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4268:
    if (ctx->pc == 0x1E4268u) {
        ctx->pc = 0x1E426Cu;
        goto label_1e426c;
    }
    ctx->pc = 0x1E4264u;
    {
        const bool branch_taken_0x1e4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4264) {
            ctx->pc = 0x1E4280u;
            goto label_1e4280;
        }
    }
    ctx->pc = 0x1E426Cu;
label_1e426c:
    // 0x1e426c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e426cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e4270:
    // 0x1e4270: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e4270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e4274:
    // 0x1e4274: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1e4274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1e4278:
    // 0x1e4278: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e4278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e427c:
    // 0x1e427c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1e427cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1e4280:
    // 0x1e4280: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e4280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e4284:
    // 0x1e4284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4288:
    // 0x1e4288: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e4288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e428c:
    // 0x1e428c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e428cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e4290:
    // 0x1e4290: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1e4290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1e4294:
    // 0x1e4294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4298:
    // 0x1e4298: 0x0  nop
    ctx->pc = 0x1e4298u;
    // NOP
label_1e429c:
    // 0x1e429c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e429cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e42a0:
    // 0x1e42a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1e42a4:
    if (ctx->pc == 0x1E42A4u) {
        ctx->pc = 0x1E42A8u;
        goto label_1e42a8;
    }
    ctx->pc = 0x1E42A0u;
    {
        const bool branch_taken_0x1e42a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e42a0) {
            ctx->pc = 0x1E42B8u;
            goto label_1e42b8;
        }
    }
    ctx->pc = 0x1E42A8u;
label_1e42a8:
    // 0x1e42a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e42a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e42ac:
    // 0x1e42ac: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x1e42acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1e42b0:
    // 0x1e42b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e42b4:
    if (ctx->pc == 0x1E42B4u) {
        ctx->pc = 0x1E42B8u;
        goto label_1e42b8;
    }
    ctx->pc = 0x1E42B0u;
    {
        const bool branch_taken_0x1e42b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e42b0) {
            ctx->pc = 0x1E42CCu;
            goto label_1e42cc;
        }
    }
    ctx->pc = 0x1E42B8u;
label_1e42b8:
    // 0x1e42b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e42b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e42bc:
    // 0x1e42bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e42bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1e42c0:
    // 0x1e42c0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x1e42c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1e42c4:
    // 0x1e42c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e42c8:
    // 0x1e42c8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1e42c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1e42cc:
    // 0x1e42cc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1e42ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e42d0:
    // 0x1e42d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e42d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e42d4:
    // 0x1e42d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e42d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e42d8:
    // 0x1e42d8: 0xc079934  jal         func_1E64D0
label_1e42dc:
    if (ctx->pc == 0x1E42DCu) {
        ctx->pc = 0x1E42E0u;
        goto label_1e42e0;
    }
    ctx->pc = 0x1E42D8u;
    SET_GPR_U32(ctx, 31, 0x1E42E0u);
    ctx->pc = 0x1E64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E64D0u, 0x1E42D8u, 0x1E42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42E0u;
label_1e42e0:
    // 0x1e42e0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1e42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e42e4:
    // 0x1e42e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e42e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e42e8:
    // 0x1e42e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e42e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e42ec:
    // 0x1e42ec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1e42ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1e42f0:
    // 0x1e42f0: 0xc079994  jal         func_1E6650
label_1e42f4:
    if (ctx->pc == 0x1E42F4u) {
        ctx->pc = 0x1E42F8u;
        goto label_1e42f8;
    }
    ctx->pc = 0x1E42F0u;
    SET_GPR_U32(ctx, 31, 0x1E42F8u);
    ctx->pc = 0x1E6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6650u, 0x1E42F0u, 0x1E42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42F8u;
label_1e42f8:
    // 0x1e42f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e42f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e42fc:
    // 0x1e42fc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e4300:
    // 0x1e4300: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e4300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e4304:
    // 0x1e4304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4308:
    // 0x1e4308: 0xc077fa0  jal         func_1DFE80
label_1e430c:
    if (ctx->pc == 0x1E430Cu) {
        ctx->pc = 0x1E4310u;
        goto label_1e4310;
    }
    ctx->pc = 0x1E4308u;
    SET_GPR_U32(ctx, 31, 0x1E4310u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E4308u, 0x1E4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4310u;
label_1e4310:
    // 0x1e4310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4314:
    // 0x1e4314: 0xc077f2c  jal         func_1DFCB0
label_1e4318:
    if (ctx->pc == 0x1E4318u) {
        ctx->pc = 0x1E431Cu;
        goto label_1e431c;
    }
    ctx->pc = 0x1E4314u;
    SET_GPR_U32(ctx, 31, 0x1E431Cu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E4314u, 0x1E431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E431Cu;
label_1e431c:
    // 0x1e431c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1e431cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4320:
    // 0x1e4320: 0x1440fe62  bnez        $v0, . + 4 + (-0x19E << 2)
label_1e4324:
    if (ctx->pc == 0x1E4324u) {
        ctx->pc = 0x1E4328u;
        goto label_1e4328;
    }
    ctx->pc = 0x1E4320u;
    {
        const bool branch_taken_0x1e4320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4320) {
            ctx->pc = 0x1E3CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3cac;
        }
    }
    ctx->pc = 0x1E4328u;
label_1e4328:
    // 0x1e4328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e432c:
    // 0x1e432c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e4330:
    // 0x1e4330: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e4330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1e4334:
    // 0x1e4334: 0xc077f1c  jal         func_1DFC70
label_1e4338:
    if (ctx->pc == 0x1E4338u) {
        ctx->pc = 0x1E433Cu;
        goto label_1e433c;
    }
    ctx->pc = 0x1E4334u;
    SET_GPR_U32(ctx, 31, 0x1E433Cu);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E4334u, 0x1E433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E433Cu;
label_1e433c:
    // 0x1e433c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e433cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4340:
    // 0x1e4340: 0x1440fe57  bnez        $v0, . + 4 + (-0x1A9 << 2)
label_1e4344:
    if (ctx->pc == 0x1E4344u) {
        ctx->pc = 0x1E4348u;
        goto label_1e4348;
    }
    ctx->pc = 0x1E4340u;
    {
        const bool branch_taken_0x1e4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4340) {
            ctx->pc = 0x1E3CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3ca0;
        }
    }
    ctx->pc = 0x1E4348u;
label_1e4348:
    // 0x1e4348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e434c:
    // 0x1e434c: 0xc1075d0  jal         func_41D740
label_1e4350:
    if (ctx->pc == 0x1E4350u) {
        ctx->pc = 0x1E4354u;
        goto label_1e4354;
    }
    ctx->pc = 0x1E434Cu;
    SET_GPR_U32(ctx, 31, 0x1E4354u);
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x1E434Cu, 0x1E4354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4354u;
label_1e4354:
    // 0x1e4354: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e4358:
    // 0x1e4358: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e435c:
    // 0x1e435c: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x1e435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_1e4360:
    // 0x1e4360: 0x40f809  jalr        $v0
label_1e4364:
    if (ctx->pc == 0x1E4364u) {
        ctx->pc = 0x1E4368u;
        goto label_1e4368;
    }
    ctx->pc = 0x1E4360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4368u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4360u, 0x1E4368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4368u;
label_1e4368:
    // 0x1e4368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e436c:
    // 0x1e436c: 0xc1074ac  jal         func_41D2B0
label_1e4370:
    if (ctx->pc == 0x1E4370u) {
        ctx->pc = 0x1E4374u;
        goto label_1e4374;
    }
    ctx->pc = 0x1E436Cu;
    SET_GPR_U32(ctx, 31, 0x1E4374u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x1E436Cu, 0x1E4374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4374u;
label_1e4374:
    // 0x1e4374: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1e4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e4378:
    // 0x1e4378: 0xc07925c  jal         func_1E4970
label_1e437c:
    if (ctx->pc == 0x1E437Cu) {
        ctx->pc = 0x1E4380u;
        goto label_1e4380;
    }
    ctx->pc = 0x1E4378u;
    SET_GPR_U32(ctx, 31, 0x1E4380u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E4378u, 0x1E4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4380u;
label_1e4380:
    // 0x1e4380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4384:
    // 0x1e4384: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e4388:
    if (ctx->pc == 0x1E4388u) {
        ctx->pc = 0x1E438Cu;
        goto label_1e438c;
    }
    ctx->pc = 0x1E4384u;
    {
        const bool branch_taken_0x1e4384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4384) {
            ctx->pc = 0x1E43CCu;
            goto label_1e43cc;
        }
    }
    ctx->pc = 0x1E438Cu;
label_1e438c:
    // 0x1e438c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e4390:
    // 0x1e4390: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1e4394:
    // 0x1e4394: 0xc0647a8  jal         func_191EA0
label_1e4398:
    if (ctx->pc == 0x1E4398u) {
        ctx->pc = 0x1E439Cu;
        goto label_1e439c;
    }
    ctx->pc = 0x1E4394u;
    SET_GPR_U32(ctx, 31, 0x1E439Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4394u, 0x1E439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E439Cu;
label_1e439c:
    // 0x1e439c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1e439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1e43a0:
    // 0x1e43a0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e43a4:
    // 0x1e43a4: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1e43a8:
    // 0x1e43a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e43a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e43ac:
    // 0x1e43ac: 0xc05612c  jal         func_1584B0
label_1e43b0:
    if (ctx->pc == 0x1E43B0u) {
        ctx->pc = 0x1E43B4u;
        goto label_1e43b4;
    }
    ctx->pc = 0x1E43ACu;
    SET_GPR_U32(ctx, 31, 0x1E43B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E43ACu, 0x1E43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43B4u;
label_1e43b4:
    // 0x1e43b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e43b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e43b8:
    // 0x1e43b8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1e43b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e43bc:
    // 0x1e43bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e43c0:
    // 0x1e43c0: 0xc08c8dc  jal         func_232370
label_1e43c4:
    if (ctx->pc == 0x1E43C4u) {
        ctx->pc = 0x1E43C8u;
        goto label_1e43c8;
    }
    ctx->pc = 0x1E43C0u;
    SET_GPR_U32(ctx, 31, 0x1E43C8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E43C0u, 0x1E43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43C8u;
label_1e43c8:
    // 0x1e43c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e43c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e43cc:
    // 0x1e43cc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1e43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1e43d0:
    // 0x1e43d0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1e43d4:
    // 0x1e43d4: 0xc05611c  jal         func_158470
label_1e43d8:
    if (ctx->pc == 0x1E43D8u) {
        ctx->pc = 0x1E43DCu;
        goto label_1e43dc;
    }
    ctx->pc = 0x1E43D4u;
    SET_GPR_U32(ctx, 31, 0x1E43DCu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E43D4u, 0x1E43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43DCu;
label_1e43dc:
    // 0x1e43dc: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1e43dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e43e0:
    // 0x1e43e0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1e43e4:
    if (ctx->pc == 0x1E43E4u) {
        ctx->pc = 0x1E43E8u;
        goto label_1e43e8;
    }
    ctx->pc = 0x1E43E0u;
    {
        const bool branch_taken_0x1e43e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e43e0) {
            ctx->pc = 0x1E438Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e438c;
        }
    }
    ctx->pc = 0x1E43E8u;
label_1e43e8:
    // 0x1e43e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e43e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e43ec:
    // 0x1e43ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e43ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e43f0:
    // 0x1e43f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e43f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e43f4:
    // 0x1e43f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e43f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e43f8:
    // 0x1e43f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e43f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e43fc:
    // 0x1e43fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e43fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4400:
    // 0x1e4400: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4404:
    // 0x1e4404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4408:
    // 0x1e4408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e440c:
    // 0x1e440c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4410:
    // 0x1e4410: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1e4410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1e4414:
    // 0x1e4414: 0x3e00008  jr          $ra
label_1e4418:
    if (ctx->pc == 0x1E4418u) {
        ctx->pc = 0x1E441Cu;
        goto label_1e441c;
    }
    ctx->pc = 0x1E4414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E441Cu;
label_1e441c:
    // 0x1e441c: 0x0  nop
    ctx->pc = 0x1e441cu;
    // NOP
    ctx->pc = 0x1e4420u;
}
