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

// Function: sub_002B1BF0
// Address: 0x2b1bf0 - 0x2b2160
void sub_002B1BF0_0x2b1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1BF0_0x2b1bf0");
#endif

    switch (ctx->pc) {
        case 0x2b1bf0u: goto label_2b1bf0;
        case 0x2b1bf4u: goto label_2b1bf4;
        case 0x2b1bf8u: goto label_2b1bf8;
        case 0x2b1bfcu: goto label_2b1bfc;
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c04u: goto label_2b1c04;
        case 0x2b1c08u: goto label_2b1c08;
        case 0x2b1c0cu: goto label_2b1c0c;
        case 0x2b1c10u: goto label_2b1c10;
        case 0x2b1c14u: goto label_2b1c14;
        case 0x2b1c18u: goto label_2b1c18;
        case 0x2b1c1cu: goto label_2b1c1c;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c2cu: goto label_2b1c2c;
        case 0x2b1c30u: goto label_2b1c30;
        case 0x2b1c34u: goto label_2b1c34;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c40u: goto label_2b1c40;
        case 0x2b1c44u: goto label_2b1c44;
        case 0x2b1c48u: goto label_2b1c48;
        case 0x2b1c4cu: goto label_2b1c4c;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c58u: goto label_2b1c58;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c60u: goto label_2b1c60;
        case 0x2b1c64u: goto label_2b1c64;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c6cu: goto label_2b1c6c;
        case 0x2b1c70u: goto label_2b1c70;
        case 0x2b1c74u: goto label_2b1c74;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1c7cu: goto label_2b1c7c;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1c88u: goto label_2b1c88;
        case 0x2b1c8cu: goto label_2b1c8c;
        case 0x2b1c90u: goto label_2b1c90;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1c98u: goto label_2b1c98;
        case 0x2b1c9cu: goto label_2b1c9c;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1ca4u: goto label_2b1ca4;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cb0u: goto label_2b1cb0;
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1cbcu: goto label_2b1cbc;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1cc4u: goto label_2b1cc4;
        case 0x2b1cc8u: goto label_2b1cc8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cd0u: goto label_2b1cd0;
        case 0x2b1cd4u: goto label_2b1cd4;
        case 0x2b1cd8u: goto label_2b1cd8;
        case 0x2b1cdcu: goto label_2b1cdc;
        case 0x2b1ce0u: goto label_2b1ce0;
        case 0x2b1ce4u: goto label_2b1ce4;
        case 0x2b1ce8u: goto label_2b1ce8;
        case 0x2b1cecu: goto label_2b1cec;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf4u: goto label_2b1cf4;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1cfcu: goto label_2b1cfc;
        case 0x2b1d00u: goto label_2b1d00;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d08u: goto label_2b1d08;
        case 0x2b1d0cu: goto label_2b1d0c;
        case 0x2b1d10u: goto label_2b1d10;
        case 0x2b1d14u: goto label_2b1d14;
        case 0x2b1d18u: goto label_2b1d18;
        case 0x2b1d1cu: goto label_2b1d1c;
        case 0x2b1d20u: goto label_2b1d20;
        case 0x2b1d24u: goto label_2b1d24;
        case 0x2b1d28u: goto label_2b1d28;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d30u: goto label_2b1d30;
        case 0x2b1d34u: goto label_2b1d34;
        case 0x2b1d38u: goto label_2b1d38;
        case 0x2b1d3cu: goto label_2b1d3c;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d44u: goto label_2b1d44;
        case 0x2b1d48u: goto label_2b1d48;
        case 0x2b1d4cu: goto label_2b1d4c;
        case 0x2b1d50u: goto label_2b1d50;
        case 0x2b1d54u: goto label_2b1d54;
        case 0x2b1d58u: goto label_2b1d58;
        case 0x2b1d5cu: goto label_2b1d5c;
        case 0x2b1d60u: goto label_2b1d60;
        case 0x2b1d64u: goto label_2b1d64;
        case 0x2b1d68u: goto label_2b1d68;
        case 0x2b1d6cu: goto label_2b1d6c;
        case 0x2b1d70u: goto label_2b1d70;
        case 0x2b1d74u: goto label_2b1d74;
        case 0x2b1d78u: goto label_2b1d78;
        case 0x2b1d7cu: goto label_2b1d7c;
        case 0x2b1d80u: goto label_2b1d80;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1d88u: goto label_2b1d88;
        case 0x2b1d8cu: goto label_2b1d8c;
        case 0x2b1d90u: goto label_2b1d90;
        case 0x2b1d94u: goto label_2b1d94;
        case 0x2b1d98u: goto label_2b1d98;
        case 0x2b1d9cu: goto label_2b1d9c;
        case 0x2b1da0u: goto label_2b1da0;
        case 0x2b1da4u: goto label_2b1da4;
        case 0x2b1da8u: goto label_2b1da8;
        case 0x2b1dacu: goto label_2b1dac;
        case 0x2b1db0u: goto label_2b1db0;
        case 0x2b1db4u: goto label_2b1db4;
        case 0x2b1db8u: goto label_2b1db8;
        case 0x2b1dbcu: goto label_2b1dbc;
        case 0x2b1dc0u: goto label_2b1dc0;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1dc8u: goto label_2b1dc8;
        case 0x2b1dccu: goto label_2b1dcc;
        case 0x2b1dd0u: goto label_2b1dd0;
        case 0x2b1dd4u: goto label_2b1dd4;
        case 0x2b1dd8u: goto label_2b1dd8;
        case 0x2b1ddcu: goto label_2b1ddc;
        case 0x2b1de0u: goto label_2b1de0;
        case 0x2b1de4u: goto label_2b1de4;
        case 0x2b1de8u: goto label_2b1de8;
        case 0x2b1decu: goto label_2b1dec;
        case 0x2b1df0u: goto label_2b1df0;
        case 0x2b1df4u: goto label_2b1df4;
        case 0x2b1df8u: goto label_2b1df8;
        case 0x2b1dfcu: goto label_2b1dfc;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e04u: goto label_2b1e04;
        case 0x2b1e08u: goto label_2b1e08;
        case 0x2b1e0cu: goto label_2b1e0c;
        case 0x2b1e10u: goto label_2b1e10;
        case 0x2b1e14u: goto label_2b1e14;
        case 0x2b1e18u: goto label_2b1e18;
        case 0x2b1e1cu: goto label_2b1e1c;
        case 0x2b1e20u: goto label_2b1e20;
        case 0x2b1e24u: goto label_2b1e24;
        case 0x2b1e28u: goto label_2b1e28;
        case 0x2b1e2cu: goto label_2b1e2c;
        case 0x2b1e30u: goto label_2b1e30;
        case 0x2b1e34u: goto label_2b1e34;
        case 0x2b1e38u: goto label_2b1e38;
        case 0x2b1e3cu: goto label_2b1e3c;
        case 0x2b1e40u: goto label_2b1e40;
        case 0x2b1e44u: goto label_2b1e44;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e4cu: goto label_2b1e4c;
        case 0x2b1e50u: goto label_2b1e50;
        case 0x2b1e54u: goto label_2b1e54;
        case 0x2b1e58u: goto label_2b1e58;
        case 0x2b1e5cu: goto label_2b1e5c;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e64u: goto label_2b1e64;
        case 0x2b1e68u: goto label_2b1e68;
        case 0x2b1e6cu: goto label_2b1e6c;
        case 0x2b1e70u: goto label_2b1e70;
        case 0x2b1e74u: goto label_2b1e74;
        case 0x2b1e78u: goto label_2b1e78;
        case 0x2b1e7cu: goto label_2b1e7c;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1e84u: goto label_2b1e84;
        case 0x2b1e88u: goto label_2b1e88;
        case 0x2b1e8cu: goto label_2b1e8c;
        case 0x2b1e90u: goto label_2b1e90;
        case 0x2b1e94u: goto label_2b1e94;
        case 0x2b1e98u: goto label_2b1e98;
        case 0x2b1e9cu: goto label_2b1e9c;
        case 0x2b1ea0u: goto label_2b1ea0;
        case 0x2b1ea4u: goto label_2b1ea4;
        case 0x2b1ea8u: goto label_2b1ea8;
        case 0x2b1eacu: goto label_2b1eac;
        case 0x2b1eb0u: goto label_2b1eb0;
        case 0x2b1eb4u: goto label_2b1eb4;
        case 0x2b1eb8u: goto label_2b1eb8;
        case 0x2b1ebcu: goto label_2b1ebc;
        case 0x2b1ec0u: goto label_2b1ec0;
        case 0x2b1ec4u: goto label_2b1ec4;
        case 0x2b1ec8u: goto label_2b1ec8;
        case 0x2b1eccu: goto label_2b1ecc;
        case 0x2b1ed0u: goto label_2b1ed0;
        case 0x2b1ed4u: goto label_2b1ed4;
        case 0x2b1ed8u: goto label_2b1ed8;
        case 0x2b1edcu: goto label_2b1edc;
        case 0x2b1ee0u: goto label_2b1ee0;
        case 0x2b1ee4u: goto label_2b1ee4;
        case 0x2b1ee8u: goto label_2b1ee8;
        case 0x2b1eecu: goto label_2b1eec;
        case 0x2b1ef0u: goto label_2b1ef0;
        case 0x2b1ef4u: goto label_2b1ef4;
        case 0x2b1ef8u: goto label_2b1ef8;
        case 0x2b1efcu: goto label_2b1efc;
        case 0x2b1f00u: goto label_2b1f00;
        case 0x2b1f04u: goto label_2b1f04;
        case 0x2b1f08u: goto label_2b1f08;
        case 0x2b1f0cu: goto label_2b1f0c;
        case 0x2b1f10u: goto label_2b1f10;
        case 0x2b1f14u: goto label_2b1f14;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f1cu: goto label_2b1f1c;
        case 0x2b1f20u: goto label_2b1f20;
        case 0x2b1f24u: goto label_2b1f24;
        case 0x2b1f28u: goto label_2b1f28;
        case 0x2b1f2cu: goto label_2b1f2c;
        case 0x2b1f30u: goto label_2b1f30;
        case 0x2b1f34u: goto label_2b1f34;
        case 0x2b1f38u: goto label_2b1f38;
        case 0x2b1f3cu: goto label_2b1f3c;
        case 0x2b1f40u: goto label_2b1f40;
        case 0x2b1f44u: goto label_2b1f44;
        case 0x2b1f48u: goto label_2b1f48;
        case 0x2b1f4cu: goto label_2b1f4c;
        case 0x2b1f50u: goto label_2b1f50;
        case 0x2b1f54u: goto label_2b1f54;
        case 0x2b1f58u: goto label_2b1f58;
        case 0x2b1f5cu: goto label_2b1f5c;
        case 0x2b1f60u: goto label_2b1f60;
        case 0x2b1f64u: goto label_2b1f64;
        case 0x2b1f68u: goto label_2b1f68;
        case 0x2b1f6cu: goto label_2b1f6c;
        case 0x2b1f70u: goto label_2b1f70;
        case 0x2b1f74u: goto label_2b1f74;
        case 0x2b1f78u: goto label_2b1f78;
        case 0x2b1f7cu: goto label_2b1f7c;
        case 0x2b1f80u: goto label_2b1f80;
        case 0x2b1f84u: goto label_2b1f84;
        case 0x2b1f88u: goto label_2b1f88;
        case 0x2b1f8cu: goto label_2b1f8c;
        case 0x2b1f90u: goto label_2b1f90;
        case 0x2b1f94u: goto label_2b1f94;
        case 0x2b1f98u: goto label_2b1f98;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1fa0u: goto label_2b1fa0;
        case 0x2b1fa4u: goto label_2b1fa4;
        case 0x2b1fa8u: goto label_2b1fa8;
        case 0x2b1facu: goto label_2b1fac;
        case 0x2b1fb0u: goto label_2b1fb0;
        case 0x2b1fb4u: goto label_2b1fb4;
        case 0x2b1fb8u: goto label_2b1fb8;
        case 0x2b1fbcu: goto label_2b1fbc;
        case 0x2b1fc0u: goto label_2b1fc0;
        case 0x2b1fc4u: goto label_2b1fc4;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fccu: goto label_2b1fcc;
        case 0x2b1fd0u: goto label_2b1fd0;
        case 0x2b1fd4u: goto label_2b1fd4;
        case 0x2b1fd8u: goto label_2b1fd8;
        case 0x2b1fdcu: goto label_2b1fdc;
        case 0x2b1fe0u: goto label_2b1fe0;
        case 0x2b1fe4u: goto label_2b1fe4;
        case 0x2b1fe8u: goto label_2b1fe8;
        case 0x2b1fecu: goto label_2b1fec;
        case 0x2b1ff0u: goto label_2b1ff0;
        case 0x2b1ff4u: goto label_2b1ff4;
        case 0x2b1ff8u: goto label_2b1ff8;
        case 0x2b1ffcu: goto label_2b1ffc;
        case 0x2b2000u: goto label_2b2000;
        case 0x2b2004u: goto label_2b2004;
        case 0x2b2008u: goto label_2b2008;
        case 0x2b200cu: goto label_2b200c;
        case 0x2b2010u: goto label_2b2010;
        case 0x2b2014u: goto label_2b2014;
        case 0x2b2018u: goto label_2b2018;
        case 0x2b201cu: goto label_2b201c;
        case 0x2b2020u: goto label_2b2020;
        case 0x2b2024u: goto label_2b2024;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b202cu: goto label_2b202c;
        case 0x2b2030u: goto label_2b2030;
        case 0x2b2034u: goto label_2b2034;
        case 0x2b2038u: goto label_2b2038;
        case 0x2b203cu: goto label_2b203c;
        case 0x2b2040u: goto label_2b2040;
        case 0x2b2044u: goto label_2b2044;
        case 0x2b2048u: goto label_2b2048;
        case 0x2b204cu: goto label_2b204c;
        case 0x2b2050u: goto label_2b2050;
        case 0x2b2054u: goto label_2b2054;
        case 0x2b2058u: goto label_2b2058;
        case 0x2b205cu: goto label_2b205c;
        case 0x2b2060u: goto label_2b2060;
        case 0x2b2064u: goto label_2b2064;
        case 0x2b2068u: goto label_2b2068;
        case 0x2b206cu: goto label_2b206c;
        case 0x2b2070u: goto label_2b2070;
        case 0x2b2074u: goto label_2b2074;
        case 0x2b2078u: goto label_2b2078;
        case 0x2b207cu: goto label_2b207c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b2088u: goto label_2b2088;
        case 0x2b208cu: goto label_2b208c;
        case 0x2b2090u: goto label_2b2090;
        case 0x2b2094u: goto label_2b2094;
        case 0x2b2098u: goto label_2b2098;
        case 0x2b209cu: goto label_2b209c;
        case 0x2b20a0u: goto label_2b20a0;
        case 0x2b20a4u: goto label_2b20a4;
        case 0x2b20a8u: goto label_2b20a8;
        case 0x2b20acu: goto label_2b20ac;
        case 0x2b20b0u: goto label_2b20b0;
        case 0x2b20b4u: goto label_2b20b4;
        case 0x2b20b8u: goto label_2b20b8;
        case 0x2b20bcu: goto label_2b20bc;
        case 0x2b20c0u: goto label_2b20c0;
        case 0x2b20c4u: goto label_2b20c4;
        case 0x2b20c8u: goto label_2b20c8;
        case 0x2b20ccu: goto label_2b20cc;
        case 0x2b20d0u: goto label_2b20d0;
        case 0x2b20d4u: goto label_2b20d4;
        case 0x2b20d8u: goto label_2b20d8;
        case 0x2b20dcu: goto label_2b20dc;
        case 0x2b20e0u: goto label_2b20e0;
        case 0x2b20e4u: goto label_2b20e4;
        case 0x2b20e8u: goto label_2b20e8;
        case 0x2b20ecu: goto label_2b20ec;
        case 0x2b20f0u: goto label_2b20f0;
        case 0x2b20f4u: goto label_2b20f4;
        case 0x2b20f8u: goto label_2b20f8;
        case 0x2b20fcu: goto label_2b20fc;
        case 0x2b2100u: goto label_2b2100;
        case 0x2b2104u: goto label_2b2104;
        case 0x2b2108u: goto label_2b2108;
        case 0x2b210cu: goto label_2b210c;
        case 0x2b2110u: goto label_2b2110;
        case 0x2b2114u: goto label_2b2114;
        case 0x2b2118u: goto label_2b2118;
        case 0x2b211cu: goto label_2b211c;
        case 0x2b2120u: goto label_2b2120;
        case 0x2b2124u: goto label_2b2124;
        case 0x2b2128u: goto label_2b2128;
        case 0x2b212cu: goto label_2b212c;
        case 0x2b2130u: goto label_2b2130;
        case 0x2b2134u: goto label_2b2134;
        case 0x2b2138u: goto label_2b2138;
        case 0x2b213cu: goto label_2b213c;
        case 0x2b2140u: goto label_2b2140;
        case 0x2b2144u: goto label_2b2144;
        case 0x2b2148u: goto label_2b2148;
        case 0x2b214cu: goto label_2b214c;
        case 0x2b2150u: goto label_2b2150;
        case 0x2b2154u: goto label_2b2154;
        case 0x2b2158u: goto label_2b2158;
        case 0x2b215cu: goto label_2b215c;
        default: break;
    }

    ctx->pc = 0x2b1bf0u;

