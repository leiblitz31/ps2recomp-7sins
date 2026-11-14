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

// Function: sub_001D6B00
// Address: 0x1d6b00 - 0x1d89f0
void sub_001D6B00_0x1d6b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6B00_0x1d6b00");
#endif

    switch (ctx->pc) {
        case 0x1d6b00u: goto label_1d6b00;
        case 0x1d6b04u: goto label_1d6b04;
        case 0x1d6b08u: goto label_1d6b08;
        case 0x1d6b0cu: goto label_1d6b0c;
        case 0x1d6b10u: goto label_1d6b10;
        case 0x1d6b14u: goto label_1d6b14;
        case 0x1d6b18u: goto label_1d6b18;
        case 0x1d6b1cu: goto label_1d6b1c;
        case 0x1d6b20u: goto label_1d6b20;
        case 0x1d6b24u: goto label_1d6b24;
        case 0x1d6b28u: goto label_1d6b28;
        case 0x1d6b2cu: goto label_1d6b2c;
        case 0x1d6b30u: goto label_1d6b30;
        case 0x1d6b34u: goto label_1d6b34;
        case 0x1d6b38u: goto label_1d6b38;
        case 0x1d6b3cu: goto label_1d6b3c;
        case 0x1d6b40u: goto label_1d6b40;
        case 0x1d6b44u: goto label_1d6b44;
        case 0x1d6b48u: goto label_1d6b48;
        case 0x1d6b4cu: goto label_1d6b4c;
        case 0x1d6b50u: goto label_1d6b50;
        case 0x1d6b54u: goto label_1d6b54;
        case 0x1d6b58u: goto label_1d6b58;
        case 0x1d6b5cu: goto label_1d6b5c;
        case 0x1d6b60u: goto label_1d6b60;
        case 0x1d6b64u: goto label_1d6b64;
        case 0x1d6b68u: goto label_1d6b68;
        case 0x1d6b6cu: goto label_1d6b6c;
        case 0x1d6b70u: goto label_1d6b70;
        case 0x1d6b74u: goto label_1d6b74;
        case 0x1d6b78u: goto label_1d6b78;
        case 0x1d6b7cu: goto label_1d6b7c;
        case 0x1d6b80u: goto label_1d6b80;
        case 0x1d6b84u: goto label_1d6b84;
        case 0x1d6b88u: goto label_1d6b88;
        case 0x1d6b8cu: goto label_1d6b8c;
        case 0x1d6b90u: goto label_1d6b90;
        case 0x1d6b94u: goto label_1d6b94;
        case 0x1d6b98u: goto label_1d6b98;
        case 0x1d6b9cu: goto label_1d6b9c;
        case 0x1d6ba0u: goto label_1d6ba0;
        case 0x1d6ba4u: goto label_1d6ba4;
        case 0x1d6ba8u: goto label_1d6ba8;
        case 0x1d6bacu: goto label_1d6bac;
        case 0x1d6bb0u: goto label_1d6bb0;
        case 0x1d6bb4u: goto label_1d6bb4;
        case 0x1d6bb8u: goto label_1d6bb8;
        case 0x1d6bbcu: goto label_1d6bbc;
        case 0x1d6bc0u: goto label_1d6bc0;
        case 0x1d6bc4u: goto label_1d6bc4;
        case 0x1d6bc8u: goto label_1d6bc8;
        case 0x1d6bccu: goto label_1d6bcc;
        case 0x1d6bd0u: goto label_1d6bd0;
        case 0x1d6bd4u: goto label_1d6bd4;
        case 0x1d6bd8u: goto label_1d6bd8;
        case 0x1d6bdcu: goto label_1d6bdc;
        case 0x1d6be0u: goto label_1d6be0;
        case 0x1d6be4u: goto label_1d6be4;
        case 0x1d6be8u: goto label_1d6be8;
        case 0x1d6becu: goto label_1d6bec;
        case 0x1d6bf0u: goto label_1d6bf0;
        case 0x1d6bf4u: goto label_1d6bf4;
        case 0x1d6bf8u: goto label_1d6bf8;
        case 0x1d6bfcu: goto label_1d6bfc;
        case 0x1d6c00u: goto label_1d6c00;
        case 0x1d6c04u: goto label_1d6c04;
        case 0x1d6c08u: goto label_1d6c08;
        case 0x1d6c0cu: goto label_1d6c0c;
        case 0x1d6c10u: goto label_1d6c10;
        case 0x1d6c14u: goto label_1d6c14;
        case 0x1d6c18u: goto label_1d6c18;
        case 0x1d6c1cu: goto label_1d6c1c;
        case 0x1d6c20u: goto label_1d6c20;
        case 0x1d6c24u: goto label_1d6c24;
        case 0x1d6c28u: goto label_1d6c28;
        case 0x1d6c2cu: goto label_1d6c2c;
        case 0x1d6c30u: goto label_1d6c30;
        case 0x1d6c34u: goto label_1d6c34;
        case 0x1d6c38u: goto label_1d6c38;
        case 0x1d6c3cu: goto label_1d6c3c;
        case 0x1d6c40u: goto label_1d6c40;
        case 0x1d6c44u: goto label_1d6c44;
        case 0x1d6c48u: goto label_1d6c48;
        case 0x1d6c4cu: goto label_1d6c4c;
        case 0x1d6c50u: goto label_1d6c50;
        case 0x1d6c54u: goto label_1d6c54;
        case 0x1d6c58u: goto label_1d6c58;
        case 0x1d6c5cu: goto label_1d6c5c;
        case 0x1d6c60u: goto label_1d6c60;
        case 0x1d6c64u: goto label_1d6c64;
        case 0x1d6c68u: goto label_1d6c68;
        case 0x1d6c6cu: goto label_1d6c6c;
        case 0x1d6c70u: goto label_1d6c70;
        case 0x1d6c74u: goto label_1d6c74;
        case 0x1d6c78u: goto label_1d6c78;
        case 0x1d6c7cu: goto label_1d6c7c;
        case 0x1d6c80u: goto label_1d6c80;
        case 0x1d6c84u: goto label_1d6c84;
        case 0x1d6c88u: goto label_1d6c88;
        case 0x1d6c8cu: goto label_1d6c8c;
        case 0x1d6c90u: goto label_1d6c90;
        case 0x1d6c94u: goto label_1d6c94;
        case 0x1d6c98u: goto label_1d6c98;
        case 0x1d6c9cu: goto label_1d6c9c;
        case 0x1d6ca0u: goto label_1d6ca0;
        case 0x1d6ca4u: goto label_1d6ca4;
        case 0x1d6ca8u: goto label_1d6ca8;
        case 0x1d6cacu: goto label_1d6cac;
        case 0x1d6cb0u: goto label_1d6cb0;
        case 0x1d6cb4u: goto label_1d6cb4;
        case 0x1d6cb8u: goto label_1d6cb8;
        case 0x1d6cbcu: goto label_1d6cbc;
        case 0x1d6cc0u: goto label_1d6cc0;
        case 0x1d6cc4u: goto label_1d6cc4;
        case 0x1d6cc8u: goto label_1d6cc8;
        case 0x1d6cccu: goto label_1d6ccc;
        case 0x1d6cd0u: goto label_1d6cd0;
        case 0x1d6cd4u: goto label_1d6cd4;
        case 0x1d6cd8u: goto label_1d6cd8;
        case 0x1d6cdcu: goto label_1d6cdc;
        case 0x1d6ce0u: goto label_1d6ce0;
        case 0x1d6ce4u: goto label_1d6ce4;
        case 0x1d6ce8u: goto label_1d6ce8;
        case 0x1d6cecu: goto label_1d6cec;
        case 0x1d6cf0u: goto label_1d6cf0;
        case 0x1d6cf4u: goto label_1d6cf4;
        case 0x1d6cf8u: goto label_1d6cf8;
        case 0x1d6cfcu: goto label_1d6cfc;
        case 0x1d6d00u: goto label_1d6d00;
        case 0x1d6d04u: goto label_1d6d04;
        case 0x1d6d08u: goto label_1d6d08;
        case 0x1d6d0cu: goto label_1d6d0c;
        case 0x1d6d10u: goto label_1d6d10;
        case 0x1d6d14u: goto label_1d6d14;
        case 0x1d6d18u: goto label_1d6d18;
        case 0x1d6d1cu: goto label_1d6d1c;
        case 0x1d6d20u: goto label_1d6d20;
        case 0x1d6d24u: goto label_1d6d24;
        case 0x1d6d28u: goto label_1d6d28;
        case 0x1d6d2cu: goto label_1d6d2c;
        case 0x1d6d30u: goto label_1d6d30;
        case 0x1d6d34u: goto label_1d6d34;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d3cu: goto label_1d6d3c;
        case 0x1d6d40u: goto label_1d6d40;
        case 0x1d6d44u: goto label_1d6d44;
        case 0x1d6d48u: goto label_1d6d48;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d50u: goto label_1d6d50;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d58u: goto label_1d6d58;
        case 0x1d6d5cu: goto label_1d6d5c;
        case 0x1d6d60u: goto label_1d6d60;
        case 0x1d6d64u: goto label_1d6d64;
        case 0x1d6d68u: goto label_1d6d68;
        case 0x1d6d6cu: goto label_1d6d6c;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6d80u: goto label_1d6d80;
        case 0x1d6d84u: goto label_1d6d84;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6d8cu: goto label_1d6d8c;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6d98u: goto label_1d6d98;
        case 0x1d6d9cu: goto label_1d6d9c;
        case 0x1d6da0u: goto label_1d6da0;
        case 0x1d6da4u: goto label_1d6da4;
        case 0x1d6da8u: goto label_1d6da8;
        case 0x1d6dacu: goto label_1d6dac;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6db8u: goto label_1d6db8;
        case 0x1d6dbcu: goto label_1d6dbc;
        case 0x1d6dc0u: goto label_1d6dc0;
        case 0x1d6dc4u: goto label_1d6dc4;
        case 0x1d6dc8u: goto label_1d6dc8;
        case 0x1d6dccu: goto label_1d6dcc;
        case 0x1d6dd0u: goto label_1d6dd0;
        case 0x1d6dd4u: goto label_1d6dd4;
        case 0x1d6dd8u: goto label_1d6dd8;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6de0u: goto label_1d6de0;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6de8u: goto label_1d6de8;
        case 0x1d6decu: goto label_1d6dec;
        case 0x1d6df0u: goto label_1d6df0;
        case 0x1d6df4u: goto label_1d6df4;
        case 0x1d6df8u: goto label_1d6df8;
        case 0x1d6dfcu: goto label_1d6dfc;
        case 0x1d6e00u: goto label_1d6e00;
        case 0x1d6e04u: goto label_1d6e04;
        case 0x1d6e08u: goto label_1d6e08;
        case 0x1d6e0cu: goto label_1d6e0c;
        case 0x1d6e10u: goto label_1d6e10;
        case 0x1d6e14u: goto label_1d6e14;
        case 0x1d6e18u: goto label_1d6e18;
        case 0x1d6e1cu: goto label_1d6e1c;
        case 0x1d6e20u: goto label_1d6e20;
        case 0x1d6e24u: goto label_1d6e24;
        case 0x1d6e28u: goto label_1d6e28;
        case 0x1d6e2cu: goto label_1d6e2c;
        case 0x1d6e30u: goto label_1d6e30;
        case 0x1d6e34u: goto label_1d6e34;
        case 0x1d6e38u: goto label_1d6e38;
        case 0x1d6e3cu: goto label_1d6e3c;
        case 0x1d6e40u: goto label_1d6e40;
        case 0x1d6e44u: goto label_1d6e44;
        case 0x1d6e48u: goto label_1d6e48;
        case 0x1d6e4cu: goto label_1d6e4c;
        case 0x1d6e50u: goto label_1d6e50;
        case 0x1d6e54u: goto label_1d6e54;
        case 0x1d6e58u: goto label_1d6e58;
        case 0x1d6e5cu: goto label_1d6e5c;
        case 0x1d6e60u: goto label_1d6e60;
        case 0x1d6e64u: goto label_1d6e64;
        case 0x1d6e68u: goto label_1d6e68;
        case 0x1d6e6cu: goto label_1d6e6c;
        case 0x1d6e70u: goto label_1d6e70;
        case 0x1d6e74u: goto label_1d6e74;
        case 0x1d6e78u: goto label_1d6e78;
        case 0x1d6e7cu: goto label_1d6e7c;
        case 0x1d6e80u: goto label_1d6e80;
        case 0x1d6e84u: goto label_1d6e84;
        case 0x1d6e88u: goto label_1d6e88;
        case 0x1d6e8cu: goto label_1d6e8c;
        case 0x1d6e90u: goto label_1d6e90;
        case 0x1d6e94u: goto label_1d6e94;
        case 0x1d6e98u: goto label_1d6e98;
        case 0x1d6e9cu: goto label_1d6e9c;
        case 0x1d6ea0u: goto label_1d6ea0;
        case 0x1d6ea4u: goto label_1d6ea4;
        case 0x1d6ea8u: goto label_1d6ea8;
        case 0x1d6eacu: goto label_1d6eac;
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6eb4u: goto label_1d6eb4;
        case 0x1d6eb8u: goto label_1d6eb8;
        case 0x1d6ebcu: goto label_1d6ebc;
        case 0x1d6ec0u: goto label_1d6ec0;
        case 0x1d6ec4u: goto label_1d6ec4;
        case 0x1d6ec8u: goto label_1d6ec8;
        case 0x1d6eccu: goto label_1d6ecc;
        case 0x1d6ed0u: goto label_1d6ed0;
        case 0x1d6ed4u: goto label_1d6ed4;
        case 0x1d6ed8u: goto label_1d6ed8;
        case 0x1d6edcu: goto label_1d6edc;
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6ee4u: goto label_1d6ee4;
        case 0x1d6ee8u: goto label_1d6ee8;
        case 0x1d6eecu: goto label_1d6eec;
        case 0x1d6ef0u: goto label_1d6ef0;
        case 0x1d6ef4u: goto label_1d6ef4;
        case 0x1d6ef8u: goto label_1d6ef8;
        case 0x1d6efcu: goto label_1d6efc;
        case 0x1d6f00u: goto label_1d6f00;
        case 0x1d6f04u: goto label_1d6f04;
        case 0x1d6f08u: goto label_1d6f08;
        case 0x1d6f0cu: goto label_1d6f0c;
        case 0x1d6f10u: goto label_1d6f10;
        case 0x1d6f14u: goto label_1d6f14;
        case 0x1d6f18u: goto label_1d6f18;
        case 0x1d6f1cu: goto label_1d6f1c;
        case 0x1d6f20u: goto label_1d6f20;
        case 0x1d6f24u: goto label_1d6f24;
        case 0x1d6f28u: goto label_1d6f28;
        case 0x1d6f2cu: goto label_1d6f2c;
        case 0x1d6f30u: goto label_1d6f30;
        case 0x1d6f34u: goto label_1d6f34;
        case 0x1d6f38u: goto label_1d6f38;
        case 0x1d6f3cu: goto label_1d6f3c;
        case 0x1d6f40u: goto label_1d6f40;
        case 0x1d6f44u: goto label_1d6f44;
        case 0x1d6f48u: goto label_1d6f48;
        case 0x1d6f4cu: goto label_1d6f4c;
        case 0x1d6f50u: goto label_1d6f50;
        case 0x1d6f54u: goto label_1d6f54;
        case 0x1d6f58u: goto label_1d6f58;
        case 0x1d6f5cu: goto label_1d6f5c;
        case 0x1d6f60u: goto label_1d6f60;
        case 0x1d6f64u: goto label_1d6f64;
        case 0x1d6f68u: goto label_1d6f68;
        case 0x1d6f6cu: goto label_1d6f6c;
        case 0x1d6f70u: goto label_1d6f70;
        case 0x1d6f74u: goto label_1d6f74;
        case 0x1d6f78u: goto label_1d6f78;
        case 0x1d6f7cu: goto label_1d6f7c;
        case 0x1d6f80u: goto label_1d6f80;
        case 0x1d6f84u: goto label_1d6f84;
        case 0x1d6f88u: goto label_1d6f88;
        case 0x1d6f8cu: goto label_1d6f8c;
        case 0x1d6f90u: goto label_1d6f90;
        case 0x1d6f94u: goto label_1d6f94;
        case 0x1d6f98u: goto label_1d6f98;
        case 0x1d6f9cu: goto label_1d6f9c;
        case 0x1d6fa0u: goto label_1d6fa0;
        case 0x1d6fa4u: goto label_1d6fa4;
        case 0x1d6fa8u: goto label_1d6fa8;
        case 0x1d6facu: goto label_1d6fac;
        case 0x1d6fb0u: goto label_1d6fb0;
        case 0x1d6fb4u: goto label_1d6fb4;
        case 0x1d6fb8u: goto label_1d6fb8;
        case 0x1d6fbcu: goto label_1d6fbc;
        case 0x1d6fc0u: goto label_1d6fc0;
        case 0x1d6fc4u: goto label_1d6fc4;
        case 0x1d6fc8u: goto label_1d6fc8;
        case 0x1d6fccu: goto label_1d6fcc;
        case 0x1d6fd0u: goto label_1d6fd0;
        case 0x1d6fd4u: goto label_1d6fd4;
        case 0x1d6fd8u: goto label_1d6fd8;
        case 0x1d6fdcu: goto label_1d6fdc;
        case 0x1d6fe0u: goto label_1d6fe0;
        case 0x1d6fe4u: goto label_1d6fe4;
        case 0x1d6fe8u: goto label_1d6fe8;
        case 0x1d6fecu: goto label_1d6fec;
        case 0x1d6ff0u: goto label_1d6ff0;
        case 0x1d6ff4u: goto label_1d6ff4;
        case 0x1d6ff8u: goto label_1d6ff8;
        case 0x1d6ffcu: goto label_1d6ffc;
        case 0x1d7000u: goto label_1d7000;
        case 0x1d7004u: goto label_1d7004;
        case 0x1d7008u: goto label_1d7008;
        case 0x1d700cu: goto label_1d700c;
        case 0x1d7010u: goto label_1d7010;
        case 0x1d7014u: goto label_1d7014;
        case 0x1d7018u: goto label_1d7018;
        case 0x1d701cu: goto label_1d701c;
        case 0x1d7020u: goto label_1d7020;
        case 0x1d7024u: goto label_1d7024;
        case 0x1d7028u: goto label_1d7028;
        case 0x1d702cu: goto label_1d702c;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d7034u: goto label_1d7034;
        case 0x1d7038u: goto label_1d7038;
        case 0x1d703cu: goto label_1d703c;
        case 0x1d7040u: goto label_1d7040;
        case 0x1d7044u: goto label_1d7044;
        case 0x1d7048u: goto label_1d7048;
        case 0x1d704cu: goto label_1d704c;
        case 0x1d7050u: goto label_1d7050;
        case 0x1d7054u: goto label_1d7054;
        case 0x1d7058u: goto label_1d7058;
        case 0x1d705cu: goto label_1d705c;
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7064u: goto label_1d7064;
        case 0x1d7068u: goto label_1d7068;
        case 0x1d706cu: goto label_1d706c;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d7074u: goto label_1d7074;
        case 0x1d7078u: goto label_1d7078;
        case 0x1d707cu: goto label_1d707c;
        case 0x1d7080u: goto label_1d7080;
        case 0x1d7084u: goto label_1d7084;
        case 0x1d7088u: goto label_1d7088;
        case 0x1d708cu: goto label_1d708c;
        case 0x1d7090u: goto label_1d7090;
        case 0x1d7094u: goto label_1d7094;
        case 0x1d7098u: goto label_1d7098;
        case 0x1d709cu: goto label_1d709c;
        case 0x1d70a0u: goto label_1d70a0;
        case 0x1d70a4u: goto label_1d70a4;
        case 0x1d70a8u: goto label_1d70a8;
        case 0x1d70acu: goto label_1d70ac;
        case 0x1d70b0u: goto label_1d70b0;
        case 0x1d70b4u: goto label_1d70b4;
        case 0x1d70b8u: goto label_1d70b8;
        case 0x1d70bcu: goto label_1d70bc;
        case 0x1d70c0u: goto label_1d70c0;
        case 0x1d70c4u: goto label_1d70c4;
        case 0x1d70c8u: goto label_1d70c8;
        case 0x1d70ccu: goto label_1d70cc;
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d70d4u: goto label_1d70d4;
        case 0x1d70d8u: goto label_1d70d8;
        case 0x1d70dcu: goto label_1d70dc;
        case 0x1d70e0u: goto label_1d70e0;
        case 0x1d70e4u: goto label_1d70e4;
        case 0x1d70e8u: goto label_1d70e8;
        case 0x1d70ecu: goto label_1d70ec;
        case 0x1d70f0u: goto label_1d70f0;
        case 0x1d70f4u: goto label_1d70f4;
        case 0x1d70f8u: goto label_1d70f8;
        case 0x1d70fcu: goto label_1d70fc;
        case 0x1d7100u: goto label_1d7100;
        case 0x1d7104u: goto label_1d7104;
        case 0x1d7108u: goto label_1d7108;
        case 0x1d710cu: goto label_1d710c;
        case 0x1d7110u: goto label_1d7110;
        case 0x1d7114u: goto label_1d7114;
        case 0x1d7118u: goto label_1d7118;
        case 0x1d711cu: goto label_1d711c;
        case 0x1d7120u: goto label_1d7120;
        case 0x1d7124u: goto label_1d7124;
        case 0x1d7128u: goto label_1d7128;
        case 0x1d712cu: goto label_1d712c;
        case 0x1d7130u: goto label_1d7130;
        case 0x1d7134u: goto label_1d7134;
        case 0x1d7138u: goto label_1d7138;
        case 0x1d713cu: goto label_1d713c;
        case 0x1d7140u: goto label_1d7140;
        case 0x1d7144u: goto label_1d7144;
        case 0x1d7148u: goto label_1d7148;
        case 0x1d714cu: goto label_1d714c;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7154u: goto label_1d7154;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d715cu: goto label_1d715c;
        case 0x1d7160u: goto label_1d7160;
        case 0x1d7164u: goto label_1d7164;
        case 0x1d7168u: goto label_1d7168;
        case 0x1d716cu: goto label_1d716c;
        case 0x1d7170u: goto label_1d7170;
        case 0x1d7174u: goto label_1d7174;
        case 0x1d7178u: goto label_1d7178;
        case 0x1d717cu: goto label_1d717c;
        case 0x1d7180u: goto label_1d7180;
        case 0x1d7184u: goto label_1d7184;
        case 0x1d7188u: goto label_1d7188;
        case 0x1d718cu: goto label_1d718c;
        case 0x1d7190u: goto label_1d7190;
        case 0x1d7194u: goto label_1d7194;
        case 0x1d7198u: goto label_1d7198;
        case 0x1d719cu: goto label_1d719c;
        case 0x1d71a0u: goto label_1d71a0;
        case 0x1d71a4u: goto label_1d71a4;
        case 0x1d71a8u: goto label_1d71a8;
        case 0x1d71acu: goto label_1d71ac;
        case 0x1d71b0u: goto label_1d71b0;
        case 0x1d71b4u: goto label_1d71b4;
        case 0x1d71b8u: goto label_1d71b8;
        case 0x1d71bcu: goto label_1d71bc;
        case 0x1d71c0u: goto label_1d71c0;
        case 0x1d71c4u: goto label_1d71c4;
        case 0x1d71c8u: goto label_1d71c8;
        case 0x1d71ccu: goto label_1d71cc;
        case 0x1d71d0u: goto label_1d71d0;
        case 0x1d71d4u: goto label_1d71d4;
        case 0x1d71d8u: goto label_1d71d8;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e0u: goto label_1d71e0;
        case 0x1d71e4u: goto label_1d71e4;
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71ecu: goto label_1d71ec;
        case 0x1d71f0u: goto label_1d71f0;
        case 0x1d71f4u: goto label_1d71f4;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d71fcu: goto label_1d71fc;
        case 0x1d7200u: goto label_1d7200;
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d720cu: goto label_1d720c;
        case 0x1d7210u: goto label_1d7210;
        case 0x1d7214u: goto label_1d7214;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d721cu: goto label_1d721c;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d7228u: goto label_1d7228;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7230u: goto label_1d7230;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d723cu: goto label_1d723c;
        case 0x1d7240u: goto label_1d7240;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        case 0x1d7270u: goto label_1d7270;
        case 0x1d7274u: goto label_1d7274;
        case 0x1d7278u: goto label_1d7278;
        case 0x1d727cu: goto label_1d727c;
        case 0x1d7280u: goto label_1d7280;
        case 0x1d7284u: goto label_1d7284;
        case 0x1d7288u: goto label_1d7288;
        case 0x1d728cu: goto label_1d728c;
        case 0x1d7290u: goto label_1d7290;
        case 0x1d7294u: goto label_1d7294;
        case 0x1d7298u: goto label_1d7298;
        case 0x1d729cu: goto label_1d729c;
        case 0x1d72a0u: goto label_1d72a0;
        case 0x1d72a4u: goto label_1d72a4;
        case 0x1d72a8u: goto label_1d72a8;
        case 0x1d72acu: goto label_1d72ac;
        case 0x1d72b0u: goto label_1d72b0;
        case 0x1d72b4u: goto label_1d72b4;
        case 0x1d72b8u: goto label_1d72b8;
        case 0x1d72bcu: goto label_1d72bc;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72c4u: goto label_1d72c4;
        case 0x1d72c8u: goto label_1d72c8;
        case 0x1d72ccu: goto label_1d72cc;
        case 0x1d72d0u: goto label_1d72d0;
        case 0x1d72d4u: goto label_1d72d4;
        case 0x1d72d8u: goto label_1d72d8;
        case 0x1d72dcu: goto label_1d72dc;
        case 0x1d72e0u: goto label_1d72e0;
        case 0x1d72e4u: goto label_1d72e4;
        case 0x1d72e8u: goto label_1d72e8;
        case 0x1d72ecu: goto label_1d72ec;
        case 0x1d72f0u: goto label_1d72f0;
        case 0x1d72f4u: goto label_1d72f4;
        case 0x1d72f8u: goto label_1d72f8;
        case 0x1d72fcu: goto label_1d72fc;
        case 0x1d7300u: goto label_1d7300;
        case 0x1d7304u: goto label_1d7304;
        case 0x1d7308u: goto label_1d7308;
        case 0x1d730cu: goto label_1d730c;
        case 0x1d7310u: goto label_1d7310;
        case 0x1d7314u: goto label_1d7314;
        case 0x1d7318u: goto label_1d7318;
        case 0x1d731cu: goto label_1d731c;
        case 0x1d7320u: goto label_1d7320;
        case 0x1d7324u: goto label_1d7324;
        case 0x1d7328u: goto label_1d7328;
        case 0x1d732cu: goto label_1d732c;
        case 0x1d7330u: goto label_1d7330;
        case 0x1d7334u: goto label_1d7334;
        case 0x1d7338u: goto label_1d7338;
        case 0x1d733cu: goto label_1d733c;
        case 0x1d7340u: goto label_1d7340;
        case 0x1d7344u: goto label_1d7344;
        case 0x1d7348u: goto label_1d7348;
        case 0x1d734cu: goto label_1d734c;
        case 0x1d7350u: goto label_1d7350;
        case 0x1d7354u: goto label_1d7354;
        case 0x1d7358u: goto label_1d7358;
        case 0x1d735cu: goto label_1d735c;
        case 0x1d7360u: goto label_1d7360;
        case 0x1d7364u: goto label_1d7364;
        case 0x1d7368u: goto label_1d7368;
        case 0x1d736cu: goto label_1d736c;
        case 0x1d7370u: goto label_1d7370;
        case 0x1d7374u: goto label_1d7374;
        case 0x1d7378u: goto label_1d7378;
        case 0x1d737cu: goto label_1d737c;
        case 0x1d7380u: goto label_1d7380;
        case 0x1d7384u: goto label_1d7384;
        case 0x1d7388u: goto label_1d7388;
        case 0x1d738cu: goto label_1d738c;
        case 0x1d7390u: goto label_1d7390;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d7398u: goto label_1d7398;
        case 0x1d739cu: goto label_1d739c;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73a8u: goto label_1d73a8;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73b0u: goto label_1d73b0;
        case 0x1d73b4u: goto label_1d73b4;
        case 0x1d73b8u: goto label_1d73b8;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73c0u: goto label_1d73c0;
        case 0x1d73c4u: goto label_1d73c4;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7458u: goto label_1d7458;
        case 0x1d745cu: goto label_1d745c;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d7464u: goto label_1d7464;
        case 0x1d7468u: goto label_1d7468;
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7470u: goto label_1d7470;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7478u: goto label_1d7478;
        case 0x1d747cu: goto label_1d747c;
        case 0x1d7480u: goto label_1d7480;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7488u: goto label_1d7488;
        case 0x1d748cu: goto label_1d748c;
        case 0x1d7490u: goto label_1d7490;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d749cu: goto label_1d749c;
        case 0x1d74a0u: goto label_1d74a0;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74acu: goto label_1d74ac;
        case 0x1d74b0u: goto label_1d74b0;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74bcu: goto label_1d74bc;
        case 0x1d74c0u: goto label_1d74c0;
        case 0x1d74c4u: goto label_1d74c4;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74ccu: goto label_1d74cc;
        case 0x1d74d0u: goto label_1d74d0;
        case 0x1d74d4u: goto label_1d74d4;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74dcu: goto label_1d74dc;
        case 0x1d74e0u: goto label_1d74e0;
        case 0x1d74e4u: goto label_1d74e4;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74ecu: goto label_1d74ec;
        case 0x1d74f0u: goto label_1d74f0;
        case 0x1d74f4u: goto label_1d74f4;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d74fcu: goto label_1d74fc;
        case 0x1d7500u: goto label_1d7500;
        case 0x1d7504u: goto label_1d7504;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d750cu: goto label_1d750c;
        case 0x1d7510u: goto label_1d7510;
        case 0x1d7514u: goto label_1d7514;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d751cu: goto label_1d751c;
        case 0x1d7520u: goto label_1d7520;
        case 0x1d7524u: goto label_1d7524;
        case 0x1d7528u: goto label_1d7528;
        case 0x1d752cu: goto label_1d752c;
        case 0x1d7530u: goto label_1d7530;
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7538u: goto label_1d7538;
        case 0x1d753cu: goto label_1d753c;
        case 0x1d7540u: goto label_1d7540;
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7548u: goto label_1d7548;
        case 0x1d754cu: goto label_1d754c;
        case 0x1d7550u: goto label_1d7550;
        case 0x1d7554u: goto label_1d7554;
        case 0x1d7558u: goto label_1d7558;
        case 0x1d755cu: goto label_1d755c;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7564u: goto label_1d7564;
        case 0x1d7568u: goto label_1d7568;
        case 0x1d756cu: goto label_1d756c;
        case 0x1d7570u: goto label_1d7570;
        case 0x1d7574u: goto label_1d7574;
        case 0x1d7578u: goto label_1d7578;
        case 0x1d757cu: goto label_1d757c;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7584u: goto label_1d7584;
        case 0x1d7588u: goto label_1d7588;
        case 0x1d758cu: goto label_1d758c;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d7594u: goto label_1d7594;
        case 0x1d7598u: goto label_1d7598;
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a0u: goto label_1d75a0;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75b0u: goto label_1d75b0;
        case 0x1d75b4u: goto label_1d75b4;
        case 0x1d75b8u: goto label_1d75b8;
        case 0x1d75bcu: goto label_1d75bc;
        case 0x1d75c0u: goto label_1d75c0;
        case 0x1d75c4u: goto label_1d75c4;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75ccu: goto label_1d75cc;
        case 0x1d75d0u: goto label_1d75d0;
        case 0x1d75d4u: goto label_1d75d4;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75dcu: goto label_1d75dc;
        case 0x1d75e0u: goto label_1d75e0;
        case 0x1d75e4u: goto label_1d75e4;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75ecu: goto label_1d75ec;
        case 0x1d75f0u: goto label_1d75f0;
        case 0x1d75f4u: goto label_1d75f4;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d75fcu: goto label_1d75fc;
        case 0x1d7600u: goto label_1d7600;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7608u: goto label_1d7608;
        case 0x1d760cu: goto label_1d760c;
        case 0x1d7610u: goto label_1d7610;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7618u: goto label_1d7618;
        case 0x1d761cu: goto label_1d761c;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d7624u: goto label_1d7624;
        case 0x1d7628u: goto label_1d7628;
        case 0x1d762cu: goto label_1d762c;
        case 0x1d7630u: goto label_1d7630;
        case 0x1d7634u: goto label_1d7634;
        case 0x1d7638u: goto label_1d7638;
        case 0x1d763cu: goto label_1d763c;
        case 0x1d7640u: goto label_1d7640;
        case 0x1d7644u: goto label_1d7644;
        case 0x1d7648u: goto label_1d7648;
        case 0x1d764cu: goto label_1d764c;
        case 0x1d7650u: goto label_1d7650;
        case 0x1d7654u: goto label_1d7654;
        case 0x1d7658u: goto label_1d7658;
        case 0x1d765cu: goto label_1d765c;
        case 0x1d7660u: goto label_1d7660;
        case 0x1d7664u: goto label_1d7664;
        case 0x1d7668u: goto label_1d7668;
        case 0x1d766cu: goto label_1d766c;
        case 0x1d7670u: goto label_1d7670;
        case 0x1d7674u: goto label_1d7674;
        case 0x1d7678u: goto label_1d7678;
        case 0x1d767cu: goto label_1d767c;
        case 0x1d7680u: goto label_1d7680;
        case 0x1d7684u: goto label_1d7684;
        case 0x1d7688u: goto label_1d7688;
        case 0x1d768cu: goto label_1d768c;
        case 0x1d7690u: goto label_1d7690;
        case 0x1d7694u: goto label_1d7694;
        case 0x1d7698u: goto label_1d7698;
        case 0x1d769cu: goto label_1d769c;
        case 0x1d76a0u: goto label_1d76a0;
        case 0x1d76a4u: goto label_1d76a4;
        case 0x1d76a8u: goto label_1d76a8;
        case 0x1d76acu: goto label_1d76ac;
        case 0x1d76b0u: goto label_1d76b0;
        case 0x1d76b4u: goto label_1d76b4;
        case 0x1d76b8u: goto label_1d76b8;
        case 0x1d76bcu: goto label_1d76bc;
        case 0x1d76c0u: goto label_1d76c0;
        case 0x1d76c4u: goto label_1d76c4;
        case 0x1d76c8u: goto label_1d76c8;
        case 0x1d76ccu: goto label_1d76cc;
        case 0x1d76d0u: goto label_1d76d0;
        case 0x1d76d4u: goto label_1d76d4;
        case 0x1d76d8u: goto label_1d76d8;
        case 0x1d76dcu: goto label_1d76dc;
        case 0x1d76e0u: goto label_1d76e0;
        case 0x1d76e4u: goto label_1d76e4;
        case 0x1d76e8u: goto label_1d76e8;
        case 0x1d76ecu: goto label_1d76ec;
        case 0x1d76f0u: goto label_1d76f0;
        case 0x1d76f4u: goto label_1d76f4;
        case 0x1d76f8u: goto label_1d76f8;
        case 0x1d76fcu: goto label_1d76fc;
        case 0x1d7700u: goto label_1d7700;
        case 0x1d7704u: goto label_1d7704;
        case 0x1d7708u: goto label_1d7708;
        case 0x1d770cu: goto label_1d770c;
        case 0x1d7710u: goto label_1d7710;
        case 0x1d7714u: goto label_1d7714;
        case 0x1d7718u: goto label_1d7718;
        case 0x1d771cu: goto label_1d771c;
        case 0x1d7720u: goto label_1d7720;
        case 0x1d7724u: goto label_1d7724;
        case 0x1d7728u: goto label_1d7728;
        case 0x1d772cu: goto label_1d772c;
        case 0x1d7730u: goto label_1d7730;
        case 0x1d7734u: goto label_1d7734;
        case 0x1d7738u: goto label_1d7738;
        case 0x1d773cu: goto label_1d773c;
        case 0x1d7740u: goto label_1d7740;
        case 0x1d7744u: goto label_1d7744;
        case 0x1d7748u: goto label_1d7748;
        case 0x1d774cu: goto label_1d774c;
        case 0x1d7750u: goto label_1d7750;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7758u: goto label_1d7758;
        case 0x1d775cu: goto label_1d775c;
        case 0x1d7760u: goto label_1d7760;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d7768u: goto label_1d7768;
        case 0x1d776cu: goto label_1d776c;
        case 0x1d7770u: goto label_1d7770;
        case 0x1d7774u: goto label_1d7774;
        case 0x1d7778u: goto label_1d7778;
        case 0x1d777cu: goto label_1d777c;
        case 0x1d7780u: goto label_1d7780;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d7788u: goto label_1d7788;
        case 0x1d778cu: goto label_1d778c;
        case 0x1d7790u: goto label_1d7790;
        case 0x1d7794u: goto label_1d7794;
        case 0x1d7798u: goto label_1d7798;
        case 0x1d779cu: goto label_1d779c;
        case 0x1d77a0u: goto label_1d77a0;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77a8u: goto label_1d77a8;
        case 0x1d77acu: goto label_1d77ac;
        case 0x1d77b0u: goto label_1d77b0;
        case 0x1d77b4u: goto label_1d77b4;
        case 0x1d77b8u: goto label_1d77b8;
        case 0x1d77bcu: goto label_1d77bc;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d77c4u: goto label_1d77c4;
        case 0x1d77c8u: goto label_1d77c8;
        case 0x1d77ccu: goto label_1d77cc;
        case 0x1d77d0u: goto label_1d77d0;
        case 0x1d77d4u: goto label_1d77d4;
        case 0x1d77d8u: goto label_1d77d8;
        case 0x1d77dcu: goto label_1d77dc;
        case 0x1d77e0u: goto label_1d77e0;
        case 0x1d77e4u: goto label_1d77e4;
        case 0x1d77e8u: goto label_1d77e8;
        case 0x1d77ecu: goto label_1d77ec;
        case 0x1d77f0u: goto label_1d77f0;
        case 0x1d77f4u: goto label_1d77f4;
        case 0x1d77f8u: goto label_1d77f8;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d7800u: goto label_1d7800;
        case 0x1d7804u: goto label_1d7804;
        case 0x1d7808u: goto label_1d7808;
        case 0x1d780cu: goto label_1d780c;
        case 0x1d7810u: goto label_1d7810;
        case 0x1d7814u: goto label_1d7814;
        case 0x1d7818u: goto label_1d7818;
        case 0x1d781cu: goto label_1d781c;
        case 0x1d7820u: goto label_1d7820;
        case 0x1d7824u: goto label_1d7824;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7834u: goto label_1d7834;
        case 0x1d7838u: goto label_1d7838;
        case 0x1d783cu: goto label_1d783c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7844u: goto label_1d7844;
        case 0x1d7848u: goto label_1d7848;
        case 0x1d784cu: goto label_1d784c;
        case 0x1d7850u: goto label_1d7850;
        case 0x1d7854u: goto label_1d7854;
        case 0x1d7858u: goto label_1d7858;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7860u: goto label_1d7860;
        case 0x1d7864u: goto label_1d7864;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d786cu: goto label_1d786c;
        case 0x1d7870u: goto label_1d7870;
        case 0x1d7874u: goto label_1d7874;
        case 0x1d7878u: goto label_1d7878;
        case 0x1d787cu: goto label_1d787c;
        case 0x1d7880u: goto label_1d7880;
        case 0x1d7884u: goto label_1d7884;
        case 0x1d7888u: goto label_1d7888;
        case 0x1d788cu: goto label_1d788c;
        case 0x1d7890u: goto label_1d7890;
        case 0x1d7894u: goto label_1d7894;
        case 0x1d7898u: goto label_1d7898;
        case 0x1d789cu: goto label_1d789c;
        case 0x1d78a0u: goto label_1d78a0;
        case 0x1d78a4u: goto label_1d78a4;
        case 0x1d78a8u: goto label_1d78a8;
        case 0x1d78acu: goto label_1d78ac;
        case 0x1d78b0u: goto label_1d78b0;
        case 0x1d78b4u: goto label_1d78b4;
        case 0x1d78b8u: goto label_1d78b8;
        case 0x1d78bcu: goto label_1d78bc;
        case 0x1d78c0u: goto label_1d78c0;
        case 0x1d78c4u: goto label_1d78c4;
        case 0x1d78c8u: goto label_1d78c8;
        case 0x1d78ccu: goto label_1d78cc;
        case 0x1d78d0u: goto label_1d78d0;
        case 0x1d78d4u: goto label_1d78d4;
        case 0x1d78d8u: goto label_1d78d8;
        case 0x1d78dcu: goto label_1d78dc;
        case 0x1d78e0u: goto label_1d78e0;
        case 0x1d78e4u: goto label_1d78e4;
        case 0x1d78e8u: goto label_1d78e8;
        case 0x1d78ecu: goto label_1d78ec;
        case 0x1d78f0u: goto label_1d78f0;
        case 0x1d78f4u: goto label_1d78f4;
        case 0x1d78f8u: goto label_1d78f8;
        case 0x1d78fcu: goto label_1d78fc;
        case 0x1d7900u: goto label_1d7900;
        case 0x1d7904u: goto label_1d7904;
        case 0x1d7908u: goto label_1d7908;
        case 0x1d790cu: goto label_1d790c;
        case 0x1d7910u: goto label_1d7910;
        case 0x1d7914u: goto label_1d7914;
        case 0x1d7918u: goto label_1d7918;
        case 0x1d791cu: goto label_1d791c;
        case 0x1d7920u: goto label_1d7920;
        case 0x1d7924u: goto label_1d7924;
        case 0x1d7928u: goto label_1d7928;
        case 0x1d792cu: goto label_1d792c;
        case 0x1d7930u: goto label_1d7930;
        case 0x1d7934u: goto label_1d7934;
        case 0x1d7938u: goto label_1d7938;
        case 0x1d793cu: goto label_1d793c;
        case 0x1d7940u: goto label_1d7940;
        case 0x1d7944u: goto label_1d7944;
        case 0x1d7948u: goto label_1d7948;
        case 0x1d794cu: goto label_1d794c;
        case 0x1d7950u: goto label_1d7950;
        case 0x1d7954u: goto label_1d7954;
        case 0x1d7958u: goto label_1d7958;
        case 0x1d795cu: goto label_1d795c;
        case 0x1d7960u: goto label_1d7960;
        case 0x1d7964u: goto label_1d7964;
        case 0x1d7968u: goto label_1d7968;
        case 0x1d796cu: goto label_1d796c;
        case 0x1d7970u: goto label_1d7970;
        case 0x1d7974u: goto label_1d7974;
        case 0x1d7978u: goto label_1d7978;
        case 0x1d797cu: goto label_1d797c;
        case 0x1d7980u: goto label_1d7980;
        case 0x1d7984u: goto label_1d7984;
        case 0x1d7988u: goto label_1d7988;
        case 0x1d798cu: goto label_1d798c;
        case 0x1d7990u: goto label_1d7990;
        case 0x1d7994u: goto label_1d7994;
        case 0x1d7998u: goto label_1d7998;
        case 0x1d799cu: goto label_1d799c;
        case 0x1d79a0u: goto label_1d79a0;
        case 0x1d79a4u: goto label_1d79a4;
        case 0x1d79a8u: goto label_1d79a8;
        case 0x1d79acu: goto label_1d79ac;
        case 0x1d79b0u: goto label_1d79b0;
        case 0x1d79b4u: goto label_1d79b4;
        case 0x1d79b8u: goto label_1d79b8;
        case 0x1d79bcu: goto label_1d79bc;
        case 0x1d79c0u: goto label_1d79c0;
        case 0x1d79c4u: goto label_1d79c4;
        case 0x1d79c8u: goto label_1d79c8;
        case 0x1d79ccu: goto label_1d79cc;
        case 0x1d79d0u: goto label_1d79d0;
        case 0x1d79d4u: goto label_1d79d4;
        case 0x1d79d8u: goto label_1d79d8;
        case 0x1d79dcu: goto label_1d79dc;
        case 0x1d79e0u: goto label_1d79e0;
        case 0x1d79e4u: goto label_1d79e4;
        case 0x1d79e8u: goto label_1d79e8;
        case 0x1d79ecu: goto label_1d79ec;
        case 0x1d79f0u: goto label_1d79f0;
        case 0x1d79f4u: goto label_1d79f4;
        case 0x1d79f8u: goto label_1d79f8;
        case 0x1d79fcu: goto label_1d79fc;
        case 0x1d7a00u: goto label_1d7a00;
        case 0x1d7a04u: goto label_1d7a04;
        case 0x1d7a08u: goto label_1d7a08;
        case 0x1d7a0cu: goto label_1d7a0c;
        case 0x1d7a10u: goto label_1d7a10;
        case 0x1d7a14u: goto label_1d7a14;
        case 0x1d7a18u: goto label_1d7a18;
        case 0x1d7a1cu: goto label_1d7a1c;
        case 0x1d7a20u: goto label_1d7a20;
        case 0x1d7a24u: goto label_1d7a24;
        case 0x1d7a28u: goto label_1d7a28;
        case 0x1d7a2cu: goto label_1d7a2c;
        case 0x1d7a30u: goto label_1d7a30;
        case 0x1d7a34u: goto label_1d7a34;
        case 0x1d7a38u: goto label_1d7a38;
        case 0x1d7a3cu: goto label_1d7a3c;
        case 0x1d7a40u: goto label_1d7a40;
        case 0x1d7a44u: goto label_1d7a44;
        case 0x1d7a48u: goto label_1d7a48;
        case 0x1d7a4cu: goto label_1d7a4c;
        case 0x1d7a50u: goto label_1d7a50;
        case 0x1d7a54u: goto label_1d7a54;
        case 0x1d7a58u: goto label_1d7a58;
        case 0x1d7a5cu: goto label_1d7a5c;
        case 0x1d7a60u: goto label_1d7a60;
        case 0x1d7a64u: goto label_1d7a64;
        case 0x1d7a68u: goto label_1d7a68;
        case 0x1d7a6cu: goto label_1d7a6c;
        case 0x1d7a70u: goto label_1d7a70;
        case 0x1d7a74u: goto label_1d7a74;
        case 0x1d7a78u: goto label_1d7a78;
        case 0x1d7a7cu: goto label_1d7a7c;
        case 0x1d7a80u: goto label_1d7a80;
        case 0x1d7a84u: goto label_1d7a84;
        case 0x1d7a88u: goto label_1d7a88;
        case 0x1d7a8cu: goto label_1d7a8c;
        case 0x1d7a90u: goto label_1d7a90;
        case 0x1d7a94u: goto label_1d7a94;
        case 0x1d7a98u: goto label_1d7a98;
        case 0x1d7a9cu: goto label_1d7a9c;
        case 0x1d7aa0u: goto label_1d7aa0;
        case 0x1d7aa4u: goto label_1d7aa4;
        case 0x1d7aa8u: goto label_1d7aa8;
        case 0x1d7aacu: goto label_1d7aac;
        case 0x1d7ab0u: goto label_1d7ab0;
        case 0x1d7ab4u: goto label_1d7ab4;
        case 0x1d7ab8u: goto label_1d7ab8;
        case 0x1d7abcu: goto label_1d7abc;
        case 0x1d7ac0u: goto label_1d7ac0;
        case 0x1d7ac4u: goto label_1d7ac4;
        case 0x1d7ac8u: goto label_1d7ac8;
        case 0x1d7accu: goto label_1d7acc;
        case 0x1d7ad0u: goto label_1d7ad0;
        case 0x1d7ad4u: goto label_1d7ad4;
        case 0x1d7ad8u: goto label_1d7ad8;
        case 0x1d7adcu: goto label_1d7adc;
        case 0x1d7ae0u: goto label_1d7ae0;
        case 0x1d7ae4u: goto label_1d7ae4;
        case 0x1d7ae8u: goto label_1d7ae8;
        case 0x1d7aecu: goto label_1d7aec;
        case 0x1d7af0u: goto label_1d7af0;
        case 0x1d7af4u: goto label_1d7af4;
        case 0x1d7af8u: goto label_1d7af8;
        case 0x1d7afcu: goto label_1d7afc;
        case 0x1d7b00u: goto label_1d7b00;
        case 0x1d7b04u: goto label_1d7b04;
        case 0x1d7b08u: goto label_1d7b08;
        case 0x1d7b0cu: goto label_1d7b0c;
        case 0x1d7b10u: goto label_1d7b10;
        case 0x1d7b14u: goto label_1d7b14;
        case 0x1d7b18u: goto label_1d7b18;
        case 0x1d7b1cu: goto label_1d7b1c;
        case 0x1d7b20u: goto label_1d7b20;
        case 0x1d7b24u: goto label_1d7b24;
        case 0x1d7b28u: goto label_1d7b28;
        case 0x1d7b2cu: goto label_1d7b2c;
        case 0x1d7b30u: goto label_1d7b30;
        case 0x1d7b34u: goto label_1d7b34;
        case 0x1d7b38u: goto label_1d7b38;
        case 0x1d7b3cu: goto label_1d7b3c;
        case 0x1d7b40u: goto label_1d7b40;
        case 0x1d7b44u: goto label_1d7b44;
        case 0x1d7b48u: goto label_1d7b48;
        case 0x1d7b4cu: goto label_1d7b4c;
        case 0x1d7b50u: goto label_1d7b50;
        case 0x1d7b54u: goto label_1d7b54;
        case 0x1d7b58u: goto label_1d7b58;
        case 0x1d7b5cu: goto label_1d7b5c;
        case 0x1d7b60u: goto label_1d7b60;
        case 0x1d7b64u: goto label_1d7b64;
        case 0x1d7b68u: goto label_1d7b68;
        case 0x1d7b6cu: goto label_1d7b6c;
        case 0x1d7b70u: goto label_1d7b70;
        case 0x1d7b74u: goto label_1d7b74;
        case 0x1d7b78u: goto label_1d7b78;
        case 0x1d7b7cu: goto label_1d7b7c;
        case 0x1d7b80u: goto label_1d7b80;
        case 0x1d7b84u: goto label_1d7b84;
        case 0x1d7b88u: goto label_1d7b88;
        case 0x1d7b8cu: goto label_1d7b8c;
        case 0x1d7b90u: goto label_1d7b90;
        case 0x1d7b94u: goto label_1d7b94;
        case 0x1d7b98u: goto label_1d7b98;
        case 0x1d7b9cu: goto label_1d7b9c;
        case 0x1d7ba0u: goto label_1d7ba0;
        case 0x1d7ba4u: goto label_1d7ba4;
        case 0x1d7ba8u: goto label_1d7ba8;
        case 0x1d7bacu: goto label_1d7bac;
        case 0x1d7bb0u: goto label_1d7bb0;
        case 0x1d7bb4u: goto label_1d7bb4;
        case 0x1d7bb8u: goto label_1d7bb8;
        case 0x1d7bbcu: goto label_1d7bbc;
        case 0x1d7bc0u: goto label_1d7bc0;
        case 0x1d7bc4u: goto label_1d7bc4;
        case 0x1d7bc8u: goto label_1d7bc8;
        case 0x1d7bccu: goto label_1d7bcc;
        case 0x1d7bd0u: goto label_1d7bd0;
        case 0x1d7bd4u: goto label_1d7bd4;
        case 0x1d7bd8u: goto label_1d7bd8;
        case 0x1d7bdcu: goto label_1d7bdc;
        case 0x1d7be0u: goto label_1d7be0;
        case 0x1d7be4u: goto label_1d7be4;
        case 0x1d7be8u: goto label_1d7be8;
        case 0x1d7becu: goto label_1d7bec;
        case 0x1d7bf0u: goto label_1d7bf0;
        case 0x1d7bf4u: goto label_1d7bf4;
        case 0x1d7bf8u: goto label_1d7bf8;
        case 0x1d7bfcu: goto label_1d7bfc;
        case 0x1d7c00u: goto label_1d7c00;
        case 0x1d7c04u: goto label_1d7c04;
        case 0x1d7c08u: goto label_1d7c08;
        case 0x1d7c0cu: goto label_1d7c0c;
        case 0x1d7c10u: goto label_1d7c10;
        case 0x1d7c14u: goto label_1d7c14;
        case 0x1d7c18u: goto label_1d7c18;
        case 0x1d7c1cu: goto label_1d7c1c;
        case 0x1d7c20u: goto label_1d7c20;
        case 0x1d7c24u: goto label_1d7c24;
        case 0x1d7c28u: goto label_1d7c28;
        case 0x1d7c2cu: goto label_1d7c2c;
        case 0x1d7c30u: goto label_1d7c30;
        case 0x1d7c34u: goto label_1d7c34;
        case 0x1d7c38u: goto label_1d7c38;
        case 0x1d7c3cu: goto label_1d7c3c;
        case 0x1d7c40u: goto label_1d7c40;
        case 0x1d7c44u: goto label_1d7c44;
        case 0x1d7c48u: goto label_1d7c48;
        case 0x1d7c4cu: goto label_1d7c4c;
        case 0x1d7c50u: goto label_1d7c50;
        case 0x1d7c54u: goto label_1d7c54;
        case 0x1d7c58u: goto label_1d7c58;
        case 0x1d7c5cu: goto label_1d7c5c;
        case 0x1d7c60u: goto label_1d7c60;
        case 0x1d7c64u: goto label_1d7c64;
        case 0x1d7c68u: goto label_1d7c68;
        case 0x1d7c6cu: goto label_1d7c6c;
        case 0x1d7c70u: goto label_1d7c70;
        case 0x1d7c74u: goto label_1d7c74;
        case 0x1d7c78u: goto label_1d7c78;
        case 0x1d7c7cu: goto label_1d7c7c;
        case 0x1d7c80u: goto label_1d7c80;
        case 0x1d7c84u: goto label_1d7c84;
        case 0x1d7c88u: goto label_1d7c88;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7c90u: goto label_1d7c90;
        case 0x1d7c94u: goto label_1d7c94;
        case 0x1d7c98u: goto label_1d7c98;
        case 0x1d7c9cu: goto label_1d7c9c;
        case 0x1d7ca0u: goto label_1d7ca0;
        case 0x1d7ca4u: goto label_1d7ca4;
        case 0x1d7ca8u: goto label_1d7ca8;
        case 0x1d7cacu: goto label_1d7cac;
        case 0x1d7cb0u: goto label_1d7cb0;
        case 0x1d7cb4u: goto label_1d7cb4;
        case 0x1d7cb8u: goto label_1d7cb8;
        case 0x1d7cbcu: goto label_1d7cbc;
        case 0x1d7cc0u: goto label_1d7cc0;
        case 0x1d7cc4u: goto label_1d7cc4;
        case 0x1d7cc8u: goto label_1d7cc8;
        case 0x1d7cccu: goto label_1d7ccc;
        case 0x1d7cd0u: goto label_1d7cd0;
        case 0x1d7cd4u: goto label_1d7cd4;
        case 0x1d7cd8u: goto label_1d7cd8;
        case 0x1d7cdcu: goto label_1d7cdc;
        case 0x1d7ce0u: goto label_1d7ce0;
        case 0x1d7ce4u: goto label_1d7ce4;
        case 0x1d7ce8u: goto label_1d7ce8;
        case 0x1d7cecu: goto label_1d7cec;
        case 0x1d7cf0u: goto label_1d7cf0;
        case 0x1d7cf4u: goto label_1d7cf4;
        case 0x1d7cf8u: goto label_1d7cf8;
        case 0x1d7cfcu: goto label_1d7cfc;
        case 0x1d7d00u: goto label_1d7d00;
        case 0x1d7d04u: goto label_1d7d04;
        case 0x1d7d08u: goto label_1d7d08;
        case 0x1d7d0cu: goto label_1d7d0c;
        case 0x1d7d10u: goto label_1d7d10;
        case 0x1d7d14u: goto label_1d7d14;
        case 0x1d7d18u: goto label_1d7d18;
        case 0x1d7d1cu: goto label_1d7d1c;
        case 0x1d7d20u: goto label_1d7d20;
        case 0x1d7d24u: goto label_1d7d24;
        case 0x1d7d28u: goto label_1d7d28;
        case 0x1d7d2cu: goto label_1d7d2c;
        case 0x1d7d30u: goto label_1d7d30;
        case 0x1d7d34u: goto label_1d7d34;
        case 0x1d7d38u: goto label_1d7d38;
        case 0x1d7d3cu: goto label_1d7d3c;
        case 0x1d7d40u: goto label_1d7d40;
        case 0x1d7d44u: goto label_1d7d44;
        case 0x1d7d48u: goto label_1d7d48;
        case 0x1d7d4cu: goto label_1d7d4c;
        case 0x1d7d50u: goto label_1d7d50;
        case 0x1d7d54u: goto label_1d7d54;
        case 0x1d7d58u: goto label_1d7d58;
        case 0x1d7d5cu: goto label_1d7d5c;
        case 0x1d7d60u: goto label_1d7d60;
        case 0x1d7d64u: goto label_1d7d64;
        case 0x1d7d68u: goto label_1d7d68;
        case 0x1d7d6cu: goto label_1d7d6c;
        case 0x1d7d70u: goto label_1d7d70;
        case 0x1d7d74u: goto label_1d7d74;
        case 0x1d7d78u: goto label_1d7d78;
        case 0x1d7d7cu: goto label_1d7d7c;
        case 0x1d7d80u: goto label_1d7d80;
        case 0x1d7d84u: goto label_1d7d84;
        case 0x1d7d88u: goto label_1d7d88;
        case 0x1d7d8cu: goto label_1d7d8c;
        case 0x1d7d90u: goto label_1d7d90;
        case 0x1d7d94u: goto label_1d7d94;
        case 0x1d7d98u: goto label_1d7d98;
        case 0x1d7d9cu: goto label_1d7d9c;
        case 0x1d7da0u: goto label_1d7da0;
        case 0x1d7da4u: goto label_1d7da4;
        case 0x1d7da8u: goto label_1d7da8;
        case 0x1d7dacu: goto label_1d7dac;
        case 0x1d7db0u: goto label_1d7db0;
        case 0x1d7db4u: goto label_1d7db4;
        case 0x1d7db8u: goto label_1d7db8;
        case 0x1d7dbcu: goto label_1d7dbc;
        case 0x1d7dc0u: goto label_1d7dc0;
        case 0x1d7dc4u: goto label_1d7dc4;
        case 0x1d7dc8u: goto label_1d7dc8;
        case 0x1d7dccu: goto label_1d7dcc;
        case 0x1d7dd0u: goto label_1d7dd0;
        case 0x1d7dd4u: goto label_1d7dd4;
        case 0x1d7dd8u: goto label_1d7dd8;
        case 0x1d7ddcu: goto label_1d7ddc;
        case 0x1d7de0u: goto label_1d7de0;
        case 0x1d7de4u: goto label_1d7de4;
        case 0x1d7de8u: goto label_1d7de8;
        case 0x1d7decu: goto label_1d7dec;
        case 0x1d7df0u: goto label_1d7df0;
        case 0x1d7df4u: goto label_1d7df4;
        case 0x1d7df8u: goto label_1d7df8;
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e00u: goto label_1d7e00;
        case 0x1d7e04u: goto label_1d7e04;
        case 0x1d7e08u: goto label_1d7e08;
        case 0x1d7e0cu: goto label_1d7e0c;
        case 0x1d7e10u: goto label_1d7e10;
        case 0x1d7e14u: goto label_1d7e14;
        case 0x1d7e18u: goto label_1d7e18;
        case 0x1d7e1cu: goto label_1d7e1c;
        case 0x1d7e20u: goto label_1d7e20;
        case 0x1d7e24u: goto label_1d7e24;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e2cu: goto label_1d7e2c;
        case 0x1d7e30u: goto label_1d7e30;
        case 0x1d7e34u: goto label_1d7e34;
        case 0x1d7e38u: goto label_1d7e38;
        case 0x1d7e3cu: goto label_1d7e3c;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e44u: goto label_1d7e44;
        case 0x1d7e48u: goto label_1d7e48;
        case 0x1d7e4cu: goto label_1d7e4c;
        case 0x1d7e50u: goto label_1d7e50;
        case 0x1d7e54u: goto label_1d7e54;
        case 0x1d7e58u: goto label_1d7e58;
        case 0x1d7e5cu: goto label_1d7e5c;
        case 0x1d7e60u: goto label_1d7e60;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7e68u: goto label_1d7e68;
        case 0x1d7e6cu: goto label_1d7e6c;
        case 0x1d7e70u: goto label_1d7e70;
        case 0x1d7e74u: goto label_1d7e74;
        case 0x1d7e78u: goto label_1d7e78;
        case 0x1d7e7cu: goto label_1d7e7c;
        case 0x1d7e80u: goto label_1d7e80;
        case 0x1d7e84u: goto label_1d7e84;
        case 0x1d7e88u: goto label_1d7e88;
        case 0x1d7e8cu: goto label_1d7e8c;
        case 0x1d7e90u: goto label_1d7e90;
        case 0x1d7e94u: goto label_1d7e94;
        case 0x1d7e98u: goto label_1d7e98;
        case 0x1d7e9cu: goto label_1d7e9c;
        case 0x1d7ea0u: goto label_1d7ea0;
        case 0x1d7ea4u: goto label_1d7ea4;
        case 0x1d7ea8u: goto label_1d7ea8;
        case 0x1d7eacu: goto label_1d7eac;
        case 0x1d7eb0u: goto label_1d7eb0;
        case 0x1d7eb4u: goto label_1d7eb4;
        case 0x1d7eb8u: goto label_1d7eb8;
        case 0x1d7ebcu: goto label_1d7ebc;
        case 0x1d7ec0u: goto label_1d7ec0;
        case 0x1d7ec4u: goto label_1d7ec4;
        case 0x1d7ec8u: goto label_1d7ec8;
        case 0x1d7eccu: goto label_1d7ecc;
        case 0x1d7ed0u: goto label_1d7ed0;
        case 0x1d7ed4u: goto label_1d7ed4;
        case 0x1d7ed8u: goto label_1d7ed8;
        case 0x1d7edcu: goto label_1d7edc;
        case 0x1d7ee0u: goto label_1d7ee0;
        case 0x1d7ee4u: goto label_1d7ee4;
        case 0x1d7ee8u: goto label_1d7ee8;
        case 0x1d7eecu: goto label_1d7eec;
        case 0x1d7ef0u: goto label_1d7ef0;
        case 0x1d7ef4u: goto label_1d7ef4;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7efcu: goto label_1d7efc;
        case 0x1d7f00u: goto label_1d7f00;
        case 0x1d7f04u: goto label_1d7f04;
        case 0x1d7f08u: goto label_1d7f08;
        case 0x1d7f0cu: goto label_1d7f0c;
        case 0x1d7f10u: goto label_1d7f10;
        case 0x1d7f14u: goto label_1d7f14;
        case 0x1d7f18u: goto label_1d7f18;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f20u: goto label_1d7f20;
        case 0x1d7f24u: goto label_1d7f24;
        case 0x1d7f28u: goto label_1d7f28;
        case 0x1d7f2cu: goto label_1d7f2c;
        case 0x1d7f30u: goto label_1d7f30;
        case 0x1d7f34u: goto label_1d7f34;
        case 0x1d7f38u: goto label_1d7f38;
        case 0x1d7f3cu: goto label_1d7f3c;
        case 0x1d7f40u: goto label_1d7f40;
        case 0x1d7f44u: goto label_1d7f44;
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7f4cu: goto label_1d7f4c;
        case 0x1d7f50u: goto label_1d7f50;
        case 0x1d7f54u: goto label_1d7f54;
        case 0x1d7f58u: goto label_1d7f58;
        case 0x1d7f5cu: goto label_1d7f5c;
        case 0x1d7f60u: goto label_1d7f60;
        case 0x1d7f64u: goto label_1d7f64;
        case 0x1d7f68u: goto label_1d7f68;
        case 0x1d7f6cu: goto label_1d7f6c;
        case 0x1d7f70u: goto label_1d7f70;
        case 0x1d7f74u: goto label_1d7f74;
        case 0x1d7f78u: goto label_1d7f78;
        case 0x1d7f7cu: goto label_1d7f7c;
        case 0x1d7f80u: goto label_1d7f80;
        case 0x1d7f84u: goto label_1d7f84;
        case 0x1d7f88u: goto label_1d7f88;
        case 0x1d7f8cu: goto label_1d7f8c;
        case 0x1d7f90u: goto label_1d7f90;
        case 0x1d7f94u: goto label_1d7f94;
        case 0x1d7f98u: goto label_1d7f98;
        case 0x1d7f9cu: goto label_1d7f9c;
        case 0x1d7fa0u: goto label_1d7fa0;
        case 0x1d7fa4u: goto label_1d7fa4;
        case 0x1d7fa8u: goto label_1d7fa8;
        case 0x1d7facu: goto label_1d7fac;
        case 0x1d7fb0u: goto label_1d7fb0;
        case 0x1d7fb4u: goto label_1d7fb4;
        case 0x1d7fb8u: goto label_1d7fb8;
        case 0x1d7fbcu: goto label_1d7fbc;
        case 0x1d7fc0u: goto label_1d7fc0;
        case 0x1d7fc4u: goto label_1d7fc4;
        case 0x1d7fc8u: goto label_1d7fc8;
        case 0x1d7fccu: goto label_1d7fcc;
        case 0x1d7fd0u: goto label_1d7fd0;
        case 0x1d7fd4u: goto label_1d7fd4;
        case 0x1d7fd8u: goto label_1d7fd8;
        case 0x1d7fdcu: goto label_1d7fdc;
        case 0x1d7fe0u: goto label_1d7fe0;
        case 0x1d7fe4u: goto label_1d7fe4;
        case 0x1d7fe8u: goto label_1d7fe8;
        case 0x1d7fecu: goto label_1d7fec;
        case 0x1d7ff0u: goto label_1d7ff0;
        case 0x1d7ff4u: goto label_1d7ff4;
        case 0x1d7ff8u: goto label_1d7ff8;
        case 0x1d7ffcu: goto label_1d7ffc;
        case 0x1d8000u: goto label_1d8000;
        case 0x1d8004u: goto label_1d8004;
        case 0x1d8008u: goto label_1d8008;
        case 0x1d800cu: goto label_1d800c;
        case 0x1d8010u: goto label_1d8010;
        case 0x1d8014u: goto label_1d8014;
        case 0x1d8018u: goto label_1d8018;
        case 0x1d801cu: goto label_1d801c;
        case 0x1d8020u: goto label_1d8020;
        case 0x1d8024u: goto label_1d8024;
        case 0x1d8028u: goto label_1d8028;
        case 0x1d802cu: goto label_1d802c;
        case 0x1d8030u: goto label_1d8030;
        case 0x1d8034u: goto label_1d8034;
        case 0x1d8038u: goto label_1d8038;
        case 0x1d803cu: goto label_1d803c;
        case 0x1d8040u: goto label_1d8040;
        case 0x1d8044u: goto label_1d8044;
        case 0x1d8048u: goto label_1d8048;
        case 0x1d804cu: goto label_1d804c;
        case 0x1d8050u: goto label_1d8050;
        case 0x1d8054u: goto label_1d8054;
        case 0x1d8058u: goto label_1d8058;
        case 0x1d805cu: goto label_1d805c;
        case 0x1d8060u: goto label_1d8060;
        case 0x1d8064u: goto label_1d8064;
        case 0x1d8068u: goto label_1d8068;
        case 0x1d806cu: goto label_1d806c;
        case 0x1d8070u: goto label_1d8070;
        case 0x1d8074u: goto label_1d8074;
        case 0x1d8078u: goto label_1d8078;
        case 0x1d807cu: goto label_1d807c;
        case 0x1d8080u: goto label_1d8080;
        case 0x1d8084u: goto label_1d8084;
        case 0x1d8088u: goto label_1d8088;
        case 0x1d808cu: goto label_1d808c;
        case 0x1d8090u: goto label_1d8090;
        case 0x1d8094u: goto label_1d8094;
        case 0x1d8098u: goto label_1d8098;
        case 0x1d809cu: goto label_1d809c;
        case 0x1d80a0u: goto label_1d80a0;
        case 0x1d80a4u: goto label_1d80a4;
        case 0x1d80a8u: goto label_1d80a8;
        case 0x1d80acu: goto label_1d80ac;
        case 0x1d80b0u: goto label_1d80b0;
        case 0x1d80b4u: goto label_1d80b4;
        case 0x1d80b8u: goto label_1d80b8;
        case 0x1d80bcu: goto label_1d80bc;
        case 0x1d80c0u: goto label_1d80c0;
        case 0x1d80c4u: goto label_1d80c4;
        case 0x1d80c8u: goto label_1d80c8;
        case 0x1d80ccu: goto label_1d80cc;
        case 0x1d80d0u: goto label_1d80d0;
        case 0x1d80d4u: goto label_1d80d4;
        case 0x1d80d8u: goto label_1d80d8;
        case 0x1d80dcu: goto label_1d80dc;
        case 0x1d80e0u: goto label_1d80e0;
        case 0x1d80e4u: goto label_1d80e4;
        case 0x1d80e8u: goto label_1d80e8;
        case 0x1d80ecu: goto label_1d80ec;
        case 0x1d80f0u: goto label_1d80f0;
        case 0x1d80f4u: goto label_1d80f4;
        case 0x1d80f8u: goto label_1d80f8;
        case 0x1d80fcu: goto label_1d80fc;
        case 0x1d8100u: goto label_1d8100;
        case 0x1d8104u: goto label_1d8104;
        case 0x1d8108u: goto label_1d8108;
        case 0x1d810cu: goto label_1d810c;
        case 0x1d8110u: goto label_1d8110;
        case 0x1d8114u: goto label_1d8114;
        case 0x1d8118u: goto label_1d8118;
        case 0x1d811cu: goto label_1d811c;
        case 0x1d8120u: goto label_1d8120;
        case 0x1d8124u: goto label_1d8124;
        case 0x1d8128u: goto label_1d8128;
        case 0x1d812cu: goto label_1d812c;
        case 0x1d8130u: goto label_1d8130;
        case 0x1d8134u: goto label_1d8134;
        case 0x1d8138u: goto label_1d8138;
        case 0x1d813cu: goto label_1d813c;
        case 0x1d8140u: goto label_1d8140;
        case 0x1d8144u: goto label_1d8144;
        case 0x1d8148u: goto label_1d8148;
        case 0x1d814cu: goto label_1d814c;
        case 0x1d8150u: goto label_1d8150;
        case 0x1d8154u: goto label_1d8154;
        case 0x1d8158u: goto label_1d8158;
        case 0x1d815cu: goto label_1d815c;
        case 0x1d8160u: goto label_1d8160;
        case 0x1d8164u: goto label_1d8164;
        case 0x1d8168u: goto label_1d8168;
        case 0x1d816cu: goto label_1d816c;
        case 0x1d8170u: goto label_1d8170;
        case 0x1d8174u: goto label_1d8174;
        case 0x1d8178u: goto label_1d8178;
        case 0x1d817cu: goto label_1d817c;
        case 0x1d8180u: goto label_1d8180;
        case 0x1d8184u: goto label_1d8184;
        case 0x1d8188u: goto label_1d8188;
        case 0x1d818cu: goto label_1d818c;
        case 0x1d8190u: goto label_1d8190;
        case 0x1d8194u: goto label_1d8194;
        case 0x1d8198u: goto label_1d8198;
        case 0x1d819cu: goto label_1d819c;
        case 0x1d81a0u: goto label_1d81a0;
        case 0x1d81a4u: goto label_1d81a4;
        case 0x1d81a8u: goto label_1d81a8;
        case 0x1d81acu: goto label_1d81ac;
        case 0x1d81b0u: goto label_1d81b0;
        case 0x1d81b4u: goto label_1d81b4;
        case 0x1d81b8u: goto label_1d81b8;
        case 0x1d81bcu: goto label_1d81bc;
        case 0x1d81c0u: goto label_1d81c0;
        case 0x1d81c4u: goto label_1d81c4;
        case 0x1d81c8u: goto label_1d81c8;
        case 0x1d81ccu: goto label_1d81cc;
        case 0x1d81d0u: goto label_1d81d0;
        case 0x1d81d4u: goto label_1d81d4;
        case 0x1d81d8u: goto label_1d81d8;
        case 0x1d81dcu: goto label_1d81dc;
        case 0x1d81e0u: goto label_1d81e0;
        case 0x1d81e4u: goto label_1d81e4;
        case 0x1d81e8u: goto label_1d81e8;
        case 0x1d81ecu: goto label_1d81ec;
        case 0x1d81f0u: goto label_1d81f0;
        case 0x1d81f4u: goto label_1d81f4;
        case 0x1d81f8u: goto label_1d81f8;
        case 0x1d81fcu: goto label_1d81fc;
        case 0x1d8200u: goto label_1d8200;
        case 0x1d8204u: goto label_1d8204;
        case 0x1d8208u: goto label_1d8208;
        case 0x1d820cu: goto label_1d820c;
        case 0x1d8210u: goto label_1d8210;
        case 0x1d8214u: goto label_1d8214;
        case 0x1d8218u: goto label_1d8218;
        case 0x1d821cu: goto label_1d821c;
        case 0x1d8220u: goto label_1d8220;
        case 0x1d8224u: goto label_1d8224;
        case 0x1d8228u: goto label_1d8228;
        case 0x1d822cu: goto label_1d822c;
        case 0x1d8230u: goto label_1d8230;
        case 0x1d8234u: goto label_1d8234;
        case 0x1d8238u: goto label_1d8238;
        case 0x1d823cu: goto label_1d823c;
        case 0x1d8240u: goto label_1d8240;
        case 0x1d8244u: goto label_1d8244;
        case 0x1d8248u: goto label_1d8248;
        case 0x1d824cu: goto label_1d824c;
        case 0x1d8250u: goto label_1d8250;
        case 0x1d8254u: goto label_1d8254;
        case 0x1d8258u: goto label_1d8258;
        case 0x1d825cu: goto label_1d825c;
        case 0x1d8260u: goto label_1d8260;
        case 0x1d8264u: goto label_1d8264;
        case 0x1d8268u: goto label_1d8268;
        case 0x1d826cu: goto label_1d826c;
        case 0x1d8270u: goto label_1d8270;
        case 0x1d8274u: goto label_1d8274;
        case 0x1d8278u: goto label_1d8278;
        case 0x1d827cu: goto label_1d827c;
        case 0x1d8280u: goto label_1d8280;
        case 0x1d8284u: goto label_1d8284;
        case 0x1d8288u: goto label_1d8288;
        case 0x1d828cu: goto label_1d828c;
        case 0x1d8290u: goto label_1d8290;
        case 0x1d8294u: goto label_1d8294;
        case 0x1d8298u: goto label_1d8298;
        case 0x1d829cu: goto label_1d829c;
        case 0x1d82a0u: goto label_1d82a0;
        case 0x1d82a4u: goto label_1d82a4;
        case 0x1d82a8u: goto label_1d82a8;
        case 0x1d82acu: goto label_1d82ac;
        case 0x1d82b0u: goto label_1d82b0;
        case 0x1d82b4u: goto label_1d82b4;
        case 0x1d82b8u: goto label_1d82b8;
        case 0x1d82bcu: goto label_1d82bc;
        case 0x1d82c0u: goto label_1d82c0;
        case 0x1d82c4u: goto label_1d82c4;
        case 0x1d82c8u: goto label_1d82c8;
        case 0x1d82ccu: goto label_1d82cc;
        case 0x1d82d0u: goto label_1d82d0;
        case 0x1d82d4u: goto label_1d82d4;
        case 0x1d82d8u: goto label_1d82d8;
        case 0x1d82dcu: goto label_1d82dc;
        case 0x1d82e0u: goto label_1d82e0;
        case 0x1d82e4u: goto label_1d82e4;
        case 0x1d82e8u: goto label_1d82e8;
        case 0x1d82ecu: goto label_1d82ec;
        case 0x1d82f0u: goto label_1d82f0;
        case 0x1d82f4u: goto label_1d82f4;
        case 0x1d82f8u: goto label_1d82f8;
        case 0x1d82fcu: goto label_1d82fc;
        case 0x1d8300u: goto label_1d8300;
        case 0x1d8304u: goto label_1d8304;
        case 0x1d8308u: goto label_1d8308;
        case 0x1d830cu: goto label_1d830c;
        case 0x1d8310u: goto label_1d8310;
        case 0x1d8314u: goto label_1d8314;
        case 0x1d8318u: goto label_1d8318;
        case 0x1d831cu: goto label_1d831c;
        case 0x1d8320u: goto label_1d8320;
        case 0x1d8324u: goto label_1d8324;
        case 0x1d8328u: goto label_1d8328;
        case 0x1d832cu: goto label_1d832c;
        case 0x1d8330u: goto label_1d8330;
        case 0x1d8334u: goto label_1d8334;
        case 0x1d8338u: goto label_1d8338;
        case 0x1d833cu: goto label_1d833c;
        case 0x1d8340u: goto label_1d8340;
        case 0x1d8344u: goto label_1d8344;
        case 0x1d8348u: goto label_1d8348;
        case 0x1d834cu: goto label_1d834c;
        case 0x1d8350u: goto label_1d8350;
        case 0x1d8354u: goto label_1d8354;
        case 0x1d8358u: goto label_1d8358;
        case 0x1d835cu: goto label_1d835c;
        case 0x1d8360u: goto label_1d8360;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8368u: goto label_1d8368;
        case 0x1d836cu: goto label_1d836c;
        case 0x1d8370u: goto label_1d8370;
        case 0x1d8374u: goto label_1d8374;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d837cu: goto label_1d837c;
        case 0x1d8380u: goto label_1d8380;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d838cu: goto label_1d838c;
        case 0x1d8390u: goto label_1d8390;
        case 0x1d8394u: goto label_1d8394;
        case 0x1d8398u: goto label_1d8398;
        case 0x1d839cu: goto label_1d839c;
        case 0x1d83a0u: goto label_1d83a0;
        case 0x1d83a4u: goto label_1d83a4;
        case 0x1d83a8u: goto label_1d83a8;
        case 0x1d83acu: goto label_1d83ac;
        case 0x1d83b0u: goto label_1d83b0;
        case 0x1d83b4u: goto label_1d83b4;
        case 0x1d83b8u: goto label_1d83b8;
        case 0x1d83bcu: goto label_1d83bc;
        case 0x1d83c0u: goto label_1d83c0;
        case 0x1d83c4u: goto label_1d83c4;
        case 0x1d83c8u: goto label_1d83c8;
        case 0x1d83ccu: goto label_1d83cc;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83d4u: goto label_1d83d4;
        case 0x1d83d8u: goto label_1d83d8;
        case 0x1d83dcu: goto label_1d83dc;
        case 0x1d83e0u: goto label_1d83e0;
        case 0x1d83e4u: goto label_1d83e4;
        case 0x1d83e8u: goto label_1d83e8;
        case 0x1d83ecu: goto label_1d83ec;
        case 0x1d83f0u: goto label_1d83f0;
        case 0x1d83f4u: goto label_1d83f4;
        case 0x1d83f8u: goto label_1d83f8;
        case 0x1d83fcu: goto label_1d83fc;
        case 0x1d8400u: goto label_1d8400;
        case 0x1d8404u: goto label_1d8404;
        case 0x1d8408u: goto label_1d8408;
        case 0x1d840cu: goto label_1d840c;
        case 0x1d8410u: goto label_1d8410;
        case 0x1d8414u: goto label_1d8414;
        case 0x1d8418u: goto label_1d8418;
        case 0x1d841cu: goto label_1d841c;
        case 0x1d8420u: goto label_1d8420;
        case 0x1d8424u: goto label_1d8424;
        case 0x1d8428u: goto label_1d8428;
        case 0x1d842cu: goto label_1d842c;
        case 0x1d8430u: goto label_1d8430;
        case 0x1d8434u: goto label_1d8434;
        case 0x1d8438u: goto label_1d8438;
        case 0x1d843cu: goto label_1d843c;
        case 0x1d8440u: goto label_1d8440;
        case 0x1d8444u: goto label_1d8444;
        case 0x1d8448u: goto label_1d8448;
        case 0x1d844cu: goto label_1d844c;
        case 0x1d8450u: goto label_1d8450;
        case 0x1d8454u: goto label_1d8454;
        case 0x1d8458u: goto label_1d8458;
        case 0x1d845cu: goto label_1d845c;
        case 0x1d8460u: goto label_1d8460;
        case 0x1d8464u: goto label_1d8464;
        case 0x1d8468u: goto label_1d8468;
        case 0x1d846cu: goto label_1d846c;
        case 0x1d8470u: goto label_1d8470;
        case 0x1d8474u: goto label_1d8474;
        case 0x1d8478u: goto label_1d8478;
        case 0x1d847cu: goto label_1d847c;
        case 0x1d8480u: goto label_1d8480;
        case 0x1d8484u: goto label_1d8484;
        case 0x1d8488u: goto label_1d8488;
        case 0x1d848cu: goto label_1d848c;
        case 0x1d8490u: goto label_1d8490;
        case 0x1d8494u: goto label_1d8494;
        case 0x1d8498u: goto label_1d8498;
        case 0x1d849cu: goto label_1d849c;
        case 0x1d84a0u: goto label_1d84a0;
        case 0x1d84a4u: goto label_1d84a4;
        case 0x1d84a8u: goto label_1d84a8;
        case 0x1d84acu: goto label_1d84ac;
        case 0x1d84b0u: goto label_1d84b0;
        case 0x1d84b4u: goto label_1d84b4;
        case 0x1d84b8u: goto label_1d84b8;
        case 0x1d84bcu: goto label_1d84bc;
        case 0x1d84c0u: goto label_1d84c0;
        case 0x1d84c4u: goto label_1d84c4;
        case 0x1d84c8u: goto label_1d84c8;
        case 0x1d84ccu: goto label_1d84cc;
        case 0x1d84d0u: goto label_1d84d0;
        case 0x1d84d4u: goto label_1d84d4;
        case 0x1d84d8u: goto label_1d84d8;
        case 0x1d84dcu: goto label_1d84dc;
        case 0x1d84e0u: goto label_1d84e0;
        case 0x1d84e4u: goto label_1d84e4;
        case 0x1d84e8u: goto label_1d84e8;
        case 0x1d84ecu: goto label_1d84ec;
        case 0x1d84f0u: goto label_1d84f0;
        case 0x1d84f4u: goto label_1d84f4;
        case 0x1d84f8u: goto label_1d84f8;
        case 0x1d84fcu: goto label_1d84fc;
        case 0x1d8500u: goto label_1d8500;
        case 0x1d8504u: goto label_1d8504;
        case 0x1d8508u: goto label_1d8508;
        case 0x1d850cu: goto label_1d850c;
        case 0x1d8510u: goto label_1d8510;
        case 0x1d8514u: goto label_1d8514;
        case 0x1d8518u: goto label_1d8518;
        case 0x1d851cu: goto label_1d851c;
        case 0x1d8520u: goto label_1d8520;
        case 0x1d8524u: goto label_1d8524;
        case 0x1d8528u: goto label_1d8528;
        case 0x1d852cu: goto label_1d852c;
        case 0x1d8530u: goto label_1d8530;
        case 0x1d8534u: goto label_1d8534;
        case 0x1d8538u: goto label_1d8538;
        case 0x1d853cu: goto label_1d853c;
        case 0x1d8540u: goto label_1d8540;
        case 0x1d8544u: goto label_1d8544;
        case 0x1d8548u: goto label_1d8548;
        case 0x1d854cu: goto label_1d854c;
        case 0x1d8550u: goto label_1d8550;
        case 0x1d8554u: goto label_1d8554;
        case 0x1d8558u: goto label_1d8558;
        case 0x1d855cu: goto label_1d855c;
        case 0x1d8560u: goto label_1d8560;
        case 0x1d8564u: goto label_1d8564;
        case 0x1d8568u: goto label_1d8568;
        case 0x1d856cu: goto label_1d856c;
        case 0x1d8570u: goto label_1d8570;
        case 0x1d8574u: goto label_1d8574;
        case 0x1d8578u: goto label_1d8578;
        case 0x1d857cu: goto label_1d857c;
        case 0x1d8580u: goto label_1d8580;
        case 0x1d8584u: goto label_1d8584;
        case 0x1d8588u: goto label_1d8588;
        case 0x1d858cu: goto label_1d858c;
        case 0x1d8590u: goto label_1d8590;
        case 0x1d8594u: goto label_1d8594;
        case 0x1d8598u: goto label_1d8598;
        case 0x1d859cu: goto label_1d859c;
        case 0x1d85a0u: goto label_1d85a0;
        case 0x1d85a4u: goto label_1d85a4;
        case 0x1d85a8u: goto label_1d85a8;
        case 0x1d85acu: goto label_1d85ac;
        case 0x1d85b0u: goto label_1d85b0;
        case 0x1d85b4u: goto label_1d85b4;
        case 0x1d85b8u: goto label_1d85b8;
        case 0x1d85bcu: goto label_1d85bc;
        case 0x1d85c0u: goto label_1d85c0;
        case 0x1d85c4u: goto label_1d85c4;
        case 0x1d85c8u: goto label_1d85c8;
        case 0x1d85ccu: goto label_1d85cc;
        case 0x1d85d0u: goto label_1d85d0;
        case 0x1d85d4u: goto label_1d85d4;
        case 0x1d85d8u: goto label_1d85d8;
        case 0x1d85dcu: goto label_1d85dc;
        case 0x1d85e0u: goto label_1d85e0;
        case 0x1d85e4u: goto label_1d85e4;
        case 0x1d85e8u: goto label_1d85e8;
        case 0x1d85ecu: goto label_1d85ec;
        case 0x1d85f0u: goto label_1d85f0;
        case 0x1d85f4u: goto label_1d85f4;
        case 0x1d85f8u: goto label_1d85f8;
        case 0x1d85fcu: goto label_1d85fc;
        case 0x1d8600u: goto label_1d8600;
        case 0x1d8604u: goto label_1d8604;
        case 0x1d8608u: goto label_1d8608;
        case 0x1d860cu: goto label_1d860c;
        case 0x1d8610u: goto label_1d8610;
        case 0x1d8614u: goto label_1d8614;
        case 0x1d8618u: goto label_1d8618;
        case 0x1d861cu: goto label_1d861c;
        case 0x1d8620u: goto label_1d8620;
        case 0x1d8624u: goto label_1d8624;
        case 0x1d8628u: goto label_1d8628;
        case 0x1d862cu: goto label_1d862c;
        case 0x1d8630u: goto label_1d8630;
        case 0x1d8634u: goto label_1d8634;
        case 0x1d8638u: goto label_1d8638;
        case 0x1d863cu: goto label_1d863c;
        case 0x1d8640u: goto label_1d8640;
        case 0x1d8644u: goto label_1d8644;
        case 0x1d8648u: goto label_1d8648;
        case 0x1d864cu: goto label_1d864c;
        case 0x1d8650u: goto label_1d8650;
        case 0x1d8654u: goto label_1d8654;
        case 0x1d8658u: goto label_1d8658;
        case 0x1d865cu: goto label_1d865c;
        case 0x1d8660u: goto label_1d8660;
        case 0x1d8664u: goto label_1d8664;
        case 0x1d8668u: goto label_1d8668;
        case 0x1d866cu: goto label_1d866c;
        case 0x1d8670u: goto label_1d8670;
        case 0x1d8674u: goto label_1d8674;
        case 0x1d8678u: goto label_1d8678;
        case 0x1d867cu: goto label_1d867c;
        case 0x1d8680u: goto label_1d8680;
        case 0x1d8684u: goto label_1d8684;
        case 0x1d8688u: goto label_1d8688;
        case 0x1d868cu: goto label_1d868c;
        case 0x1d8690u: goto label_1d8690;
        case 0x1d8694u: goto label_1d8694;
        case 0x1d8698u: goto label_1d8698;
        case 0x1d869cu: goto label_1d869c;
        case 0x1d86a0u: goto label_1d86a0;
        case 0x1d86a4u: goto label_1d86a4;
        case 0x1d86a8u: goto label_1d86a8;
        case 0x1d86acu: goto label_1d86ac;
        case 0x1d86b0u: goto label_1d86b0;
        case 0x1d86b4u: goto label_1d86b4;
        case 0x1d86b8u: goto label_1d86b8;
        case 0x1d86bcu: goto label_1d86bc;
        case 0x1d86c0u: goto label_1d86c0;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86c8u: goto label_1d86c8;
        case 0x1d86ccu: goto label_1d86cc;
        case 0x1d86d0u: goto label_1d86d0;
        case 0x1d86d4u: goto label_1d86d4;
        case 0x1d86d8u: goto label_1d86d8;
        case 0x1d86dcu: goto label_1d86dc;
        case 0x1d86e0u: goto label_1d86e0;
        case 0x1d86e4u: goto label_1d86e4;
        case 0x1d86e8u: goto label_1d86e8;
        case 0x1d86ecu: goto label_1d86ec;
        case 0x1d86f0u: goto label_1d86f0;
        case 0x1d86f4u: goto label_1d86f4;
        case 0x1d86f8u: goto label_1d86f8;
        case 0x1d86fcu: goto label_1d86fc;
        case 0x1d8700u: goto label_1d8700;
        case 0x1d8704u: goto label_1d8704;
        case 0x1d8708u: goto label_1d8708;
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8710u: goto label_1d8710;
        case 0x1d8714u: goto label_1d8714;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d871cu: goto label_1d871c;
        case 0x1d8720u: goto label_1d8720;
        case 0x1d8724u: goto label_1d8724;
        case 0x1d8728u: goto label_1d8728;
        case 0x1d872cu: goto label_1d872c;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8734u: goto label_1d8734;
        case 0x1d8738u: goto label_1d8738;
        case 0x1d873cu: goto label_1d873c;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8744u: goto label_1d8744;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d874cu: goto label_1d874c;
        case 0x1d8750u: goto label_1d8750;
        case 0x1d8754u: goto label_1d8754;
        case 0x1d8758u: goto label_1d8758;
        case 0x1d875cu: goto label_1d875c;
        case 0x1d8760u: goto label_1d8760;
        case 0x1d8764u: goto label_1d8764;
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        case 0x1d878cu: goto label_1d878c;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d8794u: goto label_1d8794;
        case 0x1d8798u: goto label_1d8798;
        case 0x1d879cu: goto label_1d879c;
        case 0x1d87a0u: goto label_1d87a0;
        case 0x1d87a4u: goto label_1d87a4;
        case 0x1d87a8u: goto label_1d87a8;
        case 0x1d87acu: goto label_1d87ac;
        case 0x1d87b0u: goto label_1d87b0;
        case 0x1d87b4u: goto label_1d87b4;
        case 0x1d87b8u: goto label_1d87b8;
        case 0x1d87bcu: goto label_1d87bc;
        case 0x1d87c0u: goto label_1d87c0;
        case 0x1d87c4u: goto label_1d87c4;
        case 0x1d87c8u: goto label_1d87c8;
        case 0x1d87ccu: goto label_1d87cc;
        case 0x1d87d0u: goto label_1d87d0;
        case 0x1d87d4u: goto label_1d87d4;
        case 0x1d87d8u: goto label_1d87d8;
        case 0x1d87dcu: goto label_1d87dc;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d87e4u: goto label_1d87e4;
        case 0x1d87e8u: goto label_1d87e8;
        case 0x1d87ecu: goto label_1d87ec;
        case 0x1d87f0u: goto label_1d87f0;
        case 0x1d87f4u: goto label_1d87f4;
        case 0x1d87f8u: goto label_1d87f8;
        case 0x1d87fcu: goto label_1d87fc;
        case 0x1d8800u: goto label_1d8800;
        case 0x1d8804u: goto label_1d8804;
        case 0x1d8808u: goto label_1d8808;
        case 0x1d880cu: goto label_1d880c;
        case 0x1d8810u: goto label_1d8810;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8818u: goto label_1d8818;
        case 0x1d881cu: goto label_1d881c;
        case 0x1d8820u: goto label_1d8820;
        case 0x1d8824u: goto label_1d8824;
        case 0x1d8828u: goto label_1d8828;
        case 0x1d882cu: goto label_1d882c;
        case 0x1d8830u: goto label_1d8830;
        case 0x1d8834u: goto label_1d8834;
        case 0x1d8838u: goto label_1d8838;
        case 0x1d883cu: goto label_1d883c;
        case 0x1d8840u: goto label_1d8840;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8848u: goto label_1d8848;
        case 0x1d884cu: goto label_1d884c;
        case 0x1d8850u: goto label_1d8850;
        case 0x1d8854u: goto label_1d8854;
        case 0x1d8858u: goto label_1d8858;
        case 0x1d885cu: goto label_1d885c;
        case 0x1d8860u: goto label_1d8860;
        case 0x1d8864u: goto label_1d8864;
        case 0x1d8868u: goto label_1d8868;
        case 0x1d886cu: goto label_1d886c;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d8874u: goto label_1d8874;
        case 0x1d8878u: goto label_1d8878;
        case 0x1d887cu: goto label_1d887c;
        case 0x1d8880u: goto label_1d8880;
        case 0x1d8884u: goto label_1d8884;
        case 0x1d8888u: goto label_1d8888;
        case 0x1d888cu: goto label_1d888c;
        case 0x1d8890u: goto label_1d8890;
        case 0x1d8894u: goto label_1d8894;
        case 0x1d8898u: goto label_1d8898;
        case 0x1d889cu: goto label_1d889c;
        case 0x1d88a0u: goto label_1d88a0;
        case 0x1d88a4u: goto label_1d88a4;
        case 0x1d88a8u: goto label_1d88a8;
        case 0x1d88acu: goto label_1d88ac;
        case 0x1d88b0u: goto label_1d88b0;
        case 0x1d88b4u: goto label_1d88b4;
        case 0x1d88b8u: goto label_1d88b8;
        case 0x1d88bcu: goto label_1d88bc;
        case 0x1d88c0u: goto label_1d88c0;
        case 0x1d88c4u: goto label_1d88c4;
        case 0x1d88c8u: goto label_1d88c8;
        case 0x1d88ccu: goto label_1d88cc;
        case 0x1d88d0u: goto label_1d88d0;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d88d8u: goto label_1d88d8;
        case 0x1d88dcu: goto label_1d88dc;
        case 0x1d88e0u: goto label_1d88e0;
        case 0x1d88e4u: goto label_1d88e4;
        case 0x1d88e8u: goto label_1d88e8;
        case 0x1d88ecu: goto label_1d88ec;
        case 0x1d88f0u: goto label_1d88f0;
        case 0x1d88f4u: goto label_1d88f4;
        case 0x1d88f8u: goto label_1d88f8;
        case 0x1d88fcu: goto label_1d88fc;
        case 0x1d8900u: goto label_1d8900;
        case 0x1d8904u: goto label_1d8904;
        case 0x1d8908u: goto label_1d8908;
        case 0x1d890cu: goto label_1d890c;
        case 0x1d8910u: goto label_1d8910;
        case 0x1d8914u: goto label_1d8914;
        case 0x1d8918u: goto label_1d8918;
        case 0x1d891cu: goto label_1d891c;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8924u: goto label_1d8924;
        case 0x1d8928u: goto label_1d8928;
        case 0x1d892cu: goto label_1d892c;
        case 0x1d8930u: goto label_1d8930;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8938u: goto label_1d8938;
        case 0x1d893cu: goto label_1d893c;
        case 0x1d8940u: goto label_1d8940;
        case 0x1d8944u: goto label_1d8944;
        case 0x1d8948u: goto label_1d8948;
        case 0x1d894cu: goto label_1d894c;
        case 0x1d8950u: goto label_1d8950;
        case 0x1d8954u: goto label_1d8954;
        case 0x1d8958u: goto label_1d8958;
        case 0x1d895cu: goto label_1d895c;
        case 0x1d8960u: goto label_1d8960;
        case 0x1d8964u: goto label_1d8964;
        case 0x1d8968u: goto label_1d8968;
        case 0x1d896cu: goto label_1d896c;
        case 0x1d8970u: goto label_1d8970;
        case 0x1d8974u: goto label_1d8974;
        case 0x1d8978u: goto label_1d8978;
        case 0x1d897cu: goto label_1d897c;
        case 0x1d8980u: goto label_1d8980;
        case 0x1d8984u: goto label_1d8984;
        case 0x1d8988u: goto label_1d8988;
        case 0x1d898cu: goto label_1d898c;
        case 0x1d8990u: goto label_1d8990;
        case 0x1d8994u: goto label_1d8994;
        case 0x1d8998u: goto label_1d8998;
        case 0x1d899cu: goto label_1d899c;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89a4u: goto label_1d89a4;
        case 0x1d89a8u: goto label_1d89a8;
        case 0x1d89acu: goto label_1d89ac;
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89b4u: goto label_1d89b4;
        case 0x1d89b8u: goto label_1d89b8;
        case 0x1d89bcu: goto label_1d89bc;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89c4u: goto label_1d89c4;
        case 0x1d89c8u: goto label_1d89c8;
        case 0x1d89ccu: goto label_1d89cc;
        case 0x1d89d0u: goto label_1d89d0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89d8u: goto label_1d89d8;
        case 0x1d89dcu: goto label_1d89dc;
        case 0x1d89e0u: goto label_1d89e0;
        case 0x1d89e4u: goto label_1d89e4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89ecu: goto label_1d89ec;
        default: break;
    }

    ctx->pc = 0x1d6b00u;

