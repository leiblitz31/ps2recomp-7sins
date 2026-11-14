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

// Function: sub_003A3B60
// Address: 0x3a3b60 - 0x3a45d8
void sub_003A3B60_0x3a3b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3B60_0x3a3b60");
#endif

    switch (ctx->pc) {
        case 0x3a3b60u: goto label_3a3b60;
        case 0x3a3b64u: goto label_3a3b64;
        case 0x3a3b68u: goto label_3a3b68;
        case 0x3a3b6cu: goto label_3a3b6c;
        case 0x3a3b70u: goto label_3a3b70;
        case 0x3a3b74u: goto label_3a3b74;
        case 0x3a3b78u: goto label_3a3b78;
        case 0x3a3b7cu: goto label_3a3b7c;
        case 0x3a3b80u: goto label_3a3b80;
        case 0x3a3b84u: goto label_3a3b84;
        case 0x3a3b88u: goto label_3a3b88;
        case 0x3a3b8cu: goto label_3a3b8c;
        case 0x3a3b90u: goto label_3a3b90;
        case 0x3a3b94u: goto label_3a3b94;
        case 0x3a3b98u: goto label_3a3b98;
        case 0x3a3b9cu: goto label_3a3b9c;
        case 0x3a3ba0u: goto label_3a3ba0;
        case 0x3a3ba4u: goto label_3a3ba4;
        case 0x3a3ba8u: goto label_3a3ba8;
        case 0x3a3bacu: goto label_3a3bac;
        case 0x3a3bb0u: goto label_3a3bb0;
        case 0x3a3bb4u: goto label_3a3bb4;
        case 0x3a3bb8u: goto label_3a3bb8;
        case 0x3a3bbcu: goto label_3a3bbc;
        case 0x3a3bc0u: goto label_3a3bc0;
        case 0x3a3bc4u: goto label_3a3bc4;
        case 0x3a3bc8u: goto label_3a3bc8;
        case 0x3a3bccu: goto label_3a3bcc;
        case 0x3a3bd0u: goto label_3a3bd0;
        case 0x3a3bd4u: goto label_3a3bd4;
        case 0x3a3bd8u: goto label_3a3bd8;
        case 0x3a3bdcu: goto label_3a3bdc;
        case 0x3a3be0u: goto label_3a3be0;
        case 0x3a3be4u: goto label_3a3be4;
        case 0x3a3be8u: goto label_3a3be8;
        case 0x3a3becu: goto label_3a3bec;
        case 0x3a3bf0u: goto label_3a3bf0;
        case 0x3a3bf4u: goto label_3a3bf4;
        case 0x3a3bf8u: goto label_3a3bf8;
        case 0x3a3bfcu: goto label_3a3bfc;
        case 0x3a3c00u: goto label_3a3c00;
        case 0x3a3c04u: goto label_3a3c04;
        case 0x3a3c08u: goto label_3a3c08;
        case 0x3a3c0cu: goto label_3a3c0c;
        case 0x3a3c10u: goto label_3a3c10;
        case 0x3a3c14u: goto label_3a3c14;
        case 0x3a3c18u: goto label_3a3c18;
        case 0x3a3c1cu: goto label_3a3c1c;
        case 0x3a3c20u: goto label_3a3c20;
        case 0x3a3c24u: goto label_3a3c24;
        case 0x3a3c28u: goto label_3a3c28;
        case 0x3a3c2cu: goto label_3a3c2c;
        case 0x3a3c30u: goto label_3a3c30;
        case 0x3a3c34u: goto label_3a3c34;
        case 0x3a3c38u: goto label_3a3c38;
        case 0x3a3c3cu: goto label_3a3c3c;
        case 0x3a3c40u: goto label_3a3c40;
        case 0x3a3c44u: goto label_3a3c44;
        case 0x3a3c48u: goto label_3a3c48;
        case 0x3a3c4cu: goto label_3a3c4c;
        case 0x3a3c50u: goto label_3a3c50;
        case 0x3a3c54u: goto label_3a3c54;
        case 0x3a3c58u: goto label_3a3c58;
        case 0x3a3c5cu: goto label_3a3c5c;
        case 0x3a3c60u: goto label_3a3c60;
        case 0x3a3c64u: goto label_3a3c64;
        case 0x3a3c68u: goto label_3a3c68;
        case 0x3a3c6cu: goto label_3a3c6c;
        case 0x3a3c70u: goto label_3a3c70;
        case 0x3a3c74u: goto label_3a3c74;
        case 0x3a3c78u: goto label_3a3c78;
        case 0x3a3c7cu: goto label_3a3c7c;
        case 0x3a3c80u: goto label_3a3c80;
        case 0x3a3c84u: goto label_3a3c84;
        case 0x3a3c88u: goto label_3a3c88;
        case 0x3a3c8cu: goto label_3a3c8c;
        case 0x3a3c90u: goto label_3a3c90;
        case 0x3a3c94u: goto label_3a3c94;
        case 0x3a3c98u: goto label_3a3c98;
        case 0x3a3c9cu: goto label_3a3c9c;
        case 0x3a3ca0u: goto label_3a3ca0;
        case 0x3a3ca4u: goto label_3a3ca4;
        case 0x3a3ca8u: goto label_3a3ca8;
        case 0x3a3cacu: goto label_3a3cac;
        case 0x3a3cb0u: goto label_3a3cb0;
        case 0x3a3cb4u: goto label_3a3cb4;
        case 0x3a3cb8u: goto label_3a3cb8;
        case 0x3a3cbcu: goto label_3a3cbc;
        case 0x3a3cc0u: goto label_3a3cc0;
        case 0x3a3cc4u: goto label_3a3cc4;
        case 0x3a3cc8u: goto label_3a3cc8;
        case 0x3a3cccu: goto label_3a3ccc;
        case 0x3a3cd0u: goto label_3a3cd0;
        case 0x3a3cd4u: goto label_3a3cd4;
        case 0x3a3cd8u: goto label_3a3cd8;
        case 0x3a3cdcu: goto label_3a3cdc;
        case 0x3a3ce0u: goto label_3a3ce0;
        case 0x3a3ce4u: goto label_3a3ce4;
        case 0x3a3ce8u: goto label_3a3ce8;
        case 0x3a3cecu: goto label_3a3cec;
        case 0x3a3cf0u: goto label_3a3cf0;
        case 0x3a3cf4u: goto label_3a3cf4;
        case 0x3a3cf8u: goto label_3a3cf8;
        case 0x3a3cfcu: goto label_3a3cfc;
        case 0x3a3d00u: goto label_3a3d00;
        case 0x3a3d04u: goto label_3a3d04;
        case 0x3a3d08u: goto label_3a3d08;
        case 0x3a3d0cu: goto label_3a3d0c;
        case 0x3a3d10u: goto label_3a3d10;
        case 0x3a3d14u: goto label_3a3d14;
        case 0x3a3d18u: goto label_3a3d18;
        case 0x3a3d1cu: goto label_3a3d1c;
        case 0x3a3d20u: goto label_3a3d20;
        case 0x3a3d24u: goto label_3a3d24;
        case 0x3a3d28u: goto label_3a3d28;
        case 0x3a3d2cu: goto label_3a3d2c;
        case 0x3a3d30u: goto label_3a3d30;
        case 0x3a3d34u: goto label_3a3d34;
        case 0x3a3d38u: goto label_3a3d38;
        case 0x3a3d3cu: goto label_3a3d3c;
        case 0x3a3d40u: goto label_3a3d40;
        case 0x3a3d44u: goto label_3a3d44;
        case 0x3a3d48u: goto label_3a3d48;
        case 0x3a3d4cu: goto label_3a3d4c;
        case 0x3a3d50u: goto label_3a3d50;
        case 0x3a3d54u: goto label_3a3d54;
        case 0x3a3d58u: goto label_3a3d58;
        case 0x3a3d5cu: goto label_3a3d5c;
        case 0x3a3d60u: goto label_3a3d60;
        case 0x3a3d64u: goto label_3a3d64;
        case 0x3a3d68u: goto label_3a3d68;
        case 0x3a3d6cu: goto label_3a3d6c;
        case 0x3a3d70u: goto label_3a3d70;
        case 0x3a3d74u: goto label_3a3d74;
        case 0x3a3d78u: goto label_3a3d78;
        case 0x3a3d7cu: goto label_3a3d7c;
        case 0x3a3d80u: goto label_3a3d80;
        case 0x3a3d84u: goto label_3a3d84;
        case 0x3a3d88u: goto label_3a3d88;
        case 0x3a3d8cu: goto label_3a3d8c;
        case 0x3a3d90u: goto label_3a3d90;
        case 0x3a3d94u: goto label_3a3d94;
        case 0x3a3d98u: goto label_3a3d98;
        case 0x3a3d9cu: goto label_3a3d9c;
        case 0x3a3da0u: goto label_3a3da0;
        case 0x3a3da4u: goto label_3a3da4;
        case 0x3a3da8u: goto label_3a3da8;
        case 0x3a3dacu: goto label_3a3dac;
        case 0x3a3db0u: goto label_3a3db0;
        case 0x3a3db4u: goto label_3a3db4;
        case 0x3a3db8u: goto label_3a3db8;
        case 0x3a3dbcu: goto label_3a3dbc;
        case 0x3a3dc0u: goto label_3a3dc0;
        case 0x3a3dc4u: goto label_3a3dc4;
        case 0x3a3dc8u: goto label_3a3dc8;
        case 0x3a3dccu: goto label_3a3dcc;
        case 0x3a3dd0u: goto label_3a3dd0;
        case 0x3a3dd4u: goto label_3a3dd4;
        case 0x3a3dd8u: goto label_3a3dd8;
        case 0x3a3ddcu: goto label_3a3ddc;
        case 0x3a3de0u: goto label_3a3de0;
        case 0x3a3de4u: goto label_3a3de4;
        case 0x3a3de8u: goto label_3a3de8;
        case 0x3a3decu: goto label_3a3dec;
        case 0x3a3df0u: goto label_3a3df0;
        case 0x3a3df4u: goto label_3a3df4;
        case 0x3a3df8u: goto label_3a3df8;
        case 0x3a3dfcu: goto label_3a3dfc;
        case 0x3a3e00u: goto label_3a3e00;
        case 0x3a3e04u: goto label_3a3e04;
        case 0x3a3e08u: goto label_3a3e08;
        case 0x3a3e0cu: goto label_3a3e0c;
        case 0x3a3e10u: goto label_3a3e10;
        case 0x3a3e14u: goto label_3a3e14;
        case 0x3a3e18u: goto label_3a3e18;
        case 0x3a3e1cu: goto label_3a3e1c;
        case 0x3a3e20u: goto label_3a3e20;
        case 0x3a3e24u: goto label_3a3e24;
        case 0x3a3e28u: goto label_3a3e28;
        case 0x3a3e2cu: goto label_3a3e2c;
        case 0x3a3e30u: goto label_3a3e30;
        case 0x3a3e34u: goto label_3a3e34;
        case 0x3a3e38u: goto label_3a3e38;
        case 0x3a3e3cu: goto label_3a3e3c;
        case 0x3a3e40u: goto label_3a3e40;
        case 0x3a3e44u: goto label_3a3e44;
        case 0x3a3e48u: goto label_3a3e48;
        case 0x3a3e4cu: goto label_3a3e4c;
        case 0x3a3e50u: goto label_3a3e50;
        case 0x3a3e54u: goto label_3a3e54;
        case 0x3a3e58u: goto label_3a3e58;
        case 0x3a3e5cu: goto label_3a3e5c;
        case 0x3a3e60u: goto label_3a3e60;
        case 0x3a3e64u: goto label_3a3e64;
        case 0x3a3e68u: goto label_3a3e68;
        case 0x3a3e6cu: goto label_3a3e6c;
        case 0x3a3e70u: goto label_3a3e70;
        case 0x3a3e74u: goto label_3a3e74;
        case 0x3a3e78u: goto label_3a3e78;
        case 0x3a3e7cu: goto label_3a3e7c;
        case 0x3a3e80u: goto label_3a3e80;
        case 0x3a3e84u: goto label_3a3e84;
        case 0x3a3e88u: goto label_3a3e88;
        case 0x3a3e8cu: goto label_3a3e8c;
        case 0x3a3e90u: goto label_3a3e90;
        case 0x3a3e94u: goto label_3a3e94;
        case 0x3a3e98u: goto label_3a3e98;
        case 0x3a3e9cu: goto label_3a3e9c;
        case 0x3a3ea0u: goto label_3a3ea0;
        case 0x3a3ea4u: goto label_3a3ea4;
        case 0x3a3ea8u: goto label_3a3ea8;
        case 0x3a3eacu: goto label_3a3eac;
        case 0x3a3eb0u: goto label_3a3eb0;
        case 0x3a3eb4u: goto label_3a3eb4;
        case 0x3a3eb8u: goto label_3a3eb8;
        case 0x3a3ebcu: goto label_3a3ebc;
        case 0x3a3ec0u: goto label_3a3ec0;
        case 0x3a3ec4u: goto label_3a3ec4;
        case 0x3a3ec8u: goto label_3a3ec8;
        case 0x3a3eccu: goto label_3a3ecc;
        case 0x3a3ed0u: goto label_3a3ed0;
        case 0x3a3ed4u: goto label_3a3ed4;
        case 0x3a3ed8u: goto label_3a3ed8;
        case 0x3a3edcu: goto label_3a3edc;
        case 0x3a3ee0u: goto label_3a3ee0;
        case 0x3a3ee4u: goto label_3a3ee4;
        case 0x3a3ee8u: goto label_3a3ee8;
        case 0x3a3eecu: goto label_3a3eec;
        case 0x3a3ef0u: goto label_3a3ef0;
        case 0x3a3ef4u: goto label_3a3ef4;
        case 0x3a3ef8u: goto label_3a3ef8;
        case 0x3a3efcu: goto label_3a3efc;
        case 0x3a3f00u: goto label_3a3f00;
        case 0x3a3f04u: goto label_3a3f04;
        case 0x3a3f08u: goto label_3a3f08;
        case 0x3a3f0cu: goto label_3a3f0c;
        case 0x3a3f10u: goto label_3a3f10;
        case 0x3a3f14u: goto label_3a3f14;
        case 0x3a3f18u: goto label_3a3f18;
        case 0x3a3f1cu: goto label_3a3f1c;
        case 0x3a3f20u: goto label_3a3f20;
        case 0x3a3f24u: goto label_3a3f24;
        case 0x3a3f28u: goto label_3a3f28;
        case 0x3a3f2cu: goto label_3a3f2c;
        case 0x3a3f30u: goto label_3a3f30;
        case 0x3a3f34u: goto label_3a3f34;
        case 0x3a3f38u: goto label_3a3f38;
        case 0x3a3f3cu: goto label_3a3f3c;
        case 0x3a3f40u: goto label_3a3f40;
        case 0x3a3f44u: goto label_3a3f44;
        case 0x3a3f48u: goto label_3a3f48;
        case 0x3a3f4cu: goto label_3a3f4c;
        case 0x3a3f50u: goto label_3a3f50;
        case 0x3a3f54u: goto label_3a3f54;
        case 0x3a3f58u: goto label_3a3f58;
        case 0x3a3f5cu: goto label_3a3f5c;
        case 0x3a3f60u: goto label_3a3f60;
        case 0x3a3f64u: goto label_3a3f64;
        case 0x3a3f68u: goto label_3a3f68;
        case 0x3a3f6cu: goto label_3a3f6c;
        case 0x3a3f70u: goto label_3a3f70;
        case 0x3a3f74u: goto label_3a3f74;
        case 0x3a3f78u: goto label_3a3f78;
        case 0x3a3f7cu: goto label_3a3f7c;
        case 0x3a3f80u: goto label_3a3f80;
        case 0x3a3f84u: goto label_3a3f84;
        case 0x3a3f88u: goto label_3a3f88;
        case 0x3a3f8cu: goto label_3a3f8c;
        case 0x3a3f90u: goto label_3a3f90;
        case 0x3a3f94u: goto label_3a3f94;
        case 0x3a3f98u: goto label_3a3f98;
        case 0x3a3f9cu: goto label_3a3f9c;
        case 0x3a3fa0u: goto label_3a3fa0;
        case 0x3a3fa4u: goto label_3a3fa4;
        case 0x3a3fa8u: goto label_3a3fa8;
        case 0x3a3facu: goto label_3a3fac;
        case 0x3a3fb0u: goto label_3a3fb0;
        case 0x3a3fb4u: goto label_3a3fb4;
        case 0x3a3fb8u: goto label_3a3fb8;
        case 0x3a3fbcu: goto label_3a3fbc;
        case 0x3a3fc0u: goto label_3a3fc0;
        case 0x3a3fc4u: goto label_3a3fc4;
        case 0x3a3fc8u: goto label_3a3fc8;
        case 0x3a3fccu: goto label_3a3fcc;
        case 0x3a3fd0u: goto label_3a3fd0;
        case 0x3a3fd4u: goto label_3a3fd4;
        case 0x3a3fd8u: goto label_3a3fd8;
        case 0x3a3fdcu: goto label_3a3fdc;
        case 0x3a3fe0u: goto label_3a3fe0;
        case 0x3a3fe4u: goto label_3a3fe4;
        case 0x3a3fe8u: goto label_3a3fe8;
        case 0x3a3fecu: goto label_3a3fec;
        case 0x3a3ff0u: goto label_3a3ff0;
        case 0x3a3ff4u: goto label_3a3ff4;
        case 0x3a3ff8u: goto label_3a3ff8;
        case 0x3a3ffcu: goto label_3a3ffc;
        case 0x3a4000u: goto label_3a4000;
        case 0x3a4004u: goto label_3a4004;
        case 0x3a4008u: goto label_3a4008;
        case 0x3a400cu: goto label_3a400c;
        case 0x3a4010u: goto label_3a4010;
        case 0x3a4014u: goto label_3a4014;
        case 0x3a4018u: goto label_3a4018;
        case 0x3a401cu: goto label_3a401c;
        case 0x3a4020u: goto label_3a4020;
        case 0x3a4024u: goto label_3a4024;
        case 0x3a4028u: goto label_3a4028;
        case 0x3a402cu: goto label_3a402c;
        case 0x3a4030u: goto label_3a4030;
        case 0x3a4034u: goto label_3a4034;
        case 0x3a4038u: goto label_3a4038;
        case 0x3a403cu: goto label_3a403c;
        case 0x3a4040u: goto label_3a4040;
        case 0x3a4044u: goto label_3a4044;
        case 0x3a4048u: goto label_3a4048;
        case 0x3a404cu: goto label_3a404c;
        case 0x3a4050u: goto label_3a4050;
        case 0x3a4054u: goto label_3a4054;
        case 0x3a4058u: goto label_3a4058;
        case 0x3a405cu: goto label_3a405c;
        case 0x3a4060u: goto label_3a4060;
        case 0x3a4064u: goto label_3a4064;
        case 0x3a4068u: goto label_3a4068;
        case 0x3a406cu: goto label_3a406c;
        case 0x3a4070u: goto label_3a4070;
        case 0x3a4074u: goto label_3a4074;
        case 0x3a4078u: goto label_3a4078;
        case 0x3a407cu: goto label_3a407c;
        case 0x3a4080u: goto label_3a4080;
        case 0x3a4084u: goto label_3a4084;
        case 0x3a4088u: goto label_3a4088;
        case 0x3a408cu: goto label_3a408c;
        case 0x3a4090u: goto label_3a4090;
        case 0x3a4094u: goto label_3a4094;
        case 0x3a4098u: goto label_3a4098;
        case 0x3a409cu: goto label_3a409c;
        case 0x3a40a0u: goto label_3a40a0;
        case 0x3a40a4u: goto label_3a40a4;
        case 0x3a40a8u: goto label_3a40a8;
        case 0x3a40acu: goto label_3a40ac;
        case 0x3a40b0u: goto label_3a40b0;
        case 0x3a40b4u: goto label_3a40b4;
        case 0x3a40b8u: goto label_3a40b8;
        case 0x3a40bcu: goto label_3a40bc;
        case 0x3a40c0u: goto label_3a40c0;
        case 0x3a40c4u: goto label_3a40c4;
        case 0x3a40c8u: goto label_3a40c8;
        case 0x3a40ccu: goto label_3a40cc;
        case 0x3a40d0u: goto label_3a40d0;
        case 0x3a40d4u: goto label_3a40d4;
        case 0x3a40d8u: goto label_3a40d8;
        case 0x3a40dcu: goto label_3a40dc;
        case 0x3a40e0u: goto label_3a40e0;
        case 0x3a40e4u: goto label_3a40e4;
        case 0x3a40e8u: goto label_3a40e8;
        case 0x3a40ecu: goto label_3a40ec;
        case 0x3a40f0u: goto label_3a40f0;
        case 0x3a40f4u: goto label_3a40f4;
        case 0x3a40f8u: goto label_3a40f8;
        case 0x3a40fcu: goto label_3a40fc;
        case 0x3a4100u: goto label_3a4100;
        case 0x3a4104u: goto label_3a4104;
        case 0x3a4108u: goto label_3a4108;
        case 0x3a410cu: goto label_3a410c;
        case 0x3a4110u: goto label_3a4110;
        case 0x3a4114u: goto label_3a4114;
        case 0x3a4118u: goto label_3a4118;
        case 0x3a411cu: goto label_3a411c;
        case 0x3a4120u: goto label_3a4120;
        case 0x3a4124u: goto label_3a4124;
        case 0x3a4128u: goto label_3a4128;
        case 0x3a412cu: goto label_3a412c;
        case 0x3a4130u: goto label_3a4130;
        case 0x3a4134u: goto label_3a4134;
        case 0x3a4138u: goto label_3a4138;
        case 0x3a413cu: goto label_3a413c;
        case 0x3a4140u: goto label_3a4140;
        case 0x3a4144u: goto label_3a4144;
        case 0x3a4148u: goto label_3a4148;
        case 0x3a414cu: goto label_3a414c;
        case 0x3a4150u: goto label_3a4150;
        case 0x3a4154u: goto label_3a4154;
        case 0x3a4158u: goto label_3a4158;
        case 0x3a415cu: goto label_3a415c;
        case 0x3a4160u: goto label_3a4160;
        case 0x3a4164u: goto label_3a4164;
        case 0x3a4168u: goto label_3a4168;
        case 0x3a416cu: goto label_3a416c;
        case 0x3a4170u: goto label_3a4170;
        case 0x3a4174u: goto label_3a4174;
        case 0x3a4178u: goto label_3a4178;
        case 0x3a417cu: goto label_3a417c;
        case 0x3a4180u: goto label_3a4180;
        case 0x3a4184u: goto label_3a4184;
        case 0x3a4188u: goto label_3a4188;
        case 0x3a418cu: goto label_3a418c;
        case 0x3a4190u: goto label_3a4190;
        case 0x3a4194u: goto label_3a4194;
        case 0x3a4198u: goto label_3a4198;
        case 0x3a419cu: goto label_3a419c;
        case 0x3a41a0u: goto label_3a41a0;
        case 0x3a41a4u: goto label_3a41a4;
        case 0x3a41a8u: goto label_3a41a8;
        case 0x3a41acu: goto label_3a41ac;
        case 0x3a41b0u: goto label_3a41b0;
        case 0x3a41b4u: goto label_3a41b4;
        case 0x3a41b8u: goto label_3a41b8;
        case 0x3a41bcu: goto label_3a41bc;
        case 0x3a41c0u: goto label_3a41c0;
        case 0x3a41c4u: goto label_3a41c4;
        case 0x3a41c8u: goto label_3a41c8;
        case 0x3a41ccu: goto label_3a41cc;
        case 0x3a41d0u: goto label_3a41d0;
        case 0x3a41d4u: goto label_3a41d4;
        case 0x3a41d8u: goto label_3a41d8;
        case 0x3a41dcu: goto label_3a41dc;
        case 0x3a41e0u: goto label_3a41e0;
        case 0x3a41e4u: goto label_3a41e4;
        case 0x3a41e8u: goto label_3a41e8;
        case 0x3a41ecu: goto label_3a41ec;
        case 0x3a41f0u: goto label_3a41f0;
        case 0x3a41f4u: goto label_3a41f4;
        case 0x3a41f8u: goto label_3a41f8;
        case 0x3a41fcu: goto label_3a41fc;
        case 0x3a4200u: goto label_3a4200;
        case 0x3a4204u: goto label_3a4204;
        case 0x3a4208u: goto label_3a4208;
        case 0x3a420cu: goto label_3a420c;
        case 0x3a4210u: goto label_3a4210;
        case 0x3a4214u: goto label_3a4214;
        case 0x3a4218u: goto label_3a4218;
        case 0x3a421cu: goto label_3a421c;
        case 0x3a4220u: goto label_3a4220;
        case 0x3a4224u: goto label_3a4224;
        case 0x3a4228u: goto label_3a4228;
        case 0x3a422cu: goto label_3a422c;
        case 0x3a4230u: goto label_3a4230;
        case 0x3a4234u: goto label_3a4234;
        case 0x3a4238u: goto label_3a4238;
        case 0x3a423cu: goto label_3a423c;
        case 0x3a4240u: goto label_3a4240;
        case 0x3a4244u: goto label_3a4244;
        case 0x3a4248u: goto label_3a4248;
        case 0x3a424cu: goto label_3a424c;
        case 0x3a4250u: goto label_3a4250;
        case 0x3a4254u: goto label_3a4254;
        case 0x3a4258u: goto label_3a4258;
        case 0x3a425cu: goto label_3a425c;
        case 0x3a4260u: goto label_3a4260;
        case 0x3a4264u: goto label_3a4264;
        case 0x3a4268u: goto label_3a4268;
        case 0x3a426cu: goto label_3a426c;
        case 0x3a4270u: goto label_3a4270;
        case 0x3a4274u: goto label_3a4274;
        case 0x3a4278u: goto label_3a4278;
        case 0x3a427cu: goto label_3a427c;
        case 0x3a4280u: goto label_3a4280;
        case 0x3a4284u: goto label_3a4284;
        case 0x3a4288u: goto label_3a4288;
        case 0x3a428cu: goto label_3a428c;
        case 0x3a4290u: goto label_3a4290;
        case 0x3a4294u: goto label_3a4294;
        case 0x3a4298u: goto label_3a4298;
        case 0x3a429cu: goto label_3a429c;
        case 0x3a42a0u: goto label_3a42a0;
        case 0x3a42a4u: goto label_3a42a4;
        case 0x3a42a8u: goto label_3a42a8;
        case 0x3a42acu: goto label_3a42ac;
        case 0x3a42b0u: goto label_3a42b0;
        case 0x3a42b4u: goto label_3a42b4;
        case 0x3a42b8u: goto label_3a42b8;
        case 0x3a42bcu: goto label_3a42bc;
        case 0x3a42c0u: goto label_3a42c0;
        case 0x3a42c4u: goto label_3a42c4;
        case 0x3a42c8u: goto label_3a42c8;
        case 0x3a42ccu: goto label_3a42cc;
        case 0x3a42d0u: goto label_3a42d0;
        case 0x3a42d4u: goto label_3a42d4;
        case 0x3a42d8u: goto label_3a42d8;
        case 0x3a42dcu: goto label_3a42dc;
        case 0x3a42e0u: goto label_3a42e0;
        case 0x3a42e4u: goto label_3a42e4;
        case 0x3a42e8u: goto label_3a42e8;
        case 0x3a42ecu: goto label_3a42ec;
        case 0x3a42f0u: goto label_3a42f0;
        case 0x3a42f4u: goto label_3a42f4;
        case 0x3a42f8u: goto label_3a42f8;
        case 0x3a42fcu: goto label_3a42fc;
        case 0x3a4300u: goto label_3a4300;
        case 0x3a4304u: goto label_3a4304;
        case 0x3a4308u: goto label_3a4308;
        case 0x3a430cu: goto label_3a430c;
        case 0x3a4310u: goto label_3a4310;
        case 0x3a4314u: goto label_3a4314;
        case 0x3a4318u: goto label_3a4318;
        case 0x3a431cu: goto label_3a431c;
        case 0x3a4320u: goto label_3a4320;
        case 0x3a4324u: goto label_3a4324;
        case 0x3a4328u: goto label_3a4328;
        case 0x3a432cu: goto label_3a432c;
        case 0x3a4330u: goto label_3a4330;
        case 0x3a4334u: goto label_3a4334;
        case 0x3a4338u: goto label_3a4338;
        case 0x3a433cu: goto label_3a433c;
        case 0x3a4340u: goto label_3a4340;
        case 0x3a4344u: goto label_3a4344;
        case 0x3a4348u: goto label_3a4348;
        case 0x3a434cu: goto label_3a434c;
        case 0x3a4350u: goto label_3a4350;
        case 0x3a4354u: goto label_3a4354;
        case 0x3a4358u: goto label_3a4358;
        case 0x3a435cu: goto label_3a435c;
        case 0x3a4360u: goto label_3a4360;
        case 0x3a4364u: goto label_3a4364;
        case 0x3a4368u: goto label_3a4368;
        case 0x3a436cu: goto label_3a436c;
        case 0x3a4370u: goto label_3a4370;
        case 0x3a4374u: goto label_3a4374;
        case 0x3a4378u: goto label_3a4378;
        case 0x3a437cu: goto label_3a437c;
        case 0x3a4380u: goto label_3a4380;
        case 0x3a4384u: goto label_3a4384;
        case 0x3a4388u: goto label_3a4388;
        case 0x3a438cu: goto label_3a438c;
        case 0x3a4390u: goto label_3a4390;
        case 0x3a4394u: goto label_3a4394;
        case 0x3a4398u: goto label_3a4398;
        case 0x3a439cu: goto label_3a439c;
        case 0x3a43a0u: goto label_3a43a0;
        case 0x3a43a4u: goto label_3a43a4;
        case 0x3a43a8u: goto label_3a43a8;
        case 0x3a43acu: goto label_3a43ac;
        case 0x3a43b0u: goto label_3a43b0;
        case 0x3a43b4u: goto label_3a43b4;
        case 0x3a43b8u: goto label_3a43b8;
        case 0x3a43bcu: goto label_3a43bc;
        case 0x3a43c0u: goto label_3a43c0;
        case 0x3a43c4u: goto label_3a43c4;
        case 0x3a43c8u: goto label_3a43c8;
        case 0x3a43ccu: goto label_3a43cc;
        case 0x3a43d0u: goto label_3a43d0;
        case 0x3a43d4u: goto label_3a43d4;
        case 0x3a43d8u: goto label_3a43d8;
        case 0x3a43dcu: goto label_3a43dc;
        case 0x3a43e0u: goto label_3a43e0;
        case 0x3a43e4u: goto label_3a43e4;
        case 0x3a43e8u: goto label_3a43e8;
        case 0x3a43ecu: goto label_3a43ec;
        case 0x3a43f0u: goto label_3a43f0;
        case 0x3a43f4u: goto label_3a43f4;
        case 0x3a43f8u: goto label_3a43f8;
        case 0x3a43fcu: goto label_3a43fc;
        case 0x3a4400u: goto label_3a4400;
        case 0x3a4404u: goto label_3a4404;
        case 0x3a4408u: goto label_3a4408;
        case 0x3a440cu: goto label_3a440c;
        case 0x3a4410u: goto label_3a4410;
        case 0x3a4414u: goto label_3a4414;
        case 0x3a4418u: goto label_3a4418;
        case 0x3a441cu: goto label_3a441c;
        case 0x3a4420u: goto label_3a4420;
        case 0x3a4424u: goto label_3a4424;
        case 0x3a4428u: goto label_3a4428;
        case 0x3a442cu: goto label_3a442c;
        case 0x3a4430u: goto label_3a4430;
        case 0x3a4434u: goto label_3a4434;
        case 0x3a4438u: goto label_3a4438;
        case 0x3a443cu: goto label_3a443c;
        case 0x3a4440u: goto label_3a4440;
        case 0x3a4444u: goto label_3a4444;
        case 0x3a4448u: goto label_3a4448;
        case 0x3a444cu: goto label_3a444c;
        case 0x3a4450u: goto label_3a4450;
        case 0x3a4454u: goto label_3a4454;
        case 0x3a4458u: goto label_3a4458;
        case 0x3a445cu: goto label_3a445c;
        case 0x3a4460u: goto label_3a4460;
        case 0x3a4464u: goto label_3a4464;
        case 0x3a4468u: goto label_3a4468;
        case 0x3a446cu: goto label_3a446c;
        case 0x3a4470u: goto label_3a4470;
        case 0x3a4474u: goto label_3a4474;
        case 0x3a4478u: goto label_3a4478;
        case 0x3a447cu: goto label_3a447c;
        case 0x3a4480u: goto label_3a4480;
        case 0x3a4484u: goto label_3a4484;
        case 0x3a4488u: goto label_3a4488;
        case 0x3a448cu: goto label_3a448c;
        case 0x3a4490u: goto label_3a4490;
        case 0x3a4494u: goto label_3a4494;
        case 0x3a4498u: goto label_3a4498;
        case 0x3a449cu: goto label_3a449c;
        case 0x3a44a0u: goto label_3a44a0;
        case 0x3a44a4u: goto label_3a44a4;
        case 0x3a44a8u: goto label_3a44a8;
        case 0x3a44acu: goto label_3a44ac;
        case 0x3a44b0u: goto label_3a44b0;
        case 0x3a44b4u: goto label_3a44b4;
        case 0x3a44b8u: goto label_3a44b8;
        case 0x3a44bcu: goto label_3a44bc;
        case 0x3a44c0u: goto label_3a44c0;
        case 0x3a44c4u: goto label_3a44c4;
        case 0x3a44c8u: goto label_3a44c8;
        case 0x3a44ccu: goto label_3a44cc;
        case 0x3a44d0u: goto label_3a44d0;
        case 0x3a44d4u: goto label_3a44d4;
        case 0x3a44d8u: goto label_3a44d8;
        case 0x3a44dcu: goto label_3a44dc;
        case 0x3a44e0u: goto label_3a44e0;
        case 0x3a44e4u: goto label_3a44e4;
        case 0x3a44e8u: goto label_3a44e8;
        case 0x3a44ecu: goto label_3a44ec;
        case 0x3a44f0u: goto label_3a44f0;
        case 0x3a44f4u: goto label_3a44f4;
        case 0x3a44f8u: goto label_3a44f8;
        case 0x3a44fcu: goto label_3a44fc;
        case 0x3a4500u: goto label_3a4500;
        case 0x3a4504u: goto label_3a4504;
        case 0x3a4508u: goto label_3a4508;
        case 0x3a450cu: goto label_3a450c;
        case 0x3a4510u: goto label_3a4510;
        case 0x3a4514u: goto label_3a4514;
        case 0x3a4518u: goto label_3a4518;
        case 0x3a451cu: goto label_3a451c;
        case 0x3a4520u: goto label_3a4520;
        case 0x3a4524u: goto label_3a4524;
        case 0x3a4528u: goto label_3a4528;
        case 0x3a452cu: goto label_3a452c;
        case 0x3a4530u: goto label_3a4530;
        case 0x3a4534u: goto label_3a4534;
        case 0x3a4538u: goto label_3a4538;
        case 0x3a453cu: goto label_3a453c;
        case 0x3a4540u: goto label_3a4540;
        case 0x3a4544u: goto label_3a4544;
        case 0x3a4548u: goto label_3a4548;
        case 0x3a454cu: goto label_3a454c;
        case 0x3a4550u: goto label_3a4550;
        case 0x3a4554u: goto label_3a4554;
        case 0x3a4558u: goto label_3a4558;
        case 0x3a455cu: goto label_3a455c;
        case 0x3a4560u: goto label_3a4560;
        case 0x3a4564u: goto label_3a4564;
        case 0x3a4568u: goto label_3a4568;
        case 0x3a456cu: goto label_3a456c;
        case 0x3a4570u: goto label_3a4570;
        case 0x3a4574u: goto label_3a4574;
        case 0x3a4578u: goto label_3a4578;
        case 0x3a457cu: goto label_3a457c;
        case 0x3a4580u: goto label_3a4580;
        case 0x3a4584u: goto label_3a4584;
        case 0x3a4588u: goto label_3a4588;
        case 0x3a458cu: goto label_3a458c;
        case 0x3a4590u: goto label_3a4590;
        case 0x3a4594u: goto label_3a4594;
        case 0x3a4598u: goto label_3a4598;
        case 0x3a459cu: goto label_3a459c;
        case 0x3a45a0u: goto label_3a45a0;
        case 0x3a45a4u: goto label_3a45a4;
        case 0x3a45a8u: goto label_3a45a8;
        case 0x3a45acu: goto label_3a45ac;
        case 0x3a45b0u: goto label_3a45b0;
        case 0x3a45b4u: goto label_3a45b4;
        case 0x3a45b8u: goto label_3a45b8;
        case 0x3a45bcu: goto label_3a45bc;
        case 0x3a45c0u: goto label_3a45c0;
        case 0x3a45c4u: goto label_3a45c4;
        case 0x3a45c8u: goto label_3a45c8;
        case 0x3a45ccu: goto label_3a45cc;
        case 0x3a45d0u: goto label_3a45d0;
        case 0x3a45d4u: goto label_3a45d4;
        default: break;
    }

    ctx->pc = 0x3a3b60u;