label_2b1bf0:
    // 0x2b1bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b1bf4:
    // 0x2b1bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b1bf8:
    // 0x2b1bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b1bfc:
    // 0x2b1bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1c00:
    // 0x2b1c00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b1c04:
    // 0x2b1c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1c08:
    // 0x2b1c08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2b1c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2b1c0c:
    // 0x2b1c0c: 0x320f809  jalr        $t9
label_2b1c10:
    if (ctx->pc == 0x2B1C10u) {
        ctx->pc = 0x2B1C14u;
        goto label_2b1c14;
    }
    ctx->pc = 0x2B1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C0Cu, 0x2B1C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1C14u;
label_2b1c14:
    // 0x2b1c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1c18:
    // 0x2b1c18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b1c1c:
    // 0x2b1c1c: 0x3e00008  jr          $ra
label_2b1c20:
    if (ctx->pc == 0x2B1C20u) {
        ctx->pc = 0x2B1C24u;
        goto label_2b1c24;
    }
    ctx->pc = 0x2B1C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1C24u;
label_2b1c24:
    // 0x2b1c24: 0x0  nop
    ctx->pc = 0x2b1c24u;
    // NOP
label_2b1c28:
    // 0x2b1c28: 0x0  nop
    ctx->pc = 0x2b1c28u;
    // NOP