label_1d6b00:
    // 0x1d6b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6b04:
    // 0x1d6b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6b08:
    // 0x1d6b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6b0c:
    // 0x1d6b0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d6b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1d6b10:
    // 0x1d6b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b14:
    // 0x1d6b14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1d6b18:
    if (ctx->pc == 0x1D6B18u) {
        ctx->pc = 0x1D6B1Cu;
        goto label_1d6b1c;
    }
    ctx->pc = 0x1D6B14u;
    {
        const bool branch_taken_0x1d6b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b14) {
            ctx->pc = 0x1D6B8Cu;
            goto label_1d6b8c;
        }
    }
    ctx->pc = 0x1D6B1Cu;
label_1d6b1c:
    // 0x1d6b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b20:
    // 0x1d6b20: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1d6b24:
    // 0x1d6b24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6b28:
    // 0x1d6b28: 0xc058c38  jal         func_1630E0
label_1d6b2c:
    if (ctx->pc == 0x1D6B2Cu) {
        ctx->pc = 0x1D6B30u;
        goto label_1d6b30;
    }
    ctx->pc = 0x1D6B28u;
    SET_GPR_U32(ctx, 31, 0x1D6B30u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1D6B28u, 0x1D6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B30u;
label_1d6b30:
    // 0x1d6b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b34:
    // 0x1d6b34: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
label_1d6b38:
    // 0x1d6b38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6b3c:
    // 0x1d6b3c: 0xc058c38  jal         func_1630E0
label_1d6b40:
    if (ctx->pc == 0x1D6B40u) {
        ctx->pc = 0x1D6B44u;
        goto label_1d6b44;
    }
    ctx->pc = 0x1D6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D6B44u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1D6B3Cu, 0x1D6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B44u;
label_1d6b44:
    // 0x1d6b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b48:
    // 0x1d6b48: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_1d6b4c:
    // 0x1d6b4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6b50:
    // 0x1d6b50: 0xc056094  jal         func_158250
label_1d6b54:
    if (ctx->pc == 0x1D6B54u) {
        ctx->pc = 0x1D6B58u;
        goto label_1d6b58;
    }
    ctx->pc = 0x1D6B50u;
    SET_GPR_U32(ctx, 31, 0x1D6B58u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D6B50u, 0x1D6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B58u;
label_1d6b58:
    // 0x1d6b58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b5c:
    // 0x1d6b5c: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1d6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
label_1d6b60:
    // 0x1d6b60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6b64:
    // 0x1d6b64: 0xc056094  jal         func_158250
label_1d6b68:
    if (ctx->pc == 0x1D6B68u) {
        ctx->pc = 0x1D6B6Cu;
        goto label_1d6b6c;
    }
    ctx->pc = 0x1D6B64u;
    SET_GPR_U32(ctx, 31, 0x1D6B6Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D6B64u, 0x1D6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B6Cu;
label_1d6b6c:
    // 0x1d6b6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d6b6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6b70:
    // 0x1d6b70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1d6b74:
    // 0x1d6b74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d6b78:
    // 0x1d6b78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1d6b7c:
    if (ctx->pc == 0x1D6B7Cu) {
        ctx->pc = 0x1D6B80u;
        goto label_1d6b80;
    }
    ctx->pc = 0x1D6B78u;
    {
        const bool branch_taken_0x1d6b78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6b78) {
            ctx->pc = 0x1D6B8Cu;
            goto label_1d6b8c;
        }
    }
    ctx->pc = 0x1D6B80u;
label_1d6b80:
    // 0x1d6b80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b84:
    // 0x1d6b84: 0xc0ba070  jal         func_2E81C0
label_1d6b88:
    if (ctx->pc == 0x1D6B88u) {
        ctx->pc = 0x1D6B8Cu;
        goto label_1d6b8c;
    }
    ctx->pc = 0x1D6B84u;
    SET_GPR_U32(ctx, 31, 0x1D6B8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D6B84u, 0x1D6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6B8Cu;
label_1d6b8c:
    // 0x1d6b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6b90:
    // 0x1d6b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6b94:
    // 0x1d6b94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6b98:
    // 0x1d6b98: 0x3e00008  jr          $ra
label_1d6b9c:
    if (ctx->pc == 0x1D6B9Cu) {
        ctx->pc = 0x1D6BA0u;
        goto label_1d6ba0;
    }
    ctx->pc = 0x1D6B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BA0u;
label_1d6ba0:
    // 0x1d6ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6ba4:
    // 0x1d6ba4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6ba8:
    // 0x1d6ba8: 0x3e00008  jr          $ra
label_1d6bac:
    if (ctx->pc == 0x1D6BACu) {
        ctx->pc = 0x1D6BB0u;
        goto label_1d6bb0;
    }
    ctx->pc = 0x1D6BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BB0u;
label_1d6bb0:
    // 0x1d6bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6bb4:
    // 0x1d6bb4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6bb8:
    // 0x1d6bb8: 0x3e00008  jr          $ra
label_1d6bbc:
    if (ctx->pc == 0x1D6BBCu) {
        ctx->pc = 0x1D6BC0u;
        goto label_1d6bc0;
    }
    ctx->pc = 0x1D6BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BC0u;
label_1d6bc0:
    // 0x1d6bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6bc4:
    // 0x1d6bc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6bc8:
    // 0x1d6bc8: 0x3e00008  jr          $ra
label_1d6bcc:
    if (ctx->pc == 0x1D6BCCu) {
        ctx->pc = 0x1D6BD0u;
        goto label_1d6bd0;
    }
    ctx->pc = 0x1D6BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BD0u;
label_1d6bd0:
    // 0x1d6bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6bd4:
    // 0x1d6bd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d6bd8:
    // 0x1d6bd8: 0x3e00008  jr          $ra
label_1d6bdc:
    if (ctx->pc == 0x1D6BDCu) {
        ctx->pc = 0x1D6BE0u;
        goto label_1d6be0;
    }
    ctx->pc = 0x1D6BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6BE0u;
label_1d6be0:
    // 0x1d6be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6be4:
    // 0x1d6be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6be8:
    // 0x1d6be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6bec:
    // 0x1d6bec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6bf0:
    // 0x1d6bf0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6bf4:
    // 0x1d6bf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6bf8:
    // 0x1d6bf8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6bfc:
    if (ctx->pc == 0x1D6BFCu) {
        ctx->pc = 0x1D6C00u;
        goto label_1d6c00;
    }
    ctx->pc = 0x1D6BF8u;
    {
        const bool branch_taken_0x1d6bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6bf8) {
            ctx->pc = 0x1D6C08u;
            goto label_1d6c08;
        }
    }
    ctx->pc = 0x1D6C00u;
label_1d6c00:
    // 0x1d6c00: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d6c04:
    if (ctx->pc == 0x1D6C04u) {
        ctx->pc = 0x1D6C08u;
        goto label_1d6c08;
    }
    ctx->pc = 0x1D6C00u;
    {
        const bool branch_taken_0x1d6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c00) {
            ctx->pc = 0x1D6C34u;
            goto label_1d6c34;
        }
    }
    ctx->pc = 0x1D6C08u;
label_1d6c08:
    // 0x1d6c08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c0c:
    // 0x1d6c0c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6c10:
    // 0x1d6c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c14:
    // 0x1d6c14: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6c18:
    // 0x1d6c18: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6c1c:
    // 0x1d6c1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c20:
    // 0x1d6c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c24:
    // 0x1d6c24: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x1d6c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d6c28:
    // 0x1d6c28: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6c2c:
    // 0x1d6c2c: 0xc0798ac  jal         func_1E62B0
label_1d6c30:
    if (ctx->pc == 0x1D6C30u) {
        ctx->pc = 0x1D6C34u;
        goto label_1d6c34;
    }
    ctx->pc = 0x1D6C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C34u);
    ctx->pc = 0x1E62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62B0u, 0x1D6C2Cu, 0x1D6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6C34u;
