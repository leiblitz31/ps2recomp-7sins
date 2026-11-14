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

// Function: sub_001F3B00
// Address: 0x1f3b00 - 0x1f67f0
void sub_001F3B00_0x1f3b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3B00_0x1f3b00");
#endif

    switch (ctx->pc) {
        case 0x1f3b00u: goto label_1f3b00;
        case 0x1f3b04u: goto label_1f3b04;
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b0cu: goto label_1f3b0c;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b14u: goto label_1f3b14;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b1cu: goto label_1f3b1c;
        case 0x1f3b20u: goto label_1f3b20;
        case 0x1f3b24u: goto label_1f3b24;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b2cu: goto label_1f3b2c;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b34u: goto label_1f3b34;
        case 0x1f3b38u: goto label_1f3b38;
        case 0x1f3b3cu: goto label_1f3b3c;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b44u: goto label_1f3b44;
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3b4cu: goto label_1f3b4c;
        case 0x1f3b50u: goto label_1f3b50;
        case 0x1f3b54u: goto label_1f3b54;
        case 0x1f3b58u: goto label_1f3b58;
        case 0x1f3b5cu: goto label_1f3b5c;
        case 0x1f3b60u: goto label_1f3b60;
        case 0x1f3b64u: goto label_1f3b64;
        case 0x1f3b68u: goto label_1f3b68;
        case 0x1f3b6cu: goto label_1f3b6c;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b74u: goto label_1f3b74;
        case 0x1f3b78u: goto label_1f3b78;
        case 0x1f3b7cu: goto label_1f3b7c;
        case 0x1f3b80u: goto label_1f3b80;
        case 0x1f3b84u: goto label_1f3b84;
        case 0x1f3b88u: goto label_1f3b88;
        case 0x1f3b8cu: goto label_1f3b8c;
        case 0x1f3b90u: goto label_1f3b90;
        case 0x1f3b94u: goto label_1f3b94;
        case 0x1f3b98u: goto label_1f3b98;
        case 0x1f3b9cu: goto label_1f3b9c;
        case 0x1f3ba0u: goto label_1f3ba0;
        case 0x1f3ba4u: goto label_1f3ba4;
        case 0x1f3ba8u: goto label_1f3ba8;
        case 0x1f3bacu: goto label_1f3bac;
        case 0x1f3bb0u: goto label_1f3bb0;
        case 0x1f3bb4u: goto label_1f3bb4;
        case 0x1f3bb8u: goto label_1f3bb8;
        case 0x1f3bbcu: goto label_1f3bbc;
        case 0x1f3bc0u: goto label_1f3bc0;
        case 0x1f3bc4u: goto label_1f3bc4;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bccu: goto label_1f3bcc;
        case 0x1f3bd0u: goto label_1f3bd0;
        case 0x1f3bd4u: goto label_1f3bd4;
        case 0x1f3bd8u: goto label_1f3bd8;
        case 0x1f3bdcu: goto label_1f3bdc;
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3be4u: goto label_1f3be4;
        case 0x1f3be8u: goto label_1f3be8;
        case 0x1f3becu: goto label_1f3bec;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3bf4u: goto label_1f3bf4;
        case 0x1f3bf8u: goto label_1f3bf8;
        case 0x1f3bfcu: goto label_1f3bfc;
        case 0x1f3c00u: goto label_1f3c00;
        case 0x1f3c04u: goto label_1f3c04;
        case 0x1f3c08u: goto label_1f3c08;
        case 0x1f3c0cu: goto label_1f3c0c;
        case 0x1f3c10u: goto label_1f3c10;
        case 0x1f3c14u: goto label_1f3c14;
        case 0x1f3c18u: goto label_1f3c18;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c20u: goto label_1f3c20;
        case 0x1f3c24u: goto label_1f3c24;
        case 0x1f3c28u: goto label_1f3c28;
        case 0x1f3c2cu: goto label_1f3c2c;
        case 0x1f3c30u: goto label_1f3c30;
        case 0x1f3c34u: goto label_1f3c34;
        case 0x1f3c38u: goto label_1f3c38;
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3c40u: goto label_1f3c40;
        case 0x1f3c44u: goto label_1f3c44;
        case 0x1f3c48u: goto label_1f3c48;
        case 0x1f3c4cu: goto label_1f3c4c;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c5cu: goto label_1f3c5c;
        case 0x1f3c60u: goto label_1f3c60;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c6cu: goto label_1f3c6c;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c74u: goto label_1f3c74;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c84u: goto label_1f3c84;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c90u: goto label_1f3c90;
        case 0x1f3c94u: goto label_1f3c94;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3c9cu: goto label_1f3c9c;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3cb0u: goto label_1f3cb0;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cc0u: goto label_1f3cc0;
        case 0x1f3cc4u: goto label_1f3cc4;
        case 0x1f3cc8u: goto label_1f3cc8;
        case 0x1f3cccu: goto label_1f3ccc;
        case 0x1f3cd0u: goto label_1f3cd0;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3cd8u: goto label_1f3cd8;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3ce0u: goto label_1f3ce0;
        case 0x1f3ce4u: goto label_1f3ce4;
        case 0x1f3ce8u: goto label_1f3ce8;
        case 0x1f3cecu: goto label_1f3cec;
        case 0x1f3cf0u: goto label_1f3cf0;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3cf8u: goto label_1f3cf8;
        case 0x1f3cfcu: goto label_1f3cfc;
        case 0x1f3d00u: goto label_1f3d00;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d08u: goto label_1f3d08;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d14u: goto label_1f3d14;
        case 0x1f3d18u: goto label_1f3d18;
        case 0x1f3d1cu: goto label_1f3d1c;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d28u: goto label_1f3d28;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d30u: goto label_1f3d30;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d38u: goto label_1f3d38;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d40u: goto label_1f3d40;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d48u: goto label_1f3d48;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d50u: goto label_1f3d50;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d68u: goto label_1f3d68;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d78u: goto label_1f3d78;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d80u: goto label_1f3d80;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d90u: goto label_1f3d90;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d98u: goto label_1f3d98;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3da4u: goto label_1f3da4;
        case 0x1f3da8u: goto label_1f3da8;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3db8u: goto label_1f3db8;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dc4u: goto label_1f3dc4;
        case 0x1f3dc8u: goto label_1f3dc8;
        case 0x1f3dccu: goto label_1f3dcc;
        case 0x1f3dd0u: goto label_1f3dd0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3dd8u: goto label_1f3dd8;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3de0u: goto label_1f3de0;
        case 0x1f3de4u: goto label_1f3de4;
        case 0x1f3de8u: goto label_1f3de8;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df0u: goto label_1f3df0;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3dfcu: goto label_1f3dfc;
        case 0x1f3e00u: goto label_1f3e00;
        case 0x1f3e04u: goto label_1f3e04;
        case 0x1f3e08u: goto label_1f3e08;
        case 0x1f3e0cu: goto label_1f3e0c;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e14u: goto label_1f3e14;
        case 0x1f3e18u: goto label_1f3e18;
        case 0x1f3e1cu: goto label_1f3e1c;
        case 0x1f3e20u: goto label_1f3e20;
        case 0x1f3e24u: goto label_1f3e24;
        case 0x1f3e28u: goto label_1f3e28;
        case 0x1f3e2cu: goto label_1f3e2c;
        case 0x1f3e30u: goto label_1f3e30;
        case 0x1f3e34u: goto label_1f3e34;
        case 0x1f3e38u: goto label_1f3e38;
        case 0x1f3e3cu: goto label_1f3e3c;
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3e44u: goto label_1f3e44;
        case 0x1f3e48u: goto label_1f3e48;
        case 0x1f3e4cu: goto label_1f3e4c;
        case 0x1f3e50u: goto label_1f3e50;
        case 0x1f3e54u: goto label_1f3e54;
        case 0x1f3e58u: goto label_1f3e58;
        case 0x1f3e5cu: goto label_1f3e5c;
        case 0x1f3e60u: goto label_1f3e60;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e68u: goto label_1f3e68;
        case 0x1f3e6cu: goto label_1f3e6c;
        case 0x1f3e70u: goto label_1f3e70;
        case 0x1f3e74u: goto label_1f3e74;
        case 0x1f3e78u: goto label_1f3e78;
        case 0x1f3e7cu: goto label_1f3e7c;
        case 0x1f3e80u: goto label_1f3e80;
        case 0x1f3e84u: goto label_1f3e84;
        case 0x1f3e88u: goto label_1f3e88;
        case 0x1f3e8cu: goto label_1f3e8c;
        case 0x1f3e90u: goto label_1f3e90;
        case 0x1f3e94u: goto label_1f3e94;
        case 0x1f3e98u: goto label_1f3e98;
        case 0x1f3e9cu: goto label_1f3e9c;
        case 0x1f3ea0u: goto label_1f3ea0;
        case 0x1f3ea4u: goto label_1f3ea4;
        case 0x1f3ea8u: goto label_1f3ea8;
        case 0x1f3eacu: goto label_1f3eac;
        case 0x1f3eb0u: goto label_1f3eb0;
        case 0x1f3eb4u: goto label_1f3eb4;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ebcu: goto label_1f3ebc;
        case 0x1f3ec0u: goto label_1f3ec0;
        case 0x1f3ec4u: goto label_1f3ec4;
        case 0x1f3ec8u: goto label_1f3ec8;
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3ed4u: goto label_1f3ed4;
        case 0x1f3ed8u: goto label_1f3ed8;
        case 0x1f3edcu: goto label_1f3edc;
        case 0x1f3ee0u: goto label_1f3ee0;
        case 0x1f3ee4u: goto label_1f3ee4;
        case 0x1f3ee8u: goto label_1f3ee8;
        case 0x1f3eecu: goto label_1f3eec;
        case 0x1f3ef0u: goto label_1f3ef0;
        case 0x1f3ef4u: goto label_1f3ef4;
        case 0x1f3ef8u: goto label_1f3ef8;
        case 0x1f3efcu: goto label_1f3efc;
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f04u: goto label_1f3f04;
        case 0x1f3f08u: goto label_1f3f08;
        case 0x1f3f0cu: goto label_1f3f0c;
        case 0x1f3f10u: goto label_1f3f10;
        case 0x1f3f14u: goto label_1f3f14;
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f1cu: goto label_1f3f1c;
        case 0x1f3f20u: goto label_1f3f20;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f28u: goto label_1f3f28;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f30u: goto label_1f3f30;
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f38u: goto label_1f3f38;
        case 0x1f3f3cu: goto label_1f3f3c;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f4cu: goto label_1f3f4c;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f54u: goto label_1f3f54;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f68u: goto label_1f3f68;
        case 0x1f3f6cu: goto label_1f3f6c;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3f74u: goto label_1f3f74;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3f80u: goto label_1f3f80;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3f88u: goto label_1f3f88;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3f90u: goto label_1f3f90;
        case 0x1f3f94u: goto label_1f3f94;
        case 0x1f3f98u: goto label_1f3f98;
        case 0x1f3f9cu: goto label_1f3f9c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f4090u: goto label_1f4090;
        case 0x1f4094u: goto label_1f4094;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f409cu: goto label_1f409c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a4u: goto label_1f40a4;
        case 0x1f40a8u: goto label_1f40a8;
        case 0x1f40acu: goto label_1f40ac;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40b4u: goto label_1f40b4;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40bcu: goto label_1f40bc;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40c4u: goto label_1f40c4;
        case 0x1f40c8u: goto label_1f40c8;
        case 0x1f40ccu: goto label_1f40cc;
        case 0x1f40d0u: goto label_1f40d0;
        case 0x1f40d4u: goto label_1f40d4;
        case 0x1f40d8u: goto label_1f40d8;
        case 0x1f40dcu: goto label_1f40dc;
        case 0x1f40e0u: goto label_1f40e0;
        case 0x1f40e4u: goto label_1f40e4;
        case 0x1f40e8u: goto label_1f40e8;
        case 0x1f40ecu: goto label_1f40ec;
        case 0x1f40f0u: goto label_1f40f0;
        case 0x1f40f4u: goto label_1f40f4;
        case 0x1f40f8u: goto label_1f40f8;
        case 0x1f40fcu: goto label_1f40fc;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4104u: goto label_1f4104;
        case 0x1f4108u: goto label_1f4108;
        case 0x1f410cu: goto label_1f410c;
        case 0x1f4110u: goto label_1f4110;
        case 0x1f4114u: goto label_1f4114;
        case 0x1f4118u: goto label_1f4118;
        case 0x1f411cu: goto label_1f411c;
        case 0x1f4120u: goto label_1f4120;
        case 0x1f4124u: goto label_1f4124;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f412cu: goto label_1f412c;
        case 0x1f4130u: goto label_1f4130;
        case 0x1f4134u: goto label_1f4134;
        case 0x1f4138u: goto label_1f4138;
        case 0x1f413cu: goto label_1f413c;
        case 0x1f4140u: goto label_1f4140;
        case 0x1f4144u: goto label_1f4144;
        case 0x1f4148u: goto label_1f4148;
        case 0x1f414cu: goto label_1f414c;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f4154u: goto label_1f4154;
        case 0x1f4158u: goto label_1f4158;
        case 0x1f415cu: goto label_1f415c;
        case 0x1f4160u: goto label_1f4160;
        case 0x1f4164u: goto label_1f4164;
        case 0x1f4168u: goto label_1f4168;
        case 0x1f416cu: goto label_1f416c;
        case 0x1f4170u: goto label_1f4170;
        case 0x1f4174u: goto label_1f4174;
        case 0x1f4178u: goto label_1f4178;
        case 0x1f417cu: goto label_1f417c;
        case 0x1f4180u: goto label_1f4180;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f4188u: goto label_1f4188;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f4190u: goto label_1f4190;
        case 0x1f4194u: goto label_1f4194;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f419cu: goto label_1f419c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41a4u: goto label_1f41a4;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b0u: goto label_1f41b0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41b8u: goto label_1f41b8;
        case 0x1f41bcu: goto label_1f41bc;
        case 0x1f41c0u: goto label_1f41c0;
        case 0x1f41c4u: goto label_1f41c4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41ccu: goto label_1f41cc;
        case 0x1f41d0u: goto label_1f41d0;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41e0u: goto label_1f41e0;
        case 0x1f41e4u: goto label_1f41e4;
        case 0x1f41e8u: goto label_1f41e8;
        case 0x1f41ecu: goto label_1f41ec;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41f4u: goto label_1f41f4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4200u: goto label_1f4200;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4208u: goto label_1f4208;
        case 0x1f420cu: goto label_1f420c;
        case 0x1f4210u: goto label_1f4210;
        case 0x1f4214u: goto label_1f4214;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f421cu: goto label_1f421c;
        case 0x1f4220u: goto label_1f4220;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4228u: goto label_1f4228;
        case 0x1f422cu: goto label_1f422c;
        case 0x1f4230u: goto label_1f4230;
        case 0x1f4234u: goto label_1f4234;
        case 0x1f4238u: goto label_1f4238;
        case 0x1f423cu: goto label_1f423c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4244u: goto label_1f4244;
        case 0x1f4248u: goto label_1f4248;
        case 0x1f424cu: goto label_1f424c;
        case 0x1f4250u: goto label_1f4250;
        case 0x1f4254u: goto label_1f4254;
        case 0x1f4258u: goto label_1f4258;
        case 0x1f425cu: goto label_1f425c;
        case 0x1f4260u: goto label_1f4260;
        case 0x1f4264u: goto label_1f4264;
        case 0x1f4268u: goto label_1f4268;
        case 0x1f426cu: goto label_1f426c;
        case 0x1f4270u: goto label_1f4270;
        case 0x1f4274u: goto label_1f4274;
        case 0x1f4278u: goto label_1f4278;
        case 0x1f427cu: goto label_1f427c;
        case 0x1f4280u: goto label_1f4280;
        case 0x1f4284u: goto label_1f4284;
        case 0x1f4288u: goto label_1f4288;
        case 0x1f428cu: goto label_1f428c;
        case 0x1f4290u: goto label_1f4290;
        case 0x1f4294u: goto label_1f4294;
        case 0x1f4298u: goto label_1f4298;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42a4u: goto label_1f42a4;
        case 0x1f42a8u: goto label_1f42a8;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42b4u: goto label_1f42b4;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f42c0u: goto label_1f42c0;
        case 0x1f42c4u: goto label_1f42c4;
        case 0x1f42c8u: goto label_1f42c8;
        case 0x1f42ccu: goto label_1f42cc;
        case 0x1f42d0u: goto label_1f42d0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42d8u: goto label_1f42d8;
        case 0x1f42dcu: goto label_1f42dc;
        case 0x1f42e0u: goto label_1f42e0;
        case 0x1f42e4u: goto label_1f42e4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42ecu: goto label_1f42ec;
        case 0x1f42f0u: goto label_1f42f0;
        case 0x1f42f4u: goto label_1f42f4;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f42fcu: goto label_1f42fc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4304u: goto label_1f4304;
        case 0x1f4308u: goto label_1f4308;
        case 0x1f430cu: goto label_1f430c;
        case 0x1f4310u: goto label_1f4310;
        case 0x1f4314u: goto label_1f4314;
        case 0x1f4318u: goto label_1f4318;
        case 0x1f431cu: goto label_1f431c;
        case 0x1f4320u: goto label_1f4320;
        case 0x1f4324u: goto label_1f4324;
        case 0x1f4328u: goto label_1f4328;
        case 0x1f432cu: goto label_1f432c;
        case 0x1f4330u: goto label_1f4330;
        case 0x1f4334u: goto label_1f4334;
        case 0x1f4338u: goto label_1f4338;
        case 0x1f433cu: goto label_1f433c;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4344u: goto label_1f4344;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f434cu: goto label_1f434c;
        case 0x1f4350u: goto label_1f4350;
        case 0x1f4354u: goto label_1f4354;
        case 0x1f4358u: goto label_1f4358;
        case 0x1f435cu: goto label_1f435c;
        case 0x1f4360u: goto label_1f4360;
        case 0x1f4364u: goto label_1f4364;
        case 0x1f4368u: goto label_1f4368;
        case 0x1f436cu: goto label_1f436c;
        case 0x1f4370u: goto label_1f4370;
        case 0x1f4374u: goto label_1f4374;
        case 0x1f4378u: goto label_1f4378;
        case 0x1f437cu: goto label_1f437c;
        case 0x1f4380u: goto label_1f4380;
        case 0x1f4384u: goto label_1f4384;
        case 0x1f4388u: goto label_1f4388;
        case 0x1f438cu: goto label_1f438c;
        case 0x1f4390u: goto label_1f4390;
        case 0x1f4394u: goto label_1f4394;
        case 0x1f4398u: goto label_1f4398;
        case 0x1f439cu: goto label_1f439c;
        case 0x1f43a0u: goto label_1f43a0;
        case 0x1f43a4u: goto label_1f43a4;
        case 0x1f43a8u: goto label_1f43a8;
        case 0x1f43acu: goto label_1f43ac;
        case 0x1f43b0u: goto label_1f43b0;
        case 0x1f43b4u: goto label_1f43b4;
        case 0x1f43b8u: goto label_1f43b8;
        case 0x1f43bcu: goto label_1f43bc;
        case 0x1f43c0u: goto label_1f43c0;
        case 0x1f43c4u: goto label_1f43c4;
        case 0x1f43c8u: goto label_1f43c8;
        case 0x1f43ccu: goto label_1f43cc;
        case 0x1f43d0u: goto label_1f43d0;
        case 0x1f43d4u: goto label_1f43d4;
        case 0x1f43d8u: goto label_1f43d8;
        case 0x1f43dcu: goto label_1f43dc;
        case 0x1f43e0u: goto label_1f43e0;
        case 0x1f43e4u: goto label_1f43e4;
        case 0x1f43e8u: goto label_1f43e8;
        case 0x1f43ecu: goto label_1f43ec;
        case 0x1f43f0u: goto label_1f43f0;
        case 0x1f43f4u: goto label_1f43f4;
        case 0x1f43f8u: goto label_1f43f8;
        case 0x1f43fcu: goto label_1f43fc;
        case 0x1f4400u: goto label_1f4400;
        case 0x1f4404u: goto label_1f4404;
        case 0x1f4408u: goto label_1f4408;
        case 0x1f440cu: goto label_1f440c;
        case 0x1f4410u: goto label_1f4410;
        case 0x1f4414u: goto label_1f4414;
        case 0x1f4418u: goto label_1f4418;
        case 0x1f441cu: goto label_1f441c;
        case 0x1f4420u: goto label_1f4420;
        case 0x1f4424u: goto label_1f4424;
        case 0x1f4428u: goto label_1f4428;
        case 0x1f442cu: goto label_1f442c;
        case 0x1f4430u: goto label_1f4430;
        case 0x1f4434u: goto label_1f4434;
        case 0x1f4438u: goto label_1f4438;
        case 0x1f443cu: goto label_1f443c;
        case 0x1f4440u: goto label_1f4440;
        case 0x1f4444u: goto label_1f4444;
        case 0x1f4448u: goto label_1f4448;
        case 0x1f444cu: goto label_1f444c;
        case 0x1f4450u: goto label_1f4450;
        case 0x1f4454u: goto label_1f4454;
        case 0x1f4458u: goto label_1f4458;
        case 0x1f445cu: goto label_1f445c;
        case 0x1f4460u: goto label_1f4460;
        case 0x1f4464u: goto label_1f4464;
        case 0x1f4468u: goto label_1f4468;
        case 0x1f446cu: goto label_1f446c;
        case 0x1f4470u: goto label_1f4470;
        case 0x1f4474u: goto label_1f4474;
        case 0x1f4478u: goto label_1f4478;
        case 0x1f447cu: goto label_1f447c;
        case 0x1f4480u: goto label_1f4480;
        case 0x1f4484u: goto label_1f4484;
        case 0x1f4488u: goto label_1f4488;
        case 0x1f448cu: goto label_1f448c;
        case 0x1f4490u: goto label_1f4490;
        case 0x1f4494u: goto label_1f4494;
        case 0x1f4498u: goto label_1f4498;
        case 0x1f449cu: goto label_1f449c;
        case 0x1f44a0u: goto label_1f44a0;
        case 0x1f44a4u: goto label_1f44a4;
        case 0x1f44a8u: goto label_1f44a8;
        case 0x1f44acu: goto label_1f44ac;
        case 0x1f44b0u: goto label_1f44b0;
        case 0x1f44b4u: goto label_1f44b4;
        case 0x1f44b8u: goto label_1f44b8;
        case 0x1f44bcu: goto label_1f44bc;
        case 0x1f44c0u: goto label_1f44c0;
        case 0x1f44c4u: goto label_1f44c4;
        case 0x1f44c8u: goto label_1f44c8;
        case 0x1f44ccu: goto label_1f44cc;
        case 0x1f44d0u: goto label_1f44d0;
        case 0x1f44d4u: goto label_1f44d4;
        case 0x1f44d8u: goto label_1f44d8;
        case 0x1f44dcu: goto label_1f44dc;
        case 0x1f44e0u: goto label_1f44e0;
        case 0x1f44e4u: goto label_1f44e4;
        case 0x1f44e8u: goto label_1f44e8;
        case 0x1f44ecu: goto label_1f44ec;
        case 0x1f44f0u: goto label_1f44f0;
        case 0x1f44f4u: goto label_1f44f4;
        case 0x1f44f8u: goto label_1f44f8;
        case 0x1f44fcu: goto label_1f44fc;
        case 0x1f4500u: goto label_1f4500;
        case 0x1f4504u: goto label_1f4504;
        case 0x1f4508u: goto label_1f4508;
        case 0x1f450cu: goto label_1f450c;
        case 0x1f4510u: goto label_1f4510;
        case 0x1f4514u: goto label_1f4514;
        case 0x1f4518u: goto label_1f4518;
        case 0x1f451cu: goto label_1f451c;
        case 0x1f4520u: goto label_1f4520;
        case 0x1f4524u: goto label_1f4524;
        case 0x1f4528u: goto label_1f4528;
        case 0x1f452cu: goto label_1f452c;
        case 0x1f4530u: goto label_1f4530;
        case 0x1f4534u: goto label_1f4534;
        case 0x1f4538u: goto label_1f4538;
        case 0x1f453cu: goto label_1f453c;
        case 0x1f4540u: goto label_1f4540;
        case 0x1f4544u: goto label_1f4544;
        case 0x1f4548u: goto label_1f4548;
        case 0x1f454cu: goto label_1f454c;
        case 0x1f4550u: goto label_1f4550;
        case 0x1f4554u: goto label_1f4554;
        case 0x1f4558u: goto label_1f4558;
        case 0x1f455cu: goto label_1f455c;
        case 0x1f4560u: goto label_1f4560;
        case 0x1f4564u: goto label_1f4564;
        case 0x1f4568u: goto label_1f4568;
        case 0x1f456cu: goto label_1f456c;
        case 0x1f4570u: goto label_1f4570;
        case 0x1f4574u: goto label_1f4574;
        case 0x1f4578u: goto label_1f4578;
        case 0x1f457cu: goto label_1f457c;
        case 0x1f4580u: goto label_1f4580;
        case 0x1f4584u: goto label_1f4584;
        case 0x1f4588u: goto label_1f4588;
        case 0x1f458cu: goto label_1f458c;
        case 0x1f4590u: goto label_1f4590;
        case 0x1f4594u: goto label_1f4594;
        case 0x1f4598u: goto label_1f4598;
        case 0x1f459cu: goto label_1f459c;
        case 0x1f45a0u: goto label_1f45a0;
        case 0x1f45a4u: goto label_1f45a4;
        case 0x1f45a8u: goto label_1f45a8;
        case 0x1f45acu: goto label_1f45ac;
        case 0x1f45b0u: goto label_1f45b0;
        case 0x1f45b4u: goto label_1f45b4;
        case 0x1f45b8u: goto label_1f45b8;
        case 0x1f45bcu: goto label_1f45bc;
        case 0x1f45c0u: goto label_1f45c0;
        case 0x1f45c4u: goto label_1f45c4;
        case 0x1f45c8u: goto label_1f45c8;
        case 0x1f45ccu: goto label_1f45cc;
        case 0x1f45d0u: goto label_1f45d0;
        case 0x1f45d4u: goto label_1f45d4;
        case 0x1f45d8u: goto label_1f45d8;
        case 0x1f45dcu: goto label_1f45dc;
        case 0x1f45e0u: goto label_1f45e0;
        case 0x1f45e4u: goto label_1f45e4;
        case 0x1f45e8u: goto label_1f45e8;
        case 0x1f45ecu: goto label_1f45ec;
        case 0x1f45f0u: goto label_1f45f0;
        case 0x1f45f4u: goto label_1f45f4;
        case 0x1f45f8u: goto label_1f45f8;
        case 0x1f45fcu: goto label_1f45fc;
        case 0x1f4600u: goto label_1f4600;
        case 0x1f4604u: goto label_1f4604;
        case 0x1f4608u: goto label_1f4608;
        case 0x1f460cu: goto label_1f460c;
        case 0x1f4610u: goto label_1f4610;
        case 0x1f4614u: goto label_1f4614;
        case 0x1f4618u: goto label_1f4618;
        case 0x1f461cu: goto label_1f461c;
        case 0x1f4620u: goto label_1f4620;
        case 0x1f4624u: goto label_1f4624;
        case 0x1f4628u: goto label_1f4628;
        case 0x1f462cu: goto label_1f462c;
        case 0x1f4630u: goto label_1f4630;
        case 0x1f4634u: goto label_1f4634;
        case 0x1f4638u: goto label_1f4638;
        case 0x1f463cu: goto label_1f463c;
        case 0x1f4640u: goto label_1f4640;
        case 0x1f4644u: goto label_1f4644;
        case 0x1f4648u: goto label_1f4648;
        case 0x1f464cu: goto label_1f464c;
        case 0x1f4650u: goto label_1f4650;
        case 0x1f4654u: goto label_1f4654;
        case 0x1f4658u: goto label_1f4658;
        case 0x1f465cu: goto label_1f465c;
        case 0x1f4660u: goto label_1f4660;
        case 0x1f4664u: goto label_1f4664;
        case 0x1f4668u: goto label_1f4668;
        case 0x1f466cu: goto label_1f466c;
        case 0x1f4670u: goto label_1f4670;
        case 0x1f4674u: goto label_1f4674;
        case 0x1f4678u: goto label_1f4678;
        case 0x1f467cu: goto label_1f467c;
        case 0x1f4680u: goto label_1f4680;
        case 0x1f4684u: goto label_1f4684;
        case 0x1f4688u: goto label_1f4688;
        case 0x1f468cu: goto label_1f468c;
        case 0x1f4690u: goto label_1f4690;
        case 0x1f4694u: goto label_1f4694;
        case 0x1f4698u: goto label_1f4698;
        case 0x1f469cu: goto label_1f469c;
        case 0x1f46a0u: goto label_1f46a0;
        case 0x1f46a4u: goto label_1f46a4;
        case 0x1f46a8u: goto label_1f46a8;
        case 0x1f46acu: goto label_1f46ac;
        case 0x1f46b0u: goto label_1f46b0;
        case 0x1f46b4u: goto label_1f46b4;
        case 0x1f46b8u: goto label_1f46b8;
        case 0x1f46bcu: goto label_1f46bc;
        case 0x1f46c0u: goto label_1f46c0;
        case 0x1f46c4u: goto label_1f46c4;
        case 0x1f46c8u: goto label_1f46c8;
        case 0x1f46ccu: goto label_1f46cc;
        case 0x1f46d0u: goto label_1f46d0;
        case 0x1f46d4u: goto label_1f46d4;
        case 0x1f46d8u: goto label_1f46d8;
        case 0x1f46dcu: goto label_1f46dc;
        case 0x1f46e0u: goto label_1f46e0;
        case 0x1f46e4u: goto label_1f46e4;
        case 0x1f46e8u: goto label_1f46e8;
        case 0x1f46ecu: goto label_1f46ec;
        case 0x1f46f0u: goto label_1f46f0;
        case 0x1f46f4u: goto label_1f46f4;
        case 0x1f46f8u: goto label_1f46f8;
        case 0x1f46fcu: goto label_1f46fc;
        case 0x1f4700u: goto label_1f4700;
        case 0x1f4704u: goto label_1f4704;
        case 0x1f4708u: goto label_1f4708;
        case 0x1f470cu: goto label_1f470c;
        case 0x1f4710u: goto label_1f4710;
        case 0x1f4714u: goto label_1f4714;
        case 0x1f4718u: goto label_1f4718;
        case 0x1f471cu: goto label_1f471c;
        case 0x1f4720u: goto label_1f4720;
        case 0x1f4724u: goto label_1f4724;
        case 0x1f4728u: goto label_1f4728;
        case 0x1f472cu: goto label_1f472c;
        case 0x1f4730u: goto label_1f4730;
        case 0x1f4734u: goto label_1f4734;
        case 0x1f4738u: goto label_1f4738;
        case 0x1f473cu: goto label_1f473c;
        case 0x1f4740u: goto label_1f4740;
        case 0x1f4744u: goto label_1f4744;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f474cu: goto label_1f474c;
        case 0x1f4750u: goto label_1f4750;
        case 0x1f4754u: goto label_1f4754;
        case 0x1f4758u: goto label_1f4758;
        case 0x1f475cu: goto label_1f475c;
        case 0x1f4760u: goto label_1f4760;
        case 0x1f4764u: goto label_1f4764;
        case 0x1f4768u: goto label_1f4768;
        case 0x1f476cu: goto label_1f476c;
        case 0x1f4770u: goto label_1f4770;
        case 0x1f4774u: goto label_1f4774;
        case 0x1f4778u: goto label_1f4778;
        case 0x1f477cu: goto label_1f477c;
        case 0x1f4780u: goto label_1f4780;
        case 0x1f4784u: goto label_1f4784;
        case 0x1f4788u: goto label_1f4788;
        case 0x1f478cu: goto label_1f478c;
        case 0x1f4790u: goto label_1f4790;
        case 0x1f4794u: goto label_1f4794;
        case 0x1f4798u: goto label_1f4798;
        case 0x1f479cu: goto label_1f479c;
        case 0x1f47a0u: goto label_1f47a0;
        case 0x1f47a4u: goto label_1f47a4;
        case 0x1f47a8u: goto label_1f47a8;
        case 0x1f47acu: goto label_1f47ac;
        case 0x1f47b0u: goto label_1f47b0;
        case 0x1f47b4u: goto label_1f47b4;
        case 0x1f47b8u: goto label_1f47b8;
        case 0x1f47bcu: goto label_1f47bc;
        case 0x1f47c0u: goto label_1f47c0;
        case 0x1f47c4u: goto label_1f47c4;
        case 0x1f47c8u: goto label_1f47c8;
        case 0x1f47ccu: goto label_1f47cc;
        case 0x1f47d0u: goto label_1f47d0;
        case 0x1f47d4u: goto label_1f47d4;
        case 0x1f47d8u: goto label_1f47d8;
        case 0x1f47dcu: goto label_1f47dc;
        case 0x1f47e0u: goto label_1f47e0;
        case 0x1f47e4u: goto label_1f47e4;
        case 0x1f47e8u: goto label_1f47e8;
        case 0x1f47ecu: goto label_1f47ec;
        case 0x1f47f0u: goto label_1f47f0;
        case 0x1f47f4u: goto label_1f47f4;
        case 0x1f47f8u: goto label_1f47f8;
        case 0x1f47fcu: goto label_1f47fc;
        case 0x1f4800u: goto label_1f4800;
        case 0x1f4804u: goto label_1f4804;
        case 0x1f4808u: goto label_1f4808;
        case 0x1f480cu: goto label_1f480c;
        case 0x1f4810u: goto label_1f4810;
        case 0x1f4814u: goto label_1f4814;
        case 0x1f4818u: goto label_1f4818;
        case 0x1f481cu: goto label_1f481c;
        case 0x1f4820u: goto label_1f4820;
        case 0x1f4824u: goto label_1f4824;
        case 0x1f4828u: goto label_1f4828;
        case 0x1f482cu: goto label_1f482c;
        case 0x1f4830u: goto label_1f4830;
        case 0x1f4834u: goto label_1f4834;
        case 0x1f4838u: goto label_1f4838;
        case 0x1f483cu: goto label_1f483c;
        case 0x1f4840u: goto label_1f4840;
        case 0x1f4844u: goto label_1f4844;
        case 0x1f4848u: goto label_1f4848;
        case 0x1f484cu: goto label_1f484c;
        case 0x1f4850u: goto label_1f4850;
        case 0x1f4854u: goto label_1f4854;
        case 0x1f4858u: goto label_1f4858;
        case 0x1f485cu: goto label_1f485c;
        case 0x1f4860u: goto label_1f4860;
        case 0x1f4864u: goto label_1f4864;
        case 0x1f4868u: goto label_1f4868;
        case 0x1f486cu: goto label_1f486c;
        case 0x1f4870u: goto label_1f4870;
        case 0x1f4874u: goto label_1f4874;
        case 0x1f4878u: goto label_1f4878;
        case 0x1f487cu: goto label_1f487c;
        case 0x1f4880u: goto label_1f4880;
        case 0x1f4884u: goto label_1f4884;
        case 0x1f4888u: goto label_1f4888;
        case 0x1f488cu: goto label_1f488c;
        case 0x1f4890u: goto label_1f4890;
        case 0x1f4894u: goto label_1f4894;
        case 0x1f4898u: goto label_1f4898;
        case 0x1f489cu: goto label_1f489c;
        case 0x1f48a0u: goto label_1f48a0;
        case 0x1f48a4u: goto label_1f48a4;
        case 0x1f48a8u: goto label_1f48a8;
        case 0x1f48acu: goto label_1f48ac;
        case 0x1f48b0u: goto label_1f48b0;
        case 0x1f48b4u: goto label_1f48b4;
        case 0x1f48b8u: goto label_1f48b8;
        case 0x1f48bcu: goto label_1f48bc;
        case 0x1f48c0u: goto label_1f48c0;
        case 0x1f48c4u: goto label_1f48c4;
        case 0x1f48c8u: goto label_1f48c8;
        case 0x1f48ccu: goto label_1f48cc;
        case 0x1f48d0u: goto label_1f48d0;
        case 0x1f48d4u: goto label_1f48d4;
        case 0x1f48d8u: goto label_1f48d8;
        case 0x1f48dcu: goto label_1f48dc;
        case 0x1f48e0u: goto label_1f48e0;
        case 0x1f48e4u: goto label_1f48e4;
        case 0x1f48e8u: goto label_1f48e8;
        case 0x1f48ecu: goto label_1f48ec;
        case 0x1f48f0u: goto label_1f48f0;
        case 0x1f48f4u: goto label_1f48f4;
        case 0x1f48f8u: goto label_1f48f8;
        case 0x1f48fcu: goto label_1f48fc;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f4904u: goto label_1f4904;
        case 0x1f4908u: goto label_1f4908;
        case 0x1f490cu: goto label_1f490c;
        case 0x1f4910u: goto label_1f4910;
        case 0x1f4914u: goto label_1f4914;
        case 0x1f4918u: goto label_1f4918;
        case 0x1f491cu: goto label_1f491c;
        case 0x1f4920u: goto label_1f4920;
        case 0x1f4924u: goto label_1f4924;
        case 0x1f4928u: goto label_1f4928;
        case 0x1f492cu: goto label_1f492c;
        case 0x1f4930u: goto label_1f4930;
        case 0x1f4934u: goto label_1f4934;
        case 0x1f4938u: goto label_1f4938;
        case 0x1f493cu: goto label_1f493c;
        case 0x1f4940u: goto label_1f4940;
        case 0x1f4944u: goto label_1f4944;
        case 0x1f4948u: goto label_1f4948;
        case 0x1f494cu: goto label_1f494c;
        case 0x1f4950u: goto label_1f4950;
        case 0x1f4954u: goto label_1f4954;
        case 0x1f4958u: goto label_1f4958;
        case 0x1f495cu: goto label_1f495c;
        case 0x1f4960u: goto label_1f4960;
        case 0x1f4964u: goto label_1f4964;
        case 0x1f4968u: goto label_1f4968;
        case 0x1f496cu: goto label_1f496c;
        case 0x1f4970u: goto label_1f4970;
        case 0x1f4974u: goto label_1f4974;
        case 0x1f4978u: goto label_1f4978;
        case 0x1f497cu: goto label_1f497c;
        case 0x1f4980u: goto label_1f4980;
        case 0x1f4984u: goto label_1f4984;
        case 0x1f4988u: goto label_1f4988;
        case 0x1f498cu: goto label_1f498c;
        case 0x1f4990u: goto label_1f4990;
        case 0x1f4994u: goto label_1f4994;
        case 0x1f4998u: goto label_1f4998;
        case 0x1f499cu: goto label_1f499c;
        case 0x1f49a0u: goto label_1f49a0;
        case 0x1f49a4u: goto label_1f49a4;
        case 0x1f49a8u: goto label_1f49a8;
        case 0x1f49acu: goto label_1f49ac;
        case 0x1f49b0u: goto label_1f49b0;
        case 0x1f49b4u: goto label_1f49b4;
        case 0x1f49b8u: goto label_1f49b8;
        case 0x1f49bcu: goto label_1f49bc;
        case 0x1f49c0u: goto label_1f49c0;
        case 0x1f49c4u: goto label_1f49c4;
        case 0x1f49c8u: goto label_1f49c8;
        case 0x1f49ccu: goto label_1f49cc;
        case 0x1f49d0u: goto label_1f49d0;
        case 0x1f49d4u: goto label_1f49d4;
        case 0x1f49d8u: goto label_1f49d8;
        case 0x1f49dcu: goto label_1f49dc;
        case 0x1f49e0u: goto label_1f49e0;
        case 0x1f49e4u: goto label_1f49e4;
        case 0x1f49e8u: goto label_1f49e8;
        case 0x1f49ecu: goto label_1f49ec;
        case 0x1f49f0u: goto label_1f49f0;
        case 0x1f49f4u: goto label_1f49f4;
        case 0x1f49f8u: goto label_1f49f8;
        case 0x1f49fcu: goto label_1f49fc;
        case 0x1f4a00u: goto label_1f4a00;
        case 0x1f4a04u: goto label_1f4a04;
        case 0x1f4a08u: goto label_1f4a08;
        case 0x1f4a0cu: goto label_1f4a0c;
        case 0x1f4a10u: goto label_1f4a10;
        case 0x1f4a14u: goto label_1f4a14;
        case 0x1f4a18u: goto label_1f4a18;
        case 0x1f4a1cu: goto label_1f4a1c;
        case 0x1f4a20u: goto label_1f4a20;
        case 0x1f4a24u: goto label_1f4a24;
        case 0x1f4a28u: goto label_1f4a28;
        case 0x1f4a2cu: goto label_1f4a2c;
        case 0x1f4a30u: goto label_1f4a30;
        case 0x1f4a34u: goto label_1f4a34;
        case 0x1f4a38u: goto label_1f4a38;
        case 0x1f4a3cu: goto label_1f4a3c;
        case 0x1f4a40u: goto label_1f4a40;
        case 0x1f4a44u: goto label_1f4a44;
        case 0x1f4a48u: goto label_1f4a48;
        case 0x1f4a4cu: goto label_1f4a4c;
        case 0x1f4a50u: goto label_1f4a50;
        case 0x1f4a54u: goto label_1f4a54;
        case 0x1f4a58u: goto label_1f4a58;
        case 0x1f4a5cu: goto label_1f4a5c;
        case 0x1f4a60u: goto label_1f4a60;
        case 0x1f4a64u: goto label_1f4a64;
        case 0x1f4a68u: goto label_1f4a68;
        case 0x1f4a6cu: goto label_1f4a6c;
        case 0x1f4a70u: goto label_1f4a70;
        case 0x1f4a74u: goto label_1f4a74;
        case 0x1f4a78u: goto label_1f4a78;
        case 0x1f4a7cu: goto label_1f4a7c;
        case 0x1f4a80u: goto label_1f4a80;
        case 0x1f4a84u: goto label_1f4a84;
        case 0x1f4a88u: goto label_1f4a88;
        case 0x1f4a8cu: goto label_1f4a8c;
        case 0x1f4a90u: goto label_1f4a90;
        case 0x1f4a94u: goto label_1f4a94;
        case 0x1f4a98u: goto label_1f4a98;
        case 0x1f4a9cu: goto label_1f4a9c;
        case 0x1f4aa0u: goto label_1f4aa0;
        case 0x1f4aa4u: goto label_1f4aa4;
        case 0x1f4aa8u: goto label_1f4aa8;
        case 0x1f4aacu: goto label_1f4aac;
        case 0x1f4ab0u: goto label_1f4ab0;
        case 0x1f4ab4u: goto label_1f4ab4;
        case 0x1f4ab8u: goto label_1f4ab8;
        case 0x1f4abcu: goto label_1f4abc;
        case 0x1f4ac0u: goto label_1f4ac0;
        case 0x1f4ac4u: goto label_1f4ac4;
        case 0x1f4ac8u: goto label_1f4ac8;
        case 0x1f4accu: goto label_1f4acc;
        case 0x1f4ad0u: goto label_1f4ad0;
        case 0x1f4ad4u: goto label_1f4ad4;
        case 0x1f4ad8u: goto label_1f4ad8;
        case 0x1f4adcu: goto label_1f4adc;
        case 0x1f4ae0u: goto label_1f4ae0;
        case 0x1f4ae4u: goto label_1f4ae4;
        case 0x1f4ae8u: goto label_1f4ae8;
        case 0x1f4aecu: goto label_1f4aec;
        case 0x1f4af0u: goto label_1f4af0;
        case 0x1f4af4u: goto label_1f4af4;
        case 0x1f4af8u: goto label_1f4af8;
        case 0x1f4afcu: goto label_1f4afc;
        case 0x1f4b00u: goto label_1f4b00;
        case 0x1f4b04u: goto label_1f4b04;
        case 0x1f4b08u: goto label_1f4b08;
        case 0x1f4b0cu: goto label_1f4b0c;
        case 0x1f4b10u: goto label_1f4b10;
        case 0x1f4b14u: goto label_1f4b14;
        case 0x1f4b18u: goto label_1f4b18;
        case 0x1f4b1cu: goto label_1f4b1c;
        case 0x1f4b20u: goto label_1f4b20;
        case 0x1f4b24u: goto label_1f4b24;
        case 0x1f4b28u: goto label_1f4b28;
        case 0x1f4b2cu: goto label_1f4b2c;
        case 0x1f4b30u: goto label_1f4b30;
        case 0x1f4b34u: goto label_1f4b34;
        case 0x1f4b38u: goto label_1f4b38;
        case 0x1f4b3cu: goto label_1f4b3c;
        case 0x1f4b40u: goto label_1f4b40;
        case 0x1f4b44u: goto label_1f4b44;
        case 0x1f4b48u: goto label_1f4b48;
        case 0x1f4b4cu: goto label_1f4b4c;
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b54u: goto label_1f4b54;
        case 0x1f4b58u: goto label_1f4b58;
        case 0x1f4b5cu: goto label_1f4b5c;
        case 0x1f4b60u: goto label_1f4b60;
        case 0x1f4b64u: goto label_1f4b64;
        case 0x1f4b68u: goto label_1f4b68;
        case 0x1f4b6cu: goto label_1f4b6c;
        case 0x1f4b70u: goto label_1f4b70;
        case 0x1f4b74u: goto label_1f4b74;
        case 0x1f4b78u: goto label_1f4b78;
        case 0x1f4b7cu: goto label_1f4b7c;
        case 0x1f4b80u: goto label_1f4b80;
        case 0x1f4b84u: goto label_1f4b84;
        case 0x1f4b88u: goto label_1f4b88;
        case 0x1f4b8cu: goto label_1f4b8c;
        case 0x1f4b90u: goto label_1f4b90;
        case 0x1f4b94u: goto label_1f4b94;
        case 0x1f4b98u: goto label_1f4b98;
        case 0x1f4b9cu: goto label_1f4b9c;
        case 0x1f4ba0u: goto label_1f4ba0;
        case 0x1f4ba4u: goto label_1f4ba4;
        case 0x1f4ba8u: goto label_1f4ba8;
        case 0x1f4bacu: goto label_1f4bac;
        case 0x1f4bb0u: goto label_1f4bb0;
        case 0x1f4bb4u: goto label_1f4bb4;
        case 0x1f4bb8u: goto label_1f4bb8;
        case 0x1f4bbcu: goto label_1f4bbc;
        case 0x1f4bc0u: goto label_1f4bc0;
        case 0x1f4bc4u: goto label_1f4bc4;
        case 0x1f4bc8u: goto label_1f4bc8;
        case 0x1f4bccu: goto label_1f4bcc;
        case 0x1f4bd0u: goto label_1f4bd0;
        case 0x1f4bd4u: goto label_1f4bd4;
        case 0x1f4bd8u: goto label_1f4bd8;
        case 0x1f4bdcu: goto label_1f4bdc;
        case 0x1f4be0u: goto label_1f4be0;
        case 0x1f4be4u: goto label_1f4be4;
        case 0x1f4be8u: goto label_1f4be8;
        case 0x1f4becu: goto label_1f4bec;
        case 0x1f4bf0u: goto label_1f4bf0;
        case 0x1f4bf4u: goto label_1f4bf4;
        case 0x1f4bf8u: goto label_1f4bf8;
        case 0x1f4bfcu: goto label_1f4bfc;
        case 0x1f4c00u: goto label_1f4c00;
        case 0x1f4c04u: goto label_1f4c04;
        case 0x1f4c08u: goto label_1f4c08;
        case 0x1f4c0cu: goto label_1f4c0c;
        case 0x1f4c10u: goto label_1f4c10;
        case 0x1f4c14u: goto label_1f4c14;
        case 0x1f4c18u: goto label_1f4c18;
        case 0x1f4c1cu: goto label_1f4c1c;
        case 0x1f4c20u: goto label_1f4c20;
        case 0x1f4c24u: goto label_1f4c24;
        case 0x1f4c28u: goto label_1f4c28;
        case 0x1f4c2cu: goto label_1f4c2c;
        case 0x1f4c30u: goto label_1f4c30;
        case 0x1f4c34u: goto label_1f4c34;
        case 0x1f4c38u: goto label_1f4c38;
        case 0x1f4c3cu: goto label_1f4c3c;
        case 0x1f4c40u: goto label_1f4c40;
        case 0x1f4c44u: goto label_1f4c44;
        case 0x1f4c48u: goto label_1f4c48;
        case 0x1f4c4cu: goto label_1f4c4c;
        case 0x1f4c50u: goto label_1f4c50;
        case 0x1f4c54u: goto label_1f4c54;
        case 0x1f4c58u: goto label_1f4c58;
        case 0x1f4c5cu: goto label_1f4c5c;
        case 0x1f4c60u: goto label_1f4c60;
        case 0x1f4c64u: goto label_1f4c64;
        case 0x1f4c68u: goto label_1f4c68;
        case 0x1f4c6cu: goto label_1f4c6c;
        case 0x1f4c70u: goto label_1f4c70;
        case 0x1f4c74u: goto label_1f4c74;
        case 0x1f4c78u: goto label_1f4c78;
        case 0x1f4c7cu: goto label_1f4c7c;
        case 0x1f4c80u: goto label_1f4c80;
        case 0x1f4c84u: goto label_1f4c84;
        case 0x1f4c88u: goto label_1f4c88;
        case 0x1f4c8cu: goto label_1f4c8c;
        case 0x1f4c90u: goto label_1f4c90;
        case 0x1f4c94u: goto label_1f4c94;
        case 0x1f4c98u: goto label_1f4c98;
        case 0x1f4c9cu: goto label_1f4c9c;
        case 0x1f4ca0u: goto label_1f4ca0;
        case 0x1f4ca4u: goto label_1f4ca4;
        case 0x1f4ca8u: goto label_1f4ca8;
        case 0x1f4cacu: goto label_1f4cac;
        case 0x1f4cb0u: goto label_1f4cb0;
        case 0x1f4cb4u: goto label_1f4cb4;
        case 0x1f4cb8u: goto label_1f4cb8;
        case 0x1f4cbcu: goto label_1f4cbc;
        case 0x1f4cc0u: goto label_1f4cc0;
        case 0x1f4cc4u: goto label_1f4cc4;
        case 0x1f4cc8u: goto label_1f4cc8;
        case 0x1f4cccu: goto label_1f4ccc;
        case 0x1f4cd0u: goto label_1f4cd0;
        case 0x1f4cd4u: goto label_1f4cd4;
        case 0x1f4cd8u: goto label_1f4cd8;
        case 0x1f4cdcu: goto label_1f4cdc;
        case 0x1f4ce0u: goto label_1f4ce0;
        case 0x1f4ce4u: goto label_1f4ce4;
        case 0x1f4ce8u: goto label_1f4ce8;
        case 0x1f4cecu: goto label_1f4cec;
        case 0x1f4cf0u: goto label_1f4cf0;
        case 0x1f4cf4u: goto label_1f4cf4;
        case 0x1f4cf8u: goto label_1f4cf8;
        case 0x1f4cfcu: goto label_1f4cfc;
        case 0x1f4d00u: goto label_1f4d00;
        case 0x1f4d04u: goto label_1f4d04;
        case 0x1f4d08u: goto label_1f4d08;
        case 0x1f4d0cu: goto label_1f4d0c;
        case 0x1f4d10u: goto label_1f4d10;
        case 0x1f4d14u: goto label_1f4d14;
        case 0x1f4d18u: goto label_1f4d18;
        case 0x1f4d1cu: goto label_1f4d1c;
        case 0x1f4d20u: goto label_1f4d20;
        case 0x1f4d24u: goto label_1f4d24;
        case 0x1f4d28u: goto label_1f4d28;
        case 0x1f4d2cu: goto label_1f4d2c;
        case 0x1f4d30u: goto label_1f4d30;
        case 0x1f4d34u: goto label_1f4d34;
        case 0x1f4d38u: goto label_1f4d38;
        case 0x1f4d3cu: goto label_1f4d3c;
        case 0x1f4d40u: goto label_1f4d40;
        case 0x1f4d44u: goto label_1f4d44;
        case 0x1f4d48u: goto label_1f4d48;
        case 0x1f4d4cu: goto label_1f4d4c;
        case 0x1f4d50u: goto label_1f4d50;
        case 0x1f4d54u: goto label_1f4d54;
        case 0x1f4d58u: goto label_1f4d58;
        case 0x1f4d5cu: goto label_1f4d5c;
        case 0x1f4d60u: goto label_1f4d60;
        case 0x1f4d64u: goto label_1f4d64;
        case 0x1f4d68u: goto label_1f4d68;
        case 0x1f4d6cu: goto label_1f4d6c;
        case 0x1f4d70u: goto label_1f4d70;
        case 0x1f4d74u: goto label_1f4d74;
        case 0x1f4d78u: goto label_1f4d78;
        case 0x1f4d7cu: goto label_1f4d7c;
        case 0x1f4d80u: goto label_1f4d80;
        case 0x1f4d84u: goto label_1f4d84;
        case 0x1f4d88u: goto label_1f4d88;
        case 0x1f4d8cu: goto label_1f4d8c;
        case 0x1f4d90u: goto label_1f4d90;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4d98u: goto label_1f4d98;
        case 0x1f4d9cu: goto label_1f4d9c;
        case 0x1f4da0u: goto label_1f4da0;
        case 0x1f4da4u: goto label_1f4da4;
        case 0x1f4da8u: goto label_1f4da8;
        case 0x1f4dacu: goto label_1f4dac;
        case 0x1f4db0u: goto label_1f4db0;
        case 0x1f4db4u: goto label_1f4db4;
        case 0x1f4db8u: goto label_1f4db8;
        case 0x1f4dbcu: goto label_1f4dbc;
        case 0x1f4dc0u: goto label_1f4dc0;
        case 0x1f4dc4u: goto label_1f4dc4;
        case 0x1f4dc8u: goto label_1f4dc8;
        case 0x1f4dccu: goto label_1f4dcc;
        case 0x1f4dd0u: goto label_1f4dd0;
        case 0x1f4dd4u: goto label_1f4dd4;
        case 0x1f4dd8u: goto label_1f4dd8;
        case 0x1f4ddcu: goto label_1f4ddc;
        case 0x1f4de0u: goto label_1f4de0;
        case 0x1f4de4u: goto label_1f4de4;
        case 0x1f4de8u: goto label_1f4de8;
        case 0x1f4decu: goto label_1f4dec;
        case 0x1f4df0u: goto label_1f4df0;
        case 0x1f4df4u: goto label_1f4df4;
        case 0x1f4df8u: goto label_1f4df8;
        case 0x1f4dfcu: goto label_1f4dfc;
        case 0x1f4e00u: goto label_1f4e00;
        case 0x1f4e04u: goto label_1f4e04;
        case 0x1f4e08u: goto label_1f4e08;
        case 0x1f4e0cu: goto label_1f4e0c;
        case 0x1f4e10u: goto label_1f4e10;
        case 0x1f4e14u: goto label_1f4e14;
        case 0x1f4e18u: goto label_1f4e18;
        case 0x1f4e1cu: goto label_1f4e1c;
        case 0x1f4e20u: goto label_1f4e20;
        case 0x1f4e24u: goto label_1f4e24;
        case 0x1f4e28u: goto label_1f4e28;
        case 0x1f4e2cu: goto label_1f4e2c;
        case 0x1f4e30u: goto label_1f4e30;
        case 0x1f4e34u: goto label_1f4e34;
        case 0x1f4e38u: goto label_1f4e38;
        case 0x1f4e3cu: goto label_1f4e3c;
        case 0x1f4e40u: goto label_1f4e40;
        case 0x1f4e44u: goto label_1f4e44;
        case 0x1f4e48u: goto label_1f4e48;
        case 0x1f4e4cu: goto label_1f4e4c;
        case 0x1f4e50u: goto label_1f4e50;
        case 0x1f4e54u: goto label_1f4e54;
        case 0x1f4e58u: goto label_1f4e58;
        case 0x1f4e5cu: goto label_1f4e5c;
        case 0x1f4e60u: goto label_1f4e60;
        case 0x1f4e64u: goto label_1f4e64;
        case 0x1f4e68u: goto label_1f4e68;
        case 0x1f4e6cu: goto label_1f4e6c;
        case 0x1f4e70u: goto label_1f4e70;
        case 0x1f4e74u: goto label_1f4e74;
        case 0x1f4e78u: goto label_1f4e78;
        case 0x1f4e7cu: goto label_1f4e7c;
        case 0x1f4e80u: goto label_1f4e80;
        case 0x1f4e84u: goto label_1f4e84;
        case 0x1f4e88u: goto label_1f4e88;
        case 0x1f4e8cu: goto label_1f4e8c;
        case 0x1f4e90u: goto label_1f4e90;
        case 0x1f4e94u: goto label_1f4e94;
        case 0x1f4e98u: goto label_1f4e98;
        case 0x1f4e9cu: goto label_1f4e9c;
        case 0x1f4ea0u: goto label_1f4ea0;
        case 0x1f4ea4u: goto label_1f4ea4;
        case 0x1f4ea8u: goto label_1f4ea8;
        case 0x1f4eacu: goto label_1f4eac;
        case 0x1f4eb0u: goto label_1f4eb0;
        case 0x1f4eb4u: goto label_1f4eb4;
        case 0x1f4eb8u: goto label_1f4eb8;
        case 0x1f4ebcu: goto label_1f4ebc;
        case 0x1f4ec0u: goto label_1f4ec0;
        case 0x1f4ec4u: goto label_1f4ec4;
        case 0x1f4ec8u: goto label_1f4ec8;
        case 0x1f4eccu: goto label_1f4ecc;
        case 0x1f4ed0u: goto label_1f4ed0;
        case 0x1f4ed4u: goto label_1f4ed4;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4edcu: goto label_1f4edc;
        case 0x1f4ee0u: goto label_1f4ee0;
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4ee8u: goto label_1f4ee8;
        case 0x1f4eecu: goto label_1f4eec;
        case 0x1f4ef0u: goto label_1f4ef0;
        case 0x1f4ef4u: goto label_1f4ef4;
        case 0x1f4ef8u: goto label_1f4ef8;
        case 0x1f4efcu: goto label_1f4efc;
        case 0x1f4f00u: goto label_1f4f00;
        case 0x1f4f04u: goto label_1f4f04;
        case 0x1f4f08u: goto label_1f4f08;
        case 0x1f4f0cu: goto label_1f4f0c;
        case 0x1f4f10u: goto label_1f4f10;
        case 0x1f4f14u: goto label_1f4f14;
        case 0x1f4f18u: goto label_1f4f18;
        case 0x1f4f1cu: goto label_1f4f1c;
        case 0x1f4f20u: goto label_1f4f20;
        case 0x1f4f24u: goto label_1f4f24;
        case 0x1f4f28u: goto label_1f4f28;
        case 0x1f4f2cu: goto label_1f4f2c;
        case 0x1f4f30u: goto label_1f4f30;
        case 0x1f4f34u: goto label_1f4f34;
        case 0x1f4f38u: goto label_1f4f38;
        case 0x1f4f3cu: goto label_1f4f3c;
        case 0x1f4f40u: goto label_1f4f40;
        case 0x1f4f44u: goto label_1f4f44;
        case 0x1f4f48u: goto label_1f4f48;
        case 0x1f4f4cu: goto label_1f4f4c;
        case 0x1f4f50u: goto label_1f4f50;
        case 0x1f4f54u: goto label_1f4f54;
        case 0x1f4f58u: goto label_1f4f58;
        case 0x1f4f5cu: goto label_1f4f5c;
        case 0x1f4f60u: goto label_1f4f60;
        case 0x1f4f64u: goto label_1f4f64;
        case 0x1f4f68u: goto label_1f4f68;
        case 0x1f4f6cu: goto label_1f4f6c;
        case 0x1f4f70u: goto label_1f4f70;
        case 0x1f4f74u: goto label_1f4f74;
        case 0x1f4f78u: goto label_1f4f78;
        case 0x1f4f7cu: goto label_1f4f7c;
        case 0x1f4f80u: goto label_1f4f80;
        case 0x1f4f84u: goto label_1f4f84;
        case 0x1f4f88u: goto label_1f4f88;
        case 0x1f4f8cu: goto label_1f4f8c;
        case 0x1f4f90u: goto label_1f4f90;
        case 0x1f4f94u: goto label_1f4f94;
        case 0x1f4f98u: goto label_1f4f98;
        case 0x1f4f9cu: goto label_1f4f9c;
        case 0x1f4fa0u: goto label_1f4fa0;
        case 0x1f4fa4u: goto label_1f4fa4;
        case 0x1f4fa8u: goto label_1f4fa8;
        case 0x1f4facu: goto label_1f4fac;
        case 0x1f4fb0u: goto label_1f4fb0;
        case 0x1f4fb4u: goto label_1f4fb4;
        case 0x1f4fb8u: goto label_1f4fb8;
        case 0x1f4fbcu: goto label_1f4fbc;
        case 0x1f4fc0u: goto label_1f4fc0;
        case 0x1f4fc4u: goto label_1f4fc4;
        case 0x1f4fc8u: goto label_1f4fc8;
        case 0x1f4fccu: goto label_1f4fcc;
        case 0x1f4fd0u: goto label_1f4fd0;
        case 0x1f4fd4u: goto label_1f4fd4;
        case 0x1f4fd8u: goto label_1f4fd8;
        case 0x1f4fdcu: goto label_1f4fdc;
        case 0x1f4fe0u: goto label_1f4fe0;
        case 0x1f4fe4u: goto label_1f4fe4;
        case 0x1f4fe8u: goto label_1f4fe8;
        case 0x1f4fecu: goto label_1f4fec;
        case 0x1f4ff0u: goto label_1f4ff0;
        case 0x1f4ff4u: goto label_1f4ff4;
        case 0x1f4ff8u: goto label_1f4ff8;
        case 0x1f4ffcu: goto label_1f4ffc;
        case 0x1f5000u: goto label_1f5000;
        case 0x1f5004u: goto label_1f5004;
        case 0x1f5008u: goto label_1f5008;
        case 0x1f500cu: goto label_1f500c;
        case 0x1f5010u: goto label_1f5010;
        case 0x1f5014u: goto label_1f5014;
        case 0x1f5018u: goto label_1f5018;
        case 0x1f501cu: goto label_1f501c;
        case 0x1f5020u: goto label_1f5020;
        case 0x1f5024u: goto label_1f5024;
        case 0x1f5028u: goto label_1f5028;
        case 0x1f502cu: goto label_1f502c;
        case 0x1f5030u: goto label_1f5030;
        case 0x1f5034u: goto label_1f5034;
        case 0x1f5038u: goto label_1f5038;
        case 0x1f503cu: goto label_1f503c;
        case 0x1f5040u: goto label_1f5040;
        case 0x1f5044u: goto label_1f5044;
        case 0x1f5048u: goto label_1f5048;
        case 0x1f504cu: goto label_1f504c;
        case 0x1f5050u: goto label_1f5050;
        case 0x1f5054u: goto label_1f5054;
        case 0x1f5058u: goto label_1f5058;
        case 0x1f505cu: goto label_1f505c;
        case 0x1f5060u: goto label_1f5060;
        case 0x1f5064u: goto label_1f5064;
        case 0x1f5068u: goto label_1f5068;
        case 0x1f506cu: goto label_1f506c;
        case 0x1f5070u: goto label_1f5070;
        case 0x1f5074u: goto label_1f5074;
        case 0x1f5078u: goto label_1f5078;
        case 0x1f507cu: goto label_1f507c;
        case 0x1f5080u: goto label_1f5080;
        case 0x1f5084u: goto label_1f5084;
        case 0x1f5088u: goto label_1f5088;
        case 0x1f508cu: goto label_1f508c;
        case 0x1f5090u: goto label_1f5090;
        case 0x1f5094u: goto label_1f5094;
        case 0x1f5098u: goto label_1f5098;
        case 0x1f509cu: goto label_1f509c;
        case 0x1f50a0u: goto label_1f50a0;
        case 0x1f50a4u: goto label_1f50a4;
        case 0x1f50a8u: goto label_1f50a8;
        case 0x1f50acu: goto label_1f50ac;
        case 0x1f50b0u: goto label_1f50b0;
        case 0x1f50b4u: goto label_1f50b4;
        case 0x1f50b8u: goto label_1f50b8;
        case 0x1f50bcu: goto label_1f50bc;
        case 0x1f50c0u: goto label_1f50c0;
        case 0x1f50c4u: goto label_1f50c4;
        case 0x1f50c8u: goto label_1f50c8;
        case 0x1f50ccu: goto label_1f50cc;
        case 0x1f50d0u: goto label_1f50d0;
        case 0x1f50d4u: goto label_1f50d4;
        case 0x1f50d8u: goto label_1f50d8;
        case 0x1f50dcu: goto label_1f50dc;
        case 0x1f50e0u: goto label_1f50e0;
        case 0x1f50e4u: goto label_1f50e4;
        case 0x1f50e8u: goto label_1f50e8;
        case 0x1f50ecu: goto label_1f50ec;
        case 0x1f50f0u: goto label_1f50f0;
        case 0x1f50f4u: goto label_1f50f4;
        case 0x1f50f8u: goto label_1f50f8;
        case 0x1f50fcu: goto label_1f50fc;
        case 0x1f5100u: goto label_1f5100;
        case 0x1f5104u: goto label_1f5104;
        case 0x1f5108u: goto label_1f5108;
        case 0x1f510cu: goto label_1f510c;
        case 0x1f5110u: goto label_1f5110;
        case 0x1f5114u: goto label_1f5114;
        case 0x1f5118u: goto label_1f5118;
        case 0x1f511cu: goto label_1f511c;
        case 0x1f5120u: goto label_1f5120;
        case 0x1f5124u: goto label_1f5124;
        case 0x1f5128u: goto label_1f5128;
        case 0x1f512cu: goto label_1f512c;
        case 0x1f5130u: goto label_1f5130;
        case 0x1f5134u: goto label_1f5134;
        case 0x1f5138u: goto label_1f5138;
        case 0x1f513cu: goto label_1f513c;
        case 0x1f5140u: goto label_1f5140;
        case 0x1f5144u: goto label_1f5144;
        case 0x1f5148u: goto label_1f5148;
        case 0x1f514cu: goto label_1f514c;
        case 0x1f5150u: goto label_1f5150;
        case 0x1f5154u: goto label_1f5154;
        case 0x1f5158u: goto label_1f5158;
        case 0x1f515cu: goto label_1f515c;
        case 0x1f5160u: goto label_1f5160;
        case 0x1f5164u: goto label_1f5164;
        case 0x1f5168u: goto label_1f5168;
        case 0x1f516cu: goto label_1f516c;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5174u: goto label_1f5174;
        case 0x1f5178u: goto label_1f5178;
        case 0x1f517cu: goto label_1f517c;
        case 0x1f5180u: goto label_1f5180;
        case 0x1f5184u: goto label_1f5184;
        case 0x1f5188u: goto label_1f5188;
        case 0x1f518cu: goto label_1f518c;
        case 0x1f5190u: goto label_1f5190;
        case 0x1f5194u: goto label_1f5194;
        case 0x1f5198u: goto label_1f5198;
        case 0x1f519cu: goto label_1f519c;
        case 0x1f51a0u: goto label_1f51a0;
        case 0x1f51a4u: goto label_1f51a4;
        case 0x1f51a8u: goto label_1f51a8;
        case 0x1f51acu: goto label_1f51ac;
        case 0x1f51b0u: goto label_1f51b0;
        case 0x1f51b4u: goto label_1f51b4;
        case 0x1f51b8u: goto label_1f51b8;
        case 0x1f51bcu: goto label_1f51bc;
        case 0x1f51c0u: goto label_1f51c0;
        case 0x1f51c4u: goto label_1f51c4;
        case 0x1f51c8u: goto label_1f51c8;
        case 0x1f51ccu: goto label_1f51cc;
        case 0x1f51d0u: goto label_1f51d0;
        case 0x1f51d4u: goto label_1f51d4;
        case 0x1f51d8u: goto label_1f51d8;
        case 0x1f51dcu: goto label_1f51dc;
        case 0x1f51e0u: goto label_1f51e0;
        case 0x1f51e4u: goto label_1f51e4;
        case 0x1f51e8u: goto label_1f51e8;
        case 0x1f51ecu: goto label_1f51ec;
        case 0x1f51f0u: goto label_1f51f0;
        case 0x1f51f4u: goto label_1f51f4;
        case 0x1f51f8u: goto label_1f51f8;
        case 0x1f51fcu: goto label_1f51fc;
        case 0x1f5200u: goto label_1f5200;
        case 0x1f5204u: goto label_1f5204;
        case 0x1f5208u: goto label_1f5208;
        case 0x1f520cu: goto label_1f520c;
        case 0x1f5210u: goto label_1f5210;
        case 0x1f5214u: goto label_1f5214;
        case 0x1f5218u: goto label_1f5218;
        case 0x1f521cu: goto label_1f521c;
        case 0x1f5220u: goto label_1f5220;
        case 0x1f5224u: goto label_1f5224;
        case 0x1f5228u: goto label_1f5228;
        case 0x1f522cu: goto label_1f522c;
        case 0x1f5230u: goto label_1f5230;
        case 0x1f5234u: goto label_1f5234;
        case 0x1f5238u: goto label_1f5238;
        case 0x1f523cu: goto label_1f523c;
        case 0x1f5240u: goto label_1f5240;
        case 0x1f5244u: goto label_1f5244;
        case 0x1f5248u: goto label_1f5248;
        case 0x1f524cu: goto label_1f524c;
        case 0x1f5250u: goto label_1f5250;
        case 0x1f5254u: goto label_1f5254;
        case 0x1f5258u: goto label_1f5258;
        case 0x1f525cu: goto label_1f525c;
        case 0x1f5260u: goto label_1f5260;
        case 0x1f5264u: goto label_1f5264;
        case 0x1f5268u: goto label_1f5268;
        case 0x1f526cu: goto label_1f526c;
        case 0x1f5270u: goto label_1f5270;
        case 0x1f5274u: goto label_1f5274;
        case 0x1f5278u: goto label_1f5278;
        case 0x1f527cu: goto label_1f527c;
        case 0x1f5280u: goto label_1f5280;
        case 0x1f5284u: goto label_1f5284;
        case 0x1f5288u: goto label_1f5288;
        case 0x1f528cu: goto label_1f528c;
        case 0x1f5290u: goto label_1f5290;
        case 0x1f5294u: goto label_1f5294;
        case 0x1f5298u: goto label_1f5298;
        case 0x1f529cu: goto label_1f529c;
        case 0x1f52a0u: goto label_1f52a0;
        case 0x1f52a4u: goto label_1f52a4;
        case 0x1f52a8u: goto label_1f52a8;
        case 0x1f52acu: goto label_1f52ac;
        case 0x1f52b0u: goto label_1f52b0;
        case 0x1f52b4u: goto label_1f52b4;
        case 0x1f52b8u: goto label_1f52b8;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52c0u: goto label_1f52c0;
        case 0x1f52c4u: goto label_1f52c4;
        case 0x1f52c8u: goto label_1f52c8;
        case 0x1f52ccu: goto label_1f52cc;
        case 0x1f52d0u: goto label_1f52d0;
        case 0x1f52d4u: goto label_1f52d4;
        case 0x1f52d8u: goto label_1f52d8;
        case 0x1f52dcu: goto label_1f52dc;
        case 0x1f52e0u: goto label_1f52e0;
        case 0x1f52e4u: goto label_1f52e4;
        case 0x1f52e8u: goto label_1f52e8;
        case 0x1f52ecu: goto label_1f52ec;
        case 0x1f52f0u: goto label_1f52f0;
        case 0x1f52f4u: goto label_1f52f4;
        case 0x1f52f8u: goto label_1f52f8;
        case 0x1f52fcu: goto label_1f52fc;
        case 0x1f5300u: goto label_1f5300;
        case 0x1f5304u: goto label_1f5304;
        case 0x1f5308u: goto label_1f5308;
        case 0x1f530cu: goto label_1f530c;
        case 0x1f5310u: goto label_1f5310;
        case 0x1f5314u: goto label_1f5314;
        case 0x1f5318u: goto label_1f5318;
        case 0x1f531cu: goto label_1f531c;
        case 0x1f5320u: goto label_1f5320;
        case 0x1f5324u: goto label_1f5324;
        case 0x1f5328u: goto label_1f5328;
        case 0x1f532cu: goto label_1f532c;
        case 0x1f5330u: goto label_1f5330;
        case 0x1f5334u: goto label_1f5334;
        case 0x1f5338u: goto label_1f5338;
        case 0x1f533cu: goto label_1f533c;
        case 0x1f5340u: goto label_1f5340;
        case 0x1f5344u: goto label_1f5344;
        case 0x1f5348u: goto label_1f5348;
        case 0x1f534cu: goto label_1f534c;
        case 0x1f5350u: goto label_1f5350;
        case 0x1f5354u: goto label_1f5354;
        case 0x1f5358u: goto label_1f5358;
        case 0x1f535cu: goto label_1f535c;
        case 0x1f5360u: goto label_1f5360;
        case 0x1f5364u: goto label_1f5364;
        case 0x1f5368u: goto label_1f5368;
        case 0x1f536cu: goto label_1f536c;
        case 0x1f5370u: goto label_1f5370;
        case 0x1f5374u: goto label_1f5374;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f537cu: goto label_1f537c;
        case 0x1f5380u: goto label_1f5380;
        case 0x1f5384u: goto label_1f5384;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f538cu: goto label_1f538c;
        case 0x1f5390u: goto label_1f5390;
        case 0x1f5394u: goto label_1f5394;
        case 0x1f5398u: goto label_1f5398;
        case 0x1f539cu: goto label_1f539c;
        case 0x1f53a0u: goto label_1f53a0;
        case 0x1f53a4u: goto label_1f53a4;
        case 0x1f53a8u: goto label_1f53a8;
        case 0x1f53acu: goto label_1f53ac;
        case 0x1f53b0u: goto label_1f53b0;
        case 0x1f53b4u: goto label_1f53b4;
        case 0x1f53b8u: goto label_1f53b8;
        case 0x1f53bcu: goto label_1f53bc;
        case 0x1f53c0u: goto label_1f53c0;
        case 0x1f53c4u: goto label_1f53c4;
        case 0x1f53c8u: goto label_1f53c8;
        case 0x1f53ccu: goto label_1f53cc;
        case 0x1f53d0u: goto label_1f53d0;
        case 0x1f53d4u: goto label_1f53d4;
        case 0x1f53d8u: goto label_1f53d8;
        case 0x1f53dcu: goto label_1f53dc;
        case 0x1f53e0u: goto label_1f53e0;
        case 0x1f53e4u: goto label_1f53e4;
        case 0x1f53e8u: goto label_1f53e8;
        case 0x1f53ecu: goto label_1f53ec;
        case 0x1f53f0u: goto label_1f53f0;
        case 0x1f53f4u: goto label_1f53f4;
        case 0x1f53f8u: goto label_1f53f8;
        case 0x1f53fcu: goto label_1f53fc;
        case 0x1f5400u: goto label_1f5400;
        case 0x1f5404u: goto label_1f5404;
        case 0x1f5408u: goto label_1f5408;
        case 0x1f540cu: goto label_1f540c;
        case 0x1f5410u: goto label_1f5410;
        case 0x1f5414u: goto label_1f5414;
        case 0x1f5418u: goto label_1f5418;
        case 0x1f541cu: goto label_1f541c;
        case 0x1f5420u: goto label_1f5420;
        case 0x1f5424u: goto label_1f5424;
        case 0x1f5428u: goto label_1f5428;
        case 0x1f542cu: goto label_1f542c;
        case 0x1f5430u: goto label_1f5430;
        case 0x1f5434u: goto label_1f5434;
        case 0x1f5438u: goto label_1f5438;
        case 0x1f543cu: goto label_1f543c;
        case 0x1f5440u: goto label_1f5440;
        case 0x1f5444u: goto label_1f5444;
        case 0x1f5448u: goto label_1f5448;
        case 0x1f544cu: goto label_1f544c;
        case 0x1f5450u: goto label_1f5450;
        case 0x1f5454u: goto label_1f5454;
        case 0x1f5458u: goto label_1f5458;
        case 0x1f545cu: goto label_1f545c;
        case 0x1f5460u: goto label_1f5460;
        case 0x1f5464u: goto label_1f5464;
        case 0x1f5468u: goto label_1f5468;
        case 0x1f546cu: goto label_1f546c;
        case 0x1f5470u: goto label_1f5470;
        case 0x1f5474u: goto label_1f5474;
        case 0x1f5478u: goto label_1f5478;
        case 0x1f547cu: goto label_1f547c;
        case 0x1f5480u: goto label_1f5480;
        case 0x1f5484u: goto label_1f5484;
        case 0x1f5488u: goto label_1f5488;
        case 0x1f548cu: goto label_1f548c;
        case 0x1f5490u: goto label_1f5490;
        case 0x1f5494u: goto label_1f5494;
        case 0x1f5498u: goto label_1f5498;
        case 0x1f549cu: goto label_1f549c;
        case 0x1f54a0u: goto label_1f54a0;
        case 0x1f54a4u: goto label_1f54a4;
        case 0x1f54a8u: goto label_1f54a8;
        case 0x1f54acu: goto label_1f54ac;
        case 0x1f54b0u: goto label_1f54b0;
        case 0x1f54b4u: goto label_1f54b4;
        case 0x1f54b8u: goto label_1f54b8;
        case 0x1f54bcu: goto label_1f54bc;
        case 0x1f54c0u: goto label_1f54c0;
        case 0x1f54c4u: goto label_1f54c4;
        case 0x1f54c8u: goto label_1f54c8;
        case 0x1f54ccu: goto label_1f54cc;
        case 0x1f54d0u: goto label_1f54d0;
        case 0x1f54d4u: goto label_1f54d4;
        case 0x1f54d8u: goto label_1f54d8;
        case 0x1f54dcu: goto label_1f54dc;
        case 0x1f54e0u: goto label_1f54e0;
        case 0x1f54e4u: goto label_1f54e4;
        case 0x1f54e8u: goto label_1f54e8;
        case 0x1f54ecu: goto label_1f54ec;
        case 0x1f54f0u: goto label_1f54f0;
        case 0x1f54f4u: goto label_1f54f4;
        case 0x1f54f8u: goto label_1f54f8;
        case 0x1f54fcu: goto label_1f54fc;
        case 0x1f5500u: goto label_1f5500;
        case 0x1f5504u: goto label_1f5504;
        case 0x1f5508u: goto label_1f5508;
        case 0x1f550cu: goto label_1f550c;
        case 0x1f5510u: goto label_1f5510;
        case 0x1f5514u: goto label_1f5514;
        case 0x1f5518u: goto label_1f5518;
        case 0x1f551cu: goto label_1f551c;
        case 0x1f5520u: goto label_1f5520;
        case 0x1f5524u: goto label_1f5524;
        case 0x1f5528u: goto label_1f5528;
        case 0x1f552cu: goto label_1f552c;
        case 0x1f5530u: goto label_1f5530;
        case 0x1f5534u: goto label_1f5534;
        case 0x1f5538u: goto label_1f5538;
        case 0x1f553cu: goto label_1f553c;
        case 0x1f5540u: goto label_1f5540;
        case 0x1f5544u: goto label_1f5544;
        case 0x1f5548u: goto label_1f5548;
        case 0x1f554cu: goto label_1f554c;
        case 0x1f5550u: goto label_1f5550;
        case 0x1f5554u: goto label_1f5554;
        case 0x1f5558u: goto label_1f5558;
        case 0x1f555cu: goto label_1f555c;
        case 0x1f5560u: goto label_1f5560;
        case 0x1f5564u: goto label_1f5564;
        case 0x1f5568u: goto label_1f5568;
        case 0x1f556cu: goto label_1f556c;
        case 0x1f5570u: goto label_1f5570;
        case 0x1f5574u: goto label_1f5574;
        case 0x1f5578u: goto label_1f5578;
        case 0x1f557cu: goto label_1f557c;
        case 0x1f5580u: goto label_1f5580;
        case 0x1f5584u: goto label_1f5584;
        case 0x1f5588u: goto label_1f5588;
        case 0x1f558cu: goto label_1f558c;
        case 0x1f5590u: goto label_1f5590;
        case 0x1f5594u: goto label_1f5594;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f559cu: goto label_1f559c;
        case 0x1f55a0u: goto label_1f55a0;
        case 0x1f55a4u: goto label_1f55a4;
        case 0x1f55a8u: goto label_1f55a8;
        case 0x1f55acu: goto label_1f55ac;
        case 0x1f55b0u: goto label_1f55b0;
        case 0x1f55b4u: goto label_1f55b4;
        case 0x1f55b8u: goto label_1f55b8;
        case 0x1f55bcu: goto label_1f55bc;
        case 0x1f55c0u: goto label_1f55c0;
        case 0x1f55c4u: goto label_1f55c4;
        case 0x1f55c8u: goto label_1f55c8;
        case 0x1f55ccu: goto label_1f55cc;
        case 0x1f55d0u: goto label_1f55d0;
        case 0x1f55d4u: goto label_1f55d4;
        case 0x1f55d8u: goto label_1f55d8;
        case 0x1f55dcu: goto label_1f55dc;
        case 0x1f55e0u: goto label_1f55e0;
        case 0x1f55e4u: goto label_1f55e4;
        case 0x1f55e8u: goto label_1f55e8;
        case 0x1f55ecu: goto label_1f55ec;
        case 0x1f55f0u: goto label_1f55f0;
        case 0x1f55f4u: goto label_1f55f4;
        case 0x1f55f8u: goto label_1f55f8;
        case 0x1f55fcu: goto label_1f55fc;
        case 0x1f5600u: goto label_1f5600;
        case 0x1f5604u: goto label_1f5604;
        case 0x1f5608u: goto label_1f5608;
        case 0x1f560cu: goto label_1f560c;
        case 0x1f5610u: goto label_1f5610;
        case 0x1f5614u: goto label_1f5614;
        case 0x1f5618u: goto label_1f5618;
        case 0x1f561cu: goto label_1f561c;
        case 0x1f5620u: goto label_1f5620;
        case 0x1f5624u: goto label_1f5624;
        case 0x1f5628u: goto label_1f5628;
        case 0x1f562cu: goto label_1f562c;
        case 0x1f5630u: goto label_1f5630;
        case 0x1f5634u: goto label_1f5634;
        case 0x1f5638u: goto label_1f5638;
        case 0x1f563cu: goto label_1f563c;
        case 0x1f5640u: goto label_1f5640;
        case 0x1f5644u: goto label_1f5644;
        case 0x1f5648u: goto label_1f5648;
        case 0x1f564cu: goto label_1f564c;
        case 0x1f5650u: goto label_1f5650;
        case 0x1f5654u: goto label_1f5654;
        case 0x1f5658u: goto label_1f5658;
        case 0x1f565cu: goto label_1f565c;
        case 0x1f5660u: goto label_1f5660;
        case 0x1f5664u: goto label_1f5664;
        case 0x1f5668u: goto label_1f5668;
        case 0x1f566cu: goto label_1f566c;
        case 0x1f5670u: goto label_1f5670;
        case 0x1f5674u: goto label_1f5674;
        case 0x1f5678u: goto label_1f5678;
        case 0x1f567cu: goto label_1f567c;
        case 0x1f5680u: goto label_1f5680;
        case 0x1f5684u: goto label_1f5684;
        case 0x1f5688u: goto label_1f5688;
        case 0x1f568cu: goto label_1f568c;
        case 0x1f5690u: goto label_1f5690;
        case 0x1f5694u: goto label_1f5694;
        case 0x1f5698u: goto label_1f5698;
        case 0x1f569cu: goto label_1f569c;
        case 0x1f56a0u: goto label_1f56a0;
        case 0x1f56a4u: goto label_1f56a4;
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f56acu: goto label_1f56ac;
        case 0x1f56b0u: goto label_1f56b0;
        case 0x1f56b4u: goto label_1f56b4;
        case 0x1f56b8u: goto label_1f56b8;
        case 0x1f56bcu: goto label_1f56bc;
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56c4u: goto label_1f56c4;
        case 0x1f56c8u: goto label_1f56c8;
        case 0x1f56ccu: goto label_1f56cc;
        case 0x1f56d0u: goto label_1f56d0;
        case 0x1f56d4u: goto label_1f56d4;
        case 0x1f56d8u: goto label_1f56d8;
        case 0x1f56dcu: goto label_1f56dc;
        case 0x1f56e0u: goto label_1f56e0;
        case 0x1f56e4u: goto label_1f56e4;
        case 0x1f56e8u: goto label_1f56e8;
        case 0x1f56ecu: goto label_1f56ec;
        case 0x1f56f0u: goto label_1f56f0;
        case 0x1f56f4u: goto label_1f56f4;
        case 0x1f56f8u: goto label_1f56f8;
        case 0x1f56fcu: goto label_1f56fc;
        case 0x1f5700u: goto label_1f5700;
        case 0x1f5704u: goto label_1f5704;
        case 0x1f5708u: goto label_1f5708;
        case 0x1f570cu: goto label_1f570c;
        case 0x1f5710u: goto label_1f5710;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5718u: goto label_1f5718;
        case 0x1f571cu: goto label_1f571c;
        case 0x1f5720u: goto label_1f5720;
        case 0x1f5724u: goto label_1f5724;
        case 0x1f5728u: goto label_1f5728;
        case 0x1f572cu: goto label_1f572c;
        case 0x1f5730u: goto label_1f5730;
        case 0x1f5734u: goto label_1f5734;
        case 0x1f5738u: goto label_1f5738;
        case 0x1f573cu: goto label_1f573c;
        case 0x1f5740u: goto label_1f5740;
        case 0x1f5744u: goto label_1f5744;
        case 0x1f5748u: goto label_1f5748;
        case 0x1f574cu: goto label_1f574c;
        case 0x1f5750u: goto label_1f5750;
        case 0x1f5754u: goto label_1f5754;
        case 0x1f5758u: goto label_1f5758;
        case 0x1f575cu: goto label_1f575c;
        case 0x1f5760u: goto label_1f5760;
        case 0x1f5764u: goto label_1f5764;
        case 0x1f5768u: goto label_1f5768;
        case 0x1f576cu: goto label_1f576c;
        case 0x1f5770u: goto label_1f5770;
        case 0x1f5774u: goto label_1f5774;
        case 0x1f5778u: goto label_1f5778;
        case 0x1f577cu: goto label_1f577c;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f5784u: goto label_1f5784;
        case 0x1f5788u: goto label_1f5788;
        case 0x1f578cu: goto label_1f578c;
        case 0x1f5790u: goto label_1f5790;
        case 0x1f5794u: goto label_1f5794;
        case 0x1f5798u: goto label_1f5798;
        case 0x1f579cu: goto label_1f579c;
        case 0x1f57a0u: goto label_1f57a0;
        case 0x1f57a4u: goto label_1f57a4;
        case 0x1f57a8u: goto label_1f57a8;
        case 0x1f57acu: goto label_1f57ac;
        case 0x1f57b0u: goto label_1f57b0;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f57b8u: goto label_1f57b8;
        case 0x1f57bcu: goto label_1f57bc;
        case 0x1f57c0u: goto label_1f57c0;
        case 0x1f57c4u: goto label_1f57c4;
        case 0x1f57c8u: goto label_1f57c8;
        case 0x1f57ccu: goto label_1f57cc;
        case 0x1f57d0u: goto label_1f57d0;
        case 0x1f57d4u: goto label_1f57d4;
        case 0x1f57d8u: goto label_1f57d8;
        case 0x1f57dcu: goto label_1f57dc;
        case 0x1f57e0u: goto label_1f57e0;
        case 0x1f57e4u: goto label_1f57e4;
        case 0x1f57e8u: goto label_1f57e8;
        case 0x1f57ecu: goto label_1f57ec;
        case 0x1f57f0u: goto label_1f57f0;
        case 0x1f57f4u: goto label_1f57f4;
        case 0x1f57f8u: goto label_1f57f8;
        case 0x1f57fcu: goto label_1f57fc;
        case 0x1f5800u: goto label_1f5800;
        case 0x1f5804u: goto label_1f5804;
        case 0x1f5808u: goto label_1f5808;
        case 0x1f580cu: goto label_1f580c;
        case 0x1f5810u: goto label_1f5810;
        case 0x1f5814u: goto label_1f5814;
        case 0x1f5818u: goto label_1f5818;
        case 0x1f581cu: goto label_1f581c;
        case 0x1f5820u: goto label_1f5820;
        case 0x1f5824u: goto label_1f5824;
        case 0x1f5828u: goto label_1f5828;
        case 0x1f582cu: goto label_1f582c;
        case 0x1f5830u: goto label_1f5830;
        case 0x1f5834u: goto label_1f5834;
        case 0x1f5838u: goto label_1f5838;
        case 0x1f583cu: goto label_1f583c;
        case 0x1f5840u: goto label_1f5840;
        case 0x1f5844u: goto label_1f5844;
        case 0x1f5848u: goto label_1f5848;
        case 0x1f584cu: goto label_1f584c;
        case 0x1f5850u: goto label_1f5850;
        case 0x1f5854u: goto label_1f5854;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f585cu: goto label_1f585c;
        case 0x1f5860u: goto label_1f5860;
        case 0x1f5864u: goto label_1f5864;
        case 0x1f5868u: goto label_1f5868;
        case 0x1f586cu: goto label_1f586c;
        case 0x1f5870u: goto label_1f5870;
        case 0x1f5874u: goto label_1f5874;
        case 0x1f5878u: goto label_1f5878;
        case 0x1f587cu: goto label_1f587c;
        case 0x1f5880u: goto label_1f5880;
        case 0x1f5884u: goto label_1f5884;
        case 0x1f5888u: goto label_1f5888;
        case 0x1f588cu: goto label_1f588c;
        case 0x1f5890u: goto label_1f5890;
        case 0x1f5894u: goto label_1f5894;
        case 0x1f5898u: goto label_1f5898;
        case 0x1f589cu: goto label_1f589c;
        case 0x1f58a0u: goto label_1f58a0;
        case 0x1f58a4u: goto label_1f58a4;
        case 0x1f58a8u: goto label_1f58a8;
        case 0x1f58acu: goto label_1f58ac;
        case 0x1f58b0u: goto label_1f58b0;
        case 0x1f58b4u: goto label_1f58b4;
        case 0x1f58b8u: goto label_1f58b8;
        case 0x1f58bcu: goto label_1f58bc;
        case 0x1f58c0u: goto label_1f58c0;
        case 0x1f58c4u: goto label_1f58c4;
        case 0x1f58c8u: goto label_1f58c8;
        case 0x1f58ccu: goto label_1f58cc;
        case 0x1f58d0u: goto label_1f58d0;
        case 0x1f58d4u: goto label_1f58d4;
        case 0x1f58d8u: goto label_1f58d8;
        case 0x1f58dcu: goto label_1f58dc;
        case 0x1f58e0u: goto label_1f58e0;
        case 0x1f58e4u: goto label_1f58e4;
        case 0x1f58e8u: goto label_1f58e8;
        case 0x1f58ecu: goto label_1f58ec;
        case 0x1f58f0u: goto label_1f58f0;
        case 0x1f58f4u: goto label_1f58f4;
        case 0x1f58f8u: goto label_1f58f8;
        case 0x1f58fcu: goto label_1f58fc;
        case 0x1f5900u: goto label_1f5900;
        case 0x1f5904u: goto label_1f5904;
        case 0x1f5908u: goto label_1f5908;
        case 0x1f590cu: goto label_1f590c;
        case 0x1f5910u: goto label_1f5910;
        case 0x1f5914u: goto label_1f5914;
        case 0x1f5918u: goto label_1f5918;
        case 0x1f591cu: goto label_1f591c;
        case 0x1f5920u: goto label_1f5920;
        case 0x1f5924u: goto label_1f5924;
        case 0x1f5928u: goto label_1f5928;
        case 0x1f592cu: goto label_1f592c;
        case 0x1f5930u: goto label_1f5930;
        case 0x1f5934u: goto label_1f5934;
        case 0x1f5938u: goto label_1f5938;
        case 0x1f593cu: goto label_1f593c;
        case 0x1f5940u: goto label_1f5940;
        case 0x1f5944u: goto label_1f5944;
        case 0x1f5948u: goto label_1f5948;
        case 0x1f594cu: goto label_1f594c;
        case 0x1f5950u: goto label_1f5950;
        case 0x1f5954u: goto label_1f5954;
        case 0x1f5958u: goto label_1f5958;
        case 0x1f595cu: goto label_1f595c;
        case 0x1f5960u: goto label_1f5960;
        case 0x1f5964u: goto label_1f5964;
        case 0x1f5968u: goto label_1f5968;
        case 0x1f596cu: goto label_1f596c;
        case 0x1f5970u: goto label_1f5970;
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5978u: goto label_1f5978;
        case 0x1f597cu: goto label_1f597c;
        case 0x1f5980u: goto label_1f5980;
        case 0x1f5984u: goto label_1f5984;
        case 0x1f5988u: goto label_1f5988;
        case 0x1f598cu: goto label_1f598c;
        case 0x1f5990u: goto label_1f5990;
        case 0x1f5994u: goto label_1f5994;
        case 0x1f5998u: goto label_1f5998;
        case 0x1f599cu: goto label_1f599c;
        case 0x1f59a0u: goto label_1f59a0;
        case 0x1f59a4u: goto label_1f59a4;
        case 0x1f59a8u: goto label_1f59a8;
        case 0x1f59acu: goto label_1f59ac;
        case 0x1f59b0u: goto label_1f59b0;
        case 0x1f59b4u: goto label_1f59b4;
        case 0x1f59b8u: goto label_1f59b8;
        case 0x1f59bcu: goto label_1f59bc;
        case 0x1f59c0u: goto label_1f59c0;
        case 0x1f59c4u: goto label_1f59c4;
        case 0x1f59c8u: goto label_1f59c8;
        case 0x1f59ccu: goto label_1f59cc;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59d4u: goto label_1f59d4;
        case 0x1f59d8u: goto label_1f59d8;
        case 0x1f59dcu: goto label_1f59dc;
        case 0x1f59e0u: goto label_1f59e0;
        case 0x1f59e4u: goto label_1f59e4;
        case 0x1f59e8u: goto label_1f59e8;
        case 0x1f59ecu: goto label_1f59ec;
        case 0x1f59f0u: goto label_1f59f0;
        case 0x1f59f4u: goto label_1f59f4;
        case 0x1f59f8u: goto label_1f59f8;
        case 0x1f59fcu: goto label_1f59fc;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a04u: goto label_1f5a04;
        case 0x1f5a08u: goto label_1f5a08;
        case 0x1f5a0cu: goto label_1f5a0c;
        case 0x1f5a10u: goto label_1f5a10;
        case 0x1f5a14u: goto label_1f5a14;
        case 0x1f5a18u: goto label_1f5a18;
        case 0x1f5a1cu: goto label_1f5a1c;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a24u: goto label_1f5a24;
        case 0x1f5a28u: goto label_1f5a28;
        case 0x1f5a2cu: goto label_1f5a2c;
        case 0x1f5a30u: goto label_1f5a30;
        case 0x1f5a34u: goto label_1f5a34;
        case 0x1f5a38u: goto label_1f5a38;
        case 0x1f5a3cu: goto label_1f5a3c;
        case 0x1f5a40u: goto label_1f5a40;
        case 0x1f5a44u: goto label_1f5a44;
        case 0x1f5a48u: goto label_1f5a48;
        case 0x1f5a4cu: goto label_1f5a4c;
        case 0x1f5a50u: goto label_1f5a50;
        case 0x1f5a54u: goto label_1f5a54;
        case 0x1f5a58u: goto label_1f5a58;
        case 0x1f5a5cu: goto label_1f5a5c;
        case 0x1f5a60u: goto label_1f5a60;
        case 0x1f5a64u: goto label_1f5a64;
        case 0x1f5a68u: goto label_1f5a68;
        case 0x1f5a6cu: goto label_1f5a6c;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a74u: goto label_1f5a74;
        case 0x1f5a78u: goto label_1f5a78;
        case 0x1f5a7cu: goto label_1f5a7c;
        case 0x1f5a80u: goto label_1f5a80;
        case 0x1f5a84u: goto label_1f5a84;
        case 0x1f5a88u: goto label_1f5a88;
        case 0x1f5a8cu: goto label_1f5a8c;
        case 0x1f5a90u: goto label_1f5a90;
        case 0x1f5a94u: goto label_1f5a94;
        case 0x1f5a98u: goto label_1f5a98;
        case 0x1f5a9cu: goto label_1f5a9c;
        case 0x1f5aa0u: goto label_1f5aa0;
        case 0x1f5aa4u: goto label_1f5aa4;
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5aacu: goto label_1f5aac;
        case 0x1f5ab0u: goto label_1f5ab0;
        case 0x1f5ab4u: goto label_1f5ab4;
        case 0x1f5ab8u: goto label_1f5ab8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ac0u: goto label_1f5ac0;
        case 0x1f5ac4u: goto label_1f5ac4;
        case 0x1f5ac8u: goto label_1f5ac8;
        case 0x1f5accu: goto label_1f5acc;
        case 0x1f5ad0u: goto label_1f5ad0;
        case 0x1f5ad4u: goto label_1f5ad4;
        case 0x1f5ad8u: goto label_1f5ad8;
        case 0x1f5adcu: goto label_1f5adc;
        case 0x1f5ae0u: goto label_1f5ae0;
        case 0x1f5ae4u: goto label_1f5ae4;
        case 0x1f5ae8u: goto label_1f5ae8;
        case 0x1f5aecu: goto label_1f5aec;
        case 0x1f5af0u: goto label_1f5af0;
        case 0x1f5af4u: goto label_1f5af4;
        case 0x1f5af8u: goto label_1f5af8;
        case 0x1f5afcu: goto label_1f5afc;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b04u: goto label_1f5b04;
        case 0x1f5b08u: goto label_1f5b08;
        case 0x1f5b0cu: goto label_1f5b0c;
        case 0x1f5b10u: goto label_1f5b10;
        case 0x1f5b14u: goto label_1f5b14;
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b1cu: goto label_1f5b1c;
        case 0x1f5b20u: goto label_1f5b20;
        case 0x1f5b24u: goto label_1f5b24;
        case 0x1f5b28u: goto label_1f5b28;
        case 0x1f5b2cu: goto label_1f5b2c;
        case 0x1f5b30u: goto label_1f5b30;
        case 0x1f5b34u: goto label_1f5b34;
        case 0x1f5b38u: goto label_1f5b38;
        case 0x1f5b3cu: goto label_1f5b3c;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b44u: goto label_1f5b44;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5b4cu: goto label_1f5b4c;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b54u: goto label_1f5b54;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b5cu: goto label_1f5b5c;
        case 0x1f5b60u: goto label_1f5b60;
        case 0x1f5b64u: goto label_1f5b64;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b6cu: goto label_1f5b6c;
        case 0x1f5b70u: goto label_1f5b70;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b78u: goto label_1f5b78;
        case 0x1f5b7cu: goto label_1f5b7c;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5b84u: goto label_1f5b84;
        case 0x1f5b88u: goto label_1f5b88;
        case 0x1f5b8cu: goto label_1f5b8c;
        case 0x1f5b90u: goto label_1f5b90;
        case 0x1f5b94u: goto label_1f5b94;
        case 0x1f5b98u: goto label_1f5b98;
        case 0x1f5b9cu: goto label_1f5b9c;
        case 0x1f5ba0u: goto label_1f5ba0;
        case 0x1f5ba4u: goto label_1f5ba4;
        case 0x1f5ba8u: goto label_1f5ba8;
        case 0x1f5bacu: goto label_1f5bac;
        case 0x1f5bb0u: goto label_1f5bb0;
        case 0x1f5bb4u: goto label_1f5bb4;
        case 0x1f5bb8u: goto label_1f5bb8;
        case 0x1f5bbcu: goto label_1f5bbc;
        case 0x1f5bc0u: goto label_1f5bc0;
        case 0x1f5bc4u: goto label_1f5bc4;
        case 0x1f5bc8u: goto label_1f5bc8;
        case 0x1f5bccu: goto label_1f5bcc;
        case 0x1f5bd0u: goto label_1f5bd0;
        case 0x1f5bd4u: goto label_1f5bd4;
        case 0x1f5bd8u: goto label_1f5bd8;
        case 0x1f5bdcu: goto label_1f5bdc;
        case 0x1f5be0u: goto label_1f5be0;
        case 0x1f5be4u: goto label_1f5be4;
        case 0x1f5be8u: goto label_1f5be8;
        case 0x1f5becu: goto label_1f5bec;
        case 0x1f5bf0u: goto label_1f5bf0;
        case 0x1f5bf4u: goto label_1f5bf4;
        case 0x1f5bf8u: goto label_1f5bf8;
        case 0x1f5bfcu: goto label_1f5bfc;
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c04u: goto label_1f5c04;
        case 0x1f5c08u: goto label_1f5c08;
        case 0x1f5c0cu: goto label_1f5c0c;
        case 0x1f5c10u: goto label_1f5c10;
        case 0x1f5c14u: goto label_1f5c14;
        case 0x1f5c18u: goto label_1f5c18;
        case 0x1f5c1cu: goto label_1f5c1c;
        case 0x1f5c20u: goto label_1f5c20;
        case 0x1f5c24u: goto label_1f5c24;
        case 0x1f5c28u: goto label_1f5c28;
        case 0x1f5c2cu: goto label_1f5c2c;
        case 0x1f5c30u: goto label_1f5c30;
        case 0x1f5c34u: goto label_1f5c34;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c3cu: goto label_1f5c3c;
        case 0x1f5c40u: goto label_1f5c40;
        case 0x1f5c44u: goto label_1f5c44;
        case 0x1f5c48u: goto label_1f5c48;
        case 0x1f5c4cu: goto label_1f5c4c;
        case 0x1f5c50u: goto label_1f5c50;
        case 0x1f5c54u: goto label_1f5c54;
        case 0x1f5c58u: goto label_1f5c58;
        case 0x1f5c5cu: goto label_1f5c5c;
        case 0x1f5c60u: goto label_1f5c60;
        case 0x1f5c64u: goto label_1f5c64;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c6cu: goto label_1f5c6c;
        case 0x1f5c70u: goto label_1f5c70;
        case 0x1f5c74u: goto label_1f5c74;
        case 0x1f5c78u: goto label_1f5c78;
        case 0x1f5c7cu: goto label_1f5c7c;
        case 0x1f5c80u: goto label_1f5c80;
        case 0x1f5c84u: goto label_1f5c84;
        case 0x1f5c88u: goto label_1f5c88;
        case 0x1f5c8cu: goto label_1f5c8c;
        case 0x1f5c90u: goto label_1f5c90;
        case 0x1f5c94u: goto label_1f5c94;
        case 0x1f5c98u: goto label_1f5c98;
        case 0x1f5c9cu: goto label_1f5c9c;
        case 0x1f5ca0u: goto label_1f5ca0;
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5ca8u: goto label_1f5ca8;
        case 0x1f5cacu: goto label_1f5cac;
        case 0x1f5cb0u: goto label_1f5cb0;
        case 0x1f5cb4u: goto label_1f5cb4;
        case 0x1f5cb8u: goto label_1f5cb8;
        case 0x1f5cbcu: goto label_1f5cbc;
        case 0x1f5cc0u: goto label_1f5cc0;
        case 0x1f5cc4u: goto label_1f5cc4;
        case 0x1f5cc8u: goto label_1f5cc8;
        case 0x1f5cccu: goto label_1f5ccc;
        case 0x1f5cd0u: goto label_1f5cd0;
        case 0x1f5cd4u: goto label_1f5cd4;
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5cdcu: goto label_1f5cdc;
        case 0x1f5ce0u: goto label_1f5ce0;
        case 0x1f5ce4u: goto label_1f5ce4;
        case 0x1f5ce8u: goto label_1f5ce8;
        case 0x1f5cecu: goto label_1f5cec;
        case 0x1f5cf0u: goto label_1f5cf0;
        case 0x1f5cf4u: goto label_1f5cf4;
        case 0x1f5cf8u: goto label_1f5cf8;
        case 0x1f5cfcu: goto label_1f5cfc;
        case 0x1f5d00u: goto label_1f5d00;
        case 0x1f5d04u: goto label_1f5d04;
        case 0x1f5d08u: goto label_1f5d08;
        case 0x1f5d0cu: goto label_1f5d0c;
        case 0x1f5d10u: goto label_1f5d10;
        case 0x1f5d14u: goto label_1f5d14;
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d1cu: goto label_1f5d1c;
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d24u: goto label_1f5d24;
        case 0x1f5d28u: goto label_1f5d28;
        case 0x1f5d2cu: goto label_1f5d2c;
        case 0x1f5d30u: goto label_1f5d30;
        case 0x1f5d34u: goto label_1f5d34;
        case 0x1f5d38u: goto label_1f5d38;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d40u: goto label_1f5d40;
        case 0x1f5d44u: goto label_1f5d44;
        case 0x1f5d48u: goto label_1f5d48;
        case 0x1f5d4cu: goto label_1f5d4c;
        case 0x1f5d50u: goto label_1f5d50;
        case 0x1f5d54u: goto label_1f5d54;
        case 0x1f5d58u: goto label_1f5d58;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d60u: goto label_1f5d60;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d68u: goto label_1f5d68;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d78u: goto label_1f5d78;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d80u: goto label_1f5d80;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d8cu: goto label_1f5d8c;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5d9cu: goto label_1f5d9c;
        case 0x1f5da0u: goto label_1f5da0;
        case 0x1f5da4u: goto label_1f5da4;
        case 0x1f5da8u: goto label_1f5da8;
        case 0x1f5dacu: goto label_1f5dac;
        case 0x1f5db0u: goto label_1f5db0;
        case 0x1f5db4u: goto label_1f5db4;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dbcu: goto label_1f5dbc;
        case 0x1f5dc0u: goto label_1f5dc0;
        case 0x1f5dc4u: goto label_1f5dc4;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5dccu: goto label_1f5dcc;
        case 0x1f5dd0u: goto label_1f5dd0;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5dd8u: goto label_1f5dd8;
        case 0x1f5ddcu: goto label_1f5ddc;
        case 0x1f5de0u: goto label_1f5de0;
        case 0x1f5de4u: goto label_1f5de4;
        case 0x1f5de8u: goto label_1f5de8;
        case 0x1f5decu: goto label_1f5dec;
        case 0x1f5df0u: goto label_1f5df0;
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5df8u: goto label_1f5df8;
        case 0x1f5dfcu: goto label_1f5dfc;
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e04u: goto label_1f5e04;
        case 0x1f5e08u: goto label_1f5e08;
        case 0x1f5e0cu: goto label_1f5e0c;
        case 0x1f5e10u: goto label_1f5e10;
        case 0x1f5e14u: goto label_1f5e14;
        case 0x1f5e18u: goto label_1f5e18;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e20u: goto label_1f5e20;
        case 0x1f5e24u: goto label_1f5e24;
        case 0x1f5e28u: goto label_1f5e28;
        case 0x1f5e2cu: goto label_1f5e2c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e34u: goto label_1f5e34;
        case 0x1f5e38u: goto label_1f5e38;
        case 0x1f5e3cu: goto label_1f5e3c;
        case 0x1f5e40u: goto label_1f5e40;
        case 0x1f5e44u: goto label_1f5e44;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e4cu: goto label_1f5e4c;
        case 0x1f5e50u: goto label_1f5e50;
        case 0x1f5e54u: goto label_1f5e54;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e5cu: goto label_1f5e5c;
        case 0x1f5e60u: goto label_1f5e60;
        case 0x1f5e64u: goto label_1f5e64;
        case 0x1f5e68u: goto label_1f5e68;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5e74u: goto label_1f5e74;
        case 0x1f5e78u: goto label_1f5e78;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5e80u: goto label_1f5e80;
        case 0x1f5e84u: goto label_1f5e84;
        case 0x1f5e88u: goto label_1f5e88;
        case 0x1f5e8cu: goto label_1f5e8c;
        case 0x1f5e90u: goto label_1f5e90;
        case 0x1f5e94u: goto label_1f5e94;
        case 0x1f5e98u: goto label_1f5e98;
        case 0x1f5e9cu: goto label_1f5e9c;
        case 0x1f5ea0u: goto label_1f5ea0;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ea8u: goto label_1f5ea8;
        case 0x1f5eacu: goto label_1f5eac;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5eb8u: goto label_1f5eb8;
        case 0x1f5ebcu: goto label_1f5ebc;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ec4u: goto label_1f5ec4;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5eccu: goto label_1f5ecc;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5ed4u: goto label_1f5ed4;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee4u: goto label_1f5ee4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef4u: goto label_1f5ef4;
        case 0x1f5ef8u: goto label_1f5ef8;
        case 0x1f5efcu: goto label_1f5efc;
        case 0x1f5f00u: goto label_1f5f00;
        case 0x1f5f04u: goto label_1f5f04;
        case 0x1f5f08u: goto label_1f5f08;
        case 0x1f5f0cu: goto label_1f5f0c;
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f14u: goto label_1f5f14;
        case 0x1f5f18u: goto label_1f5f18;
        case 0x1f5f1cu: goto label_1f5f1c;
        case 0x1f5f20u: goto label_1f5f20;
        case 0x1f5f24u: goto label_1f5f24;
        case 0x1f5f28u: goto label_1f5f28;
        case 0x1f5f2cu: goto label_1f5f2c;
        case 0x1f5f30u: goto label_1f5f30;
        case 0x1f5f34u: goto label_1f5f34;
        case 0x1f5f38u: goto label_1f5f38;
        case 0x1f5f3cu: goto label_1f5f3c;
        case 0x1f5f40u: goto label_1f5f40;
        case 0x1f5f44u: goto label_1f5f44;
        case 0x1f5f48u: goto label_1f5f48;
        case 0x1f5f4cu: goto label_1f5f4c;
        case 0x1f5f50u: goto label_1f5f50;
        case 0x1f5f54u: goto label_1f5f54;
        case 0x1f5f58u: goto label_1f5f58;
        case 0x1f5f5cu: goto label_1f5f5c;
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f64u: goto label_1f5f64;
        case 0x1f5f68u: goto label_1f5f68;
        case 0x1f5f6cu: goto label_1f5f6c;
        case 0x1f5f70u: goto label_1f5f70;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f78u: goto label_1f5f78;
        case 0x1f5f7cu: goto label_1f5f7c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f98u: goto label_1f5f98;
        case 0x1f5f9cu: goto label_1f5f9c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f5fa4u: goto label_1f5fa4;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5facu: goto label_1f5fac;
        case 0x1f5fb0u: goto label_1f5fb0;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fb8u: goto label_1f5fb8;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fc0u: goto label_1f5fc0;
        case 0x1f5fc4u: goto label_1f5fc4;
        case 0x1f5fc8u: goto label_1f5fc8;
        case 0x1f5fccu: goto label_1f5fcc;
        case 0x1f5fd0u: goto label_1f5fd0;
        case 0x1f5fd4u: goto label_1f5fd4;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fdcu: goto label_1f5fdc;
        case 0x1f5fe0u: goto label_1f5fe0;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5fecu: goto label_1f5fec;
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f5ff8u: goto label_1f5ff8;
        case 0x1f5ffcu: goto label_1f5ffc;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f6004u: goto label_1f6004;
        case 0x1f6008u: goto label_1f6008;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6010u: goto label_1f6010;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6018u: goto label_1f6018;
        case 0x1f601cu: goto label_1f601c;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6024u: goto label_1f6024;
        case 0x1f6028u: goto label_1f6028;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6030u: goto label_1f6030;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f6038u: goto label_1f6038;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6044u: goto label_1f6044;
        case 0x1f6048u: goto label_1f6048;
        case 0x1f604cu: goto label_1f604c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6054u: goto label_1f6054;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f605cu: goto label_1f605c;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6074u: goto label_1f6074;
        case 0x1f6078u: goto label_1f6078;
        case 0x1f607cu: goto label_1f607c;
        case 0x1f6080u: goto label_1f6080;
        case 0x1f6084u: goto label_1f6084;
        case 0x1f6088u: goto label_1f6088;
        case 0x1f608cu: goto label_1f608c;
        case 0x1f6090u: goto label_1f6090;
        case 0x1f6094u: goto label_1f6094;
        case 0x1f6098u: goto label_1f6098;
        case 0x1f609cu: goto label_1f609c;
        case 0x1f60a0u: goto label_1f60a0;
        case 0x1f60a4u: goto label_1f60a4;
        case 0x1f60a8u: goto label_1f60a8;
        case 0x1f60acu: goto label_1f60ac;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60b4u: goto label_1f60b4;
        case 0x1f60b8u: goto label_1f60b8;
        case 0x1f60bcu: goto label_1f60bc;
        case 0x1f60c0u: goto label_1f60c0;
        case 0x1f60c4u: goto label_1f60c4;
        case 0x1f60c8u: goto label_1f60c8;
        case 0x1f60ccu: goto label_1f60cc;
        case 0x1f60d0u: goto label_1f60d0;
        case 0x1f60d4u: goto label_1f60d4;
        case 0x1f60d8u: goto label_1f60d8;
        case 0x1f60dcu: goto label_1f60dc;
        case 0x1f60e0u: goto label_1f60e0;
        case 0x1f60e4u: goto label_1f60e4;
        case 0x1f60e8u: goto label_1f60e8;
        case 0x1f60ecu: goto label_1f60ec;
        case 0x1f60f0u: goto label_1f60f0;
        case 0x1f60f4u: goto label_1f60f4;
        case 0x1f60f8u: goto label_1f60f8;
        case 0x1f60fcu: goto label_1f60fc;
        case 0x1f6100u: goto label_1f6100;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6108u: goto label_1f6108;
        case 0x1f610cu: goto label_1f610c;
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6114u: goto label_1f6114;
        case 0x1f6118u: goto label_1f6118;
        case 0x1f611cu: goto label_1f611c;
        case 0x1f6120u: goto label_1f6120;
        case 0x1f6124u: goto label_1f6124;
        case 0x1f6128u: goto label_1f6128;
        case 0x1f612cu: goto label_1f612c;
        case 0x1f6130u: goto label_1f6130;
        case 0x1f6134u: goto label_1f6134;
        case 0x1f6138u: goto label_1f6138;
        case 0x1f613cu: goto label_1f613c;
        case 0x1f6140u: goto label_1f6140;
        case 0x1f6144u: goto label_1f6144;
        case 0x1f6148u: goto label_1f6148;
        case 0x1f614cu: goto label_1f614c;
        case 0x1f6150u: goto label_1f6150;
        case 0x1f6154u: goto label_1f6154;
        case 0x1f6158u: goto label_1f6158;
        case 0x1f615cu: goto label_1f615c;
        case 0x1f6160u: goto label_1f6160;
        case 0x1f6164u: goto label_1f6164;
        case 0x1f6168u: goto label_1f6168;
        case 0x1f616cu: goto label_1f616c;
        case 0x1f6170u: goto label_1f6170;
        case 0x1f6174u: goto label_1f6174;
        case 0x1f6178u: goto label_1f6178;
        case 0x1f617cu: goto label_1f617c;
        case 0x1f6180u: goto label_1f6180;
        case 0x1f6184u: goto label_1f6184;
        case 0x1f6188u: goto label_1f6188;
        case 0x1f618cu: goto label_1f618c;
        case 0x1f6190u: goto label_1f6190;
        case 0x1f6194u: goto label_1f6194;
        case 0x1f6198u: goto label_1f6198;
        case 0x1f619cu: goto label_1f619c;
        case 0x1f61a0u: goto label_1f61a0;
        case 0x1f61a4u: goto label_1f61a4;
        case 0x1f61a8u: goto label_1f61a8;
        case 0x1f61acu: goto label_1f61ac;
        case 0x1f61b0u: goto label_1f61b0;
        case 0x1f61b4u: goto label_1f61b4;
        case 0x1f61b8u: goto label_1f61b8;
        case 0x1f61bcu: goto label_1f61bc;
        case 0x1f61c0u: goto label_1f61c0;
        case 0x1f61c4u: goto label_1f61c4;
        case 0x1f61c8u: goto label_1f61c8;
        case 0x1f61ccu: goto label_1f61cc;
        case 0x1f61d0u: goto label_1f61d0;
        case 0x1f61d4u: goto label_1f61d4;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61dcu: goto label_1f61dc;
        case 0x1f61e0u: goto label_1f61e0;
        case 0x1f61e4u: goto label_1f61e4;
        case 0x1f61e8u: goto label_1f61e8;
        case 0x1f61ecu: goto label_1f61ec;
        case 0x1f61f0u: goto label_1f61f0;
        case 0x1f61f4u: goto label_1f61f4;
        case 0x1f61f8u: goto label_1f61f8;
        case 0x1f61fcu: goto label_1f61fc;
        case 0x1f6200u: goto label_1f6200;
        case 0x1f6204u: goto label_1f6204;
        case 0x1f6208u: goto label_1f6208;
        case 0x1f620cu: goto label_1f620c;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f6214u: goto label_1f6214;
        case 0x1f6218u: goto label_1f6218;
        case 0x1f621cu: goto label_1f621c;
        case 0x1f6220u: goto label_1f6220;
        case 0x1f6224u: goto label_1f6224;
        case 0x1f6228u: goto label_1f6228;
        case 0x1f622cu: goto label_1f622c;
        case 0x1f6230u: goto label_1f6230;
        case 0x1f6234u: goto label_1f6234;
        case 0x1f6238u: goto label_1f6238;
        case 0x1f623cu: goto label_1f623c;
        case 0x1f6240u: goto label_1f6240;
        case 0x1f6244u: goto label_1f6244;
        case 0x1f6248u: goto label_1f6248;
        case 0x1f624cu: goto label_1f624c;
        case 0x1f6250u: goto label_1f6250;
        case 0x1f6254u: goto label_1f6254;
        case 0x1f6258u: goto label_1f6258;
        case 0x1f625cu: goto label_1f625c;
        case 0x1f6260u: goto label_1f6260;
        case 0x1f6264u: goto label_1f6264;
        case 0x1f6268u: goto label_1f6268;
        case 0x1f626cu: goto label_1f626c;
        case 0x1f6270u: goto label_1f6270;
        case 0x1f6274u: goto label_1f6274;
        case 0x1f6278u: goto label_1f6278;
        case 0x1f627cu: goto label_1f627c;
        case 0x1f6280u: goto label_1f6280;
        case 0x1f6284u: goto label_1f6284;
        case 0x1f6288u: goto label_1f6288;
        case 0x1f628cu: goto label_1f628c;
        case 0x1f6290u: goto label_1f6290;
        case 0x1f6294u: goto label_1f6294;
        case 0x1f6298u: goto label_1f6298;
        case 0x1f629cu: goto label_1f629c;
        case 0x1f62a0u: goto label_1f62a0;
        case 0x1f62a4u: goto label_1f62a4;
        case 0x1f62a8u: goto label_1f62a8;
        case 0x1f62acu: goto label_1f62ac;
        case 0x1f62b0u: goto label_1f62b0;
        case 0x1f62b4u: goto label_1f62b4;
        case 0x1f62b8u: goto label_1f62b8;
        case 0x1f62bcu: goto label_1f62bc;
        case 0x1f62c0u: goto label_1f62c0;
        case 0x1f62c4u: goto label_1f62c4;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62ccu: goto label_1f62cc;
        case 0x1f62d0u: goto label_1f62d0;
        case 0x1f62d4u: goto label_1f62d4;
        case 0x1f62d8u: goto label_1f62d8;
        case 0x1f62dcu: goto label_1f62dc;
        case 0x1f62e0u: goto label_1f62e0;
        case 0x1f62e4u: goto label_1f62e4;
        case 0x1f62e8u: goto label_1f62e8;
        case 0x1f62ecu: goto label_1f62ec;
        case 0x1f62f0u: goto label_1f62f0;
        case 0x1f62f4u: goto label_1f62f4;
        case 0x1f62f8u: goto label_1f62f8;
        case 0x1f62fcu: goto label_1f62fc;
        case 0x1f6300u: goto label_1f6300;
        case 0x1f6304u: goto label_1f6304;
        case 0x1f6308u: goto label_1f6308;
        case 0x1f630cu: goto label_1f630c;
        case 0x1f6310u: goto label_1f6310;
        case 0x1f6314u: goto label_1f6314;
        case 0x1f6318u: goto label_1f6318;
        case 0x1f631cu: goto label_1f631c;
        case 0x1f6320u: goto label_1f6320;
        case 0x1f6324u: goto label_1f6324;
        case 0x1f6328u: goto label_1f6328;
        case 0x1f632cu: goto label_1f632c;
        case 0x1f6330u: goto label_1f6330;
        case 0x1f6334u: goto label_1f6334;
        case 0x1f6338u: goto label_1f6338;
        case 0x1f633cu: goto label_1f633c;
        case 0x1f6340u: goto label_1f6340;
        case 0x1f6344u: goto label_1f6344;
        case 0x1f6348u: goto label_1f6348;
        case 0x1f634cu: goto label_1f634c;
        case 0x1f6350u: goto label_1f6350;
        case 0x1f6354u: goto label_1f6354;
        case 0x1f6358u: goto label_1f6358;
        case 0x1f635cu: goto label_1f635c;
        case 0x1f6360u: goto label_1f6360;
        case 0x1f6364u: goto label_1f6364;
        case 0x1f6368u: goto label_1f6368;
        case 0x1f636cu: goto label_1f636c;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6374u: goto label_1f6374;
        case 0x1f6378u: goto label_1f6378;
        case 0x1f637cu: goto label_1f637c;
        case 0x1f6380u: goto label_1f6380;
        case 0x1f6384u: goto label_1f6384;
        case 0x1f6388u: goto label_1f6388;
        case 0x1f638cu: goto label_1f638c;
        case 0x1f6390u: goto label_1f6390;
        case 0x1f6394u: goto label_1f6394;
        case 0x1f6398u: goto label_1f6398;
        case 0x1f639cu: goto label_1f639c;
        case 0x1f63a0u: goto label_1f63a0;
        case 0x1f63a4u: goto label_1f63a4;
        case 0x1f63a8u: goto label_1f63a8;
        case 0x1f63acu: goto label_1f63ac;
        case 0x1f63b0u: goto label_1f63b0;
        case 0x1f63b4u: goto label_1f63b4;
        case 0x1f63b8u: goto label_1f63b8;
        case 0x1f63bcu: goto label_1f63bc;
        case 0x1f63c0u: goto label_1f63c0;
        case 0x1f63c4u: goto label_1f63c4;
        case 0x1f63c8u: goto label_1f63c8;
        case 0x1f63ccu: goto label_1f63cc;
        case 0x1f63d0u: goto label_1f63d0;
        case 0x1f63d4u: goto label_1f63d4;
        case 0x1f63d8u: goto label_1f63d8;
        case 0x1f63dcu: goto label_1f63dc;
        case 0x1f63e0u: goto label_1f63e0;
        case 0x1f63e4u: goto label_1f63e4;
        case 0x1f63e8u: goto label_1f63e8;
        case 0x1f63ecu: goto label_1f63ec;
        case 0x1f63f0u: goto label_1f63f0;
        case 0x1f63f4u: goto label_1f63f4;
        case 0x1f63f8u: goto label_1f63f8;
        case 0x1f63fcu: goto label_1f63fc;
        case 0x1f6400u: goto label_1f6400;
        case 0x1f6404u: goto label_1f6404;
        case 0x1f6408u: goto label_1f6408;
        case 0x1f640cu: goto label_1f640c;
        case 0x1f6410u: goto label_1f6410;
        case 0x1f6414u: goto label_1f6414;
        case 0x1f6418u: goto label_1f6418;
        case 0x1f641cu: goto label_1f641c;
        case 0x1f6420u: goto label_1f6420;
        case 0x1f6424u: goto label_1f6424;
        case 0x1f6428u: goto label_1f6428;
        case 0x1f642cu: goto label_1f642c;
        case 0x1f6430u: goto label_1f6430;
        case 0x1f6434u: goto label_1f6434;
        case 0x1f6438u: goto label_1f6438;
        case 0x1f643cu: goto label_1f643c;
        case 0x1f6440u: goto label_1f6440;
        case 0x1f6444u: goto label_1f6444;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f644cu: goto label_1f644c;
        case 0x1f6450u: goto label_1f6450;
        case 0x1f6454u: goto label_1f6454;
        case 0x1f6458u: goto label_1f6458;
        case 0x1f645cu: goto label_1f645c;
        case 0x1f6460u: goto label_1f6460;
        case 0x1f6464u: goto label_1f6464;
        case 0x1f6468u: goto label_1f6468;
        case 0x1f646cu: goto label_1f646c;
        case 0x1f6470u: goto label_1f6470;
        case 0x1f6474u: goto label_1f6474;
        case 0x1f6478u: goto label_1f6478;
        case 0x1f647cu: goto label_1f647c;
        case 0x1f6480u: goto label_1f6480;
        case 0x1f6484u: goto label_1f6484;
        case 0x1f6488u: goto label_1f6488;
        case 0x1f648cu: goto label_1f648c;
        case 0x1f6490u: goto label_1f6490;
        case 0x1f6494u: goto label_1f6494;
        case 0x1f6498u: goto label_1f6498;
        case 0x1f649cu: goto label_1f649c;
        case 0x1f64a0u: goto label_1f64a0;
        case 0x1f64a4u: goto label_1f64a4;
        case 0x1f64a8u: goto label_1f64a8;
        case 0x1f64acu: goto label_1f64ac;
        case 0x1f64b0u: goto label_1f64b0;
        case 0x1f64b4u: goto label_1f64b4;
        case 0x1f64b8u: goto label_1f64b8;
        case 0x1f64bcu: goto label_1f64bc;
        case 0x1f64c0u: goto label_1f64c0;
        case 0x1f64c4u: goto label_1f64c4;
        case 0x1f64c8u: goto label_1f64c8;
        case 0x1f64ccu: goto label_1f64cc;
        case 0x1f64d0u: goto label_1f64d0;
        case 0x1f64d4u: goto label_1f64d4;
        case 0x1f64d8u: goto label_1f64d8;
        case 0x1f64dcu: goto label_1f64dc;
        case 0x1f64e0u: goto label_1f64e0;
        case 0x1f64e4u: goto label_1f64e4;
        case 0x1f64e8u: goto label_1f64e8;
        case 0x1f64ecu: goto label_1f64ec;
        case 0x1f64f0u: goto label_1f64f0;
        case 0x1f64f4u: goto label_1f64f4;
        case 0x1f64f8u: goto label_1f64f8;
        case 0x1f64fcu: goto label_1f64fc;
        case 0x1f6500u: goto label_1f6500;
        case 0x1f6504u: goto label_1f6504;
        case 0x1f6508u: goto label_1f6508;
        case 0x1f650cu: goto label_1f650c;
        case 0x1f6510u: goto label_1f6510;
        case 0x1f6514u: goto label_1f6514;
        case 0x1f6518u: goto label_1f6518;
        case 0x1f651cu: goto label_1f651c;
        case 0x1f6520u: goto label_1f6520;
        case 0x1f6524u: goto label_1f6524;
        case 0x1f6528u: goto label_1f6528;
        case 0x1f652cu: goto label_1f652c;
        case 0x1f6530u: goto label_1f6530;
        case 0x1f6534u: goto label_1f6534;
        case 0x1f6538u: goto label_1f6538;
        case 0x1f653cu: goto label_1f653c;
        case 0x1f6540u: goto label_1f6540;
        case 0x1f6544u: goto label_1f6544;
        case 0x1f6548u: goto label_1f6548;
        case 0x1f654cu: goto label_1f654c;
        case 0x1f6550u: goto label_1f6550;
        case 0x1f6554u: goto label_1f6554;
        case 0x1f6558u: goto label_1f6558;
        case 0x1f655cu: goto label_1f655c;
        case 0x1f6560u: goto label_1f6560;
        case 0x1f6564u: goto label_1f6564;
        case 0x1f6568u: goto label_1f6568;
        case 0x1f656cu: goto label_1f656c;
        case 0x1f6570u: goto label_1f6570;
        case 0x1f6574u: goto label_1f6574;
        case 0x1f6578u: goto label_1f6578;
        case 0x1f657cu: goto label_1f657c;
        case 0x1f6580u: goto label_1f6580;
        case 0x1f6584u: goto label_1f6584;
        case 0x1f6588u: goto label_1f6588;
        case 0x1f658cu: goto label_1f658c;
        case 0x1f6590u: goto label_1f6590;
        case 0x1f6594u: goto label_1f6594;
        case 0x1f6598u: goto label_1f6598;
        case 0x1f659cu: goto label_1f659c;
        case 0x1f65a0u: goto label_1f65a0;
        case 0x1f65a4u: goto label_1f65a4;
        case 0x1f65a8u: goto label_1f65a8;
        case 0x1f65acu: goto label_1f65ac;
        case 0x1f65b0u: goto label_1f65b0;
        case 0x1f65b4u: goto label_1f65b4;
        case 0x1f65b8u: goto label_1f65b8;
        case 0x1f65bcu: goto label_1f65bc;
        case 0x1f65c0u: goto label_1f65c0;
        case 0x1f65c4u: goto label_1f65c4;
        case 0x1f65c8u: goto label_1f65c8;
        case 0x1f65ccu: goto label_1f65cc;
        case 0x1f65d0u: goto label_1f65d0;
        case 0x1f65d4u: goto label_1f65d4;
        case 0x1f65d8u: goto label_1f65d8;
        case 0x1f65dcu: goto label_1f65dc;
        case 0x1f65e0u: goto label_1f65e0;
        case 0x1f65e4u: goto label_1f65e4;
        case 0x1f65e8u: goto label_1f65e8;
        case 0x1f65ecu: goto label_1f65ec;
        case 0x1f65f0u: goto label_1f65f0;
        case 0x1f65f4u: goto label_1f65f4;
        case 0x1f65f8u: goto label_1f65f8;
        case 0x1f65fcu: goto label_1f65fc;
        case 0x1f6600u: goto label_1f6600;
        case 0x1f6604u: goto label_1f6604;
        case 0x1f6608u: goto label_1f6608;
        case 0x1f660cu: goto label_1f660c;
        case 0x1f6610u: goto label_1f6610;
        case 0x1f6614u: goto label_1f6614;
        case 0x1f6618u: goto label_1f6618;
        case 0x1f661cu: goto label_1f661c;
        case 0x1f6620u: goto label_1f6620;
        case 0x1f6624u: goto label_1f6624;
        case 0x1f6628u: goto label_1f6628;
        case 0x1f662cu: goto label_1f662c;
        case 0x1f6630u: goto label_1f6630;
        case 0x1f6634u: goto label_1f6634;
        case 0x1f6638u: goto label_1f6638;
        case 0x1f663cu: goto label_1f663c;
        case 0x1f6640u: goto label_1f6640;
        case 0x1f6644u: goto label_1f6644;
        case 0x1f6648u: goto label_1f6648;
        case 0x1f664cu: goto label_1f664c;
        case 0x1f6650u: goto label_1f6650;
        case 0x1f6654u: goto label_1f6654;
        case 0x1f6658u: goto label_1f6658;
        case 0x1f665cu: goto label_1f665c;
        case 0x1f6660u: goto label_1f6660;
        case 0x1f6664u: goto label_1f6664;
        case 0x1f6668u: goto label_1f6668;
        case 0x1f666cu: goto label_1f666c;
        case 0x1f6670u: goto label_1f6670;
        case 0x1f6674u: goto label_1f6674;
        case 0x1f6678u: goto label_1f6678;
        case 0x1f667cu: goto label_1f667c;
        case 0x1f6680u: goto label_1f6680;
        case 0x1f6684u: goto label_1f6684;
        case 0x1f6688u: goto label_1f6688;
        case 0x1f668cu: goto label_1f668c;
        case 0x1f6690u: goto label_1f6690;
        case 0x1f6694u: goto label_1f6694;
        case 0x1f6698u: goto label_1f6698;
        case 0x1f669cu: goto label_1f669c;
        case 0x1f66a0u: goto label_1f66a0;
        case 0x1f66a4u: goto label_1f66a4;
        case 0x1f66a8u: goto label_1f66a8;
        case 0x1f66acu: goto label_1f66ac;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66b4u: goto label_1f66b4;
        case 0x1f66b8u: goto label_1f66b8;
        case 0x1f66bcu: goto label_1f66bc;
        case 0x1f66c0u: goto label_1f66c0;
        case 0x1f66c4u: goto label_1f66c4;
        case 0x1f66c8u: goto label_1f66c8;
        case 0x1f66ccu: goto label_1f66cc;
        case 0x1f66d0u: goto label_1f66d0;
        case 0x1f66d4u: goto label_1f66d4;
        case 0x1f66d8u: goto label_1f66d8;
        case 0x1f66dcu: goto label_1f66dc;
        case 0x1f66e0u: goto label_1f66e0;
        case 0x1f66e4u: goto label_1f66e4;
        case 0x1f66e8u: goto label_1f66e8;
        case 0x1f66ecu: goto label_1f66ec;
        case 0x1f66f0u: goto label_1f66f0;
        case 0x1f66f4u: goto label_1f66f4;
        case 0x1f66f8u: goto label_1f66f8;
        case 0x1f66fcu: goto label_1f66fc;
        case 0x1f6700u: goto label_1f6700;
        case 0x1f6704u: goto label_1f6704;
        case 0x1f6708u: goto label_1f6708;
        case 0x1f670cu: goto label_1f670c;
        case 0x1f6710u: goto label_1f6710;
        case 0x1f6714u: goto label_1f6714;
        case 0x1f6718u: goto label_1f6718;
        case 0x1f671cu: goto label_1f671c;
        case 0x1f6720u: goto label_1f6720;
        case 0x1f6724u: goto label_1f6724;
        case 0x1f6728u: goto label_1f6728;
        case 0x1f672cu: goto label_1f672c;
        case 0x1f6730u: goto label_1f6730;
        case 0x1f6734u: goto label_1f6734;
        case 0x1f6738u: goto label_1f6738;
        case 0x1f673cu: goto label_1f673c;
        case 0x1f6740u: goto label_1f6740;
        case 0x1f6744u: goto label_1f6744;
        case 0x1f6748u: goto label_1f6748;
        case 0x1f674cu: goto label_1f674c;
        case 0x1f6750u: goto label_1f6750;
        case 0x1f6754u: goto label_1f6754;
        case 0x1f6758u: goto label_1f6758;
        case 0x1f675cu: goto label_1f675c;
        case 0x1f6760u: goto label_1f6760;
        case 0x1f6764u: goto label_1f6764;
        case 0x1f6768u: goto label_1f6768;
        case 0x1f676cu: goto label_1f676c;
        case 0x1f6770u: goto label_1f6770;
        case 0x1f6774u: goto label_1f6774;
        case 0x1f6778u: goto label_1f6778;
        case 0x1f677cu: goto label_1f677c;
        case 0x1f6780u: goto label_1f6780;
        case 0x1f6784u: goto label_1f6784;
        case 0x1f6788u: goto label_1f6788;
        case 0x1f678cu: goto label_1f678c;
        case 0x1f6790u: goto label_1f6790;
        case 0x1f6794u: goto label_1f6794;
        case 0x1f6798u: goto label_1f6798;
        case 0x1f679cu: goto label_1f679c;
        case 0x1f67a0u: goto label_1f67a0;
        case 0x1f67a4u: goto label_1f67a4;
        case 0x1f67a8u: goto label_1f67a8;
        case 0x1f67acu: goto label_1f67ac;
        case 0x1f67b0u: goto label_1f67b0;
        case 0x1f67b4u: goto label_1f67b4;
        case 0x1f67b8u: goto label_1f67b8;
        case 0x1f67bcu: goto label_1f67bc;
        case 0x1f67c0u: goto label_1f67c0;
        case 0x1f67c4u: goto label_1f67c4;
        case 0x1f67c8u: goto label_1f67c8;
        case 0x1f67ccu: goto label_1f67cc;
        case 0x1f67d0u: goto label_1f67d0;
        case 0x1f67d4u: goto label_1f67d4;
        case 0x1f67d8u: goto label_1f67d8;
        case 0x1f67dcu: goto label_1f67dc;
        case 0x1f67e0u: goto label_1f67e0;
        case 0x1f67e4u: goto label_1f67e4;
        case 0x1f67e8u: goto label_1f67e8;
        case 0x1f67ecu: goto label_1f67ec;
        default: break;
    }

    ctx->pc = 0x1f3b00u;

label_1f3b00:
    // 0x1f3b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f3b04:
    // 0x1f3b04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1f3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1f3b08:
    // 0x1f3b08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3b0c:
    // 0x1f3b0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f3b10:
    // 0x1f3b10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3b14:
    // 0x1f3b14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3b18:
    // 0x1f3b18: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3b1c:
    // 0x1f3b1c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f3b20:
    // 0x1f3b20: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f3b20u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f3b24:
    // 0x1f3b24: 0x1012  mflo        $v0
    ctx->pc = 0x1f3b24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1f3b28:
    // 0x1f3b28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f3b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f3b2c:
    // 0x1f3b2c: 0x3e00008  jr          $ra
label_1f3b30:
    if (ctx->pc == 0x1F3B30u) {
        ctx->pc = 0x1F3B34u;
        goto label_1f3b34;
    }
    ctx->pc = 0x1F3B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3B34u;
label_1f3b34:
    // 0x1f3b34: 0x0  nop
    ctx->pc = 0x1f3b34u;
    // NOP
label_1f3b38:
    // 0x1f3b38: 0x0  nop
    ctx->pc = 0x1f3b38u;
    // NOP
label_1f3b3c:
    // 0x1f3b3c: 0x0  nop
    ctx->pc = 0x1f3b3cu;
    // NOP
label_1f3b40:
    // 0x1f3b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f3b44:
    // 0x1f3b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f3b48:
    // 0x1f3b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f3b4c:
    // 0x1f3b4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3b50:
    // 0x1f3b50: 0xc06479c  jal         func_191E70
label_1f3b54:
    if (ctx->pc == 0x1F3B54u) {
        ctx->pc = 0x1F3B58u;
        goto label_1f3b58;
    }
    ctx->pc = 0x1F3B50u;
    SET_GPR_U32(ctx, 31, 0x1F3B58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3B50u, 0x1F3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B58u;
label_1f3b58:
    // 0x1f3b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b5c:
    // 0x1f3b5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3b60:
    // 0x1f3b60: 0xc08c910  jal         func_232440
label_1f3b64:
    if (ctx->pc == 0x1F3B64u) {
        ctx->pc = 0x1F3B68u;
        goto label_1f3b68;
    }
    ctx->pc = 0x1F3B60u;
    SET_GPR_U32(ctx, 31, 0x1F3B68u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1F3B60u, 0x1F3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B68u;
label_1f3b68:
    // 0x1f3b68: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1f3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1f3b6c:
    // 0x1f3b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3b70:
    // 0x1f3b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3b74:
    // 0x1f3b74: 0xc08f740  jal         func_23DD00
label_1f3b78:
    if (ctx->pc == 0x1F3B78u) {
        ctx->pc = 0x1F3B7Cu;
        goto label_1f3b7c;
    }
    ctx->pc = 0x1F3B74u;
    SET_GPR_U32(ctx, 31, 0x1F3B7Cu);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1F3B74u, 0x1F3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B7Cu;
label_1f3b7c:
    // 0x1f3b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3b80:
    // 0x1f3b80: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1f3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1f3b84:
    // 0x1f3b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3b88:
    // 0x1f3b88: 0xc0ac13c  jal         func_2B04F0
label_1f3b8c:
    if (ctx->pc == 0x1F3B8Cu) {
        ctx->pc = 0x1F3B90u;
        goto label_1f3b90;
    }
    ctx->pc = 0x1F3B88u;
    SET_GPR_U32(ctx, 31, 0x1F3B90u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1F3B88u, 0x1F3B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B90u;
label_1f3b90:
    // 0x1f3b90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f3b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3b94:
    // 0x1f3b94: 0xc064adc  jal         func_192B70
label_1f3b98:
    if (ctx->pc == 0x1F3B98u) {
        ctx->pc = 0x1F3B9Cu;
        goto label_1f3b9c;
    }
    ctx->pc = 0x1F3B94u;
    SET_GPR_U32(ctx, 31, 0x1F3B9Cu);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1F3B94u, 0x1F3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B9Cu;
label_1f3b9c:
    // 0x1f3b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3ba0:
    // 0x1f3ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f3ba4:
    // 0x1f3ba4: 0x3e00008  jr          $ra
label_1f3ba8:
    if (ctx->pc == 0x1F3BA8u) {
        ctx->pc = 0x1F3BACu;
        goto label_1f3bac;
    }
    ctx->pc = 0x1F3BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3BACu;
label_1f3bac:
    // 0x1f3bac: 0x0  nop
    ctx->pc = 0x1f3bacu;
    // NOP
label_1f3bb0:
    // 0x1f3bb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1f3bb4:
    // 0x1f3bb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f3bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f3bb8:
    // 0x1f3bb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f3bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f3bbc:
    // 0x1f3bbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f3bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f3bc0:
    // 0x1f3bc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f3bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f3bc4:
    // 0x1f3bc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f3bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f3bc8:
    // 0x1f3bc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f3bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f3bcc:
    // 0x1f3bcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f3bd0:
    // 0x1f3bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f3bd4:
    // 0x1f3bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3bd8:
    // 0x1f3bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f3bdc:
    // 0x1f3bdc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_1f3be0:
    // 0x1f3be0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3be4:
    // 0x1f3be4: 0xc064cb0  jal         func_1932C0
label_1f3be8:
    if (ctx->pc == 0x1F3BE8u) {
        ctx->pc = 0x1F3BECu;
        goto label_1f3bec;
    }
    ctx->pc = 0x1F3BE4u;
    SET_GPR_U32(ctx, 31, 0x1F3BECu);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1F3BE4u, 0x1F3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BECu;
label_1f3bec:
    // 0x1f3bec: 0x10400792  beqz        $v0, . + 4 + (0x792 << 2)
label_1f3bf0:
    if (ctx->pc == 0x1F3BF0u) {
        ctx->pc = 0x1F3BF4u;
        goto label_1f3bf4;
    }
    ctx->pc = 0x1F3BECu;
    {
        const bool branch_taken_0x1f3bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bec) {
            ctx->pc = 0x1F5A38u;
            goto label_1f5a38;
        }
    }
    ctx->pc = 0x1F3BF4u;
label_1f3bf4:
    // 0x1f3bf4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3bf8:
    // 0x1f3bf8: 0x904202f8  lbu         $v0, 0x2F8($v0)
    ctx->pc = 0x1f3bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 760)));
label_1f3bfc:
    // 0x1f3bfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f3c00:
    if (ctx->pc == 0x1F3C00u) {
        ctx->pc = 0x1F3C04u;
        goto label_1f3c04;
    }
    ctx->pc = 0x1F3BFCu;
    {
        const bool branch_taken_0x1f3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bfc) {
            ctx->pc = 0x1F3C28u;
            goto label_1f3c28;
        }
    }
    ctx->pc = 0x1F3C04u;
label_1f3c04:
    // 0x1f3c04: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c08:
    // 0x1f3c08: 0xa06002f8  sb          $zero, 0x2F8($v1)
    ctx->pc = 0x1f3c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 760), (uint8_t)GPR_U32(ctx, 0));
label_1f3c0c:
    // 0x1f3c0c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c10:
    // 0x1f3c10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c14:
    // 0x1f3c14: 0xc07de14  jal         func_1F7850
label_1f3c18:
    if (ctx->pc == 0x1F3C18u) {
        ctx->pc = 0x1F3C1Cu;
        goto label_1f3c1c;
    }
    ctx->pc = 0x1F3C14u;
    SET_GPR_U32(ctx, 31, 0x1F3C1Cu);
    ctx->pc = 0x1F7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7850u, 0x1F3C14u, 0x1F3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C1Cu;
label_1f3c1c:
    // 0x1f3c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3c20:
    // 0x1f3c20: 0x10000786  b           . + 4 + (0x786 << 2)
label_1f3c24:
    if (ctx->pc == 0x1F3C24u) {
        ctx->pc = 0x1F3C28u;
        goto label_1f3c28;
    }
    ctx->pc = 0x1F3C20u;
    {
        const bool branch_taken_0x1f3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c20) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F3C28u;
label_1f3c28:
    // 0x1f3c28: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c2c:
    // 0x1f3c2c: 0x904202d8  lbu         $v0, 0x2D8($v0)
    ctx->pc = 0x1f3c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 728)));
label_1f3c30:
    // 0x1f3c30: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
label_1f3c34:
    if (ctx->pc == 0x1F3C34u) {
        ctx->pc = 0x1F3C38u;
        goto label_1f3c38;
    }
    ctx->pc = 0x1F3C30u;
    {
        const bool branch_taken_0x1f3c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c30) {
            ctx->pc = 0x1F3FACu;
            goto label_1f3fac;
        }
    }
    ctx->pc = 0x1F3C38u;
label_1f3c38:
    // 0x1f3c38: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c3c:
    // 0x1f3c3c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3c40:
    // 0x1f3c40: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c44:
    // 0x1f3c44: 0xc44002ec  lwc1        $f0, 0x2EC($v0)
    ctx->pc = 0x1f3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3c48:
    // 0x1f3c48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3c48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f3c4c:
    // 0x1f3c4c: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
label_1f3c50:
    if (ctx->pc == 0x1F3C50u) {
        ctx->pc = 0x1F3C54u;
        goto label_1f3c54;
    }
    ctx->pc = 0x1F3C4Cu;
    {
        const bool branch_taken_0x1f3c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3c4c) {
            ctx->pc = 0x1F3D7Cu;
            goto label_1f3d7c;
        }
    }
    ctx->pc = 0x1F3C54u;
label_1f3c54:
    // 0x1f3c54: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c58:
    // 0x1f3c58: 0xc06479c  jal         func_191E70
label_1f3c5c:
    if (ctx->pc == 0x1F3C5Cu) {
        ctx->pc = 0x1F3C60u;
        goto label_1f3c60;
    }
    ctx->pc = 0x1F3C58u;
    SET_GPR_U32(ctx, 31, 0x1F3C60u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3C58u, 0x1F3C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C60u;
label_1f3c60:
    // 0x1f3c60: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c64:
    // 0x1f3c64: 0x8c8502dc  lw          $a1, 0x2DC($a0)
    ctx->pc = 0x1f3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 732)));
label_1f3c68:
    // 0x1f3c68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3c6c:
    // 0x1f3c6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f3c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3c70:
    // 0x1f3c70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c74:
    // 0x1f3c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3c78:
    // 0x1f3c78: 0xc08c208  jal         func_230820
label_1f3c7c:
    if (ctx->pc == 0x1F3C7Cu) {
        ctx->pc = 0x1F3C80u;
        goto label_1f3c80;
    }
    ctx->pc = 0x1F3C78u;
    SET_GPR_U32(ctx, 31, 0x1F3C80u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3C78u, 0x1F3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C80u;
label_1f3c80:
    // 0x1f3c80: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c84:
    // 0x1f3c84: 0xc06479c  jal         func_191E70
label_1f3c88:
    if (ctx->pc == 0x1F3C88u) {
        ctx->pc = 0x1F3C8Cu;
        goto label_1f3c8c;
    }
    ctx->pc = 0x1F3C84u;
    SET_GPR_U32(ctx, 31, 0x1F3C8Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3C84u, 0x1F3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C8Cu;
label_1f3c8c:
    // 0x1f3c8c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3c90:
    // 0x1f3c90: 0x8c6502e0  lw          $a1, 0x2E0($v1)
    ctx->pc = 0x1f3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
label_1f3c94:
    // 0x1f3c94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3c98:
    // 0x1f3c98: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f3c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3c9c:
    // 0x1f3c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ca0:
    // 0x1f3ca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3ca4:
    // 0x1f3ca4: 0xc08c208  jal         func_230820
label_1f3ca8:
    if (ctx->pc == 0x1F3CA8u) {
        ctx->pc = 0x1F3CACu;
        goto label_1f3cac;
    }
    ctx->pc = 0x1F3CA4u;
    SET_GPR_U32(ctx, 31, 0x1F3CACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3CA4u, 0x1F3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CACu;
label_1f3cac:
    // 0x1f3cac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f3cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cb0:
    // 0x1f3cb0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3cb4:
    // 0x1f3cb4: 0xc06479c  jal         func_191E70
label_1f3cb8:
    if (ctx->pc == 0x1F3CB8u) {
        ctx->pc = 0x1F3CBCu;
        goto label_1f3cbc;
    }
    ctx->pc = 0x1F3CB4u;
    SET_GPR_U32(ctx, 31, 0x1F3CBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3CB4u, 0x1F3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CBCu;
label_1f3cbc:
    // 0x1f3cbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cc0:
    // 0x1f3cc0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3cc4:
    // 0x1f3cc4: 0x8c6502e4  lw          $a1, 0x2E4($v1)
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 740)));
label_1f3cc8:
    // 0x1f3cc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3ccc:
    // 0x1f3ccc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f3cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3cd0:
    // 0x1f3cd0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f3cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3cd4:
    // 0x1f3cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3cd8:
    // 0x1f3cd8: 0xc08c208  jal         func_230820
label_1f3cdc:
    if (ctx->pc == 0x1F3CDCu) {
        ctx->pc = 0x1F3CE0u;
        goto label_1f3ce0;
    }
    ctx->pc = 0x1F3CD8u;
    SET_GPR_U32(ctx, 31, 0x1F3CE0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3CD8u, 0x1F3CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CE0u;
label_1f3ce0:
    // 0x1f3ce0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3ce4:
    // 0x1f3ce4: 0xc06479c  jal         func_191E70
label_1f3ce8:
    if (ctx->pc == 0x1F3CE8u) {
        ctx->pc = 0x1F3CECu;
        goto label_1f3cec;
    }
    ctx->pc = 0x1F3CE4u;
    SET_GPR_U32(ctx, 31, 0x1F3CECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3CE4u, 0x1F3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CECu;
label_1f3cec:
    // 0x1f3cec: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3cf0:
    // 0x1f3cf0: 0x8c6502e8  lw          $a1, 0x2E8($v1)
    ctx->pc = 0x1f3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 744)));
label_1f3cf4:
    // 0x1f3cf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3cf8:
    // 0x1f3cf8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f3cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f3cfc:
    // 0x1f3cfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d00:
    // 0x1f3d00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3d04:
    // 0x1f3d04: 0xc08c208  jal         func_230820
label_1f3d08:
    if (ctx->pc == 0x1F3D08u) {
        ctx->pc = 0x1F3D0Cu;
        goto label_1f3d0c;
    }
    ctx->pc = 0x1F3D04u;
    SET_GPR_U32(ctx, 31, 0x1F3D0Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3D04u, 0x1F3D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D0Cu;
label_1f3d0c:
    // 0x1f3d0c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d10:
    // 0x1f3d10: 0xa08002d8  sb          $zero, 0x2D8($a0)
    ctx->pc = 0x1f3d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 728), (uint8_t)GPR_U32(ctx, 0));
label_1f3d14:
    // 0x1f3d14: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d18:
    // 0x1f3d18: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d1c:
    // 0x1f3d1c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d20:
    // 0x1f3d20: 0xe46002ec  swc1        $f0, 0x2EC($v1)
    ctx->pc = 0x1f3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 748), bits); }
label_1f3d24:
    // 0x1f3d24: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d28:
    // 0x1f3d28: 0xaca002dc  sw          $zero, 0x2DC($a1)
    ctx->pc = 0x1f3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 732), GPR_U32(ctx, 0));
label_1f3d2c:
    // 0x1f3d2c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d30:
    // 0x1f3d30: 0xac4002e0  sw          $zero, 0x2E0($v0)
    ctx->pc = 0x1f3d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 0));
label_1f3d34:
    // 0x1f3d34: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d38:
    // 0x1f3d38: 0xac8002e4  sw          $zero, 0x2E4($a0)
    ctx->pc = 0x1f3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 0));
label_1f3d3c:
    // 0x1f3d3c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d40:
    // 0x1f3d40: 0xac6002e8  sw          $zero, 0x2E8($v1)
    ctx->pc = 0x1f3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 744), GPR_U32(ctx, 0));
label_1f3d44:
    // 0x1f3d44: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d48:
    // 0x1f3d48: 0x90850100  lbu         $a1, 0x100($a0)
    ctx->pc = 0x1f3d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
label_1f3d4c:
    // 0x1f3d4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1f3d50:
    if (ctx->pc == 0x1F3D50u) {
        ctx->pc = 0x1F3D54u;
        goto label_1f3d54;
    }
    ctx->pc = 0x1F3D4Cu;
    {
        const bool branch_taken_0x1f3d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d4c) {
            ctx->pc = 0x1F3D60u;
            goto label_1f3d60;
        }
    }
    ctx->pc = 0x1F3D54u;
label_1f3d54:
    // 0x1f3d54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d58:
    // 0x1f3d58: 0x10000738  b           . + 4 + (0x738 << 2)
label_1f3d5c:
    if (ctx->pc == 0x1F3D5Cu) {
        ctx->pc = 0x1F3D60u;
        goto label_1f3d60;
    }
    ctx->pc = 0x1F3D58u;
    {
        const bool branch_taken_0x1f3d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d58) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F3D60u;
label_1f3d60:
    // 0x1f3d60: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d64:
    // 0x1f3d64: 0x90440101  lbu         $a0, 0x101($v0)
    ctx->pc = 0x1f3d64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 257)));
label_1f3d68:
    // 0x1f3d68: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
label_1f3d6c:
    if (ctx->pc == 0x1F3D6Cu) {
        ctx->pc = 0x1F3D70u;
        goto label_1f3d70;
    }
    ctx->pc = 0x1F3D68u;
    {
        const bool branch_taken_0x1f3d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d68) {
            ctx->pc = 0x1F3FACu;
            goto label_1f3fac;
        }
    }
    ctx->pc = 0x1F3D70u;
label_1f3d70:
    // 0x1f3d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d74:
    // 0x1f3d74: 0x10000731  b           . + 4 + (0x731 << 2)
label_1f3d78:
    if (ctx->pc == 0x1F3D78u) {
        ctx->pc = 0x1F3D7Cu;
        goto label_1f3d7c;
    }
    ctx->pc = 0x1F3D74u;
    {
        const bool branch_taken_0x1f3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d74) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F3D7Cu;
label_1f3d7c:
    // 0x1f3d7c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d80:
    // 0x1f3d80: 0xc44102ec  lwc1        $f1, 0x2EC($v0)
    ctx->pc = 0x1f3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3d84:
    // 0x1f3d84: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f3d84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d88:
    // 0x1f3d88: 0xc7c0004c  lwc1        $f0, 0x4C($fp)
    ctx->pc = 0x1f3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d8c:
    // 0x1f3d8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3d90:
    // 0x1f3d90: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3d94:
    // 0x1f3d94: 0xc4a002f0  lwc1        $f0, 0x2F0($a1)
    ctx->pc = 0x1f3d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3d98:
    // 0x1f3d98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f3d98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1f3d9c:
    // 0x1f3d9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3da0:
    // 0x1f3da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f3da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f3da4:
    // 0x1f3da4: 0x0  nop
    ctx->pc = 0x1f3da4u;
    // NOP
label_1f3da8:
    // 0x1f3da8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f3da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f3dac:
    // 0x1f3dac: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f3db0:
    // 0x1f3db0: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x1f3db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f3db4:
    // 0x1f3db4: 0xc0bec3e  jal         func_2FB0F8
label_1f3db8:
    if (ctx->pc == 0x1F3DB8u) {
        ctx->pc = 0x1F3DBCu;
        goto label_1f3dbc;
    }
    ctx->pc = 0x1F3DB4u;
    SET_GPR_U32(ctx, 31, 0x1F3DBCu);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1F3DB4u, 0x1F3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DBCu;
label_1f3dbc:
    // 0x1f3dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3dc0:
    // 0x1f3dc0: 0xdf858020  ld          $a1, -0x7FE0($gp)
    ctx->pc = 0x1f3dc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934560)));
label_1f3dc4:
    // 0x1f3dc4: 0xc0c39be  jal         func_30E6F8
label_1f3dc8:
    if (ctx->pc == 0x1F3DC8u) {
        ctx->pc = 0x1F3DCCu;
        goto label_1f3dcc;
    }
    ctx->pc = 0x1F3DC4u;
    SET_GPR_U32(ctx, 31, 0x1F3DCCu);
    ctx->pc = 0x30E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E6F8u, 0x1F3DC4u, 0x1F3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DCCu;
label_1f3dcc:
    // 0x1f3dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3dd0:
    // 0x1f3dd0: 0xc0bef4c  jal         func_2FBD30
label_1f3dd4:
    if (ctx->pc == 0x1F3DD4u) {
        ctx->pc = 0x1F3DD8u;
        goto label_1f3dd8;
    }
    ctx->pc = 0x1F3DD0u;
    SET_GPR_U32(ctx, 31, 0x1F3DD8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1F3DD0u, 0x1F3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DD8u;
label_1f3dd8:
    // 0x1f3dd8: 0xc7818328  lwc1        $f1, -0x7CD8($gp)
    ctx->pc = 0x1f3dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3ddc:
    // 0x1f3ddc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1f3ddcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f3de0:
    // 0x1f3de0: 0xc0c3966  jal         func_30E598
label_1f3de4:
    if (ctx->pc == 0x1F3DE4u) {
        ctx->pc = 0x1F3DE8u;
        goto label_1f3de8;
    }
    ctx->pc = 0x1F3DE0u;
    SET_GPR_U32(ctx, 31, 0x1F3DE8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1F3DE0u, 0x1F3DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DE8u;
label_1f3de8:
    // 0x1f3de8: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_1f3dec:
    // 0x1f3dec: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f3decu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3df0:
    // 0x1f3df0: 0x0  nop
    ctx->pc = 0x1f3df0u;
    // NOP
label_1f3df4:
    // 0x1f3df4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f3df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f3df8:
    // 0x1f3df8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f3df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f3dfc:
    // 0x1f3dfc: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x1f3dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f3e00:
    // 0x1f3e00: 0xc0bec3e  jal         func_2FB0F8
label_1f3e04:
    if (ctx->pc == 0x1F3E04u) {
        ctx->pc = 0x1F3E08u;
        goto label_1f3e08;
    }
    ctx->pc = 0x1F3E00u;
    SET_GPR_U32(ctx, 31, 0x1F3E08u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1F3E00u, 0x1F3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E08u;
label_1f3e08:
    // 0x1f3e08: 0x3c033fd0  lui         $v1, 0x3FD0
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16336 << 16));
label_1f3e0c:
    // 0x1f3e0c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x1f3e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_1f3e10:
    // 0x1f3e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e14:
    // 0x1f3e14: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f3e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e18:
    // 0x1f3e18: 0xc0c39be  jal         func_30E6F8
label_1f3e1c:
    if (ctx->pc == 0x1F3E1Cu) {
        ctx->pc = 0x1F3E20u;
        goto label_1f3e20;
    }
    ctx->pc = 0x1F3E18u;
    SET_GPR_U32(ctx, 31, 0x1F3E20u);
    ctx->pc = 0x30E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E6F8u, 0x1F3E18u, 0x1F3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E20u;
label_1f3e20:
    // 0x1f3e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e24:
    // 0x1f3e24: 0xc0bef4c  jal         func_2FBD30
label_1f3e28:
    if (ctx->pc == 0x1F3E28u) {
        ctx->pc = 0x1F3E2Cu;
        goto label_1f3e2c;
    }
    ctx->pc = 0x1F3E24u;
    SET_GPR_U32(ctx, 31, 0x1F3E2Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1F3E24u, 0x1F3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E2Cu;
label_1f3e2c:
    // 0x1f3e2c: 0xc78182b0  lwc1        $f1, -0x7D50($gp)
    ctx->pc = 0x1f3e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3e30:
    // 0x1f3e30: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1f3e30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f3e34:
    // 0x1f3e34: 0xc0c3966  jal         func_30E598
label_1f3e38:
    if (ctx->pc == 0x1F3E38u) {
        ctx->pc = 0x1F3E3Cu;
        goto label_1f3e3c;
    }
    ctx->pc = 0x1F3E34u;
    SET_GPR_U32(ctx, 31, 0x1F3E3Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1F3E34u, 0x1F3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E3Cu;
label_1f3e3c:
    // 0x1f3e3c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1f3e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1f3e40:
    // 0x1f3e40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1f3e40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3e44:
    // 0x1f3e44: 0x0  nop
    ctx->pc = 0x1f3e44u;
    // NOP
label_1f3e48:
    // 0x1f3e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f3e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f3e4c:
    // 0x1f3e4c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f3e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f3e50:
    // 0x1f3e50: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f3e50u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3e54:
    // 0x1f3e54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f3e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e58:
    // 0x1f3e58: 0xc06479c  jal         func_191E70
label_1f3e5c:
    if (ctx->pc == 0x1F3E5Cu) {
        ctx->pc = 0x1F3E60u;
        goto label_1f3e60;
    }
    ctx->pc = 0x1F3E58u;
    SET_GPR_U32(ctx, 31, 0x1F3E60u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3E58u, 0x1F3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E60u;
label_1f3e60:
    // 0x1f3e60: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3e64:
    // 0x1f3e64: 0x8c6502dc  lw          $a1, 0x2DC($v1)
    ctx->pc = 0x1f3e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 732)));
label_1f3e68:
    // 0x1f3e68: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3e6c:
    // 0x1f3e6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3e6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3e70:
    // 0x1f3e70: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e74:
    // 0x1f3e74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3e74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3e78:
    // 0x1f3e78: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f3e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e7c:
    // 0x1f3e7c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1f3e7cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3e80:
    // 0x1f3e80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3e84:
    // 0x1f3e84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3e88:
    // 0x1f3e88: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e8c:
    // 0x1f3e8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3e8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3e90:
    // 0x1f3e90: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f3e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3e94:
    // 0x1f3e94: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x1f3e94u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3e98:
    // 0x1f3e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e9c:
    // 0x1f3e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ea0:
    // 0x1f3ea0: 0xc08c208  jal         func_230820
label_1f3ea4:
    if (ctx->pc == 0x1F3EA4u) {
        ctx->pc = 0x1F3EA8u;
        goto label_1f3ea8;
    }
    ctx->pc = 0x1F3EA0u;
    SET_GPR_U32(ctx, 31, 0x1F3EA8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3EA0u, 0x1F3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EA8u;
label_1f3ea8:
    // 0x1f3ea8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3eac:
    // 0x1f3eac: 0xc06479c  jal         func_191E70
label_1f3eb0:
    if (ctx->pc == 0x1F3EB0u) {
        ctx->pc = 0x1F3EB4u;
        goto label_1f3eb4;
    }
    ctx->pc = 0x1F3EACu;
    SET_GPR_U32(ctx, 31, 0x1F3EB4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3EACu, 0x1F3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EB4u;
label_1f3eb4:
    // 0x1f3eb4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3eb8:
    // 0x1f3eb8: 0x8c8502e0  lw          $a1, 0x2E0($a0)
    ctx->pc = 0x1f3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
label_1f3ebc:
    // 0x1f3ebc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3ec0:
    // 0x1f3ec0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3ec4:
    // 0x1f3ec4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ec8:
    // 0x1f3ec8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3ec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3ecc:
    // 0x1f3ecc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ed0:
    // 0x1f3ed0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1f3ed0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3ed4:
    // 0x1f3ed4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1f3ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1f3ed8:
    // 0x1f3ed8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1f3ed8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3edc:
    // 0x1f3edc: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ee0:
    // 0x1f3ee0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3ee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3ee4:
    // 0x1f3ee4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ee8:
    // 0x1f3ee8: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x1f3ee8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3eec:
    // 0x1f3eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ef0:
    // 0x1f3ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ef4:
    // 0x1f3ef4: 0xc08c208  jal         func_230820
label_1f3ef8:
    if (ctx->pc == 0x1F3EF8u) {
        ctx->pc = 0x1F3EFCu;
        goto label_1f3efc;
    }
    ctx->pc = 0x1F3EF4u;
    SET_GPR_U32(ctx, 31, 0x1F3EFCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3EF4u, 0x1F3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3EFCu;
label_1f3efc:
    // 0x1f3efc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3f00:
    // 0x1f3f00: 0xc06479c  jal         func_191E70
label_1f3f04:
    if (ctx->pc == 0x1F3F04u) {
        ctx->pc = 0x1F3F08u;
        goto label_1f3f08;
    }
    ctx->pc = 0x1F3F00u;
    SET_GPR_U32(ctx, 31, 0x1F3F08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3F00u, 0x1F3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F08u;
label_1f3f08:
    // 0x1f3f08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f0c:
    // 0x1f3f0c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3f10:
    // 0x1f3f10: 0x8c4502e4  lw          $a1, 0x2E4($v0)
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_1f3f14:
    // 0x1f3f14: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f3f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1f3f18:
    // 0x1f3f18: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1f3f18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3f1c:
    // 0x1f3f1c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f20:
    // 0x1f3f20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3f20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3f24:
    // 0x1f3f24: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f3f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f28:
    // 0x1f3f28: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1f3f28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3f2c:
    // 0x1f3f2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3f30:
    // 0x1f3f30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3f34:
    // 0x1f3f34: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f38:
    // 0x1f3f38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3f38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3f3c:
    // 0x1f3f3c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f3f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f40:
    // 0x1f3f40: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x1f3f40u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3f44:
    // 0x1f3f44: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f3f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f48:
    // 0x1f3f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f4c:
    // 0x1f3f4c: 0xc08c208  jal         func_230820
label_1f3f50:
    if (ctx->pc == 0x1F3F50u) {
        ctx->pc = 0x1F3F54u;
        goto label_1f3f54;
    }
    ctx->pc = 0x1F3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F54u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3F4Cu, 0x1F3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F54u;
label_1f3f54:
    // 0x1f3f54: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3f58:
    // 0x1f3f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f5c:
    // 0x1f3f5c: 0xc06479c  jal         func_191E70
label_1f3f60:
    if (ctx->pc == 0x1F3F60u) {
        ctx->pc = 0x1F3F64u;
        goto label_1f3f64;
    }
    ctx->pc = 0x1F3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F64u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3F5Cu, 0x1F3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F64u;
label_1f3f64:
    // 0x1f3f64: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3f68:
    // 0x1f3f68: 0x8c8502e8  lw          $a1, 0x2E8($a0)
    ctx->pc = 0x1f3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 744)));
label_1f3f6c:
    // 0x1f3f6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3f70:
    // 0x1f3f70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3f74:
    // 0x1f3f74: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f78:
    // 0x1f3f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3f7c:
    // 0x1f3f7c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f80:
    // 0x1f3f80: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1f3f80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3f84:
    // 0x1f3f84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f3f88:
    // 0x1f3f88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f3f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f3f8c:
    // 0x1f3f8c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f90:
    // 0x1f3f90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f3f90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f3f94:
    // 0x1f3f94: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f3f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f98:
    // 0x1f3f98: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x1f3f98u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f3f9c:
    // 0x1f3f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fa0:
    // 0x1f3fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fa4:
    // 0x1f3fa4: 0xc08c208  jal         func_230820
label_1f3fa8:
    if (ctx->pc == 0x1F3FA8u) {
        ctx->pc = 0x1F3FACu;
        goto label_1f3fac;
    }
    ctx->pc = 0x1F3FA4u;
    SET_GPR_U32(ctx, 31, 0x1F3FACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F3FA4u, 0x1F3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FACu;
label_1f3fac:
    // 0x1f3fac: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f3facu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fb0:
    // 0x1f3fb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3fb4:
    // 0x1f3fb4: 0x905e00b4  lbu         $fp, 0xB4($v0)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
label_1f3fb8:
    // 0x1f3fb8: 0x13c001a3  beqz        $fp, . + 4 + (0x1A3 << 2)
label_1f3fbc:
    if (ctx->pc == 0x1F3FBCu) {
        ctx->pc = 0x1F3FC0u;
        goto label_1f3fc0;
    }
    ctx->pc = 0x1F3FB8u;
    {
        const bool branch_taken_0x1f3fb8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fb8) {
            ctx->pc = 0x1F4648u;
            goto label_1f4648;
        }
    }
    ctx->pc = 0x1F3FC0u;
label_1f3fc0:
    // 0x1f3fc0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3fc4:
    // 0x1f3fc4: 0x90a20100  lbu         $v0, 0x100($a1)
    ctx->pc = 0x1f3fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 256)));
label_1f3fc8:
    // 0x1f3fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f3fcc:
    if (ctx->pc == 0x1F3FCCu) {
        ctx->pc = 0x1F3FD0u;
        goto label_1f3fd0;
    }
    ctx->pc = 0x1F3FC8u;
    {
        const bool branch_taken_0x1f3fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fc8) {
            ctx->pc = 0x1F3FDCu;
            goto label_1f3fdc;
        }
    }
    ctx->pc = 0x1F3FD0u;
label_1f3fd0:
    // 0x1f3fd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fd4:
    // 0x1f3fd4: 0x10000699  b           . + 4 + (0x699 << 2)
label_1f3fd8:
    if (ctx->pc == 0x1F3FD8u) {
        ctx->pc = 0x1F3FDCu;
        goto label_1f3fdc;
    }
    ctx->pc = 0x1F3FD4u;
    {
        const bool branch_taken_0x1f3fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fd4) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F3FDCu;
label_1f3fdc:
    // 0x1f3fdc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f3fe0:
    // 0x1f3fe0: 0x90820101  lbu         $v0, 0x101($a0)
    ctx->pc = 0x1f3fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 257)));
label_1f3fe4:
    // 0x1f3fe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f3fe8:
    if (ctx->pc == 0x1F3FE8u) {
        ctx->pc = 0x1F3FECu;
        goto label_1f3fec;
    }
    ctx->pc = 0x1F3FE4u;
    {
        const bool branch_taken_0x1f3fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3fe4) {
            ctx->pc = 0x1F3FF8u;
            goto label_1f3ff8;
        }
    }
    ctx->pc = 0x1F3FECu;
label_1f3fec:
    // 0x1f3fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ff0:
    // 0x1f3ff0: 0x10000692  b           . + 4 + (0x692 << 2)
label_1f3ff4:
    if (ctx->pc == 0x1F3FF4u) {
        ctx->pc = 0x1F3FF8u;
        goto label_1f3ff8;
    }
    ctx->pc = 0x1F3FF0u;
    {
        const bool branch_taken_0x1f3ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ff0) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F3FF8u;
label_1f3ff8:
    // 0x1f3ff8: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1f3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1f3ffc:
    // 0x1f3ffc: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f3ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4000:
    // 0x1f4000: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f4000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f4004:
    // 0x1f4004: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4008:
    // 0x1f4008: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x1f4008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f400c:
    // 0x1f400c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4010:
    // 0x1f4010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4014:
    // 0x1f4014: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1f4018:
    if (ctx->pc == 0x1F4018u) {
        ctx->pc = 0x1F401Cu;
        goto label_1f401c;
    }
    ctx->pc = 0x1F4014u;
    {
        const bool branch_taken_0x1f4014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4014) {
            ctx->pc = 0x1F4028u;
            goto label_1f4028;
        }
    }
    ctx->pc = 0x1F401Cu;
label_1f401c:
    // 0x1f401c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f401cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4020:
    // 0x1f4020: 0x10000686  b           . + 4 + (0x686 << 2)
label_1f4024:
    if (ctx->pc == 0x1F4024u) {
        ctx->pc = 0x1F4028u;
        goto label_1f4028;
    }
    ctx->pc = 0x1F4020u;
    {
        const bool branch_taken_0x1f4020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4020) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F4028u;
label_1f4028:
    // 0x1f4028: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f402c:
    // 0x1f402c: 0xc06479c  jal         func_191E70
label_1f4030:
    if (ctx->pc == 0x1F4030u) {
        ctx->pc = 0x1F4034u;
        goto label_1f4034;
    }
    ctx->pc = 0x1F402Cu;
    SET_GPR_U32(ctx, 31, 0x1F4034u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F402Cu, 0x1F4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4034u;
label_1f4034:
    // 0x1f4034: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4038:
    // 0x1f4038: 0x8c850298  lw          $a1, 0x298($a0)
    ctx->pc = 0x1f4038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
label_1f403c:
    // 0x1f403c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4040:
    // 0x1f4040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4044:
    // 0x1f4044: 0xc08c8dc  jal         func_232370
label_1f4048:
    if (ctx->pc == 0x1F4048u) {
        ctx->pc = 0x1F404Cu;
        goto label_1f404c;
    }
    ctx->pc = 0x1F4044u;
    SET_GPR_U32(ctx, 31, 0x1F404Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4044u, 0x1F404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F404Cu;
label_1f404c:
    // 0x1f404c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4050:
    // 0x1f4050: 0xc06479c  jal         func_191E70
label_1f4054:
    if (ctx->pc == 0x1F4054u) {
        ctx->pc = 0x1F4058u;
        goto label_1f4058;
    }
    ctx->pc = 0x1F4050u;
    SET_GPR_U32(ctx, 31, 0x1F4058u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4050u, 0x1F4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4058u;
label_1f4058:
    // 0x1f4058: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f405c:
    // 0x1f405c: 0x8c85029c  lw          $a1, 0x29C($a0)
    ctx->pc = 0x1f405cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
label_1f4060:
    // 0x1f4060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4064:
    // 0x1f4064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4068:
    // 0x1f4068: 0xc08c8dc  jal         func_232370
label_1f406c:
    if (ctx->pc == 0x1F406Cu) {
        ctx->pc = 0x1F4070u;
        goto label_1f4070;
    }
    ctx->pc = 0x1F4068u;
    SET_GPR_U32(ctx, 31, 0x1F4070u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4068u, 0x1F4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4070u;
label_1f4070:
    // 0x1f4070: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4074:
    // 0x1f4074: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f4074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4078:
    // 0x1f4078: 0xc06479c  jal         func_191E70
label_1f407c:
    if (ctx->pc == 0x1F407Cu) {
        ctx->pc = 0x1F4080u;
        goto label_1f4080;
    }
    ctx->pc = 0x1F4078u;
    SET_GPR_U32(ctx, 31, 0x1F4080u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4078u, 0x1F4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4080u;
label_1f4080:
    // 0x1f4080: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4084:
    // 0x1f4084: 0x8c8502a0  lw          $a1, 0x2A0($a0)
    ctx->pc = 0x1f4084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 672)));
label_1f4088:
    // 0x1f4088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f408c:
    // 0x1f408c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f408cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4090:
    // 0x1f4090: 0xc08c8dc  jal         func_232370
label_1f4094:
    if (ctx->pc == 0x1F4094u) {
        ctx->pc = 0x1F4098u;
        goto label_1f4098;
    }
    ctx->pc = 0x1F4090u;
    SET_GPR_U32(ctx, 31, 0x1F4098u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4090u, 0x1F4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4098u;
label_1f4098:
    // 0x1f4098: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f409c:
    // 0x1f409c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f40a0:
    // 0x1f40a0: 0xc06479c  jal         func_191E70
label_1f40a4:
    if (ctx->pc == 0x1F40A4u) {
        ctx->pc = 0x1F40A8u;
        goto label_1f40a8;
    }
    ctx->pc = 0x1F40A0u;
    SET_GPR_U32(ctx, 31, 0x1F40A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F40A0u, 0x1F40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40A8u;
label_1f40a8:
    // 0x1f40a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f40a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f40ac:
    // 0x1f40ac: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f40acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f40b0:
    // 0x1f40b0: 0x8cc502a4  lw          $a1, 0x2A4($a2)
    ctx->pc = 0x1f40b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 676)));
label_1f40b4:
    // 0x1f40b4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f40b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f40b8:
    // 0x1f40b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f40b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f40bc:
    // 0x1f40bc: 0xc08c8dc  jal         func_232370
label_1f40c0:
    if (ctx->pc == 0x1F40C0u) {
        ctx->pc = 0x1F40C4u;
        goto label_1f40c4;
    }
    ctx->pc = 0x1F40BCu;
    SET_GPR_U32(ctx, 31, 0x1F40C4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F40BCu, 0x1F40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40C4u;
label_1f40c4:
    // 0x1f40c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f40c8:
    // 0x1f40c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f40c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f40cc:
    // 0x1f40cc: 0xc06479c  jal         func_191E70
label_1f40d0:
    if (ctx->pc == 0x1F40D0u) {
        ctx->pc = 0x1F40D4u;
        goto label_1f40d4;
    }
    ctx->pc = 0x1F40CCu;
    SET_GPR_U32(ctx, 31, 0x1F40D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F40CCu, 0x1F40D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40D4u;
label_1f40d4:
    // 0x1f40d4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f40d8:
    // 0x1f40d8: 0x8ca602b4  lw          $a2, 0x2B4($a1)
    ctx->pc = 0x1f40d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 692)));
label_1f40dc:
    // 0x1f40dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f40dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f40e0:
    // 0x1f40e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f40e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f40e4:
    // 0x1f40e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f40e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f40e8:
    // 0x1f40e8: 0xc08c8dc  jal         func_232370
label_1f40ec:
    if (ctx->pc == 0x1F40ECu) {
        ctx->pc = 0x1F40F0u;
        goto label_1f40f0;
    }
    ctx->pc = 0x1F40E8u;
    SET_GPR_U32(ctx, 31, 0x1F40F0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F40E8u, 0x1F40F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40F0u;
label_1f40f0:
    // 0x1f40f0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f40f4:
    // 0x1f40f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f40f8:
    // 0x1f40f8: 0xc06479c  jal         func_191E70
label_1f40fc:
    if (ctx->pc == 0x1F40FCu) {
        ctx->pc = 0x1F4100u;
        goto label_1f4100;
    }
    ctx->pc = 0x1F40F8u;
    SET_GPR_U32(ctx, 31, 0x1F4100u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F40F8u, 0x1F4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4100u;
label_1f4100:
    // 0x1f4100: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4104:
    // 0x1f4104: 0x8c8502b8  lw          $a1, 0x2B8($a0)
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 696)));
label_1f4108:
    // 0x1f4108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f410c:
    // 0x1f410c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f410cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4110:
    // 0x1f4110: 0xc08c8dc  jal         func_232370
label_1f4114:
    if (ctx->pc == 0x1F4114u) {
        ctx->pc = 0x1F4118u;
        goto label_1f4118;
    }
    ctx->pc = 0x1F4110u;
    SET_GPR_U32(ctx, 31, 0x1F4118u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4110u, 0x1F4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4118u;
label_1f4118:
    // 0x1f4118: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f411c:
    // 0x1f411c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4120:
    // 0x1f4120: 0xc06479c  jal         func_191E70
label_1f4124:
    if (ctx->pc == 0x1F4124u) {
        ctx->pc = 0x1F4128u;
        goto label_1f4128;
    }
    ctx->pc = 0x1F4120u;
    SET_GPR_U32(ctx, 31, 0x1F4128u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4120u, 0x1F4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4128u;
label_1f4128:
    // 0x1f4128: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f412c:
    // 0x1f412c: 0x8cc302bc  lw          $v1, 0x2BC($a2)
    ctx->pc = 0x1f412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
label_1f4130:
    // 0x1f4130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4134:
    // 0x1f4134: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4138:
    // 0x1f4138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f413c:
    // 0x1f413c: 0xc08c8dc  jal         func_232370
label_1f4140:
    if (ctx->pc == 0x1F4140u) {
        ctx->pc = 0x1F4144u;
        goto label_1f4144;
    }
    ctx->pc = 0x1F413Cu;
    SET_GPR_U32(ctx, 31, 0x1F4144u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F413Cu, 0x1F4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4144u;
label_1f4144:
    // 0x1f4144: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4148:
    // 0x1f4148: 0xc06479c  jal         func_191E70
label_1f414c:
    if (ctx->pc == 0x1F414Cu) {
        ctx->pc = 0x1F4150u;
        goto label_1f4150;
    }
    ctx->pc = 0x1F4148u;
    SET_GPR_U32(ctx, 31, 0x1F4150u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4148u, 0x1F4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4150u;
label_1f4150:
    // 0x1f4150: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4154:
    // 0x1f4154: 0x8ca502c0  lw          $a1, 0x2C0($a1)
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 704)));
label_1f4158:
    // 0x1f4158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f415c:
    // 0x1f415c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f415cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4160:
    // 0x1f4160: 0xc08c8dc  jal         func_232370
label_1f4164:
    if (ctx->pc == 0x1F4164u) {
        ctx->pc = 0x1F4168u;
        goto label_1f4168;
    }
    ctx->pc = 0x1F4160u;
    SET_GPR_U32(ctx, 31, 0x1F4168u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4160u, 0x1F4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4168u;
label_1f4168:
    // 0x1f4168: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f4168u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f416c:
    // 0x1f416c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4170:
    // 0x1f4170: 0x904300f8  lbu         $v1, 0xF8($v0)
    ctx->pc = 0x1f4170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 248)));
label_1f4174:
    // 0x1f4174: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
label_1f4178:
    if (ctx->pc == 0x1F4178u) {
        ctx->pc = 0x1F417Cu;
        goto label_1f417c;
    }
    ctx->pc = 0x1F4174u;
    {
        const bool branch_taken_0x1f4174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4174) {
            ctx->pc = 0x1F4458u;
            goto label_1f4458;
        }
    }
    ctx->pc = 0x1F417Cu;
label_1f417c:
    // 0x1f417c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4180:
    // 0x1f4180: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4184:
    // 0x1f4184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4188:
    // 0x1f4188: 0xc065180  jal         func_194600
label_1f418c:
    if (ctx->pc == 0x1F418Cu) {
        ctx->pc = 0x1F4190u;
        goto label_1f4190;
    }
    ctx->pc = 0x1F4188u;
    SET_GPR_U32(ctx, 31, 0x1F4190u);
    ctx->pc = 0x194600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194600u, 0x1F4188u, 0x1F4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4190u;
label_1f4190:
    // 0x1f4190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4194:
    // 0x1f4194: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4198:
    // 0x1f4198: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x1f4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
label_1f419c:
    // 0x1f419c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f419cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f41a0:
    // 0x1f41a0: 0xacc002d4  sw          $zero, 0x2D4($a2)
    ctx->pc = 0x1f41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 724), GPR_U32(ctx, 0));
label_1f41a4:
    // 0x1f41a4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f41a8:
    // 0x1f41a8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f41ac:
    // 0x1f41ac: 0x24a40110  addiu       $a0, $a1, 0x110
    ctx->pc = 0x1f41acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
label_1f41b0:
    // 0x1f41b0: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1f41b4:
    // 0x1f41b4: 0xc04a9c0  jal         func_12A700
label_1f41b8:
    if (ctx->pc == 0x1F41B8u) {
        ctx->pc = 0x1F41BCu;
        goto label_1f41bc;
    }
    ctx->pc = 0x1F41B4u;
    SET_GPR_U32(ctx, 31, 0x1F41BCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F41B4u, 0x1F41BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41BCu;
label_1f41bc:
    // 0x1f41bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f41c0:
    // 0x1f41c0: 0x601027  not         $v0, $v1
    ctx->pc = 0x1f41c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1f41c4:
    // 0x1f41c4: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1f41c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f41c8:
    // 0x1f41c8: 0x30d400ff  andi        $s4, $a2, 0xFF
    ctx->pc = 0x1f41c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f41cc:
    // 0x1f41cc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f41d0:
    // 0x1f41d0: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f41d4:
    // 0x1f41d4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f41d8:
    // 0x1f41d8: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x1f41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f41dc:
    // 0x1f41dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f41dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f41e0:
    // 0x1f41e0: 0x45010048  bc1t        . + 4 + (0x48 << 2)
label_1f41e4:
    if (ctx->pc == 0x1F41E4u) {
        ctx->pc = 0x1F41E8u;
        goto label_1f41e8;
    }
    ctx->pc = 0x1F41E0u;
    {
        const bool branch_taken_0x1f41e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f41e0) {
            ctx->pc = 0x1F4304u;
            goto label_1f4304;
        }
    }
    ctx->pc = 0x1F41E8u;
label_1f41e8:
    // 0x1f41e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f41e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f41ec:
    // 0x1f41ec: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x1f41ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f41f0:
    // 0x1f41f0: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1f41f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1f41f4:
    // 0x1f41f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f41f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f41f8:
    // 0x1f41f8: 0x0  nop
    ctx->pc = 0x1f41f8u;
    // NOP
label_1f41fc:
    // 0x1f41fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f41fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f4200:
    // 0x1f4200: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4204:
    // 0x1f4204: 0xe44002c8  swc1        $f0, 0x2C8($v0)
    ctx->pc = 0x1f4204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
label_1f4208:
    // 0x1f4208: 0x16800021  bnez        $s4, . + 4 + (0x21 << 2)
label_1f420c:
    if (ctx->pc == 0x1F420Cu) {
        ctx->pc = 0x1F4210u;
        goto label_1f4210;
    }
    ctx->pc = 0x1F4208u;
    {
        const bool branch_taken_0x1f4208 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4208) {
            ctx->pc = 0x1F4290u;
            goto label_1f4290;
        }
    }
    ctx->pc = 0x1F4210u;
label_1f4210:
    // 0x1f4210: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4214:
    // 0x1f4214: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1f4214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1f4218:
    // 0x1f4218: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x1f4218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1f421c:
    // 0x1f421c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1f4220:
    if (ctx->pc == 0x1F4220u) {
        ctx->pc = 0x1F4224u;
        goto label_1f4224;
    }
    ctx->pc = 0x1F421Cu;
    {
        const bool branch_taken_0x1f421c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f421c) {
            ctx->pc = 0x1F4260u;
            goto label_1f4260;
        }
    }
    ctx->pc = 0x1F4224u;
label_1f4224:
    // 0x1f4224: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4228:
    // 0x1f4228: 0xc06479c  jal         func_191E70
label_1f422c:
    if (ctx->pc == 0x1F422Cu) {
        ctx->pc = 0x1F4230u;
        goto label_1f4230;
    }
    ctx->pc = 0x1F4228u;
    SET_GPR_U32(ctx, 31, 0x1F4230u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4228u, 0x1F4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4230u;
label_1f4230:
    // 0x1f4230: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4234:
    // 0x1f4234: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4238:
    // 0x1f4238: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x1f4238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
label_1f423c:
    // 0x1f423c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4240:
    // 0x1f4240: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1f4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_1f4244:
    // 0x1f4244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4248:
    // 0x1f4248: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1f4248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1f424c:
    // 0x1f424c: 0x403026  xor         $a2, $v0, $zero
    ctx->pc = 0x1f424cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1f4250:
    // 0x1f4250: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x1f4250u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f4254:
    // 0x1f4254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4258:
    // 0x1f4258: 0xc08c8dc  jal         func_232370
label_1f425c:
    if (ctx->pc == 0x1F425Cu) {
        ctx->pc = 0x1F4260u;
        goto label_1f4260;
    }
    ctx->pc = 0x1F4258u;
    SET_GPR_U32(ctx, 31, 0x1F4260u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4258u, 0x1F4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4260u;
label_1f4260:
    // 0x1f4260: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4264:
    // 0x1f4264: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4268:
    // 0x1f4268: 0xc06479c  jal         func_191E70
label_1f426c:
    if (ctx->pc == 0x1F426Cu) {
        ctx->pc = 0x1F4270u;
        goto label_1f4270;
    }
    ctx->pc = 0x1F4268u;
    SET_GPR_U32(ctx, 31, 0x1F4270u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4268u, 0x1F4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4270u;
label_1f4270:
    // 0x1f4270: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4274:
    // 0x1f4274: 0x8c850290  lw          $a1, 0x290($a0)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
label_1f4278:
    // 0x1f4278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f427c:
    // 0x1f427c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f427cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4280:
    // 0x1f4280: 0xc08c8dc  jal         func_232370
label_1f4284:
    if (ctx->pc == 0x1F4284u) {
        ctx->pc = 0x1F4288u;
        goto label_1f4288;
    }
    ctx->pc = 0x1F4280u;
    SET_GPR_U32(ctx, 31, 0x1F4288u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4280u, 0x1F4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4288u;
label_1f4288:
    // 0x1f4288: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1f428c:
    if (ctx->pc == 0x1F428Cu) {
        ctx->pc = 0x1F4290u;
        goto label_1f4290;
    }
    ctx->pc = 0x1F4288u;
    {
        const bool branch_taken_0x1f4288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4288) {
            ctx->pc = 0x1F42F4u;
            goto label_1f42f4;
        }
    }
    ctx->pc = 0x1F4290u;
label_1f4290:
    // 0x1f4290: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4294:
    // 0x1f4294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4298:
    // 0x1f4298: 0xc06479c  jal         func_191E70
label_1f429c:
    if (ctx->pc == 0x1F429Cu) {
        ctx->pc = 0x1F42A0u;
        goto label_1f42a0;
    }
    ctx->pc = 0x1F4298u;
    SET_GPR_U32(ctx, 31, 0x1F42A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4298u, 0x1F42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42A0u;
label_1f42a0:
    // 0x1f42a0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f42a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f42a4:
    // 0x1f42a4: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x1f42a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
label_1f42a8:
    // 0x1f42a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f42a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f42ac:
    // 0x1f42ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f42acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f42b0:
    // 0x1f42b0: 0xc08c8dc  jal         func_232370
label_1f42b4:
    if (ctx->pc == 0x1F42B4u) {
        ctx->pc = 0x1F42B8u;
        goto label_1f42b8;
    }
    ctx->pc = 0x1F42B0u;
    SET_GPR_U32(ctx, 31, 0x1F42B8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F42B0u, 0x1F42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42B8u;
label_1f42b8:
    // 0x1f42b8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f42b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f42bc:
    // 0x1f42bc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f42bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f42c0:
    // 0x1f42c0: 0xc06479c  jal         func_191E70
label_1f42c4:
    if (ctx->pc == 0x1F42C4u) {
        ctx->pc = 0x1F42C8u;
        goto label_1f42c8;
    }
    ctx->pc = 0x1F42C0u;
    SET_GPR_U32(ctx, 31, 0x1F42C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F42C0u, 0x1F42C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42C8u;
label_1f42c8:
    // 0x1f42c8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f42c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f42cc:
    // 0x1f42cc: 0x8cc50290  lw          $a1, 0x290($a2)
    ctx->pc = 0x1f42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 656)));
label_1f42d0:
    // 0x1f42d0: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f42d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f42d4:
    // 0x1f42d4: 0x8fc402d0  lw          $a0, 0x2D0($fp)
    ctx->pc = 0x1f42d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 720)));
label_1f42d8:
    // 0x1f42d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f42d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f42dc:
    // 0x1f42dc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1f42dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1f42e0:
    // 0x1f42e0: 0x603026  xor         $a2, $v1, $zero
    ctx->pc = 0x1f42e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1f42e4:
    // 0x1f42e4: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x1f42e4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f42e8:
    // 0x1f42e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f42e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f42ec:
    // 0x1f42ec: 0xc08c8dc  jal         func_232370
label_1f42f0:
    if (ctx->pc == 0x1F42F0u) {
        ctx->pc = 0x1F42F4u;
        goto label_1f42f4;
    }
    ctx->pc = 0x1F42ECu;
    SET_GPR_U32(ctx, 31, 0x1F42F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F42ECu, 0x1F42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42F4u;
label_1f42f4:
    // 0x1f42f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f42f8:
    // 0x1f42f8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1f42f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1f42fc:
    // 0x1f42fc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1f42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f4300:
    // 0x1f4300: 0xac4502d0  sw          $a1, 0x2D0($v0)
    ctx->pc = 0x1f4300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 5));
label_1f4304:
    // 0x1f4304: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4308:
    // 0x1f4308: 0xc06479c  jal         func_191E70
label_1f430c:
    if (ctx->pc == 0x1F430Cu) {
        ctx->pc = 0x1F4310u;
        goto label_1f4310;
    }
    ctx->pc = 0x1F4308u;
    SET_GPR_U32(ctx, 31, 0x1F4310u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4308u, 0x1F4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4310u;
label_1f4310:
    // 0x1f4310: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4314:
    // 0x1f4314: 0x8c6502a8  lw          $a1, 0x2A8($v1)
    ctx->pc = 0x1f4314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 680)));
label_1f4318:
    // 0x1f4318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f431c:
    // 0x1f431c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f431cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4320:
    // 0x1f4320: 0xc08c8dc  jal         func_232370
label_1f4324:
    if (ctx->pc == 0x1F4324u) {
        ctx->pc = 0x1F4328u;
        goto label_1f4328;
    }
    ctx->pc = 0x1F4320u;
    SET_GPR_U32(ctx, 31, 0x1F4328u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4320u, 0x1F4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4328u;
label_1f4328:
    // 0x1f4328: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f432c:
    // 0x1f432c: 0xc06479c  jal         func_191E70
label_1f4330:
    if (ctx->pc == 0x1F4330u) {
        ctx->pc = 0x1F4334u;
        goto label_1f4334;
    }
    ctx->pc = 0x1F432Cu;
    SET_GPR_U32(ctx, 31, 0x1F4334u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F432Cu, 0x1F4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4334u;
label_1f4334:
    // 0x1f4334: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4338:
    // 0x1f4338: 0x8ca60138  lw          $a2, 0x138($a1)
    ctx->pc = 0x1f4338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 312)));
label_1f433c:
    // 0x1f433c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4340:
    // 0x1f4340: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4344:
    // 0x1f4344: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4348:
    // 0x1f4348: 0xc08c8dc  jal         func_232370
label_1f434c:
    if (ctx->pc == 0x1F434Cu) {
        ctx->pc = 0x1F4350u;
        goto label_1f4350;
    }
    ctx->pc = 0x1F4348u;
    SET_GPR_U32(ctx, 31, 0x1F4350u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4348u, 0x1F4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4350u;
label_1f4350:
    // 0x1f4350: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1f4350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4354:
    // 0x1f4354: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f4354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f4358:
    // 0x1f4358: 0xc06479c  jal         func_191E70
label_1f435c:
    if (ctx->pc == 0x1F435Cu) {
        ctx->pc = 0x1F4360u;
        goto label_1f4360;
    }
    ctx->pc = 0x1F4358u;
    SET_GPR_U32(ctx, 31, 0x1F4360u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4358u, 0x1F4360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4360u;
label_1f4360:
    // 0x1f4360: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4364:
    // 0x1f4364: 0x8c6502ac  lw          $a1, 0x2AC($v1)
    ctx->pc = 0x1f4364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 684)));
label_1f4368:
    // 0x1f4368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f436c:
    // 0x1f436c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f4370:
    // 0x1f4370: 0xc08c8dc  jal         func_232370
label_1f4374:
    if (ctx->pc == 0x1F4374u) {
        ctx->pc = 0x1F4378u;
        goto label_1f4378;
    }
    ctx->pc = 0x1F4370u;
    SET_GPR_U32(ctx, 31, 0x1F4378u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4370u, 0x1F4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4378u;
label_1f4378:
    // 0x1f4378: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f437c:
    // 0x1f437c: 0xc06479c  jal         func_191E70
label_1f4380:
    if (ctx->pc == 0x1F4380u) {
        ctx->pc = 0x1F4384u;
        goto label_1f4384;
    }
    ctx->pc = 0x1F437Cu;
    SET_GPR_U32(ctx, 31, 0x1F4384u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F437Cu, 0x1F4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4384u;
label_1f4384:
    // 0x1f4384: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4388:
    // 0x1f4388: 0x8c8502b0  lw          $a1, 0x2B0($a0)
    ctx->pc = 0x1f4388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
label_1f438c:
    // 0x1f438c: 0x14182b  sltu        $v1, $zero, $s4
    ctx->pc = 0x1f438cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1f4390:
    // 0x1f4390: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1f4390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1f4394:
    // 0x1f4394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4398:
    // 0x1f4398: 0xc08c8dc  jal         func_232370
label_1f439c:
    if (ctx->pc == 0x1F439Cu) {
        ctx->pc = 0x1F43A0u;
        goto label_1f43a0;
    }
    ctx->pc = 0x1F4398u;
    SET_GPR_U32(ctx, 31, 0x1F43A0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4398u, 0x1F43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43A0u;
label_1f43a0:
    // 0x1f43a0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f43a4:
    // 0x1f43a4: 0xc06479c  jal         func_191E70
label_1f43a8:
    if (ctx->pc == 0x1F43A8u) {
        ctx->pc = 0x1F43ACu;
        goto label_1f43ac;
    }
    ctx->pc = 0x1F43A4u;
    SET_GPR_U32(ctx, 31, 0x1F43ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F43A4u, 0x1F43ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43ACu;
label_1f43ac:
    // 0x1f43ac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f43acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f43b0:
    // 0x1f43b0: 0x8c8502c4  lw          $a1, 0x2C4($a0)
    ctx->pc = 0x1f43b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
label_1f43b4:
    // 0x1f43b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f43b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f43b8:
    // 0x1f43b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f43b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f43bc:
    // 0x1f43bc: 0xc08c8dc  jal         func_232370
label_1f43c0:
    if (ctx->pc == 0x1F43C0u) {
        ctx->pc = 0x1F43C4u;
        goto label_1f43c4;
    }
    ctx->pc = 0x1F43BCu;
    SET_GPR_U32(ctx, 31, 0x1F43C4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F43BCu, 0x1F43C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43C4u;
label_1f43c4:
    // 0x1f43c4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f43c8:
    // 0x1f43c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f43c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f43cc:
    // 0x1f43cc: 0xc06479c  jal         func_191E70
label_1f43d0:
    if (ctx->pc == 0x1F43D0u) {
        ctx->pc = 0x1F43D4u;
        goto label_1f43d4;
    }
    ctx->pc = 0x1F43CCu;
    SET_GPR_U32(ctx, 31, 0x1F43D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F43CCu, 0x1F43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43D4u;
label_1f43d4:
    // 0x1f43d4: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1f43d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f43d8:
    // 0x1f43d8: 0x8ce50138  lw          $a1, 0x138($a3)
    ctx->pc = 0x1f43d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 312)));
label_1f43dc:
    // 0x1f43dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f43dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f43e0:
    // 0x1f43e0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1f43e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f43e4:
    // 0x1f43e4: 0xc08c688  jal         func_231A20
label_1f43e8:
    if (ctx->pc == 0x1F43E8u) {
        ctx->pc = 0x1F43ECu;
        goto label_1f43ec;
    }
    ctx->pc = 0x1F43E4u;
    SET_GPR_U32(ctx, 31, 0x1F43ECu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1F43E4u, 0x1F43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43ECu;
label_1f43ec:
    // 0x1f43ec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f43ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f43f0:
    // 0x1f43f0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1f43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1f43f4:
    // 0x1f43f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1f43f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f43f8:
    // 0x1f43f8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f43f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f43fc:
    // 0x1f43fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f43fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f4400:
    // 0x1f4400: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f4404:
    // 0x1f4404: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f4404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1f4408:
    // 0x1f4408: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f440c:
    // 0x1f440c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1f440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4410:
    // 0x1f4410: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f4410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f4414:
    // 0x1f4414: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1f4414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f4418:
    // 0x1f4418: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f441c:
    // 0x1f441c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4420:
    // 0x1f4420: 0xc06479c  jal         func_191E70
label_1f4424:
    if (ctx->pc == 0x1F4424u) {
        ctx->pc = 0x1F4428u;
        goto label_1f4428;
    }
    ctx->pc = 0x1F4420u;
    SET_GPR_U32(ctx, 31, 0x1F4428u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4420u, 0x1F4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4428u;
label_1f4428:
    // 0x1f4428: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f442c:
    // 0x1f442c: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1f442cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_1f4430:
    // 0x1f4430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4434:
    // 0x1f4434: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1f4434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f4438:
    // 0x1f4438: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f443c:
    // 0x1f443c: 0xc78c8280  lwc1        $f12, -0x7D80($gp)
    ctx->pc = 0x1f443cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f4440:
    // 0x1f4440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4444:
    // 0x1f4444: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f4444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4448:
    // 0x1f4448: 0xc08c64c  jal         func_231930
label_1f444c:
    if (ctx->pc == 0x1F444Cu) {
        ctx->pc = 0x1F4450u;
        goto label_1f4450;
    }
    ctx->pc = 0x1F4448u;
    SET_GPR_U32(ctx, 31, 0x1F4450u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1F4448u, 0x1F4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4450u;
label_1f4450:
    // 0x1f4450: 0x10000197  b           . + 4 + (0x197 << 2)
label_1f4454:
    if (ctx->pc == 0x1F4454u) {
        ctx->pc = 0x1F4458u;
        goto label_1f4458;
    }
    ctx->pc = 0x1F4450u;
    {
        const bool branch_taken_0x1f4450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4450) {
            ctx->pc = 0x1F4AB0u;
            goto label_1f4ab0;
        }
    }
    ctx->pc = 0x1F4458u;
label_1f4458:
    // 0x1f4458: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f445c:
    // 0x1f445c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4460:
    // 0x1f4460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4464:
    // 0x1f4464: 0xc065180  jal         func_194600
label_1f4468:
    if (ctx->pc == 0x1F4468u) {
        ctx->pc = 0x1F446Cu;
        goto label_1f446c;
    }
    ctx->pc = 0x1F4464u;
    SET_GPR_U32(ctx, 31, 0x1F446Cu);
    ctx->pc = 0x194600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194600u, 0x1F4464u, 0x1F446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F446Cu;
label_1f446c:
    // 0x1f446c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f446cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4470:
    // 0x1f4470: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4474:
    // 0x1f4474: 0xe44002c8  swc1        $f0, 0x2C8($v0)
    ctx->pc = 0x1f4474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
label_1f4478:
    // 0x1f4478: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f447c:
    // 0x1f447c: 0xac8002d0  sw          $zero, 0x2D0($a0)
    ctx->pc = 0x1f447cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 720), GPR_U32(ctx, 0));
label_1f4480:
    // 0x1f4480: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4484:
    // 0x1f4484: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4488:
    // 0x1f4488: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f448c:
    // 0x1f448c: 0xc48002cc  lwc1        $f0, 0x2CC($a0)
    ctx->pc = 0x1f448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4490:
    // 0x1f4490: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f4490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4494:
    // 0x1f4494: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_1f4498:
    if (ctx->pc == 0x1F4498u) {
        ctx->pc = 0x1F449Cu;
        goto label_1f449c;
    }
    ctx->pc = 0x1F4494u;
    {
        const bool branch_taken_0x1f4494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4494) {
            ctx->pc = 0x1F4538u;
            goto label_1f4538;
        }
    }
    ctx->pc = 0x1F449Cu;
label_1f449c:
    // 0x1f449c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f449cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f44a0:
    // 0x1f44a0: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x1f44a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f44a4:
    // 0x1f44a4: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x1f44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_1f44a8:
    // 0x1f44a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f44a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f44ac:
    // 0x1f44ac: 0x0  nop
    ctx->pc = 0x1f44acu;
    // NOP
label_1f44b0:
    // 0x1f44b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f44b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f44b4:
    // 0x1f44b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f44b8:
    // 0x1f44b8: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x1f44b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
label_1f44bc:
    // 0x1f44bc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f44c0:
    // 0x1f44c0: 0xc06479c  jal         func_191E70
label_1f44c4:
    if (ctx->pc == 0x1F44C4u) {
        ctx->pc = 0x1F44C8u;
        goto label_1f44c8;
    }
    ctx->pc = 0x1F44C0u;
    SET_GPR_U32(ctx, 31, 0x1F44C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F44C0u, 0x1F44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F44C8u;
label_1f44c8:
    // 0x1f44c8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f44cc:
    // 0x1f44cc: 0x8c6502a8  lw          $a1, 0x2A8($v1)
    ctx->pc = 0x1f44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 680)));
label_1f44d0:
    // 0x1f44d0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f44d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f44d4:
    // 0x1f44d4: 0x8cc302d4  lw          $v1, 0x2D4($a2)
    ctx->pc = 0x1f44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
label_1f44d8:
    // 0x1f44d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f44dc:
    // 0x1f44dc: 0x30660001  andi        $a2, $v1, 0x1
    ctx->pc = 0x1f44dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1f44e0:
    // 0x1f44e0: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x1f44e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
label_1f44e4:
    // 0x1f44e4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1f44e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f44e8:
    // 0x1f44e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f44e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f44ec:
    // 0x1f44ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f44ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f44f0:
    // 0x1f44f0: 0xc08c8dc  jal         func_232370
label_1f44f4:
    if (ctx->pc == 0x1F44F4u) {
        ctx->pc = 0x1F44F8u;
        goto label_1f44f8;
    }
    ctx->pc = 0x1F44F0u;
    SET_GPR_U32(ctx, 31, 0x1F44F8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F44F0u, 0x1F44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F44F8u;
label_1f44f8:
    // 0x1f44f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f44f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f44fc:
    // 0x1f44fc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f44fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4500:
    // 0x1f4500: 0x8cc202d4  lw          $v0, 0x2D4($a2)
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 724)));
label_1f4504:
    // 0x1f4504: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1f4504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f4508:
    // 0x1f4508: 0xacc402d4  sw          $a0, 0x2D4($a2)
    ctx->pc = 0x1f4508u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 724), GPR_U32(ctx, 4));
label_1f450c:
    // 0x1f450c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4510:
    // 0x1f4510: 0x8c4302d4  lw          $v1, 0x2D4($v0)
    ctx->pc = 0x1f4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
label_1f4514:
    // 0x1f4514: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x1f4514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1f4518:
    // 0x1f4518: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1f451c:
    if (ctx->pc == 0x1F451Cu) {
        ctx->pc = 0x1F4520u;
        goto label_1f4520;
    }
    ctx->pc = 0x1F4518u;
    {
        const bool branch_taken_0x1f4518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4518) {
            ctx->pc = 0x1F4538u;
            goto label_1f4538;
        }
    }
    ctx->pc = 0x1F4520u;
label_1f4520:
    // 0x1f4520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4524:
    // 0x1f4524: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1f4524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1f4528:
    // 0x1f4528: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1f4528u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f452c:
    // 0x1f452c: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x1f452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4530:
    // 0x1f4530: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4534:
    // 0x1f4534: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x1f4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
label_1f4538:
    // 0x1f4538: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f453c:
    // 0x1f453c: 0xc06479c  jal         func_191E70
label_1f4540:
    if (ctx->pc == 0x1F4540u) {
        ctx->pc = 0x1F4544u;
        goto label_1f4544;
    }
    ctx->pc = 0x1F453Cu;
    SET_GPR_U32(ctx, 31, 0x1F4544u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F453Cu, 0x1F4544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4544u;
label_1f4544:
    // 0x1f4544: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4548:
    // 0x1f4548: 0x8c650290  lw          $a1, 0x290($v1)
    ctx->pc = 0x1f4548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 656)));
label_1f454c:
    // 0x1f454c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4550:
    // 0x1f4550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4554:
    // 0x1f4554: 0xc08c8dc  jal         func_232370
label_1f4558:
    if (ctx->pc == 0x1F4558u) {
        ctx->pc = 0x1F455Cu;
        goto label_1f455c;
    }
    ctx->pc = 0x1F4554u;
    SET_GPR_U32(ctx, 31, 0x1F455Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4554u, 0x1F455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F455Cu;
label_1f455c:
    // 0x1f455c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4560:
    // 0x1f4560: 0xc06479c  jal         func_191E70
label_1f4564:
    if (ctx->pc == 0x1F4564u) {
        ctx->pc = 0x1F4568u;
        goto label_1f4568;
    }
    ctx->pc = 0x1F4560u;
    SET_GPR_U32(ctx, 31, 0x1F4568u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4560u, 0x1F4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4568u;
label_1f4568:
    // 0x1f4568: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f456c:
    // 0x1f456c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4570:
    // 0x1f4570: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x1f4570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
label_1f4574:
    // 0x1f4574: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f4574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4578:
    // 0x1f4578: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f457c:
    // 0x1f457c: 0xc08c8dc  jal         func_232370
label_1f4580:
    if (ctx->pc == 0x1F4580u) {
        ctx->pc = 0x1F4584u;
        goto label_1f4584;
    }
    ctx->pc = 0x1F457Cu;
    SET_GPR_U32(ctx, 31, 0x1F4584u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F457Cu, 0x1F4584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4584u;
label_1f4584:
    // 0x1f4584: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4588:
    // 0x1f4588: 0xc06479c  jal         func_191E70
label_1f458c:
    if (ctx->pc == 0x1F458Cu) {
        ctx->pc = 0x1F4590u;
        goto label_1f4590;
    }
    ctx->pc = 0x1F4588u;
    SET_GPR_U32(ctx, 31, 0x1F4590u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4588u, 0x1F4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4590u;
label_1f4590:
    // 0x1f4590: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4594:
    // 0x1f4594: 0x8fc50138  lw          $a1, 0x138($fp)
    ctx->pc = 0x1f4594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 312)));
label_1f4598:
    // 0x1f4598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f459c:
    // 0x1f459c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f459cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f45a0:
    // 0x1f45a0: 0xc08c8dc  jal         func_232370
label_1f45a4:
    if (ctx->pc == 0x1F45A4u) {
        ctx->pc = 0x1F45A8u;
        goto label_1f45a8;
    }
    ctx->pc = 0x1F45A0u;
    SET_GPR_U32(ctx, 31, 0x1F45A8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F45A0u, 0x1F45A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45A8u;
label_1f45a8:
    // 0x1f45a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f45a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f45ac:
    // 0x1f45ac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f45b0:
    // 0x1f45b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f45b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f45b4:
    // 0x1f45b4: 0xc06479c  jal         func_191E70
label_1f45b8:
    if (ctx->pc == 0x1F45B8u) {
        ctx->pc = 0x1F45BCu;
        goto label_1f45bc;
    }
    ctx->pc = 0x1F45B4u;
    SET_GPR_U32(ctx, 31, 0x1F45BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F45B4u, 0x1F45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45BCu;
label_1f45bc:
    // 0x1f45bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f45bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f45c0:
    // 0x1f45c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f45c4:
    // 0x1f45c4: 0x8c4602c4  lw          $a2, 0x2C4($v0)
    ctx->pc = 0x1f45c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 708)));
label_1f45c8:
    // 0x1f45c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f45c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f45cc:
    // 0x1f45cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f45ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f45d0:
    // 0x1f45d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f45d4:
    // 0x1f45d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f45d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f45d8:
    // 0x1f45d8: 0xc08c8dc  jal         func_232370
label_1f45dc:
    if (ctx->pc == 0x1F45DCu) {
        ctx->pc = 0x1F45E0u;
        goto label_1f45e0;
    }
    ctx->pc = 0x1F45D8u;
    SET_GPR_U32(ctx, 31, 0x1F45E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F45D8u, 0x1F45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45E0u;
label_1f45e0:
    // 0x1f45e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f45e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f45e4:
    // 0x1f45e4: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1f45e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f45e8:
    // 0x1f45e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f45e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f45ec:
    // 0x1f45ec: 0xc06479c  jal         func_191E70
label_1f45f0:
    if (ctx->pc == 0x1F45F0u) {
        ctx->pc = 0x1F45F4u;
        goto label_1f45f4;
    }
    ctx->pc = 0x1F45ECu;
    SET_GPR_U32(ctx, 31, 0x1F45F4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F45ECu, 0x1F45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F45F4u;
label_1f45f4:
    // 0x1f45f4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f45f8:
    // 0x1f45f8: 0x8c9e02ac  lw          $fp, 0x2AC($a0)
    ctx->pc = 0x1f45f8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 684)));
label_1f45fc:
    // 0x1f45fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f45fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4600:
    // 0x1f4600: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f4600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f4604:
    // 0x1f4604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4608:
    // 0x1f4608: 0xc08c8dc  jal         func_232370
label_1f460c:
    if (ctx->pc == 0x1F460Cu) {
        ctx->pc = 0x1F4610u;
        goto label_1f4610;
    }
    ctx->pc = 0x1F4608u;
    SET_GPR_U32(ctx, 31, 0x1F4610u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4608u, 0x1F4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4610u;
label_1f4610:
    // 0x1f4610: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4614:
    // 0x1f4614: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f4614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4618:
    // 0x1f4618: 0xc06479c  jal         func_191E70
label_1f461c:
    if (ctx->pc == 0x1F461Cu) {
        ctx->pc = 0x1F4620u;
        goto label_1f4620;
    }
    ctx->pc = 0x1F4618u;
    SET_GPR_U32(ctx, 31, 0x1F4620u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4618u, 0x1F4620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4620u;
label_1f4620:
    // 0x1f4620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4624:
    // 0x1f4624: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4628:
    // 0x1f4628: 0x8c6302b0  lw          $v1, 0x2B0($v1)
    ctx->pc = 0x1f4628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
label_1f462c:
    // 0x1f462c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4630:
    // 0x1f4630: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4634:
    // 0x1f4634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4638:
    // 0x1f4638: 0xc08c8dc  jal         func_232370
label_1f463c:
    if (ctx->pc == 0x1F463Cu) {
        ctx->pc = 0x1F4640u;
        goto label_1f4640;
    }
    ctx->pc = 0x1F4638u;
    SET_GPR_U32(ctx, 31, 0x1F4640u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4638u, 0x1F4640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4640u;
label_1f4640:
    // 0x1f4640: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1f4644:
    if (ctx->pc == 0x1F4644u) {
        ctx->pc = 0x1F4648u;
        goto label_1f4648;
    }
    ctx->pc = 0x1F4640u;
    {
        const bool branch_taken_0x1f4640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4640) {
            ctx->pc = 0x1F4AB0u;
            goto label_1f4ab0;
        }
    }
    ctx->pc = 0x1F4648u;
label_1f4648:
    // 0x1f4648: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f464c:
    // 0x1f464c: 0xc06479c  jal         func_191E70
label_1f4650:
    if (ctx->pc == 0x1F4650u) {
        ctx->pc = 0x1F4654u;
        goto label_1f4654;
    }
    ctx->pc = 0x1F464Cu;
    SET_GPR_U32(ctx, 31, 0x1F4654u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F464Cu, 0x1F4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4654u;
label_1f4654:
    // 0x1f4654: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4658:
    // 0x1f4658: 0x8c8502a8  lw          $a1, 0x2A8($a0)
    ctx->pc = 0x1f4658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 680)));
label_1f465c:
    // 0x1f465c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4660:
    // 0x1f4660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4664:
    // 0x1f4664: 0xc08c8dc  jal         func_232370
label_1f4668:
    if (ctx->pc == 0x1F4668u) {
        ctx->pc = 0x1F466Cu;
        goto label_1f466c;
    }
    ctx->pc = 0x1F4664u;
    SET_GPR_U32(ctx, 31, 0x1F466Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4664u, 0x1F466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F466Cu;
label_1f466c:
    // 0x1f466c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f466cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4670:
    // 0x1f4670: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4674:
    // 0x1f4674: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f4674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4678:
    // 0x1f4678: 0xc06479c  jal         func_191E70
label_1f467c:
    if (ctx->pc == 0x1F467Cu) {
        ctx->pc = 0x1F4680u;
        goto label_1f4680;
    }
    ctx->pc = 0x1F4678u;
    SET_GPR_U32(ctx, 31, 0x1F4680u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4678u, 0x1F4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4680u;
label_1f4680:
    // 0x1f4680: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4684:
    // 0x1f4684: 0x8c860290  lw          $a2, 0x290($a0)
    ctx->pc = 0x1f4684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
label_1f4688:
    // 0x1f4688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f468c:
    // 0x1f468c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4690:
    // 0x1f4690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4694:
    // 0x1f4694: 0xc08c8dc  jal         func_232370
label_1f4698:
    if (ctx->pc == 0x1F4698u) {
        ctx->pc = 0x1F469Cu;
        goto label_1f469c;
    }
    ctx->pc = 0x1F4694u;
    SET_GPR_U32(ctx, 31, 0x1F469Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4694u, 0x1F469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F469Cu;
label_1f469c:
    // 0x1f469c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f469cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f46a0:
    // 0x1f46a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f46a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f46a4:
    // 0x1f46a4: 0xc06479c  jal         func_191E70
label_1f46a8:
    if (ctx->pc == 0x1F46A8u) {
        ctx->pc = 0x1F46ACu;
        goto label_1f46ac;
    }
    ctx->pc = 0x1F46A4u;
    SET_GPR_U32(ctx, 31, 0x1F46ACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F46A4u, 0x1F46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46ACu;
label_1f46ac:
    // 0x1f46ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f46acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f46b0:
    // 0x1f46b0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f46b4:
    // 0x1f46b4: 0x8c620294  lw          $v0, 0x294($v1)
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_1f46b8:
    // 0x1f46b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f46b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f46bc:
    // 0x1f46bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f46bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f46c0:
    // 0x1f46c0: 0xc08c8dc  jal         func_232370
label_1f46c4:
    if (ctx->pc == 0x1F46C4u) {
        ctx->pc = 0x1F46C8u;
        goto label_1f46c8;
    }
    ctx->pc = 0x1F46C0u;
    SET_GPR_U32(ctx, 31, 0x1F46C8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F46C0u, 0x1F46C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46C8u;
label_1f46c8:
    // 0x1f46c8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f46cc:
    // 0x1f46cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f46ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f46d0:
    // 0x1f46d0: 0xc06479c  jal         func_191E70
label_1f46d4:
    if (ctx->pc == 0x1F46D4u) {
        ctx->pc = 0x1F46D8u;
        goto label_1f46d8;
    }
    ctx->pc = 0x1F46D0u;
    SET_GPR_U32(ctx, 31, 0x1F46D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F46D0u, 0x1F46D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46D8u;
label_1f46d8:
    // 0x1f46d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f46dc:
    // 0x1f46dc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f46dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f46e0:
    // 0x1f46e0: 0x8ca302c4  lw          $v1, 0x2C4($a1)
    ctx->pc = 0x1f46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 708)));
label_1f46e4:
    // 0x1f46e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f46e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f46e8:
    // 0x1f46e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f46e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f46ec:
    // 0x1f46ec: 0xc08c8dc  jal         func_232370
label_1f46f0:
    if (ctx->pc == 0x1F46F0u) {
        ctx->pc = 0x1F46F4u;
        goto label_1f46f4;
    }
    ctx->pc = 0x1F46ECu;
    SET_GPR_U32(ctx, 31, 0x1F46F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F46ECu, 0x1F46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46F4u;
label_1f46f4:
    // 0x1f46f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f46f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f46f8:
    // 0x1f46f8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f46fc:
    // 0x1f46fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4700:
    // 0x1f4700: 0xc06479c  jal         func_191E70
label_1f4704:
    if (ctx->pc == 0x1F4704u) {
        ctx->pc = 0x1F4708u;
        goto label_1f4708;
    }
    ctx->pc = 0x1F4700u;
    SET_GPR_U32(ctx, 31, 0x1F4708u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4700u, 0x1F4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4708u;
label_1f4708:
    // 0x1f4708: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f4708u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f470c:
    // 0x1f470c: 0x8fc502ac  lw          $a1, 0x2AC($fp)
    ctx->pc = 0x1f470cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 684)));
label_1f4710:
    // 0x1f4710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4714:
    // 0x1f4714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4718:
    // 0x1f4718: 0xc08c8dc  jal         func_232370
label_1f471c:
    if (ctx->pc == 0x1F471Cu) {
        ctx->pc = 0x1F4720u;
        goto label_1f4720;
    }
    ctx->pc = 0x1F4718u;
    SET_GPR_U32(ctx, 31, 0x1F4720u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4718u, 0x1F4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4720u;
label_1f4720:
    // 0x1f4720: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4724:
    // 0x1f4724: 0xc06479c  jal         func_191E70
label_1f4728:
    if (ctx->pc == 0x1F4728u) {
        ctx->pc = 0x1F472Cu;
        goto label_1f472c;
    }
    ctx->pc = 0x1F4724u;
    SET_GPR_U32(ctx, 31, 0x1F472Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4724u, 0x1F472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F472Cu;
label_1f472c:
    // 0x1f472c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4730:
    // 0x1f4730: 0x8c6502b0  lw          $a1, 0x2B0($v1)
    ctx->pc = 0x1f4730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
label_1f4734:
    // 0x1f4734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4738:
    // 0x1f4738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f473c:
    // 0x1f473c: 0xc08c8dc  jal         func_232370
label_1f4740:
    if (ctx->pc == 0x1F4740u) {
        ctx->pc = 0x1F4744u;
        goto label_1f4744;
    }
    ctx->pc = 0x1F473Cu;
    SET_GPR_U32(ctx, 31, 0x1F4744u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F473Cu, 0x1F4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4744u;
label_1f4744:
    // 0x1f4744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4748:
    // 0x1f4748: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f474c:
    // 0x1f474c: 0x904400f8  lbu         $a0, 0xF8($v0)
    ctx->pc = 0x1f474cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 248)));
label_1f4750:
    // 0x1f4750: 0x1080006d  beqz        $a0, . + 4 + (0x6D << 2)
label_1f4754:
    if (ctx->pc == 0x1F4754u) {
        ctx->pc = 0x1F4758u;
        goto label_1f4758;
    }
    ctx->pc = 0x1F4750u;
    {
        const bool branch_taken_0x1f4750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4750) {
            ctx->pc = 0x1F4908u;
            goto label_1f4908;
        }
    }
    ctx->pc = 0x1F4758u;
label_1f4758:
    // 0x1f4758: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f475c:
    // 0x1f475c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4760:
    // 0x1f4760: 0x24a40110  addiu       $a0, $a1, 0x110
    ctx->pc = 0x1f4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
label_1f4764:
    // 0x1f4764: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1f4768:
    // 0x1f4768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f476c:
    // 0x1f476c: 0xc04a9c0  jal         func_12A700
label_1f4770:
    if (ctx->pc == 0x1F4770u) {
        ctx->pc = 0x1F4774u;
        goto label_1f4774;
    }
    ctx->pc = 0x1F476Cu;
    SET_GPR_U32(ctx, 31, 0x1F4774u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F476Cu, 0x1F4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4774u;
label_1f4774:
    // 0x1f4774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4778:
    // 0x1f4778: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f4778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f477c:
    // 0x1f477c: 0xa01027  not         $v0, $a1
    ctx->pc = 0x1f477cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_1f4780:
    // 0x1f4780: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1f4780u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f4784:
    // 0x1f4784: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1f4784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f4788:
    // 0x1f4788: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f4788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f478c:
    // 0x1f478c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4790:
    // 0x1f4790: 0xc06479c  jal         func_191E70
label_1f4794:
    if (ctx->pc == 0x1F4794u) {
        ctx->pc = 0x1F4798u;
        goto label_1f4798;
    }
    ctx->pc = 0x1F4790u;
    SET_GPR_U32(ctx, 31, 0x1F4798u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4790u, 0x1F4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4798u;
label_1f4798:
    // 0x1f4798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f479c:
    // 0x1f479c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f47a0:
    // 0x1f47a0: 0x8c42029c  lw          $v0, 0x29C($v0)
    ctx->pc = 0x1f47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
label_1f47a4:
    // 0x1f47a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f47a8:
    // 0x1f47a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f47a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f47ac:
    // 0x1f47ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f47acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f47b0:
    // 0x1f47b0: 0xc08c8dc  jal         func_232370
label_1f47b4:
    if (ctx->pc == 0x1F47B4u) {
        ctx->pc = 0x1F47B8u;
        goto label_1f47b8;
    }
    ctx->pc = 0x1F47B0u;
    SET_GPR_U32(ctx, 31, 0x1F47B8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F47B0u, 0x1F47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47B8u;
label_1f47b8:
    // 0x1f47b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f47b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f47bc:
    // 0x1f47bc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f47bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f47c0:
    // 0x1f47c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f47c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f47c4:
    // 0x1f47c4: 0xc06479c  jal         func_191E70
label_1f47c8:
    if (ctx->pc == 0x1F47C8u) {
        ctx->pc = 0x1F47CCu;
        goto label_1f47cc;
    }
    ctx->pc = 0x1F47C4u;
    SET_GPR_U32(ctx, 31, 0x1F47CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F47C4u, 0x1F47CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47CCu;
label_1f47cc:
    // 0x1f47cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f47ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f47d0:
    // 0x1f47d0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f47d4:
    // 0x1f47d4: 0x8c4202a4  lw          $v0, 0x2A4($v0)
    ctx->pc = 0x1f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_1f47d8:
    // 0x1f47d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f47d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f47dc:
    // 0x1f47dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f47dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f47e0:
    // 0x1f47e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f47e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f47e4:
    // 0x1f47e4: 0xc08c8dc  jal         func_232370
label_1f47e8:
    if (ctx->pc == 0x1F47E8u) {
        ctx->pc = 0x1F47ECu;
        goto label_1f47ec;
    }
    ctx->pc = 0x1F47E4u;
    SET_GPR_U32(ctx, 31, 0x1F47ECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F47E4u, 0x1F47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47ECu;
label_1f47ec:
    // 0x1f47ec: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f47ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f47f0:
    // 0x1f47f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f47f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f47f4:
    // 0x1f47f4: 0xc06479c  jal         func_191E70
label_1f47f8:
    if (ctx->pc == 0x1F47F8u) {
        ctx->pc = 0x1F47FCu;
        goto label_1f47fc;
    }
    ctx->pc = 0x1F47F4u;
    SET_GPR_U32(ctx, 31, 0x1F47FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F47F4u, 0x1F47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47FCu;
label_1f47fc:
    // 0x1f47fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f47fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4800:
    // 0x1f4800: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4804:
    // 0x1f4804: 0x8c450298  lw          $a1, 0x298($v0)
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
label_1f4808:
    // 0x1f4808: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f480c:
    // 0x1f480c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f480cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4810:
    // 0x1f4810: 0xc08c8dc  jal         func_232370
label_1f4814:
    if (ctx->pc == 0x1F4814u) {
        ctx->pc = 0x1F4818u;
        goto label_1f4818;
    }
    ctx->pc = 0x1F4810u;
    SET_GPR_U32(ctx, 31, 0x1F4818u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4810u, 0x1F4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4818u;
label_1f4818:
    // 0x1f4818: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f481c:
    // 0x1f481c: 0xc06479c  jal         func_191E70
label_1f4820:
    if (ctx->pc == 0x1F4820u) {
        ctx->pc = 0x1F4824u;
        goto label_1f4824;
    }
    ctx->pc = 0x1F481Cu;
    SET_GPR_U32(ctx, 31, 0x1F4824u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F481Cu, 0x1F4824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4824u;
label_1f4824:
    // 0x1f4824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4828:
    // 0x1f4828: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f482c:
    // 0x1f482c: 0x8c4302a0  lw          $v1, 0x2A0($v0)
    ctx->pc = 0x1f482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
label_1f4830:
    // 0x1f4830: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1f4830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1f4834:
    // 0x1f4834: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1f4834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f4838:
    // 0x1f4838: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f483c:
    // 0x1f483c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4840:
    // 0x1f4840: 0xc08c8dc  jal         func_232370
label_1f4844:
    if (ctx->pc == 0x1F4844u) {
        ctx->pc = 0x1F4848u;
        goto label_1f4848;
    }
    ctx->pc = 0x1F4840u;
    SET_GPR_U32(ctx, 31, 0x1F4848u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4840u, 0x1F4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4848u;
label_1f4848:
    // 0x1f4848: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4848u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f484c:
    // 0x1f484c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4850:
    // 0x1f4850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4854:
    // 0x1f4854: 0xc06479c  jal         func_191E70
label_1f4858:
    if (ctx->pc == 0x1F4858u) {
        ctx->pc = 0x1F485Cu;
        goto label_1f485c;
    }
    ctx->pc = 0x1F4854u;
    SET_GPR_U32(ctx, 31, 0x1F485Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4854u, 0x1F485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F485Cu;
label_1f485c:
    // 0x1f485c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4860:
    // 0x1f4860: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4864:
    // 0x1f4864: 0x8c4502b8  lw          $a1, 0x2B8($v0)
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
label_1f4868:
    // 0x1f4868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f486c:
    // 0x1f486c: 0xc08c8dc  jal         func_232370
label_1f4870:
    if (ctx->pc == 0x1F4870u) {
        ctx->pc = 0x1F4874u;
        goto label_1f4874;
    }
    ctx->pc = 0x1F486Cu;
    SET_GPR_U32(ctx, 31, 0x1F4874u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F486Cu, 0x1F4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4874u;
label_1f4874:
    // 0x1f4874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4878:
    // 0x1f4878: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f4878u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f487c:
    // 0x1f487c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f4880:
    // 0x1f4880: 0xc06479c  jal         func_191E70
label_1f4884:
    if (ctx->pc == 0x1F4884u) {
        ctx->pc = 0x1F4888u;
        goto label_1f4888;
    }
    ctx->pc = 0x1F4880u;
    SET_GPR_U32(ctx, 31, 0x1F4888u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4880u, 0x1F4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4888u;
label_1f4888:
    // 0x1f4888: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f488c:
    // 0x1f488c: 0x8c6502c0  lw          $a1, 0x2C0($v1)
    ctx->pc = 0x1f488cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
label_1f4890:
    // 0x1f4890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4894:
    // 0x1f4894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4898:
    // 0x1f4898: 0xc08c8dc  jal         func_232370
label_1f489c:
    if (ctx->pc == 0x1F489Cu) {
        ctx->pc = 0x1F48A0u;
        goto label_1f48a0;
    }
    ctx->pc = 0x1F4898u;
    SET_GPR_U32(ctx, 31, 0x1F48A0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4898u, 0x1F48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48A0u;
label_1f48a0:
    // 0x1f48a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f48a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f48a4:
    // 0x1f48a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f48a8:
    // 0x1f48a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f48a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f48ac:
    // 0x1f48ac: 0xc06479c  jal         func_191E70
label_1f48b0:
    if (ctx->pc == 0x1F48B0u) {
        ctx->pc = 0x1F48B4u;
        goto label_1f48b4;
    }
    ctx->pc = 0x1F48ACu;
    SET_GPR_U32(ctx, 31, 0x1F48B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F48ACu, 0x1F48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48B4u;
label_1f48b4:
    // 0x1f48b4: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f48b8:
    // 0x1f48b8: 0x8cc502b4  lw          $a1, 0x2B4($a2)
    ctx->pc = 0x1f48b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 692)));
label_1f48bc:
    // 0x1f48bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f48bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f48c0:
    // 0x1f48c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f48c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f48c4:
    // 0x1f48c4: 0xc08c8dc  jal         func_232370
label_1f48c8:
    if (ctx->pc == 0x1F48C8u) {
        ctx->pc = 0x1F48CCu;
        goto label_1f48cc;
    }
    ctx->pc = 0x1F48C4u;
    SET_GPR_U32(ctx, 31, 0x1F48CCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F48C4u, 0x1F48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48CCu;
label_1f48cc:
    // 0x1f48cc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f48d0:
    // 0x1f48d0: 0xc06479c  jal         func_191E70
label_1f48d4:
    if (ctx->pc == 0x1F48D4u) {
        ctx->pc = 0x1F48D8u;
        goto label_1f48d8;
    }
    ctx->pc = 0x1F48D0u;
    SET_GPR_U32(ctx, 31, 0x1F48D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F48D0u, 0x1F48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48D8u;
label_1f48d8:
    // 0x1f48d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f48d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f48dc:
    // 0x1f48dc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f48e0:
    // 0x1f48e0: 0x8c4302bc  lw          $v1, 0x2BC($v0)
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
label_1f48e4:
    // 0x1f48e4: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1f48e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1f48e8:
    // 0x1f48e8: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1f48e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f48ec:
    // 0x1f48ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f48f0:
    // 0x1f48f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f48f4:
    // 0x1f48f4: 0xc08c8dc  jal         func_232370
label_1f48f8:
    if (ctx->pc == 0x1F48F8u) {
        ctx->pc = 0x1F48FCu;
        goto label_1f48fc;
    }
    ctx->pc = 0x1F48F4u;
    SET_GPR_U32(ctx, 31, 0x1F48FCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F48F4u, 0x1F48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48FCu;
label_1f48fc:
    // 0x1f48fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f48fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4900:
    // 0x1f4900: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1f4904:
    if (ctx->pc == 0x1F4904u) {
        ctx->pc = 0x1F4908u;
        goto label_1f4908;
    }
    ctx->pc = 0x1F4900u;
    {
        const bool branch_taken_0x1f4900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4900) {
            ctx->pc = 0x1F4AB0u;
            goto label_1f4ab0;
        }
    }
    ctx->pc = 0x1F4908u;
label_1f4908:
    // 0x1f4908: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f490c:
    // 0x1f490c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f490cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4910:
    // 0x1f4910: 0x24440104  addiu       $a0, $v0, 0x104
    ctx->pc = 0x1f4910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_1f4914:
    // 0x1f4914: 0x8ca500fc  lw          $a1, 0xFC($a1)
    ctx->pc = 0x1f4914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
label_1f4918:
    // 0x1f4918: 0xc04a9c0  jal         func_12A700
label_1f491c:
    if (ctx->pc == 0x1F491Cu) {
        ctx->pc = 0x1F4920u;
        goto label_1f4920;
    }
    ctx->pc = 0x1F4918u;
    SET_GPR_U32(ctx, 31, 0x1F4920u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F4918u, 0x1F4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4920u;
label_1f4920:
    // 0x1f4920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4924:
    // 0x1f4924: 0x401027  not         $v0, $v0
    ctx->pc = 0x1f4924u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1f4928:
    // 0x1f4928: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1f4928u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f492c:
    // 0x1f492c: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x1f492cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1f4930:
    // 0x1f4930: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4934:
    // 0x1f4934: 0xc06479c  jal         func_191E70
label_1f4938:
    if (ctx->pc == 0x1F4938u) {
        ctx->pc = 0x1F493Cu;
        goto label_1f493c;
    }
    ctx->pc = 0x1F4934u;
    SET_GPR_U32(ctx, 31, 0x1F493Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4934u, 0x1F493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F493Cu;
label_1f493c:
    // 0x1f493c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f493cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4940:
    // 0x1f4940: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4944:
    // 0x1f4944: 0x8c830298  lw          $v1, 0x298($a0)
    ctx->pc = 0x1f4944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
label_1f4948:
    // 0x1f4948: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f494c:
    // 0x1f494c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4950:
    // 0x1f4950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4954:
    // 0x1f4954: 0xc08c8dc  jal         func_232370
label_1f4958:
    if (ctx->pc == 0x1F4958u) {
        ctx->pc = 0x1F495Cu;
        goto label_1f495c;
    }
    ctx->pc = 0x1F4954u;
    SET_GPR_U32(ctx, 31, 0x1F495Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4954u, 0x1F495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F495Cu;
label_1f495c:
    // 0x1f495c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4960:
    // 0x1f4960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4964:
    // 0x1f4964: 0xc06479c  jal         func_191E70
label_1f4968:
    if (ctx->pc == 0x1F4968u) {
        ctx->pc = 0x1F496Cu;
        goto label_1f496c;
    }
    ctx->pc = 0x1F4964u;
    SET_GPR_U32(ctx, 31, 0x1F496Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4964u, 0x1F496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F496Cu;
label_1f496c:
    // 0x1f496c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f496cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4970:
    // 0x1f4970: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4974:
    // 0x1f4974: 0x8c4502a0  lw          $a1, 0x2A0($v0)
    ctx->pc = 0x1f4974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
label_1f4978:
    // 0x1f4978: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f4978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f497c:
    // 0x1f497c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f497cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4980:
    // 0x1f4980: 0xc08c8dc  jal         func_232370
label_1f4984:
    if (ctx->pc == 0x1F4984u) {
        ctx->pc = 0x1F4988u;
        goto label_1f4988;
    }
    ctx->pc = 0x1F4980u;
    SET_GPR_U32(ctx, 31, 0x1F4988u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4980u, 0x1F4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4988u;
label_1f4988:
    // 0x1f4988: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f498c:
    // 0x1f498c: 0xc06479c  jal         func_191E70
label_1f4990:
    if (ctx->pc == 0x1F4990u) {
        ctx->pc = 0x1F4994u;
        goto label_1f4994;
    }
    ctx->pc = 0x1F498Cu;
    SET_GPR_U32(ctx, 31, 0x1F4994u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F498Cu, 0x1F4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4994u;
label_1f4994:
    // 0x1f4994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4998:
    // 0x1f4998: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f499c:
    // 0x1f499c: 0x8c42029c  lw          $v0, 0x29C($v0)
    ctx->pc = 0x1f499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
label_1f49a0:
    // 0x1f49a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f49a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f49a4:
    // 0x1f49a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f49a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f49a8:
    // 0x1f49a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f49a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f49ac:
    // 0x1f49ac: 0xc08c8dc  jal         func_232370
label_1f49b0:
    if (ctx->pc == 0x1F49B0u) {
        ctx->pc = 0x1F49B4u;
        goto label_1f49b4;
    }
    ctx->pc = 0x1F49ACu;
    SET_GPR_U32(ctx, 31, 0x1F49B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F49ACu, 0x1F49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49B4u;
label_1f49b4:
    // 0x1f49b4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f49b8:
    // 0x1f49b8: 0xc06479c  jal         func_191E70
label_1f49bc:
    if (ctx->pc == 0x1F49BCu) {
        ctx->pc = 0x1F49C0u;
        goto label_1f49c0;
    }
    ctx->pc = 0x1F49B8u;
    SET_GPR_U32(ctx, 31, 0x1F49C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F49B8u, 0x1F49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49C0u;
label_1f49c0:
    // 0x1f49c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f49c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f49c4:
    // 0x1f49c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f49c8:
    // 0x1f49c8: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x1f49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
label_1f49cc:
    // 0x1f49cc: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1f49ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1f49d0:
    // 0x1f49d0: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1f49d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f49d4:
    // 0x1f49d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f49d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f49d8:
    // 0x1f49d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f49d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f49dc:
    // 0x1f49dc: 0xc08c8dc  jal         func_232370
label_1f49e0:
    if (ctx->pc == 0x1F49E0u) {
        ctx->pc = 0x1F49E4u;
        goto label_1f49e4;
    }
    ctx->pc = 0x1F49DCu;
    SET_GPR_U32(ctx, 31, 0x1F49E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F49DCu, 0x1F49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49E4u;
label_1f49e4:
    // 0x1f49e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f49e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f49e8:
    // 0x1f49e8: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f49e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f49ec:
    // 0x1f49ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f49ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f49f0:
    // 0x1f49f0: 0xc06479c  jal         func_191E70
label_1f49f4:
    if (ctx->pc == 0x1F49F4u) {
        ctx->pc = 0x1F49F8u;
        goto label_1f49f8;
    }
    ctx->pc = 0x1F49F0u;
    SET_GPR_U32(ctx, 31, 0x1F49F8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F49F0u, 0x1F49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F49F8u;
label_1f49f8:
    // 0x1f49f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f49fc:
    // 0x1f49fc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f49fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a00:
    // 0x1f4a00: 0x8cc302b4  lw          $v1, 0x2B4($a2)
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 692)));
label_1f4a04:
    // 0x1f4a04: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a08:
    // 0x1f4a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a0c:
    // 0x1f4a0c: 0xc08c8dc  jal         func_232370
label_1f4a10:
    if (ctx->pc == 0x1F4A10u) {
        ctx->pc = 0x1F4A14u;
        goto label_1f4a14;
    }
    ctx->pc = 0x1F4A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A14u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4A0Cu, 0x1F4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A14u;
label_1f4a14:
    // 0x1f4a14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a18:
    // 0x1f4a18: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a1c:
    // 0x1f4a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a20:
    // 0x1f4a20: 0xc06479c  jal         func_191E70
label_1f4a24:
    if (ctx->pc == 0x1F4A24u) {
        ctx->pc = 0x1F4A28u;
        goto label_1f4a28;
    }
    ctx->pc = 0x1F4A20u;
    SET_GPR_U32(ctx, 31, 0x1F4A28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4A20u, 0x1F4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A28u;
label_1f4a28:
    // 0x1f4a28: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a2c:
    // 0x1f4a2c: 0x8c6502bc  lw          $a1, 0x2BC($v1)
    ctx->pc = 0x1f4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 700)));
label_1f4a30:
    // 0x1f4a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a34:
    // 0x1f4a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a38:
    // 0x1f4a38: 0xc08c8dc  jal         func_232370
label_1f4a3c:
    if (ctx->pc == 0x1F4A3Cu) {
        ctx->pc = 0x1F4A40u;
        goto label_1f4a40;
    }
    ctx->pc = 0x1F4A38u;
    SET_GPR_U32(ctx, 31, 0x1F4A40u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4A38u, 0x1F4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A40u;
label_1f4a40:
    // 0x1f4a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a44:
    // 0x1f4a44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a48:
    // 0x1f4a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a4c:
    // 0x1f4a4c: 0xc06479c  jal         func_191E70
label_1f4a50:
    if (ctx->pc == 0x1F4A50u) {
        ctx->pc = 0x1F4A54u;
        goto label_1f4a54;
    }
    ctx->pc = 0x1F4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4A4Cu, 0x1F4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A54u;
label_1f4a54:
    // 0x1f4a54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a58:
    // 0x1f4a58: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a5c:
    // 0x1f4a5c: 0x8ca202b8  lw          $v0, 0x2B8($a1)
    ctx->pc = 0x1f4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 696)));
label_1f4a60:
    // 0x1f4a60: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f4a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a64:
    // 0x1f4a64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a68:
    // 0x1f4a68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f4a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a6c:
    // 0x1f4a6c: 0xc08c8dc  jal         func_232370
label_1f4a70:
    if (ctx->pc == 0x1F4A70u) {
        ctx->pc = 0x1F4A74u;
        goto label_1f4a74;
    }
    ctx->pc = 0x1F4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A74u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4A6Cu, 0x1F4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A74u;
label_1f4a74:
    // 0x1f4a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a78:
    // 0x1f4a78: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a7c:
    // 0x1f4a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a80:
    // 0x1f4a80: 0xc06479c  jal         func_191E70
label_1f4a84:
    if (ctx->pc == 0x1F4A84u) {
        ctx->pc = 0x1F4A88u;
        goto label_1f4a88;
    }
    ctx->pc = 0x1F4A80u;
    SET_GPR_U32(ctx, 31, 0x1F4A88u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4A80u, 0x1F4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A88u;
label_1f4a88:
    // 0x1f4a88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a8c:
    // 0x1f4a8c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4a90:
    // 0x1f4a90: 0x8cc602c0  lw          $a2, 0x2C0($a2)
    ctx->pc = 0x1f4a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 704)));
label_1f4a94:
    // 0x1f4a94: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1f4a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1f4a98:
    // 0x1f4a98: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x1f4a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f4a9c:
    // 0x1f4a9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aa0:
    // 0x1f4aa0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aa4:
    // 0x1f4aa4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f4aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aa8:
    // 0x1f4aa8: 0xc08c8dc  jal         func_232370
label_1f4aac:
    if (ctx->pc == 0x1F4AACu) {
        ctx->pc = 0x1F4AB0u;
        goto label_1f4ab0;
    }
    ctx->pc = 0x1F4AA8u;
    SET_GPR_U32(ctx, 31, 0x1F4AB0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4AA8u, 0x1F4AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AB0u;
label_1f4ab0:
    // 0x1f4ab0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4ab4:
    // 0x1f4ab4: 0x8c65026c  lw          $a1, 0x26C($v1)
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_1f4ab8:
    // 0x1f4ab8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4abc:
    // 0x1f4abc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1f4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f4ac0:
    // 0x1f4ac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ac4:
    // 0x1f4ac4: 0xc085538  jal         func_2154E0
label_1f4ac8:
    if (ctx->pc == 0x1F4AC8u) {
        ctx->pc = 0x1F4ACCu;
        goto label_1f4acc;
    }
    ctx->pc = 0x1F4AC4u;
    SET_GPR_U32(ctx, 31, 0x1F4ACCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F4AC4u, 0x1F4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4ACCu;
label_1f4acc:
    // 0x1f4acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ad0:
    // 0x1f4ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ad4:
    // 0x1f4ad4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4ad8:
    // 0x1f4ad8: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x1f4ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
label_1f4adc:
    // 0x1f4adc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1f4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f4ae0:
    // 0x1f4ae0: 0xc085538  jal         func_2154E0
label_1f4ae4:
    if (ctx->pc == 0x1F4AE4u) {
        ctx->pc = 0x1F4AE8u;
        goto label_1f4ae8;
    }
    ctx->pc = 0x1F4AE0u;
    SET_GPR_U32(ctx, 31, 0x1F4AE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F4AE0u, 0x1F4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AE8u;
label_1f4ae8:
    // 0x1f4ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aec:
    // 0x1f4aec: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1f4aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4af0:
    // 0x1f4af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4af4:
    // 0x1f4af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f4af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f4af8:
    // 0x1f4af8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1f4afc:
    // 0x1f4afc: 0x320f809  jalr        $t9
label_1f4b00:
    if (ctx->pc == 0x1F4B00u) {
        ctx->pc = 0x1F4B04u;
        goto label_1f4b04;
    }
    ctx->pc = 0x1F4AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4AFCu, 0x1F4B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4B04u;
label_1f4b04:
    // 0x1f4b04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b08:
    // 0x1f4b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b0c:
    // 0x1f4b0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f4b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f4b10:
    // 0x1f4b10: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1f4b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1f4b14:
    // 0x1f4b14: 0x320f809  jalr        $t9
label_1f4b18:
    if (ctx->pc == 0x1F4B18u) {
        ctx->pc = 0x1F4B1Cu;
        goto label_1f4b1c;
    }
    ctx->pc = 0x1F4B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F4B1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B14u, 0x1F4B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4B1Cu;
label_1f4b1c:
    // 0x1f4b1c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b20:
    // 0x1f4b20: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x1f4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_1f4b24:
    // 0x1f4b24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1f4b28:
    if (ctx->pc == 0x1F4B28u) {
        ctx->pc = 0x1F4B2Cu;
        goto label_1f4b2c;
    }
    ctx->pc = 0x1F4B24u;
    {
        const bool branch_taken_0x1f4b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b24) {
            ctx->pc = 0x1F4B74u;
            goto label_1f4b74;
        }
    }
    ctx->pc = 0x1F4B2Cu;
label_1f4b2c:
    // 0x1f4b2c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b30:
    // 0x1f4b30: 0x908500b4  lbu         $a1, 0xB4($a0)
    ctx->pc = 0x1f4b30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 180)));
label_1f4b34:
    // 0x1f4b34: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1f4b38:
    if (ctx->pc == 0x1F4B38u) {
        ctx->pc = 0x1F4B3Cu;
        goto label_1f4b3c;
    }
    ctx->pc = 0x1F4B34u;
    {
        const bool branch_taken_0x1f4b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b34) {
            ctx->pc = 0x1F4B74u;
            goto label_1f4b74;
        }
    }
    ctx->pc = 0x1F4B3Cu;
label_1f4b3c:
    // 0x1f4b3c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b40:
    // 0x1f4b40: 0x904300f8  lbu         $v1, 0xF8($v0)
    ctx->pc = 0x1f4b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 248)));
label_1f4b44:
    // 0x1f4b44: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1f4b48:
    if (ctx->pc == 0x1F4B48u) {
        ctx->pc = 0x1F4B4Cu;
        goto label_1f4b4c;
    }
    ctx->pc = 0x1F4B44u;
    {
        const bool branch_taken_0x1f4b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b44) {
            ctx->pc = 0x1F4B74u;
            goto label_1f4b74;
        }
    }
    ctx->pc = 0x1F4B4Cu;
label_1f4b4c:
    // 0x1f4b4c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b50:
    // 0x1f4b50: 0xc44102cc  lwc1        $f1, 0x2CC($v0)
    ctx->pc = 0x1f4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4b54:
    // 0x1f4b54: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x1f4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4b58:
    // 0x1f4b58: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f4b58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4b5c:
    // 0x1f4b5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f4b60:
    if (ctx->pc == 0x1F4B60u) {
        ctx->pc = 0x1F4B64u;
        goto label_1f4b64;
    }
    ctx->pc = 0x1F4B5Cu;
    {
        const bool branch_taken_0x1f4b5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4b5c) {
            ctx->pc = 0x1F4B74u;
            goto label_1f4b74;
        }
    }
    ctx->pc = 0x1F4B64u;
label_1f4b64:
    // 0x1f4b64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f4b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4b68:
    // 0x1f4b68: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f4b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b6c:
    // 0x1f4b6c: 0x100003b3  b           . + 4 + (0x3B3 << 2)
label_1f4b70:
    if (ctx->pc == 0x1F4B70u) {
        ctx->pc = 0x1F4B74u;
        goto label_1f4b74;
    }
    ctx->pc = 0x1F4B6Cu;
    {
        const bool branch_taken_0x1f4b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b6c) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F4B74u;
label_1f4b74:
    // 0x1f4b74: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b78:
    // 0x1f4b78: 0x90a600f0  lbu         $a2, 0xF0($a1)
    ctx->pc = 0x1f4b78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 240)));
label_1f4b7c:
    // 0x1f4b7c: 0x10c00027  beqz        $a2, . + 4 + (0x27 << 2)
label_1f4b80:
    if (ctx->pc == 0x1F4B80u) {
        ctx->pc = 0x1F4B84u;
        goto label_1f4b84;
    }
    ctx->pc = 0x1F4B7Cu;
    {
        const bool branch_taken_0x1f4b7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b7c) {
            ctx->pc = 0x1F4C1Cu;
            goto label_1f4c1c;
        }
    }
    ctx->pc = 0x1F4B84u;
label_1f4b84:
    // 0x1f4b84: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b88:
    // 0x1f4b88: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x1f4b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4b8c:
    // 0x1f4b8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4b90:
    // 0x1f4b90: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x1f4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4b94:
    // 0x1f4b94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4b98:
    // 0x1f4b98: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1f4b9c:
    if (ctx->pc == 0x1F4B9Cu) {
        ctx->pc = 0x1F4BA0u;
        goto label_1f4ba0;
    }
    ctx->pc = 0x1F4B98u;
    {
        const bool branch_taken_0x1f4b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4b98) {
            ctx->pc = 0x1F4BF0u;
            goto label_1f4bf0;
        }
    }
    ctx->pc = 0x1F4BA0u;
label_1f4ba0:
    // 0x1f4ba0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4ba4:
    // 0x1f4ba4: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1f4ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4ba8:
    // 0x1f4ba8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4bac:
    // 0x1f4bac: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f4bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4bb0:
    // 0x1f4bb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f4bb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f4bb4:
    // 0x1f4bb4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4bb8:
    // 0x1f4bb8: 0xc46000c8  lwc1        $f0, 0xC8($v1)
    ctx->pc = 0x1f4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4bbc:
    // 0x1f4bbc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f4bbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1f4bc0:
    // 0x1f4bc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f4bc4:
    // 0x1f4bc4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f4bc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4bc8:
    // 0x1f4bc8: 0x0  nop
    ctx->pc = 0x1f4bc8u;
    // NOP
label_1f4bcc:
    // 0x1f4bcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f4bd0:
    // 0x1f4bd0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1f4bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f4bd4:
    // 0x1f4bd4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4bd8:
    // 0x1f4bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4bdc:
    // 0x1f4bdc: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1f4bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f4be0:
    // 0x1f4be0: 0xc07d9fc  jal         func_1F67F0
label_1f4be4:
    if (ctx->pc == 0x1F4BE4u) {
        ctx->pc = 0x1F4BE8u;
        goto label_1f4be8;
    }
    ctx->pc = 0x1F4BE0u;
    SET_GPR_U32(ctx, 31, 0x1F4BE8u);
    ctx->pc = 0x1F67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F67F0u, 0x1F4BE0u, 0x1F4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4BE8u;
label_1f4be8:
    // 0x1f4be8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f4bec:
    if (ctx->pc == 0x1F4BECu) {
        ctx->pc = 0x1F4BF0u;
        goto label_1f4bf0;
    }
    ctx->pc = 0x1F4BE8u;
    {
        const bool branch_taken_0x1f4be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4be8) {
            ctx->pc = 0x1F4C1Cu;
            goto label_1f4c1c;
        }
    }
    ctx->pc = 0x1F4BF0u;
label_1f4bf0:
    // 0x1f4bf0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4bf4:
    // 0x1f4bf4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f4bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4bf8:
    // 0x1f4bf8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4bfc:
    // 0x1f4bfc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1f4bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_1f4c00:
    // 0x1f4c00: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c04:
    // 0x1f4c04: 0xa04000f0  sb          $zero, 0xF0($v0)
    ctx->pc = 0x1f4c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 240), (uint8_t)GPR_U32(ctx, 0));
label_1f4c08:
    // 0x1f4c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f4c0c:
    // 0x1f4c0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4c10:
    // 0x1f4c10: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c14:
    // 0x1f4c14: 0xc07d9fc  jal         func_1F67F0
label_1f4c18:
    if (ctx->pc == 0x1F4C18u) {
        ctx->pc = 0x1F4C1Cu;
        goto label_1f4c1c;
    }
    ctx->pc = 0x1F4C14u;
    SET_GPR_U32(ctx, 31, 0x1F4C1Cu);
    ctx->pc = 0x1F67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F67F0u, 0x1F4C14u, 0x1F4C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C1Cu;
label_1f4c1c:
    // 0x1f4c1c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c20:
    // 0x1f4c20: 0x908500b4  lbu         $a1, 0xB4($a0)
    ctx->pc = 0x1f4c20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 180)));
label_1f4c24:
    // 0x1f4c24: 0x10a00230  beqz        $a1, . + 4 + (0x230 << 2)
label_1f4c28:
    if (ctx->pc == 0x1F4C28u) {
        ctx->pc = 0x1F4C2Cu;
        goto label_1f4c2c;
    }
    ctx->pc = 0x1F4C24u;
    {
        const bool branch_taken_0x1f4c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c24) {
            ctx->pc = 0x1F54E8u;
            goto label_1f54e8;
        }
    }
    ctx->pc = 0x1F4C2Cu;
label_1f4c2c:
    // 0x1f4c2c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c30:
    // 0x1f4c30: 0x90c20280  lbu         $v0, 0x280($a2)
    ctx->pc = 0x1f4c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 640)));
label_1f4c34:
    // 0x1f4c34: 0x1040022c  beqz        $v0, . + 4 + (0x22C << 2)
label_1f4c38:
    if (ctx->pc == 0x1F4C38u) {
        ctx->pc = 0x1F4C3Cu;
        goto label_1f4c3c;
    }
    ctx->pc = 0x1F4C34u;
    {
        const bool branch_taken_0x1f4c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c34) {
            ctx->pc = 0x1F54E8u;
            goto label_1f54e8;
        }
    }
    ctx->pc = 0x1F4C3Cu;
label_1f4c3c:
    // 0x1f4c3c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c40:
    // 0x1f4c40: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x1f4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4c44:
    // 0x1f4c44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c48:
    // 0x1f4c48: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1f4c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4c4c:
    // 0x1f4c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f4c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4c50:
    // 0x1f4c50: 0x45010082  bc1t        . + 4 + (0x82 << 2)
label_1f4c54:
    if (ctx->pc == 0x1F4C54u) {
        ctx->pc = 0x1F4C58u;
        goto label_1f4c58;
    }
    ctx->pc = 0x1F4C50u;
    {
        const bool branch_taken_0x1f4c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4c50) {
            ctx->pc = 0x1F4E5Cu;
            goto label_1f4e5c;
        }
    }
    ctx->pc = 0x1F4C58u;
label_1f4c58:
    // 0x1f4c58: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c5c:
    // 0x1f4c5c: 0xa0600280  sb          $zero, 0x280($v1)
    ctx->pc = 0x1f4c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 640), (uint8_t)GPR_U32(ctx, 0));
label_1f4c60:
    // 0x1f4c60: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c64:
    // 0x1f4c64: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x1f4c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4c68:
    // 0x1f4c68: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c6c:
    // 0x1f4c6c: 0xe4c00284  swc1        $f0, 0x284($a2)
    ctx->pc = 0x1f4c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 644), bits); }
label_1f4c70:
    // 0x1f4c70: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c74:
    // 0x1f4c74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f4c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c78:
    // 0x1f4c78: 0xc06479c  jal         func_191E70
label_1f4c7c:
    if (ctx->pc == 0x1F4C7Cu) {
        ctx->pc = 0x1F4C80u;
        goto label_1f4c80;
    }
    ctx->pc = 0x1F4C78u;
    SET_GPR_U32(ctx, 31, 0x1F4C80u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4C78u, 0x1F4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C80u;
label_1f4c80:
    // 0x1f4c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c84:
    // 0x1f4c84: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f4c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4c88:
    // 0x1f4c88: 0x8cc3017c  lw          $v1, 0x17C($a2)
    ctx->pc = 0x1f4c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 380)));
label_1f4c8c:
    // 0x1f4c8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f4c90:
    // 0x1f4c90: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1f4c90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4c94:
    // 0x1f4c94: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1f4c94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1f4c98:
    // 0x1f4c98: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x1f4c98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f4c9c:
    // 0x1f4c9c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ca0:
    // 0x1f4ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ca4:
    // 0x1f4ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4ca8:
    // 0x1f4ca8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f4ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4cac:
    // 0x1f4cac: 0xc08c544  jal         func_231510
label_1f4cb0:
    if (ctx->pc == 0x1F4CB0u) {
        ctx->pc = 0x1F4CB4u;
        goto label_1f4cb4;
    }
    ctx->pc = 0x1F4CACu;
    SET_GPR_U32(ctx, 31, 0x1F4CB4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F4CACu, 0x1F4CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CB4u;
label_1f4cb4:
    // 0x1f4cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4cb8:
    // 0x1f4cb8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4cbc:
    // 0x1f4cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4cc0:
    // 0x1f4cc0: 0xc06479c  jal         func_191E70
label_1f4cc4:
    if (ctx->pc == 0x1F4CC4u) {
        ctx->pc = 0x1F4CC8u;
        goto label_1f4cc8;
    }
    ctx->pc = 0x1F4CC0u;
    SET_GPR_U32(ctx, 31, 0x1F4CC8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4CC0u, 0x1F4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CC8u;
label_1f4cc8:
    // 0x1f4cc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ccc:
    // 0x1f4ccc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4cd0:
    // 0x1f4cd0: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x1f4cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_1f4cd4:
    // 0x1f4cd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f4cd8:
    // 0x1f4cd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4cdc:
    // 0x1f4cdc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1f4ce0:
    // 0x1f4ce0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1f4ce0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f4ce4:
    // 0x1f4ce4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f4ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ce8:
    // 0x1f4ce8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4cec:
    // 0x1f4cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4cf0:
    // 0x1f4cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4cf4:
    // 0x1f4cf4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f4cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4cf8:
    // 0x1f4cf8: 0xc08c544  jal         func_231510
label_1f4cfc:
    if (ctx->pc == 0x1F4CFCu) {
        ctx->pc = 0x1F4D00u;
        goto label_1f4d00;
    }
    ctx->pc = 0x1F4CF8u;
    SET_GPR_U32(ctx, 31, 0x1F4D00u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F4CF8u, 0x1F4D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D00u;
label_1f4d00:
    // 0x1f4d00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d04:
    // 0x1f4d04: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4d08:
    // 0x1f4d08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d0c:
    // 0x1f4d0c: 0xc06479c  jal         func_191E70
label_1f4d10:
    if (ctx->pc == 0x1F4D10u) {
        ctx->pc = 0x1F4D14u;
        goto label_1f4d14;
    }
    ctx->pc = 0x1F4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D14u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4D0Cu, 0x1F4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D14u;
label_1f4d14:
    // 0x1f4d14: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4d18:
    // 0x1f4d18: 0x8c830134  lw          $v1, 0x134($a0)
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_1f4d1c:
    // 0x1f4d1c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1f4d20:
    // 0x1f4d20: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1f4d20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4d24:
    // 0x1f4d24: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f4d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f4d28:
    // 0x1f4d28: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1f4d28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f4d2c:
    // 0x1f4d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d30:
    // 0x1f4d30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d34:
    // 0x1f4d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d38:
    // 0x1f4d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4d3c:
    // 0x1f4d3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f4d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d40:
    // 0x1f4d40: 0xc08c544  jal         func_231510
label_1f4d44:
    if (ctx->pc == 0x1F4D44u) {
        ctx->pc = 0x1F4D48u;
        goto label_1f4d48;
    }
    ctx->pc = 0x1F4D40u;
    SET_GPR_U32(ctx, 31, 0x1F4D48u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F4D40u, 0x1F4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D48u;
label_1f4d48:
    // 0x1f4d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d4c:
    // 0x1f4d4c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4d50:
    // 0x1f4d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d54:
    // 0x1f4d54: 0xc06479c  jal         func_191E70
label_1f4d58:
    if (ctx->pc == 0x1F4D58u) {
        ctx->pc = 0x1F4D5Cu;
        goto label_1f4d5c;
    }
    ctx->pc = 0x1F4D54u;
    SET_GPR_U32(ctx, 31, 0x1F4D5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4D54u, 0x1F4D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D5Cu;
label_1f4d5c:
    // 0x1f4d5c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f4d5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d60:
    // 0x1f4d60: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4d64:
    // 0x1f4d64: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4d68:
    // 0x1f4d68: 0x24a201f0  addiu       $v0, $a1, 0x1F0
    ctx->pc = 0x1f4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_1f4d6c:
    // 0x1f4d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d70:
    // 0x1f4d70: 0x8c65022c  lw          $a1, 0x22C($v1)
    ctx->pc = 0x1f4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
label_1f4d74:
    // 0x1f4d74: 0xc05612c  jal         func_1584B0
label_1f4d78:
    if (ctx->pc == 0x1F4D78u) {
        ctx->pc = 0x1F4D7Cu;
        goto label_1f4d7c;
    }
    ctx->pc = 0x1F4D74u;
    SET_GPR_U32(ctx, 31, 0x1F4D7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F4D74u, 0x1F4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D7Cu;
label_1f4d7c:
    // 0x1f4d7c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4d80:
    // 0x1f4d80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f4d84:
    // 0x1f4d84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f4d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f4d88:
    // 0x1f4d88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f4d8c:
    // 0x1f4d8c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f4d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f4d90:
    // 0x1f4d90: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f4d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d94:
    // 0x1f4d94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d98:
    // 0x1f4d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d9c:
    // 0x1f4d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f4d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4da0:
    // 0x1f4da0: 0xc08c544  jal         func_231510
label_1f4da4:
    if (ctx->pc == 0x1F4DA4u) {
        ctx->pc = 0x1F4DA8u;
        goto label_1f4da8;
    }
    ctx->pc = 0x1F4DA0u;
    SET_GPR_U32(ctx, 31, 0x1F4DA8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F4DA0u, 0x1F4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DA8u;
label_1f4da8:
    // 0x1f4da8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4dac:
    // 0x1f4dac: 0xc06479c  jal         func_191E70
label_1f4db0:
    if (ctx->pc == 0x1F4DB0u) {
        ctx->pc = 0x1F4DB4u;
        goto label_1f4db4;
    }
    ctx->pc = 0x1F4DACu;
    SET_GPR_U32(ctx, 31, 0x1F4DB4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4DACu, 0x1F4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DB4u;
label_1f4db4:
    // 0x1f4db4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f4db4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4db8:
    // 0x1f4db8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4dbc:
    // 0x1f4dbc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4dc0:
    // 0x1f4dc0: 0x244501f0  addiu       $a1, $v0, 0x1F0
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
label_1f4dc4:
    // 0x1f4dc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dc8:
    // 0x1f4dc8: 0x8c63022c  lw          $v1, 0x22C($v1)
    ctx->pc = 0x1f4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
label_1f4dcc:
    // 0x1f4dcc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dd0:
    // 0x1f4dd0: 0xc05612c  jal         func_1584B0
label_1f4dd4:
    if (ctx->pc == 0x1F4DD4u) {
        ctx->pc = 0x1F4DD8u;
        goto label_1f4dd8;
    }
    ctx->pc = 0x1F4DD0u;
    SET_GPR_U32(ctx, 31, 0x1F4DD8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F4DD0u, 0x1F4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DD8u;
label_1f4dd8:
    // 0x1f4dd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ddc:
    // 0x1f4ddc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4de0:
    // 0x1f4de0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f4de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f4de4:
    // 0x1f4de4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4de8:
    // 0x1f4de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4dec:
    // 0x1f4dec: 0xc08c8dc  jal         func_232370
label_1f4df0:
    if (ctx->pc == 0x1F4DF0u) {
        ctx->pc = 0x1F4DF4u;
        goto label_1f4df4;
    }
    ctx->pc = 0x1F4DECu;
    SET_GPR_U32(ctx, 31, 0x1F4DF4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4DECu, 0x1F4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DF4u;
label_1f4df4:
    // 0x1f4df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4df8:
    // 0x1f4df8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4dfc:
    // 0x1f4dfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e00:
    // 0x1f4e00: 0xc06479c  jal         func_191E70
label_1f4e04:
    if (ctx->pc == 0x1F4E04u) {
        ctx->pc = 0x1F4E08u;
        goto label_1f4e08;
    }
    ctx->pc = 0x1F4E00u;
    SET_GPR_U32(ctx, 31, 0x1F4E08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4E00u, 0x1F4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E08u;
label_1f4e08:
    // 0x1f4e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e0c:
    // 0x1f4e0c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4e10:
    // 0x1f4e10: 0x8ca30134  lw          $v1, 0x134($a1)
    ctx->pc = 0x1f4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_1f4e14:
    // 0x1f4e14: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f4e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e18:
    // 0x1f4e18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4e1c:
    // 0x1f4e1c: 0xc08c8dc  jal         func_232370
label_1f4e20:
    if (ctx->pc == 0x1F4E20u) {
        ctx->pc = 0x1F4E24u;
        goto label_1f4e24;
    }
    ctx->pc = 0x1F4E1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4E24u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4E1Cu, 0x1F4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E24u;
label_1f4e24:
    // 0x1f4e24: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4e28:
    // 0x1f4e28: 0x90860100  lbu         $a2, 0x100($a0)
    ctx->pc = 0x1f4e28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
label_1f4e2c:
    // 0x1f4e2c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1f4e30:
    if (ctx->pc == 0x1F4E30u) {
        ctx->pc = 0x1F4E34u;
        goto label_1f4e34;
    }
    ctx->pc = 0x1F4E2Cu;
    {
        const bool branch_taken_0x1f4e2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e2c) {
            ctx->pc = 0x1F4E40u;
            goto label_1f4e40;
        }
    }
    ctx->pc = 0x1F4E34u;
label_1f4e34:
    // 0x1f4e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e38:
    // 0x1f4e38: 0x10000300  b           . + 4 + (0x300 << 2)
label_1f4e3c:
    if (ctx->pc == 0x1F4E3Cu) {
        ctx->pc = 0x1F4E40u;
        goto label_1f4e40;
    }
    ctx->pc = 0x1F4E38u;
    {
        const bool branch_taken_0x1f4e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e38) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F4E40u;
label_1f4e40:
    // 0x1f4e40: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4e44:
    // 0x1f4e44: 0x90450101  lbu         $a1, 0x101($v0)
    ctx->pc = 0x1f4e44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 257)));
label_1f4e48:
    // 0x1f4e48: 0x10a001a7  beqz        $a1, . + 4 + (0x1A7 << 2)
label_1f4e4c:
    if (ctx->pc == 0x1F4E4Cu) {
        ctx->pc = 0x1F4E50u;
        goto label_1f4e50;
    }
    ctx->pc = 0x1F4E48u;
    {
        const bool branch_taken_0x1f4e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e48) {
            ctx->pc = 0x1F54E8u;
            goto label_1f54e8;
        }
    }
    ctx->pc = 0x1F4E50u;
label_1f4e50:
    // 0x1f4e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e54:
    // 0x1f4e54: 0x100002f9  b           . + 4 + (0x2F9 << 2)
label_1f4e58:
    if (ctx->pc == 0x1F4E58u) {
        ctx->pc = 0x1F4E5Cu;
        goto label_1f4e5c;
    }
    ctx->pc = 0x1F4E54u;
    {
        const bool branch_taken_0x1f4e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e54) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F4E5Cu;
label_1f4e5c:
    // 0x1f4e5c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4e60:
    // 0x1f4e60: 0xc4810284  lwc1        $f1, 0x284($a0)
    ctx->pc = 0x1f4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4e64:
    // 0x1f4e64: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4e68:
    // 0x1f4e68: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4e6c:
    // 0x1f4e6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f4e6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f4e70:
    // 0x1f4e70: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4e74:
    // 0x1f4e74: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1f4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4e78:
    // 0x1f4e78: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f4e78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1f4e7c:
    // 0x1f4e7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f4e80:
    // 0x1f4e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4e84:
    // 0x1f4e84: 0x0  nop
    ctx->pc = 0x1f4e84u;
    // NOP
label_1f4e88:
    // 0x1f4e88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f4e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f4e8c:
    // 0x1f4e8c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f4e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f4e90:
    // 0x1f4e90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f4e94:
    // 0x1f4e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4e98:
    // 0x1f4e98: 0x0  nop
    ctx->pc = 0x1f4e98u;
    // NOP
label_1f4e9c:
    // 0x1f4e9c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f4e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f4ea0:
    // 0x1f4ea0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f4ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1f4ea4:
    // 0x1f4ea4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f4ea4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4ea8:
    // 0x1f4ea8: 0x0  nop
    ctx->pc = 0x1f4ea8u;
    // NOP
label_1f4eac:
    // 0x1f4eac: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f4eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f4eb0:
    // 0x1f4eb0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f4eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f4eb4:
    // 0x1f4eb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f4eb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4eb8:
    // 0x1f4eb8: 0x0  nop
    ctx->pc = 0x1f4eb8u;
    // NOP
label_1f4ebc:
    // 0x1f4ebc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f4ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f4ec0:
    // 0x1f4ec0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4ec4:
    // 0x1f4ec4: 0x3c033e00  lui         $v1, 0x3E00
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15872 << 16));
label_1f4ec8:
    // 0x1f4ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f4ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4ecc:
    // 0x1f4ecc: 0x0  nop
    ctx->pc = 0x1f4eccu;
    // NOP
label_1f4ed0:
    // 0x1f4ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4ed4:
    // 0x1f4ed4: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_1f4ed8:
    if (ctx->pc == 0x1F4ED8u) {
        ctx->pc = 0x1F4EDCu;
        goto label_1f4edc;
    }
    ctx->pc = 0x1F4ED4u;
    {
        const bool branch_taken_0x1f4ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4ed4) {
            ctx->pc = 0x1F4FC0u;
            goto label_1f4fc0;
        }
    }
    ctx->pc = 0x1F4EDCu;
label_1f4edc:
    // 0x1f4edc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_1f4ee0:
    // 0x1f4ee0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1f4ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f4ee4:
    // 0x1f4ee4: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1f4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f4ee8:
    // 0x1f4ee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f4eec:
    // 0x1f4eec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f4eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f4ef0:
    // 0x1f4ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4ef4:
    // 0x1f4ef4: 0x0  nop
    ctx->pc = 0x1f4ef4u;
    // NOP
label_1f4ef8:
    // 0x1f4ef8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f4ef8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1f4efc:
    // 0x1f4efc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1f4efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1f4f00:
    // 0x1f4f00: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f4f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f4f04:
    // 0x1f4f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4f08:
    // 0x1f4f08: 0x0  nop
    ctx->pc = 0x1f4f08u;
    // NOP
label_1f4f0c:
    // 0x1f4f0c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f4f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f4f10:
    // 0x1f4f10: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4f14:
    // 0x1f4f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f18:
    // 0x1f4f18: 0xc06479c  jal         func_191E70
label_1f4f1c:
    if (ctx->pc == 0x1F4F1Cu) {
        ctx->pc = 0x1F4F20u;
        goto label_1f4f20;
    }
    ctx->pc = 0x1F4F18u;
    SET_GPR_U32(ctx, 31, 0x1F4F20u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4F18u, 0x1F4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F20u;
label_1f4f20:
    // 0x1f4f20: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f4f20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f24:
    // 0x1f4f24: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4f28:
    // 0x1f4f28: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4f2c:
    // 0x1f4f2c: 0x24a401f0  addiu       $a0, $a1, 0x1F0
    ctx->pc = 0x1f4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
label_1f4f30:
    // 0x1f4f30: 0x8c42022c  lw          $v0, 0x22C($v0)
    ctx->pc = 0x1f4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
label_1f4f34:
    // 0x1f4f34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f38:
    // 0x1f4f38: 0xc05612c  jal         func_1584B0
label_1f4f3c:
    if (ctx->pc == 0x1F4F3Cu) {
        ctx->pc = 0x1F4F40u;
        goto label_1f4f40;
    }
    ctx->pc = 0x1F4F38u;
    SET_GPR_U32(ctx, 31, 0x1F4F40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F4F38u, 0x1F4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F40u;
label_1f4f40:
    // 0x1f4f40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f44:
    // 0x1f4f44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4f48:
    // 0x1f4f48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f4f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f4c:
    // 0x1f4f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f50:
    // 0x1f4f50: 0xc08c8dc  jal         func_232370
label_1f4f54:
    if (ctx->pc == 0x1F4F54u) {
        ctx->pc = 0x1F4F58u;
        goto label_1f4f58;
    }
    ctx->pc = 0x1F4F50u;
    SET_GPR_U32(ctx, 31, 0x1F4F58u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4F50u, 0x1F4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F58u;
label_1f4f58:
    // 0x1f4f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f5c:
    // 0x1f4f5c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4f60:
    // 0x1f4f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f64:
    // 0x1f4f64: 0xc06479c  jal         func_191E70
label_1f4f68:
    if (ctx->pc == 0x1F4F68u) {
        ctx->pc = 0x1F4F6Cu;
        goto label_1f4f6c;
    }
    ctx->pc = 0x1F4F64u;
    SET_GPR_U32(ctx, 31, 0x1F4F6Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4F64u, 0x1F4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F6Cu;
label_1f4f6c:
    // 0x1f4f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f70:
    // 0x1f4f70: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4f74:
    // 0x1f4f74: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_1f4f78:
    // 0x1f4f78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f7c:
    // 0x1f4f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f4f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f80:
    // 0x1f4f80: 0xc08c8dc  jal         func_232370
label_1f4f84:
    if (ctx->pc == 0x1F4F84u) {
        ctx->pc = 0x1F4F88u;
        goto label_1f4f88;
    }
    ctx->pc = 0x1F4F80u;
    SET_GPR_U32(ctx, 31, 0x1F4F88u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4F80u, 0x1F4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F88u;
label_1f4f88:
    // 0x1f4f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f8c:
    // 0x1f4f8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4f90:
    // 0x1f4f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f94:
    // 0x1f4f94: 0xc06479c  jal         func_191E70
label_1f4f98:
    if (ctx->pc == 0x1F4F98u) {
        ctx->pc = 0x1F4F9Cu;
        goto label_1f4f9c;
    }
    ctx->pc = 0x1F4F94u;
    SET_GPR_U32(ctx, 31, 0x1F4F9Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F4F94u, 0x1F4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F9Cu;
label_1f4f9c:
    // 0x1f4f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4fa0:
    // 0x1f4fa0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f4fa4:
    // 0x1f4fa4: 0x8ca20134  lw          $v0, 0x134($a1)
    ctx->pc = 0x1f4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_1f4fa8:
    // 0x1f4fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4fac:
    // 0x1f4fac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f4facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4fb0:
    // 0x1f4fb0: 0xc08c8dc  jal         func_232370
label_1f4fb4:
    if (ctx->pc == 0x1F4FB4u) {
        ctx->pc = 0x1F4FB8u;
        goto label_1f4fb8;
    }
    ctx->pc = 0x1F4FB0u;
    SET_GPR_U32(ctx, 31, 0x1F4FB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F4FB0u, 0x1F4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FB8u;
label_1f4fb8:
    // 0x1f4fb8: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_1f4fbc:
    if (ctx->pc == 0x1F4FBCu) {
        ctx->pc = 0x1F4FC0u;
        goto label_1f4fc0;
    }
    ctx->pc = 0x1F4FB8u;
    {
        const bool branch_taken_0x1f4fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4fb8) {
            ctx->pc = 0x1F5384u;
            goto label_1f5384;
        }
    }
    ctx->pc = 0x1F4FC0u;
label_1f4fc0:
    // 0x1f4fc0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f4fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4fc4:
    // 0x1f4fc4: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x1f4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
label_1f4fc8:
    // 0x1f4fc8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f4fc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4fcc:
    // 0x1f4fcc: 0x0  nop
    ctx->pc = 0x1f4fccu;
    // NOP
label_1f4fd0:
    // 0x1f4fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4fd4:
    // 0x1f4fd4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_1f4fd8:
    if (ctx->pc == 0x1F4FD8u) {
        ctx->pc = 0x1F4FDCu;
        goto label_1f4fdc;
    }
    ctx->pc = 0x1F4FD4u;
    {
        const bool branch_taken_0x1f4fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4fd4) {
            ctx->pc = 0x1F50BCu;
            goto label_1f50bc;
        }
    }
    ctx->pc = 0x1F4FDCu;
label_1f4fdc:
    // 0x1f4fdc: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1f4fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_1f4fe0:
    // 0x1f4fe0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1f4fe0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4fe4:
    // 0x1f4fe4: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f4fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4fe8:
    // 0x1f4fe8: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1f4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
label_1f4fec:
    // 0x1f4fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4ff0:
    // 0x1f4ff0: 0x0  nop
    ctx->pc = 0x1f4ff0u;
    // NOP
label_1f4ff4:
    // 0x1f4ff4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f4ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f4ff8:
    // 0x1f4ff8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f4ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1f4ffc:
    // 0x1f4ffc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f4ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f5000:
    // 0x1f5000: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f5000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5004:
    // 0x1f5004: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f5004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f5008:
    // 0x1f5008: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f500c:
    // 0x1f500c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5010:
    // 0x1f5010: 0xc06479c  jal         func_191E70
label_1f5014:
    if (ctx->pc == 0x1F5014u) {
        ctx->pc = 0x1F5018u;
        goto label_1f5018;
    }
    ctx->pc = 0x1F5010u;
    SET_GPR_U32(ctx, 31, 0x1F5018u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5010u, 0x1F5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5018u;
label_1f5018:
    // 0x1f5018: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f5018u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f501c:
    // 0x1f501c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f501cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5020:
    // 0x1f5020: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5024:
    // 0x1f5024: 0x24c201f0  addiu       $v0, $a2, 0x1F0
    ctx->pc = 0x1f5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
label_1f5028:
    // 0x1f5028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f502c:
    // 0x1f502c: 0x8ca2022c  lw          $v0, 0x22C($a1)
    ctx->pc = 0x1f502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 556)));
label_1f5030:
    // 0x1f5030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5034:
    // 0x1f5034: 0xc05612c  jal         func_1584B0
label_1f5038:
    if (ctx->pc == 0x1F5038u) {
        ctx->pc = 0x1F503Cu;
        goto label_1f503c;
    }
    ctx->pc = 0x1F5034u;
    SET_GPR_U32(ctx, 31, 0x1F503Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F5034u, 0x1F503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F503Cu;
label_1f503c:
    // 0x1f503c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f503cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5040:
    // 0x1f5040: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f5044:
    // 0x1f5044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5048:
    // 0x1f5048: 0xc08c8dc  jal         func_232370
label_1f504c:
    if (ctx->pc == 0x1F504Cu) {
        ctx->pc = 0x1F5050u;
        goto label_1f5050;
    }
    ctx->pc = 0x1F5048u;
    SET_GPR_U32(ctx, 31, 0x1F5050u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5048u, 0x1F5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5050u;
label_1f5050:
    // 0x1f5050: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5054:
    // 0x1f5054: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5058:
    // 0x1f5058: 0xc06479c  jal         func_191E70
label_1f505c:
    if (ctx->pc == 0x1F505Cu) {
        ctx->pc = 0x1F5060u;
        goto label_1f5060;
    }
    ctx->pc = 0x1F5058u;
    SET_GPR_U32(ctx, 31, 0x1F5060u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5058u, 0x1F5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5060u;
label_1f5060:
    // 0x1f5060: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5064:
    // 0x1f5064: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1f5064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1f5068:
    // 0x1f5068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f506c:
    // 0x1f506c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5070:
    // 0x1f5070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f5070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5074:
    // 0x1f5074: 0xc08c8dc  jal         func_232370
label_1f5078:
    if (ctx->pc == 0x1F5078u) {
        ctx->pc = 0x1F507Cu;
        goto label_1f507c;
    }
    ctx->pc = 0x1F5074u;
    SET_GPR_U32(ctx, 31, 0x1F507Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5074u, 0x1F507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F507Cu;
label_1f507c:
    // 0x1f507c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f507cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5080:
    // 0x1f5080: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5084:
    // 0x1f5084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5088:
    // 0x1f5088: 0xc06479c  jal         func_191E70
label_1f508c:
    if (ctx->pc == 0x1F508Cu) {
        ctx->pc = 0x1F5090u;
        goto label_1f5090;
    }
    ctx->pc = 0x1F5088u;
    SET_GPR_U32(ctx, 31, 0x1F5090u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5088u, 0x1F5090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5090u;
label_1f5090:
    // 0x1f5090: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f5090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5094:
    // 0x1f5094: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f5094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5098:
    // 0x1f5098: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1f5098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_1f509c:
    // 0x1f509c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f50a0:
    // 0x1f50a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f50a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f50a4:
    // 0x1f50a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f50a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50a8:
    // 0x1f50a8: 0xc08c8dc  jal         func_232370
label_1f50ac:
    if (ctx->pc == 0x1F50ACu) {
        ctx->pc = 0x1F50B0u;
        goto label_1f50b0;
    }
    ctx->pc = 0x1F50A8u;
    SET_GPR_U32(ctx, 31, 0x1F50B0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F50A8u, 0x1F50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F50B0u;
label_1f50b0:
    // 0x1f50b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f50b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f50b4:
    // 0x1f50b4: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1f50b8:
    if (ctx->pc == 0x1F50B8u) {
        ctx->pc = 0x1F50BCu;
        goto label_1f50bc;
    }
    ctx->pc = 0x1F50B4u;
    {
        const bool branch_taken_0x1f50b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f50b4) {
            ctx->pc = 0x1F5384u;
            goto label_1f5384;
        }
    }
    ctx->pc = 0x1F50BCu;
label_1f50bc:
    // 0x1f50bc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f50bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f50c0:
    // 0x1f50c0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1f50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_1f50c4:
    // 0x1f50c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f50c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f50c8:
    // 0x1f50c8: 0x0  nop
    ctx->pc = 0x1f50c8u;
    // NOP
label_1f50cc:
    // 0x1f50cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f50ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f50d0:
    // 0x1f50d0: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_1f50d4:
    if (ctx->pc == 0x1F50D4u) {
        ctx->pc = 0x1F50D8u;
        goto label_1f50d8;
    }
    ctx->pc = 0x1F50D0u;
    {
        const bool branch_taken_0x1f50d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f50d0) {
            ctx->pc = 0x1F51A4u;
            goto label_1f51a4;
        }
    }
    ctx->pc = 0x1F50D8u;
label_1f50d8:
    // 0x1f50d8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f50dc:
    // 0x1f50dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f50dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f50e0:
    // 0x1f50e0: 0x0  nop
    ctx->pc = 0x1f50e0u;
    // NOP
label_1f50e4:
    // 0x1f50e4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f50e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f50e8:
    // 0x1f50e8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f50ec:
    // 0x1f50ec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f50ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f50f0:
    // 0x1f50f0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f50f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f50f4:
    // 0x1f50f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f50f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f50f8:
    // 0x1f50f8: 0xc06479c  jal         func_191E70
label_1f50fc:
    if (ctx->pc == 0x1F50FCu) {
        ctx->pc = 0x1F5100u;
        goto label_1f5100;
    }
    ctx->pc = 0x1F50F8u;
    SET_GPR_U32(ctx, 31, 0x1F5100u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F50F8u, 0x1F5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5100u;
label_1f5100:
    // 0x1f5100: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f5100u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5104:
    // 0x1f5104: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5108:
    // 0x1f5108: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f510c:
    // 0x1f510c: 0x244501f0  addiu       $a1, $v0, 0x1F0
    ctx->pc = 0x1f510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
label_1f5110:
    // 0x1f5110: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5114:
    // 0x1f5114: 0x8c65022c  lw          $a1, 0x22C($v1)
    ctx->pc = 0x1f5114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
label_1f5118:
    // 0x1f5118: 0xc05612c  jal         func_1584B0
label_1f511c:
    if (ctx->pc == 0x1F511Cu) {
        ctx->pc = 0x1F5120u;
        goto label_1f5120;
    }
    ctx->pc = 0x1F5118u;
    SET_GPR_U32(ctx, 31, 0x1F5120u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F5118u, 0x1F5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5120u;
label_1f5120:
    // 0x1f5120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5124:
    // 0x1f5124: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f5128:
    // 0x1f5128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f512c:
    // 0x1f512c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f512cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5130:
    // 0x1f5130: 0xc08c8dc  jal         func_232370
label_1f5134:
    if (ctx->pc == 0x1F5134u) {
        ctx->pc = 0x1F5138u;
        goto label_1f5138;
    }
    ctx->pc = 0x1F5130u;
    SET_GPR_U32(ctx, 31, 0x1F5138u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5130u, 0x1F5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5138u;
label_1f5138:
    // 0x1f5138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f513c:
    // 0x1f513c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5140:
    // 0x1f5140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5144:
    // 0x1f5144: 0xc06479c  jal         func_191E70
label_1f5148:
    if (ctx->pc == 0x1F5148u) {
        ctx->pc = 0x1F514Cu;
        goto label_1f514c;
    }
    ctx->pc = 0x1F5144u;
    SET_GPR_U32(ctx, 31, 0x1F514Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5144u, 0x1F514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F514Cu;
label_1f514c:
    // 0x1f514c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5150:
    // 0x1f5150: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5154:
    // 0x1f5154: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_1f5158:
    // 0x1f5158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f515c:
    // 0x1f515c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5160:
    // 0x1f5160: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f5160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5164:
    // 0x1f5164: 0xc08c8dc  jal         func_232370
label_1f5168:
    if (ctx->pc == 0x1F5168u) {
        ctx->pc = 0x1F516Cu;
        goto label_1f516c;
    }
    ctx->pc = 0x1F5164u;
    SET_GPR_U32(ctx, 31, 0x1F516Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5164u, 0x1F516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F516Cu;
label_1f516c:
    // 0x1f516c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f516cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5170:
    // 0x1f5170: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f5170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5174:
    // 0x1f5174: 0xc06479c  jal         func_191E70
label_1f5178:
    if (ctx->pc == 0x1F5178u) {
        ctx->pc = 0x1F517Cu;
        goto label_1f517c;
    }
    ctx->pc = 0x1F5174u;
    SET_GPR_U32(ctx, 31, 0x1F517Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5174u, 0x1F517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F517Cu;
label_1f517c:
    // 0x1f517c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f517cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5180:
    // 0x1f5180: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5184:
    // 0x1f5184: 0x8c450134  lw          $a1, 0x134($v0)
    ctx->pc = 0x1f5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_1f5188:
    // 0x1f5188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f5188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f518c:
    // 0x1f518c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f518cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5190:
    // 0x1f5190: 0xc08c8dc  jal         func_232370
label_1f5194:
    if (ctx->pc == 0x1F5194u) {
        ctx->pc = 0x1F5198u;
        goto label_1f5198;
    }
    ctx->pc = 0x1F5190u;
    SET_GPR_U32(ctx, 31, 0x1F5198u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5190u, 0x1F5198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5198u;
label_1f5198:
    // 0x1f5198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f519c:
    // 0x1f519c: 0x10000079  b           . + 4 + (0x79 << 2)
label_1f51a0:
    if (ctx->pc == 0x1F51A0u) {
        ctx->pc = 0x1F51A4u;
        goto label_1f51a4;
    }
    ctx->pc = 0x1F519Cu;
    {
        const bool branch_taken_0x1f519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f519c) {
            ctx->pc = 0x1F5384u;
            goto label_1f5384;
        }
    }
    ctx->pc = 0x1F51A4u;
label_1f51a4:
    // 0x1f51a4: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f51a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f51a8:
    // 0x1f51a8: 0x3c053f60  lui         $a1, 0x3F60
    ctx->pc = 0x1f51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16224 << 16));
label_1f51ac:
    // 0x1f51ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f51acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f51b0:
    // 0x1f51b0: 0x0  nop
    ctx->pc = 0x1f51b0u;
    // NOP
label_1f51b4:
    // 0x1f51b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f51b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f51b8:
    // 0x1f51b8: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_1f51bc:
    if (ctx->pc == 0x1F51BCu) {
        ctx->pc = 0x1F51C0u;
        goto label_1f51c0;
    }
    ctx->pc = 0x1F51B8u;
    {
        const bool branch_taken_0x1f51b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f51b8) {
            ctx->pc = 0x1F52A8u;
            goto label_1f52a8;
        }
    }
    ctx->pc = 0x1F51C0u;
label_1f51c0:
    // 0x1f51c0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1f51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1f51c4:
    // 0x1f51c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1f51c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f51c8:
    // 0x1f51c8: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f51c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f51cc:
    // 0x1f51cc: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1f51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_1f51d0:
    // 0x1f51d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f51d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f51d4:
    // 0x1f51d4: 0x0  nop
    ctx->pc = 0x1f51d4u;
    // NOP
label_1f51d8:
    // 0x1f51d8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1f51d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f51dc:
    // 0x1f51dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f51e0:
    // 0x1f51e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f51e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f51e4:
    // 0x1f51e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f51e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f51e8:
    // 0x1f51e8: 0x0  nop
    ctx->pc = 0x1f51e8u;
    // NOP
label_1f51ec:
    // 0x1f51ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f51ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1f51f0:
    // 0x1f51f0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1f51f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1f51f4:
    // 0x1f51f4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f51f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f51f8:
    // 0x1f51f8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f51fc:
    // 0x1f51fc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f51fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f5200:
    // 0x1f5200: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5204:
    // 0x1f5204: 0xc06479c  jal         func_191E70
label_1f5208:
    if (ctx->pc == 0x1F5208u) {
        ctx->pc = 0x1F520Cu;
        goto label_1f520c;
    }
    ctx->pc = 0x1F5204u;
    SET_GPR_U32(ctx, 31, 0x1F520Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5204u, 0x1F520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F520Cu;
label_1f520c:
    // 0x1f520c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f520cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5210:
    // 0x1f5210: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5214:
    // 0x1f5214: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5218:
    // 0x1f5218: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x1f5218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
label_1f521c:
    // 0x1f521c: 0x8ca3022c  lw          $v1, 0x22C($a1)
    ctx->pc = 0x1f521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 556)));
label_1f5220:
    // 0x1f5220: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f5220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5224:
    // 0x1f5224: 0xc05612c  jal         func_1584B0
label_1f5228:
    if (ctx->pc == 0x1F5228u) {
        ctx->pc = 0x1F522Cu;
        goto label_1f522c;
    }
    ctx->pc = 0x1F5224u;
    SET_GPR_U32(ctx, 31, 0x1F522Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F5224u, 0x1F522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F522Cu;
label_1f522c:
    // 0x1f522c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5230:
    // 0x1f5230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5234:
    // 0x1f5234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5238:
    // 0x1f5238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f523c:
    // 0x1f523c: 0xc08c8dc  jal         func_232370
label_1f5240:
    if (ctx->pc == 0x1F5240u) {
        ctx->pc = 0x1F5244u;
        goto label_1f5244;
    }
    ctx->pc = 0x1F523Cu;
    SET_GPR_U32(ctx, 31, 0x1F5244u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F523Cu, 0x1F5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5244u;
label_1f5244:
    // 0x1f5244: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5248:
    // 0x1f5248: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f524c:
    // 0x1f524c: 0xc06479c  jal         func_191E70
label_1f5250:
    if (ctx->pc == 0x1F5250u) {
        ctx->pc = 0x1F5254u;
        goto label_1f5254;
    }
    ctx->pc = 0x1F524Cu;
    SET_GPR_U32(ctx, 31, 0x1F5254u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F524Cu, 0x1F5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5254u;
label_1f5254:
    // 0x1f5254: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5258:
    // 0x1f5258: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1f5258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_1f525c:
    // 0x1f525c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5260:
    // 0x1f5260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5264:
    // 0x1f5264: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f5264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5268:
    // 0x1f5268: 0xc08c8dc  jal         func_232370
label_1f526c:
    if (ctx->pc == 0x1F526Cu) {
        ctx->pc = 0x1F5270u;
        goto label_1f5270;
    }
    ctx->pc = 0x1F5268u;
    SET_GPR_U32(ctx, 31, 0x1F5270u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5268u, 0x1F5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5270u;
label_1f5270:
    // 0x1f5270: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5274:
    // 0x1f5274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5278:
    // 0x1f5278: 0xc06479c  jal         func_191E70
label_1f527c:
    if (ctx->pc == 0x1F527Cu) {
        ctx->pc = 0x1F5280u;
        goto label_1f5280;
    }
    ctx->pc = 0x1F5278u;
    SET_GPR_U32(ctx, 31, 0x1F5280u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5278u, 0x1F5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5280u;
label_1f5280:
    // 0x1f5280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5284:
    // 0x1f5284: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5288:
    // 0x1f5288: 0x8ca20134  lw          $v0, 0x134($a1)
    ctx->pc = 0x1f5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_1f528c:
    // 0x1f528c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f528cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5290:
    // 0x1f5290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5294:
    // 0x1f5294: 0xc08c8dc  jal         func_232370
label_1f5298:
    if (ctx->pc == 0x1F5298u) {
        ctx->pc = 0x1F529Cu;
        goto label_1f529c;
    }
    ctx->pc = 0x1F5294u;
    SET_GPR_U32(ctx, 31, 0x1F529Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5294u, 0x1F529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F529Cu;
label_1f529c:
    // 0x1f529c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f529cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f52a0:
    // 0x1f52a0: 0x10000038  b           . + 4 + (0x38 << 2)
label_1f52a4:
    if (ctx->pc == 0x1F52A4u) {
        ctx->pc = 0x1F52A8u;
        goto label_1f52a8;
    }
    ctx->pc = 0x1F52A0u;
    {
        const bool branch_taken_0x1f52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f52a0) {
            ctx->pc = 0x1F5384u;
            goto label_1f5384;
        }
    }
    ctx->pc = 0x1F52A8u;
label_1f52a8:
    // 0x1f52a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1f52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1f52ac:
    // 0x1f52ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f52acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f52b0:
    // 0x1f52b0: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f52b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f52b4:
    // 0x1f52b4: 0x3c063f60  lui         $a2, 0x3F60
    ctx->pc = 0x1f52b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16224 << 16));
label_1f52b8:
    // 0x1f52b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f52b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f52bc:
    // 0x1f52bc: 0x0  nop
    ctx->pc = 0x1f52bcu;
    // NOP
label_1f52c0:
    // 0x1f52c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f52c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f52c4:
    // 0x1f52c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f52c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1f52c8:
    // 0x1f52c8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f52c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f52cc:
    // 0x1f52cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f52ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f52d0:
    // 0x1f52d0: 0x0  nop
    ctx->pc = 0x1f52d0u;
    // NOP
label_1f52d4:
    // 0x1f52d4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f52d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f52d8:
    // 0x1f52d8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f52dc:
    // 0x1f52dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f52dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f52e0:
    // 0x1f52e0: 0xc06479c  jal         func_191E70
label_1f52e4:
    if (ctx->pc == 0x1F52E4u) {
        ctx->pc = 0x1F52E8u;
        goto label_1f52e8;
    }
    ctx->pc = 0x1F52E0u;
    SET_GPR_U32(ctx, 31, 0x1F52E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F52E0u, 0x1F52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52E8u;
label_1f52e8:
    // 0x1f52e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f52e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f52ec:
    // 0x1f52ec: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f52f0:
    // 0x1f52f0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f52f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f52f4:
    // 0x1f52f4: 0x248301f0  addiu       $v1, $a0, 0x1F0
    ctx->pc = 0x1f52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
label_1f52f8:
    // 0x1f52f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f52f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f52fc:
    // 0x1f52fc: 0x8cc6022c  lw          $a2, 0x22C($a2)
    ctx->pc = 0x1f52fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 556)));
label_1f5300:
    // 0x1f5300: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f5300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5304:
    // 0x1f5304: 0xc05612c  jal         func_1584B0
label_1f5308:
    if (ctx->pc == 0x1F5308u) {
        ctx->pc = 0x1F530Cu;
        goto label_1f530c;
    }
    ctx->pc = 0x1F5304u;
    SET_GPR_U32(ctx, 31, 0x1F530Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F5304u, 0x1F530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F530Cu;
label_1f530c:
    // 0x1f530c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5310:
    // 0x1f5310: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f5310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f5314:
    // 0x1f5314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5318:
    // 0x1f5318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f531c:
    // 0x1f531c: 0xc08c8dc  jal         func_232370
label_1f5320:
    if (ctx->pc == 0x1F5320u) {
        ctx->pc = 0x1F5324u;
        goto label_1f5324;
    }
    ctx->pc = 0x1F531Cu;
    SET_GPR_U32(ctx, 31, 0x1F5324u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F531Cu, 0x1F5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5324u;
label_1f5324:
    // 0x1f5324: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5328:
    // 0x1f5328: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f532c:
    // 0x1f532c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5330:
    // 0x1f5330: 0xc06479c  jal         func_191E70
label_1f5334:
    if (ctx->pc == 0x1F5334u) {
        ctx->pc = 0x1F5338u;
        goto label_1f5338;
    }
    ctx->pc = 0x1F5330u;
    SET_GPR_U32(ctx, 31, 0x1F5338u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5330u, 0x1F5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5338u;
label_1f5338:
    // 0x1f5338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f533c:
    // 0x1f533c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5340:
    // 0x1f5340: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1f5340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1f5344:
    // 0x1f5344: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f5344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5348:
    // 0x1f5348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f534c:
    // 0x1f534c: 0xc08c8dc  jal         func_232370
label_1f5350:
    if (ctx->pc == 0x1F5350u) {
        ctx->pc = 0x1F5354u;
        goto label_1f5354;
    }
    ctx->pc = 0x1F534Cu;
    SET_GPR_U32(ctx, 31, 0x1F5354u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F534Cu, 0x1F5354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5354u;
label_1f5354:
    // 0x1f5354: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5358:
    // 0x1f5358: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f535c:
    // 0x1f535c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5360:
    // 0x1f5360: 0xc06479c  jal         func_191E70
label_1f5364:
    if (ctx->pc == 0x1F5364u) {
        ctx->pc = 0x1F5368u;
        goto label_1f5368;
    }
    ctx->pc = 0x1F5360u;
    SET_GPR_U32(ctx, 31, 0x1F5368u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5360u, 0x1F5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5368u;
label_1f5368:
    // 0x1f5368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f536c:
    // 0x1f536c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5370:
    // 0x1f5370: 0x8c450134  lw          $a1, 0x134($v0)
    ctx->pc = 0x1f5370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_1f5374:
    // 0x1f5374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5378:
    // 0x1f5378: 0xc08c8dc  jal         func_232370
label_1f537c:
    if (ctx->pc == 0x1F537Cu) {
        ctx->pc = 0x1F5380u;
        goto label_1f5380;
    }
    ctx->pc = 0x1F5378u;
    SET_GPR_U32(ctx, 31, 0x1F5380u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F5378u, 0x1F5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5380u;
label_1f5380:
    // 0x1f5380: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f5380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5384:
    // 0x1f5384: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5388:
    // 0x1f5388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f538c:
    // 0x1f538c: 0xc06479c  jal         func_191E70
label_1f5390:
    if (ctx->pc == 0x1F5390u) {
        ctx->pc = 0x1F5394u;
        goto label_1f5394;
    }
    ctx->pc = 0x1F538Cu;
    SET_GPR_U32(ctx, 31, 0x1F5394u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F538Cu, 0x1F5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5394u;
label_1f5394:
    // 0x1f5394: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f5394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5398:
    // 0x1f5398: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f539c:
    // 0x1f539c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1f539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1f53a0:
    // 0x1f53a0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1f53a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1f53a4:
    // 0x1f53a4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1f53a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f53a8:
    // 0x1f53a8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f53a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f53ac:
    // 0x1f53ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f53acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f53b0:
    // 0x1f53b0: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x1f53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f53b4:
    // 0x1f53b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f53b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f53b8:
    // 0x1f53b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f53bc:
    // 0x1f53bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f53bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f53c0:
    // 0x1f53c0: 0xc08c544  jal         func_231510
label_1f53c4:
    if (ctx->pc == 0x1F53C4u) {
        ctx->pc = 0x1F53C8u;
        goto label_1f53c8;
    }
    ctx->pc = 0x1F53C0u;
    SET_GPR_U32(ctx, 31, 0x1F53C8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F53C0u, 0x1F53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53C8u;
label_1f53c8:
    // 0x1f53c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f53c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f53cc:
    // 0x1f53cc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f53d0:
    // 0x1f53d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f53d4:
    // 0x1f53d4: 0xc06479c  jal         func_191E70
label_1f53d8:
    if (ctx->pc == 0x1F53D8u) {
        ctx->pc = 0x1F53DCu;
        goto label_1f53dc;
    }
    ctx->pc = 0x1F53D4u;
    SET_GPR_U32(ctx, 31, 0x1F53DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F53D4u, 0x1F53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53DCu;
label_1f53dc:
    // 0x1f53dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f53dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f53e0:
    // 0x1f53e0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f53e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f53e4:
    // 0x1f53e4: 0x8ca30134  lw          $v1, 0x134($a1)
    ctx->pc = 0x1f53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_1f53e8:
    // 0x1f53e8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1f53e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1f53ec:
    // 0x1f53ec: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x1f53ecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f53f0:
    // 0x1f53f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f53f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f53f4:
    // 0x1f53f4: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x1f53f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f53f8:
    // 0x1f53f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f53f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f53fc:
    // 0x1f53fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5400:
    // 0x1f5400: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f5400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5404:
    // 0x1f5404: 0xc08c544  jal         func_231510
label_1f5408:
    if (ctx->pc == 0x1F5408u) {
        ctx->pc = 0x1F540Cu;
        goto label_1f540c;
    }
    ctx->pc = 0x1F5404u;
    SET_GPR_U32(ctx, 31, 0x1F540Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F5404u, 0x1F540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F540Cu;
label_1f540c:
    // 0x1f540c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5410:
    // 0x1f5410: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f5410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f5414:
    // 0x1f5414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f5414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f5418:
    // 0x1f5418: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f541c:
    // 0x1f541c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f541cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5420:
    // 0x1f5420: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1f5424:
    if (ctx->pc == 0x1F5424u) {
        ctx->pc = 0x1F5428u;
        goto label_1f5428;
    }
    ctx->pc = 0x1F5420u;
    {
        const bool branch_taken_0x1f5420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5420) {
            ctx->pc = 0x1F5438u;
            goto label_1f5438;
        }
    }
    ctx->pc = 0x1F5428u;
label_1f5428:
    // 0x1f5428: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f542c:
    // 0x1f542c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1f542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f5430:
    // 0x1f5430: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f5434:
    if (ctx->pc == 0x1F5434u) {
        ctx->pc = 0x1F5438u;
        goto label_1f5438;
    }
    ctx->pc = 0x1F5430u;
    {
        const bool branch_taken_0x1f5430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5430) {
            ctx->pc = 0x1F5440u;
            goto label_1f5440;
        }
    }
    ctx->pc = 0x1F5438u;
label_1f5438:
    // 0x1f5438: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f543c:
    // 0x1f543c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1f543cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f5440:
    // 0x1f5440: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5444:
    // 0x1f5444: 0xc06479c  jal         func_191E70
label_1f5448:
    if (ctx->pc == 0x1F5448u) {
        ctx->pc = 0x1F544Cu;
        goto label_1f544c;
    }
    ctx->pc = 0x1F5444u;
    SET_GPR_U32(ctx, 31, 0x1F544Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F5444u, 0x1F544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F544Cu;
label_1f544c:
    // 0x1f544c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f544cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5450:
    // 0x1f5450: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5454:
    // 0x1f5454: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x1f5454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
label_1f5458:
    // 0x1f5458: 0xc7838278  lwc1        $f3, -0x7D88($gp)
    ctx->pc = 0x1f5458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f545c:
    // 0x1f545c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1f545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f5460:
    // 0x1f5460: 0xc78181a0  lwc1        $f1, -0x7E60($gp)
    ctx->pc = 0x1f5460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5464:
    // 0x1f5464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f5468:
    // 0x1f5468: 0x0  nop
    ctx->pc = 0x1f5468u;
    // NOP
label_1f546c:
    // 0x1f546c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f546cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1f5470:
    // 0x1f5470: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1f5470u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1f5474:
    // 0x1f5474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f5474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f5478:
    // 0x1f5478: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f5478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f547c:
    // 0x1f547c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5480:
    // 0x1f5480: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f5480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5484:
    // 0x1f5484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5488:
    // 0x1f5488: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f548c:
    // 0x1f548c: 0xc08c544  jal         func_231510
label_1f5490:
    if (ctx->pc == 0x1F5490u) {
        ctx->pc = 0x1F5494u;
        goto label_1f5494;
    }
    ctx->pc = 0x1F548Cu;
    SET_GPR_U32(ctx, 31, 0x1F5494u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F548Cu, 0x1F5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5494u;
label_1f5494:
    // 0x1f5494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5498:
    // 0x1f5498: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f5498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f549c:
    // 0x1f549c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f54a0:
    // 0x1f54a0: 0xc06479c  jal         func_191E70
label_1f54a4:
    if (ctx->pc == 0x1F54A4u) {
        ctx->pc = 0x1F54A8u;
        goto label_1f54a8;
    }
    ctx->pc = 0x1F54A0u;
    SET_GPR_U32(ctx, 31, 0x1F54A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F54A0u, 0x1F54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54A8u;
label_1f54a8:
    // 0x1f54a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f54a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f54ac:
    // 0x1f54ac: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f54b0:
    // 0x1f54b0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f54b4:
    // 0x1f54b4: 0x246401f0  addiu       $a0, $v1, 0x1F0
    ctx->pc = 0x1f54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
label_1f54b8:
    // 0x1f54b8: 0x8c45022c  lw          $a1, 0x22C($v0)
    ctx->pc = 0x1f54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
label_1f54bc:
    // 0x1f54bc: 0xc05612c  jal         func_1584B0
label_1f54c0:
    if (ctx->pc == 0x1F54C0u) {
        ctx->pc = 0x1F54C4u;
        goto label_1f54c4;
    }
    ctx->pc = 0x1F54BCu;
    SET_GPR_U32(ctx, 31, 0x1F54C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F54BCu, 0x1F54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54C4u;
label_1f54c4:
    // 0x1f54c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f54c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f54c8:
    // 0x1f54c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f54cc:
    // 0x1f54cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f54ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f54d0:
    // 0x1f54d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f54d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f54d4:
    // 0x1f54d4: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x1f54d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f54d8:
    // 0x1f54d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f54d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f54dc:
    // 0x1f54dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f54dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f54e0:
    // 0x1f54e0: 0xc08c544  jal         func_231510
label_1f54e4:
    if (ctx->pc == 0x1F54E4u) {
        ctx->pc = 0x1F54E8u;
        goto label_1f54e8;
    }
    ctx->pc = 0x1F54E0u;
    SET_GPR_U32(ctx, 31, 0x1F54E8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1F54E0u, 0x1F54E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54E8u;
label_1f54e8:
    // 0x1f54e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f54ec:
    // 0x1f54ec: 0x908200e0  lbu         $v0, 0xE0($a0)
    ctx->pc = 0x1f54ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
label_1f54f0:
    // 0x1f54f0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1f54f4:
    if (ctx->pc == 0x1F54F4u) {
        ctx->pc = 0x1F54F8u;
        goto label_1f54f8;
    }
    ctx->pc = 0x1F54F0u;
    {
        const bool branch_taken_0x1f54f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f54f0) {
            ctx->pc = 0x1F55A4u;
            goto label_1f55a4;
        }
    }
    ctx->pc = 0x1F54F8u;
label_1f54f8:
    // 0x1f54f8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f54fc:
    // 0x1f54fc: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f54fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5500:
    // 0x1f5500: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5504:
    // 0x1f5504: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1f5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5508:
    // 0x1f5508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f550c:
    // 0x1f550c: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_1f5510:
    if (ctx->pc == 0x1F5510u) {
        ctx->pc = 0x1F5514u;
        goto label_1f5514;
    }
    ctx->pc = 0x1F550Cu;
    {
        const bool branch_taken_0x1f550c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f550c) {
            ctx->pc = 0x1F5594u;
            goto label_1f5594;
        }
    }
    ctx->pc = 0x1F5514u;
label_1f5514:
    // 0x1f5514: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f5514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5518:
    // 0x1f5518: 0x906500e8  lbu         $a1, 0xE8($v1)
    ctx->pc = 0x1f5518u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 232)));
label_1f551c:
    // 0x1f551c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1f5520:
    if (ctx->pc == 0x1F5520u) {
        ctx->pc = 0x1F5524u;
        goto label_1f5524;
    }
    ctx->pc = 0x1F551Cu;
    {
        const bool branch_taken_0x1f551c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f551c) {
            ctx->pc = 0x1F553Cu;
            goto label_1f553c;
        }
    }
    ctx->pc = 0x1F5524u;
label_1f5524:
    // 0x1f5524: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5528:
    // 0x1f5528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f552c:
    // 0x1f552c: 0xc07ddf4  jal         func_1F77D0
label_1f5530:
    if (ctx->pc == 0x1F5530u) {
        ctx->pc = 0x1F5534u;
        goto label_1f5534;
    }
    ctx->pc = 0x1F552Cu;
    SET_GPR_U32(ctx, 31, 0x1F5534u);
    ctx->pc = 0x1F77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77D0u, 0x1F552Cu, 0x1F5534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5534u;
label_1f5534:
    // 0x1f5534: 0x10000013  b           . + 4 + (0x13 << 2)
label_1f5538:
    if (ctx->pc == 0x1F5538u) {
        ctx->pc = 0x1F553Cu;
        goto label_1f553c;
    }
    ctx->pc = 0x1F5534u;
    {
        const bool branch_taken_0x1f5534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5534) {
            ctx->pc = 0x1F5584u;
            goto label_1f5584;
        }
    }
    ctx->pc = 0x1F553Cu;
label_1f553c:
    // 0x1f553c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5540:
    // 0x1f5540: 0x904200e9  lbu         $v0, 0xE9($v0)
    ctx->pc = 0x1f5540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 233)));
label_1f5544:
    // 0x1f5544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f5548:
    if (ctx->pc == 0x1F5548u) {
        ctx->pc = 0x1F554Cu;
        goto label_1f554c;
    }
    ctx->pc = 0x1F5544u;
    {
        const bool branch_taken_0x1f5544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5544) {
            ctx->pc = 0x1F5564u;
            goto label_1f5564;
        }
    }
    ctx->pc = 0x1F554Cu;
label_1f554c:
    // 0x1f554c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5550:
    // 0x1f5550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5554:
    // 0x1f5554: 0xc07de14  jal         func_1F7850
label_1f5558:
    if (ctx->pc == 0x1F5558u) {
        ctx->pc = 0x1F555Cu;
        goto label_1f555c;
    }
    ctx->pc = 0x1F5554u;
    SET_GPR_U32(ctx, 31, 0x1F555Cu);
    ctx->pc = 0x1F7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7850u, 0x1F5554u, 0x1F555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F555Cu;
label_1f555c:
    // 0x1f555c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f5560:
    if (ctx->pc == 0x1F5560u) {
        ctx->pc = 0x1F5564u;
        goto label_1f5564;
    }
    ctx->pc = 0x1F555Cu;
    {
        const bool branch_taken_0x1f555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f555c) {
            ctx->pc = 0x1F5584u;
            goto label_1f5584;
        }
    }
    ctx->pc = 0x1F5564u;
label_1f5564:
    // 0x1f5564: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5568:
    // 0x1f5568: 0x908200ea  lbu         $v0, 0xEA($a0)
    ctx->pc = 0x1f5568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 234)));
label_1f556c:
    // 0x1f556c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f5570:
    if (ctx->pc == 0x1F5570u) {
        ctx->pc = 0x1F5574u;
        goto label_1f5574;
    }
    ctx->pc = 0x1F556Cu;
    {
        const bool branch_taken_0x1f556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f556c) {
            ctx->pc = 0x1F5584u;
            goto label_1f5584;
        }
    }
    ctx->pc = 0x1F5574u;
label_1f5574:
    // 0x1f5574: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5578:
    // 0x1f5578: 0xc07ded4  jal         func_1F7B50
label_1f557c:
    if (ctx->pc == 0x1F557Cu) {
        ctx->pc = 0x1F5580u;
        goto label_1f5580;
    }
    ctx->pc = 0x1F5578u;
    SET_GPR_U32(ctx, 31, 0x1F5580u);
    ctx->pc = 0x1F7B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7B50u, 0x1F5578u, 0x1F5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5580u;
label_1f5580:
    // 0x1f5580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5584:
    // 0x1f5584: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f5584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5588:
    // 0x1f5588: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f5588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f558c:
    // 0x1f558c: 0xc07e0cc  jal         func_1F8330
label_1f5590:
    if (ctx->pc == 0x1F5590u) {
        ctx->pc = 0x1F5594u;
        goto label_1f5594;
    }
    ctx->pc = 0x1F558Cu;
    SET_GPR_U32(ctx, 31, 0x1F5594u);
    ctx->pc = 0x1F8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8330u, 0x1F558Cu, 0x1F5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5594u;
label_1f5594:
    // 0x1f5594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5598:
    // 0x1f5598: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f5598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f559c:
    // 0x1f559c: 0x10000127  b           . + 4 + (0x127 << 2)
label_1f55a0:
    if (ctx->pc == 0x1F55A0u) {
        ctx->pc = 0x1F55A4u;
        goto label_1f55a4;
    }
    ctx->pc = 0x1F559Cu;
    {
        const bool branch_taken_0x1f559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f559c) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F55A4u;
label_1f55a4:
    // 0x1f55a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f55a8:
    // 0x1f55a8: 0x90430100  lbu         $v1, 0x100($v0)
    ctx->pc = 0x1f55a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_1f55ac:
    // 0x1f55ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1f55b0:
    if (ctx->pc == 0x1F55B0u) {
        ctx->pc = 0x1F55B4u;
        goto label_1f55b4;
    }
    ctx->pc = 0x1F55ACu;
    {
        const bool branch_taken_0x1f55ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f55ac) {
            ctx->pc = 0x1F55C4u;
            goto label_1f55c4;
        }
    }
    ctx->pc = 0x1F55B4u;
label_1f55b4:
    // 0x1f55b4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f55b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f55b8:
    // 0x1f55b8: 0x90a60101  lbu         $a2, 0x101($a1)
    ctx->pc = 0x1f55b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 257)));
label_1f55bc:
    // 0x1f55bc: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_1f55c0:
    if (ctx->pc == 0x1F55C0u) {
        ctx->pc = 0x1F55C4u;
        goto label_1f55c4;
    }
    ctx->pc = 0x1F55BCu;
    {
        const bool branch_taken_0x1f55bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f55bc) {
            ctx->pc = 0x1F562Cu;
            goto label_1f562c;
        }
    }
    ctx->pc = 0x1F55C4u;
label_1f55c4:
    // 0x1f55c4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f55c8:
    // 0x1f55c8: 0x90640280  lbu         $a0, 0x280($v1)
    ctx->pc = 0x1f55c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 640)));
label_1f55cc:
    // 0x1f55cc: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
label_1f55d0:
    if (ctx->pc == 0x1F55D0u) {
        ctx->pc = 0x1F55D4u;
        goto label_1f55d4;
    }
    ctx->pc = 0x1F55CCu;
    {
        const bool branch_taken_0x1f55cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f55cc) {
            ctx->pc = 0x1F562Cu;
            goto label_1f562c;
        }
    }
    ctx->pc = 0x1F55D4u;
label_1f55d4:
    // 0x1f55d4: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f55d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f55d8:
    // 0x1f55d8: 0x90c3028c  lbu         $v1, 0x28C($a2)
    ctx->pc = 0x1f55d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 652)));
label_1f55dc:
    // 0x1f55dc: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1f55e0:
    if (ctx->pc == 0x1F55E0u) {
        ctx->pc = 0x1F55E4u;
        goto label_1f55e4;
    }
    ctx->pc = 0x1F55DCu;
    {
        const bool branch_taken_0x1f55dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f55dc) {
            ctx->pc = 0x1F562Cu;
            goto label_1f562c;
        }
    }
    ctx->pc = 0x1F55E4u;
label_1f55e4:
    // 0x1f55e4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f55e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f55e8:
    // 0x1f55e8: 0x90a602d8  lbu         $a2, 0x2D8($a1)
    ctx->pc = 0x1f55e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 728)));
label_1f55ec:
    // 0x1f55ec: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
label_1f55f0:
    if (ctx->pc == 0x1F55F0u) {
        ctx->pc = 0x1F55F4u;
        goto label_1f55f4;
    }
    ctx->pc = 0x1F55ECu;
    {
        const bool branch_taken_0x1f55ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f55ec) {
            ctx->pc = 0x1F562Cu;
            goto label_1f562c;
        }
    }
    ctx->pc = 0x1F55F4u;
label_1f55f4:
    // 0x1f55f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f55f8:
    // 0x1f55f8: 0x90440100  lbu         $a0, 0x100($v0)
    ctx->pc = 0x1f55f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 256)));
label_1f55fc:
    // 0x1f55fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f5600:
    if (ctx->pc == 0x1F5600u) {
        ctx->pc = 0x1F5604u;
        goto label_1f5604;
    }
    ctx->pc = 0x1F55FCu;
    {
        const bool branch_taken_0x1f55fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f55fc) {
            ctx->pc = 0x1F5610u;
            goto label_1f5610;
        }
    }
    ctx->pc = 0x1F5604u;
label_1f5604:
    // 0x1f5604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5608:
    // 0x1f5608: 0x1000010c  b           . + 4 + (0x10C << 2)
label_1f560c:
    if (ctx->pc == 0x1F560Cu) {
        ctx->pc = 0x1F5610u;
        goto label_1f5610;
    }
    ctx->pc = 0x1F5608u;
    {
        const bool branch_taken_0x1f5608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5608) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5610u;
label_1f5610:
    // 0x1f5610: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5614:
    // 0x1f5614: 0x90430101  lbu         $v1, 0x101($v0)
    ctx->pc = 0x1f5614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 257)));
label_1f5618:
    // 0x1f5618: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f561c:
    if (ctx->pc == 0x1F561Cu) {
        ctx->pc = 0x1F5620u;
        goto label_1f5620;
    }
    ctx->pc = 0x1F5618u;
    {
        const bool branch_taken_0x1f5618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5618) {
            ctx->pc = 0x1F562Cu;
            goto label_1f562c;
        }
    }
    ctx->pc = 0x1F5620u;
label_1f5620:
    // 0x1f5620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5624:
    // 0x1f5624: 0x10000105  b           . + 4 + (0x105 << 2)
label_1f5628:
    if (ctx->pc == 0x1F5628u) {
        ctx->pc = 0x1F562Cu;
        goto label_1f562c;
    }
    ctx->pc = 0x1F5624u;
    {
        const bool branch_taken_0x1f5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5624) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F562Cu;
label_1f562c:
    // 0x1f562c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f562cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5630:
    // 0x1f5630: 0x90a600eb  lbu         $a2, 0xEB($a1)
    ctx->pc = 0x1f5630u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 235)));
label_1f5634:
    // 0x1f5634: 0x10c00039  beqz        $a2, . + 4 + (0x39 << 2)
label_1f5638:
    if (ctx->pc == 0x1F5638u) {
        ctx->pc = 0x1F563Cu;
        goto label_1f563c;
    }
    ctx->pc = 0x1F5634u;
    {
        const bool branch_taken_0x1f5634 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5634) {
            ctx->pc = 0x1F571Cu;
            goto label_1f571c;
        }
    }
    ctx->pc = 0x1F563Cu;
label_1f563c:
    // 0x1f563c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5640:
    // 0x1f5640: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5644:
    // 0x1f5644: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5648:
    // 0x1f5648: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x1f5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f564c:
    // 0x1f564c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f564cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5650:
    // 0x1f5650: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_1f5654:
    if (ctx->pc == 0x1F5654u) {
        ctx->pc = 0x1F5658u;
        goto label_1f5658;
    }
    ctx->pc = 0x1F5650u;
    {
        const bool branch_taken_0x1f5650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5650) {
            ctx->pc = 0x1F5710u;
            goto label_1f5710;
        }
    }
    ctx->pc = 0x1F5658u;
label_1f5658:
    // 0x1f5658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f565c:
    // 0x1f565c: 0xc063dd0  jal         func_18F740
label_1f5660:
    if (ctx->pc == 0x1F5660u) {
        ctx->pc = 0x1F5664u;
        goto label_1f5664;
    }
    ctx->pc = 0x1F565Cu;
    SET_GPR_U32(ctx, 31, 0x1F5664u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F565Cu, 0x1F5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5664u;
label_1f5664:
    // 0x1f5664: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5668:
    if (ctx->pc == 0x1F5668u) {
        ctx->pc = 0x1F566Cu;
        goto label_1f566c;
    }
    ctx->pc = 0x1F5664u;
    {
        const bool branch_taken_0x1f5664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5664) {
            ctx->pc = 0x1F5694u;
            goto label_1f5694;
        }
    }
    ctx->pc = 0x1F566Cu;
label_1f566c:
    // 0x1f566c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5670:
    // 0x1f5670: 0xc063dd0  jal         func_18F740
label_1f5674:
    if (ctx->pc == 0x1F5674u) {
        ctx->pc = 0x1F5678u;
        goto label_1f5678;
    }
    ctx->pc = 0x1F5670u;
    SET_GPR_U32(ctx, 31, 0x1F5678u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F5670u, 0x1F5678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5678u;
label_1f5678:
    // 0x1f5678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f567c:
    // 0x1f567c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f5680:
    if (ctx->pc == 0x1F5680u) {
        ctx->pc = 0x1F5684u;
        goto label_1f5684;
    }
    ctx->pc = 0x1F567Cu;
    {
        const bool branch_taken_0x1f567c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f567c) {
            ctx->pc = 0x1F5694u;
            goto label_1f5694;
        }
    }
    ctx->pc = 0x1F5684u;
label_1f5684:
    // 0x1f5684: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5688:
    // 0x1f5688: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f5688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f568c:
    // 0x1f568c: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1f5690:
    if (ctx->pc == 0x1F5690u) {
        ctx->pc = 0x1F5694u;
        goto label_1f5694;
    }
    ctx->pc = 0x1F568Cu;
    {
        const bool branch_taken_0x1f568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f568c) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5694u;
label_1f5694:
    // 0x1f5694: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5698:
    // 0x1f5698: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f5698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f569c:
    // 0x1f569c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f56a0:
    // 0x1f56a0: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x1f56a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_1f56a4:
    // 0x1f56a4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f56a8:
    // 0x1f56a8: 0xa06000eb  sb          $zero, 0xEB($v1)
    ctx->pc = 0x1f56a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 235), (uint8_t)GPR_U32(ctx, 0));
label_1f56ac:
    // 0x1f56ac: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f56acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f56b0:
    // 0x1f56b0: 0xc07e254  jal         func_1F8950
label_1f56b4:
    if (ctx->pc == 0x1F56B4u) {
        ctx->pc = 0x1F56B8u;
        goto label_1f56b8;
    }
    ctx->pc = 0x1F56B0u;
    SET_GPR_U32(ctx, 31, 0x1F56B8u);
    ctx->pc = 0x1F8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8950u, 0x1F56B0u, 0x1F56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56B8u;
label_1f56b8:
    // 0x1f56b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f56b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f56bc:
    // 0x1f56bc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f56c0:
    // 0x1f56c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f56c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f56c4:
    // 0x1f56c4: 0xc07e26c  jal         func_1F89B0
label_1f56c8:
    if (ctx->pc == 0x1F56C8u) {
        ctx->pc = 0x1F56CCu;
        goto label_1f56cc;
    }
    ctx->pc = 0x1F56C4u;
    SET_GPR_U32(ctx, 31, 0x1F56CCu);
    ctx->pc = 0x1F89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B0u, 0x1F56C4u, 0x1F56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56CCu;
label_1f56cc:
    // 0x1f56cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f56d0:
    // 0x1f56d0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f56d4:
    // 0x1f56d4: 0x905e00f8  lbu         $fp, 0xF8($v0)
    ctx->pc = 0x1f56d4u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 248)));
label_1f56d8:
    // 0x1f56d8: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_1f56dc:
    if (ctx->pc == 0x1F56DCu) {
        ctx->pc = 0x1F56E0u;
        goto label_1f56e0;
    }
    ctx->pc = 0x1F56D8u;
    {
        const bool branch_taken_0x1f56d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f56d8) {
            ctx->pc = 0x1F56FCu;
            goto label_1f56fc;
        }
    }
    ctx->pc = 0x1F56E0u;
label_1f56e0:
    // 0x1f56e0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f56e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f56e4:
    // 0x1f56e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f56e8:
    // 0x1f56e8: 0xc07ddf4  jal         func_1F77D0
label_1f56ec:
    if (ctx->pc == 0x1F56ECu) {
        ctx->pc = 0x1F56F0u;
        goto label_1f56f0;
    }
    ctx->pc = 0x1F56E8u;
    SET_GPR_U32(ctx, 31, 0x1F56F0u);
    ctx->pc = 0x1F77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77D0u, 0x1F56E8u, 0x1F56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56F0u;
label_1f56f0:
    // 0x1f56f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f56f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f56f4:
    // 0x1f56f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f56f8:
    if (ctx->pc == 0x1F56F8u) {
        ctx->pc = 0x1F56FCu;
        goto label_1f56fc;
    }
    ctx->pc = 0x1F56F4u;
    {
        const bool branch_taken_0x1f56f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f56f4) {
            ctx->pc = 0x1F5710u;
            goto label_1f5710;
        }
    }
    ctx->pc = 0x1F56FCu;
label_1f56fc:
    // 0x1f56fc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5700:
    // 0x1f5700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5704:
    // 0x1f5704: 0xc07de14  jal         func_1F7850
label_1f5708:
    if (ctx->pc == 0x1F5708u) {
        ctx->pc = 0x1F570Cu;
        goto label_1f570c;
    }
    ctx->pc = 0x1F5704u;
    SET_GPR_U32(ctx, 31, 0x1F570Cu);
    ctx->pc = 0x1F7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7850u, 0x1F5704u, 0x1F570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F570Cu;
label_1f570c:
    // 0x1f570c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5710:
    // 0x1f5710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5714:
    // 0x1f5714: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1f5718:
    if (ctx->pc == 0x1F5718u) {
        ctx->pc = 0x1F571Cu;
        goto label_1f571c;
    }
    ctx->pc = 0x1F5714u;
    {
        const bool branch_taken_0x1f5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5714) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F571Cu;
label_1f571c:
    // 0x1f571c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5720:
    // 0x1f5720: 0x90c200f8  lbu         $v0, 0xF8($a2)
    ctx->pc = 0x1f5720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 248)));
label_1f5724:
    // 0x1f5724: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_1f5728:
    if (ctx->pc == 0x1F5728u) {
        ctx->pc = 0x1F572Cu;
        goto label_1f572c;
    }
    ctx->pc = 0x1F5724u;
    {
        const bool branch_taken_0x1f5724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5724) {
            ctx->pc = 0x1F5918u;
            goto label_1f5918;
        }
    }
    ctx->pc = 0x1F572Cu;
label_1f572c:
    // 0x1f572c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5730:
    // 0x1f5730: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5734:
    // 0x1f5734: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1f5734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5738:
    // 0x1f5738: 0xc4e000d4  lwc1        $f0, 0xD4($a3)
    ctx->pc = 0x1f5738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f573c:
    // 0x1f573c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f573cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5740:
    // 0x1f5740: 0x45010075  bc1t        . + 4 + (0x75 << 2)
label_1f5744:
    if (ctx->pc == 0x1F5744u) {
        ctx->pc = 0x1F5748u;
        goto label_1f5748;
    }
    ctx->pc = 0x1F5740u;
    {
        const bool branch_taken_0x1f5740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5740) {
            ctx->pc = 0x1F5918u;
            goto label_1f5918;
        }
    }
    ctx->pc = 0x1F5748u;
label_1f5748:
    // 0x1f5748: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f574c:
    // 0x1f574c: 0x904400b4  lbu         $a0, 0xB4($v0)
    ctx->pc = 0x1f574cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
label_1f5750:
    // 0x1f5750: 0x1080006e  beqz        $a0, . + 4 + (0x6E << 2)
label_1f5754:
    if (ctx->pc == 0x1F5754u) {
        ctx->pc = 0x1F5758u;
        goto label_1f5758;
    }
    ctx->pc = 0x1F5750u;
    {
        const bool branch_taken_0x1f5750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5750) {
            ctx->pc = 0x1F590Cu;
            goto label_1f590c;
        }
    }
    ctx->pc = 0x1F5758u;
label_1f5758:
    // 0x1f5758: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f575c:
    // 0x1f575c: 0x93c200f9  lbu         $v0, 0xF9($fp)
    ctx->pc = 0x1f575cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 249)));
label_1f5760:
    // 0x1f5760: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1f5764:
    if (ctx->pc == 0x1F5764u) {
        ctx->pc = 0x1F5768u;
        goto label_1f5768;
    }
    ctx->pc = 0x1F5760u;
    {
        const bool branch_taken_0x1f5760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5760) {
            ctx->pc = 0x1F5814u;
            goto label_1f5814;
        }
    }
    ctx->pc = 0x1F5768u;
label_1f5768:
    // 0x1f5768: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f576c:
    // 0x1f576c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f576cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5770:
    // 0x1f5770: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x1f5770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_1f5774:
    // 0x1f5774: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f5774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5778:
    // 0x1f5778: 0x8ca300fc  lw          $v1, 0xFC($a1)
    ctx->pc = 0x1f5778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
label_1f577c:
    // 0x1f577c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5780:
    // 0x1f5780: 0xc04a9c0  jal         func_12A700
label_1f5784:
    if (ctx->pc == 0x1F5784u) {
        ctx->pc = 0x1F5788u;
        goto label_1f5788;
    }
    ctx->pc = 0x1F5780u;
    SET_GPR_U32(ctx, 31, 0x1F5788u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F5780u, 0x1F5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5788u;
label_1f5788:
    // 0x1f5788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f578c:
    // 0x1f578c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5790:
    // 0x1f5790: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
label_1f5794:
    if (ctx->pc == 0x1F5794u) {
        ctx->pc = 0x1F5798u;
        goto label_1f5798;
    }
    ctx->pc = 0x1F5790u;
    {
        const bool branch_taken_0x1f5790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5790) {
            ctx->pc = 0x1F5814u;
            goto label_1f5814;
        }
    }
    ctx->pc = 0x1F5798u;
label_1f5798:
    // 0x1f5798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f579c:
    // 0x1f579c: 0xc063dd0  jal         func_18F740
label_1f57a0:
    if (ctx->pc == 0x1F57A0u) {
        ctx->pc = 0x1F57A4u;
        goto label_1f57a4;
    }
    ctx->pc = 0x1F579Cu;
    SET_GPR_U32(ctx, 31, 0x1F57A4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F579Cu, 0x1F57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57A4u;
label_1f57a4:
    // 0x1f57a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f57a8:
    // 0x1f57a8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1f57ac:
    if (ctx->pc == 0x1F57ACu) {
        ctx->pc = 0x1F57B0u;
        goto label_1f57b0;
    }
    ctx->pc = 0x1F57A8u;
    {
        const bool branch_taken_0x1f57a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f57a8) {
            ctx->pc = 0x1F57D8u;
            goto label_1f57d8;
        }
    }
    ctx->pc = 0x1F57B0u;
label_1f57b0:
    // 0x1f57b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f57b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f57b4:
    // 0x1f57b4: 0xc063dd0  jal         func_18F740
label_1f57b8:
    if (ctx->pc == 0x1F57B8u) {
        ctx->pc = 0x1F57BCu;
        goto label_1f57bc;
    }
    ctx->pc = 0x1F57B4u;
    SET_GPR_U32(ctx, 31, 0x1F57BCu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F57B4u, 0x1F57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57BCu;
label_1f57bc:
    // 0x1f57bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f57bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f57c0:
    // 0x1f57c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f57c4:
    if (ctx->pc == 0x1F57C4u) {
        ctx->pc = 0x1F57C8u;
        goto label_1f57c8;
    }
    ctx->pc = 0x1F57C0u;
    {
        const bool branch_taken_0x1f57c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f57c0) {
            ctx->pc = 0x1F57D8u;
            goto label_1f57d8;
        }
    }
    ctx->pc = 0x1F57C8u;
label_1f57c8:
    // 0x1f57c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f57cc:
    // 0x1f57cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f57ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f57d0:
    // 0x1f57d0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1f57d4:
    if (ctx->pc == 0x1F57D4u) {
        ctx->pc = 0x1F57D8u;
        goto label_1f57d8;
    }
    ctx->pc = 0x1F57D0u;
    {
        const bool branch_taken_0x1f57d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f57d0) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F57D8u;
label_1f57d8:
    // 0x1f57d8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f57dc:
    // 0x1f57dc: 0xa0c000f9  sb          $zero, 0xF9($a2)
    ctx->pc = 0x1f57dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 249), (uint8_t)GPR_U32(ctx, 0));
label_1f57e0:
    // 0x1f57e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f57e4:
    // 0x1f57e4: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1f57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
label_1f57e8:
    // 0x1f57e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f57e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f57ec:
    // 0x1f57ec: 0xc07e26c  jal         func_1F89B0
label_1f57f0:
    if (ctx->pc == 0x1F57F0u) {
        ctx->pc = 0x1F57F4u;
        goto label_1f57f4;
    }
    ctx->pc = 0x1F57ECu;
    SET_GPR_U32(ctx, 31, 0x1F57F4u);
    ctx->pc = 0x1F89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B0u, 0x1F57ECu, 0x1F57F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57F4u;
label_1f57f4:
    // 0x1f57f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f57f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f57f8:
    // 0x1f57f8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f57fc:
    // 0x1f57fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f57fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5800:
    // 0x1f5800: 0xc07ddf4  jal         func_1F77D0
label_1f5804:
    if (ctx->pc == 0x1F5804u) {
        ctx->pc = 0x1F5808u;
        goto label_1f5808;
    }
    ctx->pc = 0x1F5800u;
    SET_GPR_U32(ctx, 31, 0x1F5808u);
    ctx->pc = 0x1F77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77D0u, 0x1F5800u, 0x1F5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5808u;
label_1f5808:
    // 0x1f5808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f580c:
    // 0x1f580c: 0x10000042  b           . + 4 + (0x42 << 2)
label_1f5810:
    if (ctx->pc == 0x1F5810u) {
        ctx->pc = 0x1F5814u;
        goto label_1f5814;
    }
    ctx->pc = 0x1F580Cu;
    {
        const bool branch_taken_0x1f580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f580c) {
            ctx->pc = 0x1F5918u;
            goto label_1f5918;
        }
    }
    ctx->pc = 0x1F5814u;
label_1f5814:
    // 0x1f5814: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5818:
    // 0x1f5818: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f5818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f581c:
    // 0x1f581c: 0x24820104  addiu       $v0, $a0, 0x104
    ctx->pc = 0x1f581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
label_1f5820:
    // 0x1f5820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5824:
    // 0x1f5824: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x1f5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1f5828:
    // 0x1f5828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f582c:
    // 0x1f582c: 0xc04a9c0  jal         func_12A700
label_1f5830:
    if (ctx->pc == 0x1F5830u) {
        ctx->pc = 0x1F5834u;
        goto label_1f5834;
    }
    ctx->pc = 0x1F582Cu;
    SET_GPR_U32(ctx, 31, 0x1F5834u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F582Cu, 0x1F5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5834u;
label_1f5834:
    // 0x1f5834: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f5834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5838:
    // 0x1f5838: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f5838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f583c:
    // 0x1f583c: 0x1485001e  bne         $a0, $a1, . + 4 + (0x1E << 2)
label_1f5840:
    if (ctx->pc == 0x1F5840u) {
        ctx->pc = 0x1F5844u;
        goto label_1f5844;
    }
    ctx->pc = 0x1F583Cu;
    {
        const bool branch_taken_0x1f583c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f583c) {
            ctx->pc = 0x1F58B8u;
            goto label_1f58b8;
        }
    }
    ctx->pc = 0x1F5844u;
label_1f5844:
    // 0x1f5844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5848:
    // 0x1f5848: 0xc063dd0  jal         func_18F740
label_1f584c:
    if (ctx->pc == 0x1F584Cu) {
        ctx->pc = 0x1F5850u;
        goto label_1f5850;
    }
    ctx->pc = 0x1F5848u;
    SET_GPR_U32(ctx, 31, 0x1F5850u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F5848u, 0x1F5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5850u;
label_1f5850:
    // 0x1f5850: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5854:
    // 0x1f5854: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1f5858:
    if (ctx->pc == 0x1F5858u) {
        ctx->pc = 0x1F585Cu;
        goto label_1f585c;
    }
    ctx->pc = 0x1F5854u;
    {
        const bool branch_taken_0x1f5854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5854) {
            ctx->pc = 0x1F5880u;
            goto label_1f5880;
        }
    }
    ctx->pc = 0x1F585Cu;
label_1f585c:
    // 0x1f585c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5860:
    // 0x1f5860: 0xc063dd0  jal         func_18F740
label_1f5864:
    if (ctx->pc == 0x1F5864u) {
        ctx->pc = 0x1F5868u;
        goto label_1f5868;
    }
    ctx->pc = 0x1F5860u;
    SET_GPR_U32(ctx, 31, 0x1F5868u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F5860u, 0x1F5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5868u;
label_1f5868:
    // 0x1f5868: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f586c:
    // 0x1f586c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f5870:
    if (ctx->pc == 0x1F5870u) {
        ctx->pc = 0x1F5874u;
        goto label_1f5874;
    }
    ctx->pc = 0x1F586Cu;
    {
        const bool branch_taken_0x1f586c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f586c) {
            ctx->pc = 0x1F5880u;
            goto label_1f5880;
        }
    }
    ctx->pc = 0x1F5874u;
label_1f5874:
    // 0x1f5874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5878:
    // 0x1f5878: 0x10000070  b           . + 4 + (0x70 << 2)
label_1f587c:
    if (ctx->pc == 0x1F587Cu) {
        ctx->pc = 0x1F5880u;
        goto label_1f5880;
    }
    ctx->pc = 0x1F5878u;
    {
        const bool branch_taken_0x1f5878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5878) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5880u;
label_1f5880:
    // 0x1f5880: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5884:
    // 0x1f5884: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1f5884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
label_1f5888:
    // 0x1f5888: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x1f5888u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f588c:
    // 0x1f588c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f5890:
    // 0x1f5890: 0xc07e26c  jal         func_1F89B0
label_1f5894:
    if (ctx->pc == 0x1F5894u) {
        ctx->pc = 0x1F5898u;
        goto label_1f5898;
    }
    ctx->pc = 0x1F5890u;
    SET_GPR_U32(ctx, 31, 0x1F5898u);
    ctx->pc = 0x1F89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B0u, 0x1F5890u, 0x1F5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5898u;
label_1f5898:
    // 0x1f5898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f589c:
    // 0x1f589c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f58a0:
    // 0x1f58a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f58a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f58a4:
    // 0x1f58a4: 0xc07ddf4  jal         func_1F77D0
label_1f58a8:
    if (ctx->pc == 0x1F58A8u) {
        ctx->pc = 0x1F58ACu;
        goto label_1f58ac;
    }
    ctx->pc = 0x1F58A4u;
    SET_GPR_U32(ctx, 31, 0x1F58ACu);
    ctx->pc = 0x1F77D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77D0u, 0x1F58A4u, 0x1F58ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58ACu;
label_1f58ac:
    // 0x1f58ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f58acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f58b0:
    // 0x1f58b0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1f58b4:
    if (ctx->pc == 0x1F58B4u) {
        ctx->pc = 0x1F58B8u;
        goto label_1f58b8;
    }
    ctx->pc = 0x1F58B0u;
    {
        const bool branch_taken_0x1f58b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f58b0) {
            ctx->pc = 0x1F5918u;
            goto label_1f5918;
        }
    }
    ctx->pc = 0x1F58B8u;
label_1f58b8:
    // 0x1f58b8: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_1f58bc:
    if (ctx->pc == 0x1F58BCu) {
        ctx->pc = 0x1F58C0u;
        goto label_1f58c0;
    }
    ctx->pc = 0x1F58B8u;
    {
        const bool branch_taken_0x1f58b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f58b8) {
            ctx->pc = 0x1F58D0u;
            goto label_1f58d0;
        }
    }
    ctx->pc = 0x1F58C0u;
label_1f58c0:
    // 0x1f58c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f58c4:
    // 0x1f58c4: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1f58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
label_1f58c8:
    // 0x1f58c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f58cc:
    if (ctx->pc == 0x1F58CCu) {
        ctx->pc = 0x1F58D0u;
        goto label_1f58d0;
    }
    ctx->pc = 0x1F58C8u;
    {
        const bool branch_taken_0x1f58c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f58c8) {
            ctx->pc = 0x1F58E0u;
            goto label_1f58e0;
        }
    }
    ctx->pc = 0x1F58D0u;
label_1f58d0:
    // 0x1f58d0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f58d4:
    // 0x1f58d4: 0x8c6500fc  lw          $a1, 0xFC($v1)
    ctx->pc = 0x1f58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1f58d8:
    // 0x1f58d8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1f58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f58dc:
    // 0x1f58dc: 0xac6400fc  sw          $a0, 0xFC($v1)
    ctx->pc = 0x1f58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 4));
label_1f58e0:
    // 0x1f58e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f58e4:
    // 0x1f58e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f58e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f58e8:
    // 0x1f58e8: 0xc07e5e8  jal         func_1F97A0
label_1f58ec:
    if (ctx->pc == 0x1F58ECu) {
        ctx->pc = 0x1F58F0u;
        goto label_1f58f0;
    }
    ctx->pc = 0x1F58E8u;
    SET_GPR_U32(ctx, 31, 0x1F58F0u);
    ctx->pc = 0x1F97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97A0u, 0x1F58E8u, 0x1F58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58F0u;
label_1f58f0:
    // 0x1f58f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f58f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f58f4:
    // 0x1f58f4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f58f8:
    // 0x1f58f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f58fc:
    // 0x1f58fc: 0xc07de14  jal         func_1F7850
label_1f5900:
    if (ctx->pc == 0x1F5900u) {
        ctx->pc = 0x1F5904u;
        goto label_1f5904;
    }
    ctx->pc = 0x1F58FCu;
    SET_GPR_U32(ctx, 31, 0x1F5904u);
    ctx->pc = 0x1F7850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7850u, 0x1F58FCu, 0x1F5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5904u;
label_1f5904:
    // 0x1f5904: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f5908:
    if (ctx->pc == 0x1F5908u) {
        ctx->pc = 0x1F590Cu;
        goto label_1f590c;
    }
    ctx->pc = 0x1F5904u;
    {
        const bool branch_taken_0x1f5904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5904) {
            ctx->pc = 0x1F5918u;
            goto label_1f5918;
        }
    }
    ctx->pc = 0x1F590Cu;
label_1f590c:
    // 0x1f590c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f590cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5910:
    // 0x1f5910: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1f5914:
    if (ctx->pc == 0x1F5914u) {
        ctx->pc = 0x1F5918u;
        goto label_1f5918;
    }
    ctx->pc = 0x1F5910u;
    {
        const bool branch_taken_0x1f5910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5910) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5918u;
label_1f5918:
    // 0x1f5918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f591c:
    // 0x1f591c: 0xc063dd0  jal         func_18F740
label_1f5920:
    if (ctx->pc == 0x1F5920u) {
        ctx->pc = 0x1F5924u;
        goto label_1f5924;
    }
    ctx->pc = 0x1F591Cu;
    SET_GPR_U32(ctx, 31, 0x1F5924u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F591Cu, 0x1F5924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5924u;
label_1f5924:
    // 0x1f5924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5928:
    // 0x1f5928: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1f592c:
    if (ctx->pc == 0x1F592Cu) {
        ctx->pc = 0x1F5930u;
        goto label_1f5930;
    }
    ctx->pc = 0x1F5928u;
    {
        const bool branch_taken_0x1f5928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5928) {
            ctx->pc = 0x1F59A0u;
            goto label_1f59a0;
        }
    }
    ctx->pc = 0x1F5930u;
label_1f5930:
    // 0x1f5930: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f5934:
    // 0x1f5934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5938:
    // 0x1f5938: 0xc09ac08  jal         func_26B020
label_1f593c:
    if (ctx->pc == 0x1F593Cu) {
        ctx->pc = 0x1F5940u;
        goto label_1f5940;
    }
    ctx->pc = 0x1F5938u;
    SET_GPR_U32(ctx, 31, 0x1F5940u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1F5938u, 0x1F5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5940u;
label_1f5940:
    // 0x1f5940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5944:
    // 0x1f5944: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5948:
    // 0x1f5948: 0x90a200f8  lbu         $v0, 0xF8($a1)
    ctx->pc = 0x1f5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 248)));
label_1f594c:
    // 0x1f594c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f5950:
    if (ctx->pc == 0x1F5950u) {
        ctx->pc = 0x1F5954u;
        goto label_1f5954;
    }
    ctx->pc = 0x1F594Cu;
    {
        const bool branch_taken_0x1f594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f594c) {
            ctx->pc = 0x1F5968u;
            goto label_1f5968;
        }
    }
    ctx->pc = 0x1F5954u;
label_1f5954:
    // 0x1f5954: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5958:
    // 0x1f5958: 0x8cc20278  lw          $v0, 0x278($a2)
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
label_1f595c:
    // 0x1f595c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f595cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5960:
    // 0x1f5960: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f5964:
    if (ctx->pc == 0x1F5964u) {
        ctx->pc = 0x1F5968u;
        goto label_1f5968;
    }
    ctx->pc = 0x1F5960u;
    {
        const bool branch_taken_0x1f5960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5960) {
            ctx->pc = 0x1F5974u;
            goto label_1f5974;
        }
    }
    ctx->pc = 0x1F5968u;
label_1f5968:
    // 0x1f5968: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f596c:
    // 0x1f596c: 0x8c850274  lw          $a1, 0x274($a0)
    ctx->pc = 0x1f596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_1f5970:
    // 0x1f5970: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f5970u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5974:
    // 0x1f5974: 0xafb600b4  sw          $s6, 0xB4($sp)
    ctx->pc = 0x1f5974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 22));
label_1f5978:
    // 0x1f5978: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f5978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f597c:
    // 0x1f597c: 0x8c42026c  lw          $v0, 0x26C($v0)
    ctx->pc = 0x1f597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_1f5980:
    // 0x1f5980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5984:
    // 0x1f5984: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x1f5984u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f5988:
    // 0x1f5988: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f5988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f598c:
    // 0x1f598c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f598cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5990:
    // 0x1f5990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5994:
    // 0x1f5994: 0xc0af03c  jal         func_2BC0F0
label_1f5998:
    if (ctx->pc == 0x1F5998u) {
        ctx->pc = 0x1F599Cu;
        goto label_1f599c;
    }
    ctx->pc = 0x1F5994u;
    SET_GPR_U32(ctx, 31, 0x1F599Cu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1F5994u, 0x1F599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F599Cu;
label_1f599c:
    // 0x1f599c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f599cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f59a0:
    // 0x1f59a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f59a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f59a4:
    // 0x1f59a4: 0xc063dd0  jal         func_18F740
label_1f59a8:
    if (ctx->pc == 0x1F59A8u) {
        ctx->pc = 0x1F59ACu;
        goto label_1f59ac;
    }
    ctx->pc = 0x1F59A4u;
    SET_GPR_U32(ctx, 31, 0x1F59ACu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F59A4u, 0x1F59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59ACu;
label_1f59ac:
    // 0x1f59ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1f59b0:
    if (ctx->pc == 0x1F59B0u) {
        ctx->pc = 0x1F59B4u;
        goto label_1f59b4;
    }
    ctx->pc = 0x1F59ACu;
    {
        const bool branch_taken_0x1f59ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f59ac) {
            ctx->pc = 0x1F5A28u;
            goto label_1f5a28;
        }
    }
    ctx->pc = 0x1F59B4u;
label_1f59b4:
    // 0x1f59b4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1f59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f59b8:
    // 0x1f59b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f59b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f59bc:
    // 0x1f59bc: 0xc09ac08  jal         func_26B020
label_1f59c0:
    if (ctx->pc == 0x1F59C0u) {
        ctx->pc = 0x1F59C4u;
        goto label_1f59c4;
    }
    ctx->pc = 0x1F59BCu;
    SET_GPR_U32(ctx, 31, 0x1F59C4u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1F59BCu, 0x1F59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59C4u;
label_1f59c4:
    // 0x1f59c4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f59c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f59c8:
    // 0x1f59c8: 0x90a600f8  lbu         $a2, 0xF8($a1)
    ctx->pc = 0x1f59c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 248)));
label_1f59cc:
    // 0x1f59cc: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x1f59ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1f59d0:
    // 0x1f59d0: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x1f59d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f59d4:
    // 0x1f59d4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f59d8:
    if (ctx->pc == 0x1F59D8u) {
        ctx->pc = 0x1F59DCu;
        goto label_1f59dc;
    }
    ctx->pc = 0x1F59D4u;
    {
        const bool branch_taken_0x1f59d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f59d4) {
            ctx->pc = 0x1F59F0u;
            goto label_1f59f0;
        }
    }
    ctx->pc = 0x1F59DCu;
label_1f59dc:
    // 0x1f59dc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f59e0:
    // 0x1f59e0: 0x8c440278  lw          $a0, 0x278($v0)
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_1f59e4:
    // 0x1f59e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f59e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f59e8:
    // 0x1f59e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f59ec:
    if (ctx->pc == 0x1F59ECu) {
        ctx->pc = 0x1F59F0u;
        goto label_1f59f0;
    }
    ctx->pc = 0x1F59E8u;
    {
        const bool branch_taken_0x1f59e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f59e8) {
            ctx->pc = 0x1F59FCu;
            goto label_1f59fc;
        }
    }
    ctx->pc = 0x1F59F0u;
label_1f59f0:
    // 0x1f59f0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1f59f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f59f4:
    // 0x1f59f4: 0x8ca20274  lw          $v0, 0x274($a1)
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 628)));
label_1f59f8:
    // 0x1f59f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f59f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f59fc:
    // 0x1f59fc: 0xafb500a4  sw          $s5, 0xA4($sp)
    ctx->pc = 0x1f59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 21));
label_1f5a00:
    // 0x1f5a00: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1f5a04:
    // 0x1f5a04: 0x8c620270  lw          $v0, 0x270($v1)
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
label_1f5a08:
    // 0x1f5a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a0c:
    // 0x1f5a0c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1f5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f5a10:
    // 0x1f5a10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f5a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a14:
    // 0x1f5a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5a18:
    // 0x1f5a18: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f5a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a1c:
    // 0x1f5a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a20:
    // 0x1f5a20: 0xc0af03c  jal         func_2BC0F0
label_1f5a24:
    if (ctx->pc == 0x1F5A24u) {
        ctx->pc = 0x1F5A28u;
        goto label_1f5a28;
    }
    ctx->pc = 0x1F5A20u;
    SET_GPR_U32(ctx, 31, 0x1F5A28u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1F5A20u, 0x1F5A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A28u;
label_1f5a28:
    // 0x1f5a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5a2c:
    // 0x1f5a2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f5a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a30:
    // 0x1f5a30: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f5a34:
    if (ctx->pc == 0x1F5A34u) {
        ctx->pc = 0x1F5A38u;
        goto label_1f5a38;
    }
    ctx->pc = 0x1F5A30u;
    {
        const bool branch_taken_0x1f5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a30) {
            ctx->pc = 0x1F5A3Cu;
            goto label_1f5a3c;
        }
    }
    ctx->pc = 0x1F5A38u;
label_1f5a38:
    // 0x1f5a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a3c:
    // 0x1f5a3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f5a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f5a40:
    // 0x1f5a40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f5a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5a44:
    // 0x1f5a44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f5a44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5a48:
    // 0x1f5a48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5a4c:
    // 0x1f5a4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5a50:
    // 0x1f5a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5a54:
    // 0x1f5a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5a58:
    // 0x1f5a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5a5c:
    // 0x1f5a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5a60:
    // 0x1f5a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5a64:
    // 0x1f5a64: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1f5a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1f5a68:
    // 0x1f5a68: 0x3e00008  jr          $ra
label_1f5a6c:
    if (ctx->pc == 0x1F5A6Cu) {
        ctx->pc = 0x1F5A70u;
        goto label_1f5a70;
    }
    ctx->pc = 0x1F5A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5A70u;
label_1f5a70:
    // 0x1f5a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5a74:
    // 0x1f5a74: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_1f5a78:
    // 0x1f5a78: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x1f5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
label_1f5a7c:
    // 0x1f5a7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f5a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f5a80:
    // 0x1f5a80: 0x3e00008  jr          $ra
label_1f5a84:
    if (ctx->pc == 0x1F5A84u) {
        ctx->pc = 0x1F5A88u;
        goto label_1f5a88;
    }
    ctx->pc = 0x1F5A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5A88u;
label_1f5a88:
    // 0x1f5a88: 0x0  nop
    ctx->pc = 0x1f5a88u;
    // NOP
label_1f5a8c:
    // 0x1f5a8c: 0x0  nop
    ctx->pc = 0x1f5a8cu;
    // NOP
label_1f5a90:
    // 0x1f5a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f5a94:
    // 0x1f5a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5a98:
    // 0x1f5a98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f5a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f5a9c:
    // 0x1f5a9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5aa0:
    // 0x1f5aa0: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x1f5aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_1f5aa4:
    // 0x1f5aa4: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_1f5aa8:
    if (ctx->pc == 0x1F5AA8u) {
        ctx->pc = 0x1F5AACu;
        goto label_1f5aac;
    }
    ctx->pc = 0x1F5AA4u;
    {
        const bool branch_taken_0x1f5aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5aa4) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5AACu;
label_1f5aac:
    // 0x1f5aac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ab0:
    // 0x1f5ab0: 0x90630101  lbu         $v1, 0x101($v1)
    ctx->pc = 0x1f5ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
label_1f5ab4:
    // 0x1f5ab4: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_1f5ab8:
    if (ctx->pc == 0x1F5AB8u) {
        ctx->pc = 0x1F5ABCu;
        goto label_1f5abc;
    }
    ctx->pc = 0x1F5AB4u;
    {
        const bool branch_taken_0x1f5ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ab4) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5ABCu;
label_1f5abc:
    // 0x1f5abc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ac0:
    // 0x1f5ac0: 0x906300eb  lbu         $v1, 0xEB($v1)
    ctx->pc = 0x1f5ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 235)));
label_1f5ac4:
    // 0x1f5ac4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1f5ac8:
    if (ctx->pc == 0x1F5AC8u) {
        ctx->pc = 0x1F5ACCu;
        goto label_1f5acc;
    }
    ctx->pc = 0x1F5AC4u;
    {
        const bool branch_taken_0x1f5ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ac4) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5ACCu;
label_1f5acc:
    // 0x1f5acc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ad0:
    // 0x1f5ad0: 0x906300e0  lbu         $v1, 0xE0($v1)
    ctx->pc = 0x1f5ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
label_1f5ad4:
    // 0x1f5ad4: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_1f5ad8:
    if (ctx->pc == 0x1F5AD8u) {
        ctx->pc = 0x1F5ADCu;
        goto label_1f5adc;
    }
    ctx->pc = 0x1F5AD4u;
    {
        const bool branch_taken_0x1f5ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ad4) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5ADCu;
label_1f5adc:
    // 0x1f5adc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ae0:
    // 0x1f5ae0: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5ae4:
    // 0x1f5ae4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1f5ae8:
    if (ctx->pc == 0x1F5AE8u) {
        ctx->pc = 0x1F5AECu;
        goto label_1f5aec;
    }
    ctx->pc = 0x1F5AE4u;
    {
        const bool branch_taken_0x1f5ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ae4) {
            ctx->pc = 0x1F5B38u;
            goto label_1f5b38;
        }
    }
    ctx->pc = 0x1F5AECu;
label_1f5aec:
    // 0x1f5aec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5af0:
    // 0x1f5af0: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5af4:
    // 0x1f5af4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5af8:
    // 0x1f5af8: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5afc:
    // 0x1f5afc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5b00:
    // 0x1f5b00: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5b04:
    if (ctx->pc == 0x1F5B04u) {
        ctx->pc = 0x1F5B08u;
        goto label_1f5b08;
    }
    ctx->pc = 0x1F5B00u;
    {
        const bool branch_taken_0x1f5b00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5b00) {
            ctx->pc = 0x1F5B38u;
            goto label_1f5b38;
        }
    }
    ctx->pc = 0x1F5B08u;
label_1f5b08:
    // 0x1f5b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b0c:
    // 0x1f5b0c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5b10:
    // 0x1f5b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b14:
    // 0x1f5b14: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5b18:
    // 0x1f5b18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5b1c:
    // 0x1f5b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b20:
    // 0x1f5b20: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5b24:
    // 0x1f5b24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b28:
    // 0x1f5b28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b2c:
    // 0x1f5b2c: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x1f5b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
label_1f5b30:
    // 0x1f5b30: 0xc07dbbc  jal         func_1F6EF0
label_1f5b34:
    if (ctx->pc == 0x1F5B34u) {
        ctx->pc = 0x1F5B38u;
        goto label_1f5b38;
    }
    ctx->pc = 0x1F5B30u;
    SET_GPR_U32(ctx, 31, 0x1F5B38u);
    ctx->pc = 0x1F6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EF0u, 0x1F5B30u, 0x1F5B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B38u;
label_1f5b38:
    // 0x1f5b38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b3c:
    // 0x1f5b3c: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f5b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
label_1f5b40:
    // 0x1f5b40: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1f5b44:
    if (ctx->pc == 0x1F5B44u) {
        ctx->pc = 0x1F5B48u;
        goto label_1f5b48;
    }
    ctx->pc = 0x1F5B40u;
    {
        const bool branch_taken_0x1f5b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b40) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5B48u;
label_1f5b48:
    // 0x1f5b48: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b4c:
    // 0x1f5b4c: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5b50:
    // 0x1f5b50: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1f5b54:
    if (ctx->pc == 0x1F5B54u) {
        ctx->pc = 0x1F5B58u;
        goto label_1f5b58;
    }
    ctx->pc = 0x1F5B50u;
    {
        const bool branch_taken_0x1f5b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b50) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5B58u;
label_1f5b58:
    // 0x1f5b58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b5c:
    // 0x1f5b5c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5b60:
    // 0x1f5b60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b64:
    // 0x1f5b64: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5b68:
    // 0x1f5b68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5b6c:
    // 0x1f5b6c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5b70:
    if (ctx->pc == 0x1F5B70u) {
        ctx->pc = 0x1F5B74u;
        goto label_1f5b74;
    }
    ctx->pc = 0x1F5B6Cu;
    {
        const bool branch_taken_0x1f5b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5b6c) {
            ctx->pc = 0x1F5BA4u;
            goto label_1f5ba4;
        }
    }
    ctx->pc = 0x1F5B74u;
label_1f5b74:
    // 0x1f5b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b78:
    // 0x1f5b78: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5b7c:
    // 0x1f5b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b80:
    // 0x1f5b80: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5b84:
    // 0x1f5b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5b88:
    // 0x1f5b88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b8c:
    // 0x1f5b8c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5b90:
    // 0x1f5b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b94:
    // 0x1f5b94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5b98:
    // 0x1f5b98: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x1f5b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
label_1f5b9c:
    // 0x1f5b9c: 0xc07dd14  jal         func_1F7450
label_1f5ba0:
    if (ctx->pc == 0x1F5BA0u) {
        ctx->pc = 0x1F5BA4u;
        goto label_1f5ba4;
    }
    ctx->pc = 0x1F5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5BA4u);
    ctx->pc = 0x1F7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7450u, 0x1F5B9Cu, 0x1F5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5BA4u;
label_1f5ba4:
    // 0x1f5ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5ba8:
    // 0x1f5ba8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f5ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f5bac:
    // 0x1f5bac: 0x3e00008  jr          $ra
label_1f5bb0:
    if (ctx->pc == 0x1F5BB0u) {
        ctx->pc = 0x1F5BB4u;
        goto label_1f5bb4;
    }
    ctx->pc = 0x1F5BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5BB4u;
label_1f5bb4:
    // 0x1f5bb4: 0x0  nop
    ctx->pc = 0x1f5bb4u;
    // NOP
label_1f5bb8:
    // 0x1f5bb8: 0x0  nop
    ctx->pc = 0x1f5bb8u;
    // NOP
label_1f5bbc:
    // 0x1f5bbc: 0x0  nop
    ctx->pc = 0x1f5bbcu;
    // NOP
label_1f5bc0:
    // 0x1f5bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f5bc4:
    // 0x1f5bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5bc8:
    // 0x1f5bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f5bcc:
    // 0x1f5bcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5bd0:
    // 0x1f5bd0: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x1f5bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_1f5bd4:
    // 0x1f5bd4: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_1f5bd8:
    if (ctx->pc == 0x1F5BD8u) {
        ctx->pc = 0x1F5BDCu;
        goto label_1f5bdc;
    }
    ctx->pc = 0x1F5BD4u;
    {
        const bool branch_taken_0x1f5bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5bd4) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5BDCu;
label_1f5bdc:
    // 0x1f5bdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5be0:
    // 0x1f5be0: 0x90630101  lbu         $v1, 0x101($v1)
    ctx->pc = 0x1f5be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
label_1f5be4:
    // 0x1f5be4: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_1f5be8:
    if (ctx->pc == 0x1F5BE8u) {
        ctx->pc = 0x1F5BECu;
        goto label_1f5bec;
    }
    ctx->pc = 0x1F5BE4u;
    {
        const bool branch_taken_0x1f5be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5be4) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5BECu;
label_1f5bec:
    // 0x1f5bec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5bf0:
    // 0x1f5bf0: 0x906300eb  lbu         $v1, 0xEB($v1)
    ctx->pc = 0x1f5bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 235)));
label_1f5bf4:
    // 0x1f5bf4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1f5bf8:
    if (ctx->pc == 0x1F5BF8u) {
        ctx->pc = 0x1F5BFCu;
        goto label_1f5bfc;
    }
    ctx->pc = 0x1F5BF4u;
    {
        const bool branch_taken_0x1f5bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5bf4) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5BFCu;
label_1f5bfc:
    // 0x1f5bfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c00:
    // 0x1f5c00: 0x906300e0  lbu         $v1, 0xE0($v1)
    ctx->pc = 0x1f5c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
label_1f5c04:
    // 0x1f5c04: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_1f5c08:
    if (ctx->pc == 0x1F5C08u) {
        ctx->pc = 0x1F5C0Cu;
        goto label_1f5c0c;
    }
    ctx->pc = 0x1F5C04u;
    {
        const bool branch_taken_0x1f5c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c04) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5C0Cu;
label_1f5c0c:
    // 0x1f5c0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c10:
    // 0x1f5c10: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5c14:
    // 0x1f5c14: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1f5c18:
    if (ctx->pc == 0x1F5C18u) {
        ctx->pc = 0x1F5C1Cu;
        goto label_1f5c1c;
    }
    ctx->pc = 0x1F5C14u;
    {
        const bool branch_taken_0x1f5c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c14) {
            ctx->pc = 0x1F5C68u;
            goto label_1f5c68;
        }
    }
    ctx->pc = 0x1F5C1Cu;
label_1f5c1c:
    // 0x1f5c1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c20:
    // 0x1f5c20: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5c24:
    // 0x1f5c24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c28:
    // 0x1f5c28: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5c2c:
    // 0x1f5c2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5c30:
    // 0x1f5c30: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5c34:
    if (ctx->pc == 0x1F5C34u) {
        ctx->pc = 0x1F5C38u;
        goto label_1f5c38;
    }
    ctx->pc = 0x1F5C30u;
    {
        const bool branch_taken_0x1f5c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5c30) {
            ctx->pc = 0x1F5C68u;
            goto label_1f5c68;
        }
    }
    ctx->pc = 0x1F5C38u;
label_1f5c38:
    // 0x1f5c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c3c:
    // 0x1f5c3c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5c40:
    // 0x1f5c40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c44:
    // 0x1f5c44: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5c48:
    // 0x1f5c48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5c4c:
    // 0x1f5c4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c50:
    // 0x1f5c50: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5c54:
    // 0x1f5c54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c58:
    // 0x1f5c58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c5c:
    // 0x1f5c5c: 0x8c450234  lw          $a1, 0x234($v0)
    ctx->pc = 0x1f5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_1f5c60:
    // 0x1f5c60: 0xc07dbbc  jal         func_1F6EF0
label_1f5c64:
    if (ctx->pc == 0x1F5C64u) {
        ctx->pc = 0x1F5C68u;
        goto label_1f5c68;
    }
    ctx->pc = 0x1F5C60u;
    SET_GPR_U32(ctx, 31, 0x1F5C68u);
    ctx->pc = 0x1F6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EF0u, 0x1F5C60u, 0x1F5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C68u;
label_1f5c68:
    // 0x1f5c68: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c6c:
    // 0x1f5c6c: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f5c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
label_1f5c70:
    // 0x1f5c70: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1f5c74:
    if (ctx->pc == 0x1F5C74u) {
        ctx->pc = 0x1F5C78u;
        goto label_1f5c78;
    }
    ctx->pc = 0x1F5C70u;
    {
        const bool branch_taken_0x1f5c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c70) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5C78u;
label_1f5c78:
    // 0x1f5c78: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c7c:
    // 0x1f5c7c: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5c80:
    // 0x1f5c80: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1f5c84:
    if (ctx->pc == 0x1F5C84u) {
        ctx->pc = 0x1F5C88u;
        goto label_1f5c88;
    }
    ctx->pc = 0x1F5C80u;
    {
        const bool branch_taken_0x1f5c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c80) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5C88u;
label_1f5c88:
    // 0x1f5c88: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c8c:
    // 0x1f5c8c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5c90:
    // 0x1f5c90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c94:
    // 0x1f5c94: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5c98:
    // 0x1f5c98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5c98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5c9c:
    // 0x1f5c9c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5ca0:
    if (ctx->pc == 0x1F5CA0u) {
        ctx->pc = 0x1F5CA4u;
        goto label_1f5ca4;
    }
    ctx->pc = 0x1F5C9Cu;
    {
        const bool branch_taken_0x1f5c9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5c9c) {
            ctx->pc = 0x1F5CD4u;
            goto label_1f5cd4;
        }
    }
    ctx->pc = 0x1F5CA4u;
label_1f5ca4:
    // 0x1f5ca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ca8:
    // 0x1f5ca8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5cac:
    // 0x1f5cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5cb0:
    // 0x1f5cb0: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5cb4:
    // 0x1f5cb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5cb8:
    // 0x1f5cb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5cbc:
    // 0x1f5cbc: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5cc0:
    // 0x1f5cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5cc4:
    // 0x1f5cc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5cc8:
    // 0x1f5cc8: 0x8c450234  lw          $a1, 0x234($v0)
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
label_1f5ccc:
    // 0x1f5ccc: 0xc07dd14  jal         func_1F7450
label_1f5cd0:
    if (ctx->pc == 0x1F5CD0u) {
        ctx->pc = 0x1F5CD4u;
        goto label_1f5cd4;
    }
    ctx->pc = 0x1F5CCCu;
    SET_GPR_U32(ctx, 31, 0x1F5CD4u);
    ctx->pc = 0x1F7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7450u, 0x1F5CCCu, 0x1F5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CD4u;
label_1f5cd4:
    // 0x1f5cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5cd8:
    // 0x1f5cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f5cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f5cdc:
    // 0x1f5cdc: 0x3e00008  jr          $ra
label_1f5ce0:
    if (ctx->pc == 0x1F5CE0u) {
        ctx->pc = 0x1F5CE4u;
        goto label_1f5ce4;
    }
    ctx->pc = 0x1F5CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5CE4u;
label_1f5ce4:
    // 0x1f5ce4: 0x0  nop
    ctx->pc = 0x1f5ce4u;
    // NOP
label_1f5ce8:
    // 0x1f5ce8: 0x0  nop
    ctx->pc = 0x1f5ce8u;
    // NOP
label_1f5cec:
    // 0x1f5cec: 0x0  nop
    ctx->pc = 0x1f5cecu;
    // NOP
label_1f5cf0:
    // 0x1f5cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f5cf4:
    // 0x1f5cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5cf8:
    // 0x1f5cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f5cfc:
    // 0x1f5cfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d00:
    // 0x1f5d00: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x1f5d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_1f5d04:
    // 0x1f5d04: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_1f5d08:
    if (ctx->pc == 0x1F5D08u) {
        ctx->pc = 0x1F5D0Cu;
        goto label_1f5d0c;
    }
    ctx->pc = 0x1F5D04u;
    {
        const bool branch_taken_0x1f5d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d04) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5D0Cu;
label_1f5d0c:
    // 0x1f5d0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d10:
    // 0x1f5d10: 0x90630101  lbu         $v1, 0x101($v1)
    ctx->pc = 0x1f5d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
label_1f5d14:
    // 0x1f5d14: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_1f5d18:
    if (ctx->pc == 0x1F5D18u) {
        ctx->pc = 0x1F5D1Cu;
        goto label_1f5d1c;
    }
    ctx->pc = 0x1F5D14u;
    {
        const bool branch_taken_0x1f5d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d14) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5D1Cu;
label_1f5d1c:
    // 0x1f5d1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d20:
    // 0x1f5d20: 0x906300eb  lbu         $v1, 0xEB($v1)
    ctx->pc = 0x1f5d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 235)));
label_1f5d24:
    // 0x1f5d24: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1f5d28:
    if (ctx->pc == 0x1F5D28u) {
        ctx->pc = 0x1F5D2Cu;
        goto label_1f5d2c;
    }
    ctx->pc = 0x1F5D24u;
    {
        const bool branch_taken_0x1f5d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d24) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5D2Cu;
label_1f5d2c:
    // 0x1f5d2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d30:
    // 0x1f5d30: 0x906300e0  lbu         $v1, 0xE0($v1)
    ctx->pc = 0x1f5d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
label_1f5d34:
    // 0x1f5d34: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_1f5d38:
    if (ctx->pc == 0x1F5D38u) {
        ctx->pc = 0x1F5D3Cu;
        goto label_1f5d3c;
    }
    ctx->pc = 0x1F5D34u;
    {
        const bool branch_taken_0x1f5d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d34) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5D3Cu;
label_1f5d3c:
    // 0x1f5d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d40:
    // 0x1f5d40: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5d44:
    // 0x1f5d44: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1f5d48:
    if (ctx->pc == 0x1F5D48u) {
        ctx->pc = 0x1F5D4Cu;
        goto label_1f5d4c;
    }
    ctx->pc = 0x1F5D44u;
    {
        const bool branch_taken_0x1f5d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d44) {
            ctx->pc = 0x1F5D98u;
            goto label_1f5d98;
        }
    }
    ctx->pc = 0x1F5D4Cu;
label_1f5d4c:
    // 0x1f5d4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d50:
    // 0x1f5d50: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5d54:
    // 0x1f5d54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d58:
    // 0x1f5d58: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5d5c:
    // 0x1f5d5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5d60:
    // 0x1f5d60: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5d64:
    if (ctx->pc == 0x1F5D64u) {
        ctx->pc = 0x1F5D68u;
        goto label_1f5d68;
    }
    ctx->pc = 0x1F5D60u;
    {
        const bool branch_taken_0x1f5d60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5d60) {
            ctx->pc = 0x1F5D98u;
            goto label_1f5d98;
        }
    }
    ctx->pc = 0x1F5D68u;
label_1f5d68:
    // 0x1f5d68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d6c:
    // 0x1f5d6c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5d70:
    // 0x1f5d70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d74:
    // 0x1f5d74: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5d78:
    // 0x1f5d78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5d7c:
    // 0x1f5d7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d80:
    // 0x1f5d80: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5d84:
    // 0x1f5d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d88:
    // 0x1f5d88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d8c:
    // 0x1f5d8c: 0x8c450238  lw          $a1, 0x238($v0)
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_1f5d90:
    // 0x1f5d90: 0xc07dbbc  jal         func_1F6EF0
label_1f5d94:
    if (ctx->pc == 0x1F5D94u) {
        ctx->pc = 0x1F5D98u;
        goto label_1f5d98;
    }
    ctx->pc = 0x1F5D90u;
    SET_GPR_U32(ctx, 31, 0x1F5D98u);
    ctx->pc = 0x1F6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EF0u, 0x1F5D90u, 0x1F5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D98u;
label_1f5d98:
    // 0x1f5d98: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5d9c:
    // 0x1f5d9c: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f5d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
label_1f5da0:
    // 0x1f5da0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1f5da4:
    if (ctx->pc == 0x1F5DA4u) {
        ctx->pc = 0x1F5DA8u;
        goto label_1f5da8;
    }
    ctx->pc = 0x1F5DA0u;
    {
        const bool branch_taken_0x1f5da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5da0) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5DA8u;
label_1f5da8:
    // 0x1f5da8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5dac:
    // 0x1f5dac: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5db0:
    // 0x1f5db0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1f5db4:
    if (ctx->pc == 0x1F5DB4u) {
        ctx->pc = 0x1F5DB8u;
        goto label_1f5db8;
    }
    ctx->pc = 0x1F5DB0u;
    {
        const bool branch_taken_0x1f5db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5db0) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5dbc:
    // 0x1f5dbc: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5dc0:
    // 0x1f5dc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5dc4:
    // 0x1f5dc4: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5dc8:
    // 0x1f5dc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5dcc:
    // 0x1f5dcc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5dd0:
    if (ctx->pc == 0x1F5DD0u) {
        ctx->pc = 0x1F5DD4u;
        goto label_1f5dd4;
    }
    ctx->pc = 0x1F5DCCu;
    {
        const bool branch_taken_0x1f5dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5dcc) {
            ctx->pc = 0x1F5E04u;
            goto label_1f5e04;
        }
    }
    ctx->pc = 0x1F5DD4u;
label_1f5dd4:
    // 0x1f5dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5dd8:
    // 0x1f5dd8: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5ddc:
    // 0x1f5ddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5de0:
    // 0x1f5de0: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5de4:
    // 0x1f5de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5de8:
    // 0x1f5de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5dec:
    // 0x1f5dec: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5df0:
    // 0x1f5df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5df4:
    // 0x1f5df4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5df8:
    // 0x1f5df8: 0x8c450238  lw          $a1, 0x238($v0)
    ctx->pc = 0x1f5df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_1f5dfc:
    // 0x1f5dfc: 0xc07dd14  jal         func_1F7450
label_1f5e00:
    if (ctx->pc == 0x1F5E00u) {
        ctx->pc = 0x1F5E04u;
        goto label_1f5e04;
    }
    ctx->pc = 0x1F5DFCu;
    SET_GPR_U32(ctx, 31, 0x1F5E04u);
    ctx->pc = 0x1F7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7450u, 0x1F5DFCu, 0x1F5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E04u;
label_1f5e04:
    // 0x1f5e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5e08:
    // 0x1f5e08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f5e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f5e0c:
    // 0x1f5e0c: 0x3e00008  jr          $ra
label_1f5e10:
    if (ctx->pc == 0x1F5E10u) {
        ctx->pc = 0x1F5E14u;
        goto label_1f5e14;
    }
    ctx->pc = 0x1F5E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5E14u;
label_1f5e14:
    // 0x1f5e14: 0x0  nop
    ctx->pc = 0x1f5e14u;
    // NOP
label_1f5e18:
    // 0x1f5e18: 0x0  nop
    ctx->pc = 0x1f5e18u;
    // NOP
label_1f5e1c:
    // 0x1f5e1c: 0x0  nop
    ctx->pc = 0x1f5e1cu;
    // NOP
label_1f5e20:
    // 0x1f5e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f5e24:
    // 0x1f5e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5e28:
    // 0x1f5e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f5e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f5e2c:
    // 0x1f5e2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e30:
    // 0x1f5e30: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x1f5e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
label_1f5e34:
    // 0x1f5e34: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_1f5e38:
    if (ctx->pc == 0x1F5E38u) {
        ctx->pc = 0x1F5E3Cu;
        goto label_1f5e3c;
    }
    ctx->pc = 0x1F5E34u;
    {
        const bool branch_taken_0x1f5e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e34) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5E3Cu;
label_1f5e3c:
    // 0x1f5e3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e40:
    // 0x1f5e40: 0x90630101  lbu         $v1, 0x101($v1)
    ctx->pc = 0x1f5e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
label_1f5e44:
    // 0x1f5e44: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_1f5e48:
    if (ctx->pc == 0x1F5E48u) {
        ctx->pc = 0x1F5E4Cu;
        goto label_1f5e4c;
    }
    ctx->pc = 0x1F5E44u;
    {
        const bool branch_taken_0x1f5e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e44) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5E4Cu;
label_1f5e4c:
    // 0x1f5e4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e50:
    // 0x1f5e50: 0x906300eb  lbu         $v1, 0xEB($v1)
    ctx->pc = 0x1f5e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 235)));
label_1f5e54:
    // 0x1f5e54: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1f5e58:
    if (ctx->pc == 0x1F5E58u) {
        ctx->pc = 0x1F5E5Cu;
        goto label_1f5e5c;
    }
    ctx->pc = 0x1F5E54u;
    {
        const bool branch_taken_0x1f5e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e54) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5E5Cu;
label_1f5e5c:
    // 0x1f5e5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e60:
    // 0x1f5e60: 0x906300e0  lbu         $v1, 0xE0($v1)
    ctx->pc = 0x1f5e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 224)));
label_1f5e64:
    // 0x1f5e64: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_1f5e68:
    if (ctx->pc == 0x1F5E68u) {
        ctx->pc = 0x1F5E6Cu;
        goto label_1f5e6c;
    }
    ctx->pc = 0x1F5E64u;
    {
        const bool branch_taken_0x1f5e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e64) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5E6Cu;
label_1f5e6c:
    // 0x1f5e6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e70:
    // 0x1f5e70: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5e74:
    // 0x1f5e74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1f5e78:
    if (ctx->pc == 0x1F5E78u) {
        ctx->pc = 0x1F5E7Cu;
        goto label_1f5e7c;
    }
    ctx->pc = 0x1F5E74u;
    {
        const bool branch_taken_0x1f5e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e74) {
            ctx->pc = 0x1F5EC8u;
            goto label_1f5ec8;
        }
    }
    ctx->pc = 0x1F5E7Cu;
label_1f5e7c:
    // 0x1f5e7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e80:
    // 0x1f5e80: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5e84:
    // 0x1f5e84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e88:
    // 0x1f5e88: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5e8c:
    // 0x1f5e8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5e90:
    // 0x1f5e90: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5e94:
    if (ctx->pc == 0x1F5E94u) {
        ctx->pc = 0x1F5E98u;
        goto label_1f5e98;
    }
    ctx->pc = 0x1F5E90u;
    {
        const bool branch_taken_0x1f5e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5e90) {
            ctx->pc = 0x1F5EC8u;
            goto label_1f5ec8;
        }
    }
    ctx->pc = 0x1F5E98u;
label_1f5e98:
    // 0x1f5e98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5e9c:
    // 0x1f5e9c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5ea0:
    // 0x1f5ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ea4:
    // 0x1f5ea4: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5ea8:
    // 0x1f5ea8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5eac:
    // 0x1f5eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5eb0:
    // 0x1f5eb0: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5eb4:
    // 0x1f5eb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5eb8:
    // 0x1f5eb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ebc:
    // 0x1f5ebc: 0x8c45023c  lw          $a1, 0x23C($v0)
    ctx->pc = 0x1f5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_1f5ec0:
    // 0x1f5ec0: 0xc07dbbc  jal         func_1F6EF0
label_1f5ec4:
    if (ctx->pc == 0x1F5EC4u) {
        ctx->pc = 0x1F5EC8u;
        goto label_1f5ec8;
    }
    ctx->pc = 0x1F5EC0u;
    SET_GPR_U32(ctx, 31, 0x1F5EC8u);
    ctx->pc = 0x1F6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6EF0u, 0x1F5EC0u, 0x1F5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EC8u;
label_1f5ec8:
    // 0x1f5ec8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ecc:
    // 0x1f5ecc: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f5eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
label_1f5ed0:
    // 0x1f5ed0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1f5ed4:
    if (ctx->pc == 0x1F5ED4u) {
        ctx->pc = 0x1F5ED8u;
        goto label_1f5ed8;
    }
    ctx->pc = 0x1F5ED0u;
    {
        const bool branch_taken_0x1f5ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ed0) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5ED8u;
label_1f5ed8:
    // 0x1f5ed8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5edc:
    // 0x1f5edc: 0x906300f8  lbu         $v1, 0xF8($v1)
    ctx->pc = 0x1f5edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 248)));
label_1f5ee0:
    // 0x1f5ee0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1f5ee4:
    if (ctx->pc == 0x1F5EE4u) {
        ctx->pc = 0x1F5EE8u;
        goto label_1f5ee8;
    }
    ctx->pc = 0x1F5EE0u;
    {
        const bool branch_taken_0x1f5ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ee0) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5EE8u;
label_1f5ee8:
    // 0x1f5ee8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5eec:
    // 0x1f5eec: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5ef0:
    // 0x1f5ef0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5ef4:
    // 0x1f5ef4: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f5ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5ef8:
    // 0x1f5ef8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f5ef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f5efc:
    // 0x1f5efc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1f5f00:
    if (ctx->pc == 0x1F5F00u) {
        ctx->pc = 0x1F5F04u;
        goto label_1f5f04;
    }
    ctx->pc = 0x1F5EFCu;
    {
        const bool branch_taken_0x1f5efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5efc) {
            ctx->pc = 0x1F5F34u;
            goto label_1f5f34;
        }
    }
    ctx->pc = 0x1F5F04u;
label_1f5f04:
    // 0x1f5f04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5f08:
    // 0x1f5f08: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5f0c:
    // 0x1f5f0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5f10:
    // 0x1f5f10: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5f14:
    // 0x1f5f14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f5f18:
    // 0x1f5f18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5f1c:
    // 0x1f5f1c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f5f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1f5f20:
    // 0x1f5f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5f24:
    // 0x1f5f24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5f28:
    // 0x1f5f28: 0x8c45023c  lw          $a1, 0x23C($v0)
    ctx->pc = 0x1f5f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
label_1f5f2c:
    // 0x1f5f2c: 0xc07dd14  jal         func_1F7450
label_1f5f30:
    if (ctx->pc == 0x1F5F30u) {
        ctx->pc = 0x1F5F34u;
        goto label_1f5f34;
    }
    ctx->pc = 0x1F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F34u);
    ctx->pc = 0x1F7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7450u, 0x1F5F2Cu, 0x1F5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F34u;
label_1f5f34:
    // 0x1f5f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5f38:
    // 0x1f5f38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f5f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f5f3c:
    // 0x1f5f3c: 0x3e00008  jr          $ra
label_1f5f40:
    if (ctx->pc == 0x1F5F40u) {
        ctx->pc = 0x1F5F44u;
        goto label_1f5f44;
    }
    ctx->pc = 0x1F5F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5F44u;
label_1f5f44:
    // 0x1f5f44: 0x0  nop
    ctx->pc = 0x1f5f44u;
    // NOP
label_1f5f48:
    // 0x1f5f48: 0x0  nop
    ctx->pc = 0x1f5f48u;
    // NOP
label_1f5f4c:
    // 0x1f5f4c: 0x0  nop
    ctx->pc = 0x1f5f4cu;
    // NOP
label_1f5f50:
    // 0x1f5f50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1f5f54:
    // 0x1f5f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f5f58:
    // 0x1f5f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5f5c:
    // 0x1f5f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5f60:
    // 0x1f5f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5f64:
    // 0x1f5f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5f68:
    // 0x1f5f68: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1f5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_1f5f6c:
    // 0x1f5f6c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1f5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_1f5f70:
    // 0x1f5f70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f5f74:
    // 0x1f5f74: 0x8c44026c  lw          $a0, 0x26C($v0)
    ctx->pc = 0x1f5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_1f5f78:
    // 0x1f5f78: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f5f7c:
    // 0x1f5f7c: 0xc085538  jal         func_2154E0
label_1f5f80:
    if (ctx->pc == 0x1F5F80u) {
        ctx->pc = 0x1F5F84u;
        goto label_1f5f84;
    }
    ctx->pc = 0x1F5F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F84u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F5F7Cu, 0x1F5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F84u;
label_1f5f84:
    // 0x1f5f84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f5f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f88:
    // 0x1f5f88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f5f8c:
    // 0x1f5f8c: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x1f5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
label_1f5f90:
    // 0x1f5f90: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f5f94:
    // 0x1f5f94: 0xc085538  jal         func_2154E0
label_1f5f98:
    if (ctx->pc == 0x1F5F98u) {
        ctx->pc = 0x1F5F9Cu;
        goto label_1f5f9c;
    }
    ctx->pc = 0x1F5F94u;
    SET_GPR_U32(ctx, 31, 0x1F5F9Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F5F94u, 0x1F5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F9Cu;
label_1f5f9c:
    // 0x1f5f9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f5f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5fa0:
    // 0x1f5fa0: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1f5fa4:
    // 0x1f5fa4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f5fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5fa8:
    // 0x1f5fa8: 0xc090f80  jal         func_243E00
label_1f5fac:
    if (ctx->pc == 0x1F5FACu) {
        ctx->pc = 0x1F5FB0u;
        goto label_1f5fb0;
    }
    ctx->pc = 0x1F5FA8u;
    SET_GPR_U32(ctx, 31, 0x1F5FB0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1F5FA8u, 0x1F5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FB0u;
label_1f5fb0:
    // 0x1f5fb0: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1f5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1f5fb4:
    // 0x1f5fb4: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x1f5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f5fb8:
    // 0x1f5fb8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f5fbc:
    // 0x1f5fbc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f5fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5fc0:
    // 0x1f5fc0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f5fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5fc4:
    // 0x1f5fc4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1f5fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f5fc8:
    // 0x1f5fc8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1f5fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f5fcc:
    // 0x1f5fcc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f5fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f5fd0:
    // 0x1f5fd0: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1f5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1f5fd4:
    // 0x1f5fd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f5fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5fd8:
    // 0x1f5fd8: 0xc090f80  jal         func_243E00
label_1f5fdc:
    if (ctx->pc == 0x1F5FDCu) {
        ctx->pc = 0x1F5FE0u;
        goto label_1f5fe0;
    }
    ctx->pc = 0x1F5FD8u;
    SET_GPR_U32(ctx, 31, 0x1F5FE0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1F5FD8u, 0x1F5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FE0u;
label_1f5fe0:
    // 0x1f5fe0: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1f5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1f5fe4:
    // 0x1f5fe4: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x1f5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1f5fe8:
    // 0x1f5fe8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f5fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f5fec:
    // 0x1f5fec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f5ff0:
    // 0x1f5ff0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f5ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f5ff4:
    // 0x1f5ff4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1f5ff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f5ff8:
    // 0x1f5ff8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1f5ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f5ffc:
    // 0x1f5ffc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f5ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f6000:
    // 0x1f6000: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f6004:
    // 0x1f6004: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1f6008:
    // 0x1f6008: 0xc0b5f04  jal         func_2D7C10
label_1f600c:
    if (ctx->pc == 0x1F600Cu) {
        ctx->pc = 0x1F6010u;
        goto label_1f6010;
    }
    ctx->pc = 0x1F6008u;
    SET_GPR_U32(ctx, 31, 0x1F6010u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x1F6008u, 0x1F6010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6010u;
label_1f6010:
    // 0x1f6010: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f6010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f6014:
    // 0x1f6014: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1f6014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1f6018:
    // 0x1f6018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f601c:
    // 0x1f601c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6020:
    // 0x1f6020: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6020u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f6024:
    // 0x1f6024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f6028:
    // 0x1f6028: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f602c:
    // 0x1f602c: 0xe4400268  swc1        $f0, 0x268($v0)
    ctx->pc = 0x1f602cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 616), bits); }
label_1f6030:
    // 0x1f6030: 0xc05035c  jal         func_140D70
label_1f6034:
    if (ctx->pc == 0x1F6034u) {
        ctx->pc = 0x1F6038u;
        goto label_1f6038;
    }
    ctx->pc = 0x1F6030u;
    SET_GPR_U32(ctx, 31, 0x1F6038u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1F6030u, 0x1F6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6038u;
label_1f6038:
    // 0x1f6038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f603c:
    // 0x1f603c: 0xc050360  jal         func_140D80
label_1f6040:
    if (ctx->pc == 0x1F6040u) {
        ctx->pc = 0x1F6044u;
        goto label_1f6044;
    }
    ctx->pc = 0x1F603Cu;
    SET_GPR_U32(ctx, 31, 0x1F6044u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x1F603Cu, 0x1F6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6044u;
label_1f6044:
    // 0x1f6044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6048:
    // 0x1f6048: 0xc097444  jal         func_25D110
label_1f604c:
    if (ctx->pc == 0x1F604Cu) {
        ctx->pc = 0x1F6050u;
        goto label_1f6050;
    }
    ctx->pc = 0x1F6048u;
    SET_GPR_U32(ctx, 31, 0x1F6050u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x1F6048u, 0x1F6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6050u;
label_1f6050:
    // 0x1f6050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6054:
    // 0x1f6054: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f6058:
    // 0x1f6058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f605c:
    // 0x1f605c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f605cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6060:
    // 0x1f6060: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f6064:
    // 0x1f6064: 0x320f809  jalr        $t9
label_1f6068:
    if (ctx->pc == 0x1F6068u) {
        ctx->pc = 0x1F606Cu;
        goto label_1f606c;
    }
    ctx->pc = 0x1F6064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F606Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6064u, 0x1F606Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F606Cu;
label_1f606c:
    // 0x1f606c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f6070:
    // 0x1f6070: 0xc050530  jal         func_1414C0
label_1f6074:
    if (ctx->pc == 0x1F6074u) {
        ctx->pc = 0x1F6078u;
        goto label_1f6078;
    }
    ctx->pc = 0x1F6070u;
    SET_GPR_U32(ctx, 31, 0x1F6078u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1F6070u, 0x1F6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6078u;
label_1f6078:
    // 0x1f6078: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f607c:
    // 0x1f607c: 0x8c44026c  lw          $a0, 0x26C($v0)
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_1f6080:
    // 0x1f6080: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1f6084:
    // 0x1f6084: 0xc085538  jal         func_2154E0
label_1f6088:
    if (ctx->pc == 0x1F6088u) {
        ctx->pc = 0x1F608Cu;
        goto label_1f608c;
    }
    ctx->pc = 0x1F6084u;
    SET_GPR_U32(ctx, 31, 0x1F608Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F6084u, 0x1F608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F608Cu;
label_1f608c:
    // 0x1f608c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f608cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6090:
    // 0x1f6090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6094:
    // 0x1f6094: 0xc0480fc  jal         func_1203F0
label_1f6098:
    if (ctx->pc == 0x1F6098u) {
        ctx->pc = 0x1F609Cu;
        goto label_1f609c;
    }
    ctx->pc = 0x1F6094u;
    SET_GPR_U32(ctx, 31, 0x1F609Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x1F6094u, 0x1F609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F609Cu;
label_1f609c:
    // 0x1f609c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1f609cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1f60a0:
    // 0x1f60a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f60a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f60a4:
    // 0x1f60a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1f60a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f60a8:
    // 0x1f60a8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1f60ac:
    if (ctx->pc == 0x1F60ACu) {
        ctx->pc = 0x1F60B0u;
        goto label_1f60b0;
    }
    ctx->pc = 0x1F60A8u;
    {
        const bool branch_taken_0x1f60a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60a8) {
            ctx->pc = 0x1F60C8u;
            goto label_1f60c8;
        }
    }
    ctx->pc = 0x1F60B0u;
label_1f60b0:
    // 0x1f60b0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_1f60b4:
    // 0x1f60b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f60b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f60b8:
    // 0x1f60b8: 0x0  nop
    ctx->pc = 0x1f60b8u;
    // NOP
label_1f60bc:
    // 0x1f60bc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f60bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f60c0:
    // 0x1f60c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f60c4:
    if (ctx->pc == 0x1F60C4u) {
        ctx->pc = 0x1F60C8u;
        goto label_1f60c8;
    }
    ctx->pc = 0x1F60C0u;
    {
        const bool branch_taken_0x1f60c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60c0) {
            ctx->pc = 0x1F60D8u;
            goto label_1f60d8;
        }
    }
    ctx->pc = 0x1F60C8u;
label_1f60c8:
    // 0x1f60c8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1f60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1f60cc:
    // 0x1f60cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f60ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f60d0:
    // 0x1f60d0: 0x0  nop
    ctx->pc = 0x1f60d0u;
    // NOP
label_1f60d4:
    // 0x1f60d4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f60d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f60d8:
    // 0x1f60d8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f60d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f60dc:
    // 0x1f60dc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f60e0:
    // 0x1f60e0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1f60e4:
    if (ctx->pc == 0x1F60E4u) {
        ctx->pc = 0x1F60E8u;
        goto label_1f60e8;
    }
    ctx->pc = 0x1F60E0u;
    {
        const bool branch_taken_0x1f60e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60e0) {
            ctx->pc = 0x1F60FCu;
            goto label_1f60fc;
        }
    }
    ctx->pc = 0x1F60E8u;
label_1f60e8:
    // 0x1f60e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f60e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f60ec:
    // 0x1f60ec: 0x0  nop
    ctx->pc = 0x1f60ecu;
    // NOP
label_1f60f0:
    // 0x1f60f0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f60f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f60f4:
    // 0x1f60f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f60f8:
    if (ctx->pc == 0x1F60F8u) {
        ctx->pc = 0x1F60FCu;
        goto label_1f60fc;
    }
    ctx->pc = 0x1F60F4u;
    {
        const bool branch_taken_0x1f60f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60f4) {
            ctx->pc = 0x1F610Cu;
            goto label_1f610c;
        }
    }
    ctx->pc = 0x1F60FCu;
label_1f60fc:
    // 0x1f60fc: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1f60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1f6100:
    // 0x1f6100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6104:
    // 0x1f6104: 0x0  nop
    ctx->pc = 0x1f6104u;
    // NOP
label_1f6108:
    // 0x1f6108: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f6108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f610c:
    // 0x1f610c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6110:
    // 0x1f6110: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f6110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f6114:
    // 0x1f6114: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f6114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1f6118:
    // 0x1f6118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f611c:
    // 0x1f611c: 0x0  nop
    ctx->pc = 0x1f611cu;
    // NOP
label_1f6120:
    // 0x1f6120: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f6120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f6124:
    // 0x1f6124: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1f6124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1f6128:
    // 0x1f6128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f612c:
    // 0x1f612c: 0x0  nop
    ctx->pc = 0x1f612cu;
    // NOP
label_1f6130:
    // 0x1f6130: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f6130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f6134:
    // 0x1f6134: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f6138:
    // 0x1f6138: 0xc4400268  lwc1        $f0, 0x268($v0)
    ctx->pc = 0x1f6138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f613c:
    // 0x1f613c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f613cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1f6140:
    // 0x1f6140: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1f6144:
    // 0x1f6144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6148:
    // 0x1f6148: 0x0  nop
    ctx->pc = 0x1f6148u;
    // NOP
label_1f614c:
    // 0x1f614c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1f614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1f6150:
    // 0x1f6150: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1f6154:
    // 0x1f6154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6158:
    // 0x1f6158: 0x0  nop
    ctx->pc = 0x1f6158u;
    // NOP
label_1f615c:
    // 0x1f615c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1f615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1f6160:
    // 0x1f6160: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f6160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1f6164:
    // 0x1f6164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6168:
    // 0x1f6168: 0x0  nop
    ctx->pc = 0x1f6168u;
    // NOP
label_1f616c:
    // 0x1f616c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1f616cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1f6170:
    // 0x1f6170: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1f6170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1f6174:
    // 0x1f6174: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1f6174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f6178:
    // 0x1f6178: 0xc050194  jal         func_140650
label_1f617c:
    if (ctx->pc == 0x1F617Cu) {
        ctx->pc = 0x1F6180u;
        goto label_1f6180;
    }
    ctx->pc = 0x1F6178u;
    SET_GPR_U32(ctx, 31, 0x1F6180u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1F6178u, 0x1F6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6180u;
label_1f6180:
    // 0x1f6180: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f6180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6184:
    // 0x1f6184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6188:
    // 0x1f6188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f6188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f618c:
    // 0x1f618c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f618cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6190:
    // 0x1f6190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6194:
    // 0x1f6194: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1f6194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1f6198:
    // 0x1f6198: 0x3e00008  jr          $ra
label_1f619c:
    if (ctx->pc == 0x1F619Cu) {
        ctx->pc = 0x1F61A0u;
        goto label_1f61a0;
    }
    ctx->pc = 0x1F6198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F61A0u;
label_1f61a0:
    // 0x1f61a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f61a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f61a4:
    // 0x1f61a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f61a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f61a8:
    // 0x1f61a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f61a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f61ac:
    // 0x1f61ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f61acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f61b0:
    // 0x1f61b0: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1f61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_1f61b4:
    // 0x1f61b4: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1f61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_1f61b8:
    // 0x1f61b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f61bc:
    // 0x1f61bc: 0x8c44026c  lw          $a0, 0x26C($v0)
    ctx->pc = 0x1f61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
label_1f61c0:
    // 0x1f61c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f61c4:
    // 0x1f61c4: 0xc085538  jal         func_2154E0
label_1f61c8:
    if (ctx->pc == 0x1F61C8u) {
        ctx->pc = 0x1F61CCu;
        goto label_1f61cc;
    }
    ctx->pc = 0x1F61C4u;
    SET_GPR_U32(ctx, 31, 0x1F61CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F61C4u, 0x1F61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61CCu;
label_1f61cc:
    // 0x1f61cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f61ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f61d0:
    // 0x1f61d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f61d4:
    // 0x1f61d4: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x1f61d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
label_1f61d8:
    // 0x1f61d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f61dc:
    // 0x1f61dc: 0xc085538  jal         func_2154E0
label_1f61e0:
    if (ctx->pc == 0x1F61E0u) {
        ctx->pc = 0x1F61E4u;
        goto label_1f61e4;
    }
    ctx->pc = 0x1F61DCu;
    SET_GPR_U32(ctx, 31, 0x1F61E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F61DCu, 0x1F61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61E4u;
label_1f61e4:
    // 0x1f61e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f61e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f61e8:
    // 0x1f61e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f61ec:
    // 0x1f61ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f61ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f61f0:
    // 0x1f61f0: 0xc090f80  jal         func_243E00
label_1f61f4:
    if (ctx->pc == 0x1F61F4u) {
        ctx->pc = 0x1F61F8u;
        goto label_1f61f8;
    }
    ctx->pc = 0x1F61F0u;
    SET_GPR_U32(ctx, 31, 0x1F61F8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1F61F0u, 0x1F61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F61F8u;
label_1f61f8:
    // 0x1f61f8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1f61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f61fc:
    // 0x1f61fc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1f61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f6200:
    // 0x1f6200: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6204:
    // 0x1f6204: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f6204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6208:
    // 0x1f6208: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f620c:
    // 0x1f620c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1f620cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f6210:
    // 0x1f6210: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1f6210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f6214:
    // 0x1f6214: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f6214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f6218:
    // 0x1f6218: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f6218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f621c:
    // 0x1f621c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f621cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6220:
    // 0x1f6220: 0xc090f80  jal         func_243E00
label_1f6224:
    if (ctx->pc == 0x1F6224u) {
        ctx->pc = 0x1F6228u;
        goto label_1f6228;
    }
    ctx->pc = 0x1F6220u;
    SET_GPR_U32(ctx, 31, 0x1F6228u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1F6220u, 0x1F6228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6228u;
label_1f6228:
    // 0x1f6228: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f622c:
    // 0x1f622c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f6230:
    // 0x1f6230: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f6234:
    // 0x1f6234: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6238:
    // 0x1f6238: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f623c:
    // 0x1f623c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1f623cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f6240:
    // 0x1f6240: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1f6240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f6244:
    // 0x1f6244: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f6248:
    // 0x1f6248: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1f6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f624c:
    // 0x1f624c: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
label_1f6250:
    // 0x1f6250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6254:
    // 0x1f6254: 0x0  nop
    ctx->pc = 0x1f6254u;
    // NOP
label_1f6258:
    // 0x1f6258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f625c:
    // 0x1f625c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6260:
    // 0x1f6260: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1f6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6264:
    // 0x1f6264: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x1f6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
label_1f6268:
    // 0x1f6268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f626c:
    // 0x1f626c: 0x0  nop
    ctx->pc = 0x1f626cu;
    // NOP
label_1f6270:
    // 0x1f6270: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f6274:
    // 0x1f6274: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1f6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f6278:
    // 0x1f6278: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1f6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f627c:
    // 0x1f627c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1f627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6280:
    // 0x1f6280: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f6284:
    // 0x1f6284: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f6284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f6288:
    // 0x1f6288: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1f6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f628c:
    // 0x1f628c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1f628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6290:
    // 0x1f6290: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f6294:
    // 0x1f6294: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f6298:
    // 0x1f6298: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1f6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f629c:
    // 0x1f629c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1f629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f62a0:
    // 0x1f62a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f62a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f62a4:
    // 0x1f62a4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f62a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f62a8:
    // 0x1f62a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1f62ac:
    // 0x1f62ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f62acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f62b0:
    // 0x1f62b0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1f62b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f62b4:
    // 0x1f62b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f62b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f62b8:
    // 0x1f62b8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f62b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f62bc:
    // 0x1f62bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1f62c0:
    // 0x1f62c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f62c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f62c4:
    // 0x1f62c4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f62c8:
    // 0x1f62c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f62c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f62cc:
    // 0x1f62cc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f62ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f62d0:
    // 0x1f62d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1f62d4:
    // 0x1f62d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f62d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f62d8:
    // 0x1f62d8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1f62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f62dc:
    // 0x1f62dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f62dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f62e0:
    // 0x1f62e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f62e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f62e4:
    // 0x1f62e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f62e8:
    // 0x1f62e8: 0xc050530  jal         func_1414C0
label_1f62ec:
    if (ctx->pc == 0x1F62ECu) {
        ctx->pc = 0x1F62F0u;
        goto label_1f62f0;
    }
    ctx->pc = 0x1F62E8u;
    SET_GPR_U32(ctx, 31, 0x1F62F0u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1F62E8u, 0x1F62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62F0u;
label_1f62f0:
    // 0x1f62f0: 0xc05035c  jal         func_140D70
label_1f62f4:
    if (ctx->pc == 0x1F62F4u) {
        ctx->pc = 0x1F62F8u;
        goto label_1f62f8;
    }
    ctx->pc = 0x1F62F0u;
    SET_GPR_U32(ctx, 31, 0x1F62F8u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1F62F0u, 0x1F62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62F8u;
label_1f62f8:
    // 0x1f62f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f62f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f62fc:
    // 0x1f62fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f6300:
    // 0x1f6300: 0xc050240  jal         func_140900
label_1f6304:
    if (ctx->pc == 0x1F6304u) {
        ctx->pc = 0x1F6308u;
        goto label_1f6308;
    }
    ctx->pc = 0x1F6300u;
    SET_GPR_U32(ctx, 31, 0x1F6308u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x1F6300u, 0x1F6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6308u;
label_1f6308:
    // 0x1f6308: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f630c:
    // 0x1f630c: 0x904200f8  lbu         $v0, 0xF8($v0)
    ctx->pc = 0x1f630cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 248)));
label_1f6310:
    // 0x1f6310: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f6314:
    if (ctx->pc == 0x1F6314u) {
        ctx->pc = 0x1F6318u;
        goto label_1f6318;
    }
    ctx->pc = 0x1F6310u;
    {
        const bool branch_taken_0x1f6310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6310) {
            ctx->pc = 0x1F633Cu;
            goto label_1f633c;
        }
    }
    ctx->pc = 0x1F6318u;
label_1f6318:
    // 0x1f6318: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f631c:
    // 0x1f631c: 0xc4410268  lwc1        $f1, 0x268($v0)
    ctx->pc = 0x1f631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6320:
    // 0x1f6320: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1f6324:
    // 0x1f6324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6328:
    // 0x1f6328: 0x0  nop
    ctx->pc = 0x1f6328u;
    // NOP
label_1f632c:
    // 0x1f632c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f632cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f6330:
    // 0x1f6330: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f6330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f6334:
    // 0x1f6334: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f6338:
    if (ctx->pc == 0x1F6338u) {
        ctx->pc = 0x1F633Cu;
        goto label_1f633c;
    }
    ctx->pc = 0x1F6334u;
    {
        const bool branch_taken_0x1f6334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6334) {
            ctx->pc = 0x1F6358u;
            goto label_1f6358;
        }
    }
    ctx->pc = 0x1F633Cu;
label_1f633c:
    // 0x1f633c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f6340:
    // 0x1f6340: 0xc4410268  lwc1        $f1, 0x268($v0)
    ctx->pc = 0x1f6340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f6344:
    // 0x1f6344: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1f6344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1f6348:
    // 0x1f6348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f634c:
    // 0x1f634c: 0x0  nop
    ctx->pc = 0x1f634cu;
    // NOP
label_1f6350:
    // 0x1f6350: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f6350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f6354:
    // 0x1f6354: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f6354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f6358:
    // 0x1f6358: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f6358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f635c:
    // 0x1f635c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1f6360:
    // 0x1f6360: 0xc05035c  jal         func_140D70
label_1f6364:
    if (ctx->pc == 0x1F6364u) {
        ctx->pc = 0x1F6368u;
        goto label_1f6368;
    }
    ctx->pc = 0x1F6360u;
    SET_GPR_U32(ctx, 31, 0x1F6368u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1F6360u, 0x1F6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6368u;
label_1f6368:
    // 0x1f6368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f636c:
    // 0x1f636c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f6370:
    // 0x1f6370: 0xc050194  jal         func_140650
label_1f6374:
    if (ctx->pc == 0x1F6374u) {
        ctx->pc = 0x1F6378u;
        goto label_1f6378;
    }
    ctx->pc = 0x1F6370u;
    SET_GPR_U32(ctx, 31, 0x1F6378u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1F6370u, 0x1F6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6378u;
label_1f6378:
    // 0x1f6378: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1f6378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f637c:
    // 0x1f637c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f6380:
    // 0x1f6380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6384:
    // 0x1f6384: 0xc106598  jal         func_419660
label_1f6388:
    if (ctx->pc == 0x1F6388u) {
        ctx->pc = 0x1F638Cu;
        goto label_1f638c;
    }
    ctx->pc = 0x1F6384u;
    SET_GPR_U32(ctx, 31, 0x1F638Cu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1F6384u, 0x1F638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F638Cu;
label_1f638c:
    // 0x1f638c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1f638cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f6390:
    // 0x1f6390: 0xc106794  jal         func_419E50
label_1f6394:
    if (ctx->pc == 0x1F6394u) {
        ctx->pc = 0x1F6398u;
        goto label_1f6398;
    }
    ctx->pc = 0x1F6390u;
    SET_GPR_U32(ctx, 31, 0x1F6398u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1F6390u, 0x1F6398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6398u;
label_1f6398:
    // 0x1f6398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f639c:
    // 0x1f639c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f639cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f63a0:
    // 0x1f63a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f63a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f63a4:
    // 0x1f63a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1f63a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f63a8:
    // 0x1f63a8: 0x3e00008  jr          $ra
label_1f63ac:
    if (ctx->pc == 0x1F63ACu) {
        ctx->pc = 0x1F63B0u;
        goto label_1f63b0;
    }
    ctx->pc = 0x1F63A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F63A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F63B0u;
label_1f63b0:
    // 0x1f63b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f63b4:
    // 0x1f63b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f63b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f63b8:
    // 0x1f63b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f63b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f63bc:
    // 0x1f63bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f63bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f63c0:
    // 0x1f63c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f63c4:
    // 0x1f63c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f63c8:
    // 0x1f63c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f63cc:
    // 0x1f63cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f63ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f63d0:
    // 0x1f63d0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1f63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1f63d4:
    // 0x1f63d4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f63d8:
    // 0x1f63d8: 0xc064aec  jal         func_192BB0
label_1f63dc:
    if (ctx->pc == 0x1F63DCu) {
        ctx->pc = 0x1F63E0u;
        goto label_1f63e0;
    }
    ctx->pc = 0x1F63D8u;
    SET_GPR_U32(ctx, 31, 0x1F63E0u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1F63D8u, 0x1F63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63E0u;
label_1f63e0:
    // 0x1f63e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f63e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f63e4:
    // 0x1f63e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f63e8:
    if (ctx->pc == 0x1F63E8u) {
        ctx->pc = 0x1F63ECu;
        goto label_1f63ec;
    }
    ctx->pc = 0x1F63E4u;
    {
        const bool branch_taken_0x1f63e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f63e4) {
            ctx->pc = 0x1F6424u;
            goto label_1f6424;
        }
    }
    ctx->pc = 0x1F63ECu;
label_1f63ec:
    // 0x1f63ec: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f63f0:
    // 0x1f63f0: 0xc06479c  jal         func_191E70
label_1f63f4:
    if (ctx->pc == 0x1F63F4u) {
        ctx->pc = 0x1F63F8u;
        goto label_1f63f8;
    }
    ctx->pc = 0x1F63F0u;
    SET_GPR_U32(ctx, 31, 0x1F63F8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F63F0u, 0x1F63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63F8u;
label_1f63f8:
    // 0x1f63f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f63f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f63fc:
    // 0x1f63fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6400:
    // 0x1f6400: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
label_1f6404:
    // 0x1f6404: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f6404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f6408:
    // 0x1f6408: 0xc05612c  jal         func_1584B0
label_1f640c:
    if (ctx->pc == 0x1F640Cu) {
        ctx->pc = 0x1F6410u;
        goto label_1f6410;
    }
    ctx->pc = 0x1F6408u;
    SET_GPR_U32(ctx, 31, 0x1F6410u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6408u, 0x1F6410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6410u;
label_1f6410:
    // 0x1f6410: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6414:
    // 0x1f6414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f6414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6418:
    // 0x1f6418: 0xc08c258  jal         func_230960
label_1f641c:
    if (ctx->pc == 0x1F641Cu) {
        ctx->pc = 0x1F6420u;
        goto label_1f6420;
    }
    ctx->pc = 0x1F6418u;
    SET_GPR_U32(ctx, 31, 0x1F6420u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F6418u, 0x1F6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6420u;
label_1f6420:
    // 0x1f6420: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f6420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f6424:
    // 0x1f6424: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6428:
    // 0x1f6428: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f642c:
    // 0x1f642c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1f642cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6430:
    // 0x1f6430: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f6434:
    if (ctx->pc == 0x1F6434u) {
        ctx->pc = 0x1F6438u;
        goto label_1f6438;
    }
    ctx->pc = 0x1F6430u;
    {
        const bool branch_taken_0x1f6430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6430) {
            ctx->pc = 0x1F63ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f63ec;
        }
    }
    ctx->pc = 0x1F6438u;
label_1f6438:
    // 0x1f6438: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f6438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f643c:
    // 0x1f643c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f6440:
    if (ctx->pc == 0x1F6440u) {
        ctx->pc = 0x1F6444u;
        goto label_1f6444;
    }
    ctx->pc = 0x1F643Cu;
    {
        const bool branch_taken_0x1f643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f643c) {
            ctx->pc = 0x1F647Cu;
            goto label_1f647c;
        }
    }
    ctx->pc = 0x1F6444u;
label_1f6444:
    // 0x1f6444: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f6444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6448:
    // 0x1f6448: 0xc06479c  jal         func_191E70
label_1f644c:
    if (ctx->pc == 0x1F644Cu) {
        ctx->pc = 0x1F6450u;
        goto label_1f6450;
    }
    ctx->pc = 0x1F6448u;
    SET_GPR_U32(ctx, 31, 0x1F6450u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6448u, 0x1F6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6450u;
label_1f6450:
    // 0x1f6450: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f6450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6454:
    // 0x1f6454: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6458:
    // 0x1f6458: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f6458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
label_1f645c:
    // 0x1f645c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f6460:
    // 0x1f6460: 0xc05612c  jal         func_1584B0
label_1f6464:
    if (ctx->pc == 0x1F6464u) {
        ctx->pc = 0x1F6468u;
        goto label_1f6468;
    }
    ctx->pc = 0x1F6460u;
    SET_GPR_U32(ctx, 31, 0x1F6468u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6460u, 0x1F6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6468u;
label_1f6468:
    // 0x1f6468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f646c:
    // 0x1f646c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6470:
    // 0x1f6470: 0xc08c258  jal         func_230960
label_1f6474:
    if (ctx->pc == 0x1F6474u) {
        ctx->pc = 0x1F6478u;
        goto label_1f6478;
    }
    ctx->pc = 0x1F6470u;
    SET_GPR_U32(ctx, 31, 0x1F6478u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F6470u, 0x1F6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6478u;
label_1f6478:
    // 0x1f6478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f647c:
    // 0x1f647c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6480:
    // 0x1f6480: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f6480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f6484:
    // 0x1f6484: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f6484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6488:
    // 0x1f6488: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f648c:
    if (ctx->pc == 0x1F648Cu) {
        ctx->pc = 0x1F6490u;
        goto label_1f6490;
    }
    ctx->pc = 0x1F6488u;
    {
        const bool branch_taken_0x1f6488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6488) {
            ctx->pc = 0x1F6444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6444;
        }
    }
    ctx->pc = 0x1F6490u;
label_1f6490:
    // 0x1f6490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f6490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6494:
    // 0x1f6494: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f6498:
    if (ctx->pc == 0x1F6498u) {
        ctx->pc = 0x1F649Cu;
        goto label_1f649c;
    }
    ctx->pc = 0x1F6494u;
    {
        const bool branch_taken_0x1f6494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6494) {
            ctx->pc = 0x1F64D4u;
            goto label_1f64d4;
        }
    }
    ctx->pc = 0x1F649Cu;
label_1f649c:
    // 0x1f649c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f64a0:
    // 0x1f64a0: 0xc06479c  jal         func_191E70
label_1f64a4:
    if (ctx->pc == 0x1F64A4u) {
        ctx->pc = 0x1F64A8u;
        goto label_1f64a8;
    }
    ctx->pc = 0x1F64A0u;
    SET_GPR_U32(ctx, 31, 0x1F64A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F64A0u, 0x1F64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64A8u;
label_1f64a8:
    // 0x1f64a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f64a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f64ac:
    // 0x1f64ac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f64b0:
    // 0x1f64b0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1f64b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
label_1f64b4:
    // 0x1f64b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f64b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f64b8:
    // 0x1f64b8: 0xc05612c  jal         func_1584B0
label_1f64bc:
    if (ctx->pc == 0x1F64BCu) {
        ctx->pc = 0x1F64C0u;
        goto label_1f64c0;
    }
    ctx->pc = 0x1F64B8u;
    SET_GPR_U32(ctx, 31, 0x1F64C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F64B8u, 0x1F64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64C0u;
label_1f64c0:
    // 0x1f64c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f64c4:
    // 0x1f64c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f64c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f64c8:
    // 0x1f64c8: 0xc08c258  jal         func_230960
label_1f64cc:
    if (ctx->pc == 0x1F64CCu) {
        ctx->pc = 0x1F64D0u;
        goto label_1f64d0;
    }
    ctx->pc = 0x1F64C8u;
    SET_GPR_U32(ctx, 31, 0x1F64D0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F64C8u, 0x1F64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64D0u;
label_1f64d0:
    // 0x1f64d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f64d4:
    // 0x1f64d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f64d8:
    // 0x1f64d8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f64dc:
    // 0x1f64dc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1f64dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f64e0:
    // 0x1f64e0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f64e4:
    if (ctx->pc == 0x1F64E4u) {
        ctx->pc = 0x1F64E8u;
        goto label_1f64e8;
    }
    ctx->pc = 0x1F64E0u;
    {
        const bool branch_taken_0x1f64e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f64e0) {
            ctx->pc = 0x1F649Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f649c;
        }
    }
    ctx->pc = 0x1F64E8u;
label_1f64e8:
    // 0x1f64e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f64e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f64ec:
    // 0x1f64ec: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f64f0:
    if (ctx->pc == 0x1F64F0u) {
        ctx->pc = 0x1F64F4u;
        goto label_1f64f4;
    }
    ctx->pc = 0x1F64ECu;
    {
        const bool branch_taken_0x1f64ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f64ec) {
            ctx->pc = 0x1F652Cu;
            goto label_1f652c;
        }
    }
    ctx->pc = 0x1F64F4u;
label_1f64f4:
    // 0x1f64f4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f64f8:
    // 0x1f64f8: 0xc06479c  jal         func_191E70
label_1f64fc:
    if (ctx->pc == 0x1F64FCu) {
        ctx->pc = 0x1F6500u;
        goto label_1f6500;
    }
    ctx->pc = 0x1F64F8u;
    SET_GPR_U32(ctx, 31, 0x1F6500u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F64F8u, 0x1F6500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6500u;
label_1f6500:
    // 0x1f6500: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f6500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6504:
    // 0x1f6504: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f6504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6508:
    // 0x1f6508: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
label_1f650c:
    // 0x1f650c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f650cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6510:
    // 0x1f6510: 0xc05612c  jal         func_1584B0
label_1f6514:
    if (ctx->pc == 0x1F6514u) {
        ctx->pc = 0x1F6518u;
        goto label_1f6518;
    }
    ctx->pc = 0x1F6510u;
    SET_GPR_U32(ctx, 31, 0x1F6518u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6510u, 0x1F6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6518u;
label_1f6518:
    // 0x1f6518: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f651c:
    // 0x1f651c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6520:
    // 0x1f6520: 0xc08c258  jal         func_230960
label_1f6524:
    if (ctx->pc == 0x1F6524u) {
        ctx->pc = 0x1F6528u;
        goto label_1f6528;
    }
    ctx->pc = 0x1F6520u;
    SET_GPR_U32(ctx, 31, 0x1F6528u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F6520u, 0x1F6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6528u;
label_1f6528:
    // 0x1f6528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f652c:
    // 0x1f652c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6530:
    // 0x1f6530: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f6530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f6534:
    // 0x1f6534: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f6534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6538:
    // 0x1f6538: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f653c:
    if (ctx->pc == 0x1F653Cu) {
        ctx->pc = 0x1F6540u;
        goto label_1f6540;
    }
    ctx->pc = 0x1F6538u;
    {
        const bool branch_taken_0x1f6538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6538) {
            ctx->pc = 0x1F64F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f64f4;
        }
    }
    ctx->pc = 0x1F6540u;
label_1f6540:
    // 0x1f6540: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f6540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6544:
    // 0x1f6544: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f6548:
    if (ctx->pc == 0x1F6548u) {
        ctx->pc = 0x1F654Cu;
        goto label_1f654c;
    }
    ctx->pc = 0x1F6544u;
    {
        const bool branch_taken_0x1f6544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6544) {
            ctx->pc = 0x1F6584u;
            goto label_1f6584;
        }
    }
    ctx->pc = 0x1F654Cu;
label_1f654c:
    // 0x1f654c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6550:
    // 0x1f6550: 0xc06479c  jal         func_191E70
label_1f6554:
    if (ctx->pc == 0x1F6554u) {
        ctx->pc = 0x1F6558u;
        goto label_1f6558;
    }
    ctx->pc = 0x1F6550u;
    SET_GPR_U32(ctx, 31, 0x1F6558u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6550u, 0x1F6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6558u;
label_1f6558:
    // 0x1f6558: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f6558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f655c:
    // 0x1f655c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6560:
    // 0x1f6560: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1f6564:
    // 0x1f6564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6568:
    // 0x1f6568: 0xc05612c  jal         func_1584B0
label_1f656c:
    if (ctx->pc == 0x1F656Cu) {
        ctx->pc = 0x1F6570u;
        goto label_1f6570;
    }
    ctx->pc = 0x1F6568u;
    SET_GPR_U32(ctx, 31, 0x1F6570u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6568u, 0x1F6570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6570u;
label_1f6570:
    // 0x1f6570: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6574:
    // 0x1f6574: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f6574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f6578:
    // 0x1f6578: 0xc08c258  jal         func_230960
label_1f657c:
    if (ctx->pc == 0x1F657Cu) {
        ctx->pc = 0x1F6580u;
        goto label_1f6580;
    }
    ctx->pc = 0x1F6578u;
    SET_GPR_U32(ctx, 31, 0x1F6580u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F6578u, 0x1F6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6580u;
label_1f6580:
    // 0x1f6580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6584:
    // 0x1f6584: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6588:
    // 0x1f6588: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1f658c:
    // 0x1f658c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f658cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f6590:
    // 0x1f6590: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1f6594:
    if (ctx->pc == 0x1F6594u) {
        ctx->pc = 0x1F6598u;
        goto label_1f6598;
    }
    ctx->pc = 0x1F6590u;
    {
        const bool branch_taken_0x1f6590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6590) {
            ctx->pc = 0x1F654Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f654c;
        }
    }
    ctx->pc = 0x1F6598u;
label_1f6598:
    // 0x1f6598: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f6598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f659c:
    // 0x1f659c: 0xc06479c  jal         func_191E70
label_1f65a0:
    if (ctx->pc == 0x1F65A0u) {
        ctx->pc = 0x1F65A4u;
        goto label_1f65a4;
    }
    ctx->pc = 0x1F659Cu;
    SET_GPR_U32(ctx, 31, 0x1F65A4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F659Cu, 0x1F65A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65A4u;
label_1f65a4:
    // 0x1f65a4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f65a8:
    // 0x1f65a8: 0x8c650190  lw          $a1, 0x190($v1)
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
label_1f65ac:
    // 0x1f65ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f65acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f65b0:
    // 0x1f65b0: 0xc08c258  jal         func_230960
label_1f65b4:
    if (ctx->pc == 0x1F65B4u) {
        ctx->pc = 0x1F65B8u;
        goto label_1f65b8;
    }
    ctx->pc = 0x1F65B0u;
    SET_GPR_U32(ctx, 31, 0x1F65B8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F65B0u, 0x1F65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65B8u;
label_1f65b8:
    // 0x1f65b8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f65b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f65bc:
    // 0x1f65bc: 0xc06479c  jal         func_191E70
label_1f65c0:
    if (ctx->pc == 0x1F65C0u) {
        ctx->pc = 0x1F65C4u;
        goto label_1f65c4;
    }
    ctx->pc = 0x1F65BCu;
    SET_GPR_U32(ctx, 31, 0x1F65C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F65BCu, 0x1F65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65C4u;
label_1f65c4:
    // 0x1f65c4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f65c8:
    // 0x1f65c8: 0x8c650194  lw          $a1, 0x194($v1)
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_1f65cc:
    // 0x1f65cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f65d0:
    // 0x1f65d0: 0xc08c258  jal         func_230960
label_1f65d4:
    if (ctx->pc == 0x1F65D4u) {
        ctx->pc = 0x1F65D8u;
        goto label_1f65d8;
    }
    ctx->pc = 0x1F65D0u;
    SET_GPR_U32(ctx, 31, 0x1F65D8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F65D0u, 0x1F65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65D8u;
label_1f65d8:
    // 0x1f65d8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f65d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f65dc:
    // 0x1f65dc: 0xc06479c  jal         func_191E70
label_1f65e0:
    if (ctx->pc == 0x1F65E0u) {
        ctx->pc = 0x1F65E4u;
        goto label_1f65e4;
    }
    ctx->pc = 0x1F65DCu;
    SET_GPR_U32(ctx, 31, 0x1F65E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F65DCu, 0x1F65E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65E4u;
label_1f65e4:
    // 0x1f65e4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f65e8:
    // 0x1f65e8: 0x8c650198  lw          $a1, 0x198($v1)
    ctx->pc = 0x1f65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
label_1f65ec:
    // 0x1f65ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f65ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f65f0:
    // 0x1f65f0: 0xc08c258  jal         func_230960
label_1f65f4:
    if (ctx->pc == 0x1F65F4u) {
        ctx->pc = 0x1F65F8u;
        goto label_1f65f8;
    }
    ctx->pc = 0x1F65F0u;
    SET_GPR_U32(ctx, 31, 0x1F65F8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F65F0u, 0x1F65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65F8u;
label_1f65f8:
    // 0x1f65f8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1f65f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f65fc:
    // 0x1f65fc: 0xc06479c  jal         func_191E70
label_1f6600:
    if (ctx->pc == 0x1F6600u) {
        ctx->pc = 0x1F6604u;
        goto label_1f6604;
    }
    ctx->pc = 0x1F65FCu;
    SET_GPR_U32(ctx, 31, 0x1F6604u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F65FCu, 0x1F6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6604u;
label_1f6604:
    // 0x1f6604: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6608:
    // 0x1f6608: 0x8c65019c  lw          $a1, 0x19C($v1)
    ctx->pc = 0x1f6608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_1f660c:
    // 0x1f660c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6610:
    // 0x1f6610: 0xc08c258  jal         func_230960
label_1f6614:
    if (ctx->pc == 0x1F6614u) {
        ctx->pc = 0x1F6618u;
        goto label_1f6618;
    }
    ctx->pc = 0x1F6610u;
    SET_GPR_U32(ctx, 31, 0x1F6618u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F6610u, 0x1F6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6618u;
label_1f6618:
    // 0x1f6618: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f6618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f661c:
    // 0x1f661c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f661cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f6620:
    // 0x1f6620: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f6620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6624:
    // 0x1f6624: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6628:
    // 0x1f6628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f6628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f662c:
    // 0x1f662c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f662cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6630:
    // 0x1f6630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6634:
    // 0x1f6634: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f6638:
    // 0x1f6638: 0x3e00008  jr          $ra
label_1f663c:
    if (ctx->pc == 0x1F663Cu) {
        ctx->pc = 0x1F6640u;
        goto label_1f6640;
    }
    ctx->pc = 0x1F6638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6640u;
label_1f6640:
    // 0x1f6640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f6644:
    // 0x1f6644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f6648:
    // 0x1f6648: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f664c:
    // 0x1f664c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f664cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f6650:
    // 0x1f6650: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f6650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1f6654:
    // 0x1f6654: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6658:
    // 0x1f6658: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f6658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f665c:
    // 0x1f665c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1f6660:
    if (ctx->pc == 0x1F6660u) {
        ctx->pc = 0x1F6664u;
        goto label_1f6664;
    }
    ctx->pc = 0x1F665Cu;
    {
        const bool branch_taken_0x1f665c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f665c) {
            ctx->pc = 0x1F66ACu;
            goto label_1f66ac;
        }
    }
    ctx->pc = 0x1F6664u;
label_1f6664:
    // 0x1f6664: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1f6664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1f6668:
    // 0x1f6668: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f6668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f666c:
    // 0x1f666c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1f666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f6670:
    // 0x1f6670: 0xc085538  jal         func_2154E0
label_1f6674:
    if (ctx->pc == 0x1F6674u) {
        ctx->pc = 0x1F6678u;
        goto label_1f6678;
    }
    ctx->pc = 0x1F6670u;
    SET_GPR_U32(ctx, 31, 0x1F6678u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F6670u, 0x1F6678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6678u;
label_1f6678:
    // 0x1f6678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f6678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f667c:
    // 0x1f667c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1f6680:
    if (ctx->pc == 0x1F6680u) {
        ctx->pc = 0x1F6684u;
        goto label_1f6684;
    }
    ctx->pc = 0x1F667Cu;
    {
        const bool branch_taken_0x1f667c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f667c) {
            ctx->pc = 0x1F66ACu;
            goto label_1f66ac;
        }
    }
    ctx->pc = 0x1F6684u;
label_1f6684:
    // 0x1f6684: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f6684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f6688:
    // 0x1f6688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f668c:
    // 0x1f668c: 0xc040aa8  jal         func_102AA0
label_1f6690:
    if (ctx->pc == 0x1F6690u) {
        ctx->pc = 0x1F6694u;
        goto label_1f6694;
    }
    ctx->pc = 0x1F668Cu;
    SET_GPR_U32(ctx, 31, 0x1F6694u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1F668Cu, 0x1F6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6694u;
label_1f6694:
    // 0x1f6694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6698:
    // 0x1f6698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f669c:
    // 0x1f669c: 0xc040a90  jal         func_102A40
label_1f66a0:
    if (ctx->pc == 0x1F66A0u) {
        ctx->pc = 0x1F66A4u;
        goto label_1f66a4;
    }
    ctx->pc = 0x1F669Cu;
    SET_GPR_U32(ctx, 31, 0x1F66A4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1F669Cu, 0x1F66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F66A4u;
label_1f66a4:
    // 0x1f66a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f66a8:
    // 0x1f66a8: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x1f66a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1f66ac:
    // 0x1f66ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f66acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f66b0:
    // 0x1f66b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f66b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f66b4:
    // 0x1f66b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f66b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f66b8:
    // 0x1f66b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f66b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f66bc:
    // 0x1f66bc: 0x3e00008  jr          $ra
label_1f66c0:
    if (ctx->pc == 0x1F66C0u) {
        ctx->pc = 0x1F66C4u;
        goto label_1f66c4;
    }
    ctx->pc = 0x1F66BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F66BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F66C4u;
label_1f66c4:
    // 0x1f66c4: 0x0  nop
    ctx->pc = 0x1f66c4u;
    // NOP
label_1f66c8:
    // 0x1f66c8: 0x0  nop
    ctx->pc = 0x1f66c8u;
    // NOP
label_1f66cc:
    // 0x1f66cc: 0x0  nop
    ctx->pc = 0x1f66ccu;
    // NOP
label_1f66d0:
    // 0x1f66d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f66d4:
    // 0x1f66d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f66d8:
    // 0x1f66d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f66d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f66dc:
    // 0x1f66dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f66dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1f66e0:
    // 0x1f66e0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1f66e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f66e4:
    // 0x1f66e4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1f66e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f66e8:
    // 0x1f66e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f66ec:
    // 0x1f66ec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f66f0:
    // 0x1f66f0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1f66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f66f4:
    // 0x1f66f4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1f66f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f66f8:
    // 0x1f66f8: 0xc064e90  jal         func_193A40
label_1f66fc:
    if (ctx->pc == 0x1F66FCu) {
        ctx->pc = 0x1F6700u;
        goto label_1f6700;
    }
    ctx->pc = 0x1F66F8u;
    SET_GPR_U32(ctx, 31, 0x1F6700u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1F66F8u, 0x1F6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6700u;
label_1f6700:
    // 0x1f6700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6704:
    // 0x1f6704: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f6704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f6708:
    // 0x1f6708: 0x3e00008  jr          $ra
label_1f670c:
    if (ctx->pc == 0x1F670Cu) {
        ctx->pc = 0x1F6710u;
        goto label_1f6710;
    }
    ctx->pc = 0x1F6708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6710u;
label_1f6710:
    // 0x1f6710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f6714:
    // 0x1f6714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f6718:
    // 0x1f6718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f6718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f671c:
    // 0x1f671c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1f6720:
    // 0x1f6720: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1f6720u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f6724:
    // 0x1f6724: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1f6724u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f6728:
    // 0x1f6728: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f672c:
    // 0x1f672c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f672cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6730:
    // 0x1f6730: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1f6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f6734:
    // 0x1f6734: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1f6734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f6738:
    // 0x1f6738: 0xc064f2c  jal         func_193CB0
label_1f673c:
    if (ctx->pc == 0x1F673Cu) {
        ctx->pc = 0x1F6740u;
        goto label_1f6740;
    }
    ctx->pc = 0x1F6738u;
    SET_GPR_U32(ctx, 31, 0x1F6740u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1F6738u, 0x1F6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6740u;
label_1f6740:
    // 0x1f6740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6744:
    // 0x1f6744: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f6744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f6748:
    // 0x1f6748: 0x3e00008  jr          $ra
label_1f674c:
    if (ctx->pc == 0x1F674Cu) {
        ctx->pc = 0x1F6750u;
        goto label_1f6750;
    }
    ctx->pc = 0x1F6748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6750u;
label_1f6750:
    // 0x1f6750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f6754:
    // 0x1f6754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f6758:
    // 0x1f6758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f6758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f675c:
    // 0x1f675c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1f6760:
    // 0x1f6760: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1f6760u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f6764:
    // 0x1f6764: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1f6764u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1f6768:
    // 0x1f6768: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f6768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f676c:
    // 0x1f676c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f676cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6770:
    // 0x1f6770: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1f6770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f6774:
    // 0x1f6774: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1f6774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f6778:
    // 0x1f6778: 0xc064ff8  jal         func_193FE0
label_1f677c:
    if (ctx->pc == 0x1F677Cu) {
        ctx->pc = 0x1F6780u;
        goto label_1f6780;
    }
    ctx->pc = 0x1F6778u;
    SET_GPR_U32(ctx, 31, 0x1F6780u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1F6778u, 0x1F6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6780u;
label_1f6780:
    // 0x1f6780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6784:
    // 0x1f6784: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f6784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f6788:
    // 0x1f6788: 0x3e00008  jr          $ra
label_1f678c:
    if (ctx->pc == 0x1F678Cu) {
        ctx->pc = 0x1F6790u;
        goto label_1f6790;
    }
    ctx->pc = 0x1F6788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6790u;
label_1f6790:
    // 0x1f6790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f6794:
    // 0x1f6794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f6798:
    // 0x1f6798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f6798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f679c:
    // 0x1f679c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f679cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1f67a0:
    // 0x1f67a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f67a4:
    // 0x1f67a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f67a8:
    // 0x1f67a8: 0xc0650f0  jal         func_1943C0
label_1f67ac:
    if (ctx->pc == 0x1F67ACu) {
        ctx->pc = 0x1F67B0u;
        goto label_1f67b0;
    }
    ctx->pc = 0x1F67A8u;
    SET_GPR_U32(ctx, 31, 0x1F67B0u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1F67A8u, 0x1F67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67B0u;
label_1f67b0:
    // 0x1f67b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f67b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f67b4:
    // 0x1f67b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f67b8:
    // 0x1f67b8: 0x3e00008  jr          $ra
label_1f67bc:
    if (ctx->pc == 0x1F67BCu) {
        ctx->pc = 0x1F67C0u;
        goto label_1f67c0;
    }
    ctx->pc = 0x1F67B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F67B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F67C0u;
label_1f67c0:
    // 0x1f67c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f67c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f67c4:
    // 0x1f67c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f67c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f67c8:
    // 0x1f67c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1f67cc:
    // 0x1f67cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1f67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1f67d0:
    // 0x1f67d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1f67d4:
    // 0x1f67d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1f67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f67d8:
    // 0x1f67d8: 0xc0650f4  jal         func_1943D0
label_1f67dc:
    if (ctx->pc == 0x1F67DCu) {
        ctx->pc = 0x1F67E0u;
        goto label_1f67e0;
    }
    ctx->pc = 0x1F67D8u;
    SET_GPR_U32(ctx, 31, 0x1F67E0u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1F67D8u, 0x1F67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67E0u;
label_1f67e0:
    // 0x1f67e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f67e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f67e4:
    // 0x1f67e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f67e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f67e8:
    // 0x1f67e8: 0x3e00008  jr          $ra
label_1f67ec:
    if (ctx->pc == 0x1F67ECu) {
        ctx->pc = 0x1F67F0u;
        goto label_fallthrough_0x1f67e8;
    }
    ctx->pc = 0x1F67E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F67E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f67e8:
    ctx->pc = 0x1F67F0u;
}