label_2b1c2c:
    // 0x2b1c2c: 0x0  nop
    ctx->pc = 0x2b1c2cu;
    // NOP
label_2b1c30:
    // 0x2b1c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1c34:
    // 0x2b1c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b1c38:
    // 0x2b1c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1c3c:
    // 0x2b1c3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b1c40:
    // 0x2b1c40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1c44:
    // 0x2b1c44: 0xc0852ac  jal         func_214AB0
label_2b1c48:
    if (ctx->pc == 0x2B1C48u) {
        ctx->pc = 0x2B1C4Cu;
        goto label_2b1c4c;
    }
    ctx->pc = 0x2B1C44u;
    SET_GPR_U32(ctx, 31, 0x2B1C4Cu);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x2B1C44u, 0x2B1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C4Cu;
label_2b1c4c:
    // 0x2b1c4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b1c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1c50:
    // 0x2b1c50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1c54:
    // 0x2b1c54: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1c58:
    // 0x2b1c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1c5c:
    // 0x2b1c5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2b1c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2b1c60:
    // 0x2b1c60: 0x320f809  jalr        $t9
label_2b1c64:
    if (ctx->pc == 0x2B1C64u) {
        ctx->pc = 0x2B1C68u;
        goto label_2b1c68;
    }
    ctx->pc = 0x2B1C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1C68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C60u, 0x2B1C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1C68u;
label_2b1c68:
    // 0x2b1c68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b1c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1c6c:
    // 0x2b1c6c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2b1c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2b1c70:
    // 0x2b1c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b1c74:
    // 0x2b1c74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1c78:
    // 0x2b1c78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1c7c:
    // 0x2b1c7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1c80:
    // 0x2b1c80: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b1c80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1c84:
    // 0x2b1c84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1c88:
    // 0x2b1c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1c8c:
    // 0x2b1c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1c90:
    // 0x2b1c90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b1c94:
    // 0x2b1c94: 0x3e00008  jr          $ra
label_2b1c98:
    if (ctx->pc == 0x2B1C98u) {
        ctx->pc = 0x2B1C9Cu;
        goto label_2b1c9c;
    }
    ctx->pc = 0x2B1C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1C9Cu;
label_2b1c9c:
    // 0x2b1c9c: 0x0  nop
    ctx->pc = 0x2b1c9cu;
    // NOP
label_2b1ca0:
    // 0x2b1ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1ca4:
    // 0x2b1ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b1ca8:
    // 0x2b1ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1cac:
    // 0x2b1cac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b1cb0:
    // 0x2b1cb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1cb4:
    // 0x2b1cb4: 0xc0852c4  jal         func_214B10
label_2b1cb8:
    if (ctx->pc == 0x2B1CB8u) {
        ctx->pc = 0x2B1CBCu;
        goto label_2b1cbc;
    }
    ctx->pc = 0x2B1CB4u;
    SET_GPR_U32(ctx, 31, 0x2B1CBCu);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x2B1CB4u, 0x2B1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1CBCu;