label_3a3b60:
    // 0x3a3b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a3b64:
    // 0x3a3b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a3b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a3b68:
    // 0x3a3b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3b6c:
    // 0x3a3b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3b70:
    // 0x3a3b70: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a3b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3a3b74:
    // 0x3a3b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a3b78:
    // 0x3a3b78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a3b7c:
    if (ctx->pc == 0x3A3B7Cu) {
        ctx->pc = 0x3A3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B78u;
        // 0x3a3b7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3B80u;
        goto label_3a3b80;
    }
    ctx->pc = 0x3A3B78u;
    {
        const bool branch_taken_0x3a3b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B78u;
        // 0x3a3b7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b78) {
            ctx->pc = 0x3A3B94u;
            goto label_3a3b94;
        }
    }
    ctx->pc = 0x3A3B80u;
label_3a3b80:
    // 0x3a3b80: 0xc4ad0054  lwc1        $f13, 0x54($a1)
    ctx->pc = 0x3a3b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a3b84:
    // 0x3a3b84: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x3a3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a3b88:
    // 0x3a3b88: 0xc0e85d0  jal         func_3A1740
label_3a3b8c:
    if (ctx->pc == 0x3A3B8Cu) {
        ctx->pc = 0x3A3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B88u;
        // 0x3a3b8c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3B90u;
        goto label_3a3b90;
    }
    ctx->pc = 0x3A3B88u;
    SET_GPR_U32(ctx, 31, 0x3A3B90u);
    ctx->pc = 0x3A3B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B88u;
    // 0x3a3b8c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1740u, 0x3A3B88u, 0x3A3B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B90u;