label_1d6c34:
    // 0x1d6c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6c38:
    // 0x1d6c38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6c3c:
    // 0x1d6c3c: 0x3e00008  jr          $ra
label_1d6c40:
    if (ctx->pc == 0x1D6C40u) {
        ctx->pc = 0x1D6C44u;
        goto label_1d6c44;
    }
    ctx->pc = 0x1D6C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6C44u;
label_1d6c44:
    // 0x1d6c44: 0x0  nop
    ctx->pc = 0x1d6c44u;
    // NOP
label_1d6c48:
    // 0x1d6c48: 0x0  nop
    ctx->pc = 0x1d6c48u;
    // NOP
label_1d6c4c:
    // 0x1d6c4c: 0x0  nop
    ctx->pc = 0x1d6c4cu;
    // NOP
label_1d6c50:
    // 0x1d6c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6c54:
    // 0x1d6c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6c58:
    // 0x1d6c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6c5c:
    // 0x1d6c5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c60:
    // 0x1d6c60: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6c64:
    // 0x1d6c64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6c68:
    // 0x1d6c68: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6c6c:
    if (ctx->pc == 0x1D6C6Cu) {
        ctx->pc = 0x1D6C70u;
        goto label_1d6c70;
    }
    ctx->pc = 0x1D6C68u;
    {
        const bool branch_taken_0x1d6c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6c68) {
            ctx->pc = 0x1D6C78u;
            goto label_1d6c78;
        }
    }
    ctx->pc = 0x1D6C70u;
label_1d6c70:
    // 0x1d6c70: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d6c74:
    if (ctx->pc == 0x1D6C74u) {
        ctx->pc = 0x1D6C78u;
        goto label_1d6c78;
    }
    ctx->pc = 0x1D6C70u;
    {
        const bool branch_taken_0x1d6c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6c70) {
            ctx->pc = 0x1D6CA4u;
            goto label_1d6ca4;
        }
    }
    ctx->pc = 0x1D6C78u;
label_1d6c78:
    // 0x1d6c78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c7c:
    // 0x1d6c7c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6c80:
    // 0x1d6c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c84:
    // 0x1d6c84: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6c88:
    // 0x1d6c88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6c8c:
    // 0x1d6c8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c90:
    // 0x1d6c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6c94:
    // 0x1d6c94: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x1d6c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d6c98:
    // 0x1d6c98: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6c9c:
    // 0x1d6c9c: 0xc0798ac  jal         func_1E62B0
label_1d6ca0:
    if (ctx->pc == 0x1D6CA0u) {
        ctx->pc = 0x1D6CA4u;
        goto label_1d6ca4;
    }
    ctx->pc = 0x1D6C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D6CA4u);
    ctx->pc = 0x1E62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62B0u, 0x1D6C9Cu, 0x1D6CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6CA4u;
label_1d6ca4:
    // 0x1d6ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6ca8:
    // 0x1d6ca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6cac:
    // 0x1d6cac: 0x3e00008  jr          $ra
label_1d6cb0:
    if (ctx->pc == 0x1D6CB0u) {
        ctx->pc = 0x1D6CB4u;
        goto label_1d6cb4;
    }
    ctx->pc = 0x1D6CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6CB4u;
label_1d6cb4:
    // 0x1d6cb4: 0x0  nop
    ctx->pc = 0x1d6cb4u;
    // NOP
label_1d6cb8:
    // 0x1d6cb8: 0x0  nop
    ctx->pc = 0x1d6cb8u;
    // NOP
label_1d6cbc:
    // 0x1d6cbc: 0x0  nop
    ctx->pc = 0x1d6cbcu;
    // NOP
label_1d6cc0:
    // 0x1d6cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6cc4:
    // 0x1d6cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6cc8:
    // 0x1d6cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6ccc:
    // 0x1d6ccc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6cd0:
    // 0x1d6cd0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6cd4:
    // 0x1d6cd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6cd8:
    // 0x1d6cd8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6cdc:
    if (ctx->pc == 0x1D6CDCu) {
        ctx->pc = 0x1D6CE0u;
        goto label_1d6ce0;
    }
    ctx->pc = 0x1D6CD8u;
    {
        const bool branch_taken_0x1d6cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6cd8) {
            ctx->pc = 0x1D6CE8u;
            goto label_1d6ce8;
        }
    }
    ctx->pc = 0x1D6CE0u;
label_1d6ce0:
    // 0x1d6ce0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d6ce4:
    if (ctx->pc == 0x1D6CE4u) {
        ctx->pc = 0x1D6CE8u;
        goto label_1d6ce8;
    }
    ctx->pc = 0x1D6CE0u;
    {
        const bool branch_taken_0x1d6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ce0) {
            ctx->pc = 0x1D6D14u;
            goto label_1d6d14;
        }
    }
    ctx->pc = 0x1D6CE8u;
label_1d6ce8:
    // 0x1d6ce8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6cec:
    // 0x1d6cec: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6cf0:
    // 0x1d6cf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6cf4:
    // 0x1d6cf4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6cf8:
    // 0x1d6cf8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6cfc:
    // 0x1d6cfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d00:
    // 0x1d6d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d04:
    // 0x1d6d04: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x1d6d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d6d08:
    // 0x1d6d08: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d6d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6d0c:
    // 0x1d6d0c: 0xc0798ac  jal         func_1E62B0
label_1d6d10:
    if (ctx->pc == 0x1D6D10u) {
        ctx->pc = 0x1D6D14u;
        goto label_1d6d14;
    }
    ctx->pc = 0x1D6D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D14u);
    ctx->pc = 0x1E62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62B0u, 0x1D6D0Cu, 0x1D6D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D14u;
label_1d6d14:
    // 0x1d6d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6d18:
    // 0x1d6d18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6d1c:
    // 0x1d6d1c: 0x3e00008  jr          $ra
label_1d6d20:
    if (ctx->pc == 0x1D6D20u) {
        ctx->pc = 0x1D6D24u;
        goto label_1d6d24;
    }
    ctx->pc = 0x1D6D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D24u;
label_1d6d24:
    // 0x1d6d24: 0x0  nop
    ctx->pc = 0x1d6d24u;
    // NOP
label_1d6d28:
    // 0x1d6d28: 0x0  nop
    ctx->pc = 0x1d6d28u;
    // NOP
label_1d6d2c:
    // 0x1d6d2c: 0x0  nop
    ctx->pc = 0x1d6d2cu;
    // NOP
label_1d6d30:
    // 0x1d6d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6d34:
    // 0x1d6d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6d38:
    // 0x1d6d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6d3c:
    // 0x1d6d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d40:
    // 0x1d6d40: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6d44:
    // 0x1d6d44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6d48:
    // 0x1d6d48: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6d4c:
    if (ctx->pc == 0x1D6D4Cu) {
        ctx->pc = 0x1D6D50u;
        goto label_1d6d50;
    }
    ctx->pc = 0x1D6D48u;
    {
        const bool branch_taken_0x1d6d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6d48) {
            ctx->pc = 0x1D6D58u;
            goto label_1d6d58;
        }
    }
    ctx->pc = 0x1D6D50u;
label_1d6d50:
    // 0x1d6d50: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d6d54:
    if (ctx->pc == 0x1D6D54u) {
        ctx->pc = 0x1D6D58u;
        goto label_1d6d58;
    }
    ctx->pc = 0x1D6D50u;
    {
        const bool branch_taken_0x1d6d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6d50) {
            ctx->pc = 0x1D6D84u;
            goto label_1d6d84;
        }
    }
    ctx->pc = 0x1D6D58u;
label_1d6d58:
    // 0x1d6d58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d5c:
    // 0x1d6d5c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6d60:
    // 0x1d6d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d64:
    // 0x1d6d64: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6d68:
    // 0x1d6d68: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6d6c:
    // 0x1d6d6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d70:
    // 0x1d6d70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6d74:
    // 0x1d6d74: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x1d6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d6d78:
    // 0x1d6d78: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6d7c:
    // 0x1d6d7c: 0xc0798ac  jal         func_1E62B0
label_1d6d80:
    if (ctx->pc == 0x1D6D80u) {
        ctx->pc = 0x1D6D84u;
        goto label_1d6d84;
    }
    ctx->pc = 0x1D6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D84u);
    ctx->pc = 0x1E62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62B0u, 0x1D6D7Cu, 0x1D6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6D84u;
label_1d6d84:
    // 0x1d6d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6d88:
    // 0x1d6d88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6d8c:
    // 0x1d6d8c: 0x3e00008  jr          $ra