label_2b1cbc:
    // 0x2b1cbc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b1cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1cc0:
    // 0x2b1cc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1cc4:
    // 0x2b1cc4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1cc8:
    // 0x2b1cc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1ccc:
    // 0x2b1ccc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2b1cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2b1cd0:
    // 0x2b1cd0: 0x320f809  jalr        $t9
label_2b1cd4:
    if (ctx->pc == 0x2B1CD4u) {
        ctx->pc = 0x2B1CD8u;
        goto label_2b1cd8;
    }
    ctx->pc = 0x2B1CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1CD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1CD0u, 0x2B1CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1CD8u;
label_2b1cd8:
    // 0x2b1cd8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b1cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1cdc:
    // 0x2b1cdc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2b1cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2b1ce0:
    // 0x2b1ce0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b1ce4:
    // 0x2b1ce4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1ce8:
    // 0x2b1ce8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1cec:
    // 0x2b1cec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1cf0:
    // 0x2b1cf0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b1cf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1cf4:
    // 0x2b1cf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1cf8:
    // 0x2b1cf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1cfc:
    // 0x2b1cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1d00:
    // 0x2b1d00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b1d04:
    // 0x2b1d04: 0x3e00008  jr          $ra
label_2b1d08:
    if (ctx->pc == 0x2B1D08u) {
        ctx->pc = 0x2B1D0Cu;
        goto label_2b1d0c;
    }
    ctx->pc = 0x2B1D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1D0Cu;
label_2b1d0c:
    // 0x2b1d0c: 0x0  nop
    ctx->pc = 0x2b1d0cu;
    // NOP
label_2b1d10:
    // 0x2b1d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1d14:
    // 0x2b1d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b1d18:
    // 0x2b1d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1d1c:
    // 0x2b1d1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b1d20:
    // 0x2b1d20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1d24:
    // 0x2b1d24: 0xc0852d0  jal         func_214B40
label_2b1d28:
    if (ctx->pc == 0x2B1D28u) {
        ctx->pc = 0x2B1D2Cu;
        goto label_2b1d2c;
    }
    ctx->pc = 0x2B1D24u;
    SET_GPR_U32(ctx, 31, 0x2B1D2Cu);
    ctx->pc = 0x214B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B40u, 0x2B1D24u, 0x2B1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D2Cu;
label_2b1d2c:
    // 0x2b1d2c: 0xc08ef50  jal         func_23BD40
label_2b1d30:
    if (ctx->pc == 0x2B1D30u) {
        ctx->pc = 0x2B1D34u;
        goto label_2b1d34;
    }
    ctx->pc = 0x2B1D2Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D34u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2B1D2Cu, 0x2B1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D34u;
label_2b1d34:
    // 0x2b1d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d38:
    // 0x2b1d38: 0x10100025  beq         $zero, $s0, . + 4 + (0x25 << 2)
label_2b1d3c:
    if (ctx->pc == 0x2B1D3Cu) {
        ctx->pc = 0x2B1D40u;
        goto label_2b1d40;
    }
    ctx->pc = 0x2B1D38u;
    {
        const bool branch_taken_0x2b1d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b1d38) {
            ctx->pc = 0x2B1DD0u;
            goto label_2b1dd0;
        }
    }
    ctx->pc = 0x2B1D40u;
label_2b1d40:
    // 0x2b1d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1d44:
    // 0x2b1d44: 0xc0406f0  jal         func_101BC0