label_3a3b90:
    // 0x3a3b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a3b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3b94:
    // 0x3a3b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3b98:
    // 0x3a3b98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a3b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3b9c:
    // 0x3a3b9c: 0x3e00008  jr          $ra
label_3a3ba0:
    if (ctx->pc == 0x3A3BA0u) {
        ctx->pc = 0x3A3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B9Cu;
        // 0x3a3ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BA4u;
        goto label_3a3ba4;
    }
    ctx->pc = 0x3A3B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B9Cu;
        // 0x3a3ba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3BA4u;
label_3a3ba4:
    // 0x3a3ba4: 0x0  nop
    ctx->pc = 0x3a3ba4u;
    // NOP
label_3a3ba8:
    // 0x3a3ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a3bac:
    // 0x3a3bac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a3bb0:
    // 0x3a3bb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a3bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a3bb4:
    // 0x3a3bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a3bb8:
    // 0x3a3bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3bbc:
    // 0x3a3bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3bc0:
    // 0x3a3bc0: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3a3bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3a3bc4:
    // 0x3a3bc4: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x3a3bc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_3a3bc8:
    // 0x3a3bc8: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x3a3bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_3a3bcc:
    // 0x3a3bcc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3a3bd0:
    if (ctx->pc == 0x3A3BD0u) {
        ctx->pc = 0x3A3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BCCu;
        // 0x3a3bd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BD4u;
        goto label_3a3bd4;
    }
    ctx->pc = 0x3A3BCCu;
    {
        const bool branch_taken_0x3a3bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BCCu;
        // 0x3a3bd0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3bcc) {
            ctx->pc = 0x3A3C00u;
            goto label_3a3c00;
        }
    }
    ctx->pc = 0x3A3BD4u;