label_1d6d90:
    if (ctx->pc == 0x1D6D90u) {
        ctx->pc = 0x1D6D94u;
        goto label_1d6d94;
    }
    ctx->pc = 0x1D6D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D94u;
label_1d6d94:
    // 0x1d6d94: 0x0  nop
    ctx->pc = 0x1d6d94u;
    // NOP
label_1d6d98:
    // 0x1d6d98: 0x0  nop
    ctx->pc = 0x1d6d98u;
    // NOP
label_1d6d9c:
    // 0x1d6d9c: 0x0  nop
    ctx->pc = 0x1d6d9cu;
    // NOP
label_1d6da0:
    // 0x1d6da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6da4:
    // 0x1d6da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6da8:
    // 0x1d6da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6dac:
    // 0x1d6dac: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6dacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d6db0:
    // 0x1d6db0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6db4:
    // 0x1d6db4: 0xc07627c  jal         func_1D89F0
label_1d6db8:
    if (ctx->pc == 0x1D6DB8u) {
        ctx->pc = 0x1D6DBCu;
        goto label_1d6dbc;
    }
    ctx->pc = 0x1D6DB4u;
    SET_GPR_U32(ctx, 31, 0x1D6DBCu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D6DB4u, 0x1D6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DBCu;
label_1d6dbc:
    // 0x1d6dbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6dc0:
    // 0x1d6dc0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6dc4:
    // 0x1d6dc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6dc8:
    // 0x1d6dc8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d6dcc:
    if (ctx->pc == 0x1D6DCCu) {
        ctx->pc = 0x1D6DD0u;
        goto label_1d6dd0;
    }
    ctx->pc = 0x1D6DC8u;
    {
        const bool branch_taken_0x1d6dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6dc8) {
            ctx->pc = 0x1D6E38u;
            goto label_1d6e38;
        }
    }
    ctx->pc = 0x1D6DD0u;
label_1d6dd0:
    // 0x1d6dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6dd4:
    // 0x1d6dd4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d6dd8:
    if (ctx->pc == 0x1D6DD8u) {
        ctx->pc = 0x1D6DDCu;
        goto label_1d6ddc;
    }
    ctx->pc = 0x1D6DD4u;
    {
        const bool branch_taken_0x1d6dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6dd4) {
            ctx->pc = 0x1D6E1Cu;
            goto label_1d6e1c;
        }
    }
    ctx->pc = 0x1D6DDCu;
label_1d6ddc:
    // 0x1d6ddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6de0:
    // 0x1d6de0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6de4:
    if (ctx->pc == 0x1D6DE4u) {
        ctx->pc = 0x1D6DE8u;
        goto label_1d6de8;
    }
    ctx->pc = 0x1D6DE0u;
    {
        const bool branch_taken_0x1d6de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6de0) {
            ctx->pc = 0x1D6DF0u;
            goto label_1d6df0;
        }
    }
    ctx->pc = 0x1D6DE8u;
label_1d6de8:
    // 0x1d6de8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d6dec:
    if (ctx->pc == 0x1D6DECu) {
        ctx->pc = 0x1D6DF0u;
        goto label_1d6df0;
    }
    ctx->pc = 0x1D6DE8u;
    {
        const bool branch_taken_0x1d6de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6de8) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6DF0u;
label_1d6df0:
    // 0x1d6df0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6df4:
    // 0x1d6df4: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d6df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d6df8:
    // 0x1d6df8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d6dfc:
    if (ctx->pc == 0x1D6DFCu) {
        ctx->pc = 0x1D6E00u;
        goto label_1d6e00;
    }
    ctx->pc = 0x1D6DF8u;
    {
        const bool branch_taken_0x1d6df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6df8) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6E00u;
label_1d6e00:
    // 0x1d6e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e04:
    // 0x1d6e04: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d6e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d6e08:
    // 0x1d6e08: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6e0c:
    // 0x1d6e0c: 0xc076f14  jal         func_1DBC50
label_1d6e10:
    if (ctx->pc == 0x1D6E10u) {
        ctx->pc = 0x1D6E14u;
        goto label_1d6e14;
    }
    ctx->pc = 0x1D6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E14u);
    ctx->pc = 0x1DBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC50u, 0x1D6E0Cu, 0x1D6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E14u;
label_1d6e14:
    // 0x1d6e14: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d6e18:
    if (ctx->pc == 0x1D6E18u) {
        ctx->pc = 0x1D6E1Cu;
        goto label_1d6e1c;
    }
    ctx->pc = 0x1D6E14u;
    {
        const bool branch_taken_0x1d6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e14) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6E1Cu;
label_1d6e1c:
    // 0x1d6e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e20:
    // 0x1d6e20: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d6e24:
    // 0x1d6e24: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6e28:
    // 0x1d6e28: 0xc077a00  jal         func_1DE800
label_1d6e2c:
    if (ctx->pc == 0x1D6E2Cu) {
        ctx->pc = 0x1D6E30u;
        goto label_1d6e30;
    }
    ctx->pc = 0x1D6E28u;
    SET_GPR_U32(ctx, 31, 0x1D6E30u);
    ctx->pc = 0x1DE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE800u, 0x1D6E28u, 0x1D6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E30u;
label_1d6e30:
    // 0x1d6e30: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d6e34:
    if (ctx->pc == 0x1D6E34u) {
        ctx->pc = 0x1D6E38u;
        goto label_1d6e38;
    }
    ctx->pc = 0x1D6E30u;
    {
        const bool branch_taken_0x1d6e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e30) {
            ctx->pc = 0x1D6E60u;
            goto label_1d6e60;
        }
    }
    ctx->pc = 0x1D6E38u;
label_1d6e38:
    // 0x1d6e38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e3c:
    // 0x1d6e3c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6e40:
    // 0x1d6e40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e44:
    // 0x1d6e44: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6e48:
    // 0x1d6e48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6e4c:
    // 0x1d6e4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e50:
    // 0x1d6e50: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6e54:
    // 0x1d6e54: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6e58:
    // 0x1d6e58: 0xc07935c  jal         func_1E4D70
label_1d6e5c:
    if (ctx->pc == 0x1D6E5Cu) {
        ctx->pc = 0x1D6E60u;
        goto label_1d6e60;
    }
    ctx->pc = 0x1D6E58u;
    SET_GPR_U32(ctx, 31, 0x1D6E60u);
    ctx->pc = 0x1E4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4D70u, 0x1D6E58u, 0x1D6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E60u;
label_1d6e60:
    // 0x1d6e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6e64:
    // 0x1d6e64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6e68:
    // 0x1d6e68: 0x3e00008  jr          $ra
label_1d6e6c:
    if (ctx->pc == 0x1D6E6Cu) {
        ctx->pc = 0x1D6E70u;
        goto label_1d6e70;
    }
    ctx->pc = 0x1D6E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6E70u;
label_1d6e70:
    // 0x1d6e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6e74:
    // 0x1d6e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6e78:
    // 0x1d6e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6e7c:
    // 0x1d6e7c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6e7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d6e80:
    // 0x1d6e80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e84:
    // 0x1d6e84: 0xc07627c  jal         func_1D89F0
label_1d6e88:
    if (ctx->pc == 0x1D6E88u) {
        ctx->pc = 0x1D6E8Cu;
        goto label_1d6e8c;
    }
    ctx->pc = 0x1D6E84u;
    SET_GPR_U32(ctx, 31, 0x1D6E8Cu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D6E84u, 0x1D6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E8Cu;
label_1d6e8c:
    // 0x1d6e8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6e90:
    // 0x1d6e90: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6e94:
    // 0x1d6e94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6e98:
    // 0x1d6e98: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d6e9c:
    if (ctx->pc == 0x1D6E9Cu) {
        ctx->pc = 0x1D6EA0u;
        goto label_1d6ea0;
    }
    ctx->pc = 0x1D6E98u;
    {
        const bool branch_taken_0x1d6e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6e98) {
            ctx->pc = 0x1D6F08u;
            goto label_1d6f08;
        }
    }
    ctx->pc = 0x1D6EA0u;
label_1d6ea0:
    // 0x1d6ea0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6ea4:
    // 0x1d6ea4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d6ea8:
    if (ctx->pc == 0x1D6EA8u) {
        ctx->pc = 0x1D6EACu;
        goto label_1d6eac;
    }
    ctx->pc = 0x1D6EA4u;
    {
        const bool branch_taken_0x1d6ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6ea4) {
            ctx->pc = 0x1D6EECu;
            goto label_1d6eec;
        }
    }
    ctx->pc = 0x1D6EACu;
label_1d6eac:
    // 0x1d6eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6eb0:
    // 0x1d6eb0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6eb4:
    if (ctx->pc == 0x1D6EB4u) {
        ctx->pc = 0x1D6EB8u;
        goto label_1d6eb8;
    }
    ctx->pc = 0x1D6EB0u;
    {
        const bool branch_taken_0x1d6eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6eb0) {
            ctx->pc = 0x1D6EC0u;
            goto label_1d6ec0;
        }
    }
    ctx->pc = 0x1D6EB8u;
label_1d6eb8:
    // 0x1d6eb8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d6ebc:
    if (ctx->pc == 0x1D6EBCu) {
        ctx->pc = 0x1D6EC0u;
        goto label_1d6ec0;
    }
    ctx->pc = 0x1D6EB8u;
    {
        const bool branch_taken_0x1d6eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6eb8) {
            ctx->pc = 0x1D6F30u;
            goto label_1d6f30;
        }
    }
    ctx->pc = 0x1D6EC0u;
label_1d6ec0:
    // 0x1d6ec0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6ec4:
    // 0x1d6ec4: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d6ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d6ec8:
    // 0x1d6ec8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d6ecc:
    if (ctx->pc == 0x1D6ECCu) {
        ctx->pc = 0x1D6ED0u;
        goto label_1d6ed0;
    }
    ctx->pc = 0x1D6EC8u;
    {
        const bool branch_taken_0x1d6ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ec8) {
            ctx->pc = 0x1D6F30u;
            goto label_1d6f30;
        }
    }
    ctx->pc = 0x1D6ED0u;
label_1d6ed0:
    // 0x1d6ed0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6ed4:
    // 0x1d6ed4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d6ed8:
    // 0x1d6ed8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6edc:
    // 0x1d6edc: 0xc076f20  jal         func_1DBC80
label_1d6ee0:
    if (ctx->pc == 0x1D6EE0u) {
        ctx->pc = 0x1D6EE4u;
        goto label_1d6ee4;
    }
    ctx->pc = 0x1D6EDCu;
    SET_GPR_U32(ctx, 31, 0x1D6EE4u);
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1D6EDCu, 0x1D6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6EE4u;
label_1d6ee4:
    // 0x1d6ee4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d6ee8:
    if (ctx->pc == 0x1D6EE8u) {
        ctx->pc = 0x1D6EECu;
        goto label_1d6eec;
    }
    ctx->pc = 0x1D6EE4u;
    {
        const bool branch_taken_0x1d6ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ee4) {
            ctx->pc = 0x1D6F30u;
            goto label_1d6f30;
        }
    }
    ctx->pc = 0x1D6EECu;
label_1d6eec:
    // 0x1d6eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6ef0:
    // 0x1d6ef0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d6ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d6ef4:
    // 0x1d6ef4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6ef8:
    // 0x1d6ef8: 0xc077a24  jal         func_1DE890
label_1d6efc:
    if (ctx->pc == 0x1D6EFCu) {
        ctx->pc = 0x1D6F00u;
        goto label_1d6f00;
    }
    ctx->pc = 0x1D6EF8u;
    SET_GPR_U32(ctx, 31, 0x1D6F00u);
    ctx->pc = 0x1DE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE890u, 0x1D6EF8u, 0x1D6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F00u;
label_1d6f00:
    // 0x1d6f00: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d6f04:
    if (ctx->pc == 0x1D6F04u) {
        ctx->pc = 0x1D6F08u;
        goto label_1d6f08;
    }
    ctx->pc = 0x1D6F00u;
    {
        const bool branch_taken_0x1d6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f00) {
            ctx->pc = 0x1D6F30u;
            goto label_1d6f30;
        }
    }
    ctx->pc = 0x1D6F08u;
label_1d6f08:
    // 0x1d6f08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f0c:
    // 0x1d6f0c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6f10:
    // 0x1d6f10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f14:
    // 0x1d6f14: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6f18:
    // 0x1d6f18: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6f1c:
    // 0x1d6f1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f20:
    // 0x1d6f20: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6f24:
    // 0x1d6f24: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6f28:
    // 0x1d6f28: 0xc079380  jal         func_1E4E00
label_1d6f2c:
    if (ctx->pc == 0x1D6F2Cu) {
        ctx->pc = 0x1D6F30u;
        goto label_1d6f30;
    }
    ctx->pc = 0x1D6F28u;
    SET_GPR_U32(ctx, 31, 0x1D6F30u);
    ctx->pc = 0x1E4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4E00u, 0x1D6F28u, 0x1D6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F30u;
label_1d6f30:
    // 0x1d6f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6f34:
    // 0x1d6f34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d6f38:
    // 0x1d6f38: 0x3e00008  jr          $ra
label_1d6f3c:
    if (ctx->pc == 0x1D6F3Cu) {
        ctx->pc = 0x1D6F40u;
        goto label_1d6f40;
    }
    ctx->pc = 0x1D6F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F40u;
label_1d6f40:
    // 0x1d6f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d6f44:
    // 0x1d6f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6f48:
    // 0x1d6f48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d6f4c:
    // 0x1d6f4c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6f4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d6f50:
    // 0x1d6f50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f54:
    // 0x1d6f54: 0xc07627c  jal         func_1D89F0
label_1d6f58:
    if (ctx->pc == 0x1D6F58u) {
        ctx->pc = 0x1D6F5Cu;
        goto label_1d6f5c;
    }
    ctx->pc = 0x1D6F54u;
    SET_GPR_U32(ctx, 31, 0x1D6F5Cu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D6F54u, 0x1D6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F5Cu;
label_1d6f5c:
    // 0x1d6f5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f60:
    // 0x1d6f60: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d6f64:
    // 0x1d6f64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6f68:
    // 0x1d6f68: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d6f6c:
    if (ctx->pc == 0x1D6F6Cu) {
        ctx->pc = 0x1D6F70u;
        goto label_1d6f70;
    }
    ctx->pc = 0x1D6F68u;
    {
        const bool branch_taken_0x1d6f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6f68) {
            ctx->pc = 0x1D6FD8u;
            goto label_1d6fd8;
        }
    }
    ctx->pc = 0x1D6F70u;
label_1d6f70:
    // 0x1d6f70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6f74:
    // 0x1d6f74: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d6f78:
    if (ctx->pc == 0x1D6F78u) {
        ctx->pc = 0x1D6F7Cu;
        goto label_1d6f7c;
    }
    ctx->pc = 0x1D6F74u;
    {
        const bool branch_taken_0x1d6f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6f74) {
            ctx->pc = 0x1D6FBCu;
            goto label_1d6fbc;
        }
    }
    ctx->pc = 0x1D6F7Cu;
label_1d6f7c:
    // 0x1d6f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6f80:
    // 0x1d6f80: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d6f84:
    if (ctx->pc == 0x1D6F84u) {
        ctx->pc = 0x1D6F88u;
        goto label_1d6f88;
    }
    ctx->pc = 0x1D6F80u;
    {
        const bool branch_taken_0x1d6f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6f80) {
            ctx->pc = 0x1D6F90u;
            goto label_1d6f90;
        }
    }
    ctx->pc = 0x1D6F88u;
label_1d6f88:
    // 0x1d6f88: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d6f8c:
    if (ctx->pc == 0x1D6F8Cu) {
        ctx->pc = 0x1D6F90u;
        goto label_1d6f90;
    }
    ctx->pc = 0x1D6F88u;
    {
        const bool branch_taken_0x1d6f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f88) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6F90u;
label_1d6f90:
    // 0x1d6f90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6f94:
    // 0x1d6f94: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d6f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d6f98:
    // 0x1d6f98: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d6f9c:
    if (ctx->pc == 0x1D6F9Cu) {
        ctx->pc = 0x1D6FA0u;
        goto label_1d6fa0;
    }
    ctx->pc = 0x1D6F98u;
    {
        const bool branch_taken_0x1d6f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f98) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FA0u;
label_1d6fa0:
    // 0x1d6fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6fa4:
    // 0x1d6fa4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d6fa8:
    // 0x1d6fa8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6fac:
    // 0x1d6fac: 0xc076f38  jal         func_1DBCE0
label_1d6fb0:
    if (ctx->pc == 0x1D6FB0u) {
        ctx->pc = 0x1D6FB4u;
        goto label_1d6fb4;
    }
    ctx->pc = 0x1D6FACu;
    SET_GPR_U32(ctx, 31, 0x1D6FB4u);
    ctx->pc = 0x1DBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCE0u, 0x1D6FACu, 0x1D6FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FB4u;
label_1d6fb4:
    // 0x1d6fb4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d6fb8:
    if (ctx->pc == 0x1D6FB8u) {
        ctx->pc = 0x1D6FBCu;
        goto label_1d6fbc;
    }
    ctx->pc = 0x1D6FB4u;
    {
        const bool branch_taken_0x1d6fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fb4) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FBCu;
label_1d6fbc:
    // 0x1d6fbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6fc0:
    // 0x1d6fc0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d6fc4:
    // 0x1d6fc4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6fc8:
    // 0x1d6fc8: 0xc077a70  jal         func_1DE9C0
label_1d6fcc:
    if (ctx->pc == 0x1D6FCCu) {
        ctx->pc = 0x1D6FD0u;
        goto label_1d6fd0;
    }
    ctx->pc = 0x1D6FC8u;
    SET_GPR_U32(ctx, 31, 0x1D6FD0u);
    ctx->pc = 0x1DE9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9C0u, 0x1D6FC8u, 0x1D6FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FD0u;
label_1d6fd0:
    // 0x1d6fd0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d6fd4:
    if (ctx->pc == 0x1D6FD4u) {
        ctx->pc = 0x1D6FD8u;
        goto label_1d6fd8;
    }
    ctx->pc = 0x1D6FD0u;
    {
        const bool branch_taken_0x1d6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fd0) {
            ctx->pc = 0x1D7000u;
            goto label_1d7000;
        }
    }
    ctx->pc = 0x1D6FD8u;
label_1d6fd8:
    // 0x1d6fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6fdc:
    // 0x1d6fdc: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d6fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6fe0:
    // 0x1d6fe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6fe4:
    // 0x1d6fe4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6fe8:
    // 0x1d6fe8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d6fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d6fec:
    // 0x1d6fec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6ff0:
    // 0x1d6ff0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d6ff4:
    // 0x1d6ff4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d6ff8:
    // 0x1d6ff8: 0xc0793c8  jal         func_1E4F20
label_1d6ffc:
    if (ctx->pc == 0x1D6FFCu) {
        ctx->pc = 0x1D7000u;
        goto label_1d7000;
    }
    ctx->pc = 0x1D6FF8u;
    SET_GPR_U32(ctx, 31, 0x1D7000u);
    ctx->pc = 0x1E4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4F20u, 0x1D6FF8u, 0x1D7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7000u;
label_1d7000:
    // 0x1d7000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7004:
    // 0x1d7004: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d7004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d7008:
    // 0x1d7008: 0x3e00008  jr          $ra
label_1d700c:
    if (ctx->pc == 0x1D700Cu) {
        ctx->pc = 0x1D7010u;
        goto label_1d7010;
    }
    ctx->pc = 0x1D7008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7010u;
label_1d7010:
    // 0x1d7010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7014:
    // 0x1d7014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d7018:
    // 0x1d7018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d7018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d701c:
    // 0x1d701c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d701cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d7020:
    // 0x1d7020: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d7020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7024:
    // 0x1d7024: 0xc07627c  jal         func_1D89F0
label_1d7028:
    if (ctx->pc == 0x1D7028u) {
        ctx->pc = 0x1D702Cu;
        goto label_1d702c;
    }
    ctx->pc = 0x1D7024u;
    SET_GPR_U32(ctx, 31, 0x1D702Cu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D7024u, 0x1D702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D702Cu;
label_1d702c:
    // 0x1d702c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7030:
    // 0x1d7030: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d7034:
    // 0x1d7034: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d7034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7038:
    // 0x1d7038: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d703c:
    if (ctx->pc == 0x1D703Cu) {
        ctx->pc = 0x1D7040u;
        goto label_1d7040;
    }
    ctx->pc = 0x1D7038u;
    {
        const bool branch_taken_0x1d7038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7038) {
            ctx->pc = 0x1D70A8u;
            goto label_1d70a8;
        }
    }
    ctx->pc = 0x1D7040u;
label_1d7040:
    // 0x1d7040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7044:
    // 0x1d7044: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d7048:
    if (ctx->pc == 0x1D7048u) {
        ctx->pc = 0x1D704Cu;
        goto label_1d704c;
    }
    ctx->pc = 0x1D7044u;
    {
        const bool branch_taken_0x1d7044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7044) {
            ctx->pc = 0x1D708Cu;
            goto label_1d708c;
        }
    }
    ctx->pc = 0x1D704Cu;
label_1d704c:
    // 0x1d704c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7050:
    // 0x1d7050: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d7054:
    if (ctx->pc == 0x1D7054u) {
        ctx->pc = 0x1D7058u;
        goto label_1d7058;
    }
    ctx->pc = 0x1D7050u;
    {
        const bool branch_taken_0x1d7050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7050) {
            ctx->pc = 0x1D7060u;
            goto label_1d7060;
        }
    }
    ctx->pc = 0x1D7058u;
label_1d7058:
    // 0x1d7058: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d705c:
    if (ctx->pc == 0x1D705Cu) {
        ctx->pc = 0x1D7060u;
        goto label_1d7060;
    }
    ctx->pc = 0x1D7058u;
    {
        const bool branch_taken_0x1d7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7058) {
            ctx->pc = 0x1D70D0u;
            goto label_1d70d0;
        }
    }
    ctx->pc = 0x1D7060u;
label_1d7060:
    // 0x1d7060: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7064:
    // 0x1d7064: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d7064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d7068:
    // 0x1d7068: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d706c:
    if (ctx->pc == 0x1D706Cu) {
        ctx->pc = 0x1D7070u;
        goto label_1d7070;
    }
    ctx->pc = 0x1D7068u;
    {
        const bool branch_taken_0x1d7068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7068) {
            ctx->pc = 0x1D70D0u;
            goto label_1d70d0;
        }
    }
    ctx->pc = 0x1D7070u;
label_1d7070:
    // 0x1d7070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7074:
    // 0x1d7074: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d7074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d7078:
    // 0x1d7078: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d707c:
    // 0x1d707c: 0xc076f2c  jal         func_1DBCB0
label_1d7080:
    if (ctx->pc == 0x1D7080u) {
        ctx->pc = 0x1D7084u;
        goto label_1d7084;
    }
    ctx->pc = 0x1D707Cu;
    SET_GPR_U32(ctx, 31, 0x1D7084u);
    ctx->pc = 0x1DBCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCB0u, 0x1D707Cu, 0x1D7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7084u;
label_1d7084:
    // 0x1d7084: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d7088:
    if (ctx->pc == 0x1D7088u) {
        ctx->pc = 0x1D708Cu;
        goto label_1d708c;
    }
    ctx->pc = 0x1D7084u;
    {
        const bool branch_taken_0x1d7084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7084) {
            ctx->pc = 0x1D70D0u;
            goto label_1d70d0;
        }
    }
    ctx->pc = 0x1D708Cu;
label_1d708c:
    // 0x1d708c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7090:
    // 0x1d7090: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d7090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d7094:
    // 0x1d7094: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7098:
    // 0x1d7098: 0xc077a4c  jal         func_1DE930
label_1d709c:
    if (ctx->pc == 0x1D709Cu) {
        ctx->pc = 0x1D70A0u;
        goto label_1d70a0;
    }
    ctx->pc = 0x1D7098u;
    SET_GPR_U32(ctx, 31, 0x1D70A0u);
    ctx->pc = 0x1DE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE930u, 0x1D7098u, 0x1D70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70A0u;
label_1d70a0:
    // 0x1d70a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d70a4:
    if (ctx->pc == 0x1D70A4u) {
        ctx->pc = 0x1D70A8u;
        goto label_1d70a8;
    }
    ctx->pc = 0x1D70A0u;
    {
        const bool branch_taken_0x1d70a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d70a0) {
            ctx->pc = 0x1D70D0u;
            goto label_1d70d0;
        }
    }
    ctx->pc = 0x1D70A8u;
label_1d70a8:
    // 0x1d70a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d70ac:
    // 0x1d70ac: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d70acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d70b0:
    // 0x1d70b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d70b4:
    // 0x1d70b4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d70b8:
    // 0x1d70b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d70b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d70bc:
    // 0x1d70bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d70c0:
    // 0x1d70c0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d70c4:
    // 0x1d70c4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d70c8:
    // 0x1d70c8: 0xc0793a4  jal         func_1E4E90
label_1d70cc:
    if (ctx->pc == 0x1D70CCu) {
        ctx->pc = 0x1D70D0u;
        goto label_1d70d0;
    }
    ctx->pc = 0x1D70C8u;
    SET_GPR_U32(ctx, 31, 0x1D70D0u);
    ctx->pc = 0x1E4E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4E90u, 0x1D70C8u, 0x1D70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D0u;
label_1d70d0:
    // 0x1d70d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d70d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d70d4:
    // 0x1d70d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d70d8:
    // 0x1d70d8: 0x3e00008  jr          $ra
label_1d70dc:
    if (ctx->pc == 0x1D70DCu) {
        ctx->pc = 0x1D70E0u;
        goto label_1d70e0;
    }
    ctx->pc = 0x1D70D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70E0u;
label_1d70e0:
    // 0x1d70e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d70e4:
    // 0x1d70e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d70e8:
    // 0x1d70e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d70e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d70ec:
    // 0x1d70ec: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d70ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d70f0:
    // 0x1d70f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d70f4:
    // 0x1d70f4: 0xc07627c  jal         func_1D89F0
label_1d70f8:
    if (ctx->pc == 0x1D70F8u) {
        ctx->pc = 0x1D70FCu;
        goto label_1d70fc;
    }
    ctx->pc = 0x1D70F4u;
    SET_GPR_U32(ctx, 31, 0x1D70FCu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D70F4u, 0x1D70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70FCu;
label_1d70fc:
    // 0x1d70fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7100:
    // 0x1d7100: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d7100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d7104:
    // 0x1d7104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d7104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7108:
    // 0x1d7108: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d710c:
    if (ctx->pc == 0x1D710Cu) {
        ctx->pc = 0x1D7110u;
        goto label_1d7110;
    }
    ctx->pc = 0x1D7108u;
    {
        const bool branch_taken_0x1d7108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7108) {
            ctx->pc = 0x1D7178u;
            goto label_1d7178;
        }
    }
    ctx->pc = 0x1D7110u;
label_1d7110:
    // 0x1d7110: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7114:
    // 0x1d7114: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d7118:
    if (ctx->pc == 0x1D7118u) {
        ctx->pc = 0x1D711Cu;
        goto label_1d711c;
    }
    ctx->pc = 0x1D7114u;
    {
        const bool branch_taken_0x1d7114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7114) {
            ctx->pc = 0x1D715Cu;
            goto label_1d715c;
        }
    }
    ctx->pc = 0x1D711Cu;
label_1d711c:
    // 0x1d711c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7120:
    // 0x1d7120: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d7124:
    if (ctx->pc == 0x1D7124u) {
        ctx->pc = 0x1D7128u;
        goto label_1d7128;
    }
    ctx->pc = 0x1D7120u;
    {
        const bool branch_taken_0x1d7120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7120) {
            ctx->pc = 0x1D7130u;
            goto label_1d7130;
        }
    }
    ctx->pc = 0x1D7128u;
label_1d7128:
    // 0x1d7128: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d712c:
    if (ctx->pc == 0x1D712Cu) {
        ctx->pc = 0x1D7130u;
        goto label_1d7130;
    }
    ctx->pc = 0x1D7128u;
    {
        const bool branch_taken_0x1d7128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7128) {
            ctx->pc = 0x1D71A0u;
            goto label_1d71a0;
        }
    }
    ctx->pc = 0x1D7130u;
label_1d7130:
    // 0x1d7130: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7134:
    // 0x1d7134: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d7134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d7138:
    // 0x1d7138: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d713c:
    if (ctx->pc == 0x1D713Cu) {
        ctx->pc = 0x1D7140u;
        goto label_1d7140;
    }
    ctx->pc = 0x1D7138u;
    {
        const bool branch_taken_0x1d7138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7138) {
            ctx->pc = 0x1D71A0u;
            goto label_1d71a0;
        }
    }
    ctx->pc = 0x1D7140u;
label_1d7140:
    // 0x1d7140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7144:
    // 0x1d7144: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d7144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d7148:
    // 0x1d7148: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d714c:
    // 0x1d714c: 0xc076f44  jal         func_1DBD10
label_1d7150:
    if (ctx->pc == 0x1D7150u) {
        ctx->pc = 0x1D7154u;
        goto label_1d7154;
    }
    ctx->pc = 0x1D714Cu;
    SET_GPR_U32(ctx, 31, 0x1D7154u);
    ctx->pc = 0x1DBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD10u, 0x1D714Cu, 0x1D7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7154u;
label_1d7154:
    // 0x1d7154: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d7158:
    if (ctx->pc == 0x1D7158u) {
        ctx->pc = 0x1D715Cu;
        goto label_1d715c;
    }
    ctx->pc = 0x1D7154u;
    {
        const bool branch_taken_0x1d7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7154) {
            ctx->pc = 0x1D71A0u;
            goto label_1d71a0;
        }
    }
    ctx->pc = 0x1D715Cu;
label_1d715c:
    // 0x1d715c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7160:
    // 0x1d7160: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d7160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d7164:
    // 0x1d7164: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7168:
    // 0x1d7168: 0xc077a98  jal         func_1DEA60
label_1d716c:
    if (ctx->pc == 0x1D716Cu) {
        ctx->pc = 0x1D7170u;
        goto label_1d7170;
    }
    ctx->pc = 0x1D7168u;
    SET_GPR_U32(ctx, 31, 0x1D7170u);
    ctx->pc = 0x1DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA60u, 0x1D7168u, 0x1D7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7170u;
label_1d7170:
    // 0x1d7170: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d7174:
    if (ctx->pc == 0x1D7174u) {
        ctx->pc = 0x1D7178u;
        goto label_1d7178;
    }
    ctx->pc = 0x1D7170u;
    {
        const bool branch_taken_0x1d7170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7170) {
            ctx->pc = 0x1D71A0u;
            goto label_1d71a0;
        }
    }
    ctx->pc = 0x1D7178u;
label_1d7178:
    // 0x1d7178: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d717c:
    // 0x1d717c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7180:
    // 0x1d7180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7184:
    // 0x1d7184: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7188:
    // 0x1d7188: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d7188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d718c:
    // 0x1d718c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7190:
    // 0x1d7190: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d7190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7194:
    // 0x1d7194: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7198:
    // 0x1d7198: 0xc0793ec  jal         func_1E4FB0
label_1d719c:
    if (ctx->pc == 0x1D719Cu) {
        ctx->pc = 0x1D71A0u;
        goto label_1d71a0;
    }
    ctx->pc = 0x1D7198u;
    SET_GPR_U32(ctx, 31, 0x1D71A0u);
    ctx->pc = 0x1E4FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4FB0u, 0x1D7198u, 0x1D71A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71A0u;
label_1d71a0:
    // 0x1d71a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d71a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d71a4:
    // 0x1d71a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d71a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d71a8:
    // 0x1d71a8: 0x3e00008  jr          $ra
label_1d71ac:
    if (ctx->pc == 0x1D71ACu) {
        ctx->pc = 0x1D71B0u;
        goto label_1d71b0;
    }
    ctx->pc = 0x1D71A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71B0u;
label_1d71b0:
    // 0x1d71b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d71b4:
    // 0x1d71b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d71b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d71b8:
    // 0x1d71b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d71bc:
    // 0x1d71bc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d71bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d71c0:
    // 0x1d71c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d71c4:
    // 0x1d71c4: 0xc07627c  jal         func_1D89F0
label_1d71c8:
    if (ctx->pc == 0x1D71C8u) {
        ctx->pc = 0x1D71CCu;
        goto label_1d71cc;
    }
    ctx->pc = 0x1D71C4u;
    SET_GPR_U32(ctx, 31, 0x1D71CCu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D71C4u, 0x1D71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71CCu;
label_1d71cc:
    // 0x1d71cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d71d0:
    // 0x1d71d0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d71d4:
    // 0x1d71d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d71d8:
    // 0x1d71d8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d71dc:
    if (ctx->pc == 0x1D71DCu) {
        ctx->pc = 0x1D71E0u;
        goto label_1d71e0;
    }
    ctx->pc = 0x1D71D8u;
    {
        const bool branch_taken_0x1d71d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d71d8) {
            ctx->pc = 0x1D7248u;
            goto label_1d7248;
        }
    }
    ctx->pc = 0x1D71E0u;
label_1d71e0:
    // 0x1d71e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d71e4:
    // 0x1d71e4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d71e8:
    if (ctx->pc == 0x1D71E8u) {
        ctx->pc = 0x1D71ECu;
        goto label_1d71ec;
    }
    ctx->pc = 0x1D71E4u;
    {
        const bool branch_taken_0x1d71e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d71e4) {
            ctx->pc = 0x1D722Cu;
            goto label_1d722c;
        }
    }
    ctx->pc = 0x1D71ECu;
label_1d71ec:
    // 0x1d71ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d71f0:
    // 0x1d71f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d71f4:
    if (ctx->pc == 0x1D71F4u) {
        ctx->pc = 0x1D71F8u;
        goto label_1d71f8;
    }
    ctx->pc = 0x1D71F0u;
    {
        const bool branch_taken_0x1d71f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d71f0) {
            ctx->pc = 0x1D7200u;
            goto label_1d7200;
        }
    }
    ctx->pc = 0x1D71F8u;
label_1d71f8:
    // 0x1d71f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d71fc:
    if (ctx->pc == 0x1D71FCu) {
        ctx->pc = 0x1D7200u;
        goto label_1d7200;
    }
    ctx->pc = 0x1D71F8u;
    {
        const bool branch_taken_0x1d71f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d71f8) {
            ctx->pc = 0x1D7270u;
            goto label_1d7270;
        }
    }
    ctx->pc = 0x1D7200u;
label_1d7200:
    // 0x1d7200: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7204:
    // 0x1d7204: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d7204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d7208:
    // 0x1d7208: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d720c:
    if (ctx->pc == 0x1D720Cu) {
        ctx->pc = 0x1D7210u;
        goto label_1d7210;
    }
    ctx->pc = 0x1D7208u;
    {
        const bool branch_taken_0x1d7208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7208) {
            ctx->pc = 0x1D7270u;
            goto label_1d7270;
        }
    }
    ctx->pc = 0x1D7210u;
label_1d7210:
    // 0x1d7210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7214:
    // 0x1d7214: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d7218:
    // 0x1d7218: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d721c:
    // 0x1d721c: 0xc076f50  jal         func_1DBD40
label_1d7220:
    if (ctx->pc == 0x1D7220u) {
        ctx->pc = 0x1D7224u;
        goto label_1d7224;
    }
    ctx->pc = 0x1D721Cu;
    SET_GPR_U32(ctx, 31, 0x1D7224u);
    ctx->pc = 0x1DBD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD40u, 0x1D721Cu, 0x1D7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7224u;
label_1d7224:
    // 0x1d7224: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d7228:
    if (ctx->pc == 0x1D7228u) {
        ctx->pc = 0x1D722Cu;
        goto label_1d722c;
    }
    ctx->pc = 0x1D7224u;
    {
        const bool branch_taken_0x1d7224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7224) {
            ctx->pc = 0x1D7270u;
            goto label_1d7270;
        }
    }
    ctx->pc = 0x1D722Cu;
label_1d722c:
    // 0x1d722c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7230:
    // 0x1d7230: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d7234:
    // 0x1d7234: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7238:
    // 0x1d7238: 0xc077abc  jal         func_1DEAF0
label_1d723c:
    if (ctx->pc == 0x1D723Cu) {
        ctx->pc = 0x1D7240u;
        goto label_1d7240;
    }
    ctx->pc = 0x1D7238u;
    SET_GPR_U32(ctx, 31, 0x1D7240u);
    ctx->pc = 0x1DEAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF0u, 0x1D7238u, 0x1D7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7240u;
label_1d7240:
    // 0x1d7240: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d7244:
    if (ctx->pc == 0x1D7244u) {
        ctx->pc = 0x1D7248u;
        goto label_1d7248;
    }
    ctx->pc = 0x1D7240u;
    {
        const bool branch_taken_0x1d7240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7240) {
            ctx->pc = 0x1D7270u;
            goto label_1d7270;
        }
    }
    ctx->pc = 0x1D7248u;
label_1d7248:
    // 0x1d7248: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d724c:
    // 0x1d724c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7250:
    // 0x1d7250: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7254:
    // 0x1d7254: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7258:
    // 0x1d7258: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d7258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d725c:
    // 0x1d725c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7260:
    // 0x1d7260: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7264:
    // 0x1d7264: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7268:
    // 0x1d7268: 0xc079410  jal         func_1E5040
label_1d726c:
    if (ctx->pc == 0x1D726Cu) {
        ctx->pc = 0x1D7270u;
        goto label_1d7270;
    }
    ctx->pc = 0x1D7268u;
    SET_GPR_U32(ctx, 31, 0x1D7270u);
    ctx->pc = 0x1E5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5040u, 0x1D7268u, 0x1D7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7270u;
label_1d7270:
    // 0x1d7270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7274:
    // 0x1d7274: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d7274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d7278:
    // 0x1d7278: 0x3e00008  jr          $ra
label_1d727c:
    if (ctx->pc == 0x1D727Cu) {
        ctx->pc = 0x1D7280u;
        goto label_1d7280;
    }
    ctx->pc = 0x1D7278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7280u;