label_2b1d48:
    if (ctx->pc == 0x2B1D48u) {
        ctx->pc = 0x2B1D4Cu;
        goto label_2b1d4c;
    }
    ctx->pc = 0x2B1D44u;
    SET_GPR_U32(ctx, 31, 0x2B1D4Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2B1D44u, 0x2B1D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D4Cu;
label_2b1d4c:
    // 0x2b1d4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b1d50:
    // 0x2b1d50: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_2b1d54:
    if (ctx->pc == 0x2B1D54u) {
        ctx->pc = 0x2B1D58u;
        goto label_2b1d58;
    }
    ctx->pc = 0x2B1D50u;
    {
        const bool branch_taken_0x2b1d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1d50) {
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D58u;
label_2b1d58:
    // 0x2b1d58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1d5c:
    // 0x2b1d5c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_2b1d60:
    if (ctx->pc == 0x2B1D60u) {
        ctx->pc = 0x2B1D64u;
        goto label_2b1d64;
    }
    ctx->pc = 0x2B1D5Cu;
    {
        const bool branch_taken_0x2b1d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1d5c) {
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D64u;
label_2b1d64:
    // 0x2b1d64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1d68:
    // 0x2b1d68: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_2b1d6c:
    if (ctx->pc == 0x2B1D6Cu) {
        ctx->pc = 0x2B1D70u;
        goto label_2b1d70;
    }
    ctx->pc = 0x2B1D68u;
    {
        const bool branch_taken_0x2b1d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1d68) {
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D70u;
label_2b1d70:
    // 0x2b1d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b1d74:
    // 0x2b1d74: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2b1d78:
    if (ctx->pc == 0x2B1D78u) {
        ctx->pc = 0x2B1D7Cu;
        goto label_2b1d7c;
    }
    ctx->pc = 0x2B1D74u;
    {
        const bool branch_taken_0x2b1d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b1d74) {
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D7Cu;
label_2b1d7c:
    // 0x2b1d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b1d80:
    if (ctx->pc == 0x2B1D80u) {
        ctx->pc = 0x2B1D84u;
        goto label_2b1d84;
    }
    ctx->pc = 0x2B1D7Cu;
    {
        const bool branch_taken_0x2b1d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d7c) {
            ctx->pc = 0x2B1D8Cu;
            goto label_2b1d8c;
        }
    }
    ctx->pc = 0x2B1D84u;
label_2b1d84:
    // 0x2b1d84: 0x10000012  b           . + 4 + (0x12 << 2)
label_2b1d88:
    if (ctx->pc == 0x2B1D88u) {
        ctx->pc = 0x2B1D8Cu;
        goto label_2b1d8c;
    }
    ctx->pc = 0x2B1D84u;
    {
        const bool branch_taken_0x2b1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1d84) {
            ctx->pc = 0x2B1DD0u;
            goto label_2b1dd0;
        }
    }
    ctx->pc = 0x2B1D8Cu;
label_2b1d8c:
    // 0x2b1d8c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2b1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b1d90:
    // 0x2b1d90: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2b1d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1d94:
    // 0x2b1d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b1d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1d98:
    // 0x2b1d98: 0x0  nop
    ctx->pc = 0x2b1d98u;
    // NOP
label_2b1d9c:
    // 0x2b1d9c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b1d9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1da0:
    // 0x2b1da0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_2b1da4:
    if (ctx->pc == 0x2B1DA4u) {
        ctx->pc = 0x2B1DA8u;
        goto label_2b1da8;
    }
    ctx->pc = 0x2B1DA0u;
    {
        const bool branch_taken_0x2b1da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1da0) {
            ctx->pc = 0x2B1DD0u;
            goto label_2b1dd0;
        }
    }
    ctx->pc = 0x2B1DA8u;
label_2b1da8:
    // 0x2b1da8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1dac:
    // 0x2b1dac: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1db0:
    // 0x2b1db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1db4:
    // 0x2b1db4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b1db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b1db8:
    // 0x2b1db8: 0x320f809  jalr        $t9
label_2b1dbc:
    if (ctx->pc == 0x2B1DBCu) {
        ctx->pc = 0x2B1DC0u;
        goto label_2b1dc0;
    }
    ctx->pc = 0x2B1DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1DC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1DB8u, 0x2B1DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1DC0u;
label_2b1dc0:
    // 0x2b1dc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1dc4:
    // 0x2b1dc4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2b1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2b1dc8:
    // 0x2b1dc8: 0xc0b9d5c  jal         func_2E7570
label_2b1dcc:
    if (ctx->pc == 0x2B1DCCu) {
        ctx->pc = 0x2B1DD0u;
        goto label_2b1dd0;
    }
    ctx->pc = 0x2B1DC8u;
    SET_GPR_U32(ctx, 31, 0x2B1DD0u);
    ctx->pc = 0x2E7570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7570u, 0x2B1DC8u, 0x2B1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1DD0u;
label_2b1dd0:
    // 0x2b1dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1dd4:
    // 0x2b1dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1dd8:
    // 0x2b1dd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b1ddc:
    // 0x2b1ddc: 0x3e00008  jr          $ra
label_2b1de0:
    if (ctx->pc == 0x2B1DE0u) {
        ctx->pc = 0x2B1DE4u;
        goto label_2b1de4;
    }
    ctx->pc = 0x2B1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1DE4u;
label_2b1de4:
    // 0x2b1de4: 0x0  nop
    ctx->pc = 0x2b1de4u;
    // NOP
label_2b1de8:
    // 0x2b1de8: 0x0  nop
    ctx->pc = 0x2b1de8u;
    // NOP
label_2b1dec:
    // 0x2b1dec: 0x0  nop
    ctx->pc = 0x2b1decu;
    // NOP
label_2b1df0:
    // 0x2b1df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1df4:
    // 0x2b1df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b1df8:
    // 0x2b1df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b1dfc:
    // 0x2b1dfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2b1e00:
    // 0x2b1e00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1e04:
    // 0x2b1e04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1e08:
    // 0x2b1e08: 0xc0852b8  jal         func_214AE0
label_2b1e0c:
    if (ctx->pc == 0x2B1E0Cu) {
        ctx->pc = 0x2B1E10u;
        goto label_2b1e10;
    }
    ctx->pc = 0x2B1E08u;
    SET_GPR_U32(ctx, 31, 0x2B1E10u);
    ctx->pc = 0x214AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AE0u, 0x2B1E08u, 0x2B1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E10u;
label_2b1e10:
    // 0x2b1e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1e14:
    // 0x2b1e14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b1e18:
    // 0x2b1e18: 0x3e00008  jr          $ra
label_2b1e1c:
    if (ctx->pc == 0x2B1E1Cu) {
        ctx->pc = 0x2B1E20u;
        goto label_2b1e20;
    }
    ctx->pc = 0x2B1E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1E20u;
label_2b1e20:
    // 0x2b1e20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b1e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2b1e24:
    // 0x2b1e24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b1e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2b1e28:
    // 0x2b1e28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b1e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b1e2c:
    // 0x2b1e2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b1e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b1e30:
    // 0x2b1e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b1e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b1e34:
    // 0x2b1e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b1e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b1e38:
    // 0x2b1e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b1e3c:
    // 0x2b1e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1e40:
    // 0x2b1e40: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2b1e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_2b1e44:
    // 0x2b1e44: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2b1e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_2b1e48:
    // 0x2b1e48: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2b1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2b1e4c:
    // 0x2b1e4c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2b1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2b1e50:
    // 0x2b1e50: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_2b1e54:
    if (ctx->pc == 0x2B1E54u) {
        ctx->pc = 0x2B1E58u;
        goto label_2b1e58;
    }
    ctx->pc = 0x2B1E50u;
    {
        const bool branch_taken_0x2b1e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1e50) {
            ctx->pc = 0x2B1F60u;
            goto label_2b1f60;
        }
    }
    ctx->pc = 0x2B1E58u;
label_2b1e58:
    // 0x2b1e58: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2b1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2b1e5c:
    // 0x2b1e5c: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
label_2b1e60:
    if (ctx->pc == 0x2B1E60u) {
        ctx->pc = 0x2B1E64u;
        goto label_2b1e64;
    }
    ctx->pc = 0x2B1E5Cu;
    {
        const bool branch_taken_0x2b1e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1e5c) {
            ctx->pc = 0x2B1EFCu;
            goto label_2b1efc;
        }
    }
    ctx->pc = 0x2B1E64u;
label_2b1e64:
    // 0x2b1e64: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b1e68:
    // 0x2b1e68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b1e6c:
    if (ctx->pc == 0x2B1E6Cu) {
        ctx->pc = 0x2B1E70u;
        goto label_2b1e70;
    }
    ctx->pc = 0x2B1E68u;
    {
        const bool branch_taken_0x2b1e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1e68) {
            ctx->pc = 0x2B1E78u;
            goto label_2b1e78;
        }
    }
    ctx->pc = 0x2B1E70u;
label_2b1e70:
    // 0x2b1e70: 0x10000059  b           . + 4 + (0x59 << 2)
label_2b1e74:
    if (ctx->pc == 0x2B1E74u) {
        ctx->pc = 0x2B1E78u;
        goto label_2b1e78;
    }
    ctx->pc = 0x2B1E70u;
    {
        const bool branch_taken_0x2b1e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e70) {
            ctx->pc = 0x2B1FD8u;
            goto label_2b1fd8;
        }
    }
    ctx->pc = 0x2B1E78u;
label_2b1e78:
    // 0x2b1e78: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2b1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2b1e7c:
    // 0x2b1e7c: 0xc119b68  jal         func_466DA0
label_2b1e80:
    if (ctx->pc == 0x2B1E80u) {
        ctx->pc = 0x2B1E84u;
        goto label_2b1e84;
    }
    ctx->pc = 0x2B1E7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E84u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B1E7Cu, 0x2B1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E84u;
label_2b1e84:
    // 0x2b1e84: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2b1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2b1e88:
    // 0x2b1e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b1e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1e8c:
    // 0x2b1e8c: 0xc0400e0  jal         func_100380
label_2b1e90:
    if (ctx->pc == 0x2B1E90u) {
        ctx->pc = 0x2B1E94u;
        goto label_2b1e94;
    }
    ctx->pc = 0x2B1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E94u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B1E8Cu, 0x2B1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E94u;
label_2b1e94:
    // 0x2b1e94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b1e94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1e98:
    // 0x2b1e98: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2b1e9c:
    if (ctx->pc == 0x2B1E9Cu) {
        ctx->pc = 0x2B1EA0u;
        goto label_2b1ea0;
    }
    ctx->pc = 0x2B1E98u;
    {
        const bool branch_taken_0x2b1e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1e98) {
            ctx->pc = 0x2B1EB0u;
            goto label_2b1eb0;
        }
    }
    ctx->pc = 0x2B1EA0u;
label_2b1ea0:
    // 0x2b1ea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ea4:
    // 0x2b1ea4: 0xc0ad984  jal         func_2B6610