label_3a3bd4:
    // 0x3a3bd4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a3bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3a3bd8:
    // 0x3a3bd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a3bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a3bdc:
    // 0x3a3bdc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3a3be0:
    if (ctx->pc == 0x3A3BE0u) {
        ctx->pc = 0x3A3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BDCu;
        // 0x3a3be0: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BE4u;
        goto label_3a3be4;
    }
    ctx->pc = 0x3A3BDCu;
    {
        const bool branch_taken_0x3a3bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3bdc) {
            ctx->pc = 0x3A3BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3BDCu;
            // 0x3a3be0: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3BF8u;
            goto label_3a3bf8;
        }
    }
    ctx->pc = 0x3A3BE4u;
label_3a3be4:
    // 0x3a3be4: 0xc4ad0054  lwc1        $f13, 0x54($a1)
    ctx->pc = 0x3a3be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a3be8:
    // 0x3a3be8: 0xc4ac0050  lwc1        $f12, 0x50($a1)
    ctx->pc = 0x3a3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a3bec:
    // 0x3a3bec: 0xc0e85d0  jal         func_3A1740
label_3a3bf0:
    if (ctx->pc == 0x3A3BF0u) {
        ctx->pc = 0x3A3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BECu;
        // 0x3a3bf0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BF4u;
        goto label_3a3bf4;
    }
    ctx->pc = 0x3A3BECu;
    SET_GPR_U32(ctx, 31, 0x3A3BF4u);
    ctx->pc = 0x3A3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3BECu;
    // 0x3a3bf0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1740u, 0x3A3BECu, 0x3A3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3BF4u;
label_3a3bf4:
    // 0x3a3bf4: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x3a3bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_3a3bf8:
    // 0x3a3bf8: 0xa602003c  sh          $v0, 0x3C($s0)
    ctx->pc = 0x3a3bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
label_3a3bfc:
    // 0x3a3bfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a3bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3c00:
    // 0x3a3c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3c04:
    // 0x3a3c04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a3c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3c08:
    // 0x3a3c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3c0c:
    // 0x3a3c0c: 0x3e00008  jr          $ra
label_3a3c10:
    if (ctx->pc == 0x3A3C10u) {
        ctx->pc = 0x3A3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C0Cu;
        // 0x3a3c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C14u;
        goto label_3a3c14;
    }
    ctx->pc = 0x3A3C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C0Cu;
        // 0x3a3c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3C14u;
label_3a3c14:
    // 0x3a3c14: 0x0  nop
    ctx->pc = 0x3a3c14u;
    // NOP
label_3a3c18:
    // 0x3a3c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a3c1c:
    // 0x3a3c1c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a3c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3c20:
    // 0x3a3c20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a3c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a3c24:
    // 0x3a3c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3c28:
    // 0x3a3c28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a3c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3c2c:
    // 0x3a3c2c: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x3a3c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_3a3c30:
    // 0x3a3c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3c34:
    // 0x3a3c34: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x3a3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_3a3c38:
    // 0x3a3c38: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x3a3c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3a3c3c:
    // 0x3a3c3c: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_3a3c40:
    if (ctx->pc == 0x3A3C40u) {
        ctx->pc = 0x3A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C3Cu;
        // 0x3a3c40: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C44u;
        goto label_3a3c44;
    }
    ctx->pc = 0x3A3C3Cu;
    {
        const bool branch_taken_0x3a3c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C3Cu;
        // 0x3a3c40: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c3c) {
            ctx->pc = 0x3A3C7Cu;
            goto label_3a3c7c;
        }
    }
    ctx->pc = 0x3A3C44u;
label_3a3c44:
    // 0x3a3c44: 0x8f82bd7c  lw          $v0, -0x4284($gp)
    ctx->pc = 0x3a3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950268)));
label_3a3c48:
    // 0x3a3c48: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x3a3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_3a3c4c:
    // 0x3a3c4c: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x3a3c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3a3c50:
    // 0x3a3c50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a3c54:
    // 0x3a3c54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3a3c58:
    if (ctx->pc == 0x3A3C58u) {
        ctx->pc = 0x3A3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C54u;
        // 0x3a3c58: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C5Cu;
        goto label_3a3c5c;
    }
    ctx->pc = 0x3A3C54u;
    {
        const bool branch_taken_0x3a3c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C54u;
        // 0x3a3c58: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c54) {
            ctx->pc = 0x3A3C70u;
            goto label_3a3c70;
        }
    }
    ctx->pc = 0x3A3C5Cu;
label_3a3c5c:
    // 0x3a3c5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a3c60:
    // 0x3a3c60: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3a3c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3c64:
    // 0x3a3c64: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_3a3c68:
    if (ctx->pc == 0x3A3C68u) {
        ctx->pc = 0x3A3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C64u;
        // 0x3a3c68: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C6Cu;
        goto label_3a3c6c;
    }
    ctx->pc = 0x3A3C64u;
    {
        const bool branch_taken_0x3a3c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C64u;
        // 0x3a3c68: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c64) {
            ctx->pc = 0x3A3CBCu;
            goto label_3a3cbc;
        }
    }
    ctx->pc = 0x3A3C6Cu;
label_3a3c6c:
    // 0x3a3c6c: 0x0  nop
    ctx->pc = 0x3a3c6cu;
    // NOP
label_3a3c70:
    // 0x3a3c70: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3a3c70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3c74:
    // 0x3a3c74: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a3c78:
    if (ctx->pc == 0x3A3C78u) {
        ctx->pc = 0x3A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C74u;
        // 0x3a3c78: 0xe62021  addu        $a0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C7Cu;
        goto label_3a3c7c;
    }
    ctx->pc = 0x3A3C74u;
    {
        const bool branch_taken_0x3a3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C74u;
        // 0x3a3c78: 0xe62021  addu        $a0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c74) {
            ctx->pc = 0x3A3CB4u;
            goto label_3a3cb4;
        }
    }
    ctx->pc = 0x3A3C7Cu;
label_3a3c7c:
    // 0x3a3c7c: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
label_3a3c80:
    // 0x3a3c80: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x3a3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_3a3c84:
    // 0x3a3c84: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x3a3c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a3c88:
    // 0x3a3c88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a3c8c:
    // 0x3a3c8c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3a3c90:
    if (ctx->pc == 0x3A3C90u) {
        ctx->pc = 0x3A3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C8Cu;
        // 0x3a3c90: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C94u;
        goto label_3a3c94;
    }
    ctx->pc = 0x3A3C8Cu;
    {
        const bool branch_taken_0x3a3c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C8Cu;
        // 0x3a3c90: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c8c) {
            ctx->pc = 0x3A3CACu;
            goto label_3a3cac;
        }
    }
    ctx->pc = 0x3A3C94u;
label_3a3c94:
    // 0x3a3c94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a3c98:
    // 0x3a3c98: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3a3c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3c9c:
    // 0x3a3c9c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3a3ca0:
    if (ctx->pc == 0x3A3CA0u) {
        ctx->pc = 0x3A3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C9Cu;
        // 0x3a3ca0: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3CA4u;
        goto label_3a3ca4;
    }
    ctx->pc = 0x3A3C9Cu;
    {
        const bool branch_taken_0x3a3c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a3c9c) {
            ctx->pc = 0x3A3CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3C9Cu;
            // 0x3a3ca0: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3CB0u;
            goto label_3a3cb0;
        }
    }
    ctx->pc = 0x3A3CA4u;
label_3a3ca4:
    // 0x3a3ca4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a3ca8:
    if (ctx->pc == 0x3A3CA8u) {
        ctx->pc = 0x3A3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CA4u;
        // 0x3a3ca8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3CACu;
        goto label_3a3cac;
    }
    ctx->pc = 0x3A3CA4u;
    {
        const bool branch_taken_0x3a3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CA4u;
        // 0x3a3ca8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ca4) {
            ctx->pc = 0x3A3CBCu;
            goto label_3a3cbc;
        }
    }
    ctx->pc = 0x3A3CACu;
label_3a3cac:
    // 0x3a3cac: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3a3cacu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3cb0:
    // 0x3a3cb0: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x3a3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3a3cb4:
    // 0x3a3cb4: 0xc0e7eec  jal         func_39FBB0
label_3a3cb8:
    if (ctx->pc == 0x3A3CB8u) {
        ctx->pc = 0x3A3CBCu;
        goto label_3a3cbc;
    }
    ctx->pc = 0x3A3CB4u;
    SET_GPR_U32(ctx, 31, 0x3A3CBCu);
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A3CB4u, 0x3A3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3CBCu;
label_3a3cbc:
    // 0x3a3cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a3cc0:
    // 0x3a3cc0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3a3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3a3cc4:
    // 0x3a3cc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a3cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3cc8:
    // 0x3a3cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3ccc:
    // 0x3a3ccc: 0x3e00008  jr          $ra
label_3a3cd0:
    if (ctx->pc == 0x3A3CD0u) {
        ctx->pc = 0x3A3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CCCu;
        // 0x3a3cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3CD4u;
        goto label_3a3cd4;
    }
    ctx->pc = 0x3A3CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CCCu;
        // 0x3a3cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3CD4u;
label_3a3cd4:
    // 0x3a3cd4: 0x0  nop
    ctx->pc = 0x3a3cd4u;
    // NOP
label_3a3cd8:
    // 0x3a3cd8: 0x3e00008  jr          $ra
label_3a3cdc:
    if (ctx->pc == 0x3A3CDCu) {
        ctx->pc = 0x3A3CE0u;
        goto label_3a3ce0;
    }
    ctx->pc = 0x3A3CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3CE0u;
label_3a3ce0:
    // 0x3a3ce0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a3ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3ce4:
    // 0x3a3ce4: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x3a3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3a3ce8:
    // 0x3a3ce8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3a3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3a3cec:
    // 0x3a3cec: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x3a3cecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a3cf0:
    // 0x3a3cf0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3a3cf4:
    if (ctx->pc == 0x3A3CF4u) {
        ctx->pc = 0x3A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CF0u;
        // 0x3a3cf4: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3CF8u;
        goto label_3a3cf8;
    }
    ctx->pc = 0x3A3CF0u;
    {
        const bool branch_taken_0x3a3cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CF0u;
        // 0x3a3cf4: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3cf0) {
            ctx->pc = 0x3A3D10u;
            goto label_3a3d10;
        }
    }
    ctx->pc = 0x3A3CF8u;
label_3a3cf8:
    // 0x3a3cf8: 0x24c2004c  addiu       $v0, $a2, 0x4C
    ctx->pc = 0x3a3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 76));
label_3a3cfc:
    // 0x3a3cfc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3a3cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3d00:
    // 0x3a3d00: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3a3d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3d04:
    // 0x3a3d04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a3d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a3d08:
    // 0x3a3d08: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a3d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3a3d0c:
    // 0x3a3d0c: 0x0  nop
    ctx->pc = 0x3a3d0cu;
    // NOP
label_3a3d10:
    // 0x3a3d10: 0x3e00008  jr          $ra
label_3a3d14:
    if (ctx->pc == 0x3A3D14u) {
        ctx->pc = 0x3A3D18u;
        goto label_3a3d18;
    }
    ctx->pc = 0x3A3D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3D18u;
label_3a3d18:
    // 0x3a3d18: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3a3d1c:
    // 0x3a3d1c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x3a3d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3a3d20:
    // 0x3a3d20: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3a3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_3a3d24:
    // 0x3a3d24: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x3a3d24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_3a3d28:
    // 0x3a3d28: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3a3d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3a3d2c:
    // 0x3a3d2c: 0x3e00008  jr          $ra
label_3a3d30:
    if (ctx->pc == 0x3A3D30u) {
        ctx->pc = 0x3A3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D2Cu;
        // 0x3a3d30: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3D34u;
        goto label_3a3d34;
    }
    ctx->pc = 0x3A3D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D2Cu;
        // 0x3a3d30: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3D34u;
label_3a3d34:
    // 0x3a3d34: 0x0  nop
    ctx->pc = 0x3a3d34u;
    // NOP
label_3a3d38:
    // 0x3a3d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a3d3c:
    // 0x3a3d3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a3d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a3d40:
    // 0x3a3d40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a3d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3d44:
    // 0x3a3d44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a3d48:
    // 0x3a3d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3d4c:
    // 0x3a3d4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a3d50:
    // 0x3a3d50: 0x8c51e880  lw          $s1, -0x1780($v0)
    ctx->pc = 0x3a3d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
label_3a3d54:
    // 0x3a3d54: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3a3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3a3d58:
    // 0x3a3d58: 0xc106784  jal         func_419E10
label_3a3d5c:
    if (ctx->pc == 0x3A3D5Cu) {
        ctx->pc = 0x3A3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D58u;
        // 0x3a3d5c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3D60u;
        goto label_3a3d60;
    }
    ctx->pc = 0x3A3D58u;
    SET_GPR_U32(ctx, 31, 0x3A3D60u);
    ctx->pc = 0x3A3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D58u;
    // 0x3a3d5c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3A3D58u, 0x3A3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D60u;
label_3a3d60:
    // 0x3a3d60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a3d64:
    // 0x3a3d64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a3d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3d68:
    // 0x3a3d68: 0xc103dd4  jal         func_40F750