label_1d7280:
    // 0x1d7280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7284:
    // 0x1d7284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d7288:
    // 0x1d7288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d7288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d728c:
    // 0x1d728c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d728cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d7290:
    // 0x1d7290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d7290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7294:
    // 0x1d7294: 0xc07627c  jal         func_1D89F0
label_1d7298:
    if (ctx->pc == 0x1D7298u) {
        ctx->pc = 0x1D729Cu;
        goto label_1d729c;
    }
    ctx->pc = 0x1D7294u;
    SET_GPR_U32(ctx, 31, 0x1D729Cu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D7294u, 0x1D729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D729Cu;
label_1d729c:
    // 0x1d729c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d72a0:
    // 0x1d72a0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d72a4:
    // 0x1d72a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d72a8:
    // 0x1d72a8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d72ac:
    if (ctx->pc == 0x1D72ACu) {
        ctx->pc = 0x1D72B0u;
        goto label_1d72b0;
    }
    ctx->pc = 0x1D72A8u;
    {
        const bool branch_taken_0x1d72a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d72a8) {
            ctx->pc = 0x1D7318u;
            goto label_1d7318;
        }
    }
    ctx->pc = 0x1D72B0u;
label_1d72b0:
    // 0x1d72b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d72b4:
    // 0x1d72b4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d72b8:
    if (ctx->pc == 0x1D72B8u) {
        ctx->pc = 0x1D72BCu;
        goto label_1d72bc;
    }
    ctx->pc = 0x1D72B4u;
    {
        const bool branch_taken_0x1d72b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d72b4) {
            ctx->pc = 0x1D72FCu;
            goto label_1d72fc;
        }
    }
    ctx->pc = 0x1D72BCu;
label_1d72bc:
    // 0x1d72bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d72bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d72c0:
    // 0x1d72c0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d72c4:
    if (ctx->pc == 0x1D72C4u) {
        ctx->pc = 0x1D72C8u;
        goto label_1d72c8;
    }
    ctx->pc = 0x1D72C0u;
    {
        const bool branch_taken_0x1d72c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d72c0) {
            ctx->pc = 0x1D72D0u;
            goto label_1d72d0;
        }
    }
    ctx->pc = 0x1D72C8u;
label_1d72c8:
    // 0x1d72c8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d72cc:
    if (ctx->pc == 0x1D72CCu) {
        ctx->pc = 0x1D72D0u;
        goto label_1d72d0;
    }
    ctx->pc = 0x1D72C8u;
    {
        const bool branch_taken_0x1d72c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d72c8) {
            ctx->pc = 0x1D7340u;
            goto label_1d7340;
        }
    }
    ctx->pc = 0x1D72D0u;
label_1d72d0:
    // 0x1d72d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d72d4:
    // 0x1d72d4: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d72d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d72d8:
    // 0x1d72d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d72dc:
    if (ctx->pc == 0x1D72DCu) {
        ctx->pc = 0x1D72E0u;
        goto label_1d72e0;
    }
    ctx->pc = 0x1D72D8u;
    {
        const bool branch_taken_0x1d72d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d72d8) {
            ctx->pc = 0x1D7340u;
            goto label_1d7340;
        }
    }
    ctx->pc = 0x1D72E0u;
label_1d72e0:
    // 0x1d72e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d72e4:
    // 0x1d72e4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d72e8:
    // 0x1d72e8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d72ec:
    // 0x1d72ec: 0xc076f68  jal         func_1DBDA0
label_1d72f0:
    if (ctx->pc == 0x1D72F0u) {
        ctx->pc = 0x1D72F4u;
        goto label_1d72f4;
    }
    ctx->pc = 0x1D72ECu;
    SET_GPR_U32(ctx, 31, 0x1D72F4u);
    ctx->pc = 0x1DBDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDA0u, 0x1D72ECu, 0x1D72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72F4u;
label_1d72f4:
    // 0x1d72f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d72f8:
    if (ctx->pc == 0x1D72F8u) {
        ctx->pc = 0x1D72FCu;
        goto label_1d72fc;
    }
    ctx->pc = 0x1D72F4u;
    {
        const bool branch_taken_0x1d72f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d72f4) {
            ctx->pc = 0x1D7340u;
            goto label_1d7340;
        }
    }
    ctx->pc = 0x1D72FCu;
label_1d72fc:
    // 0x1d72fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7300:
    // 0x1d7300: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d7304:
    // 0x1d7304: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7308:
    // 0x1d7308: 0xc077b08  jal         func_1DEC20
label_1d730c:
    if (ctx->pc == 0x1D730Cu) {
        ctx->pc = 0x1D7310u;
        goto label_1d7310;
    }
    ctx->pc = 0x1D7308u;
    SET_GPR_U32(ctx, 31, 0x1D7310u);
    ctx->pc = 0x1DEC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEC20u, 0x1D7308u, 0x1D7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7310u;
label_1d7310:
    // 0x1d7310: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d7314:
    if (ctx->pc == 0x1D7314u) {
        ctx->pc = 0x1D7318u;
        goto label_1d7318;
    }
    ctx->pc = 0x1D7310u;
    {
        const bool branch_taken_0x1d7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7310) {
            ctx->pc = 0x1D7340u;
            goto label_1d7340;
        }
    }
    ctx->pc = 0x1D7318u;
label_1d7318:
    // 0x1d7318: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d731c:
    // 0x1d731c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7320:
    // 0x1d7320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7324:
    // 0x1d7324: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7328:
    // 0x1d7328: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d7328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d732c:
    // 0x1d732c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7330:
    // 0x1d7330: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7334:
    // 0x1d7334: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7338:
    // 0x1d7338: 0xc079458  jal         func_1E5160
label_1d733c:
    if (ctx->pc == 0x1D733Cu) {
        ctx->pc = 0x1D7340u;
        goto label_1d7340;
    }
    ctx->pc = 0x1D7338u;
    SET_GPR_U32(ctx, 31, 0x1D7340u);
    ctx->pc = 0x1E5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5160u, 0x1D7338u, 0x1D7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7340u;
label_1d7340:
    // 0x1d7340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7344:
    // 0x1d7344: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d7348:
    // 0x1d7348: 0x3e00008  jr          $ra
label_1d734c:
    if (ctx->pc == 0x1D734Cu) {
        ctx->pc = 0x1D7350u;
        goto label_1d7350;
    }
    ctx->pc = 0x1D7348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7350u;
label_1d7350:
    // 0x1d7350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7354:
    // 0x1d7354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d7358:
    // 0x1d7358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d7358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d735c:
    // 0x1d735c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d735cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d7360:
    // 0x1d7360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d7360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7364:
    // 0x1d7364: 0xc07627c  jal         func_1D89F0
label_1d7368:
    if (ctx->pc == 0x1D7368u) {
        ctx->pc = 0x1D736Cu;
        goto label_1d736c;
    }
    ctx->pc = 0x1D7364u;
    SET_GPR_U32(ctx, 31, 0x1D736Cu);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D7364u, 0x1D736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D736Cu;
label_1d736c:
    // 0x1d736c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7370:
    // 0x1d7370: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d7370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d7374:
    // 0x1d7374: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d7374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7378:
    // 0x1d7378: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1d737c:
    if (ctx->pc == 0x1D737Cu) {
        ctx->pc = 0x1D7380u;
        goto label_1d7380;
    }
    ctx->pc = 0x1D7378u;
    {
        const bool branch_taken_0x1d7378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7378) {
            ctx->pc = 0x1D73E8u;
            goto label_1d73e8;
        }
    }
    ctx->pc = 0x1D7380u;
label_1d7380:
    // 0x1d7380: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d7380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7384:
    // 0x1d7384: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1d7388:
    if (ctx->pc == 0x1D7388u) {
        ctx->pc = 0x1D738Cu;
        goto label_1d738c;
    }
    ctx->pc = 0x1D7384u;
    {
        const bool branch_taken_0x1d7384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7384) {
            ctx->pc = 0x1D73CCu;
            goto label_1d73cc;
        }
    }
    ctx->pc = 0x1D738Cu;
label_1d738c:
    // 0x1d738c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7390:
    // 0x1d7390: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d7394:
    if (ctx->pc == 0x1D7394u) {
        ctx->pc = 0x1D7398u;
        goto label_1d7398;
    }
    ctx->pc = 0x1D7390u;
    {
        const bool branch_taken_0x1d7390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7390) {
            ctx->pc = 0x1D73A0u;
            goto label_1d73a0;
        }
    }
    ctx->pc = 0x1D7398u;
label_1d7398:
    // 0x1d7398: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d739c:
    if (ctx->pc == 0x1D739Cu) {
        ctx->pc = 0x1D73A0u;
        goto label_1d73a0;
    }
    ctx->pc = 0x1D7398u;
    {
        const bool branch_taken_0x1d7398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7398) {
            ctx->pc = 0x1D7410u;
            goto label_1d7410;
        }
    }
    ctx->pc = 0x1D73A0u;
label_1d73a0:
    // 0x1d73a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73a4:
    // 0x1d73a4: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d73a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_1d73a8:
    // 0x1d73a8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d73ac:
    if (ctx->pc == 0x1D73ACu) {
        ctx->pc = 0x1D73B0u;
        goto label_1d73b0;
    }
    ctx->pc = 0x1D73A8u;
    {
        const bool branch_taken_0x1d73a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73a8) {
            ctx->pc = 0x1D7410u;
            goto label_1d7410;
        }
    }
    ctx->pc = 0x1D73B0u;
label_1d73b0:
    // 0x1d73b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73b4:
    // 0x1d73b4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d73b8:
    // 0x1d73b8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d73bc:
    // 0x1d73bc: 0xc076f5c  jal         func_1DBD70
label_1d73c0:
    if (ctx->pc == 0x1D73C0u) {
        ctx->pc = 0x1D73C4u;
        goto label_1d73c4;
    }
    ctx->pc = 0x1D73BCu;
    SET_GPR_U32(ctx, 31, 0x1D73C4u);
    ctx->pc = 0x1DBD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD70u, 0x1D73BCu, 0x1D73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73C4u;
label_1d73c4:
    // 0x1d73c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d73c8:
    if (ctx->pc == 0x1D73C8u) {
        ctx->pc = 0x1D73CCu;
        goto label_1d73cc;
    }
    ctx->pc = 0x1D73C4u;
    {
        const bool branch_taken_0x1d73c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73c4) {
            ctx->pc = 0x1D7410u;
            goto label_1d7410;
        }
    }
    ctx->pc = 0x1D73CCu;
label_1d73cc:
    // 0x1d73cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73d0:
    // 0x1d73d0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d73d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d73d4:
    // 0x1d73d4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d73d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d73d8:
    // 0x1d73d8: 0xc077ae4  jal         func_1DEB90
label_1d73dc:
    if (ctx->pc == 0x1D73DCu) {
        ctx->pc = 0x1D73E0u;
        goto label_1d73e0;
    }
    ctx->pc = 0x1D73D8u;
    SET_GPR_U32(ctx, 31, 0x1D73E0u);
    ctx->pc = 0x1DEB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB90u, 0x1D73D8u, 0x1D73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73E0u;
label_1d73e0:
    // 0x1d73e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d73e4:
    if (ctx->pc == 0x1D73E4u) {
        ctx->pc = 0x1D73E8u;
        goto label_1d73e8;
    }
    ctx->pc = 0x1D73E0u;
    {
        const bool branch_taken_0x1d73e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73e0) {
            ctx->pc = 0x1D7410u;
            goto label_1d7410;
        }
    }
    ctx->pc = 0x1D73E8u;
label_1d73e8:
    // 0x1d73e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73ec:
    // 0x1d73ec: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d73ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d73f0:
    // 0x1d73f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73f4:
    // 0x1d73f4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d73f8:
    // 0x1d73f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d73f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1d73fc:
    // 0x1d73fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7400:
    // 0x1d7400: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7404:
    // 0x1d7404: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d7404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7408:
    // 0x1d7408: 0xc079434  jal         func_1E50D0
label_1d740c:
    if (ctx->pc == 0x1D740Cu) {
        ctx->pc = 0x1D7410u;
        goto label_1d7410;
    }
    ctx->pc = 0x1D7408u;
    SET_GPR_U32(ctx, 31, 0x1D7410u);
    ctx->pc = 0x1E50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E50D0u, 0x1D7408u, 0x1D7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7410u;
label_1d7410:
    // 0x1d7410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7414:
    // 0x1d7414: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d7414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d7418:
    // 0x1d7418: 0x3e00008  jr          $ra
label_1d741c:
    if (ctx->pc == 0x1D741Cu) {
        ctx->pc = 0x1D7420u;
        goto label_1d7420;
    }
    ctx->pc = 0x1D7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7420u;
label_1d7420:
    // 0x1d7420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7424:
    // 0x1d7424: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d7428:
    // 0x1d7428: 0x3e00008  jr          $ra
label_1d742c:
    if (ctx->pc == 0x1D742Cu) {
        ctx->pc = 0x1D7430u;
        goto label_1d7430;
    }
    ctx->pc = 0x1D7428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7430u;
label_1d7430:
    // 0x1d7430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7434:
    // 0x1d7434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d7438:
    // 0x1d7438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d7438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d743c:
    // 0x1d743c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7440:
    // 0x1d7440: 0xc064aec  jal         func_192BB0
label_1d7444:
    if (ctx->pc == 0x1D7444u) {
        ctx->pc = 0x1D7448u;
        goto label_1d7448;
    }
    ctx->pc = 0x1D7440u;
    SET_GPR_U32(ctx, 31, 0x1D7448u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1D7440u, 0x1D7448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7448u;
label_1d7448:
    // 0x1d7448: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d7448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d744c:
    // 0x1d744c: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d744cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d7450:
    // 0x1d7450: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7454:
    // 0x1d7454: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_1d7458:
    if (ctx->pc == 0x1D7458u) {
        ctx->pc = 0x1D745Cu;
        goto label_1d745c;
    }
    ctx->pc = 0x1D7454u;
    {
        const bool branch_taken_0x1d7454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7454) {
            ctx->pc = 0x1D74ACu;
            goto label_1d74ac;
        }
    }
    ctx->pc = 0x1D745Cu;
label_1d745c:
    // 0x1d745c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7460:
    // 0x1d7460: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1d7464:
    if (ctx->pc == 0x1D7464u) {
        ctx->pc = 0x1D7468u;
        goto label_1d7468;
    }
    ctx->pc = 0x1D7460u;
    {
        const bool branch_taken_0x1d7460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7460) {
            ctx->pc = 0x1D7494u;
            goto label_1d7494;
        }
    }
    ctx->pc = 0x1D7468u;
label_1d7468:
    // 0x1d7468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d746c:
    // 0x1d746c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d7470:
    if (ctx->pc == 0x1D7470u) {
        ctx->pc = 0x1D7474u;
        goto label_1d7474;
    }
    ctx->pc = 0x1D746Cu;
    {
        const bool branch_taken_0x1d746c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d746c) {
            ctx->pc = 0x1D747Cu;
            goto label_1d747c;
        }
    }
    ctx->pc = 0x1D7474u;
label_1d7474:
    // 0x1d7474: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d7478:
    if (ctx->pc == 0x1D7478u) {
        ctx->pc = 0x1D747Cu;
        goto label_1d747c;
    }
    ctx->pc = 0x1D7474u;
    {
        const bool branch_taken_0x1d7474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7474) {
            ctx->pc = 0x1D74BCu;
            goto label_1d74bc;
        }
    }
    ctx->pc = 0x1D747Cu;
label_1d747c:
    // 0x1d747c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7480:
    // 0x1d7480: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d7480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d7484:
    // 0x1d7484: 0xc076c68  jal         func_1DB1A0
label_1d7488:
    if (ctx->pc == 0x1D7488u) {
        ctx->pc = 0x1D748Cu;
        goto label_1d748c;
    }
    ctx->pc = 0x1D7484u;
    SET_GPR_U32(ctx, 31, 0x1D748Cu);
    ctx->pc = 0x1DB1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1A0u, 0x1D7484u, 0x1D748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D748Cu;
label_1d748c:
    // 0x1d748c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d7490:
    if (ctx->pc == 0x1D7490u) {
        ctx->pc = 0x1D7494u;
        goto label_1d7494;
    }
    ctx->pc = 0x1D748Cu;
    {
        const bool branch_taken_0x1d748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d748c) {
            ctx->pc = 0x1D74BCu;
            goto label_1d74bc;
        }
    }
    ctx->pc = 0x1D7494u;
label_1d7494:
    // 0x1d7494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7498:
    // 0x1d7498: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d749c:
    // 0x1d749c: 0xc07765c  jal         func_1DD970
label_1d74a0:
    if (ctx->pc == 0x1D74A0u) {
        ctx->pc = 0x1D74A4u;
        goto label_1d74a4;
    }
    ctx->pc = 0x1D749Cu;
    SET_GPR_U32(ctx, 31, 0x1D74A4u);
    ctx->pc = 0x1DD970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD970u, 0x1D749Cu, 0x1D74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74A4u;
label_1d74a4:
    // 0x1d74a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d74a8:
    if (ctx->pc == 0x1D74A8u) {
        ctx->pc = 0x1D74ACu;
        goto label_1d74ac;
    }
    ctx->pc = 0x1D74A4u;
    {
        const bool branch_taken_0x1d74a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d74a4) {
            ctx->pc = 0x1D74BCu;
            goto label_1d74bc;
        }
    }
    ctx->pc = 0x1D74ACu;
label_1d74ac:
    // 0x1d74ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d74acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d74b0:
    // 0x1d74b0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d74b4:
    // 0x1d74b4: 0xc078e94  jal         func_1E3A50
label_1d74b8:
    if (ctx->pc == 0x1D74B8u) {
        ctx->pc = 0x1D74BCu;
        goto label_1d74bc;
    }
    ctx->pc = 0x1D74B4u;
    SET_GPR_U32(ctx, 31, 0x1D74BCu);
    ctx->pc = 0x1E3A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A50u, 0x1D74B4u, 0x1D74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74BCu;
label_1d74bc:
    // 0x1d74bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d74bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d74c0:
    // 0x1d74c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d74c4:
    // 0x1d74c4: 0x3e00008  jr          $ra
label_1d74c8:
    if (ctx->pc == 0x1D74C8u) {
        ctx->pc = 0x1D74CCu;
        goto label_1d74cc;
    }
    ctx->pc = 0x1D74C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D74C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D74CCu;
label_1d74cc:
    // 0x1d74cc: 0x0  nop
    ctx->pc = 0x1d74ccu;
    // NOP
label_1d74d0:
    // 0x1d74d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d74d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d74d4:
    // 0x1d74d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d74d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d74d8:
    // 0x1d74d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d74dc:
    // 0x1d74dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d74dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d74e0:
    // 0x1d74e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d74e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d74e4:
    // 0x1d74e4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1d74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_1d74e8:
    // 0x1d74e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d74ec:
    // 0x1d74ec: 0xc07627c  jal         func_1D89F0
label_1d74f0:
    if (ctx->pc == 0x1D74F0u) {
        ctx->pc = 0x1D74F4u;
        goto label_1d74f4;
    }
    ctx->pc = 0x1D74ECu;
    SET_GPR_U32(ctx, 31, 0x1D74F4u);
    ctx->pc = 0x1D89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89F0u, 0x1D74ECu, 0x1D74F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74F4u;
label_1d74f4:
    // 0x1d74f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d74f8:
    // 0x1d74f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d74f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d74fc:
    // 0x1d74fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7500:
    // 0x1d7500: 0xc064cb0  jal         func_1932C0
label_1d7504:
    if (ctx->pc == 0x1D7504u) {
        ctx->pc = 0x1D7508u;
        goto label_1d7508;
    }
    ctx->pc = 0x1D7500u;
    SET_GPR_U32(ctx, 31, 0x1D7508u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1D7500u, 0x1D7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7508u;
label_1d7508:
    // 0x1d7508: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d7508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d750c:
    // 0x1d750c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1d7510:
    if (ctx->pc == 0x1D7510u) {
        ctx->pc = 0x1D7514u;
        goto label_1d7514;
    }
    ctx->pc = 0x1D750Cu;
    {
        const bool branch_taken_0x1d750c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d750c) {
            ctx->pc = 0x1D7520u;
            goto label_1d7520;
        }
    }
    ctx->pc = 0x1D7514u;
label_1d7514:
    // 0x1d7514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7518:
    // 0x1d7518: 0x100001d9  b           . + 4 + (0x1D9 << 2)
label_1d751c:
    if (ctx->pc == 0x1D751Cu) {
        ctx->pc = 0x1D7520u;
        goto label_1d7520;
    }
    ctx->pc = 0x1D7518u;
    {
        const bool branch_taken_0x1d7518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7518) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7520u;
label_1d7520:
    // 0x1d7520: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7524:
    // 0x1d7524: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1d7524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1d7528:
    // 0x1d7528: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d752c:
    // 0x1d752c: 0xc085538  jal         func_2154E0
label_1d7530:
    if (ctx->pc == 0x1D7530u) {
        ctx->pc = 0x1D7534u;
        goto label_1d7534;
    }
    ctx->pc = 0x1D752Cu;
    SET_GPR_U32(ctx, 31, 0x1D7534u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D752Cu, 0x1D7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7534u;
label_1d7534:
    // 0x1d7534: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d7534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7538:
    // 0x1d7538: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d753c:
    // 0x1d753c: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1d7540:
    // 0x1d7540: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d7540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d7544:
    // 0x1d7544: 0xc085538  jal         func_2154E0
label_1d7548:
    if (ctx->pc == 0x1D7548u) {
        ctx->pc = 0x1D754Cu;
        goto label_1d754c;
    }
    ctx->pc = 0x1D7544u;
    SET_GPR_U32(ctx, 31, 0x1D754Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D7544u, 0x1D754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D754Cu;
label_1d754c:
    // 0x1d754c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d754cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7550:
    // 0x1d7550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d7554:
    // 0x1d7554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d7554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d7558:
    // 0x1d7558: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d7558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d755c:
    // 0x1d755c: 0x320f809  jalr        $t9
label_1d7560:
    if (ctx->pc == 0x1D7560u) {
        ctx->pc = 0x1D7564u;
        goto label_1d7564;
    }
    ctx->pc = 0x1D755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D7564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D755Cu, 0x1D7564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7564u;
label_1d7564:
    // 0x1d7564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7568:
    // 0x1d7568: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d7568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d756c:
    // 0x1d756c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d7570:
    // 0x1d7570: 0x320f809  jalr        $t9
label_1d7574:
    if (ctx->pc == 0x1D7574u) {
        ctx->pc = 0x1D7578u;
        goto label_1d7578;
    }
    ctx->pc = 0x1D7570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D7578u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7570u, 0x1D7578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7578u;
label_1d7578:
    // 0x1d7578: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d757c:
    // 0x1d757c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1d757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1d7580:
    // 0x1d7580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d7580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7584:
    // 0x1d7584: 0x106201b7  beq         $v1, $v0, . + 4 + (0x1B7 << 2)
label_1d7588:
    if (ctx->pc == 0x1D7588u) {
        ctx->pc = 0x1D758Cu;
        goto label_1d758c;
    }
    ctx->pc = 0x1D7584u;
    {
        const bool branch_taken_0x1d7584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7584) {
            ctx->pc = 0x1D7C64u;
            goto label_1d7c64;
        }
    }
    ctx->pc = 0x1D758Cu;
label_1d758c:
    // 0x1d758c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7590:
    // 0x1d7590: 0x10620140  beq         $v1, $v0, . + 4 + (0x140 << 2)
label_1d7594:
    if (ctx->pc == 0x1D7594u) {
        ctx->pc = 0x1D7598u;
        goto label_1d7598;
    }
    ctx->pc = 0x1D7590u;
    {
        const bool branch_taken_0x1d7590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7590) {
            ctx->pc = 0x1D7A94u;
            goto label_1d7a94;
        }
    }
    ctx->pc = 0x1D7598u;
label_1d7598:
    // 0x1d7598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d759c:
    // 0x1d759c: 0x106200b2  beq         $v1, $v0, . + 4 + (0xB2 << 2)
label_1d75a0:
    if (ctx->pc == 0x1D75A0u) {
        ctx->pc = 0x1D75A4u;
        goto label_1d75a4;
    }
    ctx->pc = 0x1D759Cu;
    {
        const bool branch_taken_0x1d759c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d759c) {
            ctx->pc = 0x1D7868u;
            goto label_1d7868;
        }
    }
    ctx->pc = 0x1D75A4u;
label_1d75a4:
    // 0x1d75a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d75a8:
    // 0x1d75a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d75ac:
    if (ctx->pc == 0x1D75ACu) {
        ctx->pc = 0x1D75B0u;
        goto label_1d75b0;
    }
    ctx->pc = 0x1D75A8u;
    {
        const bool branch_taken_0x1d75a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d75a8) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D75B0u;
label_1d75b0:
    // 0x1d75b0: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_1d75b4:
    if (ctx->pc == 0x1D75B4u) {
        ctx->pc = 0x1D75B8u;
        goto label_1d75b8;
    }
    ctx->pc = 0x1D75B0u;
    {
        const bool branch_taken_0x1d75b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d75b0) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D75B8u;
label_1d75b8:
    // 0x1d75b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d75bc:
    // 0x1d75bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d75c0:
    // 0x1d75c0: 0x8c6400a4  lw          $a0, 0xA4($v1)
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d75c4:
    // 0x1d75c4: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d75c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d75c8:
    // 0x1d75c8: 0xc076424  jal         func_1D9090
label_1d75cc:
    if (ctx->pc == 0x1D75CCu) {
        ctx->pc = 0x1D75D0u;
        goto label_1d75d0;
    }
    ctx->pc = 0x1D75C8u;
    SET_GPR_U32(ctx, 31, 0x1D75D0u);
    ctx->pc = 0x1D9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9090u, 0x1D75C8u, 0x1D75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75D0u;
label_1d75d0:
    // 0x1d75d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d75d4:
    if (ctx->pc == 0x1D75D4u) {
        ctx->pc = 0x1D75D8u;
        goto label_1d75d8;
    }
    ctx->pc = 0x1D75D0u;
    {
        const bool branch_taken_0x1d75d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d75d0) {
            ctx->pc = 0x1D75E4u;
            goto label_1d75e4;
        }
    }
    ctx->pc = 0x1D75D8u;
label_1d75d8:
    // 0x1d75d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d75d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75dc:
    // 0x1d75dc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_1d75e0:
    if (ctx->pc == 0x1D75E0u) {
        ctx->pc = 0x1D75E4u;
        goto label_1d75e4;
    }
    ctx->pc = 0x1D75DCu;
    {
        const bool branch_taken_0x1d75dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d75dc) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D75E4u;
label_1d75e4:
    // 0x1d75e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d75e8:
    // 0x1d75e8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d75ec:
    // 0x1d75ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d75f0:
    // 0x1d75f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d75f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d75f4:
    // 0x1d75f4: 0x0  nop
    ctx->pc = 0x1d75f4u;
    // NOP
label_1d75f8:
    // 0x1d75f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d75f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d75fc:
    // 0x1d75fc: 0x4501019f  bc1t        . + 4 + (0x19F << 2)
label_1d7600:
    if (ctx->pc == 0x1D7600u) {
        ctx->pc = 0x1D7604u;
        goto label_1d7604;
    }
    ctx->pc = 0x1D75FCu;
    {
        const bool branch_taken_0x1d75fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d75fc) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D7604u;
label_1d7604:
    // 0x1d7604: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7608:
    // 0x1d7608: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d7608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d760c:
    // 0x1d760c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1d7610:
    // 0x1d7610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7614:
    // 0x1d7614: 0x0  nop
    ctx->pc = 0x1d7614u;
    // NOP
label_1d7618:
    // 0x1d7618: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d7618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d761c:
    // 0x1d761c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d761cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d7620:
    // 0x1d7620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7624:
    // 0x1d7624: 0x0  nop
    ctx->pc = 0x1d7624u;
    // NOP
label_1d7628:
    // 0x1d7628: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d7628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d762c:
    // 0x1d762c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7630:
    // 0x1d7630: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d7634:
    // 0x1d7634: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d7634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7638:
    // 0x1d7638: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d7638u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1d763c:
    // 0x1d763c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1d7640:
    // 0x1d7640: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d7640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d7644:
    // 0x1d7644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d7644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7648:
    // 0x1d7648: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d764c:
    // 0x1d764c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d764cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d7650:
    // 0x1d7650: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d7650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d7654:
    // 0x1d7654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7658:
    // 0x1d7658: 0x0  nop
    ctx->pc = 0x1d7658u;
    // NOP
label_1d765c:
    // 0x1d765c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d765cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7660:
    // 0x1d7660: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d7664:
    if (ctx->pc == 0x1D7664u) {
        ctx->pc = 0x1D7668u;
        goto label_1d7668;
    }
    ctx->pc = 0x1D7660u;
    {
        const bool branch_taken_0x1d7660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7660) {
            ctx->pc = 0x1D7678u;
            goto label_1d7678;
        }
    }
    ctx->pc = 0x1D7668u;
label_1d7668:
    // 0x1d7668: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d7668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d766c:
    // 0x1d766c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d766cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1d7670:
    // 0x1d7670: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d7674:
    if (ctx->pc == 0x1D7674u) {
        ctx->pc = 0x1D7678u;
        goto label_1d7678;
    }
    ctx->pc = 0x1D7670u;
    {
        const bool branch_taken_0x1d7670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7670) {
            ctx->pc = 0x1D768Cu;
            goto label_1d768c;
        }
    }
    ctx->pc = 0x1D7678u;
label_1d7678:
    // 0x1d7678: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d7678u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d767c:
    // 0x1d767c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d767cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d7680:
    // 0x1d7680: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d7680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1d7684:
    // 0x1d7684: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d7684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1d7688:
    // 0x1d7688: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d7688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d768c:
    // 0x1d768c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7690:
    // 0x1d7690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d7690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d7694:
    // 0x1d7694: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7698:
    // 0x1d7698: 0xc064df0  jal         func_1937C0
label_1d769c:
    if (ctx->pc == 0x1D769Cu) {
        ctx->pc = 0x1D76A0u;
        goto label_1d76a0;
    }
    ctx->pc = 0x1D7698u;
    SET_GPR_U32(ctx, 31, 0x1D76A0u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1D7698u, 0x1D76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76A0u;
label_1d76a0:
    // 0x1d76a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d76a4:
    // 0x1d76a4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d76a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d76a8:
    // 0x1d76a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d76ac:
    // 0x1d76ac: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d76b0:
    // 0x1d76b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d76b4:
    // 0x1d76b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d76b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d76b8:
    // 0x1d76b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1d76b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1d76bc:
    // 0x1d76bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d76c0:
    // 0x1d76c0: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d76c4:
    // 0x1d76c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d76c8:
    // 0x1d76c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d76c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d76cc:
    // 0x1d76cc: 0x0  nop
    ctx->pc = 0x1d76ccu;
    // NOP
label_1d76d0:
    // 0x1d76d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d76d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d76d4:
    // 0x1d76d4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d76d8:
    if (ctx->pc == 0x1D76D8u) {
        ctx->pc = 0x1D76DCu;
        goto label_1d76dc;
    }
    ctx->pc = 0x1D76D4u;
    {
        const bool branch_taken_0x1d76d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d76d4) {
            ctx->pc = 0x1D770Cu;
            goto label_1d770c;
        }
    }
    ctx->pc = 0x1D76DCu;
label_1d76dc:
    // 0x1d76dc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1d76dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d76e0:
    // 0x1d76e0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d76e4:
    // 0x1d76e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d76e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d76e8:
    // 0x1d76e8: 0x0  nop
    ctx->pc = 0x1d76e8u;
    // NOP
label_1d76ec:
    // 0x1d76ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d76ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d76f0:
    // 0x1d76f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d76f4:
    if (ctx->pc == 0x1D76F4u) {
        ctx->pc = 0x1D76F8u;
        goto label_1d76f8;
    }
    ctx->pc = 0x1D76F0u;
    {
        const bool branch_taken_0x1d76f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d76f0) {
            ctx->pc = 0x1D770Cu;
            goto label_1d770c;
        }
    }
    ctx->pc = 0x1D76F8u;
label_1d76f8:
    // 0x1d76f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d76fc:
    // 0x1d76fc: 0xc076370  jal         func_1D8DC0
label_1d7700:
    if (ctx->pc == 0x1D7700u) {
        ctx->pc = 0x1D7704u;
        goto label_1d7704;
    }
    ctx->pc = 0x1D76FCu;
    SET_GPR_U32(ctx, 31, 0x1D7704u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D76FCu, 0x1D7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7704u;
label_1d7704:
    // 0x1d7704: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1d7708:
    if (ctx->pc == 0x1D7708u) {
        ctx->pc = 0x1D770Cu;
        goto label_1d770c;
    }
    ctx->pc = 0x1D7704u;
    {
        const bool branch_taken_0x1d7704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7704) {
            ctx->pc = 0x1D77F4u;
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D770Cu;
label_1d770c:
    // 0x1d770c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7710:
    // 0x1d7710: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7714:
    // 0x1d7714: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d7714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1d7718:
    // 0x1d7718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d771c:
    // 0x1d771c: 0x0  nop
    ctx->pc = 0x1d771cu;
    // NOP
label_1d7720:
    // 0x1d7720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7724:
    // 0x1d7724: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d7728:
    if (ctx->pc == 0x1D7728u) {
        ctx->pc = 0x1D772Cu;
        goto label_1d772c;
    }
    ctx->pc = 0x1D7724u;
    {
        const bool branch_taken_0x1d7724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7724) {
            ctx->pc = 0x1D775Cu;
            goto label_1d775c;
        }
    }
    ctx->pc = 0x1D772Cu;
label_1d772c:
    // 0x1d772c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1d772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7730:
    // 0x1d7730: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1d7734:
    // 0x1d7734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7738:
    // 0x1d7738: 0x0  nop
    ctx->pc = 0x1d7738u;
    // NOP
label_1d773c:
    // 0x1d773c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d773cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7740:
    // 0x1d7740: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d7744:
    if (ctx->pc == 0x1D7744u) {
        ctx->pc = 0x1D7748u;
        goto label_1d7748;
    }
    ctx->pc = 0x1D7740u;
    {
        const bool branch_taken_0x1d7740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7740) {
            ctx->pc = 0x1D775Cu;
            goto label_1d775c;
        }
    }
    ctx->pc = 0x1D7748u;
label_1d7748:
    // 0x1d7748: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d774c:
    // 0x1d774c: 0xc076370  jal         func_1D8DC0
label_1d7750:
    if (ctx->pc == 0x1D7750u) {
        ctx->pc = 0x1D7754u;
        goto label_1d7754;
    }
    ctx->pc = 0x1D774Cu;
    SET_GPR_U32(ctx, 31, 0x1D7754u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D774Cu, 0x1D7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7754u;
label_1d7754:
    // 0x1d7754: 0x10000027  b           . + 4 + (0x27 << 2)
label_1d7758:
    if (ctx->pc == 0x1D7758u) {
        ctx->pc = 0x1D775Cu;
        goto label_1d775c;
    }
    ctx->pc = 0x1D7754u;
    {
        const bool branch_taken_0x1d7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7754) {
            ctx->pc = 0x1D77F4u;
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D775Cu;
label_1d775c:
    // 0x1d775c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7760:
    // 0x1d7760: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d7760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7764:
    // 0x1d7764: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d7764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d7768:
    // 0x1d7768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d776c:
    // 0x1d776c: 0x0  nop
    ctx->pc = 0x1d776cu;
    // NOP
label_1d7770:
    // 0x1d7770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7774:
    // 0x1d7774: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d7778:
    if (ctx->pc == 0x1D7778u) {
        ctx->pc = 0x1D777Cu;
        goto label_1d777c;
    }
    ctx->pc = 0x1D7774u;
    {
        const bool branch_taken_0x1d7774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7774) {
            ctx->pc = 0x1D77ACu;
            goto label_1d77ac;
        }
    }
    ctx->pc = 0x1D777Cu;
label_1d777c:
    // 0x1d777c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1d777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7780:
    // 0x1d7780: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d7780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d7784:
    // 0x1d7784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7788:
    // 0x1d7788: 0x0  nop
    ctx->pc = 0x1d7788u;
    // NOP
label_1d778c:
    // 0x1d778c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d778cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7790:
    // 0x1d7790: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d7794:
    if (ctx->pc == 0x1D7794u) {
        ctx->pc = 0x1D7798u;
        goto label_1d7798;
    }
    ctx->pc = 0x1D7790u;
    {
        const bool branch_taken_0x1d7790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7790) {
            ctx->pc = 0x1D77ACu;
            goto label_1d77ac;
        }
    }
    ctx->pc = 0x1D7798u;
label_1d7798:
    // 0x1d7798: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d779c:
    // 0x1d779c: 0xc076370  jal         func_1D8DC0