label_2b1ea8:
    if (ctx->pc == 0x2B1EA8u) {
        ctx->pc = 0x2B1EACu;
        goto label_2b1eac;
    }
    ctx->pc = 0x2B1EA4u;
    SET_GPR_U32(ctx, 31, 0x2B1EACu);
    ctx->pc = 0x2B6610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6610u, 0x2B1EA4u, 0x2B1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EACu;
label_2b1eac:
    // 0x2b1eac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b1eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1eb0:
    // 0x2b1eb0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2b1eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b1eb4:
    // 0x2b1eb4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2b1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1eb8:
    // 0x2b1eb8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2b1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2b1ebc:
    // 0x2b1ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ec0:
    // 0x2b1ec0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1ec4:
    // 0x2b1ec4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b1ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b1ec8:
    // 0x2b1ec8: 0x320f809  jalr        $t9
label_2b1ecc:
    if (ctx->pc == 0x2B1ECCu) {
        ctx->pc = 0x2B1ED0u;
        goto label_2b1ed0;
    }
    ctx->pc = 0x2B1EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1EC8u, 0x2B1ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1ED0u;
label_2b1ed0:
    // 0x2b1ed0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2b1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1ed4:
    // 0x2b1ed4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1ed8:
    // 0x2b1ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b1ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1edc:
    // 0x2b1edc: 0xc0af754  jal         func_2BDD50
label_2b1ee0:
    if (ctx->pc == 0x2B1EE0u) {
        ctx->pc = 0x2B1EE4u;
        goto label_2b1ee4;
    }
    ctx->pc = 0x2B1EDCu;
    SET_GPR_U32(ctx, 31, 0x2B1EE4u);
    ctx->pc = 0x2BDD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDD50u, 0x2B1EDCu, 0x2B1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EE4u;
label_2b1ee4:
    // 0x2b1ee4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2b1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1ee8:
    // 0x2b1ee8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1eec:
    // 0x2b1eec: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2b1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2b1ef0:
    // 0x2b1ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ef4:
    // 0x2b1ef4: 0x10000039  b           . + 4 + (0x39 << 2)
label_2b1ef8:
    if (ctx->pc == 0x2B1EF8u) {
        ctx->pc = 0x2B1EFCu;
        goto label_2b1efc;
    }
    ctx->pc = 0x2B1EF4u;
    {
        const bool branch_taken_0x2b1ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ef4) {
            ctx->pc = 0x2B1FDCu;
            goto label_2b1fdc;
        }
    }
    ctx->pc = 0x2B1EFCu;
label_2b1efc:
    // 0x2b1efc: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x2b1efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_2b1f00:
    // 0x2b1f00: 0xc119b68  jal         func_466DA0
label_2b1f04:
    if (ctx->pc == 0x2B1F04u) {
        ctx->pc = 0x2B1F08u;
        goto label_2b1f08;
    }
    ctx->pc = 0x2B1F00u;
    SET_GPR_U32(ctx, 31, 0x2B1F08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B1F00u, 0x2B1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F08u;
label_2b1f08:
    // 0x2b1f08: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x2b1f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_2b1f0c:
    // 0x2b1f0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b1f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f10:
    // 0x2b1f10: 0xc0400e0  jal         func_100380
label_2b1f14:
    if (ctx->pc == 0x2B1F14u) {
        ctx->pc = 0x2B1F18u;
        goto label_2b1f18;
    }
    ctx->pc = 0x2B1F10u;
    SET_GPR_U32(ctx, 31, 0x2B1F18u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B1F10u, 0x2B1F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F18u;
label_2b1f18:
    // 0x2b1f18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b1f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f1c:
    // 0x2b1f1c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2b1f20:
    if (ctx->pc == 0x2B1F20u) {
        ctx->pc = 0x2B1F24u;
        goto label_2b1f24;
    }
    ctx->pc = 0x2B1F1Cu;
    {
        const bool branch_taken_0x2b1f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f1c) {
            ctx->pc = 0x2B1F34u;
            goto label_2b1f34;
        }
    }
    ctx->pc = 0x2B1F24u;
label_2b1f24:
    // 0x2b1f24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b1f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f28:
    // 0x2b1f28: 0xc0b7ba8  jal         func_2DEEA0
label_2b1f2c:
    if (ctx->pc == 0x2B1F2Cu) {
        ctx->pc = 0x2B1F30u;
        goto label_2b1f30;
    }
    ctx->pc = 0x2B1F28u;
    SET_GPR_U32(ctx, 31, 0x2B1F30u);
    ctx->pc = 0x2DEEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEEA0u, 0x2B1F28u, 0x2B1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F30u;
label_2b1f30:
    // 0x2b1f30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b1f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f34:
    // 0x2b1f34: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2b1f34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f38:
    // 0x2b1f38: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2b1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1f3c:
    // 0x2b1f3c: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x2b1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
label_2b1f40:
    // 0x2b1f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f44:
    // 0x2b1f44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1f48:
    // 0x2b1f48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b1f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b1f4c:
    // 0x2b1f4c: 0x320f809  jalr        $t9
label_2b1f50:
    if (ctx->pc == 0x2B1F50u) {
        ctx->pc = 0x2B1F54u;
        goto label_2b1f54;
    }
    ctx->pc = 0x2B1F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1F54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1F4Cu, 0x2B1F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1F54u;
label_2b1f54:
    // 0x2b1f54: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2b1f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f58:
    // 0x2b1f58: 0x10000020  b           . + 4 + (0x20 << 2)
label_2b1f5c:
    if (ctx->pc == 0x2B1F5Cu) {
        ctx->pc = 0x2B1F60u;
        goto label_2b1f60;
    }
    ctx->pc = 0x2B1F58u;
    {
        const bool branch_taken_0x2b1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f58) {
            ctx->pc = 0x2B1FDCu;
            goto label_2b1fdc;
        }
    }
    ctx->pc = 0x2B1F60u;
label_2b1f60:
    // 0x2b1f60: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x2b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2b1f64:
    // 0x2b1f64: 0xc119b68  jal         func_466DA0