label_3a3d6c:
    if (ctx->pc == 0x3A3D6Cu) {
        ctx->pc = 0x3A3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D68u;
        // 0x3a3d6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3D70u;
        goto label_3a3d70;
    }
    ctx->pc = 0x3A3D68u;
    SET_GPR_U32(ctx, 31, 0x3A3D70u);
    ctx->pc = 0x3A3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D68u;
    // 0x3a3d6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3A3D68u, 0x3A3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D70u;
label_3a3d70:
    // 0x3a3d70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a3d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3d74:
    // 0x3a3d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3d78:
    // 0x3a3d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3d7c:
    // 0x3a3d7c: 0x3e00008  jr          $ra
label_3a3d80:
    if (ctx->pc == 0x3A3D80u) {
        ctx->pc = 0x3A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D7Cu;
        // 0x3a3d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3D84u;
        goto label_3a3d84;
    }
    ctx->pc = 0x3A3D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D7Cu;
        // 0x3a3d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3D84u;
label_3a3d84:
    // 0x3a3d84: 0x0  nop
    ctx->pc = 0x3a3d84u;
    // NOP
label_3a3d88:
    // 0x3a3d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a3d8c:
    // 0x3a3d8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a3d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a3d90:
    // 0x3a3d90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a3d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3d94:
    // 0x3a3d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3d98:
    // 0x3a3d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3d9c:
    // 0x3a3d9c: 0xc0e2048  jal         func_388120
label_3a3da0:
    if (ctx->pc == 0x3A3DA0u) {
        ctx->pc = 0x3A3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D9Cu;
        // 0x3a3da0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3DA4u;
        goto label_3a3da4;
    }
    ctx->pc = 0x3A3D9Cu;
    SET_GPR_U32(ctx, 31, 0x3A3DA4u);
    ctx->pc = 0x3A3DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D9Cu;
    // 0x3a3da0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3A3D9Cu, 0x3A3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3DA4u;
label_3a3da4:
    // 0x3a3da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a3da8:
    // 0x3a3da8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a3dac:
    // 0x3a3dac: 0x8c62e880  lw          $v0, -0x1780($v1)
    ctx->pc = 0x3a3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961280)));
label_3a3db0:
    // 0x3a3db0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3a3db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3a3db4:
    // 0x3a3db4: 0x8f84bebc  lw          $a0, -0x4144($gp)
    ctx->pc = 0x3a3db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
label_3a3db8:
    // 0x3a3db8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a3db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3dbc:
    // 0x3a3dbc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3a3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3dc0:
    // 0x3a3dc0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a3dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3a3dc4:
    // 0x3a3dc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a3dc8:
    // 0x3a3dc8: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x3a3dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a3dcc:
    // 0x3a3dcc: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x3a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3a3dd0:
    // 0x3a3dd0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x3a3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3dd4:
    // 0x3a3dd4: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x3a3dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a3dd8:
    // 0x3a3dd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a3dd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a3ddc:
    // 0x3a3ddc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3a3ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a3de0:
    // 0x3a3de0: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3a3de0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_3a3de4:
    // 0x3a3de4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3a3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a3de8:
    // 0x3a3de8: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3a3de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a3dec:
    // 0x3a3dec: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a3decu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a3df0:
    // 0x3a3df0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a3df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3df4:
    // 0x3a3df4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3a3df4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3a3df8:
    // 0x3a3df8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a3df8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3a3dfc:
    // 0x3a3dfc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3a3dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3a3e00:
    // 0x3a3e00: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3a3e00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a3e04:
    // 0x3a3e04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a3e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a3e08:
    // 0x3a3e08: 0x10000014  b           . + 4 + (0x14 << 2)
label_3a3e0c:
    if (ctx->pc == 0x3A3E0Cu) {
        ctx->pc = 0x3A3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E08u;
        // 0x3a3e0c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E10u;
        goto label_3a3e10;
    }
    ctx->pc = 0x3A3E08u;
    {
        const bool branch_taken_0x3a3e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E08u;
        // 0x3a3e0c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e08) {
            ctx->pc = 0x3A3E5Cu;
            goto label_3a3e5c;
        }
    }
    ctx->pc = 0x3A3E10u;
label_3a3e10:
    // 0x3a3e10: 0x10460015  beq         $v0, $a2, . + 4 + (0x15 << 2)
label_3a3e14:
    if (ctx->pc == 0x3A3E14u) {
        ctx->pc = 0x3A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E10u;
        // 0x3a3e14: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E18u;
        goto label_3a3e18;
    }
    ctx->pc = 0x3A3E10u;
    {
        const bool branch_taken_0x3a3e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E10u;
        // 0x3a3e14: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e10) {
            ctx->pc = 0x3A3E68u;
            goto label_3a3e68;
        }
    }
    ctx->pc = 0x3A3E18u;
label_3a3e18:
    // 0x3a3e18: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3a3e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3e1c:
    // 0x3a3e1c: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x3a3e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a3e20:
    // 0x3a3e20: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3a3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a3e24:
    // 0x3a3e24: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x3a3e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a3e28:
    // 0x3a3e28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a3e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a3e2c:
    // 0x3a3e2c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3a3e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a3e30:
    // 0x3a3e30: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3a3e30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_3a3e34:
    // 0x3a3e34: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3a3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a3e38:
    // 0x3a3e38: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3a3e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a3e3c:
    // 0x3a3e3c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a3e3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a3e40:
    // 0x3a3e40: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3a3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3e44:
    // 0x3a3e44: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3a3e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_3a3e48:
    // 0x3a3e48: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a3e48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3a3e4c:
    // 0x3a3e4c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a3e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3a3e50:
    // 0x3a3e50: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3a3e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3a3e54:
    // 0x3a3e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a3e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a3e58:
    // 0x3a3e58: 0x0  nop
    ctx->pc = 0x3a3e58u;
    // NOP
label_3a3e5c:
    // 0x3a3e5c: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
label_3a3e60:
    if (ctx->pc == 0x3A3E60u) {
        ctx->pc = 0x3A3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E5Cu;
        // 0x3a3e60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E64u;
        goto label_3a3e64;
    }
    ctx->pc = 0x3A3E5Cu;
    {
        const bool branch_taken_0x3a3e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a3e5c) {
            ctx->pc = 0x3A3E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3E5Cu;
            // 0x3a3e60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3e10;
        }
    }
    ctx->pc = 0x3A3E64u;
label_3a3e64:
    // 0x3a3e64: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x3a3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_3a3e68:
    // 0x3a3e68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a3e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3e6c:
    // 0x3a3e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3e70:
    // 0x3a3e70: 0x3e00008  jr          $ra
label_3a3e74:
    if (ctx->pc == 0x3A3E74u) {
        ctx->pc = 0x3A3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E70u;
        // 0x3a3e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E78u;
        goto label_3a3e78;
    }
    ctx->pc = 0x3A3E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E70u;
        // 0x3a3e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3E78u;
label_3a3e78:
    // 0x3a3e78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3a3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3a3e7c:
    // 0x3a3e7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3a3e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a3e80:
    // 0x3a3e80: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3a3e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3a3e84:
    // 0x3a3e84: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_3a3e88:
    if (ctx->pc == 0x3A3E88u) {
        ctx->pc = 0x3A3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E84u;
        // 0x3a3e88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E8Cu;
        goto label_3a3e8c;
    }
    ctx->pc = 0x3A3E84u;
    {
        const bool branch_taken_0x3a3e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E84u;
        // 0x3a3e88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e84) {
            ctx->pc = 0x3A3EC0u;
            goto label_3a3ec0;
        }
    }
    ctx->pc = 0x3A3E8Cu;
label_3a3e8c:
    // 0x3a3e8c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3a3e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3a3e90:
    // 0x3a3e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a3e94:
    if (ctx->pc == 0x3A3E94u) {
        ctx->pc = 0x3A3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E90u;
        // 0x3a3e94: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3E98u;
        goto label_3a3e98;
    }
    ctx->pc = 0x3A3E90u;
    {
        const bool branch_taken_0x3a3e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E90u;
        // 0x3a3e94: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3e90) {
            ctx->pc = 0x3A3EA8u;
            goto label_3a3ea8;
        }
    }
    ctx->pc = 0x3A3E98u;
label_3a3e98:
    // 0x3a3e98: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x3a3e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_3a3e9c:
    // 0x3a3e9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3a3ea0:
    if (ctx->pc == 0x3A3EA0u) {
        ctx->pc = 0x3A3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3E9Cu;
        // 0x3a3ea0: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3EA4u;
        goto label_3a3ea4;
    }
    ctx->pc = 0x3A3E9Cu;
    {
        const bool branch_taken_0x3a3e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3e9c) {
            ctx->pc = 0x3A3EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3E9Cu;
            // 0x3a3ea0: 0x30c20010  andi        $v0, $a2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3EB8u;
            goto label_3a3eb8;
        }
    }
    ctx->pc = 0x3A3EA4u;
label_3a3ea4:
    // 0x3a3ea4: 0x0  nop
    ctx->pc = 0x3a3ea4u;
    // NOP
label_3a3ea8:
    // 0x3a3ea8: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x3a3ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_3a3eac:
    // 0x3a3eac: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a3eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a3eb0:
    // 0x3a3eb0: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a3eb4:
    if (ctx->pc == 0x3A3EB4u) {
        ctx->pc = 0x3A3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EB0u;
        // 0x3a3eb4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3EB8u;
        goto label_3a3eb8;
    }
    ctx->pc = 0x3A3EB0u;
    {
        const bool branch_taken_0x3a3eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EB0u;
        // 0x3a3eb4: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3eb0) {
            ctx->pc = 0x3A3EFCu;
            goto label_3a3efc;
        }
    }
    ctx->pc = 0x3A3EB8u;
label_3a3eb8:
    // 0x3a3eb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a3ebc:
    if (ctx->pc == 0x3A3EBCu) {
        ctx->pc = 0x3A3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EB8u;
        // 0x3a3ebc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3EC0u;
        goto label_3a3ec0;
    }
    ctx->pc = 0x3A3EB8u;
    {
        const bool branch_taken_0x3a3eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EB8u;
        // 0x3a3ebc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3eb8) {
            ctx->pc = 0x3A3ED0u;
            goto label_3a3ed0;
        }
    }
    ctx->pc = 0x3A3EC0u;
label_3a3ec0:
    // 0x3a3ec0: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x3a3ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
label_3a3ec4:
    // 0x3a3ec4: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3a3ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a3ec8:
    // 0x3a3ec8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3a3ecc:
    if (ctx->pc == 0x3A3ECCu) {
        ctx->pc = 0x3A3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EC8u;
        // 0x3a3ecc: 0xa0830028  sb          $v1, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3ED0u;
        goto label_3a3ed0;
    }
    ctx->pc = 0x3A3EC8u;
    {
        const bool branch_taken_0x3a3ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EC8u;
        // 0x3a3ecc: 0xa0830028  sb          $v1, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ec8) {
            ctx->pc = 0x3A3F00u;
            goto label_3a3f00;
        }
    }
    ctx->pc = 0x3A3ED0u;
label_3a3ed0:
    // 0x3a3ed0: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x3a3ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_3a3ed4:
    // 0x3a3ed4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a3ed8:
    if (ctx->pc == 0x3A3ED8u) {
        ctx->pc = 0x3A3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3ED4u;
        // 0x3a3ed8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3EDCu;
        goto label_3a3edc;
    }
    ctx->pc = 0x3A3ED4u;
    {
        const bool branch_taken_0x3a3ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3ED4u;
        // 0x3a3ed8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ed4) {
            ctx->pc = 0x3A3EECu;
            goto label_3a3eec;
        }
    }
    ctx->pc = 0x3A3EDCu;
label_3a3edc:
    // 0x3a3edc: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x3a3edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_3a3ee0:
    // 0x3a3ee0: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a3ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a3ee4:
    // 0x3a3ee4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a3ee8:
    if (ctx->pc == 0x3A3EE8u) {
        ctx->pc = 0x3A3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EE4u;
        // 0x3a3ee8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3EECu;
        goto label_3a3eec;
    }
    ctx->pc = 0x3A3EE4u;
    {
        const bool branch_taken_0x3a3ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3EE4u;
        // 0x3a3ee8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ee4) {
            ctx->pc = 0x3A3EFCu;
            goto label_3a3efc;
        }
    }
    ctx->pc = 0x3A3EECu;
label_3a3eec:
    // 0x3a3eec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3ef0:
    // 0x3a3ef0: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x3a3ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
label_3a3ef4:
    // 0x3a3ef4: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a3ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a3ef8:
    // 0x3a3ef8: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3a3ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_3a3efc:
    // 0x3a3efc: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x3a3efcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a3f00:
    // 0x3a3f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a3f04:
    // 0x3a3f04: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_3a3f08:
    if (ctx->pc == 0x3A3F08u) {
        ctx->pc = 0x3A3F0Cu;
        goto label_3a3f0c;
    }
    ctx->pc = 0x3A3F04u;
    {
        const bool branch_taken_0x3a3f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a3f04) {
            ctx->pc = 0x3A3F18u;
            goto label_3a3f18;
        }
    }
    ctx->pc = 0x3A3F0Cu;
label_3a3f0c:
    // 0x3a3f0c: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x3a3f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_3a3f10:
    // 0x3a3f10: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a3f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3a3f14:
    // 0x3a3f14: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x3a3f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a3f18:
    // 0x3a3f18: 0x3e00008  jr          $ra
label_3a3f1c:
    if (ctx->pc == 0x3A3F1Cu) {
        ctx->pc = 0x3A3F20u;
        goto label_3a3f20;
    }
    ctx->pc = 0x3A3F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3F20u;