label_1d77a0:
    if (ctx->pc == 0x1D77A0u) {
        ctx->pc = 0x1D77A4u;
        goto label_1d77a4;
    }
    ctx->pc = 0x1D779Cu;
    SET_GPR_U32(ctx, 31, 0x1D77A4u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D779Cu, 0x1D77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77A4u;
label_1d77a4:
    // 0x1d77a4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d77a8:
    if (ctx->pc == 0x1D77A8u) {
        ctx->pc = 0x1D77ACu;
        goto label_1d77ac;
    }
    ctx->pc = 0x1D77A4u;
    {
        const bool branch_taken_0x1d77a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77a4) {
            ctx->pc = 0x1D77F4u;
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D77ACu;
label_1d77ac:
    // 0x1d77ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d77b0:
    // 0x1d77b0: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d77b4:
    // 0x1d77b4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d77b8:
    // 0x1d77b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d77b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d77bc:
    // 0x1d77bc: 0x0  nop
    ctx->pc = 0x1d77bcu;
    // NOP
label_1d77c0:
    // 0x1d77c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d77c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d77c4:
    // 0x1d77c4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1d77c8:
    if (ctx->pc == 0x1D77C8u) {
        ctx->pc = 0x1D77CCu;
        goto label_1d77cc;
    }
    ctx->pc = 0x1D77C4u;
    {
        const bool branch_taken_0x1d77c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d77c4) {
            ctx->pc = 0x1D77F4u;
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D77CCu;
label_1d77cc:
    // 0x1d77cc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1d77ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d77d0:
    // 0x1d77d0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d77d4:
    // 0x1d77d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d77d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d77d8:
    // 0x1d77d8: 0x0  nop
    ctx->pc = 0x1d77d8u;
    // NOP
label_1d77dc:
    // 0x1d77dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d77dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d77e0:
    // 0x1d77e0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d77e4:
    if (ctx->pc == 0x1D77E4u) {
        ctx->pc = 0x1D77E8u;
        goto label_1d77e8;
    }
    ctx->pc = 0x1D77E0u;
    {
        const bool branch_taken_0x1d77e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d77e0) {
            ctx->pc = 0x1D77F4u;
            goto label_1d77f4;
        }
    }
    ctx->pc = 0x1D77E8u;
label_1d77e8:
    // 0x1d77e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d77ec:
    // 0x1d77ec: 0xc076370  jal         func_1D8DC0
label_1d77f0:
    if (ctx->pc == 0x1D77F0u) {
        ctx->pc = 0x1D77F4u;
        goto label_1d77f4;
    }
    ctx->pc = 0x1D77ECu;
    SET_GPR_U32(ctx, 31, 0x1D77F4u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D77ECu, 0x1D77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77F4u;
label_1d77f4:
    // 0x1d77f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d77f8:
    // 0x1d77f8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d77fc:
    // 0x1d77fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7800:
    // 0x1d7800: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1d7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7804:
    // 0x1d7804: 0xc064d10  jal         func_193440
label_1d7808:
    if (ctx->pc == 0x1D7808u) {
        ctx->pc = 0x1D780Cu;
        goto label_1d780c;
    }
    ctx->pc = 0x1D7804u;
    SET_GPR_U32(ctx, 31, 0x1D780Cu);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1D7804u, 0x1D780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D780Cu;
label_1d780c:
    // 0x1d780c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7810:
    // 0x1d7810: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1d7814:
    // 0x1d7814: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d7818:
    if (ctx->pc == 0x1D7818u) {
        ctx->pc = 0x1D781Cu;
        goto label_1d781c;
    }
    ctx->pc = 0x1D7814u;
    {
        const bool branch_taken_0x1d7814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7814) {
            ctx->pc = 0x1D7844u;
            goto label_1d7844;
        }
    }
    ctx->pc = 0x1D781Cu;
label_1d781c:
    // 0x1d781c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7820:
    // 0x1d7820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d7820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d7824:
    // 0x1d7824: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d7824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d7828:
    // 0x1d7828: 0x278597d0  addiu       $a1, $gp, -0x6830
    ctx->pc = 0x1d7828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940624));
label_1d782c:
    // 0x1d782c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7830:
    // 0x1d7830: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d7830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7834:
    // 0x1d7834: 0xc08f558  jal         func_23D560
label_1d7838:
    if (ctx->pc == 0x1D7838u) {
        ctx->pc = 0x1D783Cu;
        goto label_1d783c;
    }
    ctx->pc = 0x1D7834u;
    SET_GPR_U32(ctx, 31, 0x1D783Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1D7834u, 0x1D783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D783Cu;
label_1d783c:
    // 0x1d783c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7840:
    // 0x1d7840: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1d7840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1d7844:
    // 0x1d7844: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7848:
    // 0x1d7848: 0xc064d5c  jal         func_193570
label_1d784c:
    if (ctx->pc == 0x1D784Cu) {
        ctx->pc = 0x1D7850u;
        goto label_1d7850;
    }
    ctx->pc = 0x1D7848u;
    SET_GPR_U32(ctx, 31, 0x1D7850u);
    ctx->pc = 0x193570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193570u, 0x1D7848u, 0x1D7850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7850u;
label_1d7850:
    // 0x1d7850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7854:
    // 0x1d7854: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7858:
    // 0x1d7858: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d785c:
    // 0x1d785c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d785cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d7860:
    // 0x1d7860: 0x10000106  b           . + 4 + (0x106 << 2)
label_1d7864:
    if (ctx->pc == 0x1D7864u) {
        ctx->pc = 0x1D7868u;
        goto label_1d7868;
    }
    ctx->pc = 0x1D7860u;
    {
        const bool branch_taken_0x1d7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7860) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D7868u;
label_1d7868:
    // 0x1d7868: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d786c:
    // 0x1d786c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7870:
    // 0x1d7870: 0x8c6400a8  lw          $a0, 0xA8($v1)
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_1d7874:
    // 0x1d7874: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d7874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7878:
    // 0x1d7878: 0xc0771dc  jal         func_1DC770
label_1d787c:
    if (ctx->pc == 0x1D787Cu) {
        ctx->pc = 0x1D7880u;
        goto label_1d7880;
    }
    ctx->pc = 0x1D7878u;
    SET_GPR_U32(ctx, 31, 0x1D7880u);
    ctx->pc = 0x1DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC770u, 0x1D7878u, 0x1D7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7880u;
label_1d7880:
    // 0x1d7880: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d7884:
    if (ctx->pc == 0x1D7884u) {
        ctx->pc = 0x1D7888u;
        goto label_1d7888;
    }
    ctx->pc = 0x1D7880u;
    {
        const bool branch_taken_0x1d7880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7880) {
            ctx->pc = 0x1D7894u;
            goto label_1d7894;
        }
    }
    ctx->pc = 0x1D7888u;
label_1d7888:
    // 0x1d7888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d788c:
    // 0x1d788c: 0x100000fc  b           . + 4 + (0xFC << 2)
label_1d7890:
    if (ctx->pc == 0x1D7890u) {
        ctx->pc = 0x1D7894u;
        goto label_1d7894;
    }
    ctx->pc = 0x1D788Cu;
    {
        const bool branch_taken_0x1d788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d788c) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7894u;
label_1d7894:
    // 0x1d7894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7898:
    // 0x1d7898: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d789c:
    // 0x1d789c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d78a0:
    // 0x1d78a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d78a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d78a4:
    // 0x1d78a4: 0x0  nop
    ctx->pc = 0x1d78a4u;
    // NOP
label_1d78a8:
    // 0x1d78a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d78a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d78ac:
    // 0x1d78ac: 0x450100f3  bc1t        . + 4 + (0xF3 << 2)
label_1d78b0:
    if (ctx->pc == 0x1D78B0u) {
        ctx->pc = 0x1D78B4u;
        goto label_1d78b4;
    }
    ctx->pc = 0x1D78ACu;
    {
        const bool branch_taken_0x1d78ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d78ac) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D78B4u;
label_1d78b4:
    // 0x1d78b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d78b8:
    // 0x1d78b8: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d78bc:
    // 0x1d78bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d78bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d78c0:
    // 0x1d78c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d78c4:
    // 0x1d78c4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d78c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d78c8:
    // 0x1d78c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d78c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d78cc:
    // 0x1d78cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1d78ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1d78d0:
    // 0x1d78d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d78d4:
    // 0x1d78d4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d78d8:
    // 0x1d78d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d78dc:
    // 0x1d78dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d78dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d78e0:
    // 0x1d78e0: 0x0  nop
    ctx->pc = 0x1d78e0u;
    // NOP
label_1d78e4:
    // 0x1d78e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d78e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d78e8:
    // 0x1d78e8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d78ec:
    if (ctx->pc == 0x1D78ECu) {
        ctx->pc = 0x1D78F0u;
        goto label_1d78f0;
    }
    ctx->pc = 0x1D78E8u;
    {
        const bool branch_taken_0x1d78e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d78e8) {
            ctx->pc = 0x1D7920u;
            goto label_1d7920;
        }
    }
    ctx->pc = 0x1D78F0u;
label_1d78f0:
    // 0x1d78f0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1d78f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d78f4:
    // 0x1d78f4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d78f8:
    // 0x1d78f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d78f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d78fc:
    // 0x1d78fc: 0x0  nop
    ctx->pc = 0x1d78fcu;
    // NOP
label_1d7900:
    // 0x1d7900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7904:
    // 0x1d7904: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d7908:
    if (ctx->pc == 0x1D7908u) {
        ctx->pc = 0x1D790Cu;
        goto label_1d790c;
    }
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D7920u;
            goto label_1d7920;
        }
    }
    ctx->pc = 0x1D790Cu;
label_1d790c:
    // 0x1d790c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7910:
    // 0x1d7910: 0xc076370  jal         func_1D8DC0
label_1d7914:
    if (ctx->pc == 0x1D7914u) {
        ctx->pc = 0x1D7918u;
        goto label_1d7918;
    }
    ctx->pc = 0x1D7910u;
    SET_GPR_U32(ctx, 31, 0x1D7918u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D7910u, 0x1D7918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7918u;
label_1d7918:
    // 0x1d7918: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1d791c:
    if (ctx->pc == 0x1D791Cu) {
        ctx->pc = 0x1D7920u;
        goto label_1d7920;
    }
    ctx->pc = 0x1D7918u;
    {
        const bool branch_taken_0x1d7918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7918) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D7920u;
label_1d7920:
    // 0x1d7920: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7924:
    // 0x1d7924: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d7924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7928:
    // 0x1d7928: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d7928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1d792c:
    // 0x1d792c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d792cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7930:
    // 0x1d7930: 0x0  nop
    ctx->pc = 0x1d7930u;
    // NOP
label_1d7934:
    // 0x1d7934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7938:
    // 0x1d7938: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d793c:
    if (ctx->pc == 0x1D793Cu) {
        ctx->pc = 0x1D7940u;
        goto label_1d7940;
    }
    ctx->pc = 0x1D7938u;
    {
        const bool branch_taken_0x1d7938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7938) {
            ctx->pc = 0x1D7970u;
            goto label_1d7970;
        }
    }
    ctx->pc = 0x1D7940u;
label_1d7940:
    // 0x1d7940: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1d7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7944:
    // 0x1d7944: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d7944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1d7948:
    // 0x1d7948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d794c:
    // 0x1d794c: 0x0  nop
    ctx->pc = 0x1d794cu;
    // NOP
label_1d7950:
    // 0x1d7950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7954:
    // 0x1d7954: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d7958:
    if (ctx->pc == 0x1D7958u) {
        ctx->pc = 0x1D795Cu;
        goto label_1d795c;
    }
    ctx->pc = 0x1D7954u;
    {
        const bool branch_taken_0x1d7954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7954) {
            ctx->pc = 0x1D7970u;
            goto label_1d7970;
        }
    }
    ctx->pc = 0x1D795Cu;
label_1d795c:
    // 0x1d795c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7960:
    // 0x1d7960: 0xc076370  jal         func_1D8DC0
label_1d7964:
    if (ctx->pc == 0x1D7964u) {
        ctx->pc = 0x1D7968u;
        goto label_1d7968;
    }
    ctx->pc = 0x1D7960u;
    SET_GPR_U32(ctx, 31, 0x1D7968u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D7960u, 0x1D7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7968u;
label_1d7968:
    // 0x1d7968: 0x10000027  b           . + 4 + (0x27 << 2)
label_1d796c:
    if (ctx->pc == 0x1D796Cu) {
        ctx->pc = 0x1D7970u;
        goto label_1d7970;
    }
    ctx->pc = 0x1D7968u;
    {
        const bool branch_taken_0x1d7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7968) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D7970u;
label_1d7970:
    // 0x1d7970: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7974:
    // 0x1d7974: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d7974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7978:
    // 0x1d7978: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d7978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d797c:
    // 0x1d797c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d797cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7980:
    // 0x1d7980: 0x0  nop
    ctx->pc = 0x1d7980u;
    // NOP
label_1d7984:
    // 0x1d7984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7988:
    // 0x1d7988: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d798c:
    if (ctx->pc == 0x1D798Cu) {
        ctx->pc = 0x1D7990u;
        goto label_1d7990;
    }
    ctx->pc = 0x1D7988u;
    {
        const bool branch_taken_0x1d7988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7988) {
            ctx->pc = 0x1D79C0u;
            goto label_1d79c0;
        }
    }
    ctx->pc = 0x1D7990u;
label_1d7990:
    // 0x1d7990: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1d7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7994:
    // 0x1d7994: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1d7998:
    // 0x1d7998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d799c:
    // 0x1d799c: 0x0  nop
    ctx->pc = 0x1d799cu;
    // NOP
label_1d79a0:
    // 0x1d79a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d79a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d79a4:
    // 0x1d79a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1d79a8:
    if (ctx->pc == 0x1D79A8u) {
        ctx->pc = 0x1D79ACu;
        goto label_1d79ac;
    }
    ctx->pc = 0x1D79A4u;
    {
        const bool branch_taken_0x1d79a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d79a4) {
            ctx->pc = 0x1D79C0u;
            goto label_1d79c0;
        }
    }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d79acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d79b0:
    // 0x1d79b0: 0xc076370  jal         func_1D8DC0
label_1d79b4:
    if (ctx->pc == 0x1D79B4u) {
        ctx->pc = 0x1D79B8u;
        goto label_1d79b8;
    }
    ctx->pc = 0x1D79B0u;
    SET_GPR_U32(ctx, 31, 0x1D79B8u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D79B0u, 0x1D79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79B8u;
label_1d79b8:
    // 0x1d79b8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d79bc:
    if (ctx->pc == 0x1D79BCu) {
        ctx->pc = 0x1D79C0u;
        goto label_1d79c0;
    }
    ctx->pc = 0x1D79B8u;
    {
        const bool branch_taken_0x1d79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d79b8) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D79C0u;
label_1d79c0:
    // 0x1d79c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d79c4:
    // 0x1d79c4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1d79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d79c8:
    // 0x1d79c8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d79cc:
    // 0x1d79cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d79ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d79d0:
    // 0x1d79d0: 0x0  nop
    ctx->pc = 0x1d79d0u;
    // NOP
label_1d79d4:
    // 0x1d79d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d79d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d79d8:
    // 0x1d79d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1d79dc:
    if (ctx->pc == 0x1D79DCu) {
        ctx->pc = 0x1D79E0u;
        goto label_1d79e0;
    }
    ctx->pc = 0x1D79D8u;
    {
        const bool branch_taken_0x1d79d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d79d8) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D79E0u;
label_1d79e0:
    // 0x1d79e0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1d79e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d79e4:
    // 0x1d79e4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d79e8:
    // 0x1d79e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d79e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d79ec:
    // 0x1d79ec: 0x0  nop
    ctx->pc = 0x1d79ecu;
    // NOP
label_1d79f0:
    // 0x1d79f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d79f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d79f4:
    // 0x1d79f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d79f8:
    if (ctx->pc == 0x1D79F8u) {
        ctx->pc = 0x1D79FCu;
        goto label_1d79fc;
    }
    ctx->pc = 0x1D79F4u;
    {
        const bool branch_taken_0x1d79f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d79f4) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D79FCu;
label_1d79fc:
    // 0x1d79fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a00:
    // 0x1d7a00: 0xc076370  jal         func_1D8DC0
label_1d7a04:
    if (ctx->pc == 0x1D7A04u) {
        ctx->pc = 0x1D7A08u;
        goto label_1d7a08;
    }
    ctx->pc = 0x1D7A00u;
    SET_GPR_U32(ctx, 31, 0x1D7A08u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D7A00u, 0x1D7A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A08u;
label_1d7a08:
    // 0x1d7a08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a0c:
    // 0x1d7a0c: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d7a10:
    // 0x1d7a10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d7a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7a14:
    // 0x1d7a14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a18:
    // 0x1d7a18: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7a1c:
    // 0x1d7a1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d7a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d7a20:
    // 0x1d7a20: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1d7a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1d7a24:
    // 0x1d7a24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a28:
    // 0x1d7a28: 0xc78c82c4  lwc1        $f12, -0x7D3C($gp)
    ctx->pc = 0x1d7a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7a2c:
    // 0x1d7a2c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1d7a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d7a30:
    // 0x1d7a30: 0xc064df0  jal         func_1937C0
label_1d7a34:
    if (ctx->pc == 0x1D7A34u) {
        ctx->pc = 0x1D7A38u;
        goto label_1d7a38;
    }
    ctx->pc = 0x1D7A30u;
    SET_GPR_U32(ctx, 31, 0x1D7A38u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1D7A30u, 0x1D7A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A38u;
label_1d7a38:
    // 0x1d7a38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a3c:
    // 0x1d7a3c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1d7a40:
    // 0x1d7a40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d7a44:
    if (ctx->pc == 0x1D7A44u) {
        ctx->pc = 0x1D7A48u;
        goto label_1d7a48;
    }
    ctx->pc = 0x1D7A40u;
    {
        const bool branch_taken_0x1d7a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a40) {
            ctx->pc = 0x1D7A70u;
            goto label_1d7a70;
        }
    }
    ctx->pc = 0x1D7A48u;
label_1d7a48:
    // 0x1d7a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7a4c:
    // 0x1d7a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d7a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d7a50:
    // 0x1d7a50: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d7a54:
    // 0x1d7a54: 0x278597d0  addiu       $a1, $gp, -0x6830
    ctx->pc = 0x1d7a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940624));
label_1d7a58:
    // 0x1d7a58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7a5c:
    // 0x1d7a5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d7a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7a60:
    // 0x1d7a60: 0xc08f558  jal         func_23D560
label_1d7a64:
    if (ctx->pc == 0x1D7A64u) {
        ctx->pc = 0x1D7A68u;
        goto label_1d7a68;
    }
    ctx->pc = 0x1D7A60u;
    SET_GPR_U32(ctx, 31, 0x1D7A68u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1D7A60u, 0x1D7A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A68u;
label_1d7a68:
    // 0x1d7a68: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a6c:
    // 0x1d7a6c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1d7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1d7a70:
    // 0x1d7a70: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a74:
    // 0x1d7a74: 0xc064d5c  jal         func_193570
label_1d7a78:
    if (ctx->pc == 0x1D7A78u) {
        ctx->pc = 0x1D7A7Cu;
        goto label_1d7a7c;
    }
    ctx->pc = 0x1D7A74u;
    SET_GPR_U32(ctx, 31, 0x1D7A7Cu);
    ctx->pc = 0x193570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193570u, 0x1D7A74u, 0x1D7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7A7Cu;
label_1d7a7c:
    // 0x1d7a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7a80:
    // 0x1d7a80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a84:
    // 0x1d7a84: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d7a88:
    // 0x1d7a88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d7a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d7a8c:
    // 0x1d7a8c: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1d7a90:
    if (ctx->pc == 0x1D7A90u) {
        ctx->pc = 0x1D7A94u;
        goto label_1d7a94;
    }
    ctx->pc = 0x1D7A8Cu;
    {
        const bool branch_taken_0x1d7a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a8c) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D7A94u;
label_1d7a94:
    // 0x1d7a94: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a98:
    // 0x1d7a98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7a9c:
    // 0x1d7a9c: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x1d7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d7aa0:
    // 0x1d7aa0: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7aa4:
    // 0x1d7aa4: 0xc077b30  jal         func_1DECC0
label_1d7aa8:
    if (ctx->pc == 0x1D7AA8u) {
        ctx->pc = 0x1D7AACu;
        goto label_1d7aac;
    }
    ctx->pc = 0x1D7AA4u;
    SET_GPR_U32(ctx, 31, 0x1D7AACu);
    ctx->pc = 0x1DECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DECC0u, 0x1D7AA4u, 0x1D7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AACu;
label_1d7aac:
    // 0x1d7aac: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_1d7ab0:
    if (ctx->pc == 0x1D7AB0u) {
        ctx->pc = 0x1D7AB4u;
        goto label_1d7ab4;
    }
    ctx->pc = 0x1D7AACu;
    {
        const bool branch_taken_0x1d7aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7aac) {
            ctx->pc = 0x1D7B4Cu;
            goto label_1d7b4c;
        }
    }
    ctx->pc = 0x1D7AB4u;
label_1d7ab4:
    // 0x1d7ab4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7ab8:
    // 0x1d7ab8: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7abc:
    // 0x1d7abc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1d7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7ac0:
    // 0x1d7ac0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7ac4:
    // 0x1d7ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7ac8:
    // 0x1d7ac8: 0x0  nop
    ctx->pc = 0x1d7ac8u;
    // NOP
label_1d7acc:
    // 0x1d7acc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d7accu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d7ad0:
    // 0x1d7ad0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7ad4:
    // 0x1d7ad4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7ad8:
    // 0x1d7ad8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d7ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7adc:
    // 0x1d7adc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d7ae0:
    if (ctx->pc == 0x1D7AE0u) {
        ctx->pc = 0x1D7AE4u;
        goto label_1d7ae4;
    }
    ctx->pc = 0x1D7ADCu;
    {
        const bool branch_taken_0x1d7adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7adc) {
            ctx->pc = 0x1D7AF0u;
            goto label_1d7af0;
        }
    }
    ctx->pc = 0x1D7AE4u;
label_1d7ae4:
    // 0x1d7ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ae8:
    // 0x1d7ae8: 0x10000065  b           . + 4 + (0x65 << 2)
label_1d7aec:
    if (ctx->pc == 0x1D7AECu) {
        ctx->pc = 0x1D7AF0u;
        goto label_1d7af0;
    }
    ctx->pc = 0x1D7AE8u;
    {
        const bool branch_taken_0x1d7ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ae8) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7AF0u;
label_1d7af0:
    // 0x1d7af0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7af4:
    // 0x1d7af4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7af8:
    // 0x1d7af8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1d7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7afc:
    // 0x1d7afc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b00:
    // 0x1d7b00: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d7b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7b04:
    // 0x1d7b04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d7b08:
    // 0x1d7b08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d7b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d7b0c:
    // 0x1d7b0c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1d7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7b10:
    // 0x1d7b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7b14:
    // 0x1d7b14: 0x0  nop
    ctx->pc = 0x1d7b14u;
    // NOP
label_1d7b18:
    // 0x1d7b18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7b1c:
    // 0x1d7b1c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1d7b20:
    if (ctx->pc == 0x1D7B20u) {
        ctx->pc = 0x1D7B24u;
        goto label_1d7b24;
    }
    ctx->pc = 0x1D7B1Cu;
    {
        const bool branch_taken_0x1d7b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7b1c) {
            ctx->pc = 0x1D7B40u;
            goto label_1d7b40;
        }
    }
    ctx->pc = 0x1D7B24u;
label_1d7b24:
    // 0x1d7b24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b28:
    // 0x1d7b28: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d7b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7b2c:
    // 0x1d7b2c: 0xc064d10  jal         func_193440
label_1d7b30:
    if (ctx->pc == 0x1D7B30u) {
        ctx->pc = 0x1D7B34u;
        goto label_1d7b34;
    }
    ctx->pc = 0x1D7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B34u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1D7B2Cu, 0x1D7B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B34u;
label_1d7b34:
    // 0x1d7b34: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b38:
    // 0x1d7b38: 0xc076370  jal         func_1D8DC0
label_1d7b3c:
    if (ctx->pc == 0x1D7B3Cu) {
        ctx->pc = 0x1D7B40u;
        goto label_1d7b40;
    }
    ctx->pc = 0x1D7B38u;
    SET_GPR_U32(ctx, 31, 0x1D7B40u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D7B38u, 0x1D7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B40u;
label_1d7b40:
    // 0x1d7b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7b44:
    // 0x1d7b44: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1d7b48:
    if (ctx->pc == 0x1D7B48u) {
        ctx->pc = 0x1D7B4Cu;
        goto label_1d7b4c;
    }
    ctx->pc = 0x1D7B44u;
    {
        const bool branch_taken_0x1d7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b44) {
            ctx->pc = 0x1D7C80u;
            goto label_1d7c80;
        }
    }
    ctx->pc = 0x1D7B4Cu;
label_1d7b4c:
    // 0x1d7b4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b50:
    // 0x1d7b50: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7b54:
    // 0x1d7b54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d7b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7b58:
    // 0x1d7b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7b5c:
    // 0x1d7b5c: 0x0  nop
    ctx->pc = 0x1d7b5cu;
    // NOP
label_1d7b60:
    // 0x1d7b60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7b64:
    // 0x1d7b64: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_1d7b68:
    if (ctx->pc == 0x1D7B68u) {
        ctx->pc = 0x1D7B6Cu;
        goto label_1d7b6c;
    }
    ctx->pc = 0x1D7B64u;
    {
        const bool branch_taken_0x1d7b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7b64) {
            ctx->pc = 0x1D7BE4u;
            goto label_1d7be4;
        }
    }
    ctx->pc = 0x1D7B6Cu;
label_1d7b6c:
    // 0x1d7b6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b70:
    // 0x1d7b70: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7b74:
    // 0x1d7b74: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b78:
    // 0x1d7b78: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1d7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7b7c:
    // 0x1d7b7c: 0xc064d10  jal         func_193440
label_1d7b80:
    if (ctx->pc == 0x1D7B80u) {
        ctx->pc = 0x1D7B84u;
        goto label_1d7b84;
    }
    ctx->pc = 0x1D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B84u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1D7B7Cu, 0x1D7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B84u;
label_1d7b84:
    // 0x1d7b84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7b88:
    // 0x1d7b88: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1d7b8c:
    // 0x1d7b8c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d7b90:
    if (ctx->pc == 0x1D7B90u) {
        ctx->pc = 0x1D7B94u;
        goto label_1d7b94;
    }
    ctx->pc = 0x1D7B8Cu;
    {
        const bool branch_taken_0x1d7b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b8c) {
            ctx->pc = 0x1D7BBCu;
            goto label_1d7bbc;
        }
    }
    ctx->pc = 0x1D7B94u;
label_1d7b94:
    // 0x1d7b94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7b98:
    // 0x1d7b98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d7b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d7b9c:
    // 0x1d7b9c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d7ba0:
    // 0x1d7ba0: 0x278597d0  addiu       $a1, $gp, -0x6830
    ctx->pc = 0x1d7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940624));
label_1d7ba4:
    // 0x1d7ba4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7ba8:
    // 0x1d7ba8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d7ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7bac:
    // 0x1d7bac: 0xc08f558  jal         func_23D560
label_1d7bb0:
    if (ctx->pc == 0x1D7BB0u) {
        ctx->pc = 0x1D7BB4u;
        goto label_1d7bb4;
    }
    ctx->pc = 0x1D7BACu;
    SET_GPR_U32(ctx, 31, 0x1D7BB4u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1D7BACu, 0x1D7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BB4u;
label_1d7bb4:
    // 0x1d7bb4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7bb8:
    // 0x1d7bb8: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1d7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1d7bbc:
    // 0x1d7bbc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7bc0:
    // 0x1d7bc0: 0xc064d5c  jal         func_193570
label_1d7bc4:
    if (ctx->pc == 0x1D7BC4u) {
        ctx->pc = 0x1D7BC8u;
        goto label_1d7bc8;
    }
    ctx->pc = 0x1D7BC0u;
    SET_GPR_U32(ctx, 31, 0x1D7BC8u);
    ctx->pc = 0x193570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193570u, 0x1D7BC0u, 0x1D7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BC8u;
label_1d7bc8:
    // 0x1d7bc8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7bcc:
    // 0x1d7bcc: 0xc076370  jal         func_1D8DC0
label_1d7bd0:
    if (ctx->pc == 0x1D7BD0u) {
        ctx->pc = 0x1D7BD4u;
        goto label_1d7bd4;
    }
    ctx->pc = 0x1D7BCCu;
    SET_GPR_U32(ctx, 31, 0x1D7BD4u);
    ctx->pc = 0x1D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DC0u, 0x1D7BCCu, 0x1D7BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BD4u;
label_1d7bd4:
    // 0x1d7bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7bd8:
    // 0x1d7bd8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7bdc:
    // 0x1d7bdc: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7be0:
    // 0x1d7be0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d7be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d7be4:
    // 0x1d7be4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7be8:
    // 0x1d7be8: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7bec:
    // 0x1d7bec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7bf0:
    // 0x1d7bf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7bf4:
    // 0x1d7bf4: 0x0  nop
    ctx->pc = 0x1d7bf4u;
    // NOP
label_1d7bf8:
    // 0x1d7bf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7bfc:
    // 0x1d7bfc: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_1d7c00:
    if (ctx->pc == 0x1D7C00u) {
        ctx->pc = 0x1D7C04u;
        goto label_1d7c04;
    }
    ctx->pc = 0x1D7BFCu;
    {
        const bool branch_taken_0x1d7bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7bfc) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D7C04u;
label_1d7c04:
    // 0x1d7c04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c08:
    // 0x1d7c08: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7c0c:
    // 0x1d7c0c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1d7c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1d7c10:
    // 0x1d7c10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d7c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d7c14:
    // 0x1d7c14: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_1d7c18:
    if (ctx->pc == 0x1D7C18u) {
        ctx->pc = 0x1D7C1Cu;
        goto label_1d7c1c;
    }
    ctx->pc = 0x1D7C14u;
    {
        const bool branch_taken_0x1d7c14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d7c14) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D7C1Cu;
label_1d7c1c:
    // 0x1d7c1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c20:
    // 0x1d7c20: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7c24:
    // 0x1d7c24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c28:
    // 0x1d7c28: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7c2c:
    // 0x1d7c2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d7c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c30:
    // 0x1d7c30: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x1d7c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7c34:
    // 0x1d7c34: 0x90450008  lbu         $a1, 0x8($v0)
    ctx->pc = 0x1d7c34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1d7c38:
    // 0x1d7c38: 0xc064df0  jal         func_1937C0
label_1d7c3c:
    if (ctx->pc == 0x1D7C3Cu) {
        ctx->pc = 0x1D7C40u;
        goto label_1d7c40;
    }
    ctx->pc = 0x1D7C38u;
    SET_GPR_U32(ctx, 31, 0x1D7C40u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1D7C38u, 0x1D7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C40u;
label_1d7c40:
    // 0x1d7c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7c44:
    // 0x1d7c44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c48:
    // 0x1d7c48: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7c4c:
    // 0x1d7c4c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d7c50:
    // 0x1d7c50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c54:
    // 0x1d7c54: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d7c58:
    // 0x1d7c58: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1d7c58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_1d7c5c:
    // 0x1d7c5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d7c60:
    if (ctx->pc == 0x1D7C60u) {
        ctx->pc = 0x1D7C64u;
        goto label_1d7c64;
    }
    ctx->pc = 0x1D7C5Cu;
    {
        const bool branch_taken_0x1d7c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c5c) {
            ctx->pc = 0x1D7C7Cu;
            goto label_1d7c7c;
        }
    }
    ctx->pc = 0x1D7C64u;
label_1d7c64:
    // 0x1d7c64: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c68:
    // 0x1d7c68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7c6c:
    // 0x1d7c6c: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x1d7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_1d7c70:
    // 0x1d7c70: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x1d7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7c74:
    // 0x1d7c74: 0xc079c04  jal         func_1E7010
label_1d7c78:
    if (ctx->pc == 0x1D7C78u) {
        ctx->pc = 0x1D7C7Cu;
        goto label_1d7c7c;
    }
    ctx->pc = 0x1D7C74u;
    SET_GPR_U32(ctx, 31, 0x1D7C7Cu);
    ctx->pc = 0x1E7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7010u, 0x1D7C74u, 0x1D7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C7Cu;
label_1d7c7c:
    // 0x1d7c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7c80:
    // 0x1d7c80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d7c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7c84:
    // 0x1d7c84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7c88:
    // 0x1d7c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7c8c:
    // 0x1d7c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7c90:
    // 0x1d7c90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d7c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d7c94:
    // 0x1d7c94: 0x3e00008  jr          $ra
label_1d7c98:
    if (ctx->pc == 0x1D7C98u) {
        ctx->pc = 0x1D7C9Cu;
        goto label_1d7c9c;
    }
    ctx->pc = 0x1D7C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7C9Cu;
label_1d7c9c:
    // 0x1d7c9c: 0x0  nop
    ctx->pc = 0x1d7c9cu;
    // NOP
label_1d7ca0:
    // 0x1d7ca0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d7ca4:
    // 0x1d7ca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d7ca8:
    // 0x1d7ca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d7cac:
    // 0x1d7cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7cb0:
    // 0x1d7cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7cb4:
    // 0x1d7cb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7cb8:
    // 0x1d7cb8: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1d7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_1d7cbc:
    // 0x1d7cbc: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1d7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_1d7cc0:
    // 0x1d7cc0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7cc4:
    // 0x1d7cc4: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1d7cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
label_1d7cc8:
    // 0x1d7cc8: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_1d7ccc:
    if (ctx->pc == 0x1D7CCCu) {
        ctx->pc = 0x1D7CD0u;
        goto label_1d7cd0;
    }
    ctx->pc = 0x1D7CC8u;
    {
        const bool branch_taken_0x1d7cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cc8) {
            ctx->pc = 0x1D7EECu;
            goto label_1d7eec;
        }
    }
    ctx->pc = 0x1D7CD0u;
label_1d7cd0:
    // 0x1d7cd0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7cd4:
    // 0x1d7cd4: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1d7cd8:
    // 0x1d7cd8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d7cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d7cdc:
    // 0x1d7cdc: 0xc085538  jal         func_2154E0