label_2b1f68:
    if (ctx->pc == 0x2B1F68u) {
        ctx->pc = 0x2B1F6Cu;
        goto label_2b1f6c;
    }
    ctx->pc = 0x2B1F64u;
    SET_GPR_U32(ctx, 31, 0x2B1F6Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B1F64u, 0x2B1F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F6Cu;
label_2b1f6c:
    // 0x2b1f6c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x2b1f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2b1f70:
    // 0x2b1f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b1f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f74:
    // 0x2b1f74: 0xc0400e0  jal         func_100380
label_2b1f78:
    if (ctx->pc == 0x2B1F78u) {
        ctx->pc = 0x2B1F7Cu;
        goto label_2b1f7c;
    }
    ctx->pc = 0x2B1F74u;
    SET_GPR_U32(ctx, 31, 0x2B1F7Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B1F74u, 0x2B1F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F7Cu;
label_2b1f7c:
    // 0x2b1f7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b1f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f80:
    // 0x2b1f80: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2b1f84:
    if (ctx->pc == 0x2B1F84u) {
        ctx->pc = 0x2B1F88u;
        goto label_2b1f88;
    }
    ctx->pc = 0x2B1F80u;
    {
        const bool branch_taken_0x2b1f80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f80) {
            ctx->pc = 0x2B1F98u;
            goto label_2b1f98;
        }
    }
    ctx->pc = 0x2B1F88u;
label_2b1f88:
    // 0x2b1f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b1f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f8c:
    // 0x2b1f8c: 0xc0b73a0  jal         func_2DCE80
label_2b1f90:
    if (ctx->pc == 0x2B1F90u) {
        ctx->pc = 0x2B1F94u;
        goto label_2b1f94;
    }
    ctx->pc = 0x2B1F8Cu;
    SET_GPR_U32(ctx, 31, 0x2B1F94u);
    ctx->pc = 0x2DCE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE80u, 0x2B1F8Cu, 0x2B1F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F94u;
label_2b1f94:
    // 0x2b1f94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b1f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f98:
    // 0x2b1f98: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2b1f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f9c:
    // 0x2b1f9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2b1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1fa0:
    // 0x2b1fa0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2b1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_2b1fa4:
    // 0x2b1fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fa8:
    // 0x2b1fa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1fac:
    // 0x2b1fac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b1facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b1fb0:
    // 0x2b1fb0: 0x320f809  jalr        $t9
label_2b1fb4:
    if (ctx->pc == 0x2B1FB4u) {
        ctx->pc = 0x2B1FB8u;
        goto label_2b1fb8;
    }
    ctx->pc = 0x2B1FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1FB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1FB0u, 0x2B1FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1FB8u;
label_2b1fb8:
    // 0x2b1fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fbc:
    // 0x2b1fbc: 0xc0b767c  jal         func_2DD9F0
label_2b1fc0:
    if (ctx->pc == 0x2B1FC0u) {
        ctx->pc = 0x2B1FC4u;
        goto label_2b1fc4;
    }
    ctx->pc = 0x2B1FBCu;
    SET_GPR_U32(ctx, 31, 0x2B1FC4u);
    ctx->pc = 0x2DD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD9F0u, 0x2B1FBCu, 0x2B1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1FC4u;
label_2b1fc4:
    // 0x2b1fc4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2b1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1fc8:
    // 0x2b1fc8: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x2b1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_2b1fcc:
    // 0x2b1fcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b1fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fd0:
    // 0x2b1fd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b1fd4:
    if (ctx->pc == 0x2B1FD4u) {
        ctx->pc = 0x2B1FD8u;
        goto label_2b1fd8;
    }
    ctx->pc = 0x2B1FD0u;
    {
        const bool branch_taken_0x2b1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1fd0) {
            ctx->pc = 0x2B1FDCu;
            goto label_2b1fdc;
        }
    }
    ctx->pc = 0x2B1FD8u;
label_2b1fd8:
    // 0x2b1fd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b1fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fdc:
    // 0x2b1fdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b1fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b1fe0:
    // 0x2b1fe0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b1fe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b1fe4:
    // 0x2b1fe4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b1fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b1fe8:
    // 0x2b1fe8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b1fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1fec:
    // 0x2b1fec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b1fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1ff0:
    // 0x2b1ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b1ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1ff4:
    // 0x2b1ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1ff8:
    // 0x2b1ff8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b1ffc:
    // 0x2b1ffc: 0x3e00008  jr          $ra
label_2b2000:
    if (ctx->pc == 0x2B2000u) {
        ctx->pc = 0x2B2004u;
        goto label_2b2004;
    }
    ctx->pc = 0x2B1FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2004u;
label_2b2004:
    // 0x2b2004: 0x0  nop
    ctx->pc = 0x2b2004u;
    // NOP
label_2b2008:
    // 0x2b2008: 0x0  nop
    ctx->pc = 0x2b2008u;
    // NOP
label_2b200c:
    // 0x2b200c: 0x0  nop
    ctx->pc = 0x2b200cu;
    // NOP
label_2b2010:
    // 0x2b2010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b2014:
    // 0x2b2014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b2018:
    // 0x2b2018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b2018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b201c:
    // 0x2b201c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2b2020:
    // 0x2b2020: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b2020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2024:
    // 0x2b2024: 0xc084efc  jal         func_213BF0
label_2b2028:
    if (ctx->pc == 0x2B2028u) {
        ctx->pc = 0x2B202Cu;
        goto label_2b202c;
    }
    ctx->pc = 0x2B2024u;
    SET_GPR_U32(ctx, 31, 0x2B202Cu);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x2B2024u, 0x2B202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B202Cu;
label_2b202c:
    // 0x2b202c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2b202cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2b2030:
    // 0x2b2030: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
label_2b2034:
    if (ctx->pc == 0x2B2034u) {
        ctx->pc = 0x2B2038u;
        goto label_2b2038;
    }
    ctx->pc = 0x2B2030u;
    {
        const bool branch_taken_0x2b2030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2030) {
            ctx->pc = 0x2B20FCu;
            goto label_2b20fc;
        }
    }
    ctx->pc = 0x2B2038u;
label_2b2038:
    // 0x2b2038: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2b2038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2b203c:
    // 0x2b203c: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
label_2b2040:
    if (ctx->pc == 0x2B2040u) {
        ctx->pc = 0x2B2044u;
        goto label_2b2044;
    }
    ctx->pc = 0x2B203Cu;
    {
        const bool branch_taken_0x2b203c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b203c) {
            ctx->pc = 0x2B20B4u;
            goto label_2b20b4;
        }
    }
    ctx->pc = 0x2B2044u;
label_2b2044:
    // 0x2b2044: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2b2044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b2048:
    // 0x2b2048: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2b204c:
    if (ctx->pc == 0x2B204Cu) {
        ctx->pc = 0x2B2050u;
        goto label_2b2050;
    }
    ctx->pc = 0x2B2048u;
    {
        const bool branch_taken_0x2b2048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b2048) {
            ctx->pc = 0x2B2058u;
            goto label_2b2058;
        }
    }
    ctx->pc = 0x2B2050u;
label_2b2050:
    // 0x2b2050: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2b2054:
    if (ctx->pc == 0x2B2054u) {
        ctx->pc = 0x2B2058u;
        goto label_2b2058;
    }
    ctx->pc = 0x2B2050u;
    {
        const bool branch_taken_0x2b2050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2050) {
            ctx->pc = 0x2B2144u;
            goto label_2b2144;
        }
    }
    ctx->pc = 0x2B2058u;
label_2b2058:
    // 0x2b2058: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b205c:
    // 0x2b205c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2060:
    // 0x2b2060: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b2060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2064:
    // 0x2b2064: 0xc0b0d48  jal         func_2C3520
label_2b2068:
    if (ctx->pc == 0x2B2068u) {
        ctx->pc = 0x2B206Cu;
        goto label_2b206c;
    }
    ctx->pc = 0x2B2064u;
    SET_GPR_U32(ctx, 31, 0x2B206Cu);
    ctx->pc = 0x2C3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3520u, 0x2B2064u, 0x2B206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B206Cu;
label_2b206c:
    // 0x2b206c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2070:
    // 0x2b2070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b2070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2074:
    // 0x2b2074: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2b2074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2b2078:
    // 0x2b2078: 0x320f809  jalr        $t9
label_2b207c:
    if (ctx->pc == 0x2B207Cu) {
        ctx->pc = 0x2B2080u;
        goto label_2b2080;
    }
    ctx->pc = 0x2B2078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B2080u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2078u, 0x2B2080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2080u;