label_3a3f20:
    // 0x3a3f20: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3a3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3a3f24:
    // 0x3a3f24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3a3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3a3f28:
    // 0x3a3f28: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3a3f28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_3a3f2c:
    // 0x3a3f2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a3f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a3f30:
    // 0x3a3f30: 0x3e00008  jr          $ra
label_3a3f34:
    if (ctx->pc == 0x3A3F34u) {
        ctx->pc = 0x3A3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F30u;
        // 0x3a3f34: 0xa0a2002a  sb          $v0, 0x2A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F38u;
        goto label_3a3f38;
    }
    ctx->pc = 0x3A3F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F30u;
        // 0x3a3f34: 0xa0a2002a  sb          $v0, 0x2A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3F38u;
label_3a3f38:
    // 0x3a3f38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a3f3c:
    // 0x3a3f3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a3f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a3f40:
    // 0x3a3f40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a3f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a3f44:
    // 0x3a3f44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a3f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f48:
    // 0x3a3f48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a3f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a3f4c:
    // 0x3a3f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a3f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f50:
    // 0x3a3f50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a3f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a3f54:
    // 0x3a3f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3f58:
    // 0x3a3f58: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3a3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3a3f5c:
    // 0x3a3f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a3f60:
    if (ctx->pc == 0x3A3F60u) {
        ctx->pc = 0x3A3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F5Cu;
        // 0x3a3f60: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F64u;
        goto label_3a3f64;
    }
    ctx->pc = 0x3A3F5Cu;
    {
        const bool branch_taken_0x3a3f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F5Cu;
        // 0x3a3f60: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f5c) {
            ctx->pc = 0x3A3F70u;
            goto label_3a3f70;
        }
    }
    ctx->pc = 0x3A3F64u;
label_3a3f64:
    // 0x3a3f64: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3a3f68:
    if (ctx->pc == 0x3A3F68u) {
        ctx->pc = 0x3A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F64u;
        // 0x3a3f68: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F6Cu;
        goto label_3a3f6c;
    }
    ctx->pc = 0x3A3F64u;
    {
        const bool branch_taken_0x3a3f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F64u;
        // 0x3a3f68: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f64) {
            ctx->pc = 0x3A3FD0u;
            goto label_3a3fd0;
        }
    }
    ctx->pc = 0x3A3F6Cu;
label_3a3f6c:
    // 0x3a3f6c: 0x0  nop
    ctx->pc = 0x3a3f6cu;
    // NOP
label_3a3f70:
    // 0x3a3f70: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3a3f74:
    // 0x3a3f74: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3a3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_3a3f78:
    // 0x3a3f78: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x3a3f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3a3f7c:
    // 0x3a3f7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a3f80:
    // 0x3a3f80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a3f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a3f84:
    // 0x3a3f84: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3a3f88:
    if (ctx->pc == 0x3A3F88u) {
        ctx->pc = 0x3A3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F84u;
        // 0x3a3f88: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F8Cu;
        goto label_3a3f8c;
    }
    ctx->pc = 0x3A3F84u;
    {
        const bool branch_taken_0x3a3f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F84u;
        // 0x3a3f88: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f84) {
            ctx->pc = 0x3A3FC0u;
            goto label_3a3fc0;
        }
    }
    ctx->pc = 0x3A3F8Cu;
label_3a3f8c:
    // 0x3a3f8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a3f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a3f90:
    // 0x3a3f90: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3a3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3a3f94:
    // 0x3a3f94: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x3a3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a3f98:
    // 0x3a3f98: 0x40f809  jalr        $v0
label_3a3f9c:
    if (ctx->pc == 0x3A3F9Cu) {
        ctx->pc = 0x3A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F98u;
        // 0x3a3f9c: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FA0u;
        goto label_3a3fa0;
    }
    ctx->pc = 0x3A3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A3FA0u);
        ctx->pc = 0x3A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F98u;
        // 0x3a3f9c: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3F98u, 0x3A3FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3FA0u;
label_3a3fa0:
    // 0x3a3fa0: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3a3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_3a3fa4:
    // 0x3a3fa4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x3a3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_3a3fa8:
    // 0x3a3fa8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x3a3fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_3a3fac:
    // 0x3a3fac: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x3a3facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_3a3fb0:
    // 0x3a3fb0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a3fb4:
    // 0x3a3fb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3a3fb8:
    // 0x3a3fb8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a3fbc:
    if (ctx->pc == 0x3A3FBCu) {
        ctx->pc = 0x3A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FB8u;
        // 0x3a3fbc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FC0u;
        goto label_3a3fc0;
    }
    ctx->pc = 0x3A3FB8u;
    {
        const bool branch_taken_0x3a3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FB8u;
        // 0x3a3fbc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3fb8) {
            ctx->pc = 0x3A3FDCu;
            goto label_3a3fdc;
        }
    }
    ctx->pc = 0x3A3FC0u;
label_3a3fc0:
    // 0x3a3fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fc4:
    // 0x3a3fc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a3fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fc8:
    // 0x3a3fc8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a3fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fcc:
    // 0x3a3fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a3fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fd0:
    // 0x3a3fd0: 0xc1045e4  jal         func_411790
label_3a3fd4:
    if (ctx->pc == 0x3A3FD4u) {
        ctx->pc = 0x3A3FD8u;
        goto label_3a3fd8;
    }
    ctx->pc = 0x3A3FD0u;
    SET_GPR_U32(ctx, 31, 0x3A3FD8u);
    ctx->pc = 0x411790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411790u, 0x3A3FD0u, 0x3A3FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3FD8u;
label_3a3fd8:
    // 0x3a3fd8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a3fdc:
    // 0x3a3fdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a3fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a3fe0:
    // 0x3a3fe0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a3fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a3fe4:
    // 0x3a3fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a3fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3fe8:
    // 0x3a3fe8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a3fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3fec:
    // 0x3a3fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3ff0:
    // 0x3a3ff0: 0x3e00008  jr          $ra
label_3a3ff4:
    if (ctx->pc == 0x3A3FF4u) {
        ctx->pc = 0x3A3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FF0u;
        // 0x3a3ff4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FF8u;
        goto label_3a3ff8;
    }
    ctx->pc = 0x3A3FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FF0u;
        // 0x3a3ff4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3FF8u;
label_3a3ff8:
    // 0x3a3ff8: 0x3e00008  jr          $ra
label_3a3ffc:
    if (ctx->pc == 0x3A3FFCu) {
        ctx->pc = 0x3A4000u;
        goto label_3a4000;
    }
    ctx->pc = 0x3A3FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4000u;
label_3a4000:
    // 0x3a4000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a4004:
    // 0x3a4004: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3a4004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a4008:
    // 0x3a4008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a400c:
    // 0x3a400c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a4010:
    // 0x3a4010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a4014:
    // 0x3a4014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a4018:
    // 0x3a4018: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x3a4018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a401c:
    // 0x3a401c: 0x2782aa28  addiu       $v0, $gp, -0x55D8
    ctx->pc = 0x3a401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945320));
label_3a4020:
    // 0x3a4020: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x3a4020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3a4024:
    // 0x3a4024: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3a4024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_3a4028:
    // 0x3a4028: 0x24c3af20  addiu       $v1, $a2, -0x50E0
    ctx->pc = 0x3a4028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946592));
label_3a402c:
    // 0x3a402c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3a402cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3a4030:
    // 0x3a4030: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3a4030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_3a4034:
    // 0x3a4034: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x3a4034u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_3a4038:
    // 0x3a4038: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3a4038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_3a403c:
    // 0x3a403c: 0x2524e880  addiu       $a0, $t1, -0x1780
    ctx->pc = 0x3a403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
label_3a4040:
    // 0x3a4040: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3a4040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3a4044:
    // 0x3a4044: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x3a4044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_3a4048:
    // 0x3a4048: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x3a4048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_3a404c:
    // 0x3a404c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a4050:
    // 0x3a4050: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3a4050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3a4054:
    // 0x3a4054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a4058:
    // 0x3a4058: 0x90420027  lbu         $v0, 0x27($v0)
    ctx->pc = 0x3a4058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 39)));
label_3a405c:
    // 0x3a405c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_3a4060:
    if (ctx->pc == 0x3A4060u) {
        ctx->pc = 0x3A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A405Cu;
        // 0x3a4060: 0xacc2af20  sw          $v0, -0x50E0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294946592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4064u;
        goto label_3a4064;
    }
    ctx->pc = 0x3A405Cu;
    {
        const bool branch_taken_0x3a405c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A405Cu;
        // 0x3a4060: 0xacc2af20  sw          $v0, -0x50E0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294946592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a405c) {
            ctx->pc = 0x3A4070u;
            goto label_3a4070;
        }
    }
    ctx->pc = 0x3A4064u;
label_3a4064:
    // 0x3a4064: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a4064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3a4068:
    // 0x3a4068: 0xacc2af20  sw          $v0, -0x50E0($a2)
    ctx->pc = 0x3a4068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294946592), GPR_U32(ctx, 2));
label_3a406c:
    // 0x3a406c: 0x0  nop
    ctx->pc = 0x3a406cu;
    // NOP
label_3a4070:
    // 0x3a4070: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3a4070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a4074:
    // 0x3a4074: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a4074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a4078:
    // 0x3a4078: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x3a4078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a407c:
    // 0x3a407c: 0x2463af40  addiu       $v1, $v1, -0x50C0
    ctx->pc = 0x3a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946624));
label_3a4080:
    // 0x3a4080: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x3a4080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3a4084:
    // 0x3a4084: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x3a4084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a4088:
    // 0x3a4088: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3a4088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3a408c:
    // 0x3a408c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x3a408cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_3a4090:
    // 0x3a4090: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3a4090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_3a4094:
    // 0x3a4094: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3a4094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_3a4098:
    // 0x3a4098: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3a4098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3a409c:
    // 0x3a409c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3a409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3a40a0:
    // 0x3a40a0: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x3a40a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_3a40a4:
    // 0x3a40a4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3a40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3a40a8:
    // 0x3a40a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3a40a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a40ac:
    // 0x3a40ac: 0x8d22e880  lw          $v0, -0x1780($t1)
    ctx->pc = 0x3a40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961280)));
label_3a40b0:
    // 0x3a40b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3a40b4:
    if (ctx->pc == 0x3A40B4u) {
        ctx->pc = 0x3A40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40B0u;
        // 0x3a40b4: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A40B8u;
        goto label_3a40b8;
    }
    ctx->pc = 0x3A40B0u;
    {
        const bool branch_taken_0x3a40b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40B0u;
        // 0x3a40b4: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40b0) {
            ctx->pc = 0x3A40C8u;
            goto label_3a40c8;
        }
    }
    ctx->pc = 0x3A40B8u;
label_3a40b8:
    // 0x3a40b8: 0xc103dd4  jal         func_40F750
label_3a40bc:
    if (ctx->pc == 0x3A40BCu) {
        ctx->pc = 0x3A40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40B8u;
        // 0x3a40bc: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A40C0u;
        goto label_3a40c0;
    }
    ctx->pc = 0x3A40B8u;
    SET_GPR_U32(ctx, 31, 0x3A40C0u);
    ctx->pc = 0x3A40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A40B8u;
    // 0x3a40bc: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3A40B8u, 0x3A40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A40C0u;
label_3a40c0:
    // 0x3a40c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a40c4:
    if (ctx->pc == 0x3A40C4u) {
        ctx->pc = 0x3A40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40C0u;
        // 0x3a40c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A40C8u;
        goto label_3a40c8;
    }
    ctx->pc = 0x3A40C0u;
    {
        const bool branch_taken_0x3a40c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40C0u;
        // 0x3a40c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40c0) {
            ctx->pc = 0x3A40D0u;
            goto label_3a40d0;
        }
    }
    ctx->pc = 0x3A40C8u;
label_3a40c8:
    // 0x3a40c8: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x3a40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_3a40cc:
    // 0x3a40cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a40d0:
    // 0x3a40d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a40d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a40d4:
    // 0x3a40d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3a40d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3a40d8:
    // 0x3a40d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3a40dc:
    if (ctx->pc == 0x3A40DCu) {
        ctx->pc = 0x3A40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40D8u;
        // 0x3a40dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A40E0u;
        goto label_3a40e0;
    }
    ctx->pc = 0x3A40D8u;
    {
        const bool branch_taken_0x3a40d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40D8u;
        // 0x3a40dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40d8) {
            ctx->pc = 0x3A40E4u;
            goto label_3a40e4;
        }
    }
    ctx->pc = 0x3A40E0u;
label_3a40e0:
    // 0x3a40e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3a40e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a40e4:
    // 0x3a40e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a40e8:
    // 0x3a40e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a40e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a40ec:
    // 0x3a40ec: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3a40ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3a40f0:
    // 0x3a40f0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_3a40f4:
    if (ctx->pc == 0x3A40F4u) {
        ctx->pc = 0x3A40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40F0u;
        // 0x3a40f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A40F8u;
        goto label_3a40f8;
    }
    ctx->pc = 0x3A40F0u;
    {
        const bool branch_taken_0x3a40f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40F0u;
        // 0x3a40f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40f0) {
            ctx->pc = 0x3A4128u;
            goto label_3a4128;
        }
    }
    ctx->pc = 0x3A40F8u;