label_1d7ce0:
    if (ctx->pc == 0x1D7CE0u) {
        ctx->pc = 0x1D7CE4u;
        goto label_1d7ce4;
    }
    ctx->pc = 0x1D7CDCu;
    SET_GPR_U32(ctx, 31, 0x1D7CE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D7CDCu, 0x1D7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CE4u;
label_1d7ce4:
    // 0x1d7ce4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d7ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ce8:
    // 0x1d7ce8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7cec:
    // 0x1d7cec: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d7cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1d7cf0:
    // 0x1d7cf0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d7cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d7cf4:
    // 0x1d7cf4: 0xc085538  jal         func_2154E0
label_1d7cf8:
    if (ctx->pc == 0x1D7CF8u) {
        ctx->pc = 0x1D7CFCu;
        goto label_1d7cfc;
    }
    ctx->pc = 0x1D7CF4u;
    SET_GPR_U32(ctx, 31, 0x1D7CFCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D7CF4u, 0x1D7CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CFCu;
label_1d7cfc:
    // 0x1d7cfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d00:
    // 0x1d7d00: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1d7d04:
    // 0x1d7d04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d7d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d08:
    // 0x1d7d08: 0xc090f80  jal         func_243E00
label_1d7d0c:
    if (ctx->pc == 0x1D7D0Cu) {
        ctx->pc = 0x1D7D10u;
        goto label_1d7d10;
    }
    ctx->pc = 0x1D7D08u;
    SET_GPR_U32(ctx, 31, 0x1D7D10u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D7D08u, 0x1D7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D10u;
label_1d7d10:
    // 0x1d7d10: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1d7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1d7d14:
    // 0x1d7d14: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x1d7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1d7d18:
    // 0x1d7d18: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d7d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d7d1c:
    // 0x1d7d1c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d7d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7d20:
    // 0x1d7d20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7d24:
    // 0x1d7d24: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d7d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d7d28:
    // 0x1d7d28: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d7d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d7d2c:
    // 0x1d7d2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d7d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d7d30:
    // 0x1d7d30: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1d7d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1d7d34:
    // 0x1d7d34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d38:
    // 0x1d7d38: 0xc090f80  jal         func_243E00
label_1d7d3c:
    if (ctx->pc == 0x1D7D3Cu) {
        ctx->pc = 0x1D7D40u;
        goto label_1d7d40;
    }
    ctx->pc = 0x1D7D38u;
    SET_GPR_U32(ctx, 31, 0x1D7D40u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D7D38u, 0x1D7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D40u;
label_1d7d40:
    // 0x1d7d40: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1d7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1d7d44:
    // 0x1d7d44: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1d7d48:
    // 0x1d7d48: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d7d4c:
    // 0x1d7d4c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7d50:
    // 0x1d7d50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1d7d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7d54:
    // 0x1d7d54: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1d7d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d7d58:
    // 0x1d7d58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d7d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d7d5c:
    // 0x1d7d5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d7d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d7d60:
    // 0x1d7d60: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1d7d64:
    // 0x1d7d64: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1d7d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1d7d68:
    // 0x1d7d68: 0xc0b5f04  jal         func_2D7C10
label_1d7d6c:
    if (ctx->pc == 0x1D7D6Cu) {
        ctx->pc = 0x1D7D70u;
        goto label_1d7d70;
    }
    ctx->pc = 0x1D7D68u;
    SET_GPR_U32(ctx, 31, 0x1D7D70u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x1D7D68u, 0x1D7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D70u;
label_1d7d70:
    // 0x1d7d70: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1d7d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1d7d74:
    // 0x1d7d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d78:
    // 0x1d7d78: 0xc091008  jal         func_244020
label_1d7d7c:
    if (ctx->pc == 0x1D7D7Cu) {
        ctx->pc = 0x1D7D80u;
        goto label_1d7d80;
    }
    ctx->pc = 0x1D7D78u;
    SET_GPR_U32(ctx, 31, 0x1D7D80u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1D7D78u, 0x1D7D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D80u;
label_1d7d80:
    // 0x1d7d80: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d7d84:
    // 0x1d7d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d7d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7d88:
    // 0x1d7d88: 0x0  nop
    ctx->pc = 0x1d7d88u;
    // NOP
label_1d7d8c:
    // 0x1d7d8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d7d90:
    // 0x1d7d90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7d94:
    // 0x1d7d94: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d7d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_1d7d98:
    // 0x1d7d98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7d9c:
    // 0x1d7d9c: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d7d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7da0:
    // 0x1d7da0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d7da0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d7da4:
    // 0x1d7da4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7da8:
    // 0x1d7da8: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d7da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_1d7dac:
    // 0x1d7dac: 0xc05035c  jal         func_140D70
label_1d7db0:
    if (ctx->pc == 0x1D7DB0u) {
        ctx->pc = 0x1D7DB4u;
        goto label_1d7db4;
    }
    ctx->pc = 0x1D7DACu;
    SET_GPR_U32(ctx, 31, 0x1D7DB4u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1D7DACu, 0x1D7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DB4u;
label_1d7db4:
    // 0x1d7db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7db8:
    // 0x1d7db8: 0xc050360  jal         func_140D80
label_1d7dbc:
    if (ctx->pc == 0x1D7DBCu) {
        ctx->pc = 0x1D7DC0u;
        goto label_1d7dc0;
    }
    ctx->pc = 0x1D7DB8u;
    SET_GPR_U32(ctx, 31, 0x1D7DC0u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x1D7DB8u, 0x1D7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DC0u;
label_1d7dc0:
    // 0x1d7dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dc4:
    // 0x1d7dc4: 0xc097444  jal         func_25D110
label_1d7dc8:
    if (ctx->pc == 0x1D7DC8u) {
        ctx->pc = 0x1D7DCCu;
        goto label_1d7dcc;
    }
    ctx->pc = 0x1D7DC4u;
    SET_GPR_U32(ctx, 31, 0x1D7DCCu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x1D7DC4u, 0x1D7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DCCu;
label_1d7dcc:
    // 0x1d7dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dd0:
    // 0x1d7dd0: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x1d7dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1d7dd4:
    // 0x1d7dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7dd8:
    // 0x1d7dd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d7dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d7ddc:
    // 0x1d7ddc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1d7ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1d7de0:
    // 0x1d7de0: 0x320f809  jalr        $t9
label_1d7de4:
    if (ctx->pc == 0x1D7DE4u) {
        ctx->pc = 0x1D7DE8u;
        goto label_1d7de8;
    }
    ctx->pc = 0x1D7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D7DE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DE0u, 0x1D7DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7DE8u;
label_1d7de8:
    // 0x1d7de8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d7dec:
    // 0x1d7dec: 0xc050530  jal         func_1414C0
label_1d7df0:
    if (ctx->pc == 0x1D7DF0u) {
        ctx->pc = 0x1D7DF4u;
        goto label_1d7df4;
    }
    ctx->pc = 0x1D7DECu;
    SET_GPR_U32(ctx, 31, 0x1D7DF4u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1D7DECu, 0x1D7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DF4u;
label_1d7df4:
    // 0x1d7df4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7df8:
    // 0x1d7df8: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1d7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1d7dfc:
    // 0x1d7dfc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d7e00:
    // 0x1d7e00: 0xc085538  jal         func_2154E0
label_1d7e04:
    if (ctx->pc == 0x1D7E04u) {
        ctx->pc = 0x1D7E08u;
        goto label_1d7e08;
    }
    ctx->pc = 0x1D7E00u;
    SET_GPR_U32(ctx, 31, 0x1D7E08u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D7E00u, 0x1D7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E08u;
label_1d7e08:
    // 0x1d7e08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d7e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e0c:
    // 0x1d7e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e10:
    // 0x1d7e10: 0xc0480fc  jal         func_1203F0
label_1d7e14:
    if (ctx->pc == 0x1D7E14u) {
        ctx->pc = 0x1D7E18u;
        goto label_1d7e18;
    }
    ctx->pc = 0x1D7E10u;
    SET_GPR_U32(ctx, 31, 0x1D7E18u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x1D7E10u, 0x1D7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E18u;
label_1d7e18:
    // 0x1d7e18: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1d7e1c:
    // 0x1d7e1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d7e20:
    // 0x1d7e20: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1d7e20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d7e24:
    // 0x1d7e24: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1d7e28:
    if (ctx->pc == 0x1D7E28u) {
        ctx->pc = 0x1D7E2Cu;
        goto label_1d7e2c;
    }
    ctx->pc = 0x1D7E24u;
    {
        const bool branch_taken_0x1d7e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e24) {
            ctx->pc = 0x1D7E44u;
            goto label_1d7e44;
        }
    }
    ctx->pc = 0x1D7E2Cu;
label_1d7e2c:
    // 0x1d7e2c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d7e30:
    // 0x1d7e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7e34:
    // 0x1d7e34: 0x0  nop
    ctx->pc = 0x1d7e34u;
    // NOP
label_1d7e38:
    // 0x1d7e38: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1d7e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1d7e3c:
    // 0x1d7e3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d7e40:
    if (ctx->pc == 0x1D7E40u) {
        ctx->pc = 0x1D7E44u;
        goto label_1d7e44;
    }
    ctx->pc = 0x1D7E3Cu;
    {
        const bool branch_taken_0x1d7e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e3c) {
            ctx->pc = 0x1D7E54u;
            goto label_1d7e54;
        }
    }
    ctx->pc = 0x1D7E44u;
label_1d7e44:
    // 0x1d7e44: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_1d7e48:
    // 0x1d7e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7e4c:
    // 0x1d7e4c: 0x0  nop
    ctx->pc = 0x1d7e4cu;
    // NOP
label_1d7e50:
    // 0x1d7e50: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1d7e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1d7e54:
    // 0x1d7e54: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1d7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7e58:
    // 0x1d7e58: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1d7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1d7e5c:
    // 0x1d7e5c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1d7e60:
    if (ctx->pc == 0x1D7E60u) {
        ctx->pc = 0x1D7E64u;
        goto label_1d7e64;
    }
    ctx->pc = 0x1D7E5Cu;
    {
        const bool branch_taken_0x1d7e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e5c) {
            ctx->pc = 0x1D7E78u;
            goto label_1d7e78;
        }
    }
    ctx->pc = 0x1D7E64u;
label_1d7e64:
    // 0x1d7e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7e68:
    // 0x1d7e68: 0x0  nop
    ctx->pc = 0x1d7e68u;
    // NOP
label_1d7e6c:
    // 0x1d7e6c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1d7e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1d7e70:
    // 0x1d7e70: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d7e74:
    if (ctx->pc == 0x1D7E74u) {
        ctx->pc = 0x1D7E78u;
        goto label_1d7e78;
    }
    ctx->pc = 0x1D7E70u;
    {
        const bool branch_taken_0x1d7e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e70) {
            ctx->pc = 0x1D7E88u;
            goto label_1d7e88;
        }
    }
    ctx->pc = 0x1D7E78u;
label_1d7e78:
    // 0x1d7e78: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1d7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1d7e7c:
    // 0x1d7e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7e80:
    // 0x1d7e80: 0x0  nop
    ctx->pc = 0x1d7e80u;
    // NOP
label_1d7e84:
    // 0x1d7e84: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1d7e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1d7e88:
    // 0x1d7e88: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1d7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7e8c:
    // 0x1d7e8c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1d7e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1d7e90:
    // 0x1d7e90: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1d7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1d7e94:
    // 0x1d7e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7e98:
    // 0x1d7e98: 0x0  nop
    ctx->pc = 0x1d7e98u;
    // NOP
label_1d7e9c:
    // 0x1d7e9c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1d7e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1d7ea0:
    // 0x1d7ea0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d7ea4:
    // 0x1d7ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7ea8:
    // 0x1d7ea8: 0x0  nop
    ctx->pc = 0x1d7ea8u;
    // NOP
label_1d7eac:
    // 0x1d7eac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1d7eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1d7eb0:
    // 0x1d7eb0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d7eb4:
    // 0x1d7eb4: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d7eb8:
    // 0x1d7eb8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1d7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1d7ebc:
    // 0x1d7ebc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d7ec0:
    // 0x1d7ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7ec4:
    // 0x1d7ec4: 0x0  nop
    ctx->pc = 0x1d7ec4u;
    // NOP
label_1d7ec8:
    // 0x1d7ec8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1d7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1d7ecc:
    // 0x1d7ecc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d7ed0:
    // 0x1d7ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7ed4:
    // 0x1d7ed4: 0x0  nop
    ctx->pc = 0x1d7ed4u;
    // NOP
label_1d7ed8:
    // 0x1d7ed8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1d7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1d7edc:
    // 0x1d7edc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d7ee0:
    // 0x1d7ee0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d7ee4:
    // 0x1d7ee4: 0xc050194  jal         func_140650
label_1d7ee8:
    if (ctx->pc == 0x1D7EE8u) {
        ctx->pc = 0x1D7EECu;
        goto label_1d7eec;
    }
    ctx->pc = 0x1D7EE4u;
    SET_GPR_U32(ctx, 31, 0x1D7EECu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1D7EE4u, 0x1D7EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EECu;
label_1d7eec:
    // 0x1d7eec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7ef0:
    // 0x1d7ef0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7ef4:
    // 0x1d7ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7ef8:
    // 0x1d7ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7efc:
    // 0x1d7efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7f00:
    // 0x1d7f00: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d7f04:
    // 0x1d7f04: 0x3e00008  jr          $ra
label_1d7f08:
    if (ctx->pc == 0x1D7F08u) {
        ctx->pc = 0x1D7F0Cu;
        goto label_1d7f0c;
    }
    ctx->pc = 0x1D7F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F0Cu;
label_1d7f0c:
    // 0x1d7f0c: 0x0  nop
    ctx->pc = 0x1d7f0cu;
    // NOP
label_1d7f10:
    // 0x1d7f10: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1d7f14:
    // 0x1d7f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7f18:
    // 0x1d7f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7f1c:
    // 0x1d7f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7f20:
    // 0x1d7f20: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1d7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_1d7f24:
    // 0x1d7f24: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x1d7f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_1d7f28:
    // 0x1d7f28: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d7f2c:
    // 0x1d7f2c: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1d7f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
label_1d7f30:
    // 0x1d7f30: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
label_1d7f34:
    if (ctx->pc == 0x1D7F34u) {
        ctx->pc = 0x1D7F38u;
        goto label_1d7f38;
    }
    ctx->pc = 0x1D7F30u;
    {
        const bool branch_taken_0x1d7f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f30) {
            ctx->pc = 0x1D84B8u;
            goto label_1d84b8;
        }
    }
    ctx->pc = 0x1D7F38u;
label_1d7f38:
    // 0x1d7f38: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d7f3c:
    // 0x1d7f3c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1d7f40:
    // 0x1d7f40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d7f44:
    // 0x1d7f44: 0xc085538  jal         func_2154E0
label_1d7f48:
    if (ctx->pc == 0x1D7F48u) {
        ctx->pc = 0x1D7F4Cu;
        goto label_1d7f4c;
    }
    ctx->pc = 0x1D7F44u;
    SET_GPR_U32(ctx, 31, 0x1D7F4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D7F44u, 0x1D7F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F4Cu;
label_1d7f4c:
    // 0x1d7f4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f50:
    // 0x1d7f50: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d7f54:
    // 0x1d7f54: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1d7f58:
    // 0x1d7f58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d7f5c:
    // 0x1d7f5c: 0xc085538  jal         func_2154E0
label_1d7f60:
    if (ctx->pc == 0x1D7F60u) {
        ctx->pc = 0x1D7F64u;
        goto label_1d7f64;
    }
    ctx->pc = 0x1D7F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F64u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D7F5Cu, 0x1D7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F64u;
label_1d7f64:
    // 0x1d7f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f68:
    // 0x1d7f68: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1d7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1d7f6c:
    // 0x1d7f6c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d7f70:
    // 0x1d7f70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d7f74:
    if (ctx->pc == 0x1D7F74u) {
        ctx->pc = 0x1D7F78u;
        goto label_1d7f78;
    }
    ctx->pc = 0x1D7F70u;
    {
        const bool branch_taken_0x1d7f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f70) {
            ctx->pc = 0x1D7F98u;
            goto label_1d7f98;
        }
    }
    ctx->pc = 0x1D7F78u;
label_1d7f78:
    // 0x1d7f78: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1d7f7c:
    // 0x1d7f7c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d7f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d7f80:
    // 0x1d7f80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d7f84:
    // 0x1d7f84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d7f88:
    // 0x1d7f88: 0x0  nop
    ctx->pc = 0x1d7f88u;
    // NOP
label_1d7f8c:
    // 0x1d7f8c: 0x0  nop
    ctx->pc = 0x1d7f8cu;
    // NOP
label_1d7f90:
    // 0x1d7f90: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d7f94:
    if (ctx->pc == 0x1D7F94u) {
        ctx->pc = 0x1D7F98u;
        goto label_1d7f98;
    }
    ctx->pc = 0x1D7F90u;
    {
        const bool branch_taken_0x1d7f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f90) {
            ctx->pc = 0x1D7F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f7c;
        }
    }
    ctx->pc = 0x1D7F98u;
label_1d7f98:
    // 0x1d7f98: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d7f9c:
    // 0x1d7f9c: 0x90420108  lbu         $v0, 0x108($v0)
    ctx->pc = 0x1d7f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 264)));
label_1d7fa0:
    // 0x1d7fa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d7fa4:
    if (ctx->pc == 0x1D7FA4u) {
        ctx->pc = 0x1D7FA8u;
        goto label_1d7fa8;
    }
    ctx->pc = 0x1D7FA0u;
    {
        const bool branch_taken_0x1d7fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fa0) {
            ctx->pc = 0x1D7FD0u;
            goto label_1d7fd0;
        }
    }
    ctx->pc = 0x1D7FA8u;
label_1d7fa8:
    // 0x1d7fa8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1d7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1d7fac:
    // 0x1d7fac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7fb0:
    // 0x1d7fb0: 0xc090f80  jal         func_243E00
label_1d7fb4:
    if (ctx->pc == 0x1D7FB4u) {
        ctx->pc = 0x1D7FB8u;
        goto label_1d7fb8;
    }
    ctx->pc = 0x1D7FB0u;
    SET_GPR_U32(ctx, 31, 0x1D7FB8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D7FB0u, 0x1D7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FB8u;
label_1d7fb8:
    // 0x1d7fb8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1d7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1d7fbc:
    // 0x1d7fbc: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1d7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1d7fc0:
    // 0x1d7fc0: 0xc041d58  jal         func_107560
label_1d7fc4:
    if (ctx->pc == 0x1D7FC4u) {
        ctx->pc = 0x1D7FC8u;
        goto label_1d7fc8;
    }
    ctx->pc = 0x1D7FC0u;
    SET_GPR_U32(ctx, 31, 0x1D7FC8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D7FC0u, 0x1D7FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC8u;
label_1d7fc8:
    // 0x1d7fc8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d7fcc:
    if (ctx->pc == 0x1D7FCCu) {
        ctx->pc = 0x1D7FD0u;
        goto label_1d7fd0;
    }
    ctx->pc = 0x1D7FC8u;
    {
        const bool branch_taken_0x1d7fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fc8) {
            ctx->pc = 0x1D7FF0u;
            goto label_1d7ff0;
        }
    }
    ctx->pc = 0x1D7FD0u;
label_1d7fd0:
    // 0x1d7fd0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1d7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1d7fd4:
    // 0x1d7fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7fd8:
    // 0x1d7fd8: 0xc090f80  jal         func_243E00
label_1d7fdc:
    if (ctx->pc == 0x1D7FDCu) {
        ctx->pc = 0x1D7FE0u;
        goto label_1d7fe0;
    }
    ctx->pc = 0x1D7FD8u;
    SET_GPR_U32(ctx, 31, 0x1D7FE0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1D7FD8u, 0x1D7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FE0u;
label_1d7fe0:
    // 0x1d7fe0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1d7fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1d7fe4:
    // 0x1d7fe4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1d7fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1d7fe8:
    // 0x1d7fe8: 0xc041d58  jal         func_107560
label_1d7fec:
    if (ctx->pc == 0x1D7FECu) {
        ctx->pc = 0x1D7FF0u;
        goto label_1d7ff0;
    }
    ctx->pc = 0x1D7FE8u;
    SET_GPR_U32(ctx, 31, 0x1D7FF0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1D7FE8u, 0x1D7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FF0u;
label_1d7ff0:
    // 0x1d7ff0: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1d7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7ff4:
    // 0x1d7ff4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_1d7ff8:
    // 0x1d7ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7ffc:
    // 0x1d7ffc: 0x0  nop
    ctx->pc = 0x1d7ffcu;
    // NOP
label_1d8000:
    // 0x1d8000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d8000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d8004:
    // 0x1d8004: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1d8004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1d8008:
    // 0x1d8008: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d800c:
    // 0x1d800c: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1d800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8010:
    // 0x1d8010: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8014:
    // 0x1d8014: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1d8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8018:
    // 0x1d8018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d801c:
    // 0x1d801c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_1d8020:
    if (ctx->pc == 0x1D8020u) {
        ctx->pc = 0x1D8024u;
        goto label_1d8024;
    }
    ctx->pc = 0x1D801Cu;
    {
        const bool branch_taken_0x1d801c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d801c) {
            ctx->pc = 0x1D8090u;
            goto label_1d8090;
        }
    }
    ctx->pc = 0x1D8024u;
label_1d8024:
    // 0x1d8024: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8028:
    // 0x1d8028: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d802c:
    // 0x1d802c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1d802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8030:
    // 0x1d8030: 0xc44000ec  lwc1        $f0, 0xEC($v0)
    ctx->pc = 0x1d8030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8034:
    // 0x1d8034: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d8034u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d8038:
    // 0x1d8038: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d803c:
    // 0x1d803c: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x1d803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8040:
    // 0x1d8040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d8044:
    // 0x1d8044: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1d8048:
    if (ctx->pc == 0x1D8048u) {
        ctx->pc = 0x1D804Cu;
        goto label_1d804c;
    }
    ctx->pc = 0x1D8044u;
    {
        const bool branch_taken_0x1d8044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8044) {
            ctx->pc = 0x1D8090u;
            goto label_1d8090;
        }
    }
    ctx->pc = 0x1D804Cu;
label_1d804c:
    // 0x1d804c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8050:
    // 0x1d8050: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x1d8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8054:
    // 0x1d8054: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d8054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1d8058:
    // 0x1d8058: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d805c:
    // 0x1d805c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1d805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8060:
    // 0x1d8060: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1d8060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1d8064:
    // 0x1d8064: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8068:
    // 0x1d8068: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1d8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d806c:
    // 0x1d806c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1d806cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1d8070:
    // 0x1d8070: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8074:
    // 0x1d8074: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x1d8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8078:
    // 0x1d8078: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1d8078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1d807c:
    // 0x1d807c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8080:
    // 0x1d8080: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x1d8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8084:
    // 0x1d8084: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1d8084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1d8088:
    // 0x1d8088: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d808c:
    if (ctx->pc == 0x1D808Cu) {
        ctx->pc = 0x1D8090u;
        goto label_1d8090;
    }
    ctx->pc = 0x1D8088u;
    {
        const bool branch_taken_0x1d8088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8088) {
            ctx->pc = 0x1D80CCu;
            goto label_1d80cc;
        }
    }
    ctx->pc = 0x1D8090u;
label_1d8090:
    // 0x1d8090: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8094:
    // 0x1d8094: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x1d8094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8098:
    // 0x1d8098: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d8098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1d809c:
    // 0x1d809c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d80a0:
    // 0x1d80a0: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x1d80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d80a4:
    // 0x1d80a4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1d80a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1d80a8:
    // 0x1d80a8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d80ac:
    // 0x1d80ac: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x1d80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d80b0:
    // 0x1d80b0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1d80b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1d80b4:
    // 0x1d80b4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d80b8:
    // 0x1d80b8: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x1d80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d80bc:
    // 0x1d80bc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1d80bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1d80c0:
    // 0x1d80c0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d80c4:
    // 0x1d80c4: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1d80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d80c8:
    // 0x1d80c8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1d80c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1d80cc:
    // 0x1d80cc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d80d0:
    // 0x1d80d0: 0x90420109  lbu         $v0, 0x109($v0)
    ctx->pc = 0x1d80d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 265)));
label_1d80d4:
    // 0x1d80d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d80d8:
    if (ctx->pc == 0x1D80D8u) {
        ctx->pc = 0x1D80DCu;
        goto label_1d80dc;
    }
    ctx->pc = 0x1D80D4u;
    {
        const bool branch_taken_0x1d80d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d80d4) {
            ctx->pc = 0x1D810Cu;
            goto label_1d810c;
        }
    }
    ctx->pc = 0x1D80DCu;
label_1d80dc:
    // 0x1d80dc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d80e0:
    // 0x1d80e0: 0x9042010a  lbu         $v0, 0x10A($v0)
    ctx->pc = 0x1d80e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 266)));
label_1d80e4:
    // 0x1d80e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d80e8:
    if (ctx->pc == 0x1D80E8u) {
        ctx->pc = 0x1D80ECu;
        goto label_1d80ec;
    }
    ctx->pc = 0x1D80E4u;
    {
        const bool branch_taken_0x1d80e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d80e4) {
            ctx->pc = 0x1D810Cu;
            goto label_1d810c;
        }
    }
    ctx->pc = 0x1D80ECu;
label_1d80ec:
    // 0x1d80ec: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d80ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d80f0:
    // 0x1d80f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d80f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d80f4:
    // 0x1d80f4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d80f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1d80f8:
    // 0x1d80f8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d80fc:
    // 0x1d80fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d80fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8100:
    // 0x1d8100: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1d8100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8104:
    // 0x1d8104: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d8104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d8108:
    // 0x1d8108: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1d8108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1d810c:
    // 0x1d810c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d810cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8110:
    // 0x1d8110: 0x0  nop
    ctx->pc = 0x1d8110u;
    // NOP
label_1d8114:
    // 0x1d8114: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1d8114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1d8118:
    // 0x1d8118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d811c:
    // 0x1d811c: 0x0  nop
    ctx->pc = 0x1d811cu;
    // NOP
label_1d8120:
    // 0x1d8120: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1d8120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1d8124:
    // 0x1d8124: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8128:
    // 0x1d8128: 0xc7818340  lwc1        $f1, -0x7CC0($gp)
    ctx->pc = 0x1d8128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d812c:
    // 0x1d812c: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8130:
    // 0x1d8130: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1d8130u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d8134:
    // 0x1d8134: 0xc0c38f0  jal         func_30E3C0
label_1d8138:
    if (ctx->pc == 0x1D8138u) {
        ctx->pc = 0x1D813Cu;
        goto label_1d813c;
    }
    ctx->pc = 0x1D8134u;
    SET_GPR_U32(ctx, 31, 0x1D813Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1D8134u, 0x1D813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D813Cu;
label_1d813c:
    // 0x1d813c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1d813cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1d8140:
    // 0x1d8140: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8144:
    // 0x1d8144: 0xc7818340  lwc1        $f1, -0x7CC0($gp)
    ctx->pc = 0x1d8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8148:
    // 0x1d8148: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d814c:
    // 0x1d814c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1d814cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d8150:
    // 0x1d8150: 0xc0c3966  jal         func_30E598
label_1d8154:
    if (ctx->pc == 0x1D8154u) {
        ctx->pc = 0x1D8158u;
        goto label_1d8158;
    }
    ctx->pc = 0x1D8150u;
    SET_GPR_U32(ctx, 31, 0x1D8158u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1D8150u, 0x1D8158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8158u;
label_1d8158:
    // 0x1d8158: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d8158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1d815c:
    // 0x1d815c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d8160:
    // 0x1d8160: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x1d8160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8164:
    // 0x1d8164: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d8164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d8168:
    // 0x1d8168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d816c:
    // 0x1d816c: 0x0  nop
    ctx->pc = 0x1d816cu;
    // NOP
label_1d8170:
    // 0x1d8170: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d8170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d8174:
    // 0x1d8174: 0xc7808340  lwc1        $f0, -0x7CC0($gp)
    ctx->pc = 0x1d8174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8178:
    // 0x1d8178: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1d8178u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d817c:
    // 0x1d817c: 0xc0c38f0  jal         func_30E3C0
label_1d8180:
    if (ctx->pc == 0x1D8180u) {
        ctx->pc = 0x1D8184u;
        goto label_1d8184;
    }
    ctx->pc = 0x1D817Cu;
    SET_GPR_U32(ctx, 31, 0x1D8184u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1D817Cu, 0x1D8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8184u;
label_1d8184:
    // 0x1d8184: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1d8188:
    // 0x1d8188: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d8188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d818c:
    // 0x1d818c: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x1d818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8190:
    // 0x1d8190: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d8194:
    // 0x1d8194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8198:
    // 0x1d8198: 0x0  nop
    ctx->pc = 0x1d8198u;
    // NOP
label_1d819c:
    // 0x1d819c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d819cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d81a0:
    // 0x1d81a0: 0xc7808340  lwc1        $f0, -0x7CC0($gp)
    ctx->pc = 0x1d81a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d81a4:
    // 0x1d81a4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1d81a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d81a8:
    // 0x1d81a8: 0xc0c3966  jal         func_30E598
label_1d81ac:
    if (ctx->pc == 0x1D81ACu) {
        ctx->pc = 0x1D81B0u;
        goto label_1d81b0;
    }
    ctx->pc = 0x1D81A8u;
    SET_GPR_U32(ctx, 31, 0x1D81B0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1D81A8u, 0x1D81B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D81B0u;
label_1d81b0:
    // 0x1d81b0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1d81b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1d81b4:
    // 0x1d81b4: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d81b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d81b8:
    // 0x1d81b8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1d81b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1d81bc:
    // 0x1d81bc: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1d81bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d81c0:
    // 0x1d81c0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1d81c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1d81c4:
    // 0x1d81c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d81c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d81c8:
    // 0x1d81c8: 0x0  nop
    ctx->pc = 0x1d81c8u;
    // NOP
label_1d81cc:
    // 0x1d81cc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1d81ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1d81d0:
    // 0x1d81d0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d81d4:
    // 0x1d81d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d81d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d81d8:
    // 0x1d81d8: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1d81d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d81dc:
    // 0x1d81dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d81dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d81e0:
    // 0x1d81e0: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1d81e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d81e4:
    // 0x1d81e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d81e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d81e8:
    // 0x1d81e8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d81ec:
    // 0x1d81ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d81ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d81f0:
    // 0x1d81f0: 0x0  nop
    ctx->pc = 0x1d81f0u;
    // NOP
label_1d81f4:
    // 0x1d81f4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1d81f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d81f8:
    // 0x1d81f8: 0x0  nop
    ctx->pc = 0x1d81f8u;
    // NOP
label_1d81fc:
    // 0x1d81fc: 0x0  nop
    ctx->pc = 0x1d81fcu;
    // NOP
label_1d8200:
    // 0x1d8200: 0x0  nop
    ctx->pc = 0x1d8200u;
    // NOP
label_1d8204:
    // 0x1d8204: 0xc0c38f0  jal         func_30E3C0
label_1d8208:
    if (ctx->pc == 0x1D8208u) {
        ctx->pc = 0x1D820Cu;
        goto label_1d820c;
    }
    ctx->pc = 0x1D8204u;
    SET_GPR_U32(ctx, 31, 0x1D820Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1D8204u, 0x1D820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D820Cu;
label_1d820c:
    // 0x1d820c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d8210:
    // 0x1d8210: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d8210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d8214:
    // 0x1d8214: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1d8214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8218:
    // 0x1d8218: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d8218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d821c:
    // 0x1d821c: 0x0  nop
    ctx->pc = 0x1d821cu;
    // NOP
label_1d8220:
    // 0x1d8220: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1d8220u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1d8224:
    // 0x1d8224: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1d8224u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1d8228:
    // 0x1d8228: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d8228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1d822c:
    // 0x1d822c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1d8230:
    // 0x1d8230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8234:
    // 0x1d8234: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1d8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8238:
    // 0x1d8238: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d8238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d823c:
    // 0x1d823c: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1d823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8240:
    // 0x1d8240: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d8240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d8244:
    // 0x1d8244: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d8248:
    // 0x1d8248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d824c:
    // 0x1d824c: 0x0  nop
    ctx->pc = 0x1d824cu;
    // NOP
label_1d8250:
    // 0x1d8250: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1d8250u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d8254:
    // 0x1d8254: 0x0  nop
    ctx->pc = 0x1d8254u;
    // NOP
label_1d8258:
    // 0x1d8258: 0x0  nop
    ctx->pc = 0x1d8258u;
    // NOP
label_1d825c:
    // 0x1d825c: 0x0  nop
    ctx->pc = 0x1d825cu;
    // NOP
label_1d8260:
    // 0x1d8260: 0xc0c3966  jal         func_30E598
label_1d8264:
    if (ctx->pc == 0x1D8264u) {
        ctx->pc = 0x1D8268u;
        goto label_1d8268;
    }
    ctx->pc = 0x1D8260u;
    SET_GPR_U32(ctx, 31, 0x1D8268u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1D8260u, 0x1D8268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8268u;
label_1d8268:
    // 0x1d8268: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d8268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d826c:
    // 0x1d826c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d826cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d8270:
    // 0x1d8270: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1d8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8274:
    // 0x1d8274: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d8274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8278:
    // 0x1d8278: 0x0  nop
    ctx->pc = 0x1d8278u;
    // NOP
label_1d827c:
    // 0x1d827c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1d827cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1d8280:
    // 0x1d8280: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1d8280u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1d8284:
    // 0x1d8284: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1d8284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1d8288:
    // 0x1d8288: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d828c:
    // 0x1d828c: 0x0  nop
    ctx->pc = 0x1d828cu;
    // NOP
label_1d8290:
    // 0x1d8290: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1d8290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1d8294:
    // 0x1d8294: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1d8298:
    // 0x1d8298: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d8298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d829c:
    // 0x1d829c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d82a0:
    if (ctx->pc == 0x1D82A0u) {
        ctx->pc = 0x1D82A4u;
        goto label_1d82a4;
    }
    ctx->pc = 0x1D829Cu;
    {
        const bool branch_taken_0x1d829c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d829c) {
            ctx->pc = 0x1D82C4u;
            goto label_1d82c4;
        }
    }
    ctx->pc = 0x1D82A4u;
label_1d82a4:
    // 0x1d82a4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1d82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1d82a8:
    // 0x1d82a8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d82a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d82ac:
    // 0x1d82ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d82acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d82b0:
    // 0x1d82b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d82b4:
    // 0x1d82b4: 0x0  nop
    ctx->pc = 0x1d82b4u;
    // NOP
label_1d82b8:
    // 0x1d82b8: 0x0  nop
    ctx->pc = 0x1d82b8u;
    // NOP
label_1d82bc:
    // 0x1d82bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d82c0:
    if (ctx->pc == 0x1D82C0u) {
        ctx->pc = 0x1D82C4u;
        goto label_1d82c4;
    }
    ctx->pc = 0x1D82BCu;
    {
        const bool branch_taken_0x1d82bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d82bc) {
            ctx->pc = 0x1D82A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d82a8;
        }
    }
    ctx->pc = 0x1D82C4u;
label_1d82c4:
    // 0x1d82c4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1d82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1d82c8:
    // 0x1d82c8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d82cc:
    // 0x1d82cc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d82d0:
    if (ctx->pc == 0x1D82D0u) {
        ctx->pc = 0x1D82D4u;
        goto label_1d82d4;
    }
    ctx->pc = 0x1D82CCu;
    {
        const bool branch_taken_0x1d82cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d82cc) {
            ctx->pc = 0x1D82F4u;
            goto label_1d82f4;
        }
    }
    ctx->pc = 0x1D82D4u;
label_1d82d4:
    // 0x1d82d4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1d82d8:
    // 0x1d82d8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d82d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d82dc:
    // 0x1d82dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d82e0:
    // 0x1d82e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d82e4:
    // 0x1d82e4: 0x0  nop
    ctx->pc = 0x1d82e4u;
    // NOP
label_1d82e8:
    // 0x1d82e8: 0x0  nop
    ctx->pc = 0x1d82e8u;
    // NOP
label_1d82ec:
    // 0x1d82ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d82f0:
    if (ctx->pc == 0x1D82F0u) {
        ctx->pc = 0x1D82F4u;
        goto label_1d82f4;
    }
    ctx->pc = 0x1D82ECu;
    {
        const bool branch_taken_0x1d82ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d82ec) {
            ctx->pc = 0x1D82D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d82d8;
        }
    }
    ctx->pc = 0x1D82F4u;
label_1d82f4:
    // 0x1d82f4: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x1d82f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d82f8:
    // 0x1d82f8: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1d82f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d82fc:
    // 0x1d82fc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1d82fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8300:
    // 0x1d8300: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8304:
    // 0x1d8304: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d8304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d8308:
    // 0x1d8308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d830c:
    // 0x1d830c: 0x0  nop
    ctx->pc = 0x1d830cu;
    // NOP
label_1d8310:
    // 0x1d8310: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d8310u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d8314:
    // 0x1d8314: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d8314u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d8318:
    // 0x1d8318: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1d8318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1d831c:
    // 0x1d831c: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x1d831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d8320:
    // 0x1d8320: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x1d8320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8324:
    // 0x1d8324: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1d8324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8328:
    // 0x1d8328: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1d8328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d832c:
    // 0x1d832c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d832cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d8330:
    // 0x1d8330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8334:
    // 0x1d8334: 0x0  nop
    ctx->pc = 0x1d8334u;
    // NOP
label_1d8338:
    // 0x1d8338: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d8338u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d833c:
    // 0x1d833c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d833cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d8340:
    // 0x1d8340: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d8340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1d8344:
    // 0x1d8344: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1d8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d8348:
    // 0x1d8348: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1d8348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d834c:
    // 0x1d834c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1d834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8350:
    // 0x1d8350: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d8350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8354:
    // 0x1d8354: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d8354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d8358:
    // 0x1d8358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d835c:
    // 0x1d835c: 0x0  nop
    ctx->pc = 0x1d835cu;
    // NOP
label_1d8360:
    // 0x1d8360: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d8360u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d8364:
    // 0x1d8364: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d8364u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d8368:
    // 0x1d8368: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1d8368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1d836c:
    // 0x1d836c: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1d836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d8370:
    // 0x1d8370: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x1d8370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d8374:
    // 0x1d8374: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1d8374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8378:
    // 0x1d8378: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1d8378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d837c:
    // 0x1d837c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d837cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d8380:
    // 0x1d8380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8384:
    // 0x1d8384: 0x0  nop
    ctx->pc = 0x1d8384u;
    // NOP
label_1d8388:
    // 0x1d8388: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d8388u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1d838c:
    // 0x1d838c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1d838cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1d8390:
    // 0x1d8390: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1d8390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1d8394:
    // 0x1d8394: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1d8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8398:
    // 0x1d8398: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d839c:
    // 0x1d839c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d839cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d83a0:
    // 0x1d83a0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1d83a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1d83a4:
    // 0x1d83a4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1d83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d83a8:
    // 0x1d83a8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1d83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d83ac:
    // 0x1d83ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d83acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d83b0:
    // 0x1d83b0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1d83b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1d83b4:
    // 0x1d83b4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1d83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d83b8:
    // 0x1d83b8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1d83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d83bc:
    // 0x1d83bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d83bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d83c0:
    // 0x1d83c0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d83c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1d83c4:
    // 0x1d83c4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1d83c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d83c8:
    // 0x1d83c8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1d83c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d83cc:
    // 0x1d83cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d83ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d83d0:
    // 0x1d83d0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1d83d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1d83d4:
    // 0x1d83d4: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1d83d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d83d8:
    // 0x1d83d8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1d83d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d83dc:
    // 0x1d83dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d83dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d83e0:
    // 0x1d83e0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1d83e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1d83e4:
    // 0x1d83e4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1d83e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d83e8:
    // 0x1d83e8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1d83e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d83ec:
    // 0x1d83ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d83ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d83f0:
    // 0x1d83f0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1d83f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1d83f4:
    // 0x1d83f4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1d83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d83f8:
    // 0x1d83f8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1d83f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d83fc:
    // 0x1d83fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d83fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d8400:
    // 0x1d8400: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1d8400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1d8404:
    // 0x1d8404: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1d8404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8408:
    // 0x1d8408: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1d8408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d840c:
    // 0x1d840c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d840cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d8410:
    // 0x1d8410: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1d8410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1d8414:
    // 0x1d8414: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1d8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8418:
    // 0x1d8418: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d841c:
    // 0x1d841c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d841cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d8420:
    // 0x1d8420: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1d8420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1d8424:
    // 0x1d8424: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1d8424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d8428:
    // 0x1d8428: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x1d8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d842c:
    // 0x1d842c: 0xc0c39d6  jal         func_30E758
label_1d8430:
    if (ctx->pc == 0x1D8430u) {
        ctx->pc = 0x1D8434u;
        goto label_1d8434;
    }
    ctx->pc = 0x1D842Cu;
    SET_GPR_U32(ctx, 31, 0x1D8434u);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x1D842Cu, 0x1D8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8434u;
label_1d8434:
    // 0x1d8434: 0xc7818344  lwc1        $f1, -0x7CBC($gp)
    ctx->pc = 0x1d8434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d8438:
    // 0x1d8438: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d843c:
    // 0x1d843c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1d843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1d8440:
    // 0x1d8440: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d8444:
    // 0x1d8444: 0xc050530  jal         func_1414C0
label_1d8448:
    if (ctx->pc == 0x1D8448u) {
        ctx->pc = 0x1D844Cu;
        goto label_1d844c;
    }
    ctx->pc = 0x1D8444u;
    SET_GPR_U32(ctx, 31, 0x1D844Cu);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1D8444u, 0x1D844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D844Cu;
label_1d844c:
    // 0x1d844c: 0xc05035c  jal         func_140D70
label_1d8450:
    if (ctx->pc == 0x1D8450u) {
        ctx->pc = 0x1D8454u;
        goto label_1d8454;
    }
    ctx->pc = 0x1D844Cu;
    SET_GPR_U32(ctx, 31, 0x1D8454u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1D844Cu, 0x1D8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8454u;
label_1d8454:
    // 0x1d8454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8458:
    // 0x1d8458: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d8458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d845c:
    // 0x1d845c: 0xc050240  jal         func_140900
label_1d8460:
    if (ctx->pc == 0x1D8460u) {
        ctx->pc = 0x1D8464u;
        goto label_1d8464;
    }
    ctx->pc = 0x1D845Cu;
    SET_GPR_U32(ctx, 31, 0x1D8464u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x1D845Cu, 0x1D8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8464u;
label_1d8464:
    // 0x1d8464: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1d8464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8468:
    // 0x1d8468: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d8468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1d846c:
    // 0x1d846c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1d846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8470:
    // 0x1d8470: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1d8470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1d8474:
    // 0x1d8474: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1d8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d8478:
    // 0x1d8478: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1d8478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1d847c:
    // 0x1d847c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1d847cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1d8480:
    // 0x1d8480: 0xc05035c  jal         func_140D70
label_1d8484:
    if (ctx->pc == 0x1D8484u) {
        ctx->pc = 0x1D8488u;
        goto label_1d8488;
    }
    ctx->pc = 0x1D8480u;
    SET_GPR_U32(ctx, 31, 0x1D8488u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1D8480u, 0x1D8488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8488u;
label_1d8488:
    // 0x1d8488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d848c:
    // 0x1d848c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d8490:
    // 0x1d8490: 0xc050194  jal         func_140650
label_1d8494:
    if (ctx->pc == 0x1D8494u) {
        ctx->pc = 0x1D8498u;
        goto label_1d8498;
    }
    ctx->pc = 0x1D8490u;
    SET_GPR_U32(ctx, 31, 0x1D8498u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1D8490u, 0x1D8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8498u;
label_1d8498:
    // 0x1d8498: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1d8498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d849c:
    // 0x1d849c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1d849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1d84a0:
    // 0x1d84a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d84a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d84a4:
    // 0x1d84a4: 0xc106598  jal         func_419660
label_1d84a8:
    if (ctx->pc == 0x1D84A8u) {
        ctx->pc = 0x1D84ACu;
        goto label_1d84ac;
    }
    ctx->pc = 0x1D84A4u;
    SET_GPR_U32(ctx, 31, 0x1D84ACu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1D84A4u, 0x1D84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84ACu;
label_1d84ac:
    // 0x1d84ac: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1d84acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d84b0:
    // 0x1d84b0: 0xc106794  jal         func_419E50
label_1d84b4:
    if (ctx->pc == 0x1D84B4u) {
        ctx->pc = 0x1D84B8u;
        goto label_1d84b8;
    }
    ctx->pc = 0x1D84B0u;
    SET_GPR_U32(ctx, 31, 0x1D84B8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1D84B0u, 0x1D84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D84B8u;
label_1d84b8:
    // 0x1d84b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d84bc:
    // 0x1d84bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d84bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d84c0:
    // 0x1d84c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d84c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d84c4:
    // 0x1d84c4: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x1d84c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1d84c8:
    // 0x1d84c8: 0x3e00008  jr          $ra
label_1d84cc:
    if (ctx->pc == 0x1D84CCu) {
        ctx->pc = 0x1D84D0u;
        goto label_1d84d0;
    }
    ctx->pc = 0x1D84C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D84C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D84D0u;
label_1d84d0:
    // 0x1d84d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d84d4:
    // 0x1d84d4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1d84d8:
    // 0x1d84d8: 0x24427e10  addiu       $v0, $v0, 0x7E10
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32272));
label_1d84dc:
    // 0x1d84dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d84e0:
    // 0x1d84e0: 0x3e00008  jr          $ra
label_1d84e4:
    if (ctx->pc == 0x1D84E4u) {
        ctx->pc = 0x1D84E8u;
        goto label_1d84e8;
    }
    ctx->pc = 0x1D84E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D84E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D84E8u;
label_1d84e8:
    // 0x1d84e8: 0x0  nop
    ctx->pc = 0x1d84e8u;
    // NOP
label_1d84ec:
    // 0x1d84ec: 0x0  nop
    ctx->pc = 0x1d84ecu;
    // NOP
label_1d84f0:
    // 0x1d84f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d84f4:
    // 0x1d84f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d84f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d84f8:
    // 0x1d84f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d84fc:
    // 0x1d84fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d8500:
    // 0x1d8500: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1d8500u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d8504:
    // 0x1d8504: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1d8504u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d8508:
    // 0x1d8508: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d850c:
    // 0x1d850c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1d850cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1d8510:
    // 0x1d8510: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8514:
    // 0x1d8514: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1d8518:
    if (ctx->pc == 0x1D8518u) {
        ctx->pc = 0x1D851Cu;
        goto label_1d851c;
    }
    ctx->pc = 0x1D8514u;
    {
        const bool branch_taken_0x1d8514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8514) {
            ctx->pc = 0x1D8564u;
            goto label_1d8564;
        }
    }
    ctx->pc = 0x1D851Cu;
label_1d851c:
    // 0x1d851c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d8520:
    // 0x1d8520: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1d8524:
    if (ctx->pc == 0x1D8524u) {
        ctx->pc = 0x1D8528u;
        goto label_1d8528;
    }
    ctx->pc = 0x1D8520u;
    {
        const bool branch_taken_0x1d8520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8520) {
            ctx->pc = 0x1D8550u;
            goto label_1d8550;
        }
    }
    ctx->pc = 0x1D8528u;
label_1d8528:
    // 0x1d8528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d852c:
    // 0x1d852c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d8530:
    if (ctx->pc == 0x1D8530u) {
        ctx->pc = 0x1D8534u;
        goto label_1d8534;
    }
    ctx->pc = 0x1D852Cu;
    {
        const bool branch_taken_0x1d852c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d852c) {
            ctx->pc = 0x1D853Cu;
            goto label_1d853c;
        }
    }
    ctx->pc = 0x1D8534u;
label_1d8534:
    // 0x1d8534: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d8538:
    if (ctx->pc == 0x1D8538u) {
        ctx->pc = 0x1D853Cu;
        goto label_1d853c;
    }
    ctx->pc = 0x1D8534u;
    {
        const bool branch_taken_0x1d8534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8534) {
            ctx->pc = 0x1D8570u;
            goto label_1d8570;
        }
    }
    ctx->pc = 0x1D853Cu;
label_1d853c:
    // 0x1d853c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d8540:
    // 0x1d8540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8544:
    // 0x1d8544: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d8544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d8548:
    // 0x1d8548: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d854c:
    if (ctx->pc == 0x1D854Cu) {
        ctx->pc = 0x1D8550u;
        goto label_1d8550;
    }
    ctx->pc = 0x1D8548u;
    {
        const bool branch_taken_0x1d8548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8548) {
            ctx->pc = 0x1D8570u;
            goto label_1d8570;
        }
    }
    ctx->pc = 0x1D8550u;
label_1d8550:
    // 0x1d8550: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1d8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d8554:
    // 0x1d8554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8558:
    // 0x1d8558: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d8558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d855c:
    // 0x1d855c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d8560:
    if (ctx->pc == 0x1D8560u) {
        ctx->pc = 0x1D8564u;
        goto label_1d8564;
    }
    ctx->pc = 0x1D855Cu;
    {
        const bool branch_taken_0x1d855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d855c) {
            ctx->pc = 0x1D8570u;
            goto label_1d8570;
        }
    }
    ctx->pc = 0x1D8564u;