label_2b2080:
    // 0x2b2080: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2084:
    // 0x2b2084: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b2088:
    if (ctx->pc == 0x2B2088u) {
        ctx->pc = 0x2B208Cu;
        goto label_2b208c;
    }
    ctx->pc = 0x2B2084u;
    {
        const bool branch_taken_0x2b2084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2084) {
            ctx->pc = 0x2B20A8u;
            goto label_2b20a8;
        }
    }
    ctx->pc = 0x2B208Cu;
label_2b208c:
    // 0x2b208c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b208cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2090:
    // 0x2b2090: 0xc090500  jal         func_241400
label_2b2094:
    if (ctx->pc == 0x2B2094u) {
        ctx->pc = 0x2B2098u;
        goto label_2b2098;
    }
    ctx->pc = 0x2B2090u;
    SET_GPR_U32(ctx, 31, 0x2B2098u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2B2090u, 0x2B2098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2098u;
label_2b2098:
    // 0x2b2098: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b2098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b209c:
    // 0x2b209c: 0xc119c5c  jal         func_467170
label_2b20a0:
    if (ctx->pc == 0x2B20A0u) {
        ctx->pc = 0x2B20A4u;
        goto label_2b20a4;
    }
    ctx->pc = 0x2B209Cu;
    SET_GPR_U32(ctx, 31, 0x2B20A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B209Cu, 0x2B20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20A4u;
label_2b20a4:
    // 0x2b20a4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2b20a8:
    // 0x2b20a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b20ac:
    // 0x2b20ac: 0x10000026  b           . + 4 + (0x26 << 2)
label_2b20b0:
    if (ctx->pc == 0x2B20B0u) {
        ctx->pc = 0x2B20B4u;
        goto label_2b20b4;
    }
    ctx->pc = 0x2B20ACu;
    {
        const bool branch_taken_0x2b20ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20ac) {
            ctx->pc = 0x2B2148u;
            goto label_2b2148;
        }
    }
    ctx->pc = 0x2B20B4u;
label_2b20b4:
    // 0x2b20b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b20b8:
    // 0x2b20b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b20b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b20bc:
    // 0x2b20bc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2b20bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2b20c0:
    // 0x2b20c0: 0x320f809  jalr        $t9
label_2b20c4:
    if (ctx->pc == 0x2B20C4u) {
        ctx->pc = 0x2B20C8u;
        goto label_2b20c8;
    }
    ctx->pc = 0x2B20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B20C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B20C0u, 0x2B20C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B20C8u;
label_2b20c8:
    // 0x2b20c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b20cc:
    // 0x2b20cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b20d0:
    if (ctx->pc == 0x2B20D0u) {
        ctx->pc = 0x2B20D4u;
        goto label_2b20d4;
    }
    ctx->pc = 0x2B20CCu;
    {
        const bool branch_taken_0x2b20cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20cc) {
            ctx->pc = 0x2B20F0u;
            goto label_2b20f0;
        }
    }
    ctx->pc = 0x2B20D4u;
label_2b20d4:
    // 0x2b20d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b20d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b20d8:
    // 0x2b20d8: 0xc090500  jal         func_241400
label_2b20dc:
    if (ctx->pc == 0x2B20DCu) {
        ctx->pc = 0x2B20E0u;
        goto label_2b20e0;
    }
    ctx->pc = 0x2B20D8u;
    SET_GPR_U32(ctx, 31, 0x2B20E0u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2B20D8u, 0x2B20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20E0u;
label_2b20e0:
    // 0x2b20e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b20e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b20e4:
    // 0x2b20e4: 0xc119c5c  jal         func_467170
label_2b20e8:
    if (ctx->pc == 0x2B20E8u) {
        ctx->pc = 0x2B20ECu;
        goto label_2b20ec;
    }
    ctx->pc = 0x2B20E4u;
    SET_GPR_U32(ctx, 31, 0x2B20ECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B20E4u, 0x2B20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B20ECu;
label_2b20ec:
    // 0x2b20ec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2b20f0:
    // 0x2b20f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b20f4:
    // 0x2b20f4: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b20f8:
    if (ctx->pc == 0x2B20F8u) {
        ctx->pc = 0x2B20FCu;
        goto label_2b20fc;
    }
    ctx->pc = 0x2B20F4u;
    {
        const bool branch_taken_0x2b20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b20f4) {
            ctx->pc = 0x2B2148u;
            goto label_2b2148;
        }
    }
    ctx->pc = 0x2B20FCu;
label_2b20fc:
    // 0x2b20fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2100:
    // 0x2b2100: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b2100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2104:
    // 0x2b2104: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2b2104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2b2108:
    // 0x2b2108: 0x320f809  jalr        $t9
label_2b210c:
    if (ctx->pc == 0x2B210Cu) {
        ctx->pc = 0x2B2110u;
        goto label_2b2110;
    }
    ctx->pc = 0x2B2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B2110u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2108u, 0x2B2110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2110u;
label_2b2110:
    // 0x2b2110: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2114:
    // 0x2b2114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b2118:
    if (ctx->pc == 0x2B2118u) {
        ctx->pc = 0x2B211Cu;
        goto label_2b211c;
    }
    ctx->pc = 0x2B2114u;
    {
        const bool branch_taken_0x2b2114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2114) {
            ctx->pc = 0x2B2138u;
            goto label_2b2138;
        }
    }
    ctx->pc = 0x2B211Cu;
label_2b211c:
    // 0x2b211c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2120:
    // 0x2b2120: 0xc090500  jal         func_241400
label_2b2124:
    if (ctx->pc == 0x2B2124u) {
        ctx->pc = 0x2B2128u;
        goto label_2b2128;
    }
    ctx->pc = 0x2B2120u;
    SET_GPR_U32(ctx, 31, 0x2B2128u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x2B2120u, 0x2B2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2128u;
label_2b2128:
    // 0x2b2128: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b212c:
    // 0x2b212c: 0xc119c5c  jal         func_467170
label_2b2130:
    if (ctx->pc == 0x2B2130u) {
        ctx->pc = 0x2B2134u;
        goto label_2b2134;
    }
    ctx->pc = 0x2B212Cu;
    SET_GPR_U32(ctx, 31, 0x2B2134u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B212Cu, 0x2B2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2134u;
label_2b2134:
    // 0x2b2134: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2b2134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2b2138:
    // 0x2b2138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b213c:
    // 0x2b213c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b2140:
    if (ctx->pc == 0x2B2140u) {
        ctx->pc = 0x2B2144u;
        goto label_2b2144;
    }
    ctx->pc = 0x2B213Cu;
    {
        const bool branch_taken_0x2b213c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b213c) {
            ctx->pc = 0x2B2148u;
            goto label_2b2148;
        }
    }
    ctx->pc = 0x2B2144u;
label_2b2144:
    // 0x2b2144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2148:
    // 0x2b2148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b214c:
    // 0x2b214c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b214cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b2150:
    // 0x2b2150: 0x3e00008  jr          $ra
label_2b2154:
    if (ctx->pc == 0x2B2154u) {
        ctx->pc = 0x2B2158u;
        goto label_2b2158;
    }
    ctx->pc = 0x2B2150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2158u;
label_2b2158:
    // 0x2b2158: 0x0  nop
    ctx->pc = 0x2b2158u;
    // NOP
label_2b215c:
    // 0x2b215c: 0x0  nop
    ctx->pc = 0x2b215cu;
    // NOP
    ctx->pc = 0x2b2160u;
}