label_3a40f8:
    // 0x3a40f8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3a40f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3a40fc:
    // 0x3a40fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a4100:
    if (ctx->pc == 0x3A4100u) {
        ctx->pc = 0x3A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40FCu;
        // 0x3a4100: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4104u;
        goto label_3a4104;
    }
    ctx->pc = 0x3A40FCu;
    {
        const bool branch_taken_0x3a40fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40FCu;
        // 0x3a4100: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a40fc) {
            ctx->pc = 0x3A4110u;
            goto label_3a4110;
        }
    }
    ctx->pc = 0x3A4104u;
label_3a4104:
    // 0x3a4104: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3a4104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_3a4108:
    // 0x3a4108: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a410c:
    if (ctx->pc == 0x3A410Cu) {
        ctx->pc = 0x3A410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4108u;
        // 0x3a410c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4110u;
        goto label_3a4110;
    }
    ctx->pc = 0x3A4108u;
    {
        const bool branch_taken_0x3a4108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4108) {
            ctx->pc = 0x3A410Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4108u;
            // 0x3a410c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4120u;
            goto label_3a4120;
        }
    }
    ctx->pc = 0x3A4110u;
label_3a4110:
    // 0x3a4110: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3a4110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
label_3a4114:
    // 0x3a4114: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a4114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a4118:
    // 0x3a4118: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a411c:
    if (ctx->pc == 0x3A411Cu) {
        ctx->pc = 0x3A411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4118u;
        // 0x3a411c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4120u;
        goto label_3a4120;
    }
    ctx->pc = 0x3A4118u;
    {
        const bool branch_taken_0x3a4118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4118u;
        // 0x3a411c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4118) {
            ctx->pc = 0x3A4160u;
            goto label_3a4160;
        }
    }
    ctx->pc = 0x3A4120u;
label_3a4120:
    // 0x3a4120: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a4124:
    if (ctx->pc == 0x3A4124u) {
        ctx->pc = 0x3A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4120u;
        // 0x3a4124: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4128u;
        goto label_3a4128;
    }
    ctx->pc = 0x3A4120u;
    {
        const bool branch_taken_0x3a4120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4120u;
        // 0x3a4124: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4120) {
            ctx->pc = 0x3A4138u;
            goto label_3a4138;
        }
    }
    ctx->pc = 0x3A4128u;
label_3a4128:
    // 0x3a4128: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x3a4128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
label_3a412c:
    // 0x3a412c: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3a412cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a4130:
    // 0x3a4130: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a4134:
    if (ctx->pc == 0x3A4134u) {
        ctx->pc = 0x3A4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4130u;
        // 0x3a4134: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4138u;
        goto label_3a4138;
    }
    ctx->pc = 0x3A4130u;
    {
        const bool branch_taken_0x3a4130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4130u;
        // 0x3a4134: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4130) {
            ctx->pc = 0x3A4164u;
            goto label_3a4164;
        }
    }
    ctx->pc = 0x3A4138u;
label_3a4138:
    // 0x3a4138: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x3a4138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_3a413c:
    // 0x3a413c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a4140:
    if (ctx->pc == 0x3A4140u) {
        ctx->pc = 0x3A4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A413Cu;
        // 0x3a4140: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4144u;
        goto label_3a4144;
    }
    ctx->pc = 0x3A413Cu;
    {
        const bool branch_taken_0x3a413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A413Cu;
        // 0x3a4140: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a413c) {
            ctx->pc = 0x3A4154u;
            goto label_3a4154;
        }
    }
    ctx->pc = 0x3A4144u;
label_3a4144:
    // 0x3a4144: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3a4144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
label_3a4148:
    // 0x3a4148: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a4148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a414c:
    // 0x3a414c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a4150:
    if (ctx->pc == 0x3A4150u) {
        ctx->pc = 0x3A4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A414Cu;
        // 0x3a4150: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4154u;
        goto label_3a4154;
    }
    ctx->pc = 0x3A414Cu;
    {
        const bool branch_taken_0x3a414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A414Cu;
        // 0x3a4150: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a414c) {
            ctx->pc = 0x3A4160u;
            goto label_3a4160;
        }
    }
    ctx->pc = 0x3A4154u;
label_3a4154:
    // 0x3a4154: 0xa2050029  sb          $a1, 0x29($s0)
    ctx->pc = 0x3a4154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 5));
label_3a4158:
    // 0x3a4158: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3a4158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_3a415c:
    // 0x3a415c: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3a415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_3a4160:
    // 0x3a4160: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3a4160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a4164:
    // 0x3a4164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a4164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a4168:
    // 0x3a4168: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_3a416c:
    if (ctx->pc == 0x3A416Cu) {
        ctx->pc = 0x3A416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4168u;
        // 0x3a416c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4170u;
        goto label_3a4170;
    }
    ctx->pc = 0x3A4168u;
    {
        const bool branch_taken_0x3a4168 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4168u;
        // 0x3a416c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4168) {
            ctx->pc = 0x3A417Cu;
            goto label_3a417c;
        }
    }
    ctx->pc = 0x3A4170u;
label_3a4170:
    // 0x3a4170: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3a4170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_3a4174:
    // 0x3a4174: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a4174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3a4178:
    // 0x3a4178: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x3a4178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_3a417c:
    // 0x3a417c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a417cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4180:
    // 0x3a4180: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x3a4180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
label_3a4184:
    // 0x3a4184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4188:
    // 0x3a4188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a4188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a418c:
    // 0x3a418c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a418cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4190:
    // 0x3a4190: 0x3e00008  jr          $ra
label_3a4194:
    if (ctx->pc == 0x3A4194u) {
        ctx->pc = 0x3A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4190u;
        // 0x3a4194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4198u;
        goto label_3a4198;
    }
    ctx->pc = 0x3A4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4190u;
        // 0x3a4194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4198u;
label_3a4198:
    // 0x3a4198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a419c:
    // 0x3a419c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a41a0:
    // 0x3a41a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a41a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a41a4:
    // 0x3a41a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a41a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a41a8:
    // 0x3a41a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a41a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a41ac:
    // 0x3a41ac: 0xc10a322  jal         func_428C88
label_3a41b0:
    if (ctx->pc == 0x3A41B0u) {
        ctx->pc = 0x3A41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41ACu;
        // 0x3a41b0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A41B4u;
        goto label_3a41b4;
    }
    ctx->pc = 0x3A41ACu;
    SET_GPR_U32(ctx, 31, 0x3A41B4u);
    ctx->pc = 0x3A41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A41ACu;
    // 0x3a41b0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3A41ACu, 0x3A41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A41B4u;
label_3a41b4:
    // 0x3a41b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3a41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3a41b8:
    // 0x3a41b8: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x3a41b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_3a41bc:
    // 0x3a41bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a41bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a41c0:
    // 0x3a41c0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3a41c0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3a41c4:
    // 0x3a41c4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a41c8:
    // 0x3a41c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3a41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_3a41cc:
    // 0x3a41cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a41d0:
    // 0x3a41d0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a41d4:
    // 0x3a41d4: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x3a41d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
label_3a41d8:
    // 0x3a41d8: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x3a41d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
label_3a41dc:
    // 0x3a41dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a41dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_3a41e0:
    // 0x3a41e0: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x3a41e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_3a41e4:
    // 0x3a41e4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a41e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_3a41e8:
    // 0x3a41e8: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x3a41e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
label_3a41ec:
    // 0x3a41ec: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x3a41ecu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_3a41f0:
    // 0x3a41f0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3a41f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_3a41f4:
    // 0x3a41f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a41f8:
    // 0x3a41f8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a41f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a41fc:
    // 0x3a41fc: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x3a41fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_3a4200:
    // 0x3a4200: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x3a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_3a4204:
    // 0x3a4204: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x3a4204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
label_3a4208:
    // 0x3a4208: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3a4208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a420c:
    // 0x3a420c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a4210:
    // 0x3a4210: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a4214:
    if (ctx->pc == 0x3A4214u) {
        ctx->pc = 0x3A4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4210u;
        // 0x3a4214: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4218u;
        goto label_3a4218;
    }
    ctx->pc = 0x3A4210u;
    {
        const bool branch_taken_0x3a4210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4210u;
        // 0x3a4214: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4210) {
            ctx->pc = 0x3A4228u;
            goto label_3a4228;
        }
    }
    ctx->pc = 0x3A4218u;
label_3a4218:
    // 0x3a4218: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3a4218u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a421c:
    // 0x3a421c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3a421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3a4220:
    // 0x3a4220: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a4224:
    if (ctx->pc == 0x3A4224u) {
        ctx->pc = 0x3A4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4220u;
        // 0x3a4224: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4228u;
        goto label_3a4228;
    }
    ctx->pc = 0x3A4220u;
    {
        const bool branch_taken_0x3a4220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4220u;
        // 0x3a4224: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4220) {
            ctx->pc = 0x3A4234u;
            goto label_3a4234;
        }
    }
    ctx->pc = 0x3A4228u;
label_3a4228:
    // 0x3a4228: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3a4228u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a422c:
    // 0x3a422c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x3a422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_3a4230:
    // 0x3a4230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a4230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a4234:
    // 0x3a4234: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3a4234u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_3a4238:
    // 0x3a4238: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x3a4238u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_3a423c:
    // 0x3a423c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a423cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a4240:
    // 0x3a4240: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x3a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a4244:
    // 0x3a4244: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x3a4244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
label_3a4248:
    // 0x3a4248: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x3a4248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_3a424c:
    // 0x3a424c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a424cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3a4250:
    // 0x3a4250: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3a4250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3a4254:
    // 0x3a4254: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a4254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3a4258:
    // 0x3a4258: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3a4258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3a425c:
    // 0x3a425c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x3a425cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
label_3a4260:
    // 0x3a4260: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3a4260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3a4264:
    // 0x3a4264: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x3a4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
label_3a4268:
    // 0x3a4268: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3a4268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_3a426c:
    // 0x3a426c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x3a426cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_3a4270:
    // 0x3a4270: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x3a4270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_3a4274:
    // 0x3a4274: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x3a4274u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_3a4278:
    // 0x3a4278: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3a4278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_3a427c:
    // 0x3a427c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x3a427cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_3a4280:
    // 0x3a4280: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3a4280u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_3a4284:
    // 0x3a4284: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x3a4284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a4288:
    // 0x3a4288: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3a4288u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_3a428c:
    // 0x3a428c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a428cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a4290:
    // 0x3a4290: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x3a4290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
label_3a4294:
    // 0x3a4294: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_3a4298:
    // 0x3a4298: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x3a4298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
label_3a429c:
    // 0x3a429c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a42a0:
    // 0x3a42a0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a42a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3a42a4:
    // 0x3a42a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a42a8:
    // 0x3a42a8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3a42a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_3a42ac:
    // 0x3a42ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a42acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a42b0:
    // 0x3a42b0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3a42b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_3a42b4:
    // 0x3a42b4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3a42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3a42b8:
    // 0x3a42b8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3a42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a42bc:
    // 0x3a42bc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a42bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a42c0:
    // 0x3a42c0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3a42c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3a42c4:
    // 0x3a42c4: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x3a42c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a42c8:
    // 0x3a42c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a42c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3a42cc:
    // 0x3a42cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3a42d0:
    if (ctx->pc == 0x3A42D0u) {
        ctx->pc = 0x3A42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42CCu;
        // 0x3a42d0: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A42D4u;
        goto label_3a42d4;
    }
    ctx->pc = 0x3A42CCu;
    {
        const bool branch_taken_0x3a42cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42CCu;
        // 0x3a42d0: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42cc) {
            ctx->pc = 0x3A42D8u;
            goto label_3a42d8;
        }
    }
    ctx->pc = 0x3A42D4u;
label_3a42d4:
    // 0x3a42d4: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x3a42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a42d8:
    // 0x3a42d8: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x3a42d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
label_3a42dc:
    // 0x3a42dc: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x3a42dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
label_3a42e0:
    // 0x3a42e0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3a42e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3a42e4:
    // 0x3a42e4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3a42e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3a42e8:
    // 0x3a42e8: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x3a42e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_3a42ec:
    // 0x3a42ec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a42ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3a42f0:
    // 0x3a42f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3a42f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3a42f4:
    // 0x3a42f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3a42f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a42f8:
    // 0x3a42f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a42f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a42fc:
    // 0x3a42fc: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x3a42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a4300:
    // 0x3a4300: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a4300u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a4304:
    // 0x3a4304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a4304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a4308:
    // 0x3a4308: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3a4308u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3a430c:
    // 0x3a430c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x3a430cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3a4310:
    // 0x3a4310: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3a4310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a4314:
    // 0x3a4314: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3a4314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a4318:
    // 0x3a4318: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3a4318u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_3a431c:
    // 0x3a431c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3a431cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_3a4320:
    // 0x3a4320: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x3a4320u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3a4324:
    // 0x3a4324: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x3a4324u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_3a4328:
    // 0x3a4328: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3a4328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a432c:
    // 0x3a432c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3a432cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a4330:
    // 0x3a4330: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3a4330u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3a4334:
    // 0x3a4334: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x3a4334u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_3a4338:
    // 0x3a4338: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3a4338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_3a433c:
    // 0x3a433c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a433cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a4340:
    // 0x3a4340: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
label_3a4344:
    // 0x3a4344: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x3a4344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
label_3a4348:
    // 0x3a4348: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a4348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a434c:
    // 0x3a434c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3a4350:
    // 0x3a4350: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a4350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3a4354:
    // 0x3a4354: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3a4354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