label_1d8564:
    // 0x1d8564: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d8564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d8568:
    // 0x1d8568: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d856c:
    // 0x1d856c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d856cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d8570:
    // 0x1d8570: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8574:
    // 0x1d8574: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d8574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8578:
    // 0x1d8578: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d8578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d857c:
    // 0x1d857c: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1d857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8580:
    // 0x1d8580: 0xc064e90  jal         func_193A40
label_1d8584:
    if (ctx->pc == 0x1D8584u) {
        ctx->pc = 0x1D8588u;
        goto label_1d8588;
    }
    ctx->pc = 0x1D8580u;
    SET_GPR_U32(ctx, 31, 0x1D8588u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x1D8580u, 0x1D8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8588u;
label_1d8588:
    // 0x1d8588: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1d8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d858c:
    // 0x1d858c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8590:
    // 0x1d8590: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x1d8590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_1d8594:
    // 0x1d8594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8598:
    // 0x1d8598: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d8598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d859c:
    // 0x1d859c: 0x3e00008  jr          $ra
label_1d85a0:
    if (ctx->pc == 0x1D85A0u) {
        ctx->pc = 0x1D85A4u;
        goto label_1d85a4;
    }
    ctx->pc = 0x1D859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D85A4u;
label_1d85a4:
    // 0x1d85a4: 0x0  nop
    ctx->pc = 0x1d85a4u;
    // NOP
label_1d85a8:
    // 0x1d85a8: 0x0  nop
    ctx->pc = 0x1d85a8u;
    // NOP
label_1d85ac:
    // 0x1d85ac: 0x0  nop
    ctx->pc = 0x1d85acu;
    // NOP
label_1d85b0:
    // 0x1d85b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d85b4:
    // 0x1d85b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d85b8:
    // 0x1d85b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d85b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d85bc:
    // 0x1d85bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d85bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d85c0:
    // 0x1d85c0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1d85c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d85c4:
    // 0x1d85c4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1d85c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d85c8:
    // 0x1d85c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d85cc:
    // 0x1d85cc: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1d85d0:
    // 0x1d85d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d85d4:
    // 0x1d85d4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1d85d8:
    if (ctx->pc == 0x1D85D8u) {
        ctx->pc = 0x1D85DCu;
        goto label_1d85dc;
    }
    ctx->pc = 0x1D85D4u;
    {
        const bool branch_taken_0x1d85d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d85d4) {
            ctx->pc = 0x1D8624u;
            goto label_1d8624;
        }
    }
    ctx->pc = 0x1D85DCu;
label_1d85dc:
    // 0x1d85dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d85e0:
    // 0x1d85e0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1d85e4:
    if (ctx->pc == 0x1D85E4u) {
        ctx->pc = 0x1D85E8u;
        goto label_1d85e8;
    }
    ctx->pc = 0x1D85E0u;
    {
        const bool branch_taken_0x1d85e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d85e0) {
            ctx->pc = 0x1D8610u;
            goto label_1d8610;
        }
    }
    ctx->pc = 0x1D85E8u;
label_1d85e8:
    // 0x1d85e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d85ec:
    // 0x1d85ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d85f0:
    if (ctx->pc == 0x1D85F0u) {
        ctx->pc = 0x1D85F4u;
        goto label_1d85f4;
    }
    ctx->pc = 0x1D85ECu;
    {
        const bool branch_taken_0x1d85ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d85ec) {
            ctx->pc = 0x1D85FCu;
            goto label_1d85fc;
        }
    }
    ctx->pc = 0x1D85F4u;
label_1d85f4:
    // 0x1d85f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d85f8:
    if (ctx->pc == 0x1D85F8u) {
        ctx->pc = 0x1D85FCu;
        goto label_1d85fc;
    }
    ctx->pc = 0x1D85F4u;
    {
        const bool branch_taken_0x1d85f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d85f4) {
            ctx->pc = 0x1D8630u;
            goto label_1d8630;
        }
    }
    ctx->pc = 0x1D85FCu;
label_1d85fc:
    // 0x1d85fc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d8600:
    // 0x1d8600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8604:
    // 0x1d8604: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d8604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d8608:
    // 0x1d8608: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d860c:
    if (ctx->pc == 0x1D860Cu) {
        ctx->pc = 0x1D8610u;
        goto label_1d8610;
    }
    ctx->pc = 0x1D8608u;
    {
        const bool branch_taken_0x1d8608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8608) {
            ctx->pc = 0x1D8630u;
            goto label_1d8630;
        }
    }
    ctx->pc = 0x1D8610u;
label_1d8610:
    // 0x1d8610: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1d8610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d8614:
    // 0x1d8614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8618:
    // 0x1d8618: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d8618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d861c:
    // 0x1d861c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d8620:
    if (ctx->pc == 0x1D8620u) {
        ctx->pc = 0x1D8624u;
        goto label_1d8624;
    }
    ctx->pc = 0x1D861Cu;
    {
        const bool branch_taken_0x1d861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d861c) {
            ctx->pc = 0x1D8630u;
            goto label_1d8630;
        }
    }
    ctx->pc = 0x1D8624u;
label_1d8624:
    // 0x1d8624: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d8628:
    // 0x1d8628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d862c:
    // 0x1d862c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d862cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d8630:
    // 0x1d8630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8634:
    // 0x1d8634: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d8634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8638:
    // 0x1d8638: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d8638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d863c:
    // 0x1d863c: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1d863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8640:
    // 0x1d8640: 0xc064f2c  jal         func_193CB0
label_1d8644:
    if (ctx->pc == 0x1D8644u) {
        ctx->pc = 0x1D8648u;
        goto label_1d8648;
    }
    ctx->pc = 0x1D8640u;
    SET_GPR_U32(ctx, 31, 0x1D8648u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x1D8640u, 0x1D8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8648u;
label_1d8648:
    // 0x1d8648: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1d8648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d864c:
    // 0x1d864c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8650:
    // 0x1d8650: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x1d8650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_1d8654:
    // 0x1d8654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8658:
    // 0x1d8658: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d865c:
    // 0x1d865c: 0x3e00008  jr          $ra
label_1d8660:
    if (ctx->pc == 0x1D8660u) {
        ctx->pc = 0x1D8664u;
        goto label_1d8664;
    }
    ctx->pc = 0x1D865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8664u;
label_1d8664:
    // 0x1d8664: 0x0  nop
    ctx->pc = 0x1d8664u;
    // NOP
label_1d8668:
    // 0x1d8668: 0x0  nop
    ctx->pc = 0x1d8668u;
    // NOP
label_1d866c:
    // 0x1d866c: 0x0  nop
    ctx->pc = 0x1d866cu;
    // NOP
label_1d8670:
    // 0x1d8670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d8670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d8674:
    // 0x1d8674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8678:
    // 0x1d8678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d8678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d867c:
    // 0x1d867c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d867cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d8680:
    // 0x1d8680: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1d8680u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d8684:
    // 0x1d8684: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1d8684u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d8688:
    // 0x1d8688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d868c:
    // 0x1d868c: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1d868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1d8690:
    // 0x1d8690: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8694:
    // 0x1d8694: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1d8698:
    if (ctx->pc == 0x1D8698u) {
        ctx->pc = 0x1D869Cu;
        goto label_1d869c;
    }
    ctx->pc = 0x1D8694u;
    {
        const bool branch_taken_0x1d8694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8694) {
            ctx->pc = 0x1D86E4u;
            goto label_1d86e4;
        }
    }
    ctx->pc = 0x1D869Cu;
label_1d869c:
    // 0x1d869c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d86a0:
    // 0x1d86a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1d86a4:
    if (ctx->pc == 0x1D86A4u) {
        ctx->pc = 0x1D86A8u;
        goto label_1d86a8;
    }
    ctx->pc = 0x1D86A0u;
    {
        const bool branch_taken_0x1d86a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d86a0) {
            ctx->pc = 0x1D86D0u;
            goto label_1d86d0;
        }
    }
    ctx->pc = 0x1D86A8u;
label_1d86a8:
    // 0x1d86a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d86ac:
    // 0x1d86ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d86b0:
    if (ctx->pc == 0x1D86B0u) {
        ctx->pc = 0x1D86B4u;
        goto label_1d86b4;
    }
    ctx->pc = 0x1D86ACu;
    {
        const bool branch_taken_0x1d86ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d86ac) {
            ctx->pc = 0x1D86BCu;
            goto label_1d86bc;
        }
    }
    ctx->pc = 0x1D86B4u;
label_1d86b4:
    // 0x1d86b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d86b8:
    if (ctx->pc == 0x1D86B8u) {
        ctx->pc = 0x1D86BCu;
        goto label_1d86bc;
    }
    ctx->pc = 0x1D86B4u;
    {
        const bool branch_taken_0x1d86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d86b4) {
            ctx->pc = 0x1D86F0u;
            goto label_1d86f0;
        }
    }
    ctx->pc = 0x1D86BCu;
label_1d86bc:
    // 0x1d86bc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1d86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d86c0:
    // 0x1d86c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d86c4:
    // 0x1d86c4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d86c8:
    // 0x1d86c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d86cc:
    if (ctx->pc == 0x1D86CCu) {
        ctx->pc = 0x1D86D0u;
        goto label_1d86d0;
    }
    ctx->pc = 0x1D86C8u;
    {
        const bool branch_taken_0x1d86c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d86c8) {
            ctx->pc = 0x1D86F0u;
            goto label_1d86f0;
        }
    }
    ctx->pc = 0x1D86D0u;
label_1d86d0:
    // 0x1d86d0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d86d4:
    // 0x1d86d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d86d8:
    // 0x1d86d8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d86dc:
    // 0x1d86dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d86e0:
    if (ctx->pc == 0x1D86E0u) {
        ctx->pc = 0x1D86E4u;
        goto label_1d86e4;
    }
    ctx->pc = 0x1D86DCu;
    {
        const bool branch_taken_0x1d86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d86dc) {
            ctx->pc = 0x1D86F0u;
            goto label_1d86f0;
        }
    }
    ctx->pc = 0x1D86E4u;
label_1d86e4:
    // 0x1d86e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d86e8:
    // 0x1d86e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d86ec:
    // 0x1d86ec: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1d86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_1d86f0:
    // 0x1d86f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d86f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d86f4:
    // 0x1d86f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d86f8:
    // 0x1d86f8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d86f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d86fc:
    // 0x1d86fc: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1d86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d8700:
    // 0x1d8700: 0xc064ff8  jal         func_193FE0
label_1d8704:
    if (ctx->pc == 0x1D8704u) {
        ctx->pc = 0x1D8708u;
        goto label_1d8708;
    }
    ctx->pc = 0x1D8700u;
    SET_GPR_U32(ctx, 31, 0x1D8708u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x1D8700u, 0x1D8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8708u;
label_1d8708:
    // 0x1d8708: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1d8708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d870c:
    // 0x1d870c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8710:
    // 0x1d8710: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x1d8710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_1d8714:
    // 0x1d8714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8718:
    // 0x1d8718: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d8718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d871c:
    // 0x1d871c: 0x3e00008  jr          $ra
label_1d8720:
    if (ctx->pc == 0x1D8720u) {
        ctx->pc = 0x1D8724u;
        goto label_1d8724;
    }
    ctx->pc = 0x1D871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D871Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8724u;
label_1d8724:
    // 0x1d8724: 0x0  nop
    ctx->pc = 0x1d8724u;
    // NOP
label_1d8728:
    // 0x1d8728: 0x0  nop
    ctx->pc = 0x1d8728u;
    // NOP
label_1d872c:
    // 0x1d872c: 0x0  nop
    ctx->pc = 0x1d872cu;
    // NOP
label_1d8730:
    // 0x1d8730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d8734:
    // 0x1d8734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8738:
    // 0x1d8738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d8738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d873c:
    // 0x1d873c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d8740:
    // 0x1d8740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d8740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8744:
    // 0x1d8744: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d8744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8748:
    // 0x1d8748: 0xc0650f0  jal         func_1943C0
label_1d874c:
    if (ctx->pc == 0x1D874Cu) {
        ctx->pc = 0x1D8750u;
        goto label_1d8750;
    }
    ctx->pc = 0x1D8748u;
    SET_GPR_U32(ctx, 31, 0x1D8750u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x1D8748u, 0x1D8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8750u;
label_1d8750:
    // 0x1d8750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8754:
    // 0x1d8754: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d8758:
    // 0x1d8758: 0x3e00008  jr          $ra
label_1d875c:
    if (ctx->pc == 0x1D875Cu) {
        ctx->pc = 0x1D8760u;
        goto label_1d8760;
    }
    ctx->pc = 0x1D8758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8760u;
label_1d8760:
    // 0x1d8760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d8764:
    // 0x1d8764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8768:
    // 0x1d8768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d8768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d876c:
    // 0x1d876c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1d8770:
    // 0x1d8770: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d8770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8774:
    // 0x1d8774: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d8774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8778:
    // 0x1d8778: 0xc0650f4  jal         func_1943D0
label_1d877c:
    if (ctx->pc == 0x1D877Cu) {
        ctx->pc = 0x1D8780u;
        goto label_1d8780;
    }
    ctx->pc = 0x1D8778u;
    SET_GPR_U32(ctx, 31, 0x1D8780u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x1D8778u, 0x1D8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8780u;
label_1d8780:
    // 0x1d8780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8784:
    // 0x1d8784: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d8784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d8788:
    // 0x1d8788: 0x3e00008  jr          $ra
label_1d878c:
    if (ctx->pc == 0x1D878Cu) {
        ctx->pc = 0x1D8790u;
        goto label_1d8790;
    }
    ctx->pc = 0x1D8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8790u;
label_1d8790:
    // 0x1d8790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1d8794:
    // 0x1d8794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d8798:
    // 0x1d8798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d879c:
    // 0x1d879c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d87a0:
    // 0x1d87a0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1d87a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_1d87a4:
    // 0x1d87a4: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x1d87a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
label_1d87a8:
    // 0x1d87a8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1d87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
label_1d87ac:
    // 0x1d87ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1d87acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d87b0:
    // 0x1d87b0: 0x93a50060  lbu         $a1, 0x60($sp)
    ctx->pc = 0x1d87b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_1d87b4:
    // 0x1d87b4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1d87b8:
    // 0x1d87b8: 0xc064a4c  jal         func_192930
label_1d87bc:
    if (ctx->pc == 0x1D87BCu) {
        ctx->pc = 0x1D87C0u;
        goto label_1d87c0;
    }
    ctx->pc = 0x1D87B8u;
    SET_GPR_U32(ctx, 31, 0x1D87C0u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1D87B8u, 0x1D87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87C0u;
label_1d87c0:
    // 0x1d87c0: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x1d87c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
label_1d87c4:
    // 0x1d87c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d87c8:
    if (ctx->pc == 0x1D87C8u) {
        ctx->pc = 0x1D87CCu;
        goto label_1d87cc;
    }
    ctx->pc = 0x1D87C4u;
    {
        const bool branch_taken_0x1d87c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d87c4) {
            ctx->pc = 0x1D8828u;
            goto label_1d8828;
        }
    }
    ctx->pc = 0x1D87CCu;
label_1d87cc:
    // 0x1d87cc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1d87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1d87d0:
    // 0x1d87d0: 0xc050ed8  jal         func_143B60
label_1d87d4:
    if (ctx->pc == 0x1D87D4u) {
        ctx->pc = 0x1D87D8u;
        goto label_1d87d8;
    }
    ctx->pc = 0x1D87D0u;
    SET_GPR_U32(ctx, 31, 0x1D87D8u);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x1D87D0u, 0x1D87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87D8u;
label_1d87d8:
    // 0x1d87d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d87d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d87dc:
    // 0x1d87dc: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_1d87e0:
    if (ctx->pc == 0x1D87E0u) {
        ctx->pc = 0x1D87E4u;
        goto label_1d87e4;
    }
    ctx->pc = 0x1D87DCu;
    {
        const bool branch_taken_0x1d87dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d87dc) {
            ctx->pc = 0x1D88ACu;
            goto label_1d88ac;
        }
    }
    ctx->pc = 0x1D87E4u;
label_1d87e4:
    // 0x1d87e4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d87e8:
    // 0x1d87e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d87ec:
    // 0x1d87ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d87f0:
    // 0x1d87f0: 0x24a57e40  addiu       $a1, $a1, 0x7E40
    ctx->pc = 0x1d87f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32320));
label_1d87f4:
    // 0x1d87f4: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x1d87f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1d87f8:
    // 0x1d87f8: 0xc0bc3e2  jal         func_2F0F88
label_1d87fc:
    if (ctx->pc == 0x1D87FCu) {
        ctx->pc = 0x1D8800u;
        goto label_1d8800;
    }
    ctx->pc = 0x1D87F8u;
    SET_GPR_U32(ctx, 31, 0x1D8800u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1D87F8u, 0x1D8800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8800u;
label_1d8800:
    // 0x1d8800: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d8800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d8804:
    // 0x1d8804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8808:
    // 0x1d8808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d880c:
    // 0x1d880c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d8810:
    // 0x1d8810: 0xc049b6c  jal         func_126DB0
label_1d8814:
    if (ctx->pc == 0x1D8814u) {
        ctx->pc = 0x1D8818u;
        goto label_1d8818;
    }
    ctx->pc = 0x1D8810u;
    SET_GPR_U32(ctx, 31, 0x1D8818u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x1D8810u, 0x1D8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8818u;
label_1d8818:
    // 0x1d8818: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d881c:
    // 0x1d881c: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1d881cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
label_1d8820:
    // 0x1d8820: 0x10000022  b           . + 4 + (0x22 << 2)
label_1d8824:
    if (ctx->pc == 0x1D8824u) {
        ctx->pc = 0x1D8828u;
        goto label_1d8828;
    }
    ctx->pc = 0x1D8820u;
    {
        const bool branch_taken_0x1d8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8820) {
            ctx->pc = 0x1D88ACu;
            goto label_1d88ac;
        }
    }
    ctx->pc = 0x1D8828u;
label_1d8828:
    // 0x1d8828: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d882c:
    // 0x1d882c: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x1d882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1d8830:
    // 0x1d8830: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d8834:
    if (ctx->pc == 0x1D8834u) {
        ctx->pc = 0x1D8838u;
        goto label_1d8838;
    }
    ctx->pc = 0x1D8830u;
    {
        const bool branch_taken_0x1d8830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8830) {
            ctx->pc = 0x1D8850u;
            goto label_1d8850;
        }
    }
    ctx->pc = 0x1D8838u;
label_1d8838:
    // 0x1d8838: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d883c:
    // 0x1d883c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d8840:
    // 0x1d8840: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x1d8840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1d8844:
    // 0x1d8844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8848:
    // 0x1d8848: 0xc08f71c  jal         func_23DC70
label_1d884c:
    if (ctx->pc == 0x1D884Cu) {
        ctx->pc = 0x1D8850u;
        goto label_1d8850;
    }
    ctx->pc = 0x1D8848u;
    SET_GPR_U32(ctx, 31, 0x1D8850u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x1D8848u, 0x1D8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8850u;
label_1d8850:
    // 0x1d8850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d8850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8854:
    // 0x1d8854: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d8858:
    // 0x1d8858: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1d8858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1d885c:
    // 0x1d885c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d8860:
    // 0x1d8860: 0xc085538  jal         func_2154E0
label_1d8864:
    if (ctx->pc == 0x1D8864u) {
        ctx->pc = 0x1D8868u;
        goto label_1d8868;
    }
    ctx->pc = 0x1D8860u;
    SET_GPR_U32(ctx, 31, 0x1D8868u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D8860u, 0x1D8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8868u;
label_1d8868:
    // 0x1d8868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d886c:
    // 0x1d886c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1d8870:
    if (ctx->pc == 0x1D8870u) {
        ctx->pc = 0x1D8874u;
        goto label_1d8874;
    }
    ctx->pc = 0x1D886Cu;
    {
        const bool branch_taken_0x1d886c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d886c) {
            ctx->pc = 0x1D8880u;
            goto label_1d8880;
        }
    }
    ctx->pc = 0x1D8874u;
label_1d8874:
    // 0x1d8874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8878:
    // 0x1d8878: 0xc09c5e0  jal         func_271780
label_1d887c:
    if (ctx->pc == 0x1D887Cu) {
        ctx->pc = 0x1D8880u;
        goto label_1d8880;
    }
    ctx->pc = 0x1D8878u;
    SET_GPR_U32(ctx, 31, 0x1D8880u);
    ctx->pc = 0x271780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271780u, 0x1D8878u, 0x1D8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8880u;
label_1d8880:
    // 0x1d8880: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1d8884:
    // 0x1d8884: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1d8888:
    // 0x1d8888: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d8888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d888c:
    // 0x1d888c: 0xc085538  jal         func_2154E0
label_1d8890:
    if (ctx->pc == 0x1D8890u) {
        ctx->pc = 0x1D8894u;
        goto label_1d8894;
    }
    ctx->pc = 0x1D888Cu;
    SET_GPR_U32(ctx, 31, 0x1D8894u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D888Cu, 0x1D8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8894u;
label_1d8894:
    // 0x1d8894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d8898:
    // 0x1d8898: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1d889c:
    if (ctx->pc == 0x1D889Cu) {
        ctx->pc = 0x1D88A0u;
        goto label_1d88a0;
    }
    ctx->pc = 0x1D8898u;
    {
        const bool branch_taken_0x1d8898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8898) {
            ctx->pc = 0x1D88ACu;
            goto label_1d88ac;
        }
    }
    ctx->pc = 0x1D88A0u;
label_1d88a0:
    // 0x1d88a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d88a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d88a4:
    // 0x1d88a4: 0xc09c5e0  jal         func_271780
label_1d88a8:
    if (ctx->pc == 0x1D88A8u) {
        ctx->pc = 0x1D88ACu;
        goto label_1d88ac;
    }
    ctx->pc = 0x1D88A4u;
    SET_GPR_U32(ctx, 31, 0x1D88ACu);
    ctx->pc = 0x271780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271780u, 0x1D88A4u, 0x1D88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88ACu;
label_1d88ac:
    // 0x1d88ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d88acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d88b0:
    // 0x1d88b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d88b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d88b4:
    // 0x1d88b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d88b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d88b8:
    // 0x1d88b8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d88bc:
    // 0x1d88bc: 0x3e00008  jr          $ra
label_1d88c0:
    if (ctx->pc == 0x1D88C0u) {
        ctx->pc = 0x1D88C4u;
        goto label_1d88c4;
    }
    ctx->pc = 0x1D88BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D88BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D88C4u;
label_1d88c4:
    // 0x1d88c4: 0x0  nop
    ctx->pc = 0x1d88c4u;
    // NOP
label_1d88c8:
    // 0x1d88c8: 0x0  nop
    ctx->pc = 0x1d88c8u;
    // NOP
label_1d88cc:
    // 0x1d88cc: 0x0  nop
    ctx->pc = 0x1d88ccu;
    // NOP
label_1d88d0:
    // 0x1d88d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d88d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d88d4:
    // 0x1d88d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d88d8:
    // 0x1d88d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d88dc:
    // 0x1d88dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d88e0:
    // 0x1d88e0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1d88e4:
    // 0x1d88e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d88e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d88e8:
    // 0x1d88e8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_1d88ec:
    if (ctx->pc == 0x1D88ECu) {
        ctx->pc = 0x1D88F0u;
        goto label_1d88f0;
    }
    ctx->pc = 0x1D88E8u;
    {
        const bool branch_taken_0x1d88e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d88e8) {
            ctx->pc = 0x1D8940u;
            goto label_1d8940;
        }
    }
    ctx->pc = 0x1D88F0u;
label_1d88f0:
    // 0x1d88f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d88f4:
    // 0x1d88f4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1d88f8:
    if (ctx->pc == 0x1D88F8u) {
        ctx->pc = 0x1D88FCu;
        goto label_1d88fc;
    }
    ctx->pc = 0x1D88F4u;
    {
        const bool branch_taken_0x1d88f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d88f4) {
            ctx->pc = 0x1D8928u;
            goto label_1d8928;
        }
    }
    ctx->pc = 0x1D88FCu;
label_1d88fc:
    // 0x1d88fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8900:
    // 0x1d8900: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1d8904:
    if (ctx->pc == 0x1D8904u) {
        ctx->pc = 0x1D8908u;
        goto label_1d8908;
    }
    ctx->pc = 0x1D8900u;
    {
        const bool branch_taken_0x1d8900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d8900) {
            ctx->pc = 0x1D8910u;
            goto label_1d8910;
        }
    }
    ctx->pc = 0x1D8908u;
label_1d8908:
    // 0x1d8908: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d890c:
    if (ctx->pc == 0x1D890Cu) {
        ctx->pc = 0x1D8910u;
        goto label_1d8910;
    }
    ctx->pc = 0x1D8908u;
    {
        const bool branch_taken_0x1d8908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8908) {
            ctx->pc = 0x1D8950u;
            goto label_1d8950;
        }
    }
    ctx->pc = 0x1D8910u;
label_1d8910:
    // 0x1d8910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8914:
    // 0x1d8914: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d8918:
    // 0x1d8918: 0xc076cb0  jal         func_1DB2C0
label_1d891c:
    if (ctx->pc == 0x1D891Cu) {
        ctx->pc = 0x1D8920u;
        goto label_1d8920;
    }
    ctx->pc = 0x1D8918u;
    SET_GPR_U32(ctx, 31, 0x1D8920u);
    ctx->pc = 0x1DB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB2C0u, 0x1D8918u, 0x1D8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8920u;
label_1d8920:
    // 0x1d8920: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d8924:
    if (ctx->pc == 0x1D8924u) {
        ctx->pc = 0x1D8928u;
        goto label_1d8928;
    }
    ctx->pc = 0x1D8920u;
    {
        const bool branch_taken_0x1d8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8920) {
            ctx->pc = 0x1D8950u;
            goto label_1d8950;
        }
    }
    ctx->pc = 0x1D8928u;
label_1d8928:
    // 0x1d8928: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d892c:
    // 0x1d892c: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d8930:
    // 0x1d8930: 0xc07766c  jal         func_1DD9B0
label_1d8934:
    if (ctx->pc == 0x1D8934u) {
        ctx->pc = 0x1D8938u;
        goto label_1d8938;
    }
    ctx->pc = 0x1D8930u;
    SET_GPR_U32(ctx, 31, 0x1D8938u);
    ctx->pc = 0x1DD9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9B0u, 0x1D8930u, 0x1D8938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8938u;
label_1d8938:
    // 0x1d8938: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d893c:
    if (ctx->pc == 0x1D893Cu) {
        ctx->pc = 0x1D8940u;
        goto label_1d8940;
    }
    ctx->pc = 0x1D8938u;
    {
        const bool branch_taken_0x1d8938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8938) {
            ctx->pc = 0x1D8950u;
            goto label_1d8950;
        }
    }
    ctx->pc = 0x1D8940u;
label_1d8940:
    // 0x1d8940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8944:
    // 0x1d8944: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d8948:
    // 0x1d8948: 0xc078eb8  jal         func_1E3AE0
label_1d894c:
    if (ctx->pc == 0x1D894Cu) {
        ctx->pc = 0x1D8950u;
        goto label_1d8950;
    }
    ctx->pc = 0x1D8948u;
    SET_GPR_U32(ctx, 31, 0x1D8950u);
    ctx->pc = 0x1E3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3AE0u, 0x1D8948u, 0x1D8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8950u;
label_1d8950:
    // 0x1d8950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8954:
    // 0x1d8954: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d8958:
    // 0x1d8958: 0x3e00008  jr          $ra
label_1d895c:
    if (ctx->pc == 0x1D895Cu) {
        ctx->pc = 0x1D8960u;
        goto label_1d8960;
    }
    ctx->pc = 0x1D8958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8960u;
label_1d8960:
    // 0x1d8960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d8960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d8964:
    // 0x1d8964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d8964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d8968:
    // 0x1d8968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d896c:
    // 0x1d896c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d896cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d8970:
    // 0x1d8970: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d8970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1d8974:
    // 0x1d8974: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1d8978:
    // 0x1d8978: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d897c:
    // 0x1d897c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1d8980:
    if (ctx->pc == 0x1D8980u) {
        ctx->pc = 0x1D8984u;
        goto label_1d8984;
    }
    ctx->pc = 0x1D897Cu;
    {
        const bool branch_taken_0x1d897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d897c) {
            ctx->pc = 0x1D89CCu;
            goto label_1d89cc;
        }
    }
    ctx->pc = 0x1D8984u;
label_1d8984:
    // 0x1d8984: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1d8984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d8988:
    // 0x1d8988: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d898c:
    // 0x1d898c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d8990:
    // 0x1d8990: 0xc085538  jal         func_2154E0
label_1d8994:
    if (ctx->pc == 0x1D8994u) {
        ctx->pc = 0x1D8998u;
        goto label_1d8998;
    }
    ctx->pc = 0x1D8990u;
    SET_GPR_U32(ctx, 31, 0x1D8998u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D8990u, 0x1D8998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8998u;
label_1d8998:
    // 0x1d8998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d899c:
    // 0x1d899c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1d89a0:
    if (ctx->pc == 0x1D89A0u) {
        ctx->pc = 0x1D89A4u;
        goto label_1d89a4;
    }
    ctx->pc = 0x1D899Cu;
    {
        const bool branch_taken_0x1d899c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d899c) {
            ctx->pc = 0x1D89CCu;
            goto label_1d89cc;
        }
    }
    ctx->pc = 0x1D89A4u;
label_1d89a4:
    // 0x1d89a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d89a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d89a8:
    // 0x1d89a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d89a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d89ac:
    // 0x1d89ac: 0xc040aa8  jal         func_102AA0
label_1d89b0:
    if (ctx->pc == 0x1D89B0u) {
        ctx->pc = 0x1D89B4u;
        goto label_1d89b4;
    }
    ctx->pc = 0x1D89ACu;
    SET_GPR_U32(ctx, 31, 0x1D89B4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1D89ACu, 0x1D89B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89B4u;
label_1d89b4:
    // 0x1d89b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d89b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d89b8:
    // 0x1d89b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d89bc:
    // 0x1d89bc: 0xc040a90  jal         func_102A40
label_1d89c0:
    if (ctx->pc == 0x1D89C0u) {
        ctx->pc = 0x1D89C4u;
        goto label_1d89c4;
    }
    ctx->pc = 0x1D89BCu;
    SET_GPR_U32(ctx, 31, 0x1D89C4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1D89BCu, 0x1D89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89C4u;
label_1d89c4:
    // 0x1d89c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d89c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d89c8:
    // 0x1d89c8: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x1d89c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d89cc:
    // 0x1d89cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d89ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d89d0:
    // 0x1d89d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d89d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d89d4:
    // 0x1d89d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d89d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d89d8:
    // 0x1d89d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d89d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d89dc:
    // 0x1d89dc: 0x3e00008  jr          $ra
label_1d89e0:
    if (ctx->pc == 0x1D89E0u) {
        ctx->pc = 0x1D89E4u;
        goto label_1d89e4;
    }
    ctx->pc = 0x1D89DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D89E4u;
label_1d89e4:
    // 0x1d89e4: 0x0  nop
    ctx->pc = 0x1d89e4u;
    // NOP
label_1d89e8:
    // 0x1d89e8: 0x0  nop
    ctx->pc = 0x1d89e8u;
    // NOP
label_1d89ec:
    // 0x1d89ec: 0x0  nop
    ctx->pc = 0x1d89ecu;
    // NOP
    ctx->pc = 0x1d89f0u;
}