label_3a4358:
    // 0x3a4358: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3a4358u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_3a435c:
    // 0x3a435c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x3a435cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_3a4360:
    // 0x3a4360: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x3a4360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_3a4364:
    // 0x3a4364: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a4364u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a4368:
    // 0x3a4368: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3a4368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3a436c:
    // 0x3a436c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x3a436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a4370:
    // 0x3a4370: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3a4370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a4374:
    // 0x3a4374: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3a4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a4378:
    // 0x3a4378: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3a4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a437c:
    // 0x3a437c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3a437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a4380:
    // 0x3a4380: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x3a4380u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3a4384:
    // 0x3a4384: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a4384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a4388:
    // 0x3a4388: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3a4388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a438c:
    // 0x3a438c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3a438cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
label_3a4390:
    // 0x3a4390: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3a4390u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
label_3a4394:
    // 0x3a4394: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x3a4394u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3a4398:
    // 0x3a4398: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x3a4398u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3a439c:
    // 0x3a439c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3a439cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a43a0:
    // 0x3a43a0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3a43a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a43a4:
    // 0x3a43a4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3a43a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_3a43a8:
    // 0x3a43a8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x3a43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_3a43ac:
    // 0x3a43ac: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x3a43acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_3a43b0:
    // 0x3a43b0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a43b4:
    // 0x3a43b4: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x3a43b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_3a43b8:
    // 0x3a43b8: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x3a43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
label_3a43bc:
    // 0x3a43bc: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x3a43bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
label_3a43c0:
    // 0x3a43c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a43c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3a43c4:
    // 0x3a43c4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3a43c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_3a43c8:
    // 0x3a43c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a43c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3a43cc:
    // 0x3a43cc: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3a43ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_3a43d0:
    // 0x3a43d0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x3a43d0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
label_3a43d4:
    // 0x3a43d4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x3a43d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3a43d8:
    // 0x3a43d8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x3a43d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_3a43dc:
    // 0x3a43dc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3a43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_3a43e0:
    // 0x3a43e0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a43e4:
    // 0x3a43e4: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x3a43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
label_3a43e8:
    // 0x3a43e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3a43ec:
    if (ctx->pc == 0x3A43ECu) {
        ctx->pc = 0x3A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43E8u;
        // 0x3a43ec: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43F0u;
        goto label_3a43f0;
    }
    ctx->pc = 0x3A43E8u;
    {
        const bool branch_taken_0x3a43e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43E8u;
        // 0x3a43ec: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43e8) {
            ctx->pc = 0x3A43F8u;
            goto label_3a43f8;
        }
    }
    ctx->pc = 0x3A43F0u;
label_3a43f0:
    // 0x3a43f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3a43f4:
    if (ctx->pc == 0x3A43F4u) {
        ctx->pc = 0x3A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43F0u;
        // 0x3a43f4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A43F8u;
        goto label_3a43f8;
    }
    ctx->pc = 0x3A43F0u;
    {
        const bool branch_taken_0x3a43f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43f0) {
            ctx->pc = 0x3A43F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A43F0u;
            // 0x3a43f4: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4410u;
            goto label_3a4410;
        }
    }
    ctx->pc = 0x3A43F8u;
label_3a43f8:
    // 0x3a43f8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x3a43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
label_3a43fc:
    // 0x3a43fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3a4400:
    if (ctx->pc == 0x3A4400u) {
        ctx->pc = 0x3A4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43FCu;
        // 0x3a4400: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4404u;
        goto label_3a4404;
    }
    ctx->pc = 0x3A43FCu;
    {
        const bool branch_taken_0x3a43fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43FCu;
        // 0x3a4400: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43fc) {
            ctx->pc = 0x3A4438u;
            goto label_3a4438;
        }
    }
    ctx->pc = 0x3A4404u;
label_3a4404:
    // 0x3a4404: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3a4408:
    if (ctx->pc == 0x3A4408u) {
        ctx->pc = 0x3A4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4404u;
        // 0x3a4408: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A440Cu;
        goto label_3a440c;
    }
    ctx->pc = 0x3A4404u;
    {
        const bool branch_taken_0x3a4404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4404) {
            ctx->pc = 0x3A4408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4404u;
            // 0x3a4408: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4440u;
            goto label_3a4440;
        }
    }
    ctx->pc = 0x3A440Cu;
label_3a440c:
    // 0x3a440c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x3a440cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_3a4410:
    // 0x3a4410: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a4410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a4414:
    // 0x3a4414: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a4414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a4418:
    // 0x3a4418: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x3a4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
label_3a441c:
    // 0x3a441c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a441cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a4420:
    // 0x3a4420: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a4420u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a4424:
    // 0x3a4424: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a4424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a4428:
    // 0x3a4428: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a4428u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_3a442c:
    // 0x3a442c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a442cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a4430:
    // 0x3a4430: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a4434:
    if (ctx->pc == 0x3A4434u) {
        ctx->pc = 0x3A4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4430u;
        // 0x3a4434: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4438u;
        goto label_3a4438;
    }
    ctx->pc = 0x3A4430u;
    {
        const bool branch_taken_0x3a4430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4430u;
        // 0x3a4434: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4430) {
            ctx->pc = 0x3A4460u;
            goto label_3a4460;
        }
    }
    ctx->pc = 0x3A4438u;
label_3a4438:
    // 0x3a4438: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a4438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a443c:
    // 0x3a443c: 0x0  nop
    ctx->pc = 0x3a443cu;
    // NOP
label_3a4440:
    // 0x3a4440: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a4440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a4444:
    // 0x3a4444: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x3a4444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
label_3a4448:
    // 0x3a4448: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a4448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a444c:
    // 0x3a444c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a444cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a4450:
    // 0x3a4450: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a4454:
    // 0x3a4454: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3a4454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_3a4458:
    // 0x3a4458: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3a4458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3a445c:
    // 0x3a445c: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x3a445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_3a4460:
    // 0x3a4460: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x3a4460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a4464:
    // 0x3a4464: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a4464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3a4468:
    // 0x3a4468: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3a4468u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_3a446c:
    // 0x3a446c: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x3a446cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
label_3a4470:
    // 0x3a4470: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x3a4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_3a4474:
    // 0x3a4474: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a4474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a4478:
    // 0x3a4478: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3a447c:
    if (ctx->pc == 0x3A447Cu) {
        ctx->pc = 0x3A447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4478u;
        // 0x3a447c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4480u;
        goto label_3a4480;
    }
    ctx->pc = 0x3A4478u;
    {
        const bool branch_taken_0x3a4478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4478u;
        // 0x3a447c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4478) {
            ctx->pc = 0x3A4488u;
            goto label_3a4488;
        }
    }
    ctx->pc = 0x3A4480u;
label_3a4480:
    // 0x3a4480: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3a4480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3a4484:
    // 0x3a4484: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x3a4484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_3a4488:
    // 0x3a4488: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x3a4488u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
label_3a448c:
    // 0x3a448c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3a448cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_3a4490:
    // 0x3a4490: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x3a4490u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
label_3a4494:
    // 0x3a4494: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3a4494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3a4498:
    // 0x3a4498: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a4498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a449c:
    // 0x3a449c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3a449cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3a44a0:
    // 0x3a44a0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x3a44a0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_3a44a4:
    // 0x3a44a4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a44a8:
    // 0x3a44a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3a44a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_3a44ac:
    // 0x3a44ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a44acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a44b0:
    // 0x3a44b0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3a44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_3a44b4:
    // 0x3a44b4: 0x92030028  lbu         $v1, 0x28($s0)
    ctx->pc = 0x3a44b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_3a44b8:
    // 0x3a44b8: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x3a44b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a44bc:
    // 0x3a44bc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a44bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a44c0:
    // 0x3a44c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3a44c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3a44c4:
    // 0x3a44c4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3a44c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3a44c8:
    // 0x3a44c8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x3a44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_3a44cc:
    // 0x3a44cc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x3a44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_3a44d0:
    // 0x3a44d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a44d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a44d4:
    // 0x3a44d4: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x3a44d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
label_3a44d8:
    // 0x3a44d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3a44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a44dc:
    // 0x3a44dc: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x3a44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
label_3a44e0:
    // 0x3a44e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a44e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3a44e4:
    // 0x3a44e4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3a44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3a44e8:
    // 0x3a44e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a44ec:
    // 0x3a44ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a44f0:
    // 0x3a44f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3a44f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a44f4:
    // 0x3a44f4: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
label_3a44f8:
    if (ctx->pc == 0x3A44F8u) {
        ctx->pc = 0x3A44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44F4u;
        // 0x3a44f8: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A44FCu;
        goto label_3a44fc;
    }
    ctx->pc = 0x3A44F4u;
    {
        const bool branch_taken_0x3a44f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44F4u;
        // 0x3a44f8: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44f4) {
            ctx->pc = 0x3A4520u;
            goto label_3a4520;
        }
    }
    ctx->pc = 0x3A44FCu;
label_3a44fc:
    // 0x3a44fc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_3a4500:
    // 0x3a4500: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a4500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a4504:
    // 0x3a4504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4508:
    // 0x3a4508: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3a4508u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_3a450c:
    // 0x3a450c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a4510:
    // 0x3a4510: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3a4510u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3a4514:
    // 0x3a4514: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3a4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3a4518:
    // 0x3a4518: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a4518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a451c:
    // 0x3a451c: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x3a451cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_3a4520:
    // 0x3a4520: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3a4520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3a4524:
    // 0x3a4524: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3a4524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4528:
    // 0x3a4528: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3a4528u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a452c:
    // 0x3a452c: 0x250a0018  addiu       $t2, $t0, 0x18
    ctx->pc = 0x3a452cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_3a4530:
    // 0x3a4530: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x3a4530u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
label_3a4534:
    // 0x3a4534: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x3a4534u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_3a4538:
    // 0x3a4538: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x3a4538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
label_3a453c:
    // 0x3a453c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_3a4540:
    // 0x3a4540: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3a4540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a4544:
    // 0x3a4544: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3a4544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_3a4548:
    // 0x3a4548: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x3a4548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
label_3a454c:
    // 0x3a454c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a454cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a4550:
    // 0x3a4550: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3a4550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3a4554:
    // 0x3a4554: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3a4554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_3a4558:
    // 0x3a4558: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a4558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a455c:
    // 0x3a455c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3a455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_3a4560:
    // 0x3a4560: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3a4560u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_3a4564:
    // 0x3a4564: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a4564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_3a4568:
    // 0x3a4568: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3a4568u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3a456c:
    // 0x3a456c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3a456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3a4570:
    // 0x3a4570: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3a4570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_3a4574:
    // 0x3a4574: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a4574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3a4578:
    // 0x3a4578: 0x42000039  di
    ctx->pc = 0x3a4578u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_3a457c:
    // 0x3a457c: 0x40f  sync.p
    ctx->pc = 0x3a457cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3a4580:
    // 0x3a4580: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_3a4584:
    // 0x3a4584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a4584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a4588:
    // 0x3a4588: 0x0  nop
    ctx->pc = 0x3a4588u;
    // NOP
label_3a458c:
    // 0x3a458c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3a4590:
    if (ctx->pc == 0x3A4590u) {
        ctx->pc = 0x3A4594u;
        goto label_3a4594;
    }
    ctx->pc = 0x3A458Cu;
    {
        const bool branch_taken_0x3a458c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a458c) {
            ctx->pc = 0x3A4578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4578;
        }
    }
    ctx->pc = 0x3A4594u;
label_3a4594:
    // 0x3a4594: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x3a4594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3a4598:
    // 0x3a4598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a4598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a459c:
    // 0x3a459c: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x3a459cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_3a45a0:
    // 0x3a45a0: 0x42000038  ei
    ctx->pc = 0x3a45a0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3a45a4:
    // 0x3a45a4: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x3a45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_3a45a8:
    // 0x3a45a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a45ac:
    // 0x3a45ac: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
label_3a45b0:
    if (ctx->pc == 0x3A45B0u) {
        ctx->pc = 0x3A45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45ACu;
        // 0x3a45b0: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A45B4u;
        goto label_3a45b4;
    }
    ctx->pc = 0x3A45ACu;
    {
        const bool branch_taken_0x3a45ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x3A45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45ACu;
        // 0x3a45b0: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45ac) {
            ctx->pc = 0x3A45C0u;
            goto label_3a45c0;
        }
    }
    ctx->pc = 0x3A45B4u;
label_3a45b4:
    // 0x3a45b4: 0xc10a762  jal         func_429D88
label_3a45b8:
    if (ctx->pc == 0x3A45B8u) {
        ctx->pc = 0x3A45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45B4u;
        // 0x3a45b8: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A45BCu;
        goto label_3a45bc;
    }
    ctx->pc = 0x3A45B4u;
    SET_GPR_U32(ctx, 31, 0x3A45BCu);
    ctx->pc = 0x3A45B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A45B4u;
    // 0x3a45b8: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3A45B4u, 0x3A45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A45BCu;
label_3a45bc:
    // 0x3a45bc: 0x0  nop
    ctx->pc = 0x3a45bcu;
    // NOP
label_3a45c0:
    // 0x3a45c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a45c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a45c4:
    // 0x3a45c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a45c8:
    // 0x3a45c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a45c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a45cc:
    // 0x3a45cc: 0x3e00008  jr          $ra
label_3a45d0:
    if (ctx->pc == 0x3A45D0u) {
        ctx->pc = 0x3A45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45CCu;
        // 0x3a45d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A45D4u;
        goto label_3a45d4;
    }
    ctx->pc = 0x3A45CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45CCu;
        // 0x3a45d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A45CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A45D4u;
label_3a45d4:
    // 0x3a45d4: 0x0  nop
    ctx->pc = 0x3a45d4u;
    // NOP
    ctx->pc = 0x3a45d8u;
}
