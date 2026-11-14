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

// Function: sub_003959B8
// Address: 0x3959b8 - 0x3983a0
void sub_003959B8_0x3959b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003959B8_0x3959b8");
#endif

    switch (ctx->pc) {
        case 0x3959b8u: goto label_3959b8;
        case 0x3959bcu: goto label_3959bc;
        case 0x3959c0u: goto label_3959c0;
        case 0x3959c4u: goto label_3959c4;
        case 0x3959c8u: goto label_3959c8;
        case 0x3959ccu: goto label_3959cc;
        case 0x3959d0u: goto label_3959d0;
        case 0x3959d4u: goto label_3959d4;
        case 0x3959d8u: goto label_3959d8;
        case 0x3959dcu: goto label_3959dc;
        case 0x3959e0u: goto label_3959e0;
        case 0x3959e4u: goto label_3959e4;
        case 0x3959e8u: goto label_3959e8;
        case 0x3959ecu: goto label_3959ec;
        case 0x3959f0u: goto label_3959f0;
        case 0x3959f4u: goto label_3959f4;
        case 0x3959f8u: goto label_3959f8;
        case 0x3959fcu: goto label_3959fc;
        case 0x395a00u: goto label_395a00;
        case 0x395a04u: goto label_395a04;
        case 0x395a08u: goto label_395a08;
        case 0x395a0cu: goto label_395a0c;
        case 0x395a10u: goto label_395a10;
        case 0x395a14u: goto label_395a14;
        case 0x395a18u: goto label_395a18;
        case 0x395a1cu: goto label_395a1c;
        case 0x395a20u: goto label_395a20;
        case 0x395a24u: goto label_395a24;
        case 0x395a28u: goto label_395a28;
        case 0x395a2cu: goto label_395a2c;
        case 0x395a30u: goto label_395a30;
        case 0x395a34u: goto label_395a34;
        case 0x395a38u: goto label_395a38;
        case 0x395a3cu: goto label_395a3c;
        case 0x395a40u: goto label_395a40;
        case 0x395a44u: goto label_395a44;
        case 0x395a48u: goto label_395a48;
        case 0x395a4cu: goto label_395a4c;
        case 0x395a50u: goto label_395a50;
        case 0x395a54u: goto label_395a54;
        case 0x395a58u: goto label_395a58;
        case 0x395a5cu: goto label_395a5c;
        case 0x395a60u: goto label_395a60;
        case 0x395a64u: goto label_395a64;
        case 0x395a68u: goto label_395a68;
        case 0x395a6cu: goto label_395a6c;
        case 0x395a70u: goto label_395a70;
        case 0x395a74u: goto label_395a74;
        case 0x395a78u: goto label_395a78;
        case 0x395a7cu: goto label_395a7c;
        case 0x395a80u: goto label_395a80;
        case 0x395a84u: goto label_395a84;
        case 0x395a88u: goto label_395a88;
        case 0x395a8cu: goto label_395a8c;
        case 0x395a90u: goto label_395a90;
        case 0x395a94u: goto label_395a94;
        case 0x395a98u: goto label_395a98;
        case 0x395a9cu: goto label_395a9c;
        case 0x395aa0u: goto label_395aa0;
        case 0x395aa4u: goto label_395aa4;
        case 0x395aa8u: goto label_395aa8;
        case 0x395aacu: goto label_395aac;
        case 0x395ab0u: goto label_395ab0;
        case 0x395ab4u: goto label_395ab4;
        case 0x395ab8u: goto label_395ab8;
        case 0x395abcu: goto label_395abc;
        case 0x395ac0u: goto label_395ac0;
        case 0x395ac4u: goto label_395ac4;
        case 0x395ac8u: goto label_395ac8;
        case 0x395accu: goto label_395acc;
        case 0x395ad0u: goto label_395ad0;
        case 0x395ad4u: goto label_395ad4;
        case 0x395ad8u: goto label_395ad8;
        case 0x395adcu: goto label_395adc;
        case 0x395ae0u: goto label_395ae0;
        case 0x395ae4u: goto label_395ae4;
        case 0x395ae8u: goto label_395ae8;
        case 0x395aecu: goto label_395aec;
        case 0x395af0u: goto label_395af0;
        case 0x395af4u: goto label_395af4;
        case 0x395af8u: goto label_395af8;
        case 0x395afcu: goto label_395afc;
        case 0x395b00u: goto label_395b00;
        case 0x395b04u: goto label_395b04;
        case 0x395b08u: goto label_395b08;
        case 0x395b0cu: goto label_395b0c;
        case 0x395b10u: goto label_395b10;
        case 0x395b14u: goto label_395b14;
        case 0x395b18u: goto label_395b18;
        case 0x395b1cu: goto label_395b1c;
        case 0x395b20u: goto label_395b20;
        case 0x395b24u: goto label_395b24;
        case 0x395b28u: goto label_395b28;
        case 0x395b2cu: goto label_395b2c;
        case 0x395b30u: goto label_395b30;
        case 0x395b34u: goto label_395b34;
        case 0x395b38u: goto label_395b38;
        case 0x395b3cu: goto label_395b3c;
        case 0x395b40u: goto label_395b40;
        case 0x395b44u: goto label_395b44;
        case 0x395b48u: goto label_395b48;
        case 0x395b4cu: goto label_395b4c;
        case 0x395b50u: goto label_395b50;
        case 0x395b54u: goto label_395b54;
        case 0x395b58u: goto label_395b58;
        case 0x395b5cu: goto label_395b5c;
        case 0x395b60u: goto label_395b60;
        case 0x395b64u: goto label_395b64;
        case 0x395b68u: goto label_395b68;
        case 0x395b6cu: goto label_395b6c;
        case 0x395b70u: goto label_395b70;
        case 0x395b74u: goto label_395b74;
        case 0x395b78u: goto label_395b78;
        case 0x395b7cu: goto label_395b7c;
        case 0x395b80u: goto label_395b80;
        case 0x395b84u: goto label_395b84;
        case 0x395b88u: goto label_395b88;
        case 0x395b8cu: goto label_395b8c;
        case 0x395b90u: goto label_395b90;
        case 0x395b94u: goto label_395b94;
        case 0x395b98u: goto label_395b98;
        case 0x395b9cu: goto label_395b9c;
        case 0x395ba0u: goto label_395ba0;
        case 0x395ba4u: goto label_395ba4;
        case 0x395ba8u: goto label_395ba8;
        case 0x395bacu: goto label_395bac;
        case 0x395bb0u: goto label_395bb0;
        case 0x395bb4u: goto label_395bb4;
        case 0x395bb8u: goto label_395bb8;
        case 0x395bbcu: goto label_395bbc;
        case 0x395bc0u: goto label_395bc0;
        case 0x395bc4u: goto label_395bc4;
        case 0x395bc8u: goto label_395bc8;
        case 0x395bccu: goto label_395bcc;
        case 0x395bd0u: goto label_395bd0;
        case 0x395bd4u: goto label_395bd4;
        case 0x395bd8u: goto label_395bd8;
        case 0x395bdcu: goto label_395bdc;
        case 0x395be0u: goto label_395be0;
        case 0x395be4u: goto label_395be4;
        case 0x395be8u: goto label_395be8;
        case 0x395becu: goto label_395bec;
        case 0x395bf0u: goto label_395bf0;
        case 0x395bf4u: goto label_395bf4;
        case 0x395bf8u: goto label_395bf8;
        case 0x395bfcu: goto label_395bfc;
        case 0x395c00u: goto label_395c00;
        case 0x395c04u: goto label_395c04;
        case 0x395c08u: goto label_395c08;
        case 0x395c0cu: goto label_395c0c;
        case 0x395c10u: goto label_395c10;
        case 0x395c14u: goto label_395c14;
        case 0x395c18u: goto label_395c18;
        case 0x395c1cu: goto label_395c1c;
        case 0x395c20u: goto label_395c20;
        case 0x395c24u: goto label_395c24;
        case 0x395c28u: goto label_395c28;
        case 0x395c2cu: goto label_395c2c;
        case 0x395c30u: goto label_395c30;
        case 0x395c34u: goto label_395c34;
        case 0x395c38u: goto label_395c38;
        case 0x395c3cu: goto label_395c3c;
        case 0x395c40u: goto label_395c40;
        case 0x395c44u: goto label_395c44;
        case 0x395c48u: goto label_395c48;
        case 0x395c4cu: goto label_395c4c;
        case 0x395c50u: goto label_395c50;
        case 0x395c54u: goto label_395c54;
        case 0x395c58u: goto label_395c58;
        case 0x395c5cu: goto label_395c5c;
        case 0x395c60u: goto label_395c60;
        case 0x395c64u: goto label_395c64;
        case 0x395c68u: goto label_395c68;
        case 0x395c6cu: goto label_395c6c;
        case 0x395c70u: goto label_395c70;
        case 0x395c74u: goto label_395c74;
        case 0x395c78u: goto label_395c78;
        case 0x395c7cu: goto label_395c7c;
        case 0x395c80u: goto label_395c80;
        case 0x395c84u: goto label_395c84;
        case 0x395c88u: goto label_395c88;
        case 0x395c8cu: goto label_395c8c;
        case 0x395c90u: goto label_395c90;
        case 0x395c94u: goto label_395c94;
        case 0x395c98u: goto label_395c98;
        case 0x395c9cu: goto label_395c9c;
        case 0x395ca0u: goto label_395ca0;
        case 0x395ca4u: goto label_395ca4;
        case 0x395ca8u: goto label_395ca8;
        case 0x395cacu: goto label_395cac;
        case 0x395cb0u: goto label_395cb0;
        case 0x395cb4u: goto label_395cb4;
        case 0x395cb8u: goto label_395cb8;
        case 0x395cbcu: goto label_395cbc;
        case 0x395cc0u: goto label_395cc0;
        case 0x395cc4u: goto label_395cc4;
        case 0x395cc8u: goto label_395cc8;
        case 0x395cccu: goto label_395ccc;
        case 0x395cd0u: goto label_395cd0;
        case 0x395cd4u: goto label_395cd4;
        case 0x395cd8u: goto label_395cd8;
        case 0x395cdcu: goto label_395cdc;
        case 0x395ce0u: goto label_395ce0;
        case 0x395ce4u: goto label_395ce4;
        case 0x395ce8u: goto label_395ce8;
        case 0x395cecu: goto label_395cec;
        case 0x395cf0u: goto label_395cf0;
        case 0x395cf4u: goto label_395cf4;
        case 0x395cf8u: goto label_395cf8;
        case 0x395cfcu: goto label_395cfc;
        case 0x395d00u: goto label_395d00;
        case 0x395d04u: goto label_395d04;
        case 0x395d08u: goto label_395d08;
        case 0x395d0cu: goto label_395d0c;
        case 0x395d10u: goto label_395d10;
        case 0x395d14u: goto label_395d14;
        case 0x395d18u: goto label_395d18;
        case 0x395d1cu: goto label_395d1c;
        case 0x395d20u: goto label_395d20;
        case 0x395d24u: goto label_395d24;
        case 0x395d28u: goto label_395d28;
        case 0x395d2cu: goto label_395d2c;
        case 0x395d30u: goto label_395d30;
        case 0x395d34u: goto label_395d34;
        case 0x395d38u: goto label_395d38;
        case 0x395d3cu: goto label_395d3c;
        case 0x395d40u: goto label_395d40;
        case 0x395d44u: goto label_395d44;
        case 0x395d48u: goto label_395d48;
        case 0x395d4cu: goto label_395d4c;
        case 0x395d50u: goto label_395d50;
        case 0x395d54u: goto label_395d54;
        case 0x395d58u: goto label_395d58;
        case 0x395d5cu: goto label_395d5c;
        case 0x395d60u: goto label_395d60;
        case 0x395d64u: goto label_395d64;
        case 0x395d68u: goto label_395d68;
        case 0x395d6cu: goto label_395d6c;
        case 0x395d70u: goto label_395d70;
        case 0x395d74u: goto label_395d74;
        case 0x395d78u: goto label_395d78;
        case 0x395d7cu: goto label_395d7c;
        case 0x395d80u: goto label_395d80;
        case 0x395d84u: goto label_395d84;
        case 0x395d88u: goto label_395d88;
        case 0x395d8cu: goto label_395d8c;
        case 0x395d90u: goto label_395d90;
        case 0x395d94u: goto label_395d94;
        case 0x395d98u: goto label_395d98;
        case 0x395d9cu: goto label_395d9c;
        case 0x395da0u: goto label_395da0;
        case 0x395da4u: goto label_395da4;
        case 0x395da8u: goto label_395da8;
        case 0x395dacu: goto label_395dac;
        case 0x395db0u: goto label_395db0;
        case 0x395db4u: goto label_395db4;
        case 0x395db8u: goto label_395db8;
        case 0x395dbcu: goto label_395dbc;
        case 0x395dc0u: goto label_395dc0;
        case 0x395dc4u: goto label_395dc4;
        case 0x395dc8u: goto label_395dc8;
        case 0x395dccu: goto label_395dcc;
        case 0x395dd0u: goto label_395dd0;
        case 0x395dd4u: goto label_395dd4;
        case 0x395dd8u: goto label_395dd8;
        case 0x395ddcu: goto label_395ddc;
        case 0x395de0u: goto label_395de0;
        case 0x395de4u: goto label_395de4;
        case 0x395de8u: goto label_395de8;
        case 0x395decu: goto label_395dec;
        case 0x395df0u: goto label_395df0;
        case 0x395df4u: goto label_395df4;
        case 0x395df8u: goto label_395df8;
        case 0x395dfcu: goto label_395dfc;
        case 0x395e00u: goto label_395e00;
        case 0x395e04u: goto label_395e04;
        case 0x395e08u: goto label_395e08;
        case 0x395e0cu: goto label_395e0c;
        case 0x395e10u: goto label_395e10;
        case 0x395e14u: goto label_395e14;
        case 0x395e18u: goto label_395e18;
        case 0x395e1cu: goto label_395e1c;
        case 0x395e20u: goto label_395e20;
        case 0x395e24u: goto label_395e24;
        case 0x395e28u: goto label_395e28;
        case 0x395e2cu: goto label_395e2c;
        case 0x395e30u: goto label_395e30;
        case 0x395e34u: goto label_395e34;
        case 0x395e38u: goto label_395e38;
        case 0x395e3cu: goto label_395e3c;
        case 0x395e40u: goto label_395e40;
        case 0x395e44u: goto label_395e44;
        case 0x395e48u: goto label_395e48;
        case 0x395e4cu: goto label_395e4c;
        case 0x395e50u: goto label_395e50;
        case 0x395e54u: goto label_395e54;
        case 0x395e58u: goto label_395e58;
        case 0x395e5cu: goto label_395e5c;
        case 0x395e60u: goto label_395e60;
        case 0x395e64u: goto label_395e64;
        case 0x395e68u: goto label_395e68;
        case 0x395e6cu: goto label_395e6c;
        case 0x395e70u: goto label_395e70;
        case 0x395e74u: goto label_395e74;
        case 0x395e78u: goto label_395e78;
        case 0x395e7cu: goto label_395e7c;
        case 0x395e80u: goto label_395e80;
        case 0x395e84u: goto label_395e84;
        case 0x395e88u: goto label_395e88;
        case 0x395e8cu: goto label_395e8c;
        case 0x395e90u: goto label_395e90;
        case 0x395e94u: goto label_395e94;
        case 0x395e98u: goto label_395e98;
        case 0x395e9cu: goto label_395e9c;
        case 0x395ea0u: goto label_395ea0;
        case 0x395ea4u: goto label_395ea4;
        case 0x395ea8u: goto label_395ea8;
        case 0x395eacu: goto label_395eac;
        case 0x395eb0u: goto label_395eb0;
        case 0x395eb4u: goto label_395eb4;
        case 0x395eb8u: goto label_395eb8;
        case 0x395ebcu: goto label_395ebc;
        case 0x395ec0u: goto label_395ec0;
        case 0x395ec4u: goto label_395ec4;
        case 0x395ec8u: goto label_395ec8;
        case 0x395eccu: goto label_395ecc;
        case 0x395ed0u: goto label_395ed0;
        case 0x395ed4u: goto label_395ed4;
        case 0x395ed8u: goto label_395ed8;
        case 0x395edcu: goto label_395edc;
        case 0x395ee0u: goto label_395ee0;
        case 0x395ee4u: goto label_395ee4;
        case 0x395ee8u: goto label_395ee8;
        case 0x395eecu: goto label_395eec;
        case 0x395ef0u: goto label_395ef0;
        case 0x395ef4u: goto label_395ef4;
        case 0x395ef8u: goto label_395ef8;
        case 0x395efcu: goto label_395efc;
        case 0x395f00u: goto label_395f00;
        case 0x395f04u: goto label_395f04;
        case 0x395f08u: goto label_395f08;
        case 0x395f0cu: goto label_395f0c;
        case 0x395f10u: goto label_395f10;
        case 0x395f14u: goto label_395f14;
        case 0x395f18u: goto label_395f18;
        case 0x395f1cu: goto label_395f1c;
        case 0x395f20u: goto label_395f20;
        case 0x395f24u: goto label_395f24;
        case 0x395f28u: goto label_395f28;
        case 0x395f2cu: goto label_395f2c;
        case 0x395f30u: goto label_395f30;
        case 0x395f34u: goto label_395f34;
        case 0x395f38u: goto label_395f38;
        case 0x395f3cu: goto label_395f3c;
        case 0x395f40u: goto label_395f40;
        case 0x395f44u: goto label_395f44;
        case 0x395f48u: goto label_395f48;
        case 0x395f4cu: goto label_395f4c;
        case 0x395f50u: goto label_395f50;
        case 0x395f54u: goto label_395f54;
        case 0x395f58u: goto label_395f58;
        case 0x395f5cu: goto label_395f5c;
        case 0x395f60u: goto label_395f60;
        case 0x395f64u: goto label_395f64;
        case 0x395f68u: goto label_395f68;
        case 0x395f6cu: goto label_395f6c;
        case 0x395f70u: goto label_395f70;
        case 0x395f74u: goto label_395f74;
        case 0x395f78u: goto label_395f78;
        case 0x395f7cu: goto label_395f7c;
        case 0x395f80u: goto label_395f80;
        case 0x395f84u: goto label_395f84;
        case 0x395f88u: goto label_395f88;
        case 0x395f8cu: goto label_395f8c;
        case 0x395f90u: goto label_395f90;
        case 0x395f94u: goto label_395f94;
        case 0x395f98u: goto label_395f98;
        case 0x395f9cu: goto label_395f9c;
        case 0x395fa0u: goto label_395fa0;
        case 0x395fa4u: goto label_395fa4;
        case 0x395fa8u: goto label_395fa8;
        case 0x395facu: goto label_395fac;
        case 0x395fb0u: goto label_395fb0;
        case 0x395fb4u: goto label_395fb4;
        case 0x395fb8u: goto label_395fb8;
        case 0x395fbcu: goto label_395fbc;
        case 0x395fc0u: goto label_395fc0;
        case 0x395fc4u: goto label_395fc4;
        case 0x395fc8u: goto label_395fc8;
        case 0x395fccu: goto label_395fcc;
        case 0x395fd0u: goto label_395fd0;
        case 0x395fd4u: goto label_395fd4;
        case 0x395fd8u: goto label_395fd8;
        case 0x395fdcu: goto label_395fdc;
        case 0x395fe0u: goto label_395fe0;
        case 0x395fe4u: goto label_395fe4;
        case 0x395fe8u: goto label_395fe8;
        case 0x395fecu: goto label_395fec;
        case 0x395ff0u: goto label_395ff0;
        case 0x395ff4u: goto label_395ff4;
        case 0x395ff8u: goto label_395ff8;
        case 0x395ffcu: goto label_395ffc;
        case 0x396000u: goto label_396000;
        case 0x396004u: goto label_396004;
        case 0x396008u: goto label_396008;
        case 0x39600cu: goto label_39600c;
        case 0x396010u: goto label_396010;
        case 0x396014u: goto label_396014;
        case 0x396018u: goto label_396018;
        case 0x39601cu: goto label_39601c;
        case 0x396020u: goto label_396020;
        case 0x396024u: goto label_396024;
        case 0x396028u: goto label_396028;
        case 0x39602cu: goto label_39602c;
        case 0x396030u: goto label_396030;
        case 0x396034u: goto label_396034;
        case 0x396038u: goto label_396038;
        case 0x39603cu: goto label_39603c;
        case 0x396040u: goto label_396040;
        case 0x396044u: goto label_396044;
        case 0x396048u: goto label_396048;
        case 0x39604cu: goto label_39604c;
        case 0x396050u: goto label_396050;
        case 0x396054u: goto label_396054;
        case 0x396058u: goto label_396058;
        case 0x39605cu: goto label_39605c;
        case 0x396060u: goto label_396060;
        case 0x396064u: goto label_396064;
        case 0x396068u: goto label_396068;
        case 0x39606cu: goto label_39606c;
        case 0x396070u: goto label_396070;
        case 0x396074u: goto label_396074;
        case 0x396078u: goto label_396078;
        case 0x39607cu: goto label_39607c;
        case 0x396080u: goto label_396080;
        case 0x396084u: goto label_396084;
        case 0x396088u: goto label_396088;
        case 0x39608cu: goto label_39608c;
        case 0x396090u: goto label_396090;
        case 0x396094u: goto label_396094;
        case 0x396098u: goto label_396098;
        case 0x39609cu: goto label_39609c;
        case 0x3960a0u: goto label_3960a0;
        case 0x3960a4u: goto label_3960a4;
        case 0x3960a8u: goto label_3960a8;
        case 0x3960acu: goto label_3960ac;
        case 0x3960b0u: goto label_3960b0;
        case 0x3960b4u: goto label_3960b4;
        case 0x3960b8u: goto label_3960b8;
        case 0x3960bcu: goto label_3960bc;
        case 0x3960c0u: goto label_3960c0;
        case 0x3960c4u: goto label_3960c4;
        case 0x3960c8u: goto label_3960c8;
        case 0x3960ccu: goto label_3960cc;
        case 0x3960d0u: goto label_3960d0;
        case 0x3960d4u: goto label_3960d4;
        case 0x3960d8u: goto label_3960d8;
        case 0x3960dcu: goto label_3960dc;
        case 0x3960e0u: goto label_3960e0;
        case 0x3960e4u: goto label_3960e4;
        case 0x3960e8u: goto label_3960e8;
        case 0x3960ecu: goto label_3960ec;
        case 0x3960f0u: goto label_3960f0;
        case 0x3960f4u: goto label_3960f4;
        case 0x3960f8u: goto label_3960f8;
        case 0x3960fcu: goto label_3960fc;
        case 0x396100u: goto label_396100;
        case 0x396104u: goto label_396104;
        case 0x396108u: goto label_396108;
        case 0x39610cu: goto label_39610c;
        case 0x396110u: goto label_396110;
        case 0x396114u: goto label_396114;
        case 0x396118u: goto label_396118;
        case 0x39611cu: goto label_39611c;
        case 0x396120u: goto label_396120;
        case 0x396124u: goto label_396124;
        case 0x396128u: goto label_396128;
        case 0x39612cu: goto label_39612c;
        case 0x396130u: goto label_396130;
        case 0x396134u: goto label_396134;
        case 0x396138u: goto label_396138;
        case 0x39613cu: goto label_39613c;
        case 0x396140u: goto label_396140;
        case 0x396144u: goto label_396144;
        case 0x396148u: goto label_396148;
        case 0x39614cu: goto label_39614c;
        case 0x396150u: goto label_396150;
        case 0x396154u: goto label_396154;
        case 0x396158u: goto label_396158;
        case 0x39615cu: goto label_39615c;
        case 0x396160u: goto label_396160;
        case 0x396164u: goto label_396164;
        case 0x396168u: goto label_396168;
        case 0x39616cu: goto label_39616c;
        case 0x396170u: goto label_396170;
        case 0x396174u: goto label_396174;
        case 0x396178u: goto label_396178;
        case 0x39617cu: goto label_39617c;
        case 0x396180u: goto label_396180;
        case 0x396184u: goto label_396184;
        case 0x396188u: goto label_396188;
        case 0x39618cu: goto label_39618c;
        case 0x396190u: goto label_396190;
        case 0x396194u: goto label_396194;
        case 0x396198u: goto label_396198;
        case 0x39619cu: goto label_39619c;
        case 0x3961a0u: goto label_3961a0;
        case 0x3961a4u: goto label_3961a4;
        case 0x3961a8u: goto label_3961a8;
        case 0x3961acu: goto label_3961ac;
        case 0x3961b0u: goto label_3961b0;
        case 0x3961b4u: goto label_3961b4;
        case 0x3961b8u: goto label_3961b8;
        case 0x3961bcu: goto label_3961bc;
        case 0x3961c0u: goto label_3961c0;
        case 0x3961c4u: goto label_3961c4;
        case 0x3961c8u: goto label_3961c8;
        case 0x3961ccu: goto label_3961cc;
        case 0x3961d0u: goto label_3961d0;
        case 0x3961d4u: goto label_3961d4;
        case 0x3961d8u: goto label_3961d8;
        case 0x3961dcu: goto label_3961dc;
        case 0x3961e0u: goto label_3961e0;
        case 0x3961e4u: goto label_3961e4;
        case 0x3961e8u: goto label_3961e8;
        case 0x3961ecu: goto label_3961ec;
        case 0x3961f0u: goto label_3961f0;
        case 0x3961f4u: goto label_3961f4;
        case 0x3961f8u: goto label_3961f8;
        case 0x3961fcu: goto label_3961fc;
        case 0x396200u: goto label_396200;
        case 0x396204u: goto label_396204;
        case 0x396208u: goto label_396208;
        case 0x39620cu: goto label_39620c;
        case 0x396210u: goto label_396210;
        case 0x396214u: goto label_396214;
        case 0x396218u: goto label_396218;
        case 0x39621cu: goto label_39621c;
        case 0x396220u: goto label_396220;
        case 0x396224u: goto label_396224;
        case 0x396228u: goto label_396228;
        case 0x39622cu: goto label_39622c;
        case 0x396230u: goto label_396230;
        case 0x396234u: goto label_396234;
        case 0x396238u: goto label_396238;
        case 0x39623cu: goto label_39623c;
        case 0x396240u: goto label_396240;
        case 0x396244u: goto label_396244;
        case 0x396248u: goto label_396248;
        case 0x39624cu: goto label_39624c;
        case 0x396250u: goto label_396250;
        case 0x396254u: goto label_396254;
        case 0x396258u: goto label_396258;
        case 0x39625cu: goto label_39625c;
        case 0x396260u: goto label_396260;
        case 0x396264u: goto label_396264;
        case 0x396268u: goto label_396268;
        case 0x39626cu: goto label_39626c;
        case 0x396270u: goto label_396270;
        case 0x396274u: goto label_396274;
        case 0x396278u: goto label_396278;
        case 0x39627cu: goto label_39627c;
        case 0x396280u: goto label_396280;
        case 0x396284u: goto label_396284;
        case 0x396288u: goto label_396288;
        case 0x39628cu: goto label_39628c;
        case 0x396290u: goto label_396290;
        case 0x396294u: goto label_396294;
        case 0x396298u: goto label_396298;
        case 0x39629cu: goto label_39629c;
        case 0x3962a0u: goto label_3962a0;
        case 0x3962a4u: goto label_3962a4;
        case 0x3962a8u: goto label_3962a8;
        case 0x3962acu: goto label_3962ac;
        case 0x3962b0u: goto label_3962b0;
        case 0x3962b4u: goto label_3962b4;
        case 0x3962b8u: goto label_3962b8;
        case 0x3962bcu: goto label_3962bc;
        case 0x3962c0u: goto label_3962c0;
        case 0x3962c4u: goto label_3962c4;
        case 0x3962c8u: goto label_3962c8;
        case 0x3962ccu: goto label_3962cc;
        case 0x3962d0u: goto label_3962d0;
        case 0x3962d4u: goto label_3962d4;
        case 0x3962d8u: goto label_3962d8;
        case 0x3962dcu: goto label_3962dc;
        case 0x3962e0u: goto label_3962e0;
        case 0x3962e4u: goto label_3962e4;
        case 0x3962e8u: goto label_3962e8;
        case 0x3962ecu: goto label_3962ec;
        case 0x3962f0u: goto label_3962f0;
        case 0x3962f4u: goto label_3962f4;
        case 0x3962f8u: goto label_3962f8;
        case 0x3962fcu: goto label_3962fc;
        case 0x396300u: goto label_396300;
        case 0x396304u: goto label_396304;
        case 0x396308u: goto label_396308;
        case 0x39630cu: goto label_39630c;
        case 0x396310u: goto label_396310;
        case 0x396314u: goto label_396314;
        case 0x396318u: goto label_396318;
        case 0x39631cu: goto label_39631c;
        case 0x396320u: goto label_396320;
        case 0x396324u: goto label_396324;
        case 0x396328u: goto label_396328;
        case 0x39632cu: goto label_39632c;
        case 0x396330u: goto label_396330;
        case 0x396334u: goto label_396334;
        case 0x396338u: goto label_396338;
        case 0x39633cu: goto label_39633c;
        case 0x396340u: goto label_396340;
        case 0x396344u: goto label_396344;
        case 0x396348u: goto label_396348;
        case 0x39634cu: goto label_39634c;
        case 0x396350u: goto label_396350;
        case 0x396354u: goto label_396354;
        case 0x396358u: goto label_396358;
        case 0x39635cu: goto label_39635c;
        case 0x396360u: goto label_396360;
        case 0x396364u: goto label_396364;
        case 0x396368u: goto label_396368;
        case 0x39636cu: goto label_39636c;
        case 0x396370u: goto label_396370;
        case 0x396374u: goto label_396374;
        case 0x396378u: goto label_396378;
        case 0x39637cu: goto label_39637c;
        case 0x396380u: goto label_396380;
        case 0x396384u: goto label_396384;
        case 0x396388u: goto label_396388;
        case 0x39638cu: goto label_39638c;
        case 0x396390u: goto label_396390;
        case 0x396394u: goto label_396394;
        case 0x396398u: goto label_396398;
        case 0x39639cu: goto label_39639c;
        case 0x3963a0u: goto label_3963a0;
        case 0x3963a4u: goto label_3963a4;
        case 0x3963a8u: goto label_3963a8;
        case 0x3963acu: goto label_3963ac;
        case 0x3963b0u: goto label_3963b0;
        case 0x3963b4u: goto label_3963b4;
        case 0x3963b8u: goto label_3963b8;
        case 0x3963bcu: goto label_3963bc;
        case 0x3963c0u: goto label_3963c0;
        case 0x3963c4u: goto label_3963c4;
        case 0x3963c8u: goto label_3963c8;
        case 0x3963ccu: goto label_3963cc;
        case 0x3963d0u: goto label_3963d0;
        case 0x3963d4u: goto label_3963d4;
        case 0x3963d8u: goto label_3963d8;
        case 0x3963dcu: goto label_3963dc;
        case 0x3963e0u: goto label_3963e0;
        case 0x3963e4u: goto label_3963e4;
        case 0x3963e8u: goto label_3963e8;
        case 0x3963ecu: goto label_3963ec;
        case 0x3963f0u: goto label_3963f0;
        case 0x3963f4u: goto label_3963f4;
        case 0x3963f8u: goto label_3963f8;
        case 0x3963fcu: goto label_3963fc;
        case 0x396400u: goto label_396400;
        case 0x396404u: goto label_396404;
        case 0x396408u: goto label_396408;
        case 0x39640cu: goto label_39640c;
        case 0x396410u: goto label_396410;
        case 0x396414u: goto label_396414;
        case 0x396418u: goto label_396418;
        case 0x39641cu: goto label_39641c;
        case 0x396420u: goto label_396420;
        case 0x396424u: goto label_396424;
        case 0x396428u: goto label_396428;
        case 0x39642cu: goto label_39642c;
        case 0x396430u: goto label_396430;
        case 0x396434u: goto label_396434;
        case 0x396438u: goto label_396438;
        case 0x39643cu: goto label_39643c;
        case 0x396440u: goto label_396440;
        case 0x396444u: goto label_396444;
        case 0x396448u: goto label_396448;
        case 0x39644cu: goto label_39644c;
        case 0x396450u: goto label_396450;
        case 0x396454u: goto label_396454;
        case 0x396458u: goto label_396458;
        case 0x39645cu: goto label_39645c;
        case 0x396460u: goto label_396460;
        case 0x396464u: goto label_396464;
        case 0x396468u: goto label_396468;
        case 0x39646cu: goto label_39646c;
        case 0x396470u: goto label_396470;
        case 0x396474u: goto label_396474;
        case 0x396478u: goto label_396478;
        case 0x39647cu: goto label_39647c;
        case 0x396480u: goto label_396480;
        case 0x396484u: goto label_396484;
        case 0x396488u: goto label_396488;
        case 0x39648cu: goto label_39648c;
        case 0x396490u: goto label_396490;
        case 0x396494u: goto label_396494;
        case 0x396498u: goto label_396498;
        case 0x39649cu: goto label_39649c;
        case 0x3964a0u: goto label_3964a0;
        case 0x3964a4u: goto label_3964a4;
        case 0x3964a8u: goto label_3964a8;
        case 0x3964acu: goto label_3964ac;
        case 0x3964b0u: goto label_3964b0;
        case 0x3964b4u: goto label_3964b4;
        case 0x3964b8u: goto label_3964b8;
        case 0x3964bcu: goto label_3964bc;
        case 0x3964c0u: goto label_3964c0;
        case 0x3964c4u: goto label_3964c4;
        case 0x3964c8u: goto label_3964c8;
        case 0x3964ccu: goto label_3964cc;
        case 0x3964d0u: goto label_3964d0;
        case 0x3964d4u: goto label_3964d4;
        case 0x3964d8u: goto label_3964d8;
        case 0x3964dcu: goto label_3964dc;
        case 0x3964e0u: goto label_3964e0;
        case 0x3964e4u: goto label_3964e4;
        case 0x3964e8u: goto label_3964e8;
        case 0x3964ecu: goto label_3964ec;
        case 0x3964f0u: goto label_3964f0;
        case 0x3964f4u: goto label_3964f4;
        case 0x3964f8u: goto label_3964f8;
        case 0x3964fcu: goto label_3964fc;
        case 0x396500u: goto label_396500;
        case 0x396504u: goto label_396504;
        case 0x396508u: goto label_396508;
        case 0x39650cu: goto label_39650c;
        case 0x396510u: goto label_396510;
        case 0x396514u: goto label_396514;
        case 0x396518u: goto label_396518;
        case 0x39651cu: goto label_39651c;
        case 0x396520u: goto label_396520;
        case 0x396524u: goto label_396524;
        case 0x396528u: goto label_396528;
        case 0x39652cu: goto label_39652c;
        case 0x396530u: goto label_396530;
        case 0x396534u: goto label_396534;
        case 0x396538u: goto label_396538;
        case 0x39653cu: goto label_39653c;
        case 0x396540u: goto label_396540;
        case 0x396544u: goto label_396544;
        case 0x396548u: goto label_396548;
        case 0x39654cu: goto label_39654c;
        case 0x396550u: goto label_396550;
        case 0x396554u: goto label_396554;
        case 0x396558u: goto label_396558;
        case 0x39655cu: goto label_39655c;
        case 0x396560u: goto label_396560;
        case 0x396564u: goto label_396564;
        case 0x396568u: goto label_396568;
        case 0x39656cu: goto label_39656c;
        case 0x396570u: goto label_396570;
        case 0x396574u: goto label_396574;
        case 0x396578u: goto label_396578;
        case 0x39657cu: goto label_39657c;
        case 0x396580u: goto label_396580;
        case 0x396584u: goto label_396584;
        case 0x396588u: goto label_396588;
        case 0x39658cu: goto label_39658c;
        case 0x396590u: goto label_396590;
        case 0x396594u: goto label_396594;
        case 0x396598u: goto label_396598;
        case 0x39659cu: goto label_39659c;
        case 0x3965a0u: goto label_3965a0;
        case 0x3965a4u: goto label_3965a4;
        case 0x3965a8u: goto label_3965a8;
        case 0x3965acu: goto label_3965ac;
        case 0x3965b0u: goto label_3965b0;
        case 0x3965b4u: goto label_3965b4;
        case 0x3965b8u: goto label_3965b8;
        case 0x3965bcu: goto label_3965bc;
        case 0x3965c0u: goto label_3965c0;
        case 0x3965c4u: goto label_3965c4;
        case 0x3965c8u: goto label_3965c8;
        case 0x3965ccu: goto label_3965cc;
        case 0x3965d0u: goto label_3965d0;
        case 0x3965d4u: goto label_3965d4;
        case 0x3965d8u: goto label_3965d8;
        case 0x3965dcu: goto label_3965dc;
        case 0x3965e0u: goto label_3965e0;
        case 0x3965e4u: goto label_3965e4;
        case 0x3965e8u: goto label_3965e8;
        case 0x3965ecu: goto label_3965ec;
        case 0x3965f0u: goto label_3965f0;
        case 0x3965f4u: goto label_3965f4;
        case 0x3965f8u: goto label_3965f8;
        case 0x3965fcu: goto label_3965fc;
        case 0x396600u: goto label_396600;
        case 0x396604u: goto label_396604;
        case 0x396608u: goto label_396608;
        case 0x39660cu: goto label_39660c;
        case 0x396610u: goto label_396610;
        case 0x396614u: goto label_396614;
        case 0x396618u: goto label_396618;
        case 0x39661cu: goto label_39661c;
        case 0x396620u: goto label_396620;
        case 0x396624u: goto label_396624;
        case 0x396628u: goto label_396628;
        case 0x39662cu: goto label_39662c;
        case 0x396630u: goto label_396630;
        case 0x396634u: goto label_396634;
        case 0x396638u: goto label_396638;
        case 0x39663cu: goto label_39663c;
        case 0x396640u: goto label_396640;
        case 0x396644u: goto label_396644;
        case 0x396648u: goto label_396648;
        case 0x39664cu: goto label_39664c;
        case 0x396650u: goto label_396650;
        case 0x396654u: goto label_396654;
        case 0x396658u: goto label_396658;
        case 0x39665cu: goto label_39665c;
        case 0x396660u: goto label_396660;
        case 0x396664u: goto label_396664;
        case 0x396668u: goto label_396668;
        case 0x39666cu: goto label_39666c;
        case 0x396670u: goto label_396670;
        case 0x396674u: goto label_396674;
        case 0x396678u: goto label_396678;
        case 0x39667cu: goto label_39667c;
        case 0x396680u: goto label_396680;
        case 0x396684u: goto label_396684;
        case 0x396688u: goto label_396688;
        case 0x39668cu: goto label_39668c;
        case 0x396690u: goto label_396690;
        case 0x396694u: goto label_396694;
        case 0x396698u: goto label_396698;
        case 0x39669cu: goto label_39669c;
        case 0x3966a0u: goto label_3966a0;
        case 0x3966a4u: goto label_3966a4;
        case 0x3966a8u: goto label_3966a8;
        case 0x3966acu: goto label_3966ac;
        case 0x3966b0u: goto label_3966b0;
        case 0x3966b4u: goto label_3966b4;
        case 0x3966b8u: goto label_3966b8;
        case 0x3966bcu: goto label_3966bc;
        case 0x3966c0u: goto label_3966c0;
        case 0x3966c4u: goto label_3966c4;
        case 0x3966c8u: goto label_3966c8;
        case 0x3966ccu: goto label_3966cc;
        case 0x3966d0u: goto label_3966d0;
        case 0x3966d4u: goto label_3966d4;
        case 0x3966d8u: goto label_3966d8;
        case 0x3966dcu: goto label_3966dc;
        case 0x3966e0u: goto label_3966e0;
        case 0x3966e4u: goto label_3966e4;
        case 0x3966e8u: goto label_3966e8;
        case 0x3966ecu: goto label_3966ec;
        case 0x3966f0u: goto label_3966f0;
        case 0x3966f4u: goto label_3966f4;
        case 0x3966f8u: goto label_3966f8;
        case 0x3966fcu: goto label_3966fc;
        case 0x396700u: goto label_396700;
        case 0x396704u: goto label_396704;
        case 0x396708u: goto label_396708;
        case 0x39670cu: goto label_39670c;
        case 0x396710u: goto label_396710;
        case 0x396714u: goto label_396714;
        case 0x396718u: goto label_396718;
        case 0x39671cu: goto label_39671c;
        case 0x396720u: goto label_396720;
        case 0x396724u: goto label_396724;
        case 0x396728u: goto label_396728;
        case 0x39672cu: goto label_39672c;
        case 0x396730u: goto label_396730;
        case 0x396734u: goto label_396734;
        case 0x396738u: goto label_396738;
        case 0x39673cu: goto label_39673c;
        case 0x396740u: goto label_396740;
        case 0x396744u: goto label_396744;
        case 0x396748u: goto label_396748;
        case 0x39674cu: goto label_39674c;
        case 0x396750u: goto label_396750;
        case 0x396754u: goto label_396754;
        case 0x396758u: goto label_396758;
        case 0x39675cu: goto label_39675c;
        case 0x396760u: goto label_396760;
        case 0x396764u: goto label_396764;
        case 0x396768u: goto label_396768;
        case 0x39676cu: goto label_39676c;
        case 0x396770u: goto label_396770;
        case 0x396774u: goto label_396774;
        case 0x396778u: goto label_396778;
        case 0x39677cu: goto label_39677c;
        case 0x396780u: goto label_396780;
        case 0x396784u: goto label_396784;
        case 0x396788u: goto label_396788;
        case 0x39678cu: goto label_39678c;
        case 0x396790u: goto label_396790;
        case 0x396794u: goto label_396794;
        case 0x396798u: goto label_396798;
        case 0x39679cu: goto label_39679c;
        case 0x3967a0u: goto label_3967a0;
        case 0x3967a4u: goto label_3967a4;
        case 0x3967a8u: goto label_3967a8;
        case 0x3967acu: goto label_3967ac;
        case 0x3967b0u: goto label_3967b0;
        case 0x3967b4u: goto label_3967b4;
        case 0x3967b8u: goto label_3967b8;
        case 0x3967bcu: goto label_3967bc;
        case 0x3967c0u: goto label_3967c0;
        case 0x3967c4u: goto label_3967c4;
        case 0x3967c8u: goto label_3967c8;
        case 0x3967ccu: goto label_3967cc;
        case 0x3967d0u: goto label_3967d0;
        case 0x3967d4u: goto label_3967d4;
        case 0x3967d8u: goto label_3967d8;
        case 0x3967dcu: goto label_3967dc;
        case 0x3967e0u: goto label_3967e0;
        case 0x3967e4u: goto label_3967e4;
        case 0x3967e8u: goto label_3967e8;
        case 0x3967ecu: goto label_3967ec;
        case 0x3967f0u: goto label_3967f0;
        case 0x3967f4u: goto label_3967f4;
        case 0x3967f8u: goto label_3967f8;
        case 0x3967fcu: goto label_3967fc;
        case 0x396800u: goto label_396800;
        case 0x396804u: goto label_396804;
        case 0x396808u: goto label_396808;
        case 0x39680cu: goto label_39680c;
        case 0x396810u: goto label_396810;
        case 0x396814u: goto label_396814;
        case 0x396818u: goto label_396818;
        case 0x39681cu: goto label_39681c;
        case 0x396820u: goto label_396820;
        case 0x396824u: goto label_396824;
        case 0x396828u: goto label_396828;
        case 0x39682cu: goto label_39682c;
        case 0x396830u: goto label_396830;
        case 0x396834u: goto label_396834;
        case 0x396838u: goto label_396838;
        case 0x39683cu: goto label_39683c;
        case 0x396840u: goto label_396840;
        case 0x396844u: goto label_396844;
        case 0x396848u: goto label_396848;
        case 0x39684cu: goto label_39684c;
        case 0x396850u: goto label_396850;
        case 0x396854u: goto label_396854;
        case 0x396858u: goto label_396858;
        case 0x39685cu: goto label_39685c;
        case 0x396860u: goto label_396860;
        case 0x396864u: goto label_396864;
        case 0x396868u: goto label_396868;
        case 0x39686cu: goto label_39686c;
        case 0x396870u: goto label_396870;
        case 0x396874u: goto label_396874;
        case 0x396878u: goto label_396878;
        case 0x39687cu: goto label_39687c;
        case 0x396880u: goto label_396880;
        case 0x396884u: goto label_396884;
        case 0x396888u: goto label_396888;
        case 0x39688cu: goto label_39688c;
        case 0x396890u: goto label_396890;
        case 0x396894u: goto label_396894;
        case 0x396898u: goto label_396898;
        case 0x39689cu: goto label_39689c;
        case 0x3968a0u: goto label_3968a0;
        case 0x3968a4u: goto label_3968a4;
        case 0x3968a8u: goto label_3968a8;
        case 0x3968acu: goto label_3968ac;
        case 0x3968b0u: goto label_3968b0;
        case 0x3968b4u: goto label_3968b4;
        case 0x3968b8u: goto label_3968b8;
        case 0x3968bcu: goto label_3968bc;
        case 0x3968c0u: goto label_3968c0;
        case 0x3968c4u: goto label_3968c4;
        case 0x3968c8u: goto label_3968c8;
        case 0x3968ccu: goto label_3968cc;
        case 0x3968d0u: goto label_3968d0;
        case 0x3968d4u: goto label_3968d4;
        case 0x3968d8u: goto label_3968d8;
        case 0x3968dcu: goto label_3968dc;
        case 0x3968e0u: goto label_3968e0;
        case 0x3968e4u: goto label_3968e4;
        case 0x3968e8u: goto label_3968e8;
        case 0x3968ecu: goto label_3968ec;
        case 0x3968f0u: goto label_3968f0;
        case 0x3968f4u: goto label_3968f4;
        case 0x3968f8u: goto label_3968f8;
        case 0x3968fcu: goto label_3968fc;
        case 0x396900u: goto label_396900;
        case 0x396904u: goto label_396904;
        case 0x396908u: goto label_396908;
        case 0x39690cu: goto label_39690c;
        case 0x396910u: goto label_396910;
        case 0x396914u: goto label_396914;
        case 0x396918u: goto label_396918;
        case 0x39691cu: goto label_39691c;
        case 0x396920u: goto label_396920;
        case 0x396924u: goto label_396924;
        case 0x396928u: goto label_396928;
        case 0x39692cu: goto label_39692c;
        case 0x396930u: goto label_396930;
        case 0x396934u: goto label_396934;
        case 0x396938u: goto label_396938;
        case 0x39693cu: goto label_39693c;
        case 0x396940u: goto label_396940;
        case 0x396944u: goto label_396944;
        case 0x396948u: goto label_396948;
        case 0x39694cu: goto label_39694c;
        case 0x396950u: goto label_396950;
        case 0x396954u: goto label_396954;
        case 0x396958u: goto label_396958;
        case 0x39695cu: goto label_39695c;
        case 0x396960u: goto label_396960;
        case 0x396964u: goto label_396964;
        case 0x396968u: goto label_396968;
        case 0x39696cu: goto label_39696c;
        case 0x396970u: goto label_396970;
        case 0x396974u: goto label_396974;
        case 0x396978u: goto label_396978;
        case 0x39697cu: goto label_39697c;
        case 0x396980u: goto label_396980;
        case 0x396984u: goto label_396984;
        case 0x396988u: goto label_396988;
        case 0x39698cu: goto label_39698c;
        case 0x396990u: goto label_396990;
        case 0x396994u: goto label_396994;
        case 0x396998u: goto label_396998;
        case 0x39699cu: goto label_39699c;
        case 0x3969a0u: goto label_3969a0;
        case 0x3969a4u: goto label_3969a4;
        case 0x3969a8u: goto label_3969a8;
        case 0x3969acu: goto label_3969ac;
        case 0x3969b0u: goto label_3969b0;
        case 0x3969b4u: goto label_3969b4;
        case 0x3969b8u: goto label_3969b8;
        case 0x3969bcu: goto label_3969bc;
        case 0x3969c0u: goto label_3969c0;
        case 0x3969c4u: goto label_3969c4;
        case 0x3969c8u: goto label_3969c8;
        case 0x3969ccu: goto label_3969cc;
        case 0x3969d0u: goto label_3969d0;
        case 0x3969d4u: goto label_3969d4;
        case 0x3969d8u: goto label_3969d8;
        case 0x3969dcu: goto label_3969dc;
        case 0x3969e0u: goto label_3969e0;
        case 0x3969e4u: goto label_3969e4;
        case 0x3969e8u: goto label_3969e8;
        case 0x3969ecu: goto label_3969ec;
        case 0x3969f0u: goto label_3969f0;
        case 0x3969f4u: goto label_3969f4;
        case 0x3969f8u: goto label_3969f8;
        case 0x3969fcu: goto label_3969fc;
        case 0x396a00u: goto label_396a00;
        case 0x396a04u: goto label_396a04;
        case 0x396a08u: goto label_396a08;
        case 0x396a0cu: goto label_396a0c;
        case 0x396a10u: goto label_396a10;
        case 0x396a14u: goto label_396a14;
        case 0x396a18u: goto label_396a18;
        case 0x396a1cu: goto label_396a1c;
        case 0x396a20u: goto label_396a20;
        case 0x396a24u: goto label_396a24;
        case 0x396a28u: goto label_396a28;
        case 0x396a2cu: goto label_396a2c;
        case 0x396a30u: goto label_396a30;
        case 0x396a34u: goto label_396a34;
        case 0x396a38u: goto label_396a38;
        case 0x396a3cu: goto label_396a3c;
        case 0x396a40u: goto label_396a40;
        case 0x396a44u: goto label_396a44;
        case 0x396a48u: goto label_396a48;
        case 0x396a4cu: goto label_396a4c;
        case 0x396a50u: goto label_396a50;
        case 0x396a54u: goto label_396a54;
        case 0x396a58u: goto label_396a58;
        case 0x396a5cu: goto label_396a5c;
        case 0x396a60u: goto label_396a60;
        case 0x396a64u: goto label_396a64;
        case 0x396a68u: goto label_396a68;
        case 0x396a6cu: goto label_396a6c;
        case 0x396a70u: goto label_396a70;
        case 0x396a74u: goto label_396a74;
        case 0x396a78u: goto label_396a78;
        case 0x396a7cu: goto label_396a7c;
        case 0x396a80u: goto label_396a80;
        case 0x396a84u: goto label_396a84;
        case 0x396a88u: goto label_396a88;
        case 0x396a8cu: goto label_396a8c;
        case 0x396a90u: goto label_396a90;
        case 0x396a94u: goto label_396a94;
        case 0x396a98u: goto label_396a98;
        case 0x396a9cu: goto label_396a9c;
        case 0x396aa0u: goto label_396aa0;
        case 0x396aa4u: goto label_396aa4;
        case 0x396aa8u: goto label_396aa8;
        case 0x396aacu: goto label_396aac;
        case 0x396ab0u: goto label_396ab0;
        case 0x396ab4u: goto label_396ab4;
        case 0x396ab8u: goto label_396ab8;
        case 0x396abcu: goto label_396abc;
        case 0x396ac0u: goto label_396ac0;
        case 0x396ac4u: goto label_396ac4;
        case 0x396ac8u: goto label_396ac8;
        case 0x396accu: goto label_396acc;
        case 0x396ad0u: goto label_396ad0;
        case 0x396ad4u: goto label_396ad4;
        case 0x396ad8u: goto label_396ad8;
        case 0x396adcu: goto label_396adc;
        case 0x396ae0u: goto label_396ae0;
        case 0x396ae4u: goto label_396ae4;
        case 0x396ae8u: goto label_396ae8;
        case 0x396aecu: goto label_396aec;
        case 0x396af0u: goto label_396af0;
        case 0x396af4u: goto label_396af4;
        case 0x396af8u: goto label_396af8;
        case 0x396afcu: goto label_396afc;
        case 0x396b00u: goto label_396b00;
        case 0x396b04u: goto label_396b04;
        case 0x396b08u: goto label_396b08;
        case 0x396b0cu: goto label_396b0c;
        case 0x396b10u: goto label_396b10;
        case 0x396b14u: goto label_396b14;
        case 0x396b18u: goto label_396b18;
        case 0x396b1cu: goto label_396b1c;
        case 0x396b20u: goto label_396b20;
        case 0x396b24u: goto label_396b24;
        case 0x396b28u: goto label_396b28;
        case 0x396b2cu: goto label_396b2c;
        case 0x396b30u: goto label_396b30;
        case 0x396b34u: goto label_396b34;
        case 0x396b38u: goto label_396b38;
        case 0x396b3cu: goto label_396b3c;
        case 0x396b40u: goto label_396b40;
        case 0x396b44u: goto label_396b44;
        case 0x396b48u: goto label_396b48;
        case 0x396b4cu: goto label_396b4c;
        case 0x396b50u: goto label_396b50;
        case 0x396b54u: goto label_396b54;
        case 0x396b58u: goto label_396b58;
        case 0x396b5cu: goto label_396b5c;
        case 0x396b60u: goto label_396b60;
        case 0x396b64u: goto label_396b64;
        case 0x396b68u: goto label_396b68;
        case 0x396b6cu: goto label_396b6c;
        case 0x396b70u: goto label_396b70;
        case 0x396b74u: goto label_396b74;
        case 0x396b78u: goto label_396b78;
        case 0x396b7cu: goto label_396b7c;
        case 0x396b80u: goto label_396b80;
        case 0x396b84u: goto label_396b84;
        case 0x396b88u: goto label_396b88;
        case 0x396b8cu: goto label_396b8c;
        case 0x396b90u: goto label_396b90;
        case 0x396b94u: goto label_396b94;
        case 0x396b98u: goto label_396b98;
        case 0x396b9cu: goto label_396b9c;
        case 0x396ba0u: goto label_396ba0;
        case 0x396ba4u: goto label_396ba4;
        case 0x396ba8u: goto label_396ba8;
        case 0x396bacu: goto label_396bac;
        case 0x396bb0u: goto label_396bb0;
        case 0x396bb4u: goto label_396bb4;
        case 0x396bb8u: goto label_396bb8;
        case 0x396bbcu: goto label_396bbc;
        case 0x396bc0u: goto label_396bc0;
        case 0x396bc4u: goto label_396bc4;
        case 0x396bc8u: goto label_396bc8;
        case 0x396bccu: goto label_396bcc;
        case 0x396bd0u: goto label_396bd0;
        case 0x396bd4u: goto label_396bd4;
        case 0x396bd8u: goto label_396bd8;
        case 0x396bdcu: goto label_396bdc;
        case 0x396be0u: goto label_396be0;
        case 0x396be4u: goto label_396be4;
        case 0x396be8u: goto label_396be8;
        case 0x396becu: goto label_396bec;
        case 0x396bf0u: goto label_396bf0;
        case 0x396bf4u: goto label_396bf4;
        case 0x396bf8u: goto label_396bf8;
        case 0x396bfcu: goto label_396bfc;
        case 0x396c00u: goto label_396c00;
        case 0x396c04u: goto label_396c04;
        case 0x396c08u: goto label_396c08;
        case 0x396c0cu: goto label_396c0c;
        case 0x396c10u: goto label_396c10;
        case 0x396c14u: goto label_396c14;
        case 0x396c18u: goto label_396c18;
        case 0x396c1cu: goto label_396c1c;
        case 0x396c20u: goto label_396c20;
        case 0x396c24u: goto label_396c24;
        case 0x396c28u: goto label_396c28;
        case 0x396c2cu: goto label_396c2c;
        case 0x396c30u: goto label_396c30;
        case 0x396c34u: goto label_396c34;
        case 0x396c38u: goto label_396c38;
        case 0x396c3cu: goto label_396c3c;
        case 0x396c40u: goto label_396c40;
        case 0x396c44u: goto label_396c44;
        case 0x396c48u: goto label_396c48;
        case 0x396c4cu: goto label_396c4c;
        case 0x396c50u: goto label_396c50;
        case 0x396c54u: goto label_396c54;
        case 0x396c58u: goto label_396c58;
        case 0x396c5cu: goto label_396c5c;
        case 0x396c60u: goto label_396c60;
        case 0x396c64u: goto label_396c64;
        case 0x396c68u: goto label_396c68;
        case 0x396c6cu: goto label_396c6c;
        case 0x396c70u: goto label_396c70;
        case 0x396c74u: goto label_396c74;
        case 0x396c78u: goto label_396c78;
        case 0x396c7cu: goto label_396c7c;
        case 0x396c80u: goto label_396c80;
        case 0x396c84u: goto label_396c84;
        case 0x396c88u: goto label_396c88;
        case 0x396c8cu: goto label_396c8c;
        case 0x396c90u: goto label_396c90;
        case 0x396c94u: goto label_396c94;
        case 0x396c98u: goto label_396c98;
        case 0x396c9cu: goto label_396c9c;
        case 0x396ca0u: goto label_396ca0;
        case 0x396ca4u: goto label_396ca4;
        case 0x396ca8u: goto label_396ca8;
        case 0x396cacu: goto label_396cac;
        case 0x396cb0u: goto label_396cb0;
        case 0x396cb4u: goto label_396cb4;
        case 0x396cb8u: goto label_396cb8;
        case 0x396cbcu: goto label_396cbc;
        case 0x396cc0u: goto label_396cc0;
        case 0x396cc4u: goto label_396cc4;
        case 0x396cc8u: goto label_396cc8;
        case 0x396cccu: goto label_396ccc;
        case 0x396cd0u: goto label_396cd0;
        case 0x396cd4u: goto label_396cd4;
        case 0x396cd8u: goto label_396cd8;
        case 0x396cdcu: goto label_396cdc;
        case 0x396ce0u: goto label_396ce0;
        case 0x396ce4u: goto label_396ce4;
        case 0x396ce8u: goto label_396ce8;
        case 0x396cecu: goto label_396cec;
        case 0x396cf0u: goto label_396cf0;
        case 0x396cf4u: goto label_396cf4;
        case 0x396cf8u: goto label_396cf8;
        case 0x396cfcu: goto label_396cfc;
        case 0x396d00u: goto label_396d00;
        case 0x396d04u: goto label_396d04;
        case 0x396d08u: goto label_396d08;
        case 0x396d0cu: goto label_396d0c;
        case 0x396d10u: goto label_396d10;
        case 0x396d14u: goto label_396d14;
        case 0x396d18u: goto label_396d18;
        case 0x396d1cu: goto label_396d1c;
        case 0x396d20u: goto label_396d20;
        case 0x396d24u: goto label_396d24;
        case 0x396d28u: goto label_396d28;
        case 0x396d2cu: goto label_396d2c;
        case 0x396d30u: goto label_396d30;
        case 0x396d34u: goto label_396d34;
        case 0x396d38u: goto label_396d38;
        case 0x396d3cu: goto label_396d3c;
        case 0x396d40u: goto label_396d40;
        case 0x396d44u: goto label_396d44;
        case 0x396d48u: goto label_396d48;
        case 0x396d4cu: goto label_396d4c;
        case 0x396d50u: goto label_396d50;
        case 0x396d54u: goto label_396d54;
        case 0x396d58u: goto label_396d58;
        case 0x396d5cu: goto label_396d5c;
        case 0x396d60u: goto label_396d60;
        case 0x396d64u: goto label_396d64;
        case 0x396d68u: goto label_396d68;
        case 0x396d6cu: goto label_396d6c;
        case 0x396d70u: goto label_396d70;
        case 0x396d74u: goto label_396d74;
        case 0x396d78u: goto label_396d78;
        case 0x396d7cu: goto label_396d7c;
        case 0x396d80u: goto label_396d80;
        case 0x396d84u: goto label_396d84;
        case 0x396d88u: goto label_396d88;
        case 0x396d8cu: goto label_396d8c;
        case 0x396d90u: goto label_396d90;
        case 0x396d94u: goto label_396d94;
        case 0x396d98u: goto label_396d98;
        case 0x396d9cu: goto label_396d9c;
        case 0x396da0u: goto label_396da0;
        case 0x396da4u: goto label_396da4;
        case 0x396da8u: goto label_396da8;
        case 0x396dacu: goto label_396dac;
        case 0x396db0u: goto label_396db0;
        case 0x396db4u: goto label_396db4;
        case 0x396db8u: goto label_396db8;
        case 0x396dbcu: goto label_396dbc;
        case 0x396dc0u: goto label_396dc0;
        case 0x396dc4u: goto label_396dc4;
        case 0x396dc8u: goto label_396dc8;
        case 0x396dccu: goto label_396dcc;
        case 0x396dd0u: goto label_396dd0;
        case 0x396dd4u: goto label_396dd4;
        case 0x396dd8u: goto label_396dd8;
        case 0x396ddcu: goto label_396ddc;
        case 0x396de0u: goto label_396de0;
        case 0x396de4u: goto label_396de4;
        case 0x396de8u: goto label_396de8;
        case 0x396decu: goto label_396dec;
        case 0x396df0u: goto label_396df0;
        case 0x396df4u: goto label_396df4;
        case 0x396df8u: goto label_396df8;
        case 0x396dfcu: goto label_396dfc;
        case 0x396e00u: goto label_396e00;
        case 0x396e04u: goto label_396e04;
        case 0x396e08u: goto label_396e08;
        case 0x396e0cu: goto label_396e0c;
        case 0x396e10u: goto label_396e10;
        case 0x396e14u: goto label_396e14;
        case 0x396e18u: goto label_396e18;
        case 0x396e1cu: goto label_396e1c;
        case 0x396e20u: goto label_396e20;
        case 0x396e24u: goto label_396e24;
        case 0x396e28u: goto label_396e28;
        case 0x396e2cu: goto label_396e2c;
        case 0x396e30u: goto label_396e30;
        case 0x396e34u: goto label_396e34;
        case 0x396e38u: goto label_396e38;
        case 0x396e3cu: goto label_396e3c;
        case 0x396e40u: goto label_396e40;
        case 0x396e44u: goto label_396e44;
        case 0x396e48u: goto label_396e48;
        case 0x396e4cu: goto label_396e4c;
        case 0x396e50u: goto label_396e50;
        case 0x396e54u: goto label_396e54;
        case 0x396e58u: goto label_396e58;
        case 0x396e5cu: goto label_396e5c;
        case 0x396e60u: goto label_396e60;
        case 0x396e64u: goto label_396e64;
        case 0x396e68u: goto label_396e68;
        case 0x396e6cu: goto label_396e6c;
        case 0x396e70u: goto label_396e70;
        case 0x396e74u: goto label_396e74;
        case 0x396e78u: goto label_396e78;
        case 0x396e7cu: goto label_396e7c;
        case 0x396e80u: goto label_396e80;
        case 0x396e84u: goto label_396e84;
        case 0x396e88u: goto label_396e88;
        case 0x396e8cu: goto label_396e8c;
        case 0x396e90u: goto label_396e90;
        case 0x396e94u: goto label_396e94;
        case 0x396e98u: goto label_396e98;
        case 0x396e9cu: goto label_396e9c;
        case 0x396ea0u: goto label_396ea0;
        case 0x396ea4u: goto label_396ea4;
        case 0x396ea8u: goto label_396ea8;
        case 0x396eacu: goto label_396eac;
        case 0x396eb0u: goto label_396eb0;
        case 0x396eb4u: goto label_396eb4;
        case 0x396eb8u: goto label_396eb8;
        case 0x396ebcu: goto label_396ebc;
        case 0x396ec0u: goto label_396ec0;
        case 0x396ec4u: goto label_396ec4;
        case 0x396ec8u: goto label_396ec8;
        case 0x396eccu: goto label_396ecc;
        case 0x396ed0u: goto label_396ed0;
        case 0x396ed4u: goto label_396ed4;
        case 0x396ed8u: goto label_396ed8;
        case 0x396edcu: goto label_396edc;
        case 0x396ee0u: goto label_396ee0;
        case 0x396ee4u: goto label_396ee4;
        case 0x396ee8u: goto label_396ee8;
        case 0x396eecu: goto label_396eec;
        case 0x396ef0u: goto label_396ef0;
        case 0x396ef4u: goto label_396ef4;
        case 0x396ef8u: goto label_396ef8;
        case 0x396efcu: goto label_396efc;
        case 0x396f00u: goto label_396f00;
        case 0x396f04u: goto label_396f04;
        case 0x396f08u: goto label_396f08;
        case 0x396f0cu: goto label_396f0c;
        case 0x396f10u: goto label_396f10;
        case 0x396f14u: goto label_396f14;
        case 0x396f18u: goto label_396f18;
        case 0x396f1cu: goto label_396f1c;
        case 0x396f20u: goto label_396f20;
        case 0x396f24u: goto label_396f24;
        case 0x396f28u: goto label_396f28;
        case 0x396f2cu: goto label_396f2c;
        case 0x396f30u: goto label_396f30;
        case 0x396f34u: goto label_396f34;
        case 0x396f38u: goto label_396f38;
        case 0x396f3cu: goto label_396f3c;
        case 0x396f40u: goto label_396f40;
        case 0x396f44u: goto label_396f44;
        case 0x396f48u: goto label_396f48;
        case 0x396f4cu: goto label_396f4c;
        case 0x396f50u: goto label_396f50;
        case 0x396f54u: goto label_396f54;
        case 0x396f58u: goto label_396f58;
        case 0x396f5cu: goto label_396f5c;
        case 0x396f60u: goto label_396f60;
        case 0x396f64u: goto label_396f64;
        case 0x396f68u: goto label_396f68;
        case 0x396f6cu: goto label_396f6c;
        case 0x396f70u: goto label_396f70;
        case 0x396f74u: goto label_396f74;
        case 0x396f78u: goto label_396f78;
        case 0x396f7cu: goto label_396f7c;
        case 0x396f80u: goto label_396f80;
        case 0x396f84u: goto label_396f84;
        case 0x396f88u: goto label_396f88;
        case 0x396f8cu: goto label_396f8c;
        case 0x396f90u: goto label_396f90;
        case 0x396f94u: goto label_396f94;
        case 0x396f98u: goto label_396f98;
        case 0x396f9cu: goto label_396f9c;
        case 0x396fa0u: goto label_396fa0;
        case 0x396fa4u: goto label_396fa4;
        case 0x396fa8u: goto label_396fa8;
        case 0x396facu: goto label_396fac;
        case 0x396fb0u: goto label_396fb0;
        case 0x396fb4u: goto label_396fb4;
        case 0x396fb8u: goto label_396fb8;
        case 0x396fbcu: goto label_396fbc;
        case 0x396fc0u: goto label_396fc0;
        case 0x396fc4u: goto label_396fc4;
        case 0x396fc8u: goto label_396fc8;
        case 0x396fccu: goto label_396fcc;
        case 0x396fd0u: goto label_396fd0;
        case 0x396fd4u: goto label_396fd4;
        case 0x396fd8u: goto label_396fd8;
        case 0x396fdcu: goto label_396fdc;
        case 0x396fe0u: goto label_396fe0;
        case 0x396fe4u: goto label_396fe4;
        case 0x396fe8u: goto label_396fe8;
        case 0x396fecu: goto label_396fec;
        case 0x396ff0u: goto label_396ff0;
        case 0x396ff4u: goto label_396ff4;
        case 0x396ff8u: goto label_396ff8;
        case 0x396ffcu: goto label_396ffc;
        case 0x397000u: goto label_397000;
        case 0x397004u: goto label_397004;
        case 0x397008u: goto label_397008;
        case 0x39700cu: goto label_39700c;
        case 0x397010u: goto label_397010;
        case 0x397014u: goto label_397014;
        case 0x397018u: goto label_397018;
        case 0x39701cu: goto label_39701c;
        case 0x397020u: goto label_397020;
        case 0x397024u: goto label_397024;
        case 0x397028u: goto label_397028;
        case 0x39702cu: goto label_39702c;
        case 0x397030u: goto label_397030;
        case 0x397034u: goto label_397034;
        case 0x397038u: goto label_397038;
        case 0x39703cu: goto label_39703c;
        case 0x397040u: goto label_397040;
        case 0x397044u: goto label_397044;
        case 0x397048u: goto label_397048;
        case 0x39704cu: goto label_39704c;
        case 0x397050u: goto label_397050;
        case 0x397054u: goto label_397054;
        case 0x397058u: goto label_397058;
        case 0x39705cu: goto label_39705c;
        case 0x397060u: goto label_397060;
        case 0x397064u: goto label_397064;
        case 0x397068u: goto label_397068;
        case 0x39706cu: goto label_39706c;
        case 0x397070u: goto label_397070;
        case 0x397074u: goto label_397074;
        case 0x397078u: goto label_397078;
        case 0x39707cu: goto label_39707c;
        case 0x397080u: goto label_397080;
        case 0x397084u: goto label_397084;
        case 0x397088u: goto label_397088;
        case 0x39708cu: goto label_39708c;
        case 0x397090u: goto label_397090;
        case 0x397094u: goto label_397094;
        case 0x397098u: goto label_397098;
        case 0x39709cu: goto label_39709c;
        case 0x3970a0u: goto label_3970a0;
        case 0x3970a4u: goto label_3970a4;
        case 0x3970a8u: goto label_3970a8;
        case 0x3970acu: goto label_3970ac;
        case 0x3970b0u: goto label_3970b0;
        case 0x3970b4u: goto label_3970b4;
        case 0x3970b8u: goto label_3970b8;
        case 0x3970bcu: goto label_3970bc;
        case 0x3970c0u: goto label_3970c0;
        case 0x3970c4u: goto label_3970c4;
        case 0x3970c8u: goto label_3970c8;
        case 0x3970ccu: goto label_3970cc;
        case 0x3970d0u: goto label_3970d0;
        case 0x3970d4u: goto label_3970d4;
        case 0x3970d8u: goto label_3970d8;
        case 0x3970dcu: goto label_3970dc;
        case 0x3970e0u: goto label_3970e0;
        case 0x3970e4u: goto label_3970e4;
        case 0x3970e8u: goto label_3970e8;
        case 0x3970ecu: goto label_3970ec;
        case 0x3970f0u: goto label_3970f0;
        case 0x3970f4u: goto label_3970f4;
        case 0x3970f8u: goto label_3970f8;
        case 0x3970fcu: goto label_3970fc;
        case 0x397100u: goto label_397100;
        case 0x397104u: goto label_397104;
        case 0x397108u: goto label_397108;
        case 0x39710cu: goto label_39710c;
        case 0x397110u: goto label_397110;
        case 0x397114u: goto label_397114;
        case 0x397118u: goto label_397118;
        case 0x39711cu: goto label_39711c;
        case 0x397120u: goto label_397120;
        case 0x397124u: goto label_397124;
        case 0x397128u: goto label_397128;
        case 0x39712cu: goto label_39712c;
        case 0x397130u: goto label_397130;
        case 0x397134u: goto label_397134;
        case 0x397138u: goto label_397138;
        case 0x39713cu: goto label_39713c;
        case 0x397140u: goto label_397140;
        case 0x397144u: goto label_397144;
        case 0x397148u: goto label_397148;
        case 0x39714cu: goto label_39714c;
        case 0x397150u: goto label_397150;
        case 0x397154u: goto label_397154;
        case 0x397158u: goto label_397158;
        case 0x39715cu: goto label_39715c;
        case 0x397160u: goto label_397160;
        case 0x397164u: goto label_397164;
        case 0x397168u: goto label_397168;
        case 0x39716cu: goto label_39716c;
        case 0x397170u: goto label_397170;
        case 0x397174u: goto label_397174;
        case 0x397178u: goto label_397178;
        case 0x39717cu: goto label_39717c;
        case 0x397180u: goto label_397180;
        case 0x397184u: goto label_397184;
        case 0x397188u: goto label_397188;
        case 0x39718cu: goto label_39718c;
        case 0x397190u: goto label_397190;
        case 0x397194u: goto label_397194;
        case 0x397198u: goto label_397198;
        case 0x39719cu: goto label_39719c;
        case 0x3971a0u: goto label_3971a0;
        case 0x3971a4u: goto label_3971a4;
        case 0x3971a8u: goto label_3971a8;
        case 0x3971acu: goto label_3971ac;
        case 0x3971b0u: goto label_3971b0;
        case 0x3971b4u: goto label_3971b4;
        case 0x3971b8u: goto label_3971b8;
        case 0x3971bcu: goto label_3971bc;
        case 0x3971c0u: goto label_3971c0;
        case 0x3971c4u: goto label_3971c4;
        case 0x3971c8u: goto label_3971c8;
        case 0x3971ccu: goto label_3971cc;
        case 0x3971d0u: goto label_3971d0;
        case 0x3971d4u: goto label_3971d4;
        case 0x3971d8u: goto label_3971d8;
        case 0x3971dcu: goto label_3971dc;
        case 0x3971e0u: goto label_3971e0;
        case 0x3971e4u: goto label_3971e4;
        case 0x3971e8u: goto label_3971e8;
        case 0x3971ecu: goto label_3971ec;
        case 0x3971f0u: goto label_3971f0;
        case 0x3971f4u: goto label_3971f4;
        case 0x3971f8u: goto label_3971f8;
        case 0x3971fcu: goto label_3971fc;
        case 0x397200u: goto label_397200;
        case 0x397204u: goto label_397204;
        case 0x397208u: goto label_397208;
        case 0x39720cu: goto label_39720c;
        case 0x397210u: goto label_397210;
        case 0x397214u: goto label_397214;
        case 0x397218u: goto label_397218;
        case 0x39721cu: goto label_39721c;
        case 0x397220u: goto label_397220;
        case 0x397224u: goto label_397224;
        case 0x397228u: goto label_397228;
        case 0x39722cu: goto label_39722c;
        case 0x397230u: goto label_397230;
        case 0x397234u: goto label_397234;
        case 0x397238u: goto label_397238;
        case 0x39723cu: goto label_39723c;
        case 0x397240u: goto label_397240;
        case 0x397244u: goto label_397244;
        case 0x397248u: goto label_397248;
        case 0x39724cu: goto label_39724c;
        case 0x397250u: goto label_397250;
        case 0x397254u: goto label_397254;
        case 0x397258u: goto label_397258;
        case 0x39725cu: goto label_39725c;
        case 0x397260u: goto label_397260;
        case 0x397264u: goto label_397264;
        case 0x397268u: goto label_397268;
        case 0x39726cu: goto label_39726c;
        case 0x397270u: goto label_397270;
        case 0x397274u: goto label_397274;
        case 0x397278u: goto label_397278;
        case 0x39727cu: goto label_39727c;
        case 0x397280u: goto label_397280;
        case 0x397284u: goto label_397284;
        case 0x397288u: goto label_397288;
        case 0x39728cu: goto label_39728c;
        case 0x397290u: goto label_397290;
        case 0x397294u: goto label_397294;
        case 0x397298u: goto label_397298;
        case 0x39729cu: goto label_39729c;
        case 0x3972a0u: goto label_3972a0;
        case 0x3972a4u: goto label_3972a4;
        case 0x3972a8u: goto label_3972a8;
        case 0x3972acu: goto label_3972ac;
        case 0x3972b0u: goto label_3972b0;
        case 0x3972b4u: goto label_3972b4;
        case 0x3972b8u: goto label_3972b8;
        case 0x3972bcu: goto label_3972bc;
        case 0x3972c0u: goto label_3972c0;
        case 0x3972c4u: goto label_3972c4;
        case 0x3972c8u: goto label_3972c8;
        case 0x3972ccu: goto label_3972cc;
        case 0x3972d0u: goto label_3972d0;
        case 0x3972d4u: goto label_3972d4;
        case 0x3972d8u: goto label_3972d8;
        case 0x3972dcu: goto label_3972dc;
        case 0x3972e0u: goto label_3972e0;
        case 0x3972e4u: goto label_3972e4;
        case 0x3972e8u: goto label_3972e8;
        case 0x3972ecu: goto label_3972ec;
        case 0x3972f0u: goto label_3972f0;
        case 0x3972f4u: goto label_3972f4;
        case 0x3972f8u: goto label_3972f8;
        case 0x3972fcu: goto label_3972fc;
        case 0x397300u: goto label_397300;
        case 0x397304u: goto label_397304;
        case 0x397308u: goto label_397308;
        case 0x39730cu: goto label_39730c;
        case 0x397310u: goto label_397310;
        case 0x397314u: goto label_397314;
        case 0x397318u: goto label_397318;
        case 0x39731cu: goto label_39731c;
        case 0x397320u: goto label_397320;
        case 0x397324u: goto label_397324;
        case 0x397328u: goto label_397328;
        case 0x39732cu: goto label_39732c;
        case 0x397330u: goto label_397330;
        case 0x397334u: goto label_397334;
        case 0x397338u: goto label_397338;
        case 0x39733cu: goto label_39733c;
        case 0x397340u: goto label_397340;
        case 0x397344u: goto label_397344;
        case 0x397348u: goto label_397348;
        case 0x39734cu: goto label_39734c;
        case 0x397350u: goto label_397350;
        case 0x397354u: goto label_397354;
        case 0x397358u: goto label_397358;
        case 0x39735cu: goto label_39735c;
        case 0x397360u: goto label_397360;
        case 0x397364u: goto label_397364;
        case 0x397368u: goto label_397368;
        case 0x39736cu: goto label_39736c;
        case 0x397370u: goto label_397370;
        case 0x397374u: goto label_397374;
        case 0x397378u: goto label_397378;
        case 0x39737cu: goto label_39737c;
        case 0x397380u: goto label_397380;
        case 0x397384u: goto label_397384;
        case 0x397388u: goto label_397388;
        case 0x39738cu: goto label_39738c;
        case 0x397390u: goto label_397390;
        case 0x397394u: goto label_397394;
        case 0x397398u: goto label_397398;
        case 0x39739cu: goto label_39739c;
        case 0x3973a0u: goto label_3973a0;
        case 0x3973a4u: goto label_3973a4;
        case 0x3973a8u: goto label_3973a8;
        case 0x3973acu: goto label_3973ac;
        case 0x3973b0u: goto label_3973b0;
        case 0x3973b4u: goto label_3973b4;
        case 0x3973b8u: goto label_3973b8;
        case 0x3973bcu: goto label_3973bc;
        case 0x3973c0u: goto label_3973c0;
        case 0x3973c4u: goto label_3973c4;
        case 0x3973c8u: goto label_3973c8;
        case 0x3973ccu: goto label_3973cc;
        case 0x3973d0u: goto label_3973d0;
        case 0x3973d4u: goto label_3973d4;
        case 0x3973d8u: goto label_3973d8;
        case 0x3973dcu: goto label_3973dc;
        case 0x3973e0u: goto label_3973e0;
        case 0x3973e4u: goto label_3973e4;
        case 0x3973e8u: goto label_3973e8;
        case 0x3973ecu: goto label_3973ec;
        case 0x3973f0u: goto label_3973f0;
        case 0x3973f4u: goto label_3973f4;
        case 0x3973f8u: goto label_3973f8;
        case 0x3973fcu: goto label_3973fc;
        case 0x397400u: goto label_397400;
        case 0x397404u: goto label_397404;
        case 0x397408u: goto label_397408;
        case 0x39740cu: goto label_39740c;
        case 0x397410u: goto label_397410;
        case 0x397414u: goto label_397414;
        case 0x397418u: goto label_397418;
        case 0x39741cu: goto label_39741c;
        case 0x397420u: goto label_397420;
        case 0x397424u: goto label_397424;
        case 0x397428u: goto label_397428;
        case 0x39742cu: goto label_39742c;
        case 0x397430u: goto label_397430;
        case 0x397434u: goto label_397434;
        case 0x397438u: goto label_397438;
        case 0x39743cu: goto label_39743c;
        case 0x397440u: goto label_397440;
        case 0x397444u: goto label_397444;
        case 0x397448u: goto label_397448;
        case 0x39744cu: goto label_39744c;
        case 0x397450u: goto label_397450;
        case 0x397454u: goto label_397454;
        case 0x397458u: goto label_397458;
        case 0x39745cu: goto label_39745c;
        case 0x397460u: goto label_397460;
        case 0x397464u: goto label_397464;
        case 0x397468u: goto label_397468;
        case 0x39746cu: goto label_39746c;
        case 0x397470u: goto label_397470;
        case 0x397474u: goto label_397474;
        case 0x397478u: goto label_397478;
        case 0x39747cu: goto label_39747c;
        case 0x397480u: goto label_397480;
        case 0x397484u: goto label_397484;
        case 0x397488u: goto label_397488;
        case 0x39748cu: goto label_39748c;
        case 0x397490u: goto label_397490;
        case 0x397494u: goto label_397494;
        case 0x397498u: goto label_397498;
        case 0x39749cu: goto label_39749c;
        case 0x3974a0u: goto label_3974a0;
        case 0x3974a4u: goto label_3974a4;
        case 0x3974a8u: goto label_3974a8;
        case 0x3974acu: goto label_3974ac;
        case 0x3974b0u: goto label_3974b0;
        case 0x3974b4u: goto label_3974b4;
        case 0x3974b8u: goto label_3974b8;
        case 0x3974bcu: goto label_3974bc;
        case 0x3974c0u: goto label_3974c0;
        case 0x3974c4u: goto label_3974c4;
        case 0x3974c8u: goto label_3974c8;
        case 0x3974ccu: goto label_3974cc;
        case 0x3974d0u: goto label_3974d0;
        case 0x3974d4u: goto label_3974d4;
        case 0x3974d8u: goto label_3974d8;
        case 0x3974dcu: goto label_3974dc;
        case 0x3974e0u: goto label_3974e0;
        case 0x3974e4u: goto label_3974e4;
        case 0x3974e8u: goto label_3974e8;
        case 0x3974ecu: goto label_3974ec;
        case 0x3974f0u: goto label_3974f0;
        case 0x3974f4u: goto label_3974f4;
        case 0x3974f8u: goto label_3974f8;
        case 0x3974fcu: goto label_3974fc;
        case 0x397500u: goto label_397500;
        case 0x397504u: goto label_397504;
        case 0x397508u: goto label_397508;
        case 0x39750cu: goto label_39750c;
        case 0x397510u: goto label_397510;
        case 0x397514u: goto label_397514;
        case 0x397518u: goto label_397518;
        case 0x39751cu: goto label_39751c;
        case 0x397520u: goto label_397520;
        case 0x397524u: goto label_397524;
        case 0x397528u: goto label_397528;
        case 0x39752cu: goto label_39752c;
        case 0x397530u: goto label_397530;
        case 0x397534u: goto label_397534;
        case 0x397538u: goto label_397538;
        case 0x39753cu: goto label_39753c;
        case 0x397540u: goto label_397540;
        case 0x397544u: goto label_397544;
        case 0x397548u: goto label_397548;
        case 0x39754cu: goto label_39754c;
        case 0x397550u: goto label_397550;
        case 0x397554u: goto label_397554;
        case 0x397558u: goto label_397558;
        case 0x39755cu: goto label_39755c;
        case 0x397560u: goto label_397560;
        case 0x397564u: goto label_397564;
        case 0x397568u: goto label_397568;
        case 0x39756cu: goto label_39756c;
        case 0x397570u: goto label_397570;
        case 0x397574u: goto label_397574;
        case 0x397578u: goto label_397578;
        case 0x39757cu: goto label_39757c;
        case 0x397580u: goto label_397580;
        case 0x397584u: goto label_397584;
        case 0x397588u: goto label_397588;
        case 0x39758cu: goto label_39758c;
        case 0x397590u: goto label_397590;
        case 0x397594u: goto label_397594;
        case 0x397598u: goto label_397598;
        case 0x39759cu: goto label_39759c;
        case 0x3975a0u: goto label_3975a0;
        case 0x3975a4u: goto label_3975a4;
        case 0x3975a8u: goto label_3975a8;
        case 0x3975acu: goto label_3975ac;
        case 0x3975b0u: goto label_3975b0;
        case 0x3975b4u: goto label_3975b4;
        case 0x3975b8u: goto label_3975b8;
        case 0x3975bcu: goto label_3975bc;
        case 0x3975c0u: goto label_3975c0;
        case 0x3975c4u: goto label_3975c4;
        case 0x3975c8u: goto label_3975c8;
        case 0x3975ccu: goto label_3975cc;
        case 0x3975d0u: goto label_3975d0;
        case 0x3975d4u: goto label_3975d4;
        case 0x3975d8u: goto label_3975d8;
        case 0x3975dcu: goto label_3975dc;
        case 0x3975e0u: goto label_3975e0;
        case 0x3975e4u: goto label_3975e4;
        case 0x3975e8u: goto label_3975e8;
        case 0x3975ecu: goto label_3975ec;
        case 0x3975f0u: goto label_3975f0;
        case 0x3975f4u: goto label_3975f4;
        case 0x3975f8u: goto label_3975f8;
        case 0x3975fcu: goto label_3975fc;
        case 0x397600u: goto label_397600;
        case 0x397604u: goto label_397604;
        case 0x397608u: goto label_397608;
        case 0x39760cu: goto label_39760c;
        case 0x397610u: goto label_397610;
        case 0x397614u: goto label_397614;
        case 0x397618u: goto label_397618;
        case 0x39761cu: goto label_39761c;
        case 0x397620u: goto label_397620;
        case 0x397624u: goto label_397624;
        case 0x397628u: goto label_397628;
        case 0x39762cu: goto label_39762c;
        case 0x397630u: goto label_397630;
        case 0x397634u: goto label_397634;
        case 0x397638u: goto label_397638;
        case 0x39763cu: goto label_39763c;
        case 0x397640u: goto label_397640;
        case 0x397644u: goto label_397644;
        case 0x397648u: goto label_397648;
        case 0x39764cu: goto label_39764c;
        case 0x397650u: goto label_397650;
        case 0x397654u: goto label_397654;
        case 0x397658u: goto label_397658;
        case 0x39765cu: goto label_39765c;
        case 0x397660u: goto label_397660;
        case 0x397664u: goto label_397664;
        case 0x397668u: goto label_397668;
        case 0x39766cu: goto label_39766c;
        case 0x397670u: goto label_397670;
        case 0x397674u: goto label_397674;
        case 0x397678u: goto label_397678;
        case 0x39767cu: goto label_39767c;
        case 0x397680u: goto label_397680;
        case 0x397684u: goto label_397684;
        case 0x397688u: goto label_397688;
        case 0x39768cu: goto label_39768c;
        case 0x397690u: goto label_397690;
        case 0x397694u: goto label_397694;
        case 0x397698u: goto label_397698;
        case 0x39769cu: goto label_39769c;
        case 0x3976a0u: goto label_3976a0;
        case 0x3976a4u: goto label_3976a4;
        case 0x3976a8u: goto label_3976a8;
        case 0x3976acu: goto label_3976ac;
        case 0x3976b0u: goto label_3976b0;
        case 0x3976b4u: goto label_3976b4;
        case 0x3976b8u: goto label_3976b8;
        case 0x3976bcu: goto label_3976bc;
        case 0x3976c0u: goto label_3976c0;
        case 0x3976c4u: goto label_3976c4;
        case 0x3976c8u: goto label_3976c8;
        case 0x3976ccu: goto label_3976cc;
        case 0x3976d0u: goto label_3976d0;
        case 0x3976d4u: goto label_3976d4;
        case 0x3976d8u: goto label_3976d8;
        case 0x3976dcu: goto label_3976dc;
        case 0x3976e0u: goto label_3976e0;
        case 0x3976e4u: goto label_3976e4;
        case 0x3976e8u: goto label_3976e8;
        case 0x3976ecu: goto label_3976ec;
        case 0x3976f0u: goto label_3976f0;
        case 0x3976f4u: goto label_3976f4;
        case 0x3976f8u: goto label_3976f8;
        case 0x3976fcu: goto label_3976fc;
        case 0x397700u: goto label_397700;
        case 0x397704u: goto label_397704;
        case 0x397708u: goto label_397708;
        case 0x39770cu: goto label_39770c;
        case 0x397710u: goto label_397710;
        case 0x397714u: goto label_397714;
        case 0x397718u: goto label_397718;
        case 0x39771cu: goto label_39771c;
        case 0x397720u: goto label_397720;
        case 0x397724u: goto label_397724;
        case 0x397728u: goto label_397728;
        case 0x39772cu: goto label_39772c;
        case 0x397730u: goto label_397730;
        case 0x397734u: goto label_397734;
        case 0x397738u: goto label_397738;
        case 0x39773cu: goto label_39773c;
        case 0x397740u: goto label_397740;
        case 0x397744u: goto label_397744;
        case 0x397748u: goto label_397748;
        case 0x39774cu: goto label_39774c;
        case 0x397750u: goto label_397750;
        case 0x397754u: goto label_397754;
        case 0x397758u: goto label_397758;
        case 0x39775cu: goto label_39775c;
        case 0x397760u: goto label_397760;
        case 0x397764u: goto label_397764;
        case 0x397768u: goto label_397768;
        case 0x39776cu: goto label_39776c;
        case 0x397770u: goto label_397770;
        case 0x397774u: goto label_397774;
        case 0x397778u: goto label_397778;
        case 0x39777cu: goto label_39777c;
        case 0x397780u: goto label_397780;
        case 0x397784u: goto label_397784;
        case 0x397788u: goto label_397788;
        case 0x39778cu: goto label_39778c;
        case 0x397790u: goto label_397790;
        case 0x397794u: goto label_397794;
        case 0x397798u: goto label_397798;
        case 0x39779cu: goto label_39779c;
        case 0x3977a0u: goto label_3977a0;
        case 0x3977a4u: goto label_3977a4;
        case 0x3977a8u: goto label_3977a8;
        case 0x3977acu: goto label_3977ac;
        case 0x3977b0u: goto label_3977b0;
        case 0x3977b4u: goto label_3977b4;
        case 0x3977b8u: goto label_3977b8;
        case 0x3977bcu: goto label_3977bc;
        case 0x3977c0u: goto label_3977c0;
        case 0x3977c4u: goto label_3977c4;
        case 0x3977c8u: goto label_3977c8;
        case 0x3977ccu: goto label_3977cc;
        case 0x3977d0u: goto label_3977d0;
        case 0x3977d4u: goto label_3977d4;
        case 0x3977d8u: goto label_3977d8;
        case 0x3977dcu: goto label_3977dc;
        case 0x3977e0u: goto label_3977e0;
        case 0x3977e4u: goto label_3977e4;
        case 0x3977e8u: goto label_3977e8;
        case 0x3977ecu: goto label_3977ec;
        case 0x3977f0u: goto label_3977f0;
        case 0x3977f4u: goto label_3977f4;
        case 0x3977f8u: goto label_3977f8;
        case 0x3977fcu: goto label_3977fc;
        case 0x397800u: goto label_397800;
        case 0x397804u: goto label_397804;
        case 0x397808u: goto label_397808;
        case 0x39780cu: goto label_39780c;
        case 0x397810u: goto label_397810;
        case 0x397814u: goto label_397814;
        case 0x397818u: goto label_397818;
        case 0x39781cu: goto label_39781c;
        case 0x397820u: goto label_397820;
        case 0x397824u: goto label_397824;
        case 0x397828u: goto label_397828;
        case 0x39782cu: goto label_39782c;
        case 0x397830u: goto label_397830;
        case 0x397834u: goto label_397834;
        case 0x397838u: goto label_397838;
        case 0x39783cu: goto label_39783c;
        case 0x397840u: goto label_397840;
        case 0x397844u: goto label_397844;
        case 0x397848u: goto label_397848;
        case 0x39784cu: goto label_39784c;
        case 0x397850u: goto label_397850;
        case 0x397854u: goto label_397854;
        case 0x397858u: goto label_397858;
        case 0x39785cu: goto label_39785c;
        case 0x397860u: goto label_397860;
        case 0x397864u: goto label_397864;
        case 0x397868u: goto label_397868;
        case 0x39786cu: goto label_39786c;
        case 0x397870u: goto label_397870;
        case 0x397874u: goto label_397874;
        case 0x397878u: goto label_397878;
        case 0x39787cu: goto label_39787c;
        case 0x397880u: goto label_397880;
        case 0x397884u: goto label_397884;
        case 0x397888u: goto label_397888;
        case 0x39788cu: goto label_39788c;
        case 0x397890u: goto label_397890;
        case 0x397894u: goto label_397894;
        case 0x397898u: goto label_397898;
        case 0x39789cu: goto label_39789c;
        case 0x3978a0u: goto label_3978a0;
        case 0x3978a4u: goto label_3978a4;
        case 0x3978a8u: goto label_3978a8;
        case 0x3978acu: goto label_3978ac;
        case 0x3978b0u: goto label_3978b0;
        case 0x3978b4u: goto label_3978b4;
        case 0x3978b8u: goto label_3978b8;
        case 0x3978bcu: goto label_3978bc;
        case 0x3978c0u: goto label_3978c0;
        case 0x3978c4u: goto label_3978c4;
        case 0x3978c8u: goto label_3978c8;
        case 0x3978ccu: goto label_3978cc;
        case 0x3978d0u: goto label_3978d0;
        case 0x3978d4u: goto label_3978d4;
        case 0x3978d8u: goto label_3978d8;
        case 0x3978dcu: goto label_3978dc;
        case 0x3978e0u: goto label_3978e0;
        case 0x3978e4u: goto label_3978e4;
        case 0x3978e8u: goto label_3978e8;
        case 0x3978ecu: goto label_3978ec;
        case 0x3978f0u: goto label_3978f0;
        case 0x3978f4u: goto label_3978f4;
        case 0x3978f8u: goto label_3978f8;
        case 0x3978fcu: goto label_3978fc;
        case 0x397900u: goto label_397900;
        case 0x397904u: goto label_397904;
        case 0x397908u: goto label_397908;
        case 0x39790cu: goto label_39790c;
        case 0x397910u: goto label_397910;
        case 0x397914u: goto label_397914;
        case 0x397918u: goto label_397918;
        case 0x39791cu: goto label_39791c;
        case 0x397920u: goto label_397920;
        case 0x397924u: goto label_397924;
        case 0x397928u: goto label_397928;
        case 0x39792cu: goto label_39792c;
        case 0x397930u: goto label_397930;
        case 0x397934u: goto label_397934;
        case 0x397938u: goto label_397938;
        case 0x39793cu: goto label_39793c;
        case 0x397940u: goto label_397940;
        case 0x397944u: goto label_397944;
        case 0x397948u: goto label_397948;
        case 0x39794cu: goto label_39794c;
        case 0x397950u: goto label_397950;
        case 0x397954u: goto label_397954;
        case 0x397958u: goto label_397958;
        case 0x39795cu: goto label_39795c;
        case 0x397960u: goto label_397960;
        case 0x397964u: goto label_397964;
        case 0x397968u: goto label_397968;
        case 0x39796cu: goto label_39796c;
        case 0x397970u: goto label_397970;
        case 0x397974u: goto label_397974;
        case 0x397978u: goto label_397978;
        case 0x39797cu: goto label_39797c;
        case 0x397980u: goto label_397980;
        case 0x397984u: goto label_397984;
        case 0x397988u: goto label_397988;
        case 0x39798cu: goto label_39798c;
        case 0x397990u: goto label_397990;
        case 0x397994u: goto label_397994;
        case 0x397998u: goto label_397998;
        case 0x39799cu: goto label_39799c;
        case 0x3979a0u: goto label_3979a0;
        case 0x3979a4u: goto label_3979a4;
        case 0x3979a8u: goto label_3979a8;
        case 0x3979acu: goto label_3979ac;
        case 0x3979b0u: goto label_3979b0;
        case 0x3979b4u: goto label_3979b4;
        case 0x3979b8u: goto label_3979b8;
        case 0x3979bcu: goto label_3979bc;
        case 0x3979c0u: goto label_3979c0;
        case 0x3979c4u: goto label_3979c4;
        case 0x3979c8u: goto label_3979c8;
        case 0x3979ccu: goto label_3979cc;
        case 0x3979d0u: goto label_3979d0;
        case 0x3979d4u: goto label_3979d4;
        case 0x3979d8u: goto label_3979d8;
        case 0x3979dcu: goto label_3979dc;
        case 0x3979e0u: goto label_3979e0;
        case 0x3979e4u: goto label_3979e4;
        case 0x3979e8u: goto label_3979e8;
        case 0x3979ecu: goto label_3979ec;
        case 0x3979f0u: goto label_3979f0;
        case 0x3979f4u: goto label_3979f4;
        case 0x3979f8u: goto label_3979f8;
        case 0x3979fcu: goto label_3979fc;
        case 0x397a00u: goto label_397a00;
        case 0x397a04u: goto label_397a04;
        case 0x397a08u: goto label_397a08;
        case 0x397a0cu: goto label_397a0c;
        case 0x397a10u: goto label_397a10;
        case 0x397a14u: goto label_397a14;
        case 0x397a18u: goto label_397a18;
        case 0x397a1cu: goto label_397a1c;
        case 0x397a20u: goto label_397a20;
        case 0x397a24u: goto label_397a24;
        case 0x397a28u: goto label_397a28;
        case 0x397a2cu: goto label_397a2c;
        case 0x397a30u: goto label_397a30;
        case 0x397a34u: goto label_397a34;
        case 0x397a38u: goto label_397a38;
        case 0x397a3cu: goto label_397a3c;
        case 0x397a40u: goto label_397a40;
        case 0x397a44u: goto label_397a44;
        case 0x397a48u: goto label_397a48;
        case 0x397a4cu: goto label_397a4c;
        case 0x397a50u: goto label_397a50;
        case 0x397a54u: goto label_397a54;
        case 0x397a58u: goto label_397a58;
        case 0x397a5cu: goto label_397a5c;
        case 0x397a60u: goto label_397a60;
        case 0x397a64u: goto label_397a64;
        case 0x397a68u: goto label_397a68;
        case 0x397a6cu: goto label_397a6c;
        case 0x397a70u: goto label_397a70;
        case 0x397a74u: goto label_397a74;
        case 0x397a78u: goto label_397a78;
        case 0x397a7cu: goto label_397a7c;
        case 0x397a80u: goto label_397a80;
        case 0x397a84u: goto label_397a84;
        case 0x397a88u: goto label_397a88;
        case 0x397a8cu: goto label_397a8c;
        case 0x397a90u: goto label_397a90;
        case 0x397a94u: goto label_397a94;
        case 0x397a98u: goto label_397a98;
        case 0x397a9cu: goto label_397a9c;
        case 0x397aa0u: goto label_397aa0;
        case 0x397aa4u: goto label_397aa4;
        case 0x397aa8u: goto label_397aa8;
        case 0x397aacu: goto label_397aac;
        case 0x397ab0u: goto label_397ab0;
        case 0x397ab4u: goto label_397ab4;
        case 0x397ab8u: goto label_397ab8;
        case 0x397abcu: goto label_397abc;
        case 0x397ac0u: goto label_397ac0;
        case 0x397ac4u: goto label_397ac4;
        case 0x397ac8u: goto label_397ac8;
        case 0x397accu: goto label_397acc;
        case 0x397ad0u: goto label_397ad0;
        case 0x397ad4u: goto label_397ad4;
        case 0x397ad8u: goto label_397ad8;
        case 0x397adcu: goto label_397adc;
        case 0x397ae0u: goto label_397ae0;
        case 0x397ae4u: goto label_397ae4;
        case 0x397ae8u: goto label_397ae8;
        case 0x397aecu: goto label_397aec;
        case 0x397af0u: goto label_397af0;
        case 0x397af4u: goto label_397af4;
        case 0x397af8u: goto label_397af8;
        case 0x397afcu: goto label_397afc;
        case 0x397b00u: goto label_397b00;
        case 0x397b04u: goto label_397b04;
        case 0x397b08u: goto label_397b08;
        case 0x397b0cu: goto label_397b0c;
        case 0x397b10u: goto label_397b10;
        case 0x397b14u: goto label_397b14;
        case 0x397b18u: goto label_397b18;
        case 0x397b1cu: goto label_397b1c;
        case 0x397b20u: goto label_397b20;
        case 0x397b24u: goto label_397b24;
        case 0x397b28u: goto label_397b28;
        case 0x397b2cu: goto label_397b2c;
        case 0x397b30u: goto label_397b30;
        case 0x397b34u: goto label_397b34;
        case 0x397b38u: goto label_397b38;
        case 0x397b3cu: goto label_397b3c;
        case 0x397b40u: goto label_397b40;
        case 0x397b44u: goto label_397b44;
        case 0x397b48u: goto label_397b48;
        case 0x397b4cu: goto label_397b4c;
        case 0x397b50u: goto label_397b50;
        case 0x397b54u: goto label_397b54;
        case 0x397b58u: goto label_397b58;
        case 0x397b5cu: goto label_397b5c;
        case 0x397b60u: goto label_397b60;
        case 0x397b64u: goto label_397b64;
        case 0x397b68u: goto label_397b68;
        case 0x397b6cu: goto label_397b6c;
        case 0x397b70u: goto label_397b70;
        case 0x397b74u: goto label_397b74;
        case 0x397b78u: goto label_397b78;
        case 0x397b7cu: goto label_397b7c;
        case 0x397b80u: goto label_397b80;
        case 0x397b84u: goto label_397b84;
        case 0x397b88u: goto label_397b88;
        case 0x397b8cu: goto label_397b8c;
        case 0x397b90u: goto label_397b90;
        case 0x397b94u: goto label_397b94;
        case 0x397b98u: goto label_397b98;
        case 0x397b9cu: goto label_397b9c;
        case 0x397ba0u: goto label_397ba0;
        case 0x397ba4u: goto label_397ba4;
        case 0x397ba8u: goto label_397ba8;
        case 0x397bacu: goto label_397bac;
        case 0x397bb0u: goto label_397bb0;
        case 0x397bb4u: goto label_397bb4;
        case 0x397bb8u: goto label_397bb8;
        case 0x397bbcu: goto label_397bbc;
        case 0x397bc0u: goto label_397bc0;
        case 0x397bc4u: goto label_397bc4;
        case 0x397bc8u: goto label_397bc8;
        case 0x397bccu: goto label_397bcc;
        case 0x397bd0u: goto label_397bd0;
        case 0x397bd4u: goto label_397bd4;
        case 0x397bd8u: goto label_397bd8;
        case 0x397bdcu: goto label_397bdc;
        case 0x397be0u: goto label_397be0;
        case 0x397be4u: goto label_397be4;
        case 0x397be8u: goto label_397be8;
        case 0x397becu: goto label_397bec;
        case 0x397bf0u: goto label_397bf0;
        case 0x397bf4u: goto label_397bf4;
        case 0x397bf8u: goto label_397bf8;
        case 0x397bfcu: goto label_397bfc;
        case 0x397c00u: goto label_397c00;
        case 0x397c04u: goto label_397c04;
        case 0x397c08u: goto label_397c08;
        case 0x397c0cu: goto label_397c0c;
        case 0x397c10u: goto label_397c10;
        case 0x397c14u: goto label_397c14;
        case 0x397c18u: goto label_397c18;
        case 0x397c1cu: goto label_397c1c;
        case 0x397c20u: goto label_397c20;
        case 0x397c24u: goto label_397c24;
        case 0x397c28u: goto label_397c28;
        case 0x397c2cu: goto label_397c2c;
        case 0x397c30u: goto label_397c30;
        case 0x397c34u: goto label_397c34;
        case 0x397c38u: goto label_397c38;
        case 0x397c3cu: goto label_397c3c;
        case 0x397c40u: goto label_397c40;
        case 0x397c44u: goto label_397c44;
        case 0x397c48u: goto label_397c48;
        case 0x397c4cu: goto label_397c4c;
        case 0x397c50u: goto label_397c50;
        case 0x397c54u: goto label_397c54;
        case 0x397c58u: goto label_397c58;
        case 0x397c5cu: goto label_397c5c;
        case 0x397c60u: goto label_397c60;
        case 0x397c64u: goto label_397c64;
        case 0x397c68u: goto label_397c68;
        case 0x397c6cu: goto label_397c6c;
        case 0x397c70u: goto label_397c70;
        case 0x397c74u: goto label_397c74;
        case 0x397c78u: goto label_397c78;
        case 0x397c7cu: goto label_397c7c;
        case 0x397c80u: goto label_397c80;
        case 0x397c84u: goto label_397c84;
        case 0x397c88u: goto label_397c88;
        case 0x397c8cu: goto label_397c8c;
        case 0x397c90u: goto label_397c90;
        case 0x397c94u: goto label_397c94;
        case 0x397c98u: goto label_397c98;
        case 0x397c9cu: goto label_397c9c;
        case 0x397ca0u: goto label_397ca0;
        case 0x397ca4u: goto label_397ca4;
        case 0x397ca8u: goto label_397ca8;
        case 0x397cacu: goto label_397cac;
        case 0x397cb0u: goto label_397cb0;
        case 0x397cb4u: goto label_397cb4;
        case 0x397cb8u: goto label_397cb8;
        case 0x397cbcu: goto label_397cbc;
        case 0x397cc0u: goto label_397cc0;
        case 0x397cc4u: goto label_397cc4;
        case 0x397cc8u: goto label_397cc8;
        case 0x397cccu: goto label_397ccc;
        case 0x397cd0u: goto label_397cd0;
        case 0x397cd4u: goto label_397cd4;
        case 0x397cd8u: goto label_397cd8;
        case 0x397cdcu: goto label_397cdc;
        case 0x397ce0u: goto label_397ce0;
        case 0x397ce4u: goto label_397ce4;
        case 0x397ce8u: goto label_397ce8;
        case 0x397cecu: goto label_397cec;
        case 0x397cf0u: goto label_397cf0;
        case 0x397cf4u: goto label_397cf4;
        case 0x397cf8u: goto label_397cf8;
        case 0x397cfcu: goto label_397cfc;
        case 0x397d00u: goto label_397d00;
        case 0x397d04u: goto label_397d04;
        case 0x397d08u: goto label_397d08;
        case 0x397d0cu: goto label_397d0c;
        case 0x397d10u: goto label_397d10;
        case 0x397d14u: goto label_397d14;
        case 0x397d18u: goto label_397d18;
        case 0x397d1cu: goto label_397d1c;
        case 0x397d20u: goto label_397d20;
        case 0x397d24u: goto label_397d24;
        case 0x397d28u: goto label_397d28;
        case 0x397d2cu: goto label_397d2c;
        case 0x397d30u: goto label_397d30;
        case 0x397d34u: goto label_397d34;
        case 0x397d38u: goto label_397d38;
        case 0x397d3cu: goto label_397d3c;
        case 0x397d40u: goto label_397d40;
        case 0x397d44u: goto label_397d44;
        case 0x397d48u: goto label_397d48;
        case 0x397d4cu: goto label_397d4c;
        case 0x397d50u: goto label_397d50;
        case 0x397d54u: goto label_397d54;
        case 0x397d58u: goto label_397d58;
        case 0x397d5cu: goto label_397d5c;
        case 0x397d60u: goto label_397d60;
        case 0x397d64u: goto label_397d64;
        case 0x397d68u: goto label_397d68;
        case 0x397d6cu: goto label_397d6c;
        case 0x397d70u: goto label_397d70;
        case 0x397d74u: goto label_397d74;
        case 0x397d78u: goto label_397d78;
        case 0x397d7cu: goto label_397d7c;
        case 0x397d80u: goto label_397d80;
        case 0x397d84u: goto label_397d84;
        case 0x397d88u: goto label_397d88;
        case 0x397d8cu: goto label_397d8c;
        case 0x397d90u: goto label_397d90;
        case 0x397d94u: goto label_397d94;
        case 0x397d98u: goto label_397d98;
        case 0x397d9cu: goto label_397d9c;
        case 0x397da0u: goto label_397da0;
        case 0x397da4u: goto label_397da4;
        case 0x397da8u: goto label_397da8;
        case 0x397dacu: goto label_397dac;
        case 0x397db0u: goto label_397db0;
        case 0x397db4u: goto label_397db4;
        case 0x397db8u: goto label_397db8;
        case 0x397dbcu: goto label_397dbc;
        case 0x397dc0u: goto label_397dc0;
        case 0x397dc4u: goto label_397dc4;
        case 0x397dc8u: goto label_397dc8;
        case 0x397dccu: goto label_397dcc;
        case 0x397dd0u: goto label_397dd0;
        case 0x397dd4u: goto label_397dd4;
        case 0x397dd8u: goto label_397dd8;
        case 0x397ddcu: goto label_397ddc;
        case 0x397de0u: goto label_397de0;
        case 0x397de4u: goto label_397de4;
        case 0x397de8u: goto label_397de8;
        case 0x397decu: goto label_397dec;
        case 0x397df0u: goto label_397df0;
        case 0x397df4u: goto label_397df4;
        case 0x397df8u: goto label_397df8;
        case 0x397dfcu: goto label_397dfc;
        case 0x397e00u: goto label_397e00;
        case 0x397e04u: goto label_397e04;
        case 0x397e08u: goto label_397e08;
        case 0x397e0cu: goto label_397e0c;
        case 0x397e10u: goto label_397e10;
        case 0x397e14u: goto label_397e14;
        case 0x397e18u: goto label_397e18;
        case 0x397e1cu: goto label_397e1c;
        case 0x397e20u: goto label_397e20;
        case 0x397e24u: goto label_397e24;
        case 0x397e28u: goto label_397e28;
        case 0x397e2cu: goto label_397e2c;
        case 0x397e30u: goto label_397e30;
        case 0x397e34u: goto label_397e34;
        case 0x397e38u: goto label_397e38;
        case 0x397e3cu: goto label_397e3c;
        case 0x397e40u: goto label_397e40;
        case 0x397e44u: goto label_397e44;
        case 0x397e48u: goto label_397e48;
        case 0x397e4cu: goto label_397e4c;
        case 0x397e50u: goto label_397e50;
        case 0x397e54u: goto label_397e54;
        case 0x397e58u: goto label_397e58;
        case 0x397e5cu: goto label_397e5c;
        case 0x397e60u: goto label_397e60;
        case 0x397e64u: goto label_397e64;
        case 0x397e68u: goto label_397e68;
        case 0x397e6cu: goto label_397e6c;
        case 0x397e70u: goto label_397e70;
        case 0x397e74u: goto label_397e74;
        case 0x397e78u: goto label_397e78;
        case 0x397e7cu: goto label_397e7c;
        case 0x397e80u: goto label_397e80;
        case 0x397e84u: goto label_397e84;
        case 0x397e88u: goto label_397e88;
        case 0x397e8cu: goto label_397e8c;
        case 0x397e90u: goto label_397e90;
        case 0x397e94u: goto label_397e94;
        case 0x397e98u: goto label_397e98;
        case 0x397e9cu: goto label_397e9c;
        case 0x397ea0u: goto label_397ea0;
        case 0x397ea4u: goto label_397ea4;
        case 0x397ea8u: goto label_397ea8;
        case 0x397eacu: goto label_397eac;
        case 0x397eb0u: goto label_397eb0;
        case 0x397eb4u: goto label_397eb4;
        case 0x397eb8u: goto label_397eb8;
        case 0x397ebcu: goto label_397ebc;
        case 0x397ec0u: goto label_397ec0;
        case 0x397ec4u: goto label_397ec4;
        case 0x397ec8u: goto label_397ec8;
        case 0x397eccu: goto label_397ecc;
        case 0x397ed0u: goto label_397ed0;
        case 0x397ed4u: goto label_397ed4;
        case 0x397ed8u: goto label_397ed8;
        case 0x397edcu: goto label_397edc;
        case 0x397ee0u: goto label_397ee0;
        case 0x397ee4u: goto label_397ee4;
        case 0x397ee8u: goto label_397ee8;
        case 0x397eecu: goto label_397eec;
        case 0x397ef0u: goto label_397ef0;
        case 0x397ef4u: goto label_397ef4;
        case 0x397ef8u: goto label_397ef8;
        case 0x397efcu: goto label_397efc;
        case 0x397f00u: goto label_397f00;
        case 0x397f04u: goto label_397f04;
        case 0x397f08u: goto label_397f08;
        case 0x397f0cu: goto label_397f0c;
        case 0x397f10u: goto label_397f10;
        case 0x397f14u: goto label_397f14;
        case 0x397f18u: goto label_397f18;
        case 0x397f1cu: goto label_397f1c;
        case 0x397f20u: goto label_397f20;
        case 0x397f24u: goto label_397f24;
        case 0x397f28u: goto label_397f28;
        case 0x397f2cu: goto label_397f2c;
        case 0x397f30u: goto label_397f30;
        case 0x397f34u: goto label_397f34;
        case 0x397f38u: goto label_397f38;
        case 0x397f3cu: goto label_397f3c;
        case 0x397f40u: goto label_397f40;
        case 0x397f44u: goto label_397f44;
        case 0x397f48u: goto label_397f48;
        case 0x397f4cu: goto label_397f4c;
        case 0x397f50u: goto label_397f50;
        case 0x397f54u: goto label_397f54;
        case 0x397f58u: goto label_397f58;
        case 0x397f5cu: goto label_397f5c;
        case 0x397f60u: goto label_397f60;
        case 0x397f64u: goto label_397f64;
        case 0x397f68u: goto label_397f68;
        case 0x397f6cu: goto label_397f6c;
        case 0x397f70u: goto label_397f70;
        case 0x397f74u: goto label_397f74;
        case 0x397f78u: goto label_397f78;
        case 0x397f7cu: goto label_397f7c;
        case 0x397f80u: goto label_397f80;
        case 0x397f84u: goto label_397f84;
        case 0x397f88u: goto label_397f88;
        case 0x397f8cu: goto label_397f8c;
        case 0x397f90u: goto label_397f90;
        case 0x397f94u: goto label_397f94;
        case 0x397f98u: goto label_397f98;
        case 0x397f9cu: goto label_397f9c;
        case 0x397fa0u: goto label_397fa0;
        case 0x397fa4u: goto label_397fa4;
        case 0x397fa8u: goto label_397fa8;
        case 0x397facu: goto label_397fac;
        case 0x397fb0u: goto label_397fb0;
        case 0x397fb4u: goto label_397fb4;
        case 0x397fb8u: goto label_397fb8;
        case 0x397fbcu: goto label_397fbc;
        case 0x397fc0u: goto label_397fc0;
        case 0x397fc4u: goto label_397fc4;
        case 0x397fc8u: goto label_397fc8;
        case 0x397fccu: goto label_397fcc;
        case 0x397fd0u: goto label_397fd0;
        case 0x397fd4u: goto label_397fd4;
        case 0x397fd8u: goto label_397fd8;
        case 0x397fdcu: goto label_397fdc;
        case 0x397fe0u: goto label_397fe0;
        case 0x397fe4u: goto label_397fe4;
        case 0x397fe8u: goto label_397fe8;
        case 0x397fecu: goto label_397fec;
        case 0x397ff0u: goto label_397ff0;
        case 0x397ff4u: goto label_397ff4;
        case 0x397ff8u: goto label_397ff8;
        case 0x397ffcu: goto label_397ffc;
        case 0x398000u: goto label_398000;
        case 0x398004u: goto label_398004;
        case 0x398008u: goto label_398008;
        case 0x39800cu: goto label_39800c;
        case 0x398010u: goto label_398010;
        case 0x398014u: goto label_398014;
        case 0x398018u: goto label_398018;
        case 0x39801cu: goto label_39801c;
        case 0x398020u: goto label_398020;
        case 0x398024u: goto label_398024;
        case 0x398028u: goto label_398028;
        case 0x39802cu: goto label_39802c;
        case 0x398030u: goto label_398030;
        case 0x398034u: goto label_398034;
        case 0x398038u: goto label_398038;
        case 0x39803cu: goto label_39803c;
        case 0x398040u: goto label_398040;
        case 0x398044u: goto label_398044;
        case 0x398048u: goto label_398048;
        case 0x39804cu: goto label_39804c;
        case 0x398050u: goto label_398050;
        case 0x398054u: goto label_398054;
        case 0x398058u: goto label_398058;
        case 0x39805cu: goto label_39805c;
        case 0x398060u: goto label_398060;
        case 0x398064u: goto label_398064;
        case 0x398068u: goto label_398068;
        case 0x39806cu: goto label_39806c;
        case 0x398070u: goto label_398070;
        case 0x398074u: goto label_398074;
        case 0x398078u: goto label_398078;
        case 0x39807cu: goto label_39807c;
        case 0x398080u: goto label_398080;
        case 0x398084u: goto label_398084;
        case 0x398088u: goto label_398088;
        case 0x39808cu: goto label_39808c;
        case 0x398090u: goto label_398090;
        case 0x398094u: goto label_398094;
        case 0x398098u: goto label_398098;
        case 0x39809cu: goto label_39809c;
        case 0x3980a0u: goto label_3980a0;
        case 0x3980a4u: goto label_3980a4;
        case 0x3980a8u: goto label_3980a8;
        case 0x3980acu: goto label_3980ac;
        case 0x3980b0u: goto label_3980b0;
        case 0x3980b4u: goto label_3980b4;
        case 0x3980b8u: goto label_3980b8;
        case 0x3980bcu: goto label_3980bc;
        case 0x3980c0u: goto label_3980c0;
        case 0x3980c4u: goto label_3980c4;
        case 0x3980c8u: goto label_3980c8;
        case 0x3980ccu: goto label_3980cc;
        case 0x3980d0u: goto label_3980d0;
        case 0x3980d4u: goto label_3980d4;
        case 0x3980d8u: goto label_3980d8;
        case 0x3980dcu: goto label_3980dc;
        case 0x3980e0u: goto label_3980e0;
        case 0x3980e4u: goto label_3980e4;
        case 0x3980e8u: goto label_3980e8;
        case 0x3980ecu: goto label_3980ec;
        case 0x3980f0u: goto label_3980f0;
        case 0x3980f4u: goto label_3980f4;
        case 0x3980f8u: goto label_3980f8;
        case 0x3980fcu: goto label_3980fc;
        case 0x398100u: goto label_398100;
        case 0x398104u: goto label_398104;
        case 0x398108u: goto label_398108;
        case 0x39810cu: goto label_39810c;
        case 0x398110u: goto label_398110;
        case 0x398114u: goto label_398114;
        case 0x398118u: goto label_398118;
        case 0x39811cu: goto label_39811c;
        case 0x398120u: goto label_398120;
        case 0x398124u: goto label_398124;
        case 0x398128u: goto label_398128;
        case 0x39812cu: goto label_39812c;
        case 0x398130u: goto label_398130;
        case 0x398134u: goto label_398134;
        case 0x398138u: goto label_398138;
        case 0x39813cu: goto label_39813c;
        case 0x398140u: goto label_398140;
        case 0x398144u: goto label_398144;
        case 0x398148u: goto label_398148;
        case 0x39814cu: goto label_39814c;
        case 0x398150u: goto label_398150;
        case 0x398154u: goto label_398154;
        case 0x398158u: goto label_398158;
        case 0x39815cu: goto label_39815c;
        case 0x398160u: goto label_398160;
        case 0x398164u: goto label_398164;
        case 0x398168u: goto label_398168;
        case 0x39816cu: goto label_39816c;
        case 0x398170u: goto label_398170;
        case 0x398174u: goto label_398174;
        case 0x398178u: goto label_398178;
        case 0x39817cu: goto label_39817c;
        case 0x398180u: goto label_398180;
        case 0x398184u: goto label_398184;
        case 0x398188u: goto label_398188;
        case 0x39818cu: goto label_39818c;
        case 0x398190u: goto label_398190;
        case 0x398194u: goto label_398194;
        case 0x398198u: goto label_398198;
        case 0x39819cu: goto label_39819c;
        case 0x3981a0u: goto label_3981a0;
        case 0x3981a4u: goto label_3981a4;
        case 0x3981a8u: goto label_3981a8;
        case 0x3981acu: goto label_3981ac;
        case 0x3981b0u: goto label_3981b0;
        case 0x3981b4u: goto label_3981b4;
        case 0x3981b8u: goto label_3981b8;
        case 0x3981bcu: goto label_3981bc;
        case 0x3981c0u: goto label_3981c0;
        case 0x3981c4u: goto label_3981c4;
        case 0x3981c8u: goto label_3981c8;
        case 0x3981ccu: goto label_3981cc;
        case 0x3981d0u: goto label_3981d0;
        case 0x3981d4u: goto label_3981d4;
        case 0x3981d8u: goto label_3981d8;
        case 0x3981dcu: goto label_3981dc;
        case 0x3981e0u: goto label_3981e0;
        case 0x3981e4u: goto label_3981e4;
        case 0x3981e8u: goto label_3981e8;
        case 0x3981ecu: goto label_3981ec;
        case 0x3981f0u: goto label_3981f0;
        case 0x3981f4u: goto label_3981f4;
        case 0x3981f8u: goto label_3981f8;
        case 0x3981fcu: goto label_3981fc;
        case 0x398200u: goto label_398200;
        case 0x398204u: goto label_398204;
        case 0x398208u: goto label_398208;
        case 0x39820cu: goto label_39820c;
        case 0x398210u: goto label_398210;
        case 0x398214u: goto label_398214;
        case 0x398218u: goto label_398218;
        case 0x39821cu: goto label_39821c;
        case 0x398220u: goto label_398220;
        case 0x398224u: goto label_398224;
        case 0x398228u: goto label_398228;
        case 0x39822cu: goto label_39822c;
        case 0x398230u: goto label_398230;
        case 0x398234u: goto label_398234;
        case 0x398238u: goto label_398238;
        case 0x39823cu: goto label_39823c;
        case 0x398240u: goto label_398240;
        case 0x398244u: goto label_398244;
        case 0x398248u: goto label_398248;
        case 0x39824cu: goto label_39824c;
        case 0x398250u: goto label_398250;
        case 0x398254u: goto label_398254;
        case 0x398258u: goto label_398258;
        case 0x39825cu: goto label_39825c;
        case 0x398260u: goto label_398260;
        case 0x398264u: goto label_398264;
        case 0x398268u: goto label_398268;
        case 0x39826cu: goto label_39826c;
        case 0x398270u: goto label_398270;
        case 0x398274u: goto label_398274;
        case 0x398278u: goto label_398278;
        case 0x39827cu: goto label_39827c;
        case 0x398280u: goto label_398280;
        case 0x398284u: goto label_398284;
        case 0x398288u: goto label_398288;
        case 0x39828cu: goto label_39828c;
        case 0x398290u: goto label_398290;
        case 0x398294u: goto label_398294;
        case 0x398298u: goto label_398298;
        case 0x39829cu: goto label_39829c;
        case 0x3982a0u: goto label_3982a0;
        case 0x3982a4u: goto label_3982a4;
        case 0x3982a8u: goto label_3982a8;
        case 0x3982acu: goto label_3982ac;
        case 0x3982b0u: goto label_3982b0;
        case 0x3982b4u: goto label_3982b4;
        case 0x3982b8u: goto label_3982b8;
        case 0x3982bcu: goto label_3982bc;
        case 0x3982c0u: goto label_3982c0;
        case 0x3982c4u: goto label_3982c4;
        case 0x3982c8u: goto label_3982c8;
        case 0x3982ccu: goto label_3982cc;
        case 0x3982d0u: goto label_3982d0;
        case 0x3982d4u: goto label_3982d4;
        case 0x3982d8u: goto label_3982d8;
        case 0x3982dcu: goto label_3982dc;
        case 0x3982e0u: goto label_3982e0;
        case 0x3982e4u: goto label_3982e4;
        case 0x3982e8u: goto label_3982e8;
        case 0x3982ecu: goto label_3982ec;
        case 0x3982f0u: goto label_3982f0;
        case 0x3982f4u: goto label_3982f4;
        case 0x3982f8u: goto label_3982f8;
        case 0x3982fcu: goto label_3982fc;
        case 0x398300u: goto label_398300;
        case 0x398304u: goto label_398304;
        case 0x398308u: goto label_398308;
        case 0x39830cu: goto label_39830c;
        case 0x398310u: goto label_398310;
        case 0x398314u: goto label_398314;
        case 0x398318u: goto label_398318;
        case 0x39831cu: goto label_39831c;
        case 0x398320u: goto label_398320;
        case 0x398324u: goto label_398324;
        case 0x398328u: goto label_398328;
        case 0x39832cu: goto label_39832c;
        case 0x398330u: goto label_398330;
        case 0x398334u: goto label_398334;
        case 0x398338u: goto label_398338;
        case 0x39833cu: goto label_39833c;
        case 0x398340u: goto label_398340;
        case 0x398344u: goto label_398344;
        case 0x398348u: goto label_398348;
        case 0x39834cu: goto label_39834c;
        case 0x398350u: goto label_398350;
        case 0x398354u: goto label_398354;
        case 0x398358u: goto label_398358;
        case 0x39835cu: goto label_39835c;
        case 0x398360u: goto label_398360;
        case 0x398364u: goto label_398364;
        case 0x398368u: goto label_398368;
        case 0x39836cu: goto label_39836c;
        case 0x398370u: goto label_398370;
        case 0x398374u: goto label_398374;
        case 0x398378u: goto label_398378;
        case 0x39837cu: goto label_39837c;
        case 0x398380u: goto label_398380;
        case 0x398384u: goto label_398384;
        case 0x398388u: goto label_398388;
        case 0x39838cu: goto label_39838c;
        case 0x398390u: goto label_398390;
        case 0x398394u: goto label_398394;
        case 0x398398u: goto label_398398;
        case 0x39839cu: goto label_39839c;
        default: break;
    }

    ctx->pc = 0x3959b8u;

label_3959b8:
    // 0x3959b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3959b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3959bc:
    // 0x3959bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3959c0:
    // 0x3959c0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3959c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3959c4:
    // 0x3959c4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3959c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3959c8:
    // 0x3959c8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3959c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3959cc:
    // 0x3959cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3959ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3959d0:
    // 0x3959d0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3959d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3959d4:
    // 0x3959d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3959d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3959d8:
    // 0x3959d8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3959d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3959dc:
    // 0x3959dc: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3959dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3959e0:
    // 0x3959e0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3959e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3959e4:
    // 0x3959e4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3959e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3959e8:
    // 0x3959e8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3959e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3959ec:
    // 0x3959ec: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3959ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3959f0:
    // 0x3959f0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3959f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3959f4:
    // 0x3959f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3959f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3959f8:
    // 0x3959f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3959f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3959fc:
    // 0x3959fc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_395a00:
    // 0x395a00: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x395a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_395a04:
    // 0x395a04: 0x40f809  jalr        $v0
label_395a08:
    if (ctx->pc == 0x395A08u) {
        ctx->pc = 0x395A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A04u;
        // 0x395a08: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A0Cu;
        goto label_395a0c;
    }
    ctx->pc = 0x395A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395A0Cu);
        ctx->pc = 0x395A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A04u;
        // 0x395a08: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395A04u, 0x395A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395A0Cu;
label_395a0c:
    // 0x395a0c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x395a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_395a10:
    // 0x395a10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_395a14:
    if (ctx->pc == 0x395A14u) {
        ctx->pc = 0x395A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A10u;
        // 0x395a14: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A18u;
        goto label_395a18;
    }
    ctx->pc = 0x395A10u;
    {
        const bool branch_taken_0x395a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A10u;
        // 0x395a14: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a10) {
            ctx->pc = 0x395A20u;
            goto label_395a20;
        }
    }
    ctx->pc = 0x395A18u;
label_395a18:
    // 0x395a18: 0x10000250  b           . + 4 + (0x250 << 2)
label_395a1c:
    if (ctx->pc == 0x395A1Cu) {
        ctx->pc = 0x395A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A18u;
        // 0x395a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A20u;
        goto label_395a20;
    }
    ctx->pc = 0x395A18u;
    {
        const bool branch_taken_0x395a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A18u;
        // 0x395a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a18) {
            ctx->pc = 0x39635Cu;
            goto label_39635c;
        }
    }
    ctx->pc = 0x395A20u;
label_395a20:
    // 0x395a20: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x395a20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395a24:
    // 0x395a24: 0x11200034  beqz        $t1, . + 4 + (0x34 << 2)
label_395a28:
    if (ctx->pc == 0x395A28u) {
        ctx->pc = 0x395A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A24u;
        // 0x395a28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A2Cu;
        goto label_395a2c;
    }
    ctx->pc = 0x395A24u;
    {
        const bool branch_taken_0x395a24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A24u;
        // 0x395a28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a24) {
            ctx->pc = 0x395AF8u;
            goto label_395af8;
        }
    }
    ctx->pc = 0x395A2Cu;
label_395a2c:
    // 0x395a2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x395a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395a30:
    // 0x395a30: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x395a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395a34:
    // 0x395a34: 0x19200013  blez        $t1, . + 4 + (0x13 << 2)
label_395a38:
    if (ctx->pc == 0x395A38u) {
        ctx->pc = 0x395A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A34u;
        // 0x395a38: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A3Cu;
        goto label_395a3c;
    }
    ctx->pc = 0x395A34u;
    {
        const bool branch_taken_0x395a34 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x395A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A34u;
        // 0x395a38: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a34) {
            ctx->pc = 0x395A84u;
            goto label_395a84;
        }
    }
    ctx->pc = 0x395A3Cu;
label_395a3c:
    // 0x395a3c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_395a40:
    if (ctx->pc == 0x395A40u) {
        ctx->pc = 0x395A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A3Cu;
        // 0x395a40: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A44u;
        goto label_395a44;
    }
    ctx->pc = 0x395A3Cu;
    {
        const bool branch_taken_0x395a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A3Cu;
        // 0x395a40: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a3c) {
            ctx->pc = 0x395AA4u;
            goto label_395aa4;
        }
    }
    ctx->pc = 0x395A44u;
label_395a44:
    // 0x395a44: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_395a48:
    if (ctx->pc == 0x395A48u) {
        ctx->pc = 0x395A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A44u;
        // 0x395a48: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A4Cu;
        goto label_395a4c;
    }
    ctx->pc = 0x395A44u;
    {
        const bool branch_taken_0x395a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395a44) {
            ctx->pc = 0x395A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395A44u;
            // 0x395a48: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395A88u;
            goto label_395a88;
        }
    }
    ctx->pc = 0x395A4Cu;
label_395a4c:
    // 0x395a4c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x395a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_395a50:
    // 0x395a50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_395a54:
    if (ctx->pc == 0x395A54u) {
        ctx->pc = 0x395A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A50u;
        // 0x395a54: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A58u;
        goto label_395a58;
    }
    ctx->pc = 0x395A50u;
    {
        const bool branch_taken_0x395a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A50u;
        // 0x395a54: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a50) {
            ctx->pc = 0x395A70u;
            goto label_395a70;
        }
    }
    ctx->pc = 0x395A58u;
label_395a58:
    // 0x395a58: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x395a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_395a5c:
    // 0x395a5c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x395a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395a60:
    // 0x395a60: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x395a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_395a64:
    // 0x395a64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x395a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395a68:
    // 0x395a68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x395a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_395a6c:
    // 0x395a6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x395a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_395a70:
    // 0x395a70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x395a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_395a74:
    // 0x395a74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x395a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_395a78:
    // 0x395a78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x395a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_395a7c:
    // 0x395a7c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x395a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_395a80:
    // 0x395a80: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x395a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_395a84:
    // 0x395a84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x395a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_395a88:
    // 0x395a88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x395a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_395a8c:
    // 0x395a8c: 0x269402b  sltu        $t0, $s3, $t1
    ctx->pc = 0x395a8cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_395a90:
    // 0x395a90: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x395a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_395a94:
    // 0x395a94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x395a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_395a98:
    // 0x395a98: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x395a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_395a9c:
    // 0x395a9c: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
label_395aa0:
    if (ctx->pc == 0x395AA0u) {
        ctx->pc = 0x395AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A9Cu;
        // 0x395aa0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395AA4u;
        goto label_395aa4;
    }
    ctx->pc = 0x395A9Cu;
    {
        const bool branch_taken_0x395a9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A9Cu;
        // 0x395aa0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a9c) {
            ctx->pc = 0x395AF8u;
            goto label_395af8;
        }
    }
    ctx->pc = 0x395AA4u;
label_395aa4:
    // 0x395aa4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x395aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395aa8:
    // 0x395aa8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x395aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_395aac:
    // 0x395aac: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x395aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_395ab0:
    // 0x395ab0: 0x24e40028  addiu       $a0, $a3, 0x28
    ctx->pc = 0x395ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_395ab4:
    // 0x395ab4: 0x24e5003c  addiu       $a1, $a3, 0x3C
    ctx->pc = 0x395ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_395ab8:
    // 0x395ab8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x395ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_395abc:
    // 0x395abc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x395abcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_395ac0:
    // 0x395ac0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x395ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_395ac4:
    // 0x395ac4: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x395ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_395ac8:
    // 0x395ac8: 0x269402b  sltu        $t0, $s3, $t1
    ctx->pc = 0x395ac8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_395acc:
    // 0x395acc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x395accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_395ad0:
    // 0x395ad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395ad4:
    // 0x395ad4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x395ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_395ad8:
    // 0x395ad8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x395ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_395adc:
    // 0x395adc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x395adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_395ae0:
    // 0x395ae0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x395ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_395ae4:
    // 0x395ae4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x395ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_395ae8:
    // 0x395ae8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x395ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_395aec:
    // 0x395aec: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x395aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_395af0:
    // 0x395af0: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
label_395af4:
    if (ctx->pc == 0x395AF4u) {
        ctx->pc = 0x395AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AF0u;
        // 0x395af4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395AF8u;
        goto label_395af8;
    }
    ctx->pc = 0x395AF0u;
    {
        const bool branch_taken_0x395af0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x395AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AF0u;
        // 0x395af4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395af0) {
            ctx->pc = 0x395AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395aa8;
        }
    }
    ctx->pc = 0x395AF8u;
label_395af8:
    // 0x395af8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x395af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395afc:
    // 0x395afc: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x395afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_395b00:
    // 0x395b00: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x395b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395b04:
    // 0x395b04: 0x24e70458  addiu       $a3, $a3, 0x458
    ctx->pc = 0x395b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1112));
label_395b08:
    // 0x395b08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x395b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_395b0c:
    // 0x395b0c: 0xc0bbc9c  jal         func_2EF270
label_395b10:
    if (ctx->pc == 0x395B10u) {
        ctx->pc = 0x395B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B0Cu;
        // 0x395b10: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B14u;
        goto label_395b14;
    }
    ctx->pc = 0x395B0Cu;
    SET_GPR_U32(ctx, 31, 0x395B14u);
    ctx->pc = 0x395B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395B0Cu;
    // 0x395b10: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x395B0Cu, 0x395B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B14u;
label_395b14:
    // 0x395b14: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x395b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395b18:
    // 0x395b18: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x395b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_395b1c:
    // 0x395b1c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_395b20:
    if (ctx->pc == 0x395B20u) {
        ctx->pc = 0x395B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B1Cu;
        // 0x395b20: 0x3c0a0062  lui         $t2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B24u;
        goto label_395b24;
    }
    ctx->pc = 0x395B1Cu;
    {
        const bool branch_taken_0x395b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B1Cu;
        // 0x395b20: 0x3c0a0062  lui         $t2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b1c) {
            ctx->pc = 0x395C50u;
            goto label_395c50;
        }
    }
    ctx->pc = 0x395B24u;
label_395b24:
    // 0x395b24: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x395b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395b28:
    // 0x395b28: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x395b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395b2c:
    // 0x395b2c: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x395b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_395b30:
    // 0x395b30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x395b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_395b34:
    // 0x395b34: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_395b38:
    if (ctx->pc == 0x395B38u) {
        ctx->pc = 0x395B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B34u;
        // 0x395b38: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B3Cu;
        goto label_395b3c;
    }
    ctx->pc = 0x395B34u;
    {
        const bool branch_taken_0x395b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B34u;
        // 0x395b38: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b34) {
            ctx->pc = 0x395C50u;
            goto label_395c50;
        }
    }
    ctx->pc = 0x395B3Cu;
label_395b3c:
    // 0x395b3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x395b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_395b40:
    // 0x395b40: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x395b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395b44:
    // 0x395b44: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x395b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_395b48:
    // 0x395b48: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x395b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_395b4c:
    // 0x395b4c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x395b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_395b50:
    // 0x395b50: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_395b54:
    if (ctx->pc == 0x395B54u) {
        ctx->pc = 0x395B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B50u;
        // 0x395b54: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B58u;
        goto label_395b58;
    }
    ctx->pc = 0x395B50u;
    {
        const bool branch_taken_0x395b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B50u;
        // 0x395b54: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b50) {
            ctx->pc = 0x395BB4u;
            goto label_395bb4;
        }
    }
    ctx->pc = 0x395B58u;
label_395b58:
    // 0x395b58: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_395b5c:
    if (ctx->pc == 0x395B5Cu) {
        ctx->pc = 0x395B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B58u;
        // 0x395b5c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B60u;
        goto label_395b60;
    }
    ctx->pc = 0x395B58u;
    {
        const bool branch_taken_0x395b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B58u;
        // 0x395b5c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b58) {
            ctx->pc = 0x395BD8u;
            goto label_395bd8;
        }
    }
    ctx->pc = 0x395B60u;
label_395b60:
    // 0x395b60: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_395b64:
    if (ctx->pc == 0x395B64u) {
        ctx->pc = 0x395B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B60u;
        // 0x395b64: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B68u;
        goto label_395b68;
    }
    ctx->pc = 0x395B60u;
    {
        const bool branch_taken_0x395b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395b60) {
            ctx->pc = 0x395B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395B60u;
            // 0x395b64: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395BB8u;
            goto label_395bb8;
        }
    }
    ctx->pc = 0x395B68u;
label_395b68:
    // 0x395b68: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x395b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_395b6c:
    // 0x395b6c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_395b70:
    if (ctx->pc == 0x395B70u) {
        ctx->pc = 0x395B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B6Cu;
        // 0x395b70: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B74u;
        goto label_395b74;
    }
    ctx->pc = 0x395B6Cu;
    {
        const bool branch_taken_0x395b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395b6c) {
            ctx->pc = 0x395B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395B6Cu;
            // 0x395b70: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395B9Cu;
            goto label_395b9c;
        }
    }
    ctx->pc = 0x395B74u;
label_395b74:
    // 0x395b74: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x395b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395b78:
    // 0x395b78: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x395b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_395b7c:
    // 0x395b7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395b80:
    // 0x395b80: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_395b84:
    if (ctx->pc == 0x395B84u) {
        ctx->pc = 0x395B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B80u;
        // 0x395b84: 0x8fa90008  lw          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395B88u;
        goto label_395b88;
    }
    ctx->pc = 0x395B80u;
    {
        const bool branch_taken_0x395b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x395B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B80u;
        // 0x395b84: 0x8fa90008  lw          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b80) {
            ctx->pc = 0x395B90u;
            goto label_395b90;
        }
    }
    ctx->pc = 0x395B88u;
label_395b88:
    // 0x395b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395b8c:
    // 0x395b8c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x395b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395b90:
    // 0x395b90: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x395b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395b94:
    // 0x395b94: 0x25260008  addiu       $a2, $t1, 0x8
    ctx->pc = 0x395b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_395b98:
    // 0x395b98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x395b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_395b9c:
    // 0x395b9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395ba0:
    // 0x395ba0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_395ba4:
    if (ctx->pc == 0x395BA4u) {
        ctx->pc = 0x395BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BA0u;
        // 0x395ba4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BA8u;
        goto label_395ba8;
    }
    ctx->pc = 0x395BA0u;
    {
        const bool branch_taken_0x395ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x395BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BA0u;
        // 0x395ba4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ba0) {
            ctx->pc = 0x395BB0u;
            goto label_395bb0;
        }
    }
    ctx->pc = 0x395BA8u;
label_395ba8:
    // 0x395ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395bac:
    // 0x395bac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395bb0:
    // 0x395bb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x395bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_395bb4:
    // 0x395bb4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x395bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_395bb8:
    // 0x395bb8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395bbc:
    // 0x395bbc: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_395bc0:
    if (ctx->pc == 0x395BC0u) {
        ctx->pc = 0x395BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BBCu;
        // 0x395bc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BC4u;
        goto label_395bc4;
    }
    ctx->pc = 0x395BBCu;
    {
        const bool branch_taken_0x395bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x395BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BBCu;
        // 0x395bc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bbc) {
            ctx->pc = 0x395BCCu;
            goto label_395bcc;
        }
    }
    ctx->pc = 0x395BC4u;
label_395bc4:
    // 0x395bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395bc8:
    // 0x395bc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395bcc:
    // 0x395bcc: 0x267102b  sltu        $v0, $s3, $a3
    ctx->pc = 0x395bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_395bd0:
    // 0x395bd0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_395bd4:
    if (ctx->pc == 0x395BD4u) {
        ctx->pc = 0x395BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BD0u;
        // 0x395bd4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BD8u;
        goto label_395bd8;
    }
    ctx->pc = 0x395BD0u;
    {
        const bool branch_taken_0x395bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BD0u;
        // 0x395bd4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bd0) {
            ctx->pc = 0x395C4Cu;
            goto label_395c4c;
        }
    }
    ctx->pc = 0x395BD8u;
label_395bd8:
    // 0x395bd8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x395bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_395bdc:
    // 0x395bdc: 0x0  nop
    ctx->pc = 0x395bdcu;
    // NOP
label_395be0:
    // 0x395be0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_395be4:
    // 0x395be4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395be8:
    // 0x395be8: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_395bec:
    if (ctx->pc == 0x395BECu) {
        ctx->pc = 0x395BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BE8u;
        // 0x395bec: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395BF0u;
        goto label_395bf0;
    }
    ctx->pc = 0x395BE8u;
    {
        const bool branch_taken_0x395be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x395be8) {
            ctx->pc = 0x395BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395BE8u;
            // 0x395bec: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395BFCu;
            goto label_395bfc;
        }
    }
    ctx->pc = 0x395BF0u;
label_395bf0:
    // 0x395bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395bf4:
    // 0x395bf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395bf8:
    // 0x395bf8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x395bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_395bfc:
    // 0x395bfc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395c00:
    // 0x395c00: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_395c04:
    if (ctx->pc == 0x395C04u) {
        ctx->pc = 0x395C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C00u;
        // 0x395c04: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C08u;
        goto label_395c08;
    }
    ctx->pc = 0x395C00u;
    {
        const bool branch_taken_0x395c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x395c00) {
            ctx->pc = 0x395C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395C00u;
            // 0x395c04: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395C14u;
            goto label_395c14;
        }
    }
    ctx->pc = 0x395C08u;
label_395c08:
    // 0x395c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395c0c:
    // 0x395c0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395c10:
    // 0x395c10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x395c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_395c14:
    // 0x395c14: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395c18:
    // 0x395c18: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_395c1c:
    if (ctx->pc == 0x395C1Cu) {
        ctx->pc = 0x395C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C18u;
        // 0x395c1c: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C20u;
        goto label_395c20;
    }
    ctx->pc = 0x395C18u;
    {
        const bool branch_taken_0x395c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x395c18) {
            ctx->pc = 0x395C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395C18u;
            // 0x395c1c: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395C2Cu;
            goto label_395c2c;
        }
    }
    ctx->pc = 0x395C20u;
label_395c20:
    // 0x395c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395c24:
    // 0x395c24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395c28:
    // 0x395c28: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x395c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_395c2c:
    // 0x395c2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x395c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395c30:
    // 0x395c30: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_395c34:
    if (ctx->pc == 0x395C34u) {
        ctx->pc = 0x395C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C30u;
        // 0x395c34: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C38u;
        goto label_395c38;
    }
    ctx->pc = 0x395C30u;
    {
        const bool branch_taken_0x395c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x395C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C30u;
        // 0x395c34: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c30) {
            ctx->pc = 0x395C40u;
            goto label_395c40;
        }
    }
    ctx->pc = 0x395C38u;
label_395c38:
    // 0x395c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395c3c:
    // 0x395c3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395c40:
    // 0x395c40: 0x267102b  sltu        $v0, $s3, $a3
    ctx->pc = 0x395c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_395c44:
    // 0x395c44: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_395c48:
    if (ctx->pc == 0x395C48u) {
        ctx->pc = 0x395C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C44u;
        // 0x395c48: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C4Cu;
        goto label_395c4c;
    }
    ctx->pc = 0x395C44u;
    {
        const bool branch_taken_0x395c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C44u;
        // 0x395c48: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c44) {
            ctx->pc = 0x395BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395be0;
        }
    }
    ctx->pc = 0x395C4Cu;
label_395c4c:
    // 0x395c4c: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x395c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_395c50:
    // 0x395c50: 0x3c050101  lui         $a1, 0x101
    ctx->pc = 0x395c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)257 << 16));
label_395c54:
    // 0x395c54: 0x2550e880  addiu       $s0, $t2, -0x1780
    ctx->pc = 0x395c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_395c58:
    // 0x395c58: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x395c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_395c5c:
    // 0x395c5c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x395c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_395c60:
    // 0x395c60: 0x40f809  jalr        $v0
label_395c64:
    if (ctx->pc == 0x395C64u) {
        ctx->pc = 0x395C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C60u;
        // 0x395c64: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C68u;
        goto label_395c68;
    }
    ctx->pc = 0x395C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395C68u);
        ctx->pc = 0x395C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C60u;
        // 0x395c64: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395C60u, 0x395C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395C68u;
label_395c68:
    // 0x395c68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x395c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_395c6c:
    // 0x395c6c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x395c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_395c70:
    // 0x395c70: 0x2440018  mult        $zero, $s2, $a0
    ctx->pc = 0x395c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_395c74:
    // 0x395c74: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x395c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_395c78:
    // 0x395c78: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x395c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_395c7c:
    // 0x395c7c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x395c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395c80:
    // 0x395c80: 0x2012  mflo        $a0
    ctx->pc = 0x395c80u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_395c84:
    // 0x395c84: 0x40f809  jalr        $v0
label_395c88:
    if (ctx->pc == 0x395C88u) {
        ctx->pc = 0x395C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C84u;
        // 0x395c88: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395C8Cu;
        goto label_395c8c;
    }
    ctx->pc = 0x395C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395C8Cu);
        ctx->pc = 0x395C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C84u;
        // 0x395c88: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395C84u, 0x395C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395C8Cu;
label_395c8c:
    // 0x395c8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x395c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395c90:
    // 0x395c90: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x395c90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395c94:
    // 0x395c94: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x395c94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_395c98:
    // 0x395c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_395c9c:
    // 0x395c9c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x395c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395ca0:
    // 0x395ca0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x395ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_395ca4:
    // 0x395ca4: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x395ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_395ca8:
    // 0x395ca8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x395ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_395cac:
    // 0x395cac: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_395cb0:
    if (ctx->pc == 0x395CB0u) {
        ctx->pc = 0x395CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CACu;
        // 0x395cb0: 0xafc30008  sw          $v1, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CB4u;
        goto label_395cb4;
    }
    ctx->pc = 0x395CACu;
    {
        const bool branch_taken_0x395cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CACu;
        // 0x395cb0: 0xafc30008  sw          $v1, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cac) {
            ctx->pc = 0x395D24u;
            goto label_395d24;
        }
    }
    ctx->pc = 0x395CB4u;
label_395cb4:
    // 0x395cb4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x395cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_395cb8:
    // 0x395cb8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_395cbc:
    if (ctx->pc == 0x395CBCu) {
        ctx->pc = 0x395CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CB8u;
        // 0x395cbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CC0u;
        goto label_395cc0;
    }
    ctx->pc = 0x395CB8u;
    {
        const bool branch_taken_0x395cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CB8u;
        // 0x395cbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cb8) {
            ctx->pc = 0x395D24u;
            goto label_395d24;
        }
    }
    ctx->pc = 0x395CC0u;
label_395cc0:
    // 0x395cc0: 0x27c50004  addiu       $a1, $fp, 0x4
    ctx->pc = 0x395cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_395cc4:
    // 0x395cc4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x395cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395cc8:
    // 0x395cc8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x395cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_395ccc:
    // 0x395ccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x395cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_395cd0:
    // 0x395cd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x395cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_395cd4:
    // 0x395cd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x395cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395cd8:
    // 0x395cd8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x395cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_395cdc:
    // 0x395cdc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x395cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_395ce0:
    // 0x395ce0: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_395ce4:
    if (ctx->pc == 0x395CE4u) {
        ctx->pc = 0x395CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CE0u;
        // 0x395ce4: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395CE8u;
        goto label_395ce8;
    }
    ctx->pc = 0x395CE0u;
    {
        const bool branch_taken_0x395ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x395CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CE0u;
        // 0x395ce4: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ce0) {
            ctx->pc = 0x395D0Cu;
            goto label_395d0c;
        }
    }
    ctx->pc = 0x395CE8u;
label_395ce8:
    // 0x395ce8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x395ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_395cec:
    // 0x395cec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x395cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_395cf0:
    // 0x395cf0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x395cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_395cf4:
    // 0x395cf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x395cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_395cf8:
    // 0x395cf8: 0xacb4000c  sw          $s4, 0xC($a1)
    ctx->pc = 0x395cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 20));
label_395cfc:
    // 0x395cfc: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x395cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_395d00:
    // 0x395d00: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x395d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_395d04:
    // 0x395d04: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x395d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_395d08:
    // 0x395d08: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x395d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_395d0c:
    // 0x395d0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x395d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395d10:
    // 0x395d10: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x395d10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_395d14:
    // 0x395d14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x395d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_395d18:
    // 0x395d18: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x395d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395d1c:
    // 0x395d1c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_395d20:
    if (ctx->pc == 0x395D20u) {
        ctx->pc = 0x395D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D1Cu;
        // 0x395d20: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D24u;
        goto label_395d24;
    }
    ctx->pc = 0x395D1Cu;
    {
        const bool branch_taken_0x395d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D1Cu;
        // 0x395d20: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d1c) {
            ctx->pc = 0x395CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395cc8;
        }
    }
    ctx->pc = 0x395D24u;
label_395d24:
    // 0x395d24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x395d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_395d28:
    // 0x395d28: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x395d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395d2c:
    // 0x395d2c: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x395d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_395d30:
    // 0x395d30: 0x8fb60008  lw          $s6, 0x8($sp)
    ctx->pc = 0x395d30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_395d34:
    // 0x395d34: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x395d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_395d38:
    // 0x395d38: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x395d38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_395d3c:
    // 0x395d3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x395d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_395d40:
    // 0x395d40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x395d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_395d44:
    // 0x395d44: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x395d44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_395d48:
    // 0x395d48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x395d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395d4c:
    // 0x395d4c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x395d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_395d50:
    // 0x395d50: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x395d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_395d54:
    // 0x395d54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x395d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_395d58:
    // 0x395d58: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x395d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_395d5c:
    // 0x395d5c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x395d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_395d60:
    // 0x395d60: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_395d64:
    if (ctx->pc == 0x395D64u) {
        ctx->pc = 0x395D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D60u;
        // 0x395d64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D68u;
        goto label_395d68;
    }
    ctx->pc = 0x395D60u;
    {
        const bool branch_taken_0x395d60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x395d60) {
            ctx->pc = 0x395D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395D60u;
            // 0x395d64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x395D68u;
            goto label_395d68;
        }
    }
    ctx->pc = 0x395D68u;
label_395d68:
    // 0x395d68: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x395d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_395d6c:
    // 0x395d6c: 0xa8001b  divu        $zero, $a1, $t0
    ctx->pc = 0x395d6cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_395d70:
    // 0x395d70: 0x2812  mflo        $a1
    ctx->pc = 0x395d70u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_395d74:
    // 0x395d74: 0xc103fb2  jal         func_40FEC8
label_395d78:
    if (ctx->pc == 0x395D78u) {
        ctx->pc = 0x395D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D74u;
        // 0x395d78: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D7Cu;
        goto label_395d7c;
    }
    ctx->pc = 0x395D74u;
    SET_GPR_U32(ctx, 31, 0x395D7Cu);
    ctx->pc = 0x395D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395D74u;
    // 0x395d78: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FEC8u, 0x395D74u, 0x395D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395D7Cu;
label_395d7c:
    // 0x395d7c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x395d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_395d80:
    // 0x395d80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x395d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_395d84:
    // 0x395d84: 0x2464e880  addiu       $a0, $v1, -0x1780
    ctx->pc = 0x395d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_395d88:
    // 0x395d88: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x395d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_395d8c:
    // 0x395d8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x395d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_395d90:
    // 0x395d90: 0x124000a1  beqz        $s2, . + 4 + (0xA1 << 2)
label_395d94:
    if (ctx->pc == 0x395D94u) {
        ctx->pc = 0x395D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D90u;
        // 0x395d94: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395D98u;
        goto label_395d98;
    }
    ctx->pc = 0x395D90u;
    {
        const bool branch_taken_0x395d90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D90u;
        // 0x395d94: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d90) {
            ctx->pc = 0x396018u;
            goto label_396018;
        }
    }
    ctx->pc = 0x395D98u;
label_395d98:
    // 0x395d98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x395d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_395d9c:
    // 0x395d9c: 0x0  nop
    ctx->pc = 0x395d9cu;
    // NOP
label_395da0:
    // 0x395da0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x395da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_395da4:
    // 0x395da4: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x395da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_395da8:
    // 0x395da8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x395da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_395dac:
    // 0x395dac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x395dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_395db0:
    // 0x395db0: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x395db0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_395db4:
    // 0x395db4: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x395db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_395db8:
    // 0x395db8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x395db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395dbc:
    // 0x395dbc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x395dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_395dc0:
    // 0x395dc0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x395dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_395dc4:
    // 0x395dc4: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x395dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_395dc8:
    // 0x395dc8: 0x2012  mflo        $a0
    ctx->pc = 0x395dc8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_395dcc:
    // 0x395dcc: 0x40f809  jalr        $v0
label_395dd0:
    if (ctx->pc == 0x395DD0u) {
        ctx->pc = 0x395DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DCCu;
        // 0x395dd0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395DD4u;
        goto label_395dd4;
    }
    ctx->pc = 0x395DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395DD4u);
        ctx->pc = 0x395DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DCCu;
        // 0x395dd0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395DCCu, 0x395DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395DD4u;
label_395dd4:
    // 0x395dd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x395dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395dd8:
    // 0x395dd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x395dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395ddc:
    // 0x395ddc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_395de0:
    if (ctx->pc == 0x395DE0u) {
        ctx->pc = 0x395DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DDCu;
        // 0x395de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395DE4u;
        goto label_395de4;
    }
    ctx->pc = 0x395DDCu;
    {
        const bool branch_taken_0x395ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DDCu;
        // 0x395de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ddc) {
            ctx->pc = 0x395E40u;
            goto label_395e40;
        }
    }
    ctx->pc = 0x395DE4u;
label_395de4:
    // 0x395de4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x395de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_395de8:
    // 0x395de8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x395de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_395dec:
    // 0x395dec: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x395decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_395df0:
    // 0x395df0: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x395df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_395df4:
    // 0x395df4: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x395df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_395df8:
    // 0x395df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_395dfc:
    // 0x395dfc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x395dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_395e00:
    // 0x395e00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x395e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_395e04:
    // 0x395e04: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x395e04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_395e08:
    // 0x395e08: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x395e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_395e0c:
    // 0x395e0c: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x395e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_395e10:
    // 0x395e10: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x395e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_395e14:
    // 0x395e14: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x395e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_395e18:
    // 0x395e18: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x395e18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_395e1c:
    // 0x395e1c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x395e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_395e20:
    // 0x395e20: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x395e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_395e24:
    // 0x395e24: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x395e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_395e28:
    // 0x395e28: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x395e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_395e2c:
    // 0x395e2c: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x395e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
label_395e30:
    // 0x395e30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x395e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_395e34:
    // 0x395e34: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x395e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395e38:
    // 0x395e38: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_395e3c:
    if (ctx->pc == 0x395E3Cu) {
        ctx->pc = 0x395E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E38u;
        // 0x395e3c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E40u;
        goto label_395e40;
    }
    ctx->pc = 0x395E38u;
    {
        const bool branch_taken_0x395e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E38u;
        // 0x395e3c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e38) {
            ctx->pc = 0x395DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395df8;
        }
    }
    ctx->pc = 0x395E40u;
label_395e40:
    // 0x395e40: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x395e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_395e44:
    // 0x395e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x395e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_395e48:
    // 0x395e48: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x395e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_395e4c:
    // 0x395e4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x395e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_395e50:
    // 0x395e50: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x395e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_395e54:
    // 0x395e54: 0xc0e483a  jal         func_3920E8
label_395e58:
    if (ctx->pc == 0x395E58u) {
        ctx->pc = 0x395E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E54u;
        // 0x395e58: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E5Cu;
        goto label_395e5c;
    }
    ctx->pc = 0x395E54u;
    SET_GPR_U32(ctx, 31, 0x395E5Cu);
    ctx->pc = 0x395E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395E54u;
    // 0x395e58: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3920E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3920E8u, 0x395E54u, 0x395E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395E5Cu;
label_395e5c:
    // 0x395e5c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x395e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_395e60:
    // 0x395e60: 0xc0e4b42  jal         func_392D08
label_395e64:
    if (ctx->pc == 0x395E64u) {
        ctx->pc = 0x395E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E60u;
        // 0x395e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E68u;
        goto label_395e68;
    }
    ctx->pc = 0x395E60u;
    SET_GPR_U32(ctx, 31, 0x395E68u);
    ctx->pc = 0x395E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395E60u;
    // 0x395e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392D08u, 0x395E60u, 0x395E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395E68u;
label_395e68:
    // 0x395e68: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x395e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_395e6c:
    // 0x395e6c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_395e70:
    if (ctx->pc == 0x395E70u) {
        ctx->pc = 0x395E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E6Cu;
        // 0x395e70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395E74u;
        goto label_395e74;
    }
    ctx->pc = 0x395E6Cu;
    {
        const bool branch_taken_0x395e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E6Cu;
        // 0x395e70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e6c) {
            ctx->pc = 0x395FA0u;
            goto label_395fa0;
        }
    }
    ctx->pc = 0x395E74u;
label_395e74:
    // 0x395e74: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x395e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_395e78:
    // 0x395e78: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x395e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_395e7c:
    // 0x395e7c: 0x2477e880  addiu       $s7, $v1, -0x1780
    ctx->pc = 0x395e7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_395e80:
    // 0x395e80: 0x5e9821  addu        $s3, $v0, $fp
    ctx->pc = 0x395e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_395e84:
    // 0x395e84: 0x0  nop
    ctx->pc = 0x395e84u;
    // NOP
label_395e88:
    // 0x395e88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x395e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395e8c:
    // 0x395e8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x395e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_395e90:
    // 0x395e90: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x395e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_395e94:
    // 0x395e94: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x395e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_395e98:
    // 0x395e98: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x395e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_395e9c:
    // 0x395e9c: 0x40f809  jalr        $v0
label_395ea0:
    if (ctx->pc == 0x395EA0u) {
        ctx->pc = 0x395EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E9Cu;
        // 0x395ea0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EA4u;
        goto label_395ea4;
    }
    ctx->pc = 0x395E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395EA4u);
        ctx->pc = 0x395EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E9Cu;
        // 0x395ea0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395E9Cu, 0x395EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395EA4u;
label_395ea4:
    // 0x395ea4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x395ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_395ea8:
    // 0x395ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x395ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395eac:
    // 0x395eac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x395eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395eb0:
    // 0x395eb0: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x395eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_395eb4:
    // 0x395eb4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x395eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_395eb8:
    // 0x395eb8: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x395eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_395ebc:
    // 0x395ebc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x395ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395ec0:
    // 0x395ec0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x395ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_395ec4:
    // 0x395ec4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x395ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395ec8:
    // 0x395ec8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x395ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_395ecc:
    // 0x395ecc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_395ed0:
    if (ctx->pc == 0x395ED0u) {
        ctx->pc = 0x395ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ECCu;
        // 0x395ed0: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395ED4u;
        goto label_395ed4;
    }
    ctx->pc = 0x395ECCu;
    {
        const bool branch_taken_0x395ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ECCu;
        // 0x395ed0: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ecc) {
            ctx->pc = 0x395F84u;
            goto label_395f84;
        }
    }
    ctx->pc = 0x395ED4u;
label_395ed4:
    // 0x395ed4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x395ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395ed8:
    // 0x395ed8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x395ed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_395edc:
    // 0x395edc: 0x31450003  andi        $a1, $t2, 0x3
    ctx->pc = 0x395edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_395ee0:
    // 0x395ee0: 0x19400012  blez        $t2, . + 4 + (0x12 << 2)
label_395ee4:
    if (ctx->pc == 0x395EE4u) {
        ctx->pc = 0x395EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE0u;
        // 0x395ee4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EE8u;
        goto label_395ee8;
    }
    ctx->pc = 0x395EE0u;
    {
        const bool branch_taken_0x395ee0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x395EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE0u;
        // 0x395ee4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ee0) {
            ctx->pc = 0x395F2Cu;
            goto label_395f2c;
        }
    }
    ctx->pc = 0x395EE8u;
label_395ee8:
    // 0x395ee8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_395eec:
    if (ctx->pc == 0x395EECu) {
        ctx->pc = 0x395EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE8u;
        // 0x395eec: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EF0u;
        goto label_395ef0;
    }
    ctx->pc = 0x395EE8u;
    {
        const bool branch_taken_0x395ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x395EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE8u;
        // 0x395eec: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ee8) {
            ctx->pc = 0x395F48u;
            goto label_395f48;
        }
    }
    ctx->pc = 0x395EF0u;
label_395ef0:
    // 0x395ef0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_395ef4:
    if (ctx->pc == 0x395EF4u) {
        ctx->pc = 0x395EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EF0u;
        // 0x395ef4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395EF8u;
        goto label_395ef8;
    }
    ctx->pc = 0x395EF0u;
    {
        const bool branch_taken_0x395ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395ef0) {
            ctx->pc = 0x395EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395EF0u;
            // 0x395ef4: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395F30u;
            goto label_395f30;
        }
    }
    ctx->pc = 0x395EF8u;
label_395ef8:
    // 0x395ef8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x395ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_395efc:
    // 0x395efc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_395f00:
    if (ctx->pc == 0x395F00u) {
        ctx->pc = 0x395F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EFCu;
        // 0x395f00: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F04u;
        goto label_395f04;
    }
    ctx->pc = 0x395EFCu;
    {
        const bool branch_taken_0x395efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395efc) {
            ctx->pc = 0x395F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395EFCu;
            // 0x395f00: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395F1Cu;
            goto label_395f1c;
        }
    }
    ctx->pc = 0x395F04u;
label_395f04:
    // 0x395f04: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x395f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_395f08:
    // 0x395f08: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x395f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_395f0c:
    // 0x395f0c: 0x2627000e  addiu       $a3, $s1, 0xE
    ctx->pc = 0x395f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_395f10:
    // 0x395f10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x395f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395f14:
    // 0x395f14: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x395f14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_395f18:
    // 0x395f18: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x395f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_395f1c:
    // 0x395f1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x395f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_395f20:
    // 0x395f20: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x395f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_395f24:
    // 0x395f24: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x395f24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_395f28:
    // 0x395f28: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x395f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_395f2c:
    // 0x395f2c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x395f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_395f30:
    // 0x395f30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x395f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_395f34:
    // 0x395f34: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x395f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_395f38:
    // 0x395f38: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x395f38u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_395f3c:
    // 0x395f3c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x395f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_395f40:
    // 0x395f40: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
label_395f44:
    if (ctx->pc == 0x395F44u) {
        ctx->pc = 0x395F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F40u;
        // 0x395f44: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F48u;
        goto label_395f48;
    }
    ctx->pc = 0x395F40u;
    {
        const bool branch_taken_0x395f40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F40u;
        // 0x395f44: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f40) {
            ctx->pc = 0x395F84u;
            goto label_395f84;
        }
    }
    ctx->pc = 0x395F48u;
label_395f48:
    // 0x395f48: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x395f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_395f4c:
    // 0x395f4c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x395f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_395f50:
    // 0x395f50: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x395f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_395f54:
    // 0x395f54: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x395f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_395f58:
    // 0x395f58: 0x10a482b  sltu        $t1, $t0, $t2
    ctx->pc = 0x395f58u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_395f5c:
    // 0x395f5c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x395f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_395f60:
    // 0x395f60: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x395f60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_395f64:
    // 0x395f64: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x395f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_395f68:
    // 0x395f68: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x395f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_395f6c:
    // 0x395f6c: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x395f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
label_395f70:
    // 0x395f70: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x395f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_395f74:
    // 0x395f74: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x395f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_395f78:
    // 0x395f78: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x395f78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
label_395f7c:
    // 0x395f7c: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
label_395f80:
    if (ctx->pc == 0x395F80u) {
        ctx->pc = 0x395F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F7Cu;
        // 0x395f80: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395F84u;
        goto label_395f84;
    }
    ctx->pc = 0x395F7Cu;
    {
        const bool branch_taken_0x395f7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x395F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F7Cu;
        // 0x395f80: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f7c) {
            ctx->pc = 0x395F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395f50;
        }
    }
    ctx->pc = 0x395F84u;
label_395f84:
    // 0x395f84: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x395f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_395f88:
    // 0x395f88: 0x316bffff  andi        $t3, $t3, 0xFFFF
    ctx->pc = 0x395f88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_395f8c:
    // 0x395f8c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x395f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_395f90:
    // 0x395f90: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x395f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395f94:
    // 0x395f94: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x395f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_395f98:
    // 0x395f98: 0x1600ffbb  bnez        $s0, . + 4 + (-0x45 << 2)
label_395f9c:
    if (ctx->pc == 0x395F9Cu) {
        ctx->pc = 0x395F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F98u;
        // 0x395f9c: 0xafab000c  sw          $t3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395FA0u;
        goto label_395fa0;
    }
    ctx->pc = 0x395F98u;
    {
        const bool branch_taken_0x395f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x395F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F98u;
        // 0x395f9c: 0xafab000c  sw          $t3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f98) {
            ctx->pc = 0x395E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395e88;
        }
    }
    ctx->pc = 0x395FA0u;
label_395fa0:
    // 0x395fa0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x395fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_395fa4:
    // 0x395fa4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_395fa8:
    if (ctx->pc == 0x395FA8u) {
        ctx->pc = 0x395FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FA4u;
        // 0x395fa8: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395FACu;
        goto label_395fac;
    }
    ctx->pc = 0x395FA4u;
    {
        const bool branch_taken_0x395fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FA4u;
        // 0x395fa8: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395fa4) {
            ctx->pc = 0x395FF4u;
            goto label_395ff4;
        }
    }
    ctx->pc = 0x395FACu;
label_395fac:
    // 0x395fac: 0x24d1e880  addiu       $s1, $a2, -0x1780
    ctx->pc = 0x395facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_395fb0:
    // 0x395fb0: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x395fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_395fb4:
    // 0x395fb4: 0x0  nop
    ctx->pc = 0x395fb4u;
    // NOP
label_395fb8:
    // 0x395fb8: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x395fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_395fbc:
    // 0x395fbc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x395fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_395fc0:
    // 0x395fc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x395fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395fc4:
    // 0x395fc4: 0xa0f809  jalr        $a1
label_395fc8:
    if (ctx->pc == 0x395FC8u) {
        ctx->pc = 0x395FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FC4u;
        // 0x395fc8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395FCCu;
        goto label_395fcc;
    }
    ctx->pc = 0x395FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x395FCCu);
        ctx->pc = 0x395FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FC4u;
        // 0x395fc8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395FC4u, 0x395FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395FCCu;
label_395fcc:
    // 0x395fcc: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x395fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_395fd0:
    // 0x395fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x395fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395fd4:
    // 0x395fd4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x395fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_395fd8:
    // 0x395fd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x395fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_395fdc:
    // 0x395fdc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x395fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_395fe0:
    // 0x395fe0: 0x40f809  jalr        $v0
label_395fe4:
    if (ctx->pc == 0x395FE4u) {
        ctx->pc = 0x395FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FE0u;
        // 0x395fe4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395FE8u;
        goto label_395fe8;
    }
    ctx->pc = 0x395FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395FE8u);
        ctx->pc = 0x395FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FE0u;
        // 0x395fe4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395FE0u, 0x395FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395FE8u;
label_395fe8:
    // 0x395fe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x395fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_395fec:
    // 0x395fec: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_395ff0:
    if (ctx->pc == 0x395FF0u) {
        ctx->pc = 0x395FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FECu;
        // 0x395ff0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395FF4u;
        goto label_395ff4;
    }
    ctx->pc = 0x395FECu;
    {
        const bool branch_taken_0x395fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FECu;
        // 0x395ff0: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395fec) {
            ctx->pc = 0x395FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395fb8;
        }
    }
    ctx->pc = 0x395FF4u;
label_395ff4:
    // 0x395ff4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x395ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_395ff8:
    // 0x395ff8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x395ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_395ffc:
    // 0x395ffc: 0x24e7e880  addiu       $a3, $a3, -0x1780
    ctx->pc = 0x395ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_396000:
    // 0x396000: 0x8ce3010c  lw          $v1, 0x10C($a3)
    ctx->pc = 0x396000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 268)));
label_396004:
    // 0x396004: 0x60f809  jalr        $v1
label_396008:
    if (ctx->pc == 0x396008u) {
        ctx->pc = 0x396008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396004u;
        // 0x396008: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39600Cu;
        goto label_39600c;
    }
    ctx->pc = 0x396004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39600Cu);
        ctx->pc = 0x396008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396004u;
        // 0x396008: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396004u, 0x39600Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39600Cu;
label_39600c:
    // 0x39600c: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x39600cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_396010:
    // 0x396010: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
label_396014:
    if (ctx->pc == 0x396014u) {
        ctx->pc = 0x396014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396010u;
        // 0x396014: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396018u;
        goto label_396018;
    }
    ctx->pc = 0x396010u;
    {
        const bool branch_taken_0x396010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396010u;
        // 0x396014: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396010) {
            ctx->pc = 0x395DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395da0;
        }
    }
    ctx->pc = 0x396018u;
label_396018:
    // 0x396018: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x396018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39601c:
    // 0x39601c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x39601cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_396020:
    // 0x396020: 0x2530e880  addiu       $s0, $t1, -0x1780
    ctx->pc = 0x396020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
label_396024:
    // 0x396024: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x396024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396028:
    // 0x396028: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x396028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39602c:
    // 0x39602c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39602cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396030:
    // 0x396030: 0xc104284  jal         func_410A10
label_396034:
    if (ctx->pc == 0x396034u) {
        ctx->pc = 0x396034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396030u;
        // 0x396034: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396038u;
        goto label_396038;
    }
    ctx->pc = 0x396030u;
    SET_GPR_U32(ctx, 31, 0x396038u);
    ctx->pc = 0x396034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396030u;
    // 0x396034: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x396030u, 0x396038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396038u;
label_396038:
    // 0x396038: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x396038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39603c:
    // 0x39603c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39603cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_396040:
    // 0x396040: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x396040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_396044:
    // 0x396044: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x396044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_396048:
    // 0x396048: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_39604c:
    if (ctx->pc == 0x39604Cu) {
        ctx->pc = 0x39604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396048u;
        // 0x39604c: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396050u;
        goto label_396050;
    }
    ctx->pc = 0x396048u;
    {
        const bool branch_taken_0x396048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396048u;
        // 0x39604c: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396048) {
            ctx->pc = 0x39615Cu;
            goto label_39615c;
        }
    }
    ctx->pc = 0x396050u;
label_396050:
    // 0x396050: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x396050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_396054:
    // 0x396054: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_396058:
    if (ctx->pc == 0x396058u) {
        ctx->pc = 0x396058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396054u;
        // 0x396058: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39605Cu;
        goto label_39605c;
    }
    ctx->pc = 0x396054u;
    {
        const bool branch_taken_0x396054 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x396058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396054u;
        // 0x396058: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396054) {
            ctx->pc = 0x3960B4u;
            goto label_3960b4;
        }
    }
    ctx->pc = 0x39605Cu;
label_39605c:
    // 0x39605c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_396060:
    if (ctx->pc == 0x396060u) {
        ctx->pc = 0x396060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39605Cu;
        // 0x396060: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396064u;
        goto label_396064;
    }
    ctx->pc = 0x39605Cu;
    {
        const bool branch_taken_0x39605c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39605Cu;
        // 0x396060: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39605c) {
            ctx->pc = 0x3960E0u;
            goto label_3960e0;
        }
    }
    ctx->pc = 0x396064u;
label_396064:
    // 0x396064: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_396068:
    if (ctx->pc == 0x396068u) {
        ctx->pc = 0x396068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396064u;
        // 0x396068: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39606Cu;
        goto label_39606c;
    }
    ctx->pc = 0x396064u;
    {
        const bool branch_taken_0x396064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396064) {
            ctx->pc = 0x396068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396064u;
            // 0x396068: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3960B8u;
            goto label_3960b8;
        }
    }
    ctx->pc = 0x39606Cu;
label_39606c:
    // 0x39606c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39606cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_396070:
    // 0x396070: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_396074:
    if (ctx->pc == 0x396074u) {
        ctx->pc = 0x396074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396070u;
        // 0x396074: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396078u;
        goto label_396078;
    }
    ctx->pc = 0x396070u;
    {
        const bool branch_taken_0x396070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396070) {
            ctx->pc = 0x396074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396070u;
            // 0x396074: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396098u;
            goto label_396098;
        }
    }
    ctx->pc = 0x396078u;
label_396078:
    // 0x396078: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x396078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_39607c:
    // 0x39607c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39607cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396080:
    // 0x396080: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x396080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_396084:
    // 0x396084: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x396084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_396088:
    // 0x396088: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x396088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_39608c:
    // 0x39608c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x39608cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_396090:
    // 0x396090: 0x248a001c  addiu       $t2, $a0, 0x1C
    ctx->pc = 0x396090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_396094:
    // 0x396094: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x396094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_396098:
    // 0x396098: 0x2545000c  addiu       $a1, $t2, 0xC
    ctx->pc = 0x396098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_39609c:
    // 0x39609c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x39609cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3960a0:
    // 0x3960a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3960a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3960a4:
    // 0x3960a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3960a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3960a8:
    // 0x3960a8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3960a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3960ac:
    // 0x3960ac: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3960acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3960b0:
    // 0x3960b0: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x3960b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3960b4:
    // 0x3960b4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3960b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3960b8:
    // 0x3960b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3960b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3960bc:
    // 0x3960bc: 0x2544000c  addiu       $a0, $t2, 0xC
    ctx->pc = 0x3960bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_3960c0:
    // 0x3960c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3960c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3960c4:
    // 0x3960c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3960c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3960c8:
    // 0x3960c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3960c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3960cc:
    // 0x3960cc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3960ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3960d0:
    // 0x3960d0: 0x263582b  sltu        $t3, $s3, $v1
    ctx->pc = 0x3960d0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3960d4:
    // 0x3960d4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3960d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3960d8:
    // 0x3960d8: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
label_3960dc:
    if (ctx->pc == 0x3960DCu) {
        ctx->pc = 0x3960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960D8u;
        // 0x3960dc: 0x835021  addu        $t2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3960E0u;
        goto label_3960e0;
    }
    ctx->pc = 0x3960D8u;
    {
        const bool branch_taken_0x3960d8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3960DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3960D8u;
        // 0x3960dc: 0x835021  addu        $t2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3960d8) {
            ctx->pc = 0x39615Cu;
            goto label_39615c;
        }
    }
    ctx->pc = 0x3960E0u;
label_3960e0:
    // 0x3960e0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3960e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3960e4:
    // 0x3960e4: 0x0  nop
    ctx->pc = 0x3960e4u;
    // NOP
label_3960e8:
    // 0x3960e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3960e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3960ec:
    // 0x3960ec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3960ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3960f0:
    // 0x3960f0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3960f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3960f4:
    // 0x3960f4: 0x2546000c  addiu       $a2, $t2, 0xC
    ctx->pc = 0x3960f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_3960f8:
    // 0x3960f8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3960f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_3960fc:
    // 0x3960fc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x3960fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_396100:
    // 0x396100: 0x264582b  sltu        $t3, $s3, $a0
    ctx->pc = 0x396100u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_396104:
    // 0x396104: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x396104u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_396108:
    // 0x396108: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x396108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_39610c:
    // 0x39610c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x39610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_396110:
    // 0x396110: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x396110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_396114:
    // 0x396114: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x396114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_396118:
    // 0x396118: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x396118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_39611c:
    // 0x39611c: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x39611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_396120:
    // 0x396120: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x396120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_396124:
    // 0x396124: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x396124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_396128:
    // 0x396128: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x396128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39612c:
    // 0x39612c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x39612cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_396130:
    // 0x396130: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x396130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_396134:
    // 0x396134: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x396134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_396138:
    // 0x396138: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x396138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39613c:
    // 0x39613c: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x39613cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_396140:
    // 0x396140: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x396140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_396144:
    // 0x396144: 0x2543000c  addiu       $v1, $t2, 0xC
    ctx->pc = 0x396144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_396148:
    // 0x396148: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x396148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_39614c:
    // 0x39614c: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x39614cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_396150:
    // 0x396150: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x396150u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_396154:
    // 0x396154: 0x1560ffe4  bnez        $t3, . + 4 + (-0x1C << 2)
label_396158:
    if (ctx->pc == 0x396158u) {
        ctx->pc = 0x396158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396154u;
        // 0x396158: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39615Cu;
        goto label_39615c;
    }
    ctx->pc = 0x396154u;
    {
        const bool branch_taken_0x396154 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x396158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396154u;
        // 0x396158: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396154) {
            ctx->pc = 0x3960E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3960e8;
        }
    }
    ctx->pc = 0x39615Cu;
label_39615c:
    // 0x39615c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x39615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_396160:
    // 0x396160: 0xc0e410c  jal         func_390430
label_396164:
    if (ctx->pc == 0x396164u) {
        ctx->pc = 0x396164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396160u;
        // 0x396164: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396168u;
        goto label_396168;
    }
    ctx->pc = 0x396160u;
    SET_GPR_U32(ctx, 31, 0x396168u);
    ctx->pc = 0x396164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396160u;
    // 0x396164: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x396160u, 0x396168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396168u;
label_396168:
    // 0x396168: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x396168u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39616c:
    // 0x39616c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x39616cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_396170:
    // 0x396170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x396170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396174:
    // 0x396174: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x396174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_396178:
    // 0x396178: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x396178u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_39617c:
    // 0x39617c: 0x24a6e880  addiu       $a2, $a1, -0x1780
    ctx->pc = 0x39617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_396180:
    // 0x396180: 0xa6e70004  sh          $a3, 0x4($s7)
    ctx->pc = 0x396180u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 7));
label_396184:
    // 0x396184: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x396184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_396188:
    // 0x396188: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x396188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_39618c:
    // 0x39618c: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x39618cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_396190:
    // 0x396190: 0xaef20008  sw          $s2, 0x8($s7)
    ctx->pc = 0x396190u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 18));
label_396194:
    // 0x396194: 0x26f10010  addiu       $s1, $s7, 0x10
    ctx->pc = 0x396194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_396198:
    // 0x396198: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x396198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_39619c:
    // 0x39619c: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x39619cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
label_3961a0:
    // 0x3961a0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3961a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3961a4:
    // 0x3961a4: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x3961a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_3961a8:
    // 0x3961a8: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x3961a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3961ac:
    // 0x3961ac: 0xa6e50006  sh          $a1, 0x6($s7)
    ctx->pc = 0x3961acu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 5));
label_3961b0:
    // 0x3961b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3961b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3961b4:
    // 0x3961b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3961b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3961b8:
    // 0x3961b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3961b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3961bc:
    // 0x3961bc: 0x10e0005b  beqz        $a3, . + 4 + (0x5B << 2)
label_3961c0:
    if (ctx->pc == 0x3961C0u) {
        ctx->pc = 0x3961C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961BCu;
        // 0x3961c0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3961C4u;
        goto label_3961c4;
    }
    ctx->pc = 0x3961BCu;
    {
        const bool branch_taken_0x3961bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3961C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961BCu;
        // 0x3961c0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3961bc) {
            ctx->pc = 0x39632Cu;
            goto label_39632c;
        }
    }
    ctx->pc = 0x3961C4u;
label_3961c4:
    // 0x3961c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3961c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3961c8:
    // 0x3961c8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3961c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3961cc:
    // 0x3961cc: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
label_3961d0:
    if (ctx->pc == 0x3961D0u) {
        ctx->pc = 0x3961D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961CCu;
        // 0x3961d0: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3961D4u;
        goto label_3961d4;
    }
    ctx->pc = 0x3961CCu;
    {
        const bool branch_taken_0x3961cc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3961D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961CCu;
        // 0x3961d0: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3961cc) {
            ctx->pc = 0x3961DCu;
            goto label_3961dc;
        }
    }
    ctx->pc = 0x3961D4u;
label_3961d4:
    // 0x3961d4: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_3961d8:
    if (ctx->pc == 0x3961D8u) {
        ctx->pc = 0x3961D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961D4u;
        // 0x3961d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3961DCu;
        goto label_3961dc;
    }
    ctx->pc = 0x3961D4u;
    {
        const bool branch_taken_0x3961d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3961d4) {
            ctx->pc = 0x3961D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3961D4u;
            // 0x3961d8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396254u;
            goto label_396254;
        }
    }
    ctx->pc = 0x3961DCu;
label_3961dc:
    // 0x3961dc: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x3961dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3961e0:
    // 0x3961e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3961e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3961e4:
    // 0x3961e4: 0xaef20010  sw          $s2, 0x10($s7)
    ctx->pc = 0x3961e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 18));
label_3961e8:
    // 0x3961e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3961e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3961ec:
    // 0x3961ec: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3961ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3961f0:
    // 0x3961f0: 0x26f0001c  addiu       $s0, $s7, 0x1C
    ctx->pc = 0x3961f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
label_3961f4:
    // 0x3961f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3961f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3961f8:
    // 0x3961f8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3961f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3961fc:
    // 0x3961fc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3961fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_396200:
    // 0x396200: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x396200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396204:
    // 0x396204: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x396204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_396208:
    // 0x396208: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x396208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_39620c:
    // 0x39620c: 0xc0bb778  jal         func_2EDDE0
label_396210:
    if (ctx->pc == 0x396210u) {
        ctx->pc = 0x396210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39620Cu;
        // 0x396210: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396214u;
        goto label_396214;
    }
    ctx->pc = 0x39620Cu;
    SET_GPR_U32(ctx, 31, 0x396214u);
    ctx->pc = 0x396210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39620Cu;
    // 0x396210: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x39620Cu, 0x396214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396214u;
label_396214:
    // 0x396214: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x396214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_396218:
    // 0x396218: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x396218u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_39621c:
    // 0x39621c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x39621cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_396220:
    // 0x396220: 0x254ae880  addiu       $t2, $t2, -0x1780
    ctx->pc = 0x396220u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_396224:
    // 0x396224: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x396224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_396228:
    // 0x396228: 0x8d42010c  lw          $v0, 0x10C($t2)
    ctx->pc = 0x396228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 268)));
label_39622c:
    // 0x39622c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x39622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396230:
    // 0x396230: 0x40f809  jalr        $v0
label_396234:
    if (ctx->pc == 0x396234u) {
        ctx->pc = 0x396234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396230u;
        // 0x396234: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396238u;
        goto label_396238;
    }
    ctx->pc = 0x396230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396238u);
        ctx->pc = 0x396234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396230u;
        // 0x396234: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396230u, 0x396238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396238u;
label_396238:
    // 0x396238: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x396238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39623c:
    // 0x39623c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x39623cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_396240:
    // 0x396240: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x396240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_396244:
    // 0x396244: 0x267102b  sltu        $v0, $s3, $a3
    ctx->pc = 0x396244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_396248:
    // 0x396248: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_39624c:
    if (ctx->pc == 0x39624Cu) {
        ctx->pc = 0x39624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396248u;
        // 0x39624c: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396250u;
        goto label_396250;
    }
    ctx->pc = 0x396248u;
    {
        const bool branch_taken_0x396248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396248u;
        // 0x39624c: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396248) {
            ctx->pc = 0x39632Cu;
            goto label_39632c;
        }
    }
    ctx->pc = 0x396250u;
label_396250:
    // 0x396250: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x396250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396254:
    // 0x396254: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x396254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_396258:
    // 0x396258: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x396258u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39625c:
    // 0x39625c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x39625cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396260:
    // 0x396260: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x396260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396264:
    // 0x396264: 0x0  nop
    ctx->pc = 0x396264u;
    // NOP
label_396268:
    // 0x396268: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39626c:
    // 0x39626c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_396270:
    // 0x396270: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x396270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_396274:
    // 0x396274: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x396274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_396278:
    // 0x396278: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x396278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_39627c:
    // 0x39627c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x39627cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_396280:
    // 0x396280: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x396280u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_396284:
    // 0x396284: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x396284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_396288:
    // 0x396288: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x396288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_39628c:
    // 0x39628c: 0xaec70008  sw          $a3, 0x8($s6)
    ctx->pc = 0x39628cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 7));
label_396290:
    // 0x396290: 0xc0bb778  jal         func_2EDDE0
label_396294:
    if (ctx->pc == 0x396294u) {
        ctx->pc = 0x396294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396290u;
        // 0x396294: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396298u;
        goto label_396298;
    }
    ctx->pc = 0x396290u;
    SET_GPR_U32(ctx, 31, 0x396298u);
    ctx->pc = 0x396294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396290u;
    // 0x396294: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x396290u, 0x396298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396298u;
label_396298:
    // 0x396298: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x396298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39629c:
    // 0x39629c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x39629cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_3962a0:
    // 0x3962a0: 0x2529e880  addiu       $t1, $t1, -0x1780
    ctx->pc = 0x3962a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
label_3962a4:
    // 0x3962a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3962a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3962a8:
    // 0x3962a8: 0x8d22010c  lw          $v0, 0x10C($t1)
    ctx->pc = 0x3962a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 268)));
label_3962ac:
    // 0x3962ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3962acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3962b0:
    // 0x3962b0: 0x40f809  jalr        $v0
label_3962b4:
    if (ctx->pc == 0x3962B4u) {
        ctx->pc = 0x3962B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3962B0u;
        // 0x3962b4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3962B8u;
        goto label_3962b8;
    }
    ctx->pc = 0x3962B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3962B8u);
        ctx->pc = 0x3962B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3962B0u;
        // 0x3962b4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3962B0u, 0x3962B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3962B8u;
label_3962b8:
    // 0x3962b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3962b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3962bc:
    // 0x3962bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3962bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3962c0:
    // 0x3962c0: 0xae92000c  sw          $s2, 0xC($s4)
    ctx->pc = 0x3962c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 18));
label_3962c4:
    // 0x3962c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3962c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3962c8:
    // 0x3962c8: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x3962c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_3962cc:
    // 0x3962cc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x3962ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3962d0:
    // 0x3962d0: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x3962d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_3962d4:
    // 0x3962d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3962d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3962d8:
    // 0x3962d8: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3962d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_3962dc:
    // 0x3962dc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x3962dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3962e0:
    // 0x3962e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3962e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3962e4:
    // 0x3962e4: 0xaec70014  sw          $a3, 0x14($s6)
    ctx->pc = 0x3962e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 7));
label_3962e8:
    // 0x3962e8: 0xc0bb778  jal         func_2EDDE0
label_3962ec:
    if (ctx->pc == 0x3962ECu) {
        ctx->pc = 0x3962ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3962E8u;
        // 0x3962ec: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3962F0u;
        goto label_3962f0;
    }
    ctx->pc = 0x3962E8u;
    SET_GPR_U32(ctx, 31, 0x3962F0u);
    ctx->pc = 0x3962ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962E8u;
    // 0x3962ec: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3962E8u, 0x3962F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962F0u;
label_3962f0:
    // 0x3962f0: 0x26d60018  addiu       $s6, $s6, 0x18
    ctx->pc = 0x3962f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_3962f4:
    // 0x3962f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3962f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3962f8:
    // 0x3962f8: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x3962f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
label_3962fc:
    // 0x3962fc: 0x254ae880  addiu       $t2, $t2, -0x1780
    ctx->pc = 0x3962fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961280));
label_396300:
    // 0x396300: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x396300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_396304:
    // 0x396304: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x396304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_396308:
    // 0x396308: 0x8d43010c  lw          $v1, 0x10C($t2)
    ctx->pc = 0x396308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 268)));
label_39630c:
    // 0x39630c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x39630cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_396310:
    // 0x396310: 0x60f809  jalr        $v1
label_396314:
    if (ctx->pc == 0x396314u) {
        ctx->pc = 0x396314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396310u;
        // 0x396314: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396318u;
        goto label_396318;
    }
    ctx->pc = 0x396310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x396318u);
        ctx->pc = 0x396314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396310u;
        // 0x396314: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396310u, 0x396318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396318u;
label_396318:
    // 0x396318: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x396318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_39631c:
    // 0x39631c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x39631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_396320:
    // 0x396320: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x396320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_396324:
    // 0x396324: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_396328:
    if (ctx->pc == 0x396328u) {
        ctx->pc = 0x396328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396324u;
        // 0x396328: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39632Cu;
        goto label_39632c;
    }
    ctx->pc = 0x396324u;
    {
        const bool branch_taken_0x396324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396324u;
        // 0x396328: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396324) {
            ctx->pc = 0x396268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396268;
        }
    }
    ctx->pc = 0x39632Cu;
label_39632c:
    // 0x39632c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x39632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_396330:
    // 0x396330: 0x2490e880  addiu       $s0, $a0, -0x1780
    ctx->pc = 0x396330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_396334:
    // 0x396334: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x396334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_396338:
    // 0x396338: 0x40f809  jalr        $v0
label_39633c:
    if (ctx->pc == 0x39633Cu) {
        ctx->pc = 0x39633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396338u;
        // 0x39633c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396340u;
        goto label_396340;
    }
    ctx->pc = 0x396338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396340u);
        ctx->pc = 0x39633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396338u;
        // 0x39633c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396338u, 0x396340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396340u;
label_396340:
    // 0x396340: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x396340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_396344:
    // 0x396344: 0x60f809  jalr        $v1
label_396348:
    if (ctx->pc == 0x396348u) {
        ctx->pc = 0x396348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396344u;
        // 0x396348: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39634Cu;
        goto label_39634c;
    }
    ctx->pc = 0x396344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39634Cu);
        ctx->pc = 0x396348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396344u;
        // 0x396348: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396344u, 0x39634Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39634Cu;
label_39634c:
    // 0x39634c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x39634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_396350:
    // 0x396350: 0x40f809  jalr        $v0
label_396354:
    if (ctx->pc == 0x396354u) {
        ctx->pc = 0x396354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396350u;
        // 0x396354: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396358u;
        goto label_396358;
    }
    ctx->pc = 0x396350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396358u);
        ctx->pc = 0x396354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396350u;
        // 0x396354: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396350u, 0x396358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396358u;
label_396358:
    // 0x396358: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x396358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_39635c:
    // 0x39635c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x39635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_396360:
    // 0x396360: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x396360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_396364:
    // 0x396364: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x396364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_396368:
    // 0x396368: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x396368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39636c:
    // 0x39636c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x39636cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_396370:
    // 0x396370: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x396370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_396374:
    // 0x396374: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x396374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_396378:
    // 0x396378: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x396378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39637c:
    // 0x39637c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x39637cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_396380:
    // 0x396380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396384:
    // 0x396384: 0x3e00008  jr          $ra
label_396388:
    if (ctx->pc == 0x396388u) {
        ctx->pc = 0x396388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396384u;
        // 0x396388: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39638Cu;
        goto label_39638c;
    }
    ctx->pc = 0x396384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396384u;
        // 0x396388: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39638Cu;
label_39638c:
    // 0x39638c: 0x0  nop
    ctx->pc = 0x39638cu;
    // NOP
label_396390:
    // 0x396390: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x396390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_396394:
    // 0x396394: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x396394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_396398:
    // 0x396398: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x396398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_39639c:
    // 0x39639c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39639cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3963a0:
    // 0x3963a0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3963a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3963a4:
    // 0x3963a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3963a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3963a8:
    // 0x3963a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3963a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3963ac:
    // 0x3963ac: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3963acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3963b0:
    // 0x3963b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3963b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3963b4:
    // 0x3963b4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3963b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3963b8:
    // 0x3963b8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3963b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3963bc:
    // 0x3963bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3963bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3963c0:
    // 0x3963c0: 0x34169c40  ori         $s6, $zero, 0x9C40
    ctx->pc = 0x3963c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
label_3963c4:
    // 0x3963c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3963c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3963c8:
    // 0x3963c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3963c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3963cc:
    // 0x3963cc: 0xc0e61f4  jal         func_3987D0
label_3963d0:
    if (ctx->pc == 0x3963D0u) {
        ctx->pc = 0x3963D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963CCu;
        // 0x3963d0: 0xae540030  sw          $s4, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3963D4u;
        goto label_3963d4;
    }
    ctx->pc = 0x3963CCu;
    SET_GPR_U32(ctx, 31, 0x3963D4u);
    ctx->pc = 0x3963D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3963CCu;
    // 0x3963d0: 0xae540030  sw          $s4, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x3963CCu, 0x3963D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3963D4u;
label_3963d4:
    // 0x3963d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3963d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3963d8:
    // 0x3963d8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3963dc:
    if (ctx->pc == 0x3963DCu) {
        ctx->pc = 0x3963DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963D8u;
        // 0x3963dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3963E0u;
        goto label_3963e0;
    }
    ctx->pc = 0x3963D8u;
    {
        const bool branch_taken_0x3963d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3963DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963D8u;
        // 0x3963dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3963d8) {
            ctx->pc = 0x39640Cu;
            goto label_39640c;
        }
    }
    ctx->pc = 0x3963E0u;
label_3963e0:
    // 0x3963e0: 0xae340030  sw          $s4, 0x30($s1)
    ctx->pc = 0x3963e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 20));
label_3963e4:
    // 0x3963e4: 0xc0e61f4  jal         func_3987D0
label_3963e8:
    if (ctx->pc == 0x3963E8u) {
        ctx->pc = 0x3963E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963E4u;
        // 0x3963e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3963ECu;
        goto label_3963ec;
    }
    ctx->pc = 0x3963E4u;
    SET_GPR_U32(ctx, 31, 0x3963ECu);
    ctx->pc = 0x3963E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3963E4u;
    // 0x3963e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x3963E4u, 0x3963ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3963ECu;
label_3963ec:
    // 0x3963ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3963ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3963f0:
    // 0x3963f0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3963f4:
    if (ctx->pc == 0x3963F4u) {
        ctx->pc = 0x3963F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963F0u;
        // 0x3963f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3963F8u;
        goto label_3963f8;
    }
    ctx->pc = 0x3963F0u;
    {
        const bool branch_taken_0x3963f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3963F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963F0u;
        // 0x3963f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3963f0) {
            ctx->pc = 0x396410u;
            goto label_396410;
        }
    }
    ctx->pc = 0x3963F8u;
label_3963f8:
    // 0x3963f8: 0xae140030  sw          $s4, 0x30($s0)
    ctx->pc = 0x3963f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
label_3963fc:
    // 0x3963fc: 0xc0e61f4  jal         func_3987D0
label_396400:
    if (ctx->pc == 0x396400u) {
        ctx->pc = 0x396400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963FCu;
        // 0x396400: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396404u;
        goto label_396404;
    }
    ctx->pc = 0x3963FCu;
    SET_GPR_U32(ctx, 31, 0x396404u);
    ctx->pc = 0x396400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3963FCu;
    // 0x396400: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x3963FCu, 0x396404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396404u;
label_396404:
    // 0x396404: 0x10000003  b           . + 4 + (0x3 << 2)
label_396408:
    if (ctx->pc == 0x396408u) {
        ctx->pc = 0x396408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396404u;
        // 0x396408: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39640Cu;
        goto label_39640c;
    }
    ctx->pc = 0x396404u;
    {
        const bool branch_taken_0x396404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396404u;
        // 0x396408: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396404) {
            ctx->pc = 0x396414u;
            goto label_396414;
        }
    }
    ctx->pc = 0x39640Cu;
label_39640c:
    // 0x39640c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396410:
    // 0x396410: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x396410u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396414:
    // 0x396414: 0x11400062  beqz        $t2, . + 4 + (0x62 << 2)
label_396418:
    if (ctx->pc == 0x396418u) {
        ctx->pc = 0x396418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396414u;
        // 0x396418: 0x2b3102b  sltu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39641Cu;
        goto label_39641c;
    }
    ctx->pc = 0x396414u;
    {
        const bool branch_taken_0x396414 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x396418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396414u;
        // 0x396418: 0x2b3102b  sltu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396414) {
            ctx->pc = 0x3965A0u;
            goto label_3965a0;
        }
    }
    ctx->pc = 0x39641Cu;
label_39641c:
    // 0x39641c: 0xad540030  sw          $s4, 0x30($t2)
    ctx->pc = 0x39641cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 20));
label_396420:
    // 0x396420: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x396420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_396424:
    // 0x396424: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_396428:
    if (ctx->pc == 0x396428u) {
        ctx->pc = 0x396428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396424u;
        // 0x396428: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39642Cu;
        goto label_39642c;
    }
    ctx->pc = 0x396424u;
    {
        const bool branch_taken_0x396424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396424u;
        // 0x396428: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396424) {
            ctx->pc = 0x396554u;
            goto label_396554;
        }
    }
    ctx->pc = 0x39642Cu;
label_39642c:
    // 0x39642c: 0x8e2d0018  lw          $t5, 0x18($s1)
    ctx->pc = 0x39642cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_396430:
    // 0x396430: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x396430u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396434:
    // 0x396434: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396434u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396438:
    // 0x396438: 0x264c0028  addiu       $t4, $s2, 0x28
    ctx->pc = 0x396438u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_39643c:
    // 0x39643c: 0x0  nop
    ctx->pc = 0x39643cu;
    // NOP
label_396440:
    // 0x396440: 0x11a0003f  beqz        $t5, . + 4 + (0x3F << 2)
label_396444:
    if (ctx->pc == 0x396444u) {
        ctx->pc = 0x396444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396440u;
        // 0x396444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396448u;
        goto label_396448;
    }
    ctx->pc = 0x396440u;
    {
        const bool branch_taken_0x396440 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x396444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396440u;
        // 0x396444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396440) {
            ctx->pc = 0x396540u;
            goto label_396540;
        }
    }
    ctx->pc = 0x396448u;
label_396448:
    // 0x396448: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x396448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_39644c:
    // 0x39644c: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x39644cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_396450:
    // 0x396450: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_396454:
    if (ctx->pc == 0x396454u) {
        ctx->pc = 0x396454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396450u;
        // 0x396454: 0x26490028  addiu       $t1, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396458u;
        goto label_396458;
    }
    ctx->pc = 0x396450u;
    {
        const bool branch_taken_0x396450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396450u;
        // 0x396454: 0x26490028  addiu       $t1, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396450) {
            ctx->pc = 0x396484u;
            goto label_396484;
        }
    }
    ctx->pc = 0x396458u;
label_396458:
    // 0x396458: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x396458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_39645c:
    // 0x39645c: 0x12b3021  addu        $a2, $t1, $t3
    ctx->pc = 0x39645cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_396460:
    // 0x396460: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x396460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_396464:
    // 0x396464: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x396464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_396468:
    // 0x396468: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x396468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_39646c:
    // 0x39646c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_396470:
    if (ctx->pc == 0x396470u) {
        ctx->pc = 0x396470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39646Cu;
        // 0x396470: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396474u;
        goto label_396474;
    }
    ctx->pc = 0x39646Cu;
    {
        const bool branch_taken_0x39646c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39646Cu;
        // 0x396470: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39646c) {
            ctx->pc = 0x396540u;
            goto label_396540;
        }
    }
    ctx->pc = 0x396474u;
label_396474:
    // 0x396474: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x396474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_396478:
    // 0x396478: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x396478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39647c:
    // 0x39647c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
label_396480:
    if (ctx->pc == 0x396480u) {
        ctx->pc = 0x396480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39647Cu;
        // 0x396480: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396484u;
        goto label_396484;
    }
    ctx->pc = 0x39647Cu;
    {
        const bool branch_taken_0x39647c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39647c) {
            ctx->pc = 0x396480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39647Cu;
            // 0x396480: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396468;
        }
    }
    ctx->pc = 0x396484u;
label_396484:
    // 0x396484: 0xad102b  sltu        $v0, $a1, $t5
    ctx->pc = 0x396484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_396488:
    // 0x396488: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_39648c:
    if (ctx->pc == 0x39648Cu) {
        ctx->pc = 0x39648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396488u;
        // 0x39648c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396490u;
        goto label_396490;
    }
    ctx->pc = 0x396488u;
    {
        const bool branch_taken_0x396488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396488u;
        // 0x39648c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396488) {
            ctx->pc = 0x396540u;
            goto label_396540;
        }
    }
    ctx->pc = 0x396490u;
label_396490:
    // 0x396490: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x396490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_396494:
    // 0x396494: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_396498:
    if (ctx->pc == 0x396498u) {
        ctx->pc = 0x396498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396494u;
        // 0x396498: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39649Cu;
        goto label_39649c;
    }
    ctx->pc = 0x396494u;
    {
        const bool branch_taken_0x396494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396494u;
        // 0x396498: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396494) {
            ctx->pc = 0x396540u;
            goto label_396540;
        }
    }
    ctx->pc = 0x39649Cu;
label_39649c:
    // 0x39649c: 0x12b2021  addu        $a0, $t1, $t3
    ctx->pc = 0x39649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_3964a0:
    // 0x3964a0: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x3964a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_3964a4:
    // 0x3964a4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3964a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3964a8:
    // 0x3964a8: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_3964ac:
    if (ctx->pc == 0x3964ACu) {
        ctx->pc = 0x3964ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964A8u;
        // 0x3964ac: 0xa8102b  sltu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964B0u;
        goto label_3964b0;
    }
    ctx->pc = 0x3964A8u;
    {
        const bool branch_taken_0x3964a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3964ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964A8u;
        // 0x3964ac: 0xa8102b  sltu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964a8) {
            ctx->pc = 0x3964E0u;
            goto label_3964e0;
        }
    }
    ctx->pc = 0x3964B0u;
label_3964b0:
    // 0x3964b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3964b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3964b4:
    // 0x3964b4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3964b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3964b8:
    // 0x3964b8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3964b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_3964bc:
    // 0x3964bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3964bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3964c0:
    // 0x3964c0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x3964c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3964c4:
    // 0x3964c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3964c8:
    if (ctx->pc == 0x3964C8u) {
        ctx->pc = 0x3964C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964C4u;
        // 0x3964c8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964CCu;
        goto label_3964cc;
    }
    ctx->pc = 0x3964C4u;
    {
        const bool branch_taken_0x3964c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3964C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964C4u;
        // 0x3964c8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964c4) {
            ctx->pc = 0x396540u;
            goto label_396540;
        }
    }
    ctx->pc = 0x3964CCu;
label_3964cc:
    // 0x3964cc: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3964ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3964d0:
    // 0x3964d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3964d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3964d4:
    // 0x3964d4: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
label_3964d8:
    if (ctx->pc == 0x3964D8u) {
        ctx->pc = 0x3964D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964D4u;
        // 0x3964d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964DCu;
        goto label_3964dc;
    }
    ctx->pc = 0x3964D4u;
    {
        const bool branch_taken_0x3964d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3964d4) {
            ctx->pc = 0x3964D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3964D4u;
            // 0x3964d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3964C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3964c0;
        }
    }
    ctx->pc = 0x3964DCu;
label_3964dc:
    // 0x3964dc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3964dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3964e0:
    // 0x3964e0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_3964e4:
    if (ctx->pc == 0x3964E4u) {
        ctx->pc = 0x3964E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964E0u;
        // 0x3964e4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964E8u;
        goto label_3964e8;
    }
    ctx->pc = 0x3964E0u;
    {
        const bool branch_taken_0x3964e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3964e0) {
            ctx->pc = 0x3964E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3964E0u;
            // 0x3964e4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396544u;
            goto label_396544;
        }
    }
    ctx->pc = 0x3964E8u;
label_3964e8:
    // 0x3964e8: 0x8d460018  lw          $a2, 0x18($t2)
    ctx->pc = 0x3964e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_3964ec:
    // 0x3964ec: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_3964f0:
    if (ctx->pc == 0x3964F0u) {
        ctx->pc = 0x3964F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964ECu;
        // 0x3964f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3964F4u;
        goto label_3964f4;
    }
    ctx->pc = 0x3964ECu;
    {
        const bool branch_taken_0x3964ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3964F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964ECu;
        // 0x3964f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964ec) {
            ctx->pc = 0x396534u;
            goto label_396534;
        }
    }
    ctx->pc = 0x3964F4u;
label_3964f4:
    // 0x3964f4: 0x12b2021  addu        $a0, $t1, $t3
    ctx->pc = 0x3964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_3964f8:
    // 0x3964f8: 0x95430028  lhu         $v1, 0x28($t2)
    ctx->pc = 0x3964f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
label_3964fc:
    // 0x3964fc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3964fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_396500:
    // 0x396500: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_396504:
    if (ctx->pc == 0x396504u) {
        ctx->pc = 0x396504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396500u;
        // 0x396504: 0xa8102b  sltu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396508u;
        goto label_396508;
    }
    ctx->pc = 0x396500u;
    {
        const bool branch_taken_0x396500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x396504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396500u;
        // 0x396504: 0xa8102b  sltu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396500) {
            ctx->pc = 0x396538u;
            goto label_396538;
        }
    }
    ctx->pc = 0x396508u;
label_396508:
    // 0x396508: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x396508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39650c:
    // 0x39650c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396510:
    // 0x396510: 0x25440028  addiu       $a0, $t2, 0x28
    ctx->pc = 0x396510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
label_396514:
    // 0x396514: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x396514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_396518:
    // 0x396518: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x396518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_39651c:
    // 0x39651c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_396520:
    if (ctx->pc == 0x396520u) {
        ctx->pc = 0x396520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39651Cu;
        // 0x396520: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396524u;
        goto label_396524;
    }
    ctx->pc = 0x39651Cu;
    {
        const bool branch_taken_0x39651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39651Cu;
        // 0x396520: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39651c) {
            ctx->pc = 0x396534u;
            goto label_396534;
        }
    }
    ctx->pc = 0x396524u;
label_396524:
    // 0x396524: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x396524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_396528:
    // 0x396528: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x396528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39652c:
    // 0x39652c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
label_396530:
    if (ctx->pc == 0x396530u) {
        ctx->pc = 0x396530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39652Cu;
        // 0x396530: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396534u;
        goto label_396534;
    }
    ctx->pc = 0x39652Cu;
    {
        const bool branch_taken_0x39652c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39652c) {
            ctx->pc = 0x396530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39652Cu;
            // 0x396530: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396518;
        }
    }
    ctx->pc = 0x396534u;
label_396534:
    // 0x396534: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x396534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_396538:
    // 0x396538: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_39653c:
    if (ctx->pc == 0x39653Cu) {
        ctx->pc = 0x39653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396538u;
        // 0x39653c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396540u;
        goto label_396540;
    }
    ctx->pc = 0x396538u;
    {
        const bool branch_taken_0x396538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396538u;
        // 0x39653c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396538) {
            ctx->pc = 0x396558u;
            goto label_396558;
        }
    }
    ctx->pc = 0x396540u;
label_396540:
    // 0x396540: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x396540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_396544:
    // 0x396544: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x396544u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_396548:
    // 0x396548: 0x1cf102b  sltu        $v0, $t6, $t7
    ctx->pc = 0x396548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_39654c:
    // 0x39654c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_396550:
    if (ctx->pc == 0x396550u) {
        ctx->pc = 0x396550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39654Cu;
        // 0x396550: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396554u;
        goto label_396554;
    }
    ctx->pc = 0x39654Cu;
    {
        const bool branch_taken_0x39654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39654Cu;
        // 0x396550: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39654c) {
            ctx->pc = 0x396440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396440;
        }
    }
    ctx->pc = 0x396554u;
label_396554:
    // 0x396554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x396554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396558:
    // 0x396558: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39655c:
    if (ctx->pc == 0x39655Cu) {
        ctx->pc = 0x396560u;
        goto label_396560;
    }
    ctx->pc = 0x396558u;
    {
        const bool branch_taken_0x396558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396558) {
            ctx->pc = 0x39656Cu;
            goto label_39656c;
        }
    }
    ctx->pc = 0x396560u;
label_396560:
    // 0x396560: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x396560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396564:
    // 0x396564: 0x10000004  b           . + 4 + (0x4 << 2)
label_396568:
    if (ctx->pc == 0x396568u) {
        ctx->pc = 0x396568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396564u;
        // 0x396568: 0x26d62710  addiu       $s6, $s6, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39656Cu;
        goto label_39656c;
    }
    ctx->pc = 0x396564u;
    {
        const bool branch_taken_0x396564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396564u;
        // 0x396568: 0x26d62710  addiu       $s6, $s6, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396564) {
            ctx->pc = 0x396578u;
            goto label_396578;
        }
    }
    ctx->pc = 0x39656Cu;
label_39656c:
    // 0x39656c: 0x52600002  beql        $s3, $zero, . + 4 + (0x2 << 2)
label_396570:
    if (ctx->pc == 0x396570u) {
        ctx->pc = 0x396570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39656Cu;
        // 0x396570: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396574u;
        goto label_396574;
    }
    ctx->pc = 0x39656Cu;
    {
        const bool branch_taken_0x39656c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39656c) {
            ctx->pc = 0x396570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39656Cu;
            // 0x396570: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396578u;
            goto label_396578;
        }
    }
    ctx->pc = 0x396574u;
label_396574:
    // 0x396574: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x396574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_396578:
    // 0x396578: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x396578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39657c:
    // 0x39657c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x39657cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396580:
    // 0x396580: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x396580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_396584:
    // 0x396584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x396584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396588:
    // 0x396588: 0xc0e61f4  jal         func_3987D0
label_39658c:
    if (ctx->pc == 0x39658Cu) {
        ctx->pc = 0x39658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396588u;
        // 0x39658c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396590u;
        goto label_396590;
    }
    ctx->pc = 0x396588u;
    SET_GPR_U32(ctx, 31, 0x396590u);
    ctx->pc = 0x39658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396588u;
    // 0x39658c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x396588u, 0x396590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396590u;
label_396590:
    // 0x396590: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x396590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396594:
    // 0x396594: 0x5540ffa2  bnel        $t2, $zero, . + 4 + (-0x5E << 2)
label_396598:
    if (ctx->pc == 0x396598u) {
        ctx->pc = 0x396598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396594u;
        // 0x396598: 0xad540030  sw          $s4, 0x30($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39659Cu;
        goto label_39659c;
    }
    ctx->pc = 0x396594u;
    {
        const bool branch_taken_0x396594 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x396594) {
            ctx->pc = 0x396598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396594u;
            // 0x396598: 0xad540030  sw          $s4, 0x30($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396420;
        }
    }
    ctx->pc = 0x39659Cu;
label_39659c:
    // 0x39659c: 0x2b3102b  sltu        $v0, $s5, $s3
    ctx->pc = 0x39659cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3965a0:
    // 0x3965a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3965a4:
    if (ctx->pc == 0x3965A4u) {
        ctx->pc = 0x3965A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965A0u;
        // 0x3965a4: 0x2d51021  addu        $v0, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965A8u;
        goto label_3965a8;
    }
    ctx->pc = 0x3965A0u;
    {
        const bool branch_taken_0x3965a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3965A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965A0u;
        // 0x3965a4: 0x2d51021  addu        $v0, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3965a0) {
            ctx->pc = 0x3965ACu;
            goto label_3965ac;
        }
    }
    ctx->pc = 0x3965A8u;
label_3965a8:
    // 0x3965a8: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x3965a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_3965ac:
    // 0x3965ac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3965acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3965b0:
    // 0x3965b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3965b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3965b4:
    // 0x3965b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3965b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3965b8:
    // 0x3965b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3965b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3965bc:
    // 0x3965bc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3965bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3965c0:
    // 0x3965c0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3965c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3965c4:
    // 0x3965c4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3965c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3965c8:
    // 0x3965c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3965c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3965cc:
    // 0x3965cc: 0x3e00008  jr          $ra
label_3965d0:
    if (ctx->pc == 0x3965D0u) {
        ctx->pc = 0x3965D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965CCu;
        // 0x3965d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3965D4u;
        goto label_3965d4;
    }
    ctx->pc = 0x3965CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3965D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965CCu;
        // 0x3965d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3965CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3965D4u;
label_3965d4:
    // 0x3965d4: 0x0  nop
    ctx->pc = 0x3965d4u;
    // NOP
label_3965d8:
    // 0x3965d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3965d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3965dc:
    // 0x3965dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3965dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3965e0:
    // 0x3965e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3965e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3965e4:
    // 0x3965e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3965e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3965e8:
    // 0x3965e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3965e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3965ec:
    // 0x3965ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3965ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3965f0:
    // 0x3965f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3965f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3965f4:
    // 0x3965f4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3965f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3965f8:
    // 0x3965f8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3965f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3965fc:
    // 0x3965fc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3965fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_396600:
    // 0x396600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_396604:
    // 0x396604: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x396604u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_396608:
    // 0x396608: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x396608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39660c:
    // 0x39660c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x39660cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_396610:
    // 0x396610: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x396610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_396614:
    // 0x396614: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_396618:
    if (ctx->pc == 0x396618u) {
        ctx->pc = 0x396618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396614u;
        // 0x396618: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39661Cu;
        goto label_39661c;
    }
    ctx->pc = 0x396614u;
    {
        const bool branch_taken_0x396614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396614u;
        // 0x396618: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396614) {
            ctx->pc = 0x3967BCu;
            goto label_3967bc;
        }
    }
    ctx->pc = 0x39661Cu;
label_39661c:
    // 0x39661c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x39661cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_396620:
    // 0x396620: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x396620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_396624:
    // 0x396624: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x396624u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396628:
    // 0x396628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x396628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39662c:
    // 0x39662c: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x39662cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_396630:
    // 0x396630: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x396630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_396634:
    // 0x396634: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x396634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_396638:
    // 0x396638: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x396638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39663c:
    // 0x39663c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x39663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_396640:
    // 0x396640: 0x40f809  jalr        $v0
label_396644:
    if (ctx->pc == 0x396644u) {
        ctx->pc = 0x396644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396640u;
        // 0x396644: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396648u;
        goto label_396648;
    }
    ctx->pc = 0x396640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396648u);
        ctx->pc = 0x396644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396640u;
        // 0x396644: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396640u, 0x396648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396648u;
label_396648:
    // 0x396648: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x396648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39664c:
    // 0x39664c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39664cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396650:
    // 0x396650: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x396650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_396654:
    // 0x396654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x396654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396658:
    // 0x396658: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x396658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_39665c:
    // 0x39665c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x39665cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_396660:
    // 0x396660: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x396660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_396664:
    // 0x396664: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x396664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_396668:
    // 0x396668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x396668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39666c:
    // 0x39666c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_396670:
    // 0x396670: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x396670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_396674:
    // 0x396674: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x396674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_396678:
    // 0x396678: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x396678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_39667c:
    // 0x39667c: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x39667cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_396680:
    // 0x396680: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x396680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_396684:
    // 0x396684: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x396684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_396688:
    // 0x396688: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x396688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_39668c:
    // 0x39668c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x39668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_396690:
    // 0x396690: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x396690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_396694:
    // 0x396694: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x396694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396698:
    // 0x396698: 0x2012  mflo        $a0
    ctx->pc = 0x396698u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_39669c:
    // 0x39669c: 0x40f809  jalr        $v0
label_3966a0:
    if (ctx->pc == 0x3966A0u) {
        ctx->pc = 0x3966A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39669Cu;
        // 0x3966a0: 0x26760004  addiu       $s6, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966A4u;
        goto label_3966a4;
    }
    ctx->pc = 0x39669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3966A4u);
        ctx->pc = 0x3966A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39669Cu;
        // 0x3966a0: 0x26760004  addiu       $s6, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39669Cu, 0x3966A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3966A4u;
label_3966a4:
    // 0x3966a4: 0xc78c80a8  lwc1        $f12, -0x7F58($gp)
    ctx->pc = 0x3966a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3966a8:
    // 0x3966a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3966a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3966ac:
    // 0x3966ac: 0xc0c39f4  jal         func_30E7D0
label_3966b0:
    if (ctx->pc == 0x3966B0u) {
        ctx->pc = 0x3966B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966ACu;
        // 0x3966b0: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966B4u;
        goto label_3966b4;
    }
    ctx->pc = 0x3966ACu;
    SET_GPR_U32(ctx, 31, 0x3966B4u);
    ctx->pc = 0x3966B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966ACu;
    // 0x3966b0: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x3966ACu, 0x3966B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966B4u;
label_3966b4:
    // 0x3966b4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3966b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3966b8:
    // 0x3966b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3966bc:
    if (ctx->pc == 0x3966BCu) {
        ctx->pc = 0x3966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966B8u;
        // 0x3966bc: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966C0u;
        goto label_3966c0;
    }
    ctx->pc = 0x3966B8u;
    {
        const bool branch_taken_0x3966b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966B8u;
        // 0x3966bc: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966b8) {
            ctx->pc = 0x3966C4u;
            goto label_3966c4;
        }
    }
    ctx->pc = 0x3966C0u;
label_3966c0:
    // 0x3966c0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3966c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3966c4:
    // 0x3966c4: 0x1216000a  beq         $s0, $s6, . + 4 + (0xA << 2)
label_3966c8:
    if (ctx->pc == 0x3966C8u) {
        ctx->pc = 0x3966C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966C4u;
        // 0x3966c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966CCu;
        goto label_3966cc;
    }
    ctx->pc = 0x3966C4u;
    {
        const bool branch_taken_0x3966c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x3966C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966C4u;
        // 0x3966c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966c4) {
            ctx->pc = 0x3966F0u;
            goto label_3966f0;
        }
    }
    ctx->pc = 0x3966CCu;
label_3966cc:
    // 0x3966cc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3966ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3966d0:
    // 0x3966d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3966d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3966d4:
    // 0x3966d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3966d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3966d8:
    // 0x3966d8: 0xc0e4fc6  jal         func_393F18
label_3966dc:
    if (ctx->pc == 0x3966DCu) {
        ctx->pc = 0x3966DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966D8u;
        // 0x3966dc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966E0u;
        goto label_3966e0;
    }
    ctx->pc = 0x3966D8u;
    SET_GPR_U32(ctx, 31, 0x3966E0u);
    ctx->pc = 0x3966DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966D8u;
    // 0x3966dc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393F18u, 0x3966D8u, 0x3966E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966E0u;
label_3966e0:
    // 0x3966e0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_3966e4:
    if (ctx->pc == 0x3966E4u) {
        ctx->pc = 0x3966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966E0u;
        // 0x3966e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966E8u;
        goto label_3966e8;
    }
    ctx->pc = 0x3966E0u;
    {
        const bool branch_taken_0x3966e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966E0u;
        // 0x3966e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966e0) {
            ctx->pc = 0x3966C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3966c0;
        }
    }
    ctx->pc = 0x3966E8u;
label_3966e8:
    // 0x3966e8: 0x10000028  b           . + 4 + (0x28 << 2)
label_3966ec:
    if (ctx->pc == 0x3966ECu) {
        ctx->pc = 0x3966F0u;
        goto label_3966f0;
    }
    ctx->pc = 0x3966E8u;
    {
        const bool branch_taken_0x3966e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3966e8) {
            ctx->pc = 0x39678Cu;
            goto label_39678c;
        }
    }
    ctx->pc = 0x3966F0u;
label_3966f0:
    // 0x3966f0: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
label_3966f4:
    if (ctx->pc == 0x3966F4u) {
        ctx->pc = 0x3966F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966F0u;
        // 0x3966f4: 0x4616a082  mul.s       $f2, $f20, $f22 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3966F8u;
        goto label_3966f8;
    }
    ctx->pc = 0x3966F0u;
    {
        const bool branch_taken_0x3966f0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3966F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966F0u;
        // 0x3966f4: 0x4616a082  mul.s       $f2, $f20, $f22 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966f0) {
            ctx->pc = 0x396708u;
            goto label_396708;
        }
    }
    ctx->pc = 0x3966F8u;
label_3966f8:
    // 0x3966f8: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3966f8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3966fc:
    // 0x3966fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3966fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_396700:
    // 0x396700: 0x10000008  b           . + 4 + (0x8 << 2)
label_396704:
    if (ctx->pc == 0x396704u) {
        ctx->pc = 0x396704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396700u;
        // 0x396704: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396708u;
        goto label_396708;
    }
    ctx->pc = 0x396700u;
    {
        const bool branch_taken_0x396700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396700u;
        // 0x396704: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396700) {
            ctx->pc = 0x396724u;
            goto label_396724;
        }
    }
    ctx->pc = 0x396708u;
label_396708:
    // 0x396708: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x396708u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_39670c:
    // 0x39670c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x39670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_396710:
    // 0x396710: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_396714:
    // 0x396714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x396714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_396718:
    // 0x396718: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x396718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39671c:
    // 0x39671c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39671cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_396720:
    // 0x396720: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x396720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_396724:
    // 0x396724: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_396728:
    if (ctx->pc == 0x396728u) {
        ctx->pc = 0x396728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396724u;
        // 0x396728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39672Cu;
        goto label_39672c;
    }
    ctx->pc = 0x396724u;
    {
        const bool branch_taken_0x396724 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x396728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396724u;
        // 0x396728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396724) {
            ctx->pc = 0x39673Cu;
            goto label_39673c;
        }
    }
    ctx->pc = 0x39672Cu;
label_39672c:
    // 0x39672c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39672cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396730:
    // 0x396730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x396730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_396734:
    // 0x396734: 0x10000006  b           . + 4 + (0x6 << 2)
label_396738:
    if (ctx->pc == 0x396738u) {
        ctx->pc = 0x39673Cu;
        goto label_39673c;
    }
    ctx->pc = 0x396734u;
    {
        const bool branch_taken_0x396734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396734) {
            ctx->pc = 0x396750u;
            goto label_396750;
        }
    }
    ctx->pc = 0x39673Cu;
label_39673c:
    // 0x39673c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_396740:
    // 0x396740: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_396744:
    // 0x396744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x396744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_396748:
    // 0x396748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x396748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_39674c:
    // 0x39674c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x39674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_396750:
    // 0x396750: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x396750u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_396754:
    // 0x396754: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x396754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_396758:
    // 0x396758: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x396758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39675c:
    // 0x39675c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x39675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_396760:
    // 0x396760: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x396760u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_396764:
    // 0x396764: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x396764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_396768:
    // 0x396768: 0x0  nop
    ctx->pc = 0x396768u;
    // NOP
label_39676c:
    // 0x39676c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_396770:
    if (ctx->pc == 0x396770u) {
        ctx->pc = 0x396770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39676Cu;
        // 0x396770: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396774u;
        goto label_396774;
    }
    ctx->pc = 0x39676Cu;
    {
        const bool branch_taken_0x39676c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x396770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39676Cu;
        // 0x396770: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39676c) {
            ctx->pc = 0x3967A0u;
            goto label_3967a0;
        }
    }
    ctx->pc = 0x396774u;
label_396774:
    // 0x396774: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x396774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_396778:
    // 0x396778: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x396778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39677c:
    // 0x39677c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_396780:
    if (ctx->pc == 0x396780u) {
        ctx->pc = 0x396780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39677Cu;
        // 0x396780: 0x26f0e880  addiu       $s0, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396784u;
        goto label_396784;
    }
    ctx->pc = 0x39677Cu;
    {
        const bool branch_taken_0x39677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39677Cu;
        // 0x396780: 0x26f0e880  addiu       $s0, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39677c) {
            ctx->pc = 0x3967A4u;
            goto label_3967a4;
        }
    }
    ctx->pc = 0x396784u;
label_396784:
    // 0x396784: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_396788:
    if (ctx->pc == 0x396788u) {
        ctx->pc = 0x396788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396784u;
        // 0x396788: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39678Cu;
        goto label_39678c;
    }
    ctx->pc = 0x396784u;
    {
        const bool branch_taken_0x396784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396784u;
        // 0x396788: 0x8e700004  lw          $s0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396784) {
            ctx->pc = 0x3966C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3966c4;
        }
    }
    ctx->pc = 0x39678Cu;
label_39678c:
    // 0x39678c: 0xc0e4ea0  jal         func_393A80
label_396790:
    if (ctx->pc == 0x396790u) {
        ctx->pc = 0x396790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39678Cu;
        // 0x396790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396794u;
        goto label_396794;
    }
    ctx->pc = 0x39678Cu;
    SET_GPR_U32(ctx, 31, 0x396794u);
    ctx->pc = 0x396790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39678Cu;
    // 0x396790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393A80u, 0x39678Cu, 0x396794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396794u;
label_396794:
    // 0x396794: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x396794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_396798:
    // 0x396798: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_39679c:
    if (ctx->pc == 0x39679Cu) {
        ctx->pc = 0x39679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396798u;
        // 0x39679c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967A0u;
        goto label_3967a0;
    }
    ctx->pc = 0x396798u;
    {
        const bool branch_taken_0x396798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396798u;
        // 0x39679c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396798) {
            ctx->pc = 0x3966B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3966b8;
        }
    }
    ctx->pc = 0x3967A0u;
label_3967a0:
    // 0x3967a0: 0x26f0e880  addiu       $s0, $s7, -0x1780
    ctx->pc = 0x3967a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3967a4:
    // 0x3967a4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3967a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3967a8:
    // 0x3967a8: 0x40f809  jalr        $v0
label_3967ac:
    if (ctx->pc == 0x3967ACu) {
        ctx->pc = 0x3967ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967A8u;
        // 0x3967ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967B0u;
        goto label_3967b0;
    }
    ctx->pc = 0x3967A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3967B0u);
        ctx->pc = 0x3967ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967A8u;
        // 0x3967ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3967A8u, 0x3967B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3967B0u;
label_3967b0:
    // 0x3967b0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3967b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3967b4:
    // 0x3967b4: 0x60f809  jalr        $v1
label_3967b8:
    if (ctx->pc == 0x3967B8u) {
        ctx->pc = 0x3967B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967B4u;
        // 0x3967b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967BCu;
        goto label_3967bc;
    }
    ctx->pc = 0x3967B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3967BCu);
        ctx->pc = 0x3967B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967B4u;
        // 0x3967b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3967B4u, 0x3967BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3967BCu;
label_3967bc:
    // 0x3967bc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3967bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3967c0:
    // 0x3967c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3967c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3967c4:
    // 0x3967c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3967c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3967c8:
    // 0x3967c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3967c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3967cc:
    // 0x3967cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3967ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3967d0:
    // 0x3967d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3967d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3967d4:
    // 0x3967d4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3967d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3967d8:
    // 0x3967d8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3967d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3967dc:
    // 0x3967dc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3967dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3967e0:
    // 0x3967e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3967e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3967e4:
    // 0x3967e4: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x3967e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3967e8:
    // 0x3967e8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3967e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3967ec:
    // 0x3967ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3967ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3967f0:
    // 0x3967f0: 0x3e00008  jr          $ra
label_3967f4:
    if (ctx->pc == 0x3967F4u) {
        ctx->pc = 0x3967F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967F0u;
        // 0x3967f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3967F8u;
        goto label_3967f8;
    }
    ctx->pc = 0x3967F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3967F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967F0u;
        // 0x3967f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3967F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3967F8u;
label_3967f8:
    // 0x3967f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3967f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3967fc:
    // 0x3967fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3967fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_396800:
    // 0x396800: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x396800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_396804:
    // 0x396804: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x396804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_396808:
    // 0x396808: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x396808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39680c:
    // 0x39680c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x39680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_396810:
    // 0x396810: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x396810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_396814:
    // 0x396814: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x396814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_396818:
    // 0x396818: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x396818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_39681c:
    // 0x39681c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x39681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_396820:
    // 0x396820: 0x26ca000c  addiu       $t2, $s6, 0xC
    ctx->pc = 0x396820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_396824:
    // 0x396824: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x396824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_396828:
    // 0x396828: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x396828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_39682c:
    // 0x39682c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396830:
    // 0x396830: 0x8ec7000c  lw          $a3, 0xC($s6)
    ctx->pc = 0x396830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_396834:
    // 0x396834: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x396834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_396838:
    // 0x396838: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x396838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_39683c:
    // 0x39683c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x39683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_396840:
    // 0x396840: 0xafbd0000  sw          $sp, 0x0($sp)
    ctx->pc = 0x396840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 29));
label_396844:
    // 0x396844: 0xafbd0004  sw          $sp, 0x4($sp)
    ctx->pc = 0x396844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 29));
label_396848:
    // 0x396848: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x396848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_39684c:
    // 0x39684c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x39684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_396850:
    // 0x396850: 0x10ea007f  beq         $a3, $t2, . + 4 + (0x7F << 2)
label_396854:
    if (ctx->pc == 0x396854u) {
        ctx->pc = 0x396854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396850u;
        // 0x396854: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396858u;
        goto label_396858;
    }
    ctx->pc = 0x396850u;
    {
        const bool branch_taken_0x396850 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x396854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396850u;
        // 0x396854: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396850) {
            ctx->pc = 0x396A50u;
            goto label_396a50;
        }
    }
    ctx->pc = 0x396858u;
label_396858:
    // 0x396858: 0x24e9fff8  addiu       $t1, $a3, -0x8
    ctx->pc = 0x396858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
label_39685c:
    // 0x39685c: 0x0  nop
    ctx->pc = 0x39685cu;
    // NOP
label_396860:
    // 0x396860: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x396860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396864:
    // 0x396864: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x396864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_396868:
    // 0x396868: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_39686c:
    if (ctx->pc == 0x39686Cu) {
        ctx->pc = 0x39686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396868u;
        // 0x39686c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396870u;
        goto label_396870;
    }
    ctx->pc = 0x396868u;
    {
        const bool branch_taken_0x396868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396868u;
        // 0x39686c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396868) {
            ctx->pc = 0x396A20u;
            goto label_396a20;
        }
    }
    ctx->pc = 0x396870u;
label_396870:
    // 0x396870: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x396870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396874:
    // 0x396874: 0x24e50014  addiu       $a1, $a3, 0x14
    ctx->pc = 0x396874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_396878:
    // 0x396878: 0x19000025  blez        $t0, . + 4 + (0x25 << 2)
label_39687c:
    if (ctx->pc == 0x39687Cu) {
        ctx->pc = 0x39687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396878u;
        // 0x39687c: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396880u;
        goto label_396880;
    }
    ctx->pc = 0x396878u;
    {
        const bool branch_taken_0x396878 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x39687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396878u;
        // 0x39687c: 0x31040003  andi        $a0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396878) {
            ctx->pc = 0x396910u;
            goto label_396910;
        }
    }
    ctx->pc = 0x396880u;
label_396880:
    // 0x396880: 0x50800034  beql        $a0, $zero, . + 4 + (0x34 << 2)
label_396884:
    if (ctx->pc == 0x396884u) {
        ctx->pc = 0x396884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396880u;
        // 0x396884: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396888u;
        goto label_396888;
    }
    ctx->pc = 0x396880u;
    {
        const bool branch_taken_0x396880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396880) {
            ctx->pc = 0x396884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396880u;
            // 0x396884: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396954u;
            goto label_396954;
        }
    }
    ctx->pc = 0x396888u;
label_396888:
    // 0x396888: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x396888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_39688c:
    // 0x39688c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_396890:
    if (ctx->pc == 0x396890u) {
        ctx->pc = 0x396890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39688Cu;
        // 0x396890: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396894u;
        goto label_396894;
    }
    ctx->pc = 0x39688Cu;
    {
        const bool branch_taken_0x39688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39688c) {
            ctx->pc = 0x396890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39688Cu;
            // 0x396890: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396914u;
            goto label_396914;
        }
    }
    ctx->pc = 0x396894u;
label_396894:
    // 0x396894: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x396894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_396898:
    // 0x396898: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_39689c:
    if (ctx->pc == 0x39689Cu) {
        ctx->pc = 0x39689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396898u;
        // 0x39689c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968A0u;
        goto label_3968a0;
    }
    ctx->pc = 0x396898u;
    {
        const bool branch_taken_0x396898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396898) {
            ctx->pc = 0x39689Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396898u;
            // 0x39689c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3968DCu;
            goto label_3968dc;
        }
    }
    ctx->pc = 0x3968A0u;
label_3968a0:
    // 0x3968a0: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x3968a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3968a4:
    // 0x3968a4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3968a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3968a8:
    // 0x3968a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3968ac:
    if (ctx->pc == 0x3968ACu) {
        ctx->pc = 0x3968ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968A8u;
        // 0x3968ac: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968B0u;
        goto label_3968b0;
    }
    ctx->pc = 0x3968A8u;
    {
        const bool branch_taken_0x3968a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3968a8) {
            ctx->pc = 0x3968ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968A8u;
            // 0x3968ac: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3968BCu;
            goto label_3968bc;
        }
    }
    ctx->pc = 0x3968B0u;
label_3968b0:
    // 0x3968b0: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_3968b4:
    if (ctx->pc == 0x3968B4u) {
        ctx->pc = 0x3968B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968B0u;
        // 0x3968b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968B8u;
        goto label_3968b8;
    }
    ctx->pc = 0x3968B0u;
    {
        const bool branch_taken_0x3968b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x3968b0) {
            ctx->pc = 0x3968B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968B0u;
            // 0x3968b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3968D0u;
            goto label_3968d0;
        }
    }
    ctx->pc = 0x3968B8u;
label_3968b8:
    // 0x3968b8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3968b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3968bc:
    // 0x3968bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3968c0:
    if (ctx->pc == 0x3968C0u) {
        ctx->pc = 0x3968C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968BCu;
        // 0x3968c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968C4u;
        goto label_3968c4;
    }
    ctx->pc = 0x3968BCu;
    {
        const bool branch_taken_0x3968bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3968bc) {
            ctx->pc = 0x3968C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968BCu;
            // 0x3968c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3968D4u;
            goto label_3968d4;
        }
    }
    ctx->pc = 0x3968C4u;
label_3968c4:
    // 0x3968c4: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_3968c8:
    if (ctx->pc == 0x3968C8u) {
        ctx->pc = 0x3968C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968C4u;
        // 0x3968c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968CCu;
        goto label_3968cc;
    }
    ctx->pc = 0x3968C4u;
    {
        const bool branch_taken_0x3968c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3968c4) {
            ctx->pc = 0x3968C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968C4u;
            // 0x3968c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3968D4u;
            goto label_3968d4;
        }
    }
    ctx->pc = 0x3968CCu;
label_3968cc:
    // 0x3968cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3968ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3968d0:
    // 0x3968d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3968d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3968d4:
    // 0x3968d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3968d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3968d8:
    // 0x3968d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3968d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3968dc:
    // 0x3968dc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3968dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3968e0:
    // 0x3968e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3968e4:
    if (ctx->pc == 0x3968E4u) {
        ctx->pc = 0x3968E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968E0u;
        // 0x3968e4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968E8u;
        goto label_3968e8;
    }
    ctx->pc = 0x3968E0u;
    {
        const bool branch_taken_0x3968e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3968e0) {
            ctx->pc = 0x3968E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968E0u;
            // 0x3968e4: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3968F4u;
            goto label_3968f4;
        }
    }
    ctx->pc = 0x3968E8u;
label_3968e8:
    // 0x3968e8: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_3968ec:
    if (ctx->pc == 0x3968ECu) {
        ctx->pc = 0x3968ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968E8u;
        // 0x3968ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968F0u;
        goto label_3968f0;
    }
    ctx->pc = 0x3968E8u;
    {
        const bool branch_taken_0x3968e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x3968e8) {
            ctx->pc = 0x3968ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968E8u;
            // 0x3968ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396908u;
            goto label_396908;
        }
    }
    ctx->pc = 0x3968F0u;
label_3968f0:
    // 0x3968f0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3968f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3968f4:
    // 0x3968f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3968f8:
    if (ctx->pc == 0x3968F8u) {
        ctx->pc = 0x3968F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968F4u;
        // 0x3968f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3968FCu;
        goto label_3968fc;
    }
    ctx->pc = 0x3968F4u;
    {
        const bool branch_taken_0x3968f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3968f4) {
            ctx->pc = 0x3968F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968F4u;
            // 0x3968f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39690Cu;
            goto label_39690c;
        }
    }
    ctx->pc = 0x3968FCu;
label_3968fc:
    // 0x3968fc: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_396900:
    if (ctx->pc == 0x396900u) {
        ctx->pc = 0x396900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968FCu;
        // 0x396900: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396904u;
        goto label_396904;
    }
    ctx->pc = 0x3968FCu;
    {
        const bool branch_taken_0x3968fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3968fc) {
            ctx->pc = 0x396900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3968FCu;
            // 0x396900: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39690Cu;
            goto label_39690c;
        }
    }
    ctx->pc = 0x396904u;
label_396904:
    // 0x396904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x396904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_396908:
    // 0x396908: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x396908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_39690c:
    // 0x39690c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39690cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_396910:
    // 0x396910: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x396910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396914:
    // 0x396914: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x396914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_396918:
    // 0x396918: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39691c:
    if (ctx->pc == 0x39691Cu) {
        ctx->pc = 0x39691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396918u;
        // 0x39691c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396920u;
        goto label_396920;
    }
    ctx->pc = 0x396918u;
    {
        const bool branch_taken_0x396918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396918) {
            ctx->pc = 0x39691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396918u;
            // 0x39691c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39692Cu;
            goto label_39692c;
        }
    }
    ctx->pc = 0x396920u;
label_396920:
    // 0x396920: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_396924:
    if (ctx->pc == 0x396924u) {
        ctx->pc = 0x396924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396920u;
        // 0x396924: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396928u;
        goto label_396928;
    }
    ctx->pc = 0x396920u;
    {
        const bool branch_taken_0x396920 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x396920) {
            ctx->pc = 0x396924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396920u;
            // 0x396924: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396940u;
            goto label_396940;
        }
    }
    ctx->pc = 0x396928u;
label_396928:
    // 0x396928: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x396928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_39692c:
    // 0x39692c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_396930:
    if (ctx->pc == 0x396930u) {
        ctx->pc = 0x396930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39692Cu;
        // 0x396930: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396934u;
        goto label_396934;
    }
    ctx->pc = 0x39692Cu;
    {
        const bool branch_taken_0x39692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39692c) {
            ctx->pc = 0x396930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39692Cu;
            // 0x396930: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396944u;
            goto label_396944;
        }
    }
    ctx->pc = 0x396934u;
label_396934:
    // 0x396934: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_396938:
    if (ctx->pc == 0x396938u) {
        ctx->pc = 0x396938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396934u;
        // 0x396938: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39693Cu;
        goto label_39693c;
    }
    ctx->pc = 0x396934u;
    {
        const bool branch_taken_0x396934 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x396934) {
            ctx->pc = 0x396938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396934u;
            // 0x396938: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396944u;
            goto label_396944;
        }
    }
    ctx->pc = 0x39693Cu;
label_39693c:
    // 0x39693c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_396940:
    // 0x396940: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x396940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_396944:
    // 0x396944: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x396944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_396948:
    // 0x396948: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_39694c:
    if (ctx->pc == 0x39694Cu) {
        ctx->pc = 0x39694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396948u;
        // 0x39694c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396950u;
        goto label_396950;
    }
    ctx->pc = 0x396948u;
    {
        const bool branch_taken_0x396948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396948u;
        // 0x39694c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396948) {
            ctx->pc = 0x396A20u;
            goto label_396a20;
        }
    }
    ctx->pc = 0x396950u;
label_396950:
    // 0x396950: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x396950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396954:
    // 0x396954: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x396954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_396958:
    // 0x396958: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39695c:
    if (ctx->pc == 0x39695Cu) {
        ctx->pc = 0x39695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396958u;
        // 0x39695c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396960u;
        goto label_396960;
    }
    ctx->pc = 0x396958u;
    {
        const bool branch_taken_0x396958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396958) {
            ctx->pc = 0x39695Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396958u;
            // 0x39695c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39696Cu;
            goto label_39696c;
        }
    }
    ctx->pc = 0x396960u;
label_396960:
    // 0x396960: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_396964:
    if (ctx->pc == 0x396964u) {
        ctx->pc = 0x396964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396960u;
        // 0x396964: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396968u;
        goto label_396968;
    }
    ctx->pc = 0x396960u;
    {
        const bool branch_taken_0x396960 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x396960) {
            ctx->pc = 0x396964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396960u;
            // 0x396964: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396980u;
            goto label_396980;
        }
    }
    ctx->pc = 0x396968u;
label_396968:
    // 0x396968: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x396968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_39696c:
    // 0x39696c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_396970:
    if (ctx->pc == 0x396970u) {
        ctx->pc = 0x396970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39696Cu;
        // 0x396970: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396974u;
        goto label_396974;
    }
    ctx->pc = 0x39696Cu;
    {
        const bool branch_taken_0x39696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39696c) {
            ctx->pc = 0x396970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39696Cu;
            // 0x396970: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396984u;
            goto label_396984;
        }
    }
    ctx->pc = 0x396974u;
label_396974:
    // 0x396974: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_396978:
    if (ctx->pc == 0x396978u) {
        ctx->pc = 0x396978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396974u;
        // 0x396978: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39697Cu;
        goto label_39697c;
    }
    ctx->pc = 0x396974u;
    {
        const bool branch_taken_0x396974 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x396974) {
            ctx->pc = 0x396978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396974u;
            // 0x396978: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396984u;
            goto label_396984;
        }
    }
    ctx->pc = 0x39697Cu;
label_39697c:
    // 0x39697c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_396980:
    // 0x396980: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x396980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_396984:
    // 0x396984: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x396984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_396988:
    // 0x396988: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39698c:
    if (ctx->pc == 0x39698Cu) {
        ctx->pc = 0x39698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396988u;
        // 0x39698c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396990u;
        goto label_396990;
    }
    ctx->pc = 0x396988u;
    {
        const bool branch_taken_0x396988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396988) {
            ctx->pc = 0x39698Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396988u;
            // 0x39698c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39699Cu;
            goto label_39699c;
        }
    }
    ctx->pc = 0x396990u;
label_396990:
    // 0x396990: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_396994:
    if (ctx->pc == 0x396994u) {
        ctx->pc = 0x396994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396990u;
        // 0x396994: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396998u;
        goto label_396998;
    }
    ctx->pc = 0x396990u;
    {
        const bool branch_taken_0x396990 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x396990) {
            ctx->pc = 0x396994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396990u;
            // 0x396994: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969B0u;
            goto label_3969b0;
        }
    }
    ctx->pc = 0x396998u;
label_396998:
    // 0x396998: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x396998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_39699c:
    // 0x39699c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3969a0:
    if (ctx->pc == 0x3969A0u) {
        ctx->pc = 0x3969A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39699Cu;
        // 0x3969a0: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969A4u;
        goto label_3969a4;
    }
    ctx->pc = 0x39699Cu;
    {
        const bool branch_taken_0x39699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39699c) {
            ctx->pc = 0x3969A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39699Cu;
            // 0x3969a0: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969B4u;
            goto label_3969b4;
        }
    }
    ctx->pc = 0x3969A4u;
label_3969a4:
    // 0x3969a4: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_3969a8:
    if (ctx->pc == 0x3969A8u) {
        ctx->pc = 0x3969A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969A4u;
        // 0x3969a8: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969ACu;
        goto label_3969ac;
    }
    ctx->pc = 0x3969A4u;
    {
        const bool branch_taken_0x3969a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3969a4) {
            ctx->pc = 0x3969A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969A4u;
            // 0x3969a8: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969B4u;
            goto label_3969b4;
        }
    }
    ctx->pc = 0x3969ACu;
label_3969ac:
    // 0x3969ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3969acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3969b0:
    // 0x3969b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3969b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3969b4:
    // 0x3969b4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3969b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3969b8:
    // 0x3969b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3969bc:
    if (ctx->pc == 0x3969BCu) {
        ctx->pc = 0x3969BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969B8u;
        // 0x3969bc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969C0u;
        goto label_3969c0;
    }
    ctx->pc = 0x3969B8u;
    {
        const bool branch_taken_0x3969b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3969b8) {
            ctx->pc = 0x3969BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969B8u;
            // 0x3969bc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969CCu;
            goto label_3969cc;
        }
    }
    ctx->pc = 0x3969C0u;
label_3969c0:
    // 0x3969c0: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_3969c4:
    if (ctx->pc == 0x3969C4u) {
        ctx->pc = 0x3969C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969C0u;
        // 0x3969c4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969C8u;
        goto label_3969c8;
    }
    ctx->pc = 0x3969C0u;
    {
        const bool branch_taken_0x3969c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x3969c0) {
            ctx->pc = 0x3969C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969C0u;
            // 0x3969c4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969E0u;
            goto label_3969e0;
        }
    }
    ctx->pc = 0x3969C8u;
label_3969c8:
    // 0x3969c8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3969c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3969cc:
    // 0x3969cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3969d0:
    if (ctx->pc == 0x3969D0u) {
        ctx->pc = 0x3969D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969CCu;
        // 0x3969d0: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969D4u;
        goto label_3969d4;
    }
    ctx->pc = 0x3969CCu;
    {
        const bool branch_taken_0x3969cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3969cc) {
            ctx->pc = 0x3969D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969CCu;
            // 0x3969d0: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969E4u;
            goto label_3969e4;
        }
    }
    ctx->pc = 0x3969D4u;
label_3969d4:
    // 0x3969d4: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_3969d8:
    if (ctx->pc == 0x3969D8u) {
        ctx->pc = 0x3969D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969D4u;
        // 0x3969d8: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969DCu;
        goto label_3969dc;
    }
    ctx->pc = 0x3969D4u;
    {
        const bool branch_taken_0x3969d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3969d4) {
            ctx->pc = 0x3969D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969D4u;
            // 0x3969d8: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969E4u;
            goto label_3969e4;
        }
    }
    ctx->pc = 0x3969DCu;
label_3969dc:
    // 0x3969dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3969dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3969e0:
    // 0x3969e0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3969e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3969e4:
    // 0x3969e4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3969e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3969e8:
    // 0x3969e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3969ec:
    if (ctx->pc == 0x3969ECu) {
        ctx->pc = 0x3969ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969E8u;
        // 0x3969ec: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969F0u;
        goto label_3969f0;
    }
    ctx->pc = 0x3969E8u;
    {
        const bool branch_taken_0x3969e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3969e8) {
            ctx->pc = 0x3969ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969E8u;
            // 0x3969ec: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3969FCu;
            goto label_3969fc;
        }
    }
    ctx->pc = 0x3969F0u;
label_3969f0:
    // 0x3969f0: 0x55220007  bnel        $t1, $v0, . + 4 + (0x7 << 2)
label_3969f4:
    if (ctx->pc == 0x3969F4u) {
        ctx->pc = 0x3969F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969F0u;
        // 0x3969f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3969F8u;
        goto label_3969f8;
    }
    ctx->pc = 0x3969F0u;
    {
        const bool branch_taken_0x3969f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x3969f0) {
            ctx->pc = 0x3969F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969F0u;
            // 0x3969f4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396A10u;
            goto label_396a10;
        }
    }
    ctx->pc = 0x3969F8u;
label_3969f8:
    // 0x3969f8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3969f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3969fc:
    // 0x3969fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_396a00:
    if (ctx->pc == 0x396A00u) {
        ctx->pc = 0x396A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969FCu;
        // 0x396a00: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A04u;
        goto label_396a04;
    }
    ctx->pc = 0x3969FCu;
    {
        const bool branch_taken_0x3969fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3969fc) {
            ctx->pc = 0x396A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3969FCu;
            // 0x396a00: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396A14u;
            goto label_396a14;
        }
    }
    ctx->pc = 0x396A04u;
label_396a04:
    // 0x396a04: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
label_396a08:
    if (ctx->pc == 0x396A08u) {
        ctx->pc = 0x396A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A04u;
        // 0x396a08: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A0Cu;
        goto label_396a0c;
    }
    ctx->pc = 0x396A04u;
    {
        const bool branch_taken_0x396a04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x396a04) {
            ctx->pc = 0x396A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396A04u;
            // 0x396a08: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396A14u;
            goto label_396a14;
        }
    }
    ctx->pc = 0x396A0Cu;
label_396a0c:
    // 0x396a0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x396a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_396a10:
    // 0x396a10: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x396a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_396a14:
    // 0x396a14: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x396a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_396a18:
    // 0x396a18: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_396a1c:
    if (ctx->pc == 0x396A1Cu) {
        ctx->pc = 0x396A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A18u;
        // 0x396a1c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A20u;
        goto label_396a20;
    }
    ctx->pc = 0x396A18u;
    {
        const bool branch_taken_0x396a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A18u;
        // 0x396a1c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a18) {
            ctx->pc = 0x396950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396950;
        }
    }
    ctx->pc = 0x396A20u;
label_396a20:
    // 0x396a20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x396a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_396a24:
    // 0x396a24: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x396a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_396a28:
    // 0x396a28: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x396a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_396a2c:
    // 0x396a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x396a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_396a30:
    // 0x396a30: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x396a30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
label_396a34:
    // 0x396a34: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x396a34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_396a38:
    // 0x396a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x396a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_396a3c:
    // 0x396a3c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x396a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_396a40:
    // 0x396a40: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x396a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_396a44:
    // 0x396a44: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x396a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_396a48:
    // 0x396a48: 0x14eaff85  bne         $a3, $t2, . + 4 + (-0x7B << 2)
label_396a4c:
    if (ctx->pc == 0x396A4Cu) {
        ctx->pc = 0x396A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A48u;
        // 0x396a4c: 0x24e9fff8  addiu       $t1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A50u;
        goto label_396a50;
    }
    ctx->pc = 0x396A48u;
    {
        const bool branch_taken_0x396a48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x396A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A48u;
        // 0x396a4c: 0x24e9fff8  addiu       $t1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a48) {
            ctx->pc = 0x396860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396860;
        }
    }
    ctx->pc = 0x396A50u;
label_396a50:
    // 0x396a50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a54:
    // 0x396a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a58:
    // 0x396a58: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x396a58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_396a5c:
    // 0x396a5c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x396a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_396a60:
    // 0x396a60: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x396a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_396a64:
    // 0x396a64: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x396a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396a68:
    // 0x396a68: 0x10e203a9  beq         $a3, $v0, . + 4 + (0x3A9 << 2)
label_396a6c:
    if (ctx->pc == 0x396A6Cu) {
        ctx->pc = 0x396A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A68u;
        // 0x396a6c: 0x24f2000c  addiu       $s2, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396A70u;
        goto label_396a70;
    }
    ctx->pc = 0x396A68u;
    {
        const bool branch_taken_0x396a68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x396A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A68u;
        // 0x396a6c: 0x24f2000c  addiu       $s2, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a68) {
            ctx->pc = 0x397910u;
            goto label_397910;
        }
    }
    ctx->pc = 0x396A70u;
label_396a70:
    // 0x396a70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x396a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a74:
    // 0x396a74: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x396a74u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a78:
    // 0x396a78: 0x24e9fff0  addiu       $t1, $a3, -0x10
    ctx->pc = 0x396a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_396a7c:
    // 0x396a7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396a7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a80:
    // 0x396a80: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x396a80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_396a84:
    // 0x396a84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x396a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396a88:
    // 0x396a88: 0x240c82d  daddu       $t9, $s2, $zero
    ctx->pc = 0x396a88u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_396a8c:
    // 0x396a8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x396a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396a90:
    // 0x396a90: 0x16d001b  divu        $zero, $t3, $t5
    ctx->pc = 0x396a90u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
label_396a94:
    // 0x396a94: 0x0  nop
    ctx->pc = 0x396a94u;
    // NOP
label_396a98:
    // 0x396a98: 0x51b40001  beql        $t5, $s4, . + 4 + (0x1 << 2)
label_396a9c:
    if (ctx->pc == 0x396A9Cu) {
        ctx->pc = 0x396A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A98u;
        // 0x396a9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AA0u;
        goto label_396aa0;
    }
    ctx->pc = 0x396A98u;
    {
        const bool branch_taken_0x396a98 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 20));
        if (branch_taken_0x396a98) {
            ctx->pc = 0x396A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396A98u;
            // 0x396a9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x396AA0u;
            goto label_396aa0;
        }
    }
    ctx->pc = 0x396AA0u;
label_396aa0:
    // 0x396aa0: 0x1010  mfhi        $v0
    ctx->pc = 0x396aa0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_396aa4:
    // 0x396aa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x396aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_396aa8:
    // 0x396aa8: 0x3221021  addu        $v0, $t9, $v0
    ctx->pc = 0x396aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_396aac:
    // 0x396aac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x396aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396ab0:
    // 0x396ab0: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x396ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_396ab4:
    // 0x396ab4: 0x15270002  bne         $t1, $a3, . + 4 + (0x2 << 2)
label_396ab8:
    if (ctx->pc == 0x396AB8u) {
        ctx->pc = 0x396AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AB4u;
        // 0x396ab8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396ABCu;
        goto label_396abc;
    }
    ctx->pc = 0x396AB4u;
    {
        const bool branch_taken_0x396ab4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        ctx->pc = 0x396AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AB4u;
        // 0x396ab8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ab4) {
            ctx->pc = 0x396AC0u;
            goto label_396ac0;
        }
    }
    ctx->pc = 0x396ABCu;
label_396abc:
    // 0x396abc: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x396abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_396ac0:
    // 0x396ac0: 0x10e0005f  beqz        $a3, . + 4 + (0x5F << 2)
label_396ac4:
    if (ctx->pc == 0x396AC4u) {
        ctx->pc = 0x396AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AC0u;
        // 0x396ac4: 0x256f0001  addiu       $t7, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AC8u;
        goto label_396ac8;
    }
    ctx->pc = 0x396AC0u;
    {
        const bool branch_taken_0x396ac0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x396AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AC0u;
        // 0x396ac4: 0x256f0001  addiu       $t7, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ac0) {
            ctx->pc = 0x396C40u;
            goto label_396c40;
        }
    }
    ctx->pc = 0x396AC8u;
label_396ac8:
    // 0x396ac8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x396ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_396acc:
    // 0x396acc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_396ad0:
    if (ctx->pc == 0x396AD0u) {
        ctx->pc = 0x396AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396ACCu;
        // 0x396ad0: 0x2d620003  sltiu       $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AD4u;
        goto label_396ad4;
    }
    ctx->pc = 0x396ACCu;
    {
        const bool branch_taken_0x396acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396ACCu;
        // 0x396ad0: 0x2d620003  sltiu       $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396acc) {
            ctx->pc = 0x396C40u;
            goto label_396c40;
        }
    }
    ctx->pc = 0x396AD4u;
label_396ad4:
    // 0x396ad4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_396ad8:
    if (ctx->pc == 0x396AD8u) {
        ctx->pc = 0x396AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AD4u;
        // 0x396ad8: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396ADCu;
        goto label_396adc;
    }
    ctx->pc = 0x396AD4u;
    {
        const bool branch_taken_0x396ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ad4) {
            ctx->pc = 0x396AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396AD4u;
            // 0x396ad8: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396AE0u;
            goto label_396ae0;
        }
    }
    ctx->pc = 0x396ADCu;
label_396adc:
    // 0x396adc: 0x94a20018  lhu         $v0, 0x18($a1)
    ctx->pc = 0x396adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_396ae0:
    // 0x396ae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x396ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_396ae4:
    // 0x396ae4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x396ae4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396ae8:
    // 0x396ae8: 0x271880a  movz        $s1, $s3, $s1
    ctx->pc = 0x396ae8u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
label_396aec:
    // 0x396aec: 0x256f0001  addiu       $t7, $t3, 0x1
    ctx->pc = 0x396aecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_396af0:
    // 0x396af0: 0x10e00053  beqz        $a3, . + 4 + (0x53 << 2)
label_396af4:
    if (ctx->pc == 0x396AF4u) {
        ctx->pc = 0x396AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AF0u;
        // 0x396af4: 0xad310030  sw          $s1, 0x30($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396AF8u;
        goto label_396af8;
    }
    ctx->pc = 0x396AF0u;
    {
        const bool branch_taken_0x396af0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x396AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AF0u;
        // 0x396af4: 0xad310030  sw          $s1, 0x30($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396af0) {
            ctx->pc = 0x396C40u;
            goto label_396c40;
        }
    }
    ctx->pc = 0x396AF8u;
label_396af8:
    // 0x396af8: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x396af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_396afc:
    // 0x396afc: 0x12220051  beq         $s1, $v0, . + 4 + (0x51 << 2)
label_396b00:
    if (ctx->pc == 0x396B00u) {
        ctx->pc = 0x396B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AFCu;
        // 0x396b00: 0x20c102b  sltu        $v0, $s0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B04u;
        goto label_396b04;
    }
    ctx->pc = 0x396AFCu;
    {
        const bool branch_taken_0x396afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x396B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AFCu;
        // 0x396b00: 0x20c102b  sltu        $v0, $s0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396afc) {
            ctx->pc = 0x396C44u;
            goto label_396c44;
        }
    }
    ctx->pc = 0x396B04u;
label_396b04:
    // 0x396b04: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x396b04u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_396b08:
    // 0x396b08: 0xacf10030  sw          $s1, 0x30($a3)
    ctx->pc = 0x396b08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 17));
label_396b0c:
    // 0x396b0c: 0x0  nop
    ctx->pc = 0x396b0cu;
    // NOP
label_396b10:
    // 0x396b10: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x396b10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_396b14:
    // 0x396b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b18:
    // 0x396b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b1c:
    // 0x396b1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_396b20:
    if (ctx->pc == 0x396B20u) {
        ctx->pc = 0x396B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B1Cu;
        // 0x396b20: 0x24e4001c  addiu       $a0, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B24u;
        goto label_396b24;
    }
    ctx->pc = 0x396B1Cu;
    {
        const bool branch_taken_0x396b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B1Cu;
        // 0x396b20: 0x24e4001c  addiu       $a0, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b1c) {
            ctx->pc = 0x396B2Cu;
            goto label_396b2c;
        }
    }
    ctx->pc = 0x396B24u;
label_396b24:
    // 0x396b24: 0x0  nop
    ctx->pc = 0x396b24u;
    // NOP
label_396b28:
    // 0x396b28: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x396b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_396b2c:
    // 0x396b2c: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x396b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_396b30:
    // 0x396b30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_396b34:
    if (ctx->pc == 0x396B34u) {
        ctx->pc = 0x396B38u;
        goto label_396b38;
    }
    ctx->pc = 0x396B30u;
    {
        const bool branch_taken_0x396b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396b30) {
            ctx->pc = 0x396B88u;
            goto label_396b88;
        }
    }
    ctx->pc = 0x396B38u;
label_396b38:
    // 0x396b38: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x396b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396b3c:
    // 0x396b3c: 0x50a6fffa  beql        $a1, $a2, . + 4 + (-0x6 << 2)
label_396b40:
    if (ctx->pc == 0x396B40u) {
        ctx->pc = 0x396B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B3Cu;
        // 0x396b40: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B44u;
        goto label_396b44;
    }
    ctx->pc = 0x396B3Cu;
    {
        const bool branch_taken_0x396b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x396b3c) {
            ctx->pc = 0x396B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B3Cu;
            // 0x396b40: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b28;
        }
    }
    ctx->pc = 0x396B44u;
label_396b44:
    // 0x396b44: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x396b44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_396b48:
    // 0x396b48: 0x5142fff7  beql        $t2, $v0, . + 4 + (-0x9 << 2)
label_396b4c:
    if (ctx->pc == 0x396B4Cu) {
        ctx->pc = 0x396B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B48u;
        // 0x396b4c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B50u;
        goto label_396b50;
    }
    ctx->pc = 0x396B48u;
    {
        const bool branch_taken_0x396b48 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x396b48) {
            ctx->pc = 0x396B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B48u;
            // 0x396b4c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b28;
        }
    }
    ctx->pc = 0x396B50u;
label_396b50:
    // 0x396b50: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x396b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
label_396b54:
    // 0x396b54: 0x5142fff4  beql        $t2, $v0, . + 4 + (-0xC << 2)
label_396b58:
    if (ctx->pc == 0x396B58u) {
        ctx->pc = 0x396B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B54u;
        // 0x396b58: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B5Cu;
        goto label_396b5c;
    }
    ctx->pc = 0x396B54u;
    {
        const bool branch_taken_0x396b54 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x396b54) {
            ctx->pc = 0x396B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B54u;
            // 0x396b58: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b28;
        }
    }
    ctx->pc = 0x396B5Cu;
label_396b5c:
    // 0x396b5c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x396b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_396b60:
    // 0x396b60: 0x50e30001  beql        $a3, $v1, . + 4 + (0x1 << 2)
label_396b64:
    if (ctx->pc == 0x396B64u) {
        ctx->pc = 0x396B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B60u;
        // 0x396b64: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B68u;
        goto label_396b68;
    }
    ctx->pc = 0x396B60u;
    {
        const bool branch_taken_0x396b60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x396b60) {
            ctx->pc = 0x396B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B60u;
            // 0x396b64: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B68u;
            goto label_396b68;
        }
    }
    ctx->pc = 0x396B68u;
label_396b68:
    // 0x396b68: 0x5060ffef  beql        $v1, $zero, . + 4 + (-0x11 << 2)
label_396b6c:
    if (ctx->pc == 0x396B6Cu) {
        ctx->pc = 0x396B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B68u;
        // 0x396b6c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B70u;
        goto label_396b70;
    }
    ctx->pc = 0x396B68u;
    {
        const bool branch_taken_0x396b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396b68) {
            ctx->pc = 0x396B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B68u;
            // 0x396b6c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b28;
        }
    }
    ctx->pc = 0x396B70u;
label_396b70:
    // 0x396b70: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x396b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_396b74:
    // 0x396b74: 0x5222ffec  beql        $s1, $v0, . + 4 + (-0x14 << 2)
label_396b78:
    if (ctx->pc == 0x396B78u) {
        ctx->pc = 0x396B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B74u;
        // 0x396b78: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B7Cu;
        goto label_396b7c;
    }
    ctx->pc = 0x396B74u;
    {
        const bool branch_taken_0x396b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x396b74) {
            ctx->pc = 0x396B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B74u;
            // 0x396b78: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b28;
        }
    }
    ctx->pc = 0x396B7Cu;
label_396b7c:
    // 0x396b7c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396b80:
    // 0x396b80: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
label_396b84:
    if (ctx->pc == 0x396B84u) {
        ctx->pc = 0x396B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B80u;
        // 0x396b84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B88u;
        goto label_396b88;
    }
    ctx->pc = 0x396B80u;
    {
        const bool branch_taken_0x396b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396b80) {
            ctx->pc = 0x396B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396B80u;
            // 0x396b84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b28;
        }
    }
    ctx->pc = 0x396B88u;
label_396b88:
    // 0x396b88: 0x15180018  bne         $t0, $t8, . + 4 + (0x18 << 2)
label_396b8c:
    if (ctx->pc == 0x396B8Cu) {
        ctx->pc = 0x396B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B88u;
        // 0x396b8c: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B90u;
        goto label_396b90;
    }
    ctx->pc = 0x396B88u;
    {
        const bool branch_taken_0x396b88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 24));
        ctx->pc = 0x396B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B88u;
        // 0x396b8c: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b88) {
            ctx->pc = 0x396BECu;
            goto label_396bec;
        }
    }
    ctx->pc = 0x396B90u;
label_396b90:
    // 0x396b90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396b94:
    // 0x396b94: 0x10000004  b           . + 4 + (0x4 << 2)
label_396b98:
    if (ctx->pc == 0x396B98u) {
        ctx->pc = 0x396B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B94u;
        // 0x396b98: 0x24e4001c  addiu       $a0, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396B9Cu;
        goto label_396b9c;
    }
    ctx->pc = 0x396B94u;
    {
        const bool branch_taken_0x396b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B94u;
        // 0x396b98: 0x24e4001c  addiu       $a0, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b94) {
            ctx->pc = 0x396BA8u;
            goto label_396ba8;
        }
    }
    ctx->pc = 0x396B9Cu;
label_396b9c:
    // 0x396b9c: 0x0  nop
    ctx->pc = 0x396b9cu;
    // NOP
label_396ba0:
    // 0x396ba0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x396ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_396ba4:
    // 0x396ba4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x396ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_396ba8:
    // 0x396ba8: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x396ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_396bac:
    // 0x396bac: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_396bb0:
    if (ctx->pc == 0x396BB0u) {
        ctx->pc = 0x396BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BACu;
        // 0x396bb0: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BB4u;
        goto label_396bb4;
    }
    ctx->pc = 0x396BACu;
    {
        const bool branch_taken_0x396bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bac) {
            ctx->pc = 0x396BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BACu;
            // 0x396bb0: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BECu;
            goto label_396bec;
        }
    }
    ctx->pc = 0x396BB4u;
label_396bb4:
    // 0x396bb4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x396bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396bb8:
    // 0x396bb8: 0x50a6fffa  beql        $a1, $a2, . + 4 + (-0x6 << 2)
label_396bbc:
    if (ctx->pc == 0x396BBCu) {
        ctx->pc = 0x396BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BB8u;
        // 0x396bbc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BC0u;
        goto label_396bc0;
    }
    ctx->pc = 0x396BB8u;
    {
        const bool branch_taken_0x396bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x396bb8) {
            ctx->pc = 0x396BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BB8u;
            // 0x396bbc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ba4;
        }
    }
    ctx->pc = 0x396BC0u;
label_396bc0:
    // 0x396bc0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x396bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_396bc4:
    // 0x396bc4: 0x50e30001  beql        $a3, $v1, . + 4 + (0x1 << 2)
label_396bc8:
    if (ctx->pc == 0x396BC8u) {
        ctx->pc = 0x396BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BC4u;
        // 0x396bc8: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BCCu;
        goto label_396bcc;
    }
    ctx->pc = 0x396BC4u;
    {
        const bool branch_taken_0x396bc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x396bc4) {
            ctx->pc = 0x396BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BC4u;
            // 0x396bc8: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BCCu;
            goto label_396bcc;
        }
    }
    ctx->pc = 0x396BCCu;
label_396bcc:
    // 0x396bcc: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
label_396bd0:
    if (ctx->pc == 0x396BD0u) {
        ctx->pc = 0x396BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BCCu;
        // 0x396bd0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BD4u;
        goto label_396bd4;
    }
    ctx->pc = 0x396BCCu;
    {
        const bool branch_taken_0x396bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bcc) {
            ctx->pc = 0x396BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BCCu;
            // 0x396bd0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ba4;
        }
    }
    ctx->pc = 0x396BD4u;
label_396bd4:
    // 0x396bd4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x396bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_396bd8:
    // 0x396bd8: 0x5222fff2  beql        $s1, $v0, . + 4 + (-0xE << 2)
label_396bdc:
    if (ctx->pc == 0x396BDCu) {
        ctx->pc = 0x396BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BD8u;
        // 0x396bdc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BE0u;
        goto label_396be0;
    }
    ctx->pc = 0x396BD8u;
    {
        const bool branch_taken_0x396bd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x396bd8) {
            ctx->pc = 0x396BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BD8u;
            // 0x396bdc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ba4;
        }
    }
    ctx->pc = 0x396BE0u;
label_396be0:
    // 0x396be0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396be4:
    // 0x396be4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
label_396be8:
    if (ctx->pc == 0x396BE8u) {
        ctx->pc = 0x396BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BE4u;
        // 0x396be8: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BECu;
        goto label_396bec;
    }
    ctx->pc = 0x396BE4u;
    {
        const bool branch_taken_0x396be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BE4u;
        // 0x396be8: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396be4) {
            ctx->pc = 0x396BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ba0;
        }
    }
    ctx->pc = 0x396BECu;
label_396bec:
    // 0x396bec: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x396becu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_396bf0:
    // 0x396bf0: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_396bf4:
    if (ctx->pc == 0x396BF4u) {
        ctx->pc = 0x396BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BF0u;
        // 0x396bf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396BF8u;
        goto label_396bf8;
    }
    ctx->pc = 0x396BF0u;
    {
        const bool branch_taken_0x396bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bf0) {
            ctx->pc = 0x396BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BF0u;
            // 0x396bf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396C2Cu;
            goto label_396c2c;
        }
    }
    ctx->pc = 0x396BF8u;
label_396bf8:
    // 0x396bf8: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x396bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_396bfc:
    // 0x396bfc: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x396bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_396c00:
    // 0x396c00: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_396c04:
    if (ctx->pc == 0x396C04u) {
        ctx->pc = 0x396C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C00u;
        // 0x396c04: 0x94aa0018  lhu         $t2, 0x18($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C08u;
        goto label_396c08;
    }
    ctx->pc = 0x396C00u;
    {
        const bool branch_taken_0x396c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x396c00) {
            ctx->pc = 0x396C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396C00u;
            // 0x396c04: 0x94aa0018  lhu         $t2, 0x18($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396C18u;
            goto label_396c18;
        }
    }
    ctx->pc = 0x396C08u;
label_396c08:
    // 0x396c08: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x396c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
label_396c0c:
    // 0x396c0c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_396c10:
    if (ctx->pc == 0x396C10u) {
        ctx->pc = 0x396C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C0Cu;
        // 0x396c10: 0x94aa001a  lhu         $t2, 0x1A($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C14u;
        goto label_396c14;
    }
    ctx->pc = 0x396C0Cu;
    {
        const bool branch_taken_0x396c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x396c0c) {
            ctx->pc = 0x396C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396C0Cu;
            // 0x396c10: 0x94aa001a  lhu         $t2, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396C18u;
            goto label_396c18;
        }
    }
    ctx->pc = 0x396C14u;
label_396c14:
    // 0x396c14: 0x94aa0018  lhu         $t2, 0x18($a1)
    ctx->pc = 0x396c14u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_396c18:
    // 0x396c18: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x396c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_396c1c:
    // 0x396c1c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_396c20:
    if (ctx->pc == 0x396C20u) {
        ctx->pc = 0x396C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C1Cu;
        // 0x396c20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C24u;
        goto label_396c24;
    }
    ctx->pc = 0x396C1Cu;
    {
        const bool branch_taken_0x396c1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x396C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C1Cu;
        // 0x396c20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c1c) {
            ctx->pc = 0x396C28u;
            goto label_396c28;
        }
    }
    ctx->pc = 0x396C24u;
label_396c24:
    // 0x396c24: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x396c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_396c28:
    // 0x396c28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x396c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396c2c:
    // 0x396c2c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_396c30:
    if (ctx->pc == 0x396C30u) {
        ctx->pc = 0x396C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C2Cu;
        // 0x396c30: 0x20c102b  sltu        $v0, $s0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C34u;
        goto label_396c34;
    }
    ctx->pc = 0x396C2Cu;
    {
        const bool branch_taken_0x396c2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x396C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C2Cu;
        // 0x396c30: 0x20c102b  sltu        $v0, $s0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c2c) {
            ctx->pc = 0x396C44u;
            goto label_396c44;
        }
    }
    ctx->pc = 0x396C34u;
label_396c34:
    // 0x396c34: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x396c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_396c38:
    // 0x396c38: 0x5622ffb5  bnel        $s1, $v0, . + 4 + (-0x4B << 2)
label_396c3c:
    if (ctx->pc == 0x396C3Cu) {
        ctx->pc = 0x396C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C38u;
        // 0x396c3c: 0xacf10030  sw          $s1, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C40u;
        goto label_396c40;
    }
    ctx->pc = 0x396C38u;
    {
        const bool branch_taken_0x396c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x396c38) {
            ctx->pc = 0x396C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396C38u;
            // 0x396c3c: 0xacf10030  sw          $s1, 0x30($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b10;
        }
    }
    ctx->pc = 0x396C40u;
label_396c40:
    // 0x396c40: 0x20c102b  sltu        $v0, $s0, $t4
    ctx->pc = 0x396c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_396c44:
    // 0x396c44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_396c48:
    if (ctx->pc == 0x396C48u) {
        ctx->pc = 0x396C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C44u;
        // 0x396c48: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C4Cu;
        goto label_396c4c;
    }
    ctx->pc = 0x396C44u;
    {
        const bool branch_taken_0x396c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396c44) {
            ctx->pc = 0x396C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396C44u;
            // 0x396c48: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396C58u;
            goto label_396c58;
        }
    }
    ctx->pc = 0x396C4Cu;
label_396c4c:
    // 0x396c4c: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x396c4cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_396c50:
    // 0x396c50: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x396c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_396c54:
    // 0x396c54: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x396c54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_396c58:
    // 0x396c58: 0x2d620006  sltiu       $v0, $t3, 0x6
    ctx->pc = 0x396c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_396c5c:
    // 0x396c5c: 0x5440ff8e  bnel        $v0, $zero, . + 4 + (-0x72 << 2)
label_396c60:
    if (ctx->pc == 0x396C60u) {
        ctx->pc = 0x396C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C5Cu;
        // 0x396c60: 0x16d001b  divu        $zero, $t3, $t5 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C64u;
        goto label_396c64;
    }
    ctx->pc = 0x396C5Cu;
    {
        const bool branch_taken_0x396c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396c5c) {
            ctx->pc = 0x396C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396C5Cu;
            // 0x396c60: 0x16d001b  divu        $zero, $t3, $t5 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x396A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396a98;
        }
    }
    ctx->pc = 0x396C64u;
label_396c64:
    // 0x396c64: 0x1d5001b  divu        $zero, $t6, $s5
    ctx->pc = 0x396c64u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
label_396c68:
    // 0x396c68: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x396c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_396c6c:
    // 0x396c6c: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x396c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_396c70:
    // 0x396c70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x396c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_396c74:
    // 0x396c74: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x396c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_396c78:
    // 0x396c78: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x396c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_396c7c:
    // 0x396c7c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x396c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_396c80:
    // 0x396c80: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x396c80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
label_396c84:
    // 0x396c84: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x396c84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
label_396c88:
    // 0x396c88: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_396c8c:
    if (ctx->pc == 0x396C8Cu) {
        ctx->pc = 0x396C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396C88u;
        // 0x396c8c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396C90u;
        goto label_396c90;
    }
    ctx->pc = 0x396C88u;
    {
        const bool branch_taken_0x396c88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x396c88) {
            ctx->pc = 0x396C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396C88u;
            // 0x396c8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x396C90u;
            goto label_396c90;
        }
    }
    ctx->pc = 0x396C90u;
label_396c90:
    // 0x396c90: 0x2810  mfhi        $a1
    ctx->pc = 0x396c90u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_396c94:
    // 0x396c94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x396c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_396c98:
    // 0x396c98: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x396c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_396c9c:
    // 0x396c9c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x396c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396ca0:
    // 0x396ca0: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x396ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_396ca4:
    // 0x396ca4: 0x51270001  beql        $t1, $a3, . + 4 + (0x1 << 2)
label_396ca8:
    if (ctx->pc == 0x396CA8u) {
        ctx->pc = 0x396CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CA4u;
        // 0x396ca8: 0x8ca70014  lw          $a3, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CACu;
        goto label_396cac;
    }
    ctx->pc = 0x396CA4u;
    {
        const bool branch_taken_0x396ca4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x396ca4) {
            ctx->pc = 0x396CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396CA4u;
            // 0x396ca8: 0x8ca70014  lw          $a3, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396CACu;
            goto label_396cac;
        }
    }
    ctx->pc = 0x396CACu;
label_396cac:
    // 0x396cac: 0x50e0006b  beql        $a3, $zero, . + 4 + (0x6B << 2)
label_396cb0:
    if (ctx->pc == 0x396CB0u) {
        ctx->pc = 0x396CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CACu;
        // 0x396cb0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CB4u;
        goto label_396cb4;
    }
    ctx->pc = 0x396CACu;
    {
        const bool branch_taken_0x396cac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x396cac) {
            ctx->pc = 0x396CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396CACu;
            // 0x396cb0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396E5Cu;
            goto label_396e5c;
        }
    }
    ctx->pc = 0x396CB4u;
label_396cb4:
    // 0x396cb4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x396cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_396cb8:
    // 0x396cb8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_396cbc:
    if (ctx->pc == 0x396CBCu) {
        ctx->pc = 0x396CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CB8u;
        // 0x396cbc: 0x2dc20003  sltiu       $v0, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CC0u;
        goto label_396cc0;
    }
    ctx->pc = 0x396CB8u;
    {
        const bool branch_taken_0x396cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CB8u;
        // 0x396cbc: 0x2dc20003  sltiu       $v0, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cb8) {
            ctx->pc = 0x396E58u;
            goto label_396e58;
        }
    }
    ctx->pc = 0x396CC0u;
label_396cc0:
    // 0x396cc0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_396cc4:
    if (ctx->pc == 0x396CC4u) {
        ctx->pc = 0x396CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CC0u;
        // 0x396cc4: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CC8u;
        goto label_396cc8;
    }
    ctx->pc = 0x396CC0u;
    {
        const bool branch_taken_0x396cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396cc0) {
            ctx->pc = 0x396CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396CC0u;
            // 0x396cc4: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396CCCu;
            goto label_396ccc;
        }
    }
    ctx->pc = 0x396CC8u;
label_396cc8:
    // 0x396cc8: 0x94a20018  lhu         $v0, 0x18($a1)
    ctx->pc = 0x396cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_396ccc:
    // 0x396ccc: 0x10e00062  beqz        $a3, . + 4 + (0x62 << 2)
label_396cd0:
    if (ctx->pc == 0x396CD0u) {
        ctx->pc = 0x396CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CCCu;
        // 0x396cd0: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CD4u;
        goto label_396cd4;
    }
    ctx->pc = 0x396CCCu;
    {
        const bool branch_taken_0x396ccc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x396CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CCCu;
        // 0x396cd0: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ccc) {
            ctx->pc = 0x396E58u;
            goto label_396e58;
        }
    }
    ctx->pc = 0x396CD4u;
label_396cd4:
    // 0x396cd4: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x396cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_396cd8:
    // 0x396cd8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_396cdc:
    if (ctx->pc == 0x396CDCu) {
        ctx->pc = 0x396CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CD8u;
        // 0x396cdc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396CE0u;
        goto label_396ce0;
    }
    ctx->pc = 0x396CD8u;
    {
        const bool branch_taken_0x396cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396CD8u;
        // 0x396cdc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cd8) {
            ctx->pc = 0x396E58u;
            goto label_396e58;
        }
    }
    ctx->pc = 0x396CE0u;
label_396ce0:
    // 0x396ce0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x396ce0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_396ce4:
    // 0x396ce4: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x396ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_396ce8:
    // 0x396ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396cec:
    // 0x396cec: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x396cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_396cf0:
    // 0x396cf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396cf4:
    // 0x396cf4: 0xacac001c  sw          $t4, 0x1C($a1)
    ctx->pc = 0x396cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 12));
label_396cf8:
    // 0x396cf8: 0x24e4001c  addiu       $a0, $a3, 0x1C
    ctx->pc = 0x396cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
label_396cfc:
    // 0x396cfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x396cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_396d00:
    // 0x396d00: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x396d00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
label_396d04:
    // 0x396d04: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x396d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_396d08:
    // 0x396d08: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x396d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_396d0c:
    // 0x396d0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x396d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_396d10:
    // 0x396d10: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x396d10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_396d14:
    // 0x396d14: 0x10000003  b           . + 4 + (0x3 << 2)
label_396d18:
    if (ctx->pc == 0x396D18u) {
        ctx->pc = 0x396D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D14u;
        // 0x396d18: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D1Cu;
        goto label_396d1c;
    }
    ctx->pc = 0x396D14u;
    {
        const bool branch_taken_0x396d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D14u;
        // 0x396d18: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d14) {
            ctx->pc = 0x396D24u;
            goto label_396d24;
        }
    }
    ctx->pc = 0x396D1Cu;
label_396d1c:
    // 0x396d1c: 0x0  nop
    ctx->pc = 0x396d1cu;
    // NOP
label_396d20:
    // 0x396d20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x396d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_396d24:
    // 0x396d24: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x396d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_396d28:
    // 0x396d28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_396d2c:
    if (ctx->pc == 0x396D2Cu) {
        ctx->pc = 0x396D30u;
        goto label_396d30;
    }
    ctx->pc = 0x396D28u;
    {
        const bool branch_taken_0x396d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d28) {
            ctx->pc = 0x396D80u;
            goto label_396d80;
        }
    }
    ctx->pc = 0x396D30u;
label_396d30:
    // 0x396d30: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x396d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396d34:
    // 0x396d34: 0x50a6fffa  beql        $a1, $a2, . + 4 + (-0x6 << 2)
label_396d38:
    if (ctx->pc == 0x396D38u) {
        ctx->pc = 0x396D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D34u;
        // 0x396d38: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D3Cu;
        goto label_396d3c;
    }
    ctx->pc = 0x396D34u;
    {
        const bool branch_taken_0x396d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x396d34) {
            ctx->pc = 0x396D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D34u;
            // 0x396d38: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d20;
        }
    }
    ctx->pc = 0x396D3Cu;
label_396d3c:
    // 0x396d3c: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x396d3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_396d40:
    // 0x396d40: 0x5142fff7  beql        $t2, $v0, . + 4 + (-0x9 << 2)
label_396d44:
    if (ctx->pc == 0x396D44u) {
        ctx->pc = 0x396D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D40u;
        // 0x396d44: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D48u;
        goto label_396d48;
    }
    ctx->pc = 0x396D40u;
    {
        const bool branch_taken_0x396d40 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x396d40) {
            ctx->pc = 0x396D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D40u;
            // 0x396d44: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d20;
        }
    }
    ctx->pc = 0x396D48u;
label_396d48:
    // 0x396d48: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x396d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
label_396d4c:
    // 0x396d4c: 0x5142fff4  beql        $t2, $v0, . + 4 + (-0xC << 2)
label_396d50:
    if (ctx->pc == 0x396D50u) {
        ctx->pc = 0x396D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D4Cu;
        // 0x396d50: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D54u;
        goto label_396d54;
    }
    ctx->pc = 0x396D4Cu;
    {
        const bool branch_taken_0x396d4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x396d4c) {
            ctx->pc = 0x396D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D4Cu;
            // 0x396d50: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d20;
        }
    }
    ctx->pc = 0x396D54u;
label_396d54:
    // 0x396d54: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x396d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_396d58:
    // 0x396d58: 0x50e30001  beql        $a3, $v1, . + 4 + (0x1 << 2)
label_396d5c:
    if (ctx->pc == 0x396D5Cu) {
        ctx->pc = 0x396D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D58u;
        // 0x396d5c: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D60u;
        goto label_396d60;
    }
    ctx->pc = 0x396D58u;
    {
        const bool branch_taken_0x396d58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x396d58) {
            ctx->pc = 0x396D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D58u;
            // 0x396d5c: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D60u;
            goto label_396d60;
        }
    }
    ctx->pc = 0x396D60u;
label_396d60:
    // 0x396d60: 0x5060ffef  beql        $v1, $zero, . + 4 + (-0x11 << 2)
label_396d64:
    if (ctx->pc == 0x396D64u) {
        ctx->pc = 0x396D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D60u;
        // 0x396d64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D68u;
        goto label_396d68;
    }
    ctx->pc = 0x396D60u;
    {
        const bool branch_taken_0x396d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d60) {
            ctx->pc = 0x396D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D60u;
            // 0x396d64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d20;
        }
    }
    ctx->pc = 0x396D68u;
label_396d68:
    // 0x396d68: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x396d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_396d6c:
    // 0x396d6c: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
label_396d70:
    if (ctx->pc == 0x396D70u) {
        ctx->pc = 0x396D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D6Cu;
        // 0x396d70: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D74u;
        goto label_396d74;
    }
    ctx->pc = 0x396D6Cu;
    {
        const bool branch_taken_0x396d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d6c) {
            ctx->pc = 0x396D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D6Cu;
            // 0x396d70: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d20;
        }
    }
    ctx->pc = 0x396D74u;
label_396d74:
    // 0x396d74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396d78:
    // 0x396d78: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
label_396d7c:
    if (ctx->pc == 0x396D7Cu) {
        ctx->pc = 0x396D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D78u;
        // 0x396d7c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D80u;
        goto label_396d80;
    }
    ctx->pc = 0x396D78u;
    {
        const bool branch_taken_0x396d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d78) {
            ctx->pc = 0x396D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396D78u;
            // 0x396d7c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d20;
        }
    }
    ctx->pc = 0x396D80u;
label_396d80:
    // 0x396d80: 0x150b0018  bne         $t0, $t3, . + 4 + (0x18 << 2)
label_396d84:
    if (ctx->pc == 0x396D84u) {
        ctx->pc = 0x396D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D80u;
        // 0x396d84: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D88u;
        goto label_396d88;
    }
    ctx->pc = 0x396D80u;
    {
        const bool branch_taken_0x396d80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        ctx->pc = 0x396D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D80u;
        // 0x396d84: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d80) {
            ctx->pc = 0x396DE4u;
            goto label_396de4;
        }
    }
    ctx->pc = 0x396D88u;
label_396d88:
    // 0x396d88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396d88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396d8c:
    // 0x396d8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_396d90:
    if (ctx->pc == 0x396D90u) {
        ctx->pc = 0x396D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D8Cu;
        // 0x396d90: 0x24e4001c  addiu       $a0, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396D94u;
        goto label_396d94;
    }
    ctx->pc = 0x396D8Cu;
    {
        const bool branch_taken_0x396d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D8Cu;
        // 0x396d90: 0x24e4001c  addiu       $a0, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d8c) {
            ctx->pc = 0x396DA0u;
            goto label_396da0;
        }
    }
    ctx->pc = 0x396D94u;
label_396d94:
    // 0x396d94: 0x0  nop
    ctx->pc = 0x396d94u;
    // NOP
label_396d98:
    // 0x396d98: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x396d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_396d9c:
    // 0x396d9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x396d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_396da0:
    // 0x396da0: 0x2d020003  sltiu       $v0, $t0, 0x3
    ctx->pc = 0x396da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_396da4:
    // 0x396da4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_396da8:
    if (ctx->pc == 0x396DA8u) {
        ctx->pc = 0x396DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DA4u;
        // 0x396da8: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DACu;
        goto label_396dac;
    }
    ctx->pc = 0x396DA4u;
    {
        const bool branch_taken_0x396da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396da4) {
            ctx->pc = 0x396DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DA4u;
            // 0x396da8: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x396DE4u;
            goto label_396de4;
        }
    }
    ctx->pc = 0x396DACu;
label_396dac:
    // 0x396dac: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x396dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396db0:
    // 0x396db0: 0x50a6fffa  beql        $a1, $a2, . + 4 + (-0x6 << 2)
label_396db4:
    if (ctx->pc == 0x396DB4u) {
        ctx->pc = 0x396DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB0u;
        // 0x396db4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DB8u;
        goto label_396db8;
    }
    ctx->pc = 0x396DB0u;
    {
        const bool branch_taken_0x396db0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x396db0) {
            ctx->pc = 0x396DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DB0u;
            // 0x396db4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d9c;
        }
    }
    ctx->pc = 0x396DB8u;
label_396db8:
    // 0x396db8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x396db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_396dbc:
    // 0x396dbc: 0x50e30001  beql        $a3, $v1, . + 4 + (0x1 << 2)
label_396dc0:
    if (ctx->pc == 0x396DC0u) {
        ctx->pc = 0x396DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DBCu;
        // 0x396dc0: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DC4u;
        goto label_396dc4;
    }
    ctx->pc = 0x396DBCu;
    {
        const bool branch_taken_0x396dbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x396dbc) {
            ctx->pc = 0x396DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DBCu;
            // 0x396dc0: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396DC4u;
            goto label_396dc4;
        }
    }
    ctx->pc = 0x396DC4u;
label_396dc4:
    // 0x396dc4: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
label_396dc8:
    if (ctx->pc == 0x396DC8u) {
        ctx->pc = 0x396DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DC4u;
        // 0x396dc8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DCCu;
        goto label_396dcc;
    }
    ctx->pc = 0x396DC4u;
    {
        const bool branch_taken_0x396dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396dc4) {
            ctx->pc = 0x396DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DC4u;
            // 0x396dc8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d9c;
        }
    }
    ctx->pc = 0x396DCCu;
label_396dcc:
    // 0x396dcc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x396dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_396dd0:
    // 0x396dd0: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
label_396dd4:
    if (ctx->pc == 0x396DD4u) {
        ctx->pc = 0x396DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DD0u;
        // 0x396dd4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DD8u;
        goto label_396dd8;
    }
    ctx->pc = 0x396DD0u;
    {
        const bool branch_taken_0x396dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396dd0) {
            ctx->pc = 0x396DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DD0u;
            // 0x396dd4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d9c;
        }
    }
    ctx->pc = 0x396DD8u;
label_396dd8:
    // 0x396dd8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396ddc:
    // 0x396ddc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
label_396de0:
    if (ctx->pc == 0x396DE0u) {
        ctx->pc = 0x396DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DDCu;
        // 0x396de0: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DE4u;
        goto label_396de4;
    }
    ctx->pc = 0x396DDCu;
    {
        const bool branch_taken_0x396ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DDCu;
        // 0x396de0: 0x39020003  xori        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ddc) {
            ctx->pc = 0x396D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d98;
        }
    }
    ctx->pc = 0x396DE4u;
label_396de4:
    // 0x396de4: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x396de4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_396de8:
    // 0x396de8: 0x50c00016  beql        $a2, $zero, . + 4 + (0x16 << 2)
label_396dec:
    if (ctx->pc == 0x396DECu) {
        ctx->pc = 0x396DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DE8u;
        // 0x396dec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396DF0u;
        goto label_396df0;
    }
    ctx->pc = 0x396DE8u;
    {
        const bool branch_taken_0x396de8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x396de8) {
            ctx->pc = 0x396DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DE8u;
            // 0x396dec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396E44u;
            goto label_396e44;
        }
    }
    ctx->pc = 0x396DF0u;
label_396df0:
    // 0x396df0: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x396df0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_396df4:
    // 0x396df4: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x396df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
label_396df8:
    // 0x396df8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_396dfc:
    if (ctx->pc == 0x396DFCu) {
        ctx->pc = 0x396DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DF8u;
        // 0x396dfc: 0x94aa0018  lhu         $t2, 0x18($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E00u;
        goto label_396e00;
    }
    ctx->pc = 0x396DF8u;
    {
        const bool branch_taken_0x396df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x396df8) {
            ctx->pc = 0x396DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396DF8u;
            // 0x396dfc: 0x94aa0018  lhu         $t2, 0x18($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396E10u;
            goto label_396e10;
        }
    }
    ctx->pc = 0x396E00u;
label_396e00:
    // 0x396e00: 0x94c2001a  lhu         $v0, 0x1A($a2)
    ctx->pc = 0x396e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
label_396e04:
    // 0x396e04: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_396e08:
    if (ctx->pc == 0x396E08u) {
        ctx->pc = 0x396E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E04u;
        // 0x396e08: 0x94aa001a  lhu         $t2, 0x1A($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E0Cu;
        goto label_396e0c;
    }
    ctx->pc = 0x396E04u;
    {
        const bool branch_taken_0x396e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x396e04) {
            ctx->pc = 0x396E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396E04u;
            // 0x396e08: 0x94aa001a  lhu         $t2, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396E10u;
            goto label_396e10;
        }
    }
    ctx->pc = 0x396E0Cu;
label_396e0c:
    // 0x396e0c: 0x94aa0018  lhu         $t2, 0x18($a1)
    ctx->pc = 0x396e0cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_396e10:
    // 0x396e10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x396e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_396e14:
    // 0x396e14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x396e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_396e18:
    // 0x396e18: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x396e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_396e1c:
    // 0x396e1c: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x396e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_396e20:
    // 0x396e20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x396e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_396e24:
    // 0x396e24: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x396e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_396e28:
    // 0x396e28: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x396e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_396e2c:
    // 0x396e2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x396e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_396e30:
    // 0x396e30: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x396e30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_396e34:
    // 0x396e34: 0x14e80002  bne         $a3, $t0, . + 4 + (0x2 << 2)
label_396e38:
    if (ctx->pc == 0x396E38u) {
        ctx->pc = 0x396E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E34u;
        // 0x396e38: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E3Cu;
        goto label_396e3c;
    }
    ctx->pc = 0x396E34u;
    {
        const bool branch_taken_0x396e34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x396E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E34u;
        // 0x396e38: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e34) {
            ctx->pc = 0x396E40u;
            goto label_396e40;
        }
    }
    ctx->pc = 0x396E3Cu;
label_396e3c:
    // 0x396e3c: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x396e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_396e40:
    // 0x396e40: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x396e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_396e44:
    // 0x396e44: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_396e48:
    if (ctx->pc == 0x396E48u) {
        ctx->pc = 0x396E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E44u;
        // 0x396e48: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E4Cu;
        goto label_396e4c;
    }
    ctx->pc = 0x396E44u;
    {
        const bool branch_taken_0x396e44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x396E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E44u;
        // 0x396e48: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e44) {
            ctx->pc = 0x396E5Cu;
            goto label_396e5c;
        }
    }
    ctx->pc = 0x396E4Cu;
label_396e4c:
    // 0x396e4c: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x396e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_396e50:
    // 0x396e50: 0x5440ffa5  bnel        $v0, $zero, . + 4 + (-0x5B << 2)
label_396e54:
    if (ctx->pc == 0x396E54u) {
        ctx->pc = 0x396E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E50u;
        // 0x396e54: 0x8ce30014  lw          $v1, 0x14($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E58u;
        goto label_396e58;
    }
    ctx->pc = 0x396E50u;
    {
        const bool branch_taken_0x396e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396e50) {
            ctx->pc = 0x396E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396E50u;
            // 0x396e54: 0x8ce30014  lw          $v1, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ce8;
        }
    }
    ctx->pc = 0x396E58u;
label_396e58:
    // 0x396e58: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x396e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_396e5c:
    // 0x396e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x396e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396e60:
    // 0x396e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396e64:
    // 0x396e64: 0xc0e61f4  jal         func_3987D0
label_396e68:
    if (ctx->pc == 0x396E68u) {
        ctx->pc = 0x396E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E64u;
        // 0x396e68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E6Cu;
        goto label_396e6c;
    }
    ctx->pc = 0x396E64u;
    SET_GPR_U32(ctx, 31, 0x396E6Cu);
    ctx->pc = 0x396E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E64u;
    // 0x396e68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x396E64u, 0x396E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E6Cu;
label_396e6c:
    // 0x396e6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_396e70:
    if (ctx->pc == 0x396E70u) {
        ctx->pc = 0x396E74u;
        goto label_396e74;
    }
    ctx->pc = 0x396E6Cu;
    {
        const bool branch_taken_0x396e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396e6c) {
            ctx->pc = 0x396E90u;
            goto label_396e90;
        }
    }
    ctx->pc = 0x396E74u;
label_396e74:
    // 0x396e74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x396e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396e78:
    // 0x396e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396e7c:
    // 0x396e7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x396e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_396e80:
    // 0x396e80: 0xc0e61f4  jal         func_3987D0
label_396e84:
    if (ctx->pc == 0x396E84u) {
        ctx->pc = 0x396E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E80u;
        // 0x396e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E88u;
        goto label_396e88;
    }
    ctx->pc = 0x396E80u;
    SET_GPR_U32(ctx, 31, 0x396E88u);
    ctx->pc = 0x396E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E80u;
    // 0x396e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x396E80u, 0x396E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E88u;
label_396e88:
    // 0x396e88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_396e8c:
    if (ctx->pc == 0x396E8Cu) {
        ctx->pc = 0x396E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E88u;
        // 0x396e8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E90u;
        goto label_396e90;
    }
    ctx->pc = 0x396E88u;
    {
        const bool branch_taken_0x396e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396e88) {
            ctx->pc = 0x396E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396E88u;
            // 0x396e8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396e78;
        }
    }
    ctx->pc = 0x396E90u;
label_396e90:
    // 0x396e90: 0x120002a0  beqz        $s0, . + 4 + (0x2A0 << 2)
label_396e94:
    if (ctx->pc == 0x396E94u) {
        ctx->pc = 0x396E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E90u;
        // 0x396e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396E98u;
        goto label_396e98;
    }
    ctx->pc = 0x396E90u;
    {
        const bool branch_taken_0x396e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E90u;
        // 0x396e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e90) {
            ctx->pc = 0x397914u;
            goto label_397914;
        }
    }
    ctx->pc = 0x396E98u;
label_396e98:
    // 0x396e98: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x396e98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396e9c:
    // 0x396e9c: 0x0  nop
    ctx->pc = 0x396e9cu;
    // NOP
label_396ea0:
    // 0x396ea0: 0x260a001c  addiu       $t2, $s0, 0x1C
    ctx->pc = 0x396ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_396ea4:
    // 0x396ea4: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x396ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_396ea8:
    // 0x396ea8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x396ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_396eac:
    // 0x396eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x396eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396eb0:
    // 0x396eb0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x396eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_396eb4:
    // 0x396eb4: 0x52040001  beql        $s0, $a0, . + 4 + (0x1 << 2)
label_396eb8:
    if (ctx->pc == 0x396EB8u) {
        ctx->pc = 0x396EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EB4u;
        // 0x396eb8: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396EBCu;
        goto label_396ebc;
    }
    ctx->pc = 0x396EB4u;
    {
        const bool branch_taken_0x396eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x396eb4) {
            ctx->pc = 0x396EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396EB4u;
            // 0x396eb8: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396EBCu;
            goto label_396ebc;
        }
    }
    ctx->pc = 0x396EBCu;
label_396ebc:
    // 0x396ebc: 0x10800283  beqz        $a0, . + 4 + (0x283 << 2)
label_396ec0:
    if (ctx->pc == 0x396EC0u) {
        ctx->pc = 0x396EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EBCu;
        // 0x396ec0: 0x256f0001  addiu       $t7, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396EC4u;
        goto label_396ec4;
    }
    ctx->pc = 0x396EBCu;
    {
        const bool branch_taken_0x396ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x396EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EBCu;
        // 0x396ec0: 0x256f0001  addiu       $t7, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ebc) {
            ctx->pc = 0x3978CCu;
            goto label_3978cc;
        }
    }
    ctx->pc = 0x396EC4u;
label_396ec4:
    // 0x396ec4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x396ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_396ec8:
    // 0x396ec8: 0x10600280  beqz        $v1, . + 4 + (0x280 << 2)
label_396ecc:
    if (ctx->pc == 0x396ECCu) {
        ctx->pc = 0x396ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EC8u;
        // 0x396ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396ED0u;
        goto label_396ed0;
    }
    ctx->pc = 0x396EC8u;
    {
        const bool branch_taken_0x396ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EC8u;
        // 0x396ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ec8) {
            ctx->pc = 0x3978CCu;
            goto label_3978cc;
        }
    }
    ctx->pc = 0x396ED0u;
label_396ed0:
    // 0x396ed0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x396ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_396ed4:
    // 0x396ed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x396ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396ed8:
    // 0x396ed8: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x396ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_396edc:
    // 0x396edc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x396edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_396ee0:
    // 0x396ee0: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x396ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_396ee4:
    // 0x396ee4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x396ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_396ee8:
    // 0x396ee8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x396ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_396eec:
    // 0x396eec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x396eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_396ef0:
    // 0x396ef0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x396ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_396ef4:
    // 0x396ef4: 0x10a00098  beqz        $a1, . + 4 + (0x98 << 2)
label_396ef8:
    if (ctx->pc == 0x396EF8u) {
        ctx->pc = 0x396EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EF4u;
        // 0x396ef8: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396EFCu;
        goto label_396efc;
    }
    ctx->pc = 0x396EF4u;
    {
        const bool branch_taken_0x396ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x396EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EF4u;
        // 0x396ef8: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ef4) {
            ctx->pc = 0x397158u;
            goto label_397158;
        }
    }
    ctx->pc = 0x396EFCu;
label_396efc:
    // 0x396efc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x396efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_396f00:
    // 0x396f00: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x396f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_396f04:
    // 0x396f04: 0x19000031  blez        $t0, . + 4 + (0x31 << 2)
label_396f08:
    if (ctx->pc == 0x396F08u) {
        ctx->pc = 0x396F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F04u;
        // 0x396f08: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F0Cu;
        goto label_396f0c;
    }
    ctx->pc = 0x396F04u;
    {
        const bool branch_taken_0x396f04 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x396F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F04u;
        // 0x396f08: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f04) {
            ctx->pc = 0x396FCCu;
            goto label_396fcc;
        }
    }
    ctx->pc = 0x396F0Cu;
label_396f0c:
    // 0x396f0c: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
label_396f10:
    if (ctx->pc == 0x396F10u) {
        ctx->pc = 0x396F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F0Cu;
        // 0x396f10: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F14u;
        goto label_396f14;
    }
    ctx->pc = 0x396F0Cu;
    {
        const bool branch_taken_0x396f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f0c) {
            ctx->pc = 0x396F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F0Cu;
            // 0x396f10: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39702Cu;
            goto label_39702c;
        }
    }
    ctx->pc = 0x396F14u;
label_396f14:
    // 0x396f14: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x396f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_396f18:
    // 0x396f18: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_396f1c:
    if (ctx->pc == 0x396F1Cu) {
        ctx->pc = 0x396F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F18u;
        // 0x396f1c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F20u;
        goto label_396f20;
    }
    ctx->pc = 0x396F18u;
    {
        const bool branch_taken_0x396f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396f18) {
            ctx->pc = 0x396F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F18u;
            // 0x396f1c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FD0u;
            goto label_396fd0;
        }
    }
    ctx->pc = 0x396F20u;
label_396f20:
    // 0x396f20: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x396f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_396f24:
    // 0x396f24: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_396f28:
    if (ctx->pc == 0x396F28u) {
        ctx->pc = 0x396F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F24u;
        // 0x396f28: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F2Cu;
        goto label_396f2c;
    }
    ctx->pc = 0x396F24u;
    {
        const bool branch_taken_0x396f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396f24) {
            ctx->pc = 0x396F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F24u;
            // 0x396f28: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F80u;
            goto label_396f80;
        }
    }
    ctx->pc = 0x396F2Cu;
label_396f2c:
    // 0x396f2c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x396f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_396f30:
    // 0x396f30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396f34:
    // 0x396f34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_396f38:
    if (ctx->pc == 0x396F38u) {
        ctx->pc = 0x396F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F34u;
        // 0x396f38: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F3Cu;
        goto label_396f3c;
    }
    ctx->pc = 0x396F34u;
    {
        const bool branch_taken_0x396f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f34) {
            ctx->pc = 0x396F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F34u;
            // 0x396f38: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F54u;
            goto label_396f54;
        }
    }
    ctx->pc = 0x396F3Cu;
label_396f3c:
    // 0x396f3c: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_396f40:
    if (ctx->pc == 0x396F40u) {
        ctx->pc = 0x396F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F3Cu;
        // 0x396f40: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F44u;
        goto label_396f44;
    }
    ctx->pc = 0x396F3Cu;
    {
        const bool branch_taken_0x396f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x396f3c) {
            ctx->pc = 0x396F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F3Cu;
            // 0x396f40: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F54u;
            goto label_396f54;
        }
    }
    ctx->pc = 0x396F44u;
label_396f44:
    // 0x396f44: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x396f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_396f48:
    // 0x396f48: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_396f4c:
    if (ctx->pc == 0x396F4Cu) {
        ctx->pc = 0x396F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F48u;
        // 0x396f4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F50u;
        goto label_396f50;
    }
    ctx->pc = 0x396F48u;
    {
        const bool branch_taken_0x396f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396f48) {
            ctx->pc = 0x396F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F48u;
            // 0x396f4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F74u;
            goto label_396f74;
        }
    }
    ctx->pc = 0x396F50u;
label_396f50:
    // 0x396f50: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x396f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_396f54:
    // 0x396f54: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_396f58:
    if (ctx->pc == 0x396F58u) {
        ctx->pc = 0x396F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F54u;
        // 0x396f58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F5Cu;
        goto label_396f5c;
    }
    ctx->pc = 0x396F54u;
    {
        const bool branch_taken_0x396f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f54) {
            ctx->pc = 0x396F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F54u;
            // 0x396f58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F5Cu;
label_396f5c:
    // 0x396f5c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_396f60:
    if (ctx->pc == 0x396F60u) {
        ctx->pc = 0x396F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F5Cu;
        // 0x396f60: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F64u;
        goto label_396f64;
    }
    ctx->pc = 0x396F5Cu;
    {
        const bool branch_taken_0x396f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x396f5c) {
            ctx->pc = 0x396F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F5Cu;
            // 0x396f60: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F64u;
label_396f64:
    // 0x396f64: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x396f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_396f68:
    // 0x396f68: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_396f6c:
    if (ctx->pc == 0x396F6Cu) {
        ctx->pc = 0x396F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F68u;
        // 0x396f6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F70u;
        goto label_396f70;
    }
    ctx->pc = 0x396F68u;
    {
        const bool branch_taken_0x396f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f68) {
            ctx->pc = 0x396F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F68u;
            // 0x396f6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396F78u;
            goto label_396f78;
        }
    }
    ctx->pc = 0x396F70u;
label_396f70:
    // 0x396f70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x396f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_396f74:
    // 0x396f74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x396f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_396f78:
    // 0x396f78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x396f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_396f7c:
    // 0x396f7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x396f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396f80:
    // 0x396f80: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396f84:
    // 0x396f84: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_396f88:
    if (ctx->pc == 0x396F88u) {
        ctx->pc = 0x396F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F84u;
        // 0x396f88: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F8Cu;
        goto label_396f8c;
    }
    ctx->pc = 0x396F84u;
    {
        const bool branch_taken_0x396f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396f84) {
            ctx->pc = 0x396F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F84u;
            // 0x396f88: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FA4u;
            goto label_396fa4;
        }
    }
    ctx->pc = 0x396F8Cu;
label_396f8c:
    // 0x396f8c: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_396f90:
    if (ctx->pc == 0x396F90u) {
        ctx->pc = 0x396F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F8Cu;
        // 0x396f90: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396F94u;
        goto label_396f94;
    }
    ctx->pc = 0x396F8Cu;
    {
        const bool branch_taken_0x396f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x396f8c) {
            ctx->pc = 0x396F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F8Cu;
            // 0x396f90: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FA4u;
            goto label_396fa4;
        }
    }
    ctx->pc = 0x396F94u;
label_396f94:
    // 0x396f94: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x396f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_396f98:
    // 0x396f98: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_396f9c:
    if (ctx->pc == 0x396F9Cu) {
        ctx->pc = 0x396F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F98u;
        // 0x396f9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FA0u;
        goto label_396fa0;
    }
    ctx->pc = 0x396F98u;
    {
        const bool branch_taken_0x396f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396f98) {
            ctx->pc = 0x396F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396F98u;
            // 0x396f9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FC4u;
            goto label_396fc4;
        }
    }
    ctx->pc = 0x396FA0u;
label_396fa0:
    // 0x396fa0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x396fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_396fa4:
    // 0x396fa4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_396fa8:
    if (ctx->pc == 0x396FA8u) {
        ctx->pc = 0x396FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FA4u;
        // 0x396fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FACu;
        goto label_396fac;
    }
    ctx->pc = 0x396FA4u;
    {
        const bool branch_taken_0x396fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fa4) {
            ctx->pc = 0x396FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FA4u;
            // 0x396fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FC8u;
            goto label_396fc8;
        }
    }
    ctx->pc = 0x396FACu;
label_396fac:
    // 0x396fac: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_396fb0:
    if (ctx->pc == 0x396FB0u) {
        ctx->pc = 0x396FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FACu;
        // 0x396fb0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FB4u;
        goto label_396fb4;
    }
    ctx->pc = 0x396FACu;
    {
        const bool branch_taken_0x396fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x396fac) {
            ctx->pc = 0x396FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FACu;
            // 0x396fb0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FC8u;
            goto label_396fc8;
        }
    }
    ctx->pc = 0x396FB4u;
label_396fb4:
    // 0x396fb4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x396fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_396fb8:
    // 0x396fb8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_396fbc:
    if (ctx->pc == 0x396FBCu) {
        ctx->pc = 0x396FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FB8u;
        // 0x396fbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FC0u;
        goto label_396fc0;
    }
    ctx->pc = 0x396FB8u;
    {
        const bool branch_taken_0x396fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fb8) {
            ctx->pc = 0x396FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FB8u;
            // 0x396fbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FC8u;
            goto label_396fc8;
        }
    }
    ctx->pc = 0x396FC0u;
label_396fc0:
    // 0x396fc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x396fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_396fc4:
    // 0x396fc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x396fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_396fc8:
    // 0x396fc8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x396fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_396fcc:
    // 0x396fcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x396fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_396fd0:
    // 0x396fd0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x396fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_396fd4:
    // 0x396fd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_396fd8:
    if (ctx->pc == 0x396FD8u) {
        ctx->pc = 0x396FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FD4u;
        // 0x396fd8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FDCu;
        goto label_396fdc;
    }
    ctx->pc = 0x396FD4u;
    {
        const bool branch_taken_0x396fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396fd4) {
            ctx->pc = 0x396FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FD4u;
            // 0x396fd8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FF4u;
            goto label_396ff4;
        }
    }
    ctx->pc = 0x396FDCu;
label_396fdc:
    // 0x396fdc: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_396fe0:
    if (ctx->pc == 0x396FE0u) {
        ctx->pc = 0x396FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FDCu;
        // 0x396fe0: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FE4u;
        goto label_396fe4;
    }
    ctx->pc = 0x396FDCu;
    {
        const bool branch_taken_0x396fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x396fdc) {
            ctx->pc = 0x396FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FDCu;
            // 0x396fe0: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396FF4u;
            goto label_396ff4;
        }
    }
    ctx->pc = 0x396FE4u;
label_396fe4:
    // 0x396fe4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x396fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_396fe8:
    // 0x396fe8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_396fec:
    if (ctx->pc == 0x396FECu) {
        ctx->pc = 0x396FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FE8u;
        // 0x396fec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FF0u;
        goto label_396ff0;
    }
    ctx->pc = 0x396FE8u;
    {
        const bool branch_taken_0x396fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396fe8) {
            ctx->pc = 0x396FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FE8u;
            // 0x396fec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397014u;
            goto label_397014;
        }
    }
    ctx->pc = 0x396FF0u;
label_396ff0:
    // 0x396ff0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x396ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_396ff4:
    // 0x396ff4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_396ff8:
    if (ctx->pc == 0x396FF8u) {
        ctx->pc = 0x396FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FF4u;
        // 0x396ff8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396FFCu;
        goto label_396ffc;
    }
    ctx->pc = 0x396FF4u;
    {
        const bool branch_taken_0x396ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ff4) {
            ctx->pc = 0x396FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FF4u;
            // 0x396ff8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397018u;
            goto label_397018;
        }
    }
    ctx->pc = 0x396FFCu;
label_396ffc:
    // 0x396ffc: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397000:
    if (ctx->pc == 0x397000u) {
        ctx->pc = 0x397000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396FFCu;
        // 0x397000: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397004u;
        goto label_397004;
    }
    ctx->pc = 0x396FFCu;
    {
        const bool branch_taken_0x396ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x396ffc) {
            ctx->pc = 0x397000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396FFCu;
            // 0x397000: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397018u;
            goto label_397018;
        }
    }
    ctx->pc = 0x397004u;
label_397004:
    // 0x397004: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397008:
    // 0x397008: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_39700c:
    if (ctx->pc == 0x39700Cu) {
        ctx->pc = 0x39700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397008u;
        // 0x39700c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397010u;
        goto label_397010;
    }
    ctx->pc = 0x397008u;
    {
        const bool branch_taken_0x397008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397008) {
            ctx->pc = 0x39700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397008u;
            // 0x39700c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397018u;
            goto label_397018;
        }
    }
    ctx->pc = 0x397010u;
label_397010:
    // 0x397010: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397014:
    // 0x397014: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_397018:
    // 0x397018: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x397018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_39701c:
    // 0x39701c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_397020:
    if (ctx->pc == 0x397020u) {
        ctx->pc = 0x397020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39701Cu;
        // 0x397020: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397024u;
        goto label_397024;
    }
    ctx->pc = 0x39701Cu;
    {
        const bool branch_taken_0x39701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39701Cu;
        // 0x397020: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39701c) {
            ctx->pc = 0x397158u;
            goto label_397158;
        }
    }
    ctx->pc = 0x397024u;
label_397024:
    // 0x397024: 0x0  nop
    ctx->pc = 0x397024u;
    // NOP
label_397028:
    // 0x397028: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x397028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39702c:
    // 0x39702c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397030:
    // 0x397030: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397034:
    if (ctx->pc == 0x397034u) {
        ctx->pc = 0x397034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397030u;
        // 0x397034: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397038u;
        goto label_397038;
    }
    ctx->pc = 0x397030u;
    {
        const bool branch_taken_0x397030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397030) {
            ctx->pc = 0x397034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397030u;
            // 0x397034: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397050u;
            goto label_397050;
        }
    }
    ctx->pc = 0x397038u;
label_397038:
    // 0x397038: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39703c:
    if (ctx->pc == 0x39703Cu) {
        ctx->pc = 0x39703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397038u;
        // 0x39703c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397040u;
        goto label_397040;
    }
    ctx->pc = 0x397038u;
    {
        const bool branch_taken_0x397038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397038) {
            ctx->pc = 0x39703Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397038u;
            // 0x39703c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397050u;
            goto label_397050;
        }
    }
    ctx->pc = 0x397040u;
label_397040:
    // 0x397040: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397044:
    // 0x397044: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397048:
    if (ctx->pc == 0x397048u) {
        ctx->pc = 0x397048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397044u;
        // 0x397048: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39704Cu;
        goto label_39704c;
    }
    ctx->pc = 0x397044u;
    {
        const bool branch_taken_0x397044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397044) {
            ctx->pc = 0x397048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397044u;
            // 0x397048: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397070u;
            goto label_397070;
        }
    }
    ctx->pc = 0x39704Cu;
label_39704c:
    // 0x39704c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397050:
    // 0x397050: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397054:
    if (ctx->pc == 0x397054u) {
        ctx->pc = 0x397054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397050u;
        // 0x397054: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397058u;
        goto label_397058;
    }
    ctx->pc = 0x397050u;
    {
        const bool branch_taken_0x397050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397050) {
            ctx->pc = 0x397054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397050u;
            // 0x397054: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397074u;
            goto label_397074;
        }
    }
    ctx->pc = 0x397058u;
label_397058:
    // 0x397058: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39705c:
    if (ctx->pc == 0x39705Cu) {
        ctx->pc = 0x39705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397058u;
        // 0x39705c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397060u;
        goto label_397060;
    }
    ctx->pc = 0x397058u;
    {
        const bool branch_taken_0x397058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397058) {
            ctx->pc = 0x39705Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397058u;
            // 0x39705c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397074u;
            goto label_397074;
        }
    }
    ctx->pc = 0x397060u;
label_397060:
    // 0x397060: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397064:
    // 0x397064: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397068:
    if (ctx->pc == 0x397068u) {
        ctx->pc = 0x397068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397064u;
        // 0x397068: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39706Cu;
        goto label_39706c;
    }
    ctx->pc = 0x397064u;
    {
        const bool branch_taken_0x397064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397064) {
            ctx->pc = 0x397068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397064u;
            // 0x397068: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397074u;
            goto label_397074;
        }
    }
    ctx->pc = 0x39706Cu;
label_39706c:
    // 0x39706c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39706cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397070:
    // 0x397070: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x397070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_397074:
    // 0x397074: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397078:
    // 0x397078: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39707c:
    if (ctx->pc == 0x39707Cu) {
        ctx->pc = 0x39707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397078u;
        // 0x39707c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397080u;
        goto label_397080;
    }
    ctx->pc = 0x397078u;
    {
        const bool branch_taken_0x397078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397078) {
            ctx->pc = 0x39707Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397078u;
            // 0x39707c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397098u;
            goto label_397098;
        }
    }
    ctx->pc = 0x397080u;
label_397080:
    // 0x397080: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397084:
    if (ctx->pc == 0x397084u) {
        ctx->pc = 0x397084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397080u;
        // 0x397084: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397088u;
        goto label_397088;
    }
    ctx->pc = 0x397080u;
    {
        const bool branch_taken_0x397080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397080) {
            ctx->pc = 0x397084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397080u;
            // 0x397084: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397098u;
            goto label_397098;
        }
    }
    ctx->pc = 0x397088u;
label_397088:
    // 0x397088: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39708c:
    // 0x39708c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397090:
    if (ctx->pc == 0x397090u) {
        ctx->pc = 0x397090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39708Cu;
        // 0x397090: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397094u;
        goto label_397094;
    }
    ctx->pc = 0x39708Cu;
    {
        const bool branch_taken_0x39708c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39708c) {
            ctx->pc = 0x397090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39708Cu;
            // 0x397090: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3970B8u;
            goto label_3970b8;
        }
    }
    ctx->pc = 0x397094u;
label_397094:
    // 0x397094: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397098:
    // 0x397098: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39709c:
    if (ctx->pc == 0x39709Cu) {
        ctx->pc = 0x39709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397098u;
        // 0x39709c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970A0u;
        goto label_3970a0;
    }
    ctx->pc = 0x397098u;
    {
        const bool branch_taken_0x397098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397098) {
            ctx->pc = 0x39709Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397098u;
            // 0x39709c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3970BCu;
            goto label_3970bc;
        }
    }
    ctx->pc = 0x3970A0u;
label_3970a0:
    // 0x3970a0: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3970a4:
    if (ctx->pc == 0x3970A4u) {
        ctx->pc = 0x3970A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970A0u;
        // 0x3970a4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970A8u;
        goto label_3970a8;
    }
    ctx->pc = 0x3970A0u;
    {
        const bool branch_taken_0x3970a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3970a0) {
            ctx->pc = 0x3970A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970A0u;
            // 0x3970a4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3970BCu;
            goto label_3970bc;
        }
    }
    ctx->pc = 0x3970A8u;
label_3970a8:
    // 0x3970a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3970a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3970ac:
    // 0x3970ac: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3970b0:
    if (ctx->pc == 0x3970B0u) {
        ctx->pc = 0x3970B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970ACu;
        // 0x3970b0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970B4u;
        goto label_3970b4;
    }
    ctx->pc = 0x3970ACu;
    {
        const bool branch_taken_0x3970ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970ac) {
            ctx->pc = 0x3970B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970ACu;
            // 0x3970b0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3970BCu;
            goto label_3970bc;
        }
    }
    ctx->pc = 0x3970B4u;
label_3970b4:
    // 0x3970b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3970b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3970b8:
    // 0x3970b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3970b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3970bc:
    // 0x3970bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3970bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3970c0:
    // 0x3970c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3970c4:
    if (ctx->pc == 0x3970C4u) {
        ctx->pc = 0x3970C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970C0u;
        // 0x3970c4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970C8u;
        goto label_3970c8;
    }
    ctx->pc = 0x3970C0u;
    {
        const bool branch_taken_0x3970c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970c0) {
            ctx->pc = 0x3970C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970C0u;
            // 0x3970c4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3970E0u;
            goto label_3970e0;
        }
    }
    ctx->pc = 0x3970C8u;
label_3970c8:
    // 0x3970c8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3970cc:
    if (ctx->pc == 0x3970CCu) {
        ctx->pc = 0x3970CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970C8u;
        // 0x3970cc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970D0u;
        goto label_3970d0;
    }
    ctx->pc = 0x3970C8u;
    {
        const bool branch_taken_0x3970c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3970c8) {
            ctx->pc = 0x3970CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970C8u;
            // 0x3970cc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3970E0u;
            goto label_3970e0;
        }
    }
    ctx->pc = 0x3970D0u;
label_3970d0:
    // 0x3970d0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3970d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3970d4:
    // 0x3970d4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3970d8:
    if (ctx->pc == 0x3970D8u) {
        ctx->pc = 0x3970D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970D4u;
        // 0x3970d8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970DCu;
        goto label_3970dc;
    }
    ctx->pc = 0x3970D4u;
    {
        const bool branch_taken_0x3970d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3970d4) {
            ctx->pc = 0x3970D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970D4u;
            // 0x3970d8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397100u;
            goto label_397100;
        }
    }
    ctx->pc = 0x3970DCu;
label_3970dc:
    // 0x3970dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3970dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3970e0:
    // 0x3970e0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3970e4:
    if (ctx->pc == 0x3970E4u) {
        ctx->pc = 0x3970E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970E0u;
        // 0x3970e4: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970E8u;
        goto label_3970e8;
    }
    ctx->pc = 0x3970E0u;
    {
        const bool branch_taken_0x3970e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970e0) {
            ctx->pc = 0x3970E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970E0u;
            // 0x3970e4: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397104u;
            goto label_397104;
        }
    }
    ctx->pc = 0x3970E8u;
label_3970e8:
    // 0x3970e8: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3970ec:
    if (ctx->pc == 0x3970ECu) {
        ctx->pc = 0x3970ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970E8u;
        // 0x3970ec: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970F0u;
        goto label_3970f0;
    }
    ctx->pc = 0x3970E8u;
    {
        const bool branch_taken_0x3970e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3970e8) {
            ctx->pc = 0x3970ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970E8u;
            // 0x3970ec: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397104u;
            goto label_397104;
        }
    }
    ctx->pc = 0x3970F0u;
label_3970f0:
    // 0x3970f0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3970f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3970f4:
    // 0x3970f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3970f8:
    if (ctx->pc == 0x3970F8u) {
        ctx->pc = 0x3970F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970F4u;
        // 0x3970f8: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3970FCu;
        goto label_3970fc;
    }
    ctx->pc = 0x3970F4u;
    {
        const bool branch_taken_0x3970f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3970f4) {
            ctx->pc = 0x3970F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3970F4u;
            // 0x3970f8: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397104u;
            goto label_397104;
        }
    }
    ctx->pc = 0x3970FCu;
label_3970fc:
    // 0x3970fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3970fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397100:
    // 0x397100: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x397100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_397104:
    // 0x397104: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397108:
    // 0x397108: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39710c:
    if (ctx->pc == 0x39710Cu) {
        ctx->pc = 0x39710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397108u;
        // 0x39710c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397110u;
        goto label_397110;
    }
    ctx->pc = 0x397108u;
    {
        const bool branch_taken_0x397108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397108) {
            ctx->pc = 0x39710Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397108u;
            // 0x39710c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397128u;
            goto label_397128;
        }
    }
    ctx->pc = 0x397110u;
label_397110:
    // 0x397110: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397114:
    if (ctx->pc == 0x397114u) {
        ctx->pc = 0x397114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397110u;
        // 0x397114: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397118u;
        goto label_397118;
    }
    ctx->pc = 0x397110u;
    {
        const bool branch_taken_0x397110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397110) {
            ctx->pc = 0x397114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397110u;
            // 0x397114: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397128u;
            goto label_397128;
        }
    }
    ctx->pc = 0x397118u;
label_397118:
    // 0x397118: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39711c:
    // 0x39711c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397120:
    if (ctx->pc == 0x397120u) {
        ctx->pc = 0x397120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39711Cu;
        // 0x397120: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397124u;
        goto label_397124;
    }
    ctx->pc = 0x39711Cu;
    {
        const bool branch_taken_0x39711c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39711c) {
            ctx->pc = 0x397120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39711Cu;
            // 0x397120: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397148u;
            goto label_397148;
        }
    }
    ctx->pc = 0x397124u;
label_397124:
    // 0x397124: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397128:
    // 0x397128: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39712c:
    if (ctx->pc == 0x39712Cu) {
        ctx->pc = 0x39712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397128u;
        // 0x39712c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397130u;
        goto label_397130;
    }
    ctx->pc = 0x397128u;
    {
        const bool branch_taken_0x397128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397128) {
            ctx->pc = 0x39712Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397128u;
            // 0x39712c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39714Cu;
            goto label_39714c;
        }
    }
    ctx->pc = 0x397130u;
label_397130:
    // 0x397130: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397134:
    if (ctx->pc == 0x397134u) {
        ctx->pc = 0x397134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397130u;
        // 0x397134: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397138u;
        goto label_397138;
    }
    ctx->pc = 0x397130u;
    {
        const bool branch_taken_0x397130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397130) {
            ctx->pc = 0x397134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397130u;
            // 0x397134: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39714Cu;
            goto label_39714c;
        }
    }
    ctx->pc = 0x397138u;
label_397138:
    // 0x397138: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39713c:
    // 0x39713c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397140:
    if (ctx->pc == 0x397140u) {
        ctx->pc = 0x397140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39713Cu;
        // 0x397140: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397144u;
        goto label_397144;
    }
    ctx->pc = 0x39713Cu;
    {
        const bool branch_taken_0x39713c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39713c) {
            ctx->pc = 0x397140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39713Cu;
            // 0x397140: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39714Cu;
            goto label_39714c;
        }
    }
    ctx->pc = 0x397144u;
label_397144:
    // 0x397144: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397148:
    // 0x397148: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x397148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39714c:
    // 0x39714c: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x39714cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_397150:
    // 0x397150: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_397154:
    if (ctx->pc == 0x397154u) {
        ctx->pc = 0x397154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397150u;
        // 0x397154: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397158u;
        goto label_397158;
    }
    ctx->pc = 0x397150u;
    {
        const bool branch_taken_0x397150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397150u;
        // 0x397154: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397150) {
            ctx->pc = 0x397028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397028;
        }
    }
    ctx->pc = 0x397158u;
label_397158:
    // 0x397158: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x397158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_39715c:
    // 0x39715c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x39715cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_397160:
    // 0x397160: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x397160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_397164:
    // 0x397164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397168:
    // 0x397168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x397168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39716c:
    // 0x39716c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39716cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397170:
    // 0x397170: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
label_397174:
    if (ctx->pc == 0x397174u) {
        ctx->pc = 0x397174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397170u;
        // 0x397174: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397178u;
        goto label_397178;
    }
    ctx->pc = 0x397170u;
    {
        const bool branch_taken_0x397170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x397174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397170u;
        // 0x397174: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397170) {
            ctx->pc = 0x3973D0u;
            goto label_3973d0;
        }
    }
    ctx->pc = 0x397178u;
label_397178:
    // 0x397178: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x397178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39717c:
    // 0x39717c: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x39717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_397180:
    // 0x397180: 0x19000031  blez        $t0, . + 4 + (0x31 << 2)
label_397184:
    if (ctx->pc == 0x397184u) {
        ctx->pc = 0x397184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397180u;
        // 0x397184: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x397188u;
        goto label_397188;
    }
    ctx->pc = 0x397180u;
    {
        const bool branch_taken_0x397180 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x397184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397180u;
        // 0x397184: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397180) {
            ctx->pc = 0x397248u;
            goto label_397248;
        }
    }
    ctx->pc = 0x397188u;
label_397188:
    // 0x397188: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
label_39718c:
    if (ctx->pc == 0x39718Cu) {
        ctx->pc = 0x39718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397188u;
        // 0x39718c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397190u;
        goto label_397190;
    }
    ctx->pc = 0x397188u;
    {
        const bool branch_taken_0x397188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x397188) {
            ctx->pc = 0x39718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397188u;
            // 0x39718c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972A4u;
            goto label_3972a4;
        }
    }
    ctx->pc = 0x397190u;
label_397190:
    // 0x397190: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x397190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_397194:
    // 0x397194: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_397198:
    if (ctx->pc == 0x397198u) {
        ctx->pc = 0x397198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397194u;
        // 0x397198: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39719Cu;
        goto label_39719c;
    }
    ctx->pc = 0x397194u;
    {
        const bool branch_taken_0x397194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397194) {
            ctx->pc = 0x397198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397194u;
            // 0x397198: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39724Cu;
            goto label_39724c;
        }
    }
    ctx->pc = 0x39719Cu;
label_39719c:
    // 0x39719c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39719cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3971a0:
    // 0x3971a0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3971a4:
    if (ctx->pc == 0x3971A4u) {
        ctx->pc = 0x3971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971A0u;
        // 0x3971a4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971A8u;
        goto label_3971a8;
    }
    ctx->pc = 0x3971A0u;
    {
        const bool branch_taken_0x3971a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3971a0) {
            ctx->pc = 0x3971A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971A0u;
            // 0x3971a4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971FCu;
            goto label_3971fc;
        }
    }
    ctx->pc = 0x3971A8u;
label_3971a8:
    // 0x3971a8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3971a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3971ac:
    // 0x3971ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3971acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3971b0:
    // 0x3971b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3971b4:
    if (ctx->pc == 0x3971B4u) {
        ctx->pc = 0x3971B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971B0u;
        // 0x3971b4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971B8u;
        goto label_3971b8;
    }
    ctx->pc = 0x3971B0u;
    {
        const bool branch_taken_0x3971b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971b0) {
            ctx->pc = 0x3971B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971B0u;
            // 0x3971b4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971D0u;
            goto label_3971d0;
        }
    }
    ctx->pc = 0x3971B8u;
label_3971b8:
    // 0x3971b8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3971bc:
    if (ctx->pc == 0x3971BCu) {
        ctx->pc = 0x3971BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971B8u;
        // 0x3971bc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971C0u;
        goto label_3971c0;
    }
    ctx->pc = 0x3971B8u;
    {
        const bool branch_taken_0x3971b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3971b8) {
            ctx->pc = 0x3971BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971B8u;
            // 0x3971bc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971D0u;
            goto label_3971d0;
        }
    }
    ctx->pc = 0x3971C0u;
label_3971c0:
    // 0x3971c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3971c4:
    // 0x3971c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3971c8:
    if (ctx->pc == 0x3971C8u) {
        ctx->pc = 0x3971C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971C4u;
        // 0x3971c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971CCu;
        goto label_3971cc;
    }
    ctx->pc = 0x3971C4u;
    {
        const bool branch_taken_0x3971c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3971c4) {
            ctx->pc = 0x3971C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971C4u;
            // 0x3971c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971F0u;
            goto label_3971f0;
        }
    }
    ctx->pc = 0x3971CCu;
label_3971cc:
    // 0x3971cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3971ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3971d0:
    // 0x3971d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3971d4:
    if (ctx->pc == 0x3971D4u) {
        ctx->pc = 0x3971D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971D0u;
        // 0x3971d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971D8u;
        goto label_3971d8;
    }
    ctx->pc = 0x3971D0u;
    {
        const bool branch_taken_0x3971d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971d0) {
            ctx->pc = 0x3971D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971D0u;
            // 0x3971d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971F4u;
            goto label_3971f4;
        }
    }
    ctx->pc = 0x3971D8u;
label_3971d8:
    // 0x3971d8: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3971dc:
    if (ctx->pc == 0x3971DCu) {
        ctx->pc = 0x3971DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971D8u;
        // 0x3971dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971E0u;
        goto label_3971e0;
    }
    ctx->pc = 0x3971D8u;
    {
        const bool branch_taken_0x3971d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3971d8) {
            ctx->pc = 0x3971DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971D8u;
            // 0x3971dc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971F4u;
            goto label_3971f4;
        }
    }
    ctx->pc = 0x3971E0u;
label_3971e0:
    // 0x3971e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3971e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3971e4:
    // 0x3971e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3971e8:
    if (ctx->pc == 0x3971E8u) {
        ctx->pc = 0x3971E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971E4u;
        // 0x3971e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3971ECu;
        goto label_3971ec;
    }
    ctx->pc = 0x3971E4u;
    {
        const bool branch_taken_0x3971e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971e4) {
            ctx->pc = 0x3971E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3971E4u;
            // 0x3971e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3971F4u;
            goto label_3971f4;
        }
    }
    ctx->pc = 0x3971ECu;
label_3971ec:
    // 0x3971ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3971ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3971f0:
    // 0x3971f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3971f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3971f4:
    // 0x3971f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3971f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3971f8:
    // 0x3971f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3971f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3971fc:
    // 0x3971fc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397200:
    // 0x397200: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397204:
    if (ctx->pc == 0x397204u) {
        ctx->pc = 0x397204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397200u;
        // 0x397204: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397208u;
        goto label_397208;
    }
    ctx->pc = 0x397200u;
    {
        const bool branch_taken_0x397200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397200) {
            ctx->pc = 0x397204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397200u;
            // 0x397204: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397220u;
            goto label_397220;
        }
    }
    ctx->pc = 0x397208u;
label_397208:
    // 0x397208: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39720c:
    if (ctx->pc == 0x39720Cu) {
        ctx->pc = 0x39720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397208u;
        // 0x39720c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397210u;
        goto label_397210;
    }
    ctx->pc = 0x397208u;
    {
        const bool branch_taken_0x397208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397208) {
            ctx->pc = 0x39720Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397208u;
            // 0x39720c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397220u;
            goto label_397220;
        }
    }
    ctx->pc = 0x397210u;
label_397210:
    // 0x397210: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397214:
    // 0x397214: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397218:
    if (ctx->pc == 0x397218u) {
        ctx->pc = 0x397218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397214u;
        // 0x397218: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39721Cu;
        goto label_39721c;
    }
    ctx->pc = 0x397214u;
    {
        const bool branch_taken_0x397214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397214) {
            ctx->pc = 0x397218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397214u;
            // 0x397218: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397240u;
            goto label_397240;
        }
    }
    ctx->pc = 0x39721Cu;
label_39721c:
    // 0x39721c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397220:
    // 0x397220: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397224:
    if (ctx->pc == 0x397224u) {
        ctx->pc = 0x397224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397220u;
        // 0x397224: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397228u;
        goto label_397228;
    }
    ctx->pc = 0x397220u;
    {
        const bool branch_taken_0x397220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397220) {
            ctx->pc = 0x397224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397220u;
            // 0x397224: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397244u;
            goto label_397244;
        }
    }
    ctx->pc = 0x397228u;
label_397228:
    // 0x397228: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39722c:
    if (ctx->pc == 0x39722Cu) {
        ctx->pc = 0x39722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397228u;
        // 0x39722c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397230u;
        goto label_397230;
    }
    ctx->pc = 0x397228u;
    {
        const bool branch_taken_0x397228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397228) {
            ctx->pc = 0x39722Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397228u;
            // 0x39722c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397244u;
            goto label_397244;
        }
    }
    ctx->pc = 0x397230u;
label_397230:
    // 0x397230: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397234:
    // 0x397234: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397238:
    if (ctx->pc == 0x397238u) {
        ctx->pc = 0x397238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397234u;
        // 0x397238: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39723Cu;
        goto label_39723c;
    }
    ctx->pc = 0x397234u;
    {
        const bool branch_taken_0x397234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397234) {
            ctx->pc = 0x397238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397234u;
            // 0x397238: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397244u;
            goto label_397244;
        }
    }
    ctx->pc = 0x39723Cu;
label_39723c:
    // 0x39723c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39723cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397240:
    // 0x397240: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x397240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_397244:
    // 0x397244: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_397248:
    // 0x397248: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x397248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39724c:
    // 0x39724c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397250:
    // 0x397250: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397254:
    if (ctx->pc == 0x397254u) {
        ctx->pc = 0x397254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397250u;
        // 0x397254: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397258u;
        goto label_397258;
    }
    ctx->pc = 0x397250u;
    {
        const bool branch_taken_0x397250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397250) {
            ctx->pc = 0x397254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397250u;
            // 0x397254: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397270u;
            goto label_397270;
        }
    }
    ctx->pc = 0x397258u;
label_397258:
    // 0x397258: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39725c:
    if (ctx->pc == 0x39725Cu) {
        ctx->pc = 0x39725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397258u;
        // 0x39725c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397260u;
        goto label_397260;
    }
    ctx->pc = 0x397258u;
    {
        const bool branch_taken_0x397258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397258) {
            ctx->pc = 0x39725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397258u;
            // 0x39725c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397270u;
            goto label_397270;
        }
    }
    ctx->pc = 0x397260u;
label_397260:
    // 0x397260: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397264:
    // 0x397264: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397268:
    if (ctx->pc == 0x397268u) {
        ctx->pc = 0x397268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397264u;
        // 0x397268: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39726Cu;
        goto label_39726c;
    }
    ctx->pc = 0x397264u;
    {
        const bool branch_taken_0x397264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397264) {
            ctx->pc = 0x397268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397264u;
            // 0x397268: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397290u;
            goto label_397290;
        }
    }
    ctx->pc = 0x39726Cu;
label_39726c:
    // 0x39726c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397270:
    // 0x397270: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397274:
    if (ctx->pc == 0x397274u) {
        ctx->pc = 0x397274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397270u;
        // 0x397274: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397278u;
        goto label_397278;
    }
    ctx->pc = 0x397270u;
    {
        const bool branch_taken_0x397270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397270) {
            ctx->pc = 0x397274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397270u;
            // 0x397274: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397294u;
            goto label_397294;
        }
    }
    ctx->pc = 0x397278u;
label_397278:
    // 0x397278: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39727c:
    if (ctx->pc == 0x39727Cu) {
        ctx->pc = 0x39727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397278u;
        // 0x39727c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397280u;
        goto label_397280;
    }
    ctx->pc = 0x397278u;
    {
        const bool branch_taken_0x397278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397278) {
            ctx->pc = 0x39727Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397278u;
            // 0x39727c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397294u;
            goto label_397294;
        }
    }
    ctx->pc = 0x397280u;
label_397280:
    // 0x397280: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397284:
    // 0x397284: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397288:
    if (ctx->pc == 0x397288u) {
        ctx->pc = 0x397288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397284u;
        // 0x397288: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39728Cu;
        goto label_39728c;
    }
    ctx->pc = 0x397284u;
    {
        const bool branch_taken_0x397284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397284) {
            ctx->pc = 0x397288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397284u;
            // 0x397288: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397294u;
            goto label_397294;
        }
    }
    ctx->pc = 0x39728Cu;
label_39728c:
    // 0x39728c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397290:
    // 0x397290: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_397294:
    // 0x397294: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x397294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_397298:
    // 0x397298: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_39729c:
    if (ctx->pc == 0x39729Cu) {
        ctx->pc = 0x39729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397298u;
        // 0x39729c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972A0u;
        goto label_3972a0;
    }
    ctx->pc = 0x397298u;
    {
        const bool branch_taken_0x397298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397298u;
        // 0x39729c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397298) {
            ctx->pc = 0x3973D0u;
            goto label_3973d0;
        }
    }
    ctx->pc = 0x3972A0u;
label_3972a0:
    // 0x3972a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3972a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3972a4:
    // 0x3972a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3972a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3972a8:
    // 0x3972a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3972ac:
    if (ctx->pc == 0x3972ACu) {
        ctx->pc = 0x3972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972A8u;
        // 0x3972ac: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972B0u;
        goto label_3972b0;
    }
    ctx->pc = 0x3972A8u;
    {
        const bool branch_taken_0x3972a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3972a8) {
            ctx->pc = 0x3972ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972A8u;
            // 0x3972ac: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972C8u;
            goto label_3972c8;
        }
    }
    ctx->pc = 0x3972B0u;
label_3972b0:
    // 0x3972b0: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3972b4:
    if (ctx->pc == 0x3972B4u) {
        ctx->pc = 0x3972B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972B0u;
        // 0x3972b4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972B8u;
        goto label_3972b8;
    }
    ctx->pc = 0x3972B0u;
    {
        const bool branch_taken_0x3972b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3972b0) {
            ctx->pc = 0x3972B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972B0u;
            // 0x3972b4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972C8u;
            goto label_3972c8;
        }
    }
    ctx->pc = 0x3972B8u;
label_3972b8:
    // 0x3972b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3972b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3972bc:
    // 0x3972bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3972c0:
    if (ctx->pc == 0x3972C0u) {
        ctx->pc = 0x3972C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972BCu;
        // 0x3972c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972C4u;
        goto label_3972c4;
    }
    ctx->pc = 0x3972BCu;
    {
        const bool branch_taken_0x3972bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3972bc) {
            ctx->pc = 0x3972C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972BCu;
            // 0x3972c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972E8u;
            goto label_3972e8;
        }
    }
    ctx->pc = 0x3972C4u;
label_3972c4:
    // 0x3972c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3972c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3972c8:
    // 0x3972c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3972cc:
    if (ctx->pc == 0x3972CCu) {
        ctx->pc = 0x3972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972C8u;
        // 0x3972cc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972D0u;
        goto label_3972d0;
    }
    ctx->pc = 0x3972C8u;
    {
        const bool branch_taken_0x3972c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3972c8) {
            ctx->pc = 0x3972CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972C8u;
            // 0x3972cc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972ECu;
            goto label_3972ec;
        }
    }
    ctx->pc = 0x3972D0u;
label_3972d0:
    // 0x3972d0: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3972d4:
    if (ctx->pc == 0x3972D4u) {
        ctx->pc = 0x3972D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972D0u;
        // 0x3972d4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972D8u;
        goto label_3972d8;
    }
    ctx->pc = 0x3972D0u;
    {
        const bool branch_taken_0x3972d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3972d0) {
            ctx->pc = 0x3972D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972D0u;
            // 0x3972d4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972ECu;
            goto label_3972ec;
        }
    }
    ctx->pc = 0x3972D8u;
label_3972d8:
    // 0x3972d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3972d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3972dc:
    // 0x3972dc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3972e0:
    if (ctx->pc == 0x3972E0u) {
        ctx->pc = 0x3972E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972DCu;
        // 0x3972e0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972E4u;
        goto label_3972e4;
    }
    ctx->pc = 0x3972DCu;
    {
        const bool branch_taken_0x3972dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3972dc) {
            ctx->pc = 0x3972E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972DCu;
            // 0x3972e0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3972ECu;
            goto label_3972ec;
        }
    }
    ctx->pc = 0x3972E4u;
label_3972e4:
    // 0x3972e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3972e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3972e8:
    // 0x3972e8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3972e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3972ec:
    // 0x3972ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3972ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3972f0:
    // 0x3972f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3972f4:
    if (ctx->pc == 0x3972F4u) {
        ctx->pc = 0x3972F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972F0u;
        // 0x3972f4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972F8u;
        goto label_3972f8;
    }
    ctx->pc = 0x3972F0u;
    {
        const bool branch_taken_0x3972f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3972f0) {
            ctx->pc = 0x3972F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972F0u;
            // 0x3972f4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397310u;
            goto label_397310;
        }
    }
    ctx->pc = 0x3972F8u;
label_3972f8:
    // 0x3972f8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3972fc:
    if (ctx->pc == 0x3972FCu) {
        ctx->pc = 0x3972FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972F8u;
        // 0x3972fc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397300u;
        goto label_397300;
    }
    ctx->pc = 0x3972F8u;
    {
        const bool branch_taken_0x3972f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3972f8) {
            ctx->pc = 0x3972FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3972F8u;
            // 0x3972fc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397310u;
            goto label_397310;
        }
    }
    ctx->pc = 0x397300u;
label_397300:
    // 0x397300: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397304:
    // 0x397304: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397308:
    if (ctx->pc == 0x397308u) {
        ctx->pc = 0x397308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397304u;
        // 0x397308: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39730Cu;
        goto label_39730c;
    }
    ctx->pc = 0x397304u;
    {
        const bool branch_taken_0x397304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397304) {
            ctx->pc = 0x397308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397304u;
            // 0x397308: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397330u;
            goto label_397330;
        }
    }
    ctx->pc = 0x39730Cu;
label_39730c:
    // 0x39730c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397310:
    // 0x397310: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397314:
    if (ctx->pc == 0x397314u) {
        ctx->pc = 0x397314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397310u;
        // 0x397314: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397318u;
        goto label_397318;
    }
    ctx->pc = 0x397310u;
    {
        const bool branch_taken_0x397310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397310) {
            ctx->pc = 0x397314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397310u;
            // 0x397314: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397334u;
            goto label_397334;
        }
    }
    ctx->pc = 0x397318u;
label_397318:
    // 0x397318: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39731c:
    if (ctx->pc == 0x39731Cu) {
        ctx->pc = 0x39731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397318u;
        // 0x39731c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397320u;
        goto label_397320;
    }
    ctx->pc = 0x397318u;
    {
        const bool branch_taken_0x397318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397318) {
            ctx->pc = 0x39731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397318u;
            // 0x39731c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397334u;
            goto label_397334;
        }
    }
    ctx->pc = 0x397320u;
label_397320:
    // 0x397320: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397324:
    // 0x397324: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397328:
    if (ctx->pc == 0x397328u) {
        ctx->pc = 0x397328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397324u;
        // 0x397328: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39732Cu;
        goto label_39732c;
    }
    ctx->pc = 0x397324u;
    {
        const bool branch_taken_0x397324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397324) {
            ctx->pc = 0x397328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397324u;
            // 0x397328: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397334u;
            goto label_397334;
        }
    }
    ctx->pc = 0x39732Cu;
label_39732c:
    // 0x39732c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39732cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397330:
    // 0x397330: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x397330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_397334:
    // 0x397334: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397338:
    // 0x397338: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39733c:
    if (ctx->pc == 0x39733Cu) {
        ctx->pc = 0x39733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397338u;
        // 0x39733c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397340u;
        goto label_397340;
    }
    ctx->pc = 0x397338u;
    {
        const bool branch_taken_0x397338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397338) {
            ctx->pc = 0x39733Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397338u;
            // 0x39733c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397358u;
            goto label_397358;
        }
    }
    ctx->pc = 0x397340u;
label_397340:
    // 0x397340: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397344:
    if (ctx->pc == 0x397344u) {
        ctx->pc = 0x397344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397340u;
        // 0x397344: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397348u;
        goto label_397348;
    }
    ctx->pc = 0x397340u;
    {
        const bool branch_taken_0x397340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397340) {
            ctx->pc = 0x397344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397340u;
            // 0x397344: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397358u;
            goto label_397358;
        }
    }
    ctx->pc = 0x397348u;
label_397348:
    // 0x397348: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39734c:
    // 0x39734c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397350:
    if (ctx->pc == 0x397350u) {
        ctx->pc = 0x397350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39734Cu;
        // 0x397350: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397354u;
        goto label_397354;
    }
    ctx->pc = 0x39734Cu;
    {
        const bool branch_taken_0x39734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39734c) {
            ctx->pc = 0x397350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39734Cu;
            // 0x397350: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397378u;
            goto label_397378;
        }
    }
    ctx->pc = 0x397354u;
label_397354:
    // 0x397354: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397358:
    // 0x397358: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39735c:
    if (ctx->pc == 0x39735Cu) {
        ctx->pc = 0x39735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397358u;
        // 0x39735c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397360u;
        goto label_397360;
    }
    ctx->pc = 0x397358u;
    {
        const bool branch_taken_0x397358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397358) {
            ctx->pc = 0x39735Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397358u;
            // 0x39735c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39737Cu;
            goto label_39737c;
        }
    }
    ctx->pc = 0x397360u;
label_397360:
    // 0x397360: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397364:
    if (ctx->pc == 0x397364u) {
        ctx->pc = 0x397364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397360u;
        // 0x397364: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397368u;
        goto label_397368;
    }
    ctx->pc = 0x397360u;
    {
        const bool branch_taken_0x397360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397360) {
            ctx->pc = 0x397364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397360u;
            // 0x397364: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39737Cu;
            goto label_39737c;
        }
    }
    ctx->pc = 0x397368u;
label_397368:
    // 0x397368: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39736c:
    // 0x39736c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397370:
    if (ctx->pc == 0x397370u) {
        ctx->pc = 0x397370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39736Cu;
        // 0x397370: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397374u;
        goto label_397374;
    }
    ctx->pc = 0x39736Cu;
    {
        const bool branch_taken_0x39736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39736c) {
            ctx->pc = 0x397370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39736Cu;
            // 0x397370: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39737Cu;
            goto label_39737c;
        }
    }
    ctx->pc = 0x397374u;
label_397374:
    // 0x397374: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397378:
    // 0x397378: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x397378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_39737c:
    // 0x39737c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397380:
    // 0x397380: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397384:
    if (ctx->pc == 0x397384u) {
        ctx->pc = 0x397384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397380u;
        // 0x397384: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397388u;
        goto label_397388;
    }
    ctx->pc = 0x397380u;
    {
        const bool branch_taken_0x397380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397380) {
            ctx->pc = 0x397384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397380u;
            // 0x397384: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973A0u;
            goto label_3973a0;
        }
    }
    ctx->pc = 0x397388u;
label_397388:
    // 0x397388: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39738c:
    if (ctx->pc == 0x39738Cu) {
        ctx->pc = 0x39738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397388u;
        // 0x39738c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397390u;
        goto label_397390;
    }
    ctx->pc = 0x397388u;
    {
        const bool branch_taken_0x397388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397388) {
            ctx->pc = 0x39738Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397388u;
            // 0x39738c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973A0u;
            goto label_3973a0;
        }
    }
    ctx->pc = 0x397390u;
label_397390:
    // 0x397390: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397394:
    // 0x397394: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397398:
    if (ctx->pc == 0x397398u) {
        ctx->pc = 0x397398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397394u;
        // 0x397398: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39739Cu;
        goto label_39739c;
    }
    ctx->pc = 0x397394u;
    {
        const bool branch_taken_0x397394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397394) {
            ctx->pc = 0x397398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397394u;
            // 0x397398: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973C0u;
            goto label_3973c0;
        }
    }
    ctx->pc = 0x39739Cu;
label_39739c:
    // 0x39739c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3973a0:
    // 0x3973a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3973a4:
    if (ctx->pc == 0x3973A4u) {
        ctx->pc = 0x3973A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973A0u;
        // 0x3973a4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3973A8u;
        goto label_3973a8;
    }
    ctx->pc = 0x3973A0u;
    {
        const bool branch_taken_0x3973a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3973a0) {
            ctx->pc = 0x3973A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3973A0u;
            // 0x3973a4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973C4u;
            goto label_3973c4;
        }
    }
    ctx->pc = 0x3973A8u;
label_3973a8:
    // 0x3973a8: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3973ac:
    if (ctx->pc == 0x3973ACu) {
        ctx->pc = 0x3973ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973A8u;
        // 0x3973ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3973B0u;
        goto label_3973b0;
    }
    ctx->pc = 0x3973A8u;
    {
        const bool branch_taken_0x3973a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3973a8) {
            ctx->pc = 0x3973ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3973A8u;
            // 0x3973ac: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973C4u;
            goto label_3973c4;
        }
    }
    ctx->pc = 0x3973B0u;
label_3973b0:
    // 0x3973b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3973b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3973b4:
    // 0x3973b4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3973b8:
    if (ctx->pc == 0x3973B8u) {
        ctx->pc = 0x3973B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973B4u;
        // 0x3973b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3973BCu;
        goto label_3973bc;
    }
    ctx->pc = 0x3973B4u;
    {
        const bool branch_taken_0x3973b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3973b4) {
            ctx->pc = 0x3973B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3973B4u;
            // 0x3973b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3973C4u;
            goto label_3973c4;
        }
    }
    ctx->pc = 0x3973BCu;
label_3973bc:
    // 0x3973bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3973bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3973c0:
    // 0x3973c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3973c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3973c4:
    // 0x3973c4: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x3973c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3973c8:
    // 0x3973c8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_3973cc:
    if (ctx->pc == 0x3973CCu) {
        ctx->pc = 0x3973CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973C8u;
        // 0x3973cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3973D0u;
        goto label_3973d0;
    }
    ctx->pc = 0x3973C8u;
    {
        const bool branch_taken_0x3973c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3973CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973C8u;
        // 0x3973cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973c8) {
            ctx->pc = 0x3972A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3972a0;
        }
    }
    ctx->pc = 0x3973D0u;
label_3973d0:
    // 0x3973d0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3973d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3973d4:
    // 0x3973d4: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3973d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3973d8:
    // 0x3973d8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3973d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3973dc:
    // 0x3973dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3973dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3973e0:
    // 0x3973e0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3973e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_3973e4:
    // 0x3973e4: 0x10a00098  beqz        $a1, . + 4 + (0x98 << 2)
label_3973e8:
    if (ctx->pc == 0x3973E8u) {
        ctx->pc = 0x3973E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973E4u;
        // 0x3973e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3973ECu;
        goto label_3973ec;
    }
    ctx->pc = 0x3973E4u;
    {
        const bool branch_taken_0x3973e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3973E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973E4u;
        // 0x3973e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973e4) {
            ctx->pc = 0x397648u;
            goto label_397648;
        }
    }
    ctx->pc = 0x3973ECu;
label_3973ec:
    // 0x3973ec: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3973ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3973f0:
    // 0x3973f0: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x3973f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_3973f4:
    // 0x3973f4: 0x19000031  blez        $t0, . + 4 + (0x31 << 2)
label_3973f8:
    if (ctx->pc == 0x3973F8u) {
        ctx->pc = 0x3973F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973F4u;
        // 0x3973f8: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3973FCu;
        goto label_3973fc;
    }
    ctx->pc = 0x3973F4u;
    {
        const bool branch_taken_0x3973f4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3973F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973F4u;
        // 0x3973f8: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973f4) {
            ctx->pc = 0x3974BCu;
            goto label_3974bc;
        }
    }
    ctx->pc = 0x3973FCu;
label_3973fc:
    // 0x3973fc: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
label_397400:
    if (ctx->pc == 0x397400u) {
        ctx->pc = 0x397400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973FCu;
        // 0x397400: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397404u;
        goto label_397404;
    }
    ctx->pc = 0x3973FCu;
    {
        const bool branch_taken_0x3973fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3973fc) {
            ctx->pc = 0x397400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3973FCu;
            // 0x397400: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39751Cu;
            goto label_39751c;
        }
    }
    ctx->pc = 0x397404u;
label_397404:
    // 0x397404: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x397404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_397408:
    // 0x397408: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_39740c:
    if (ctx->pc == 0x39740Cu) {
        ctx->pc = 0x39740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397408u;
        // 0x39740c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397410u;
        goto label_397410;
    }
    ctx->pc = 0x397408u;
    {
        const bool branch_taken_0x397408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397408) {
            ctx->pc = 0x39740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397408u;
            // 0x39740c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974C0u;
            goto label_3974c0;
        }
    }
    ctx->pc = 0x397410u;
label_397410:
    // 0x397410: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x397410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_397414:
    // 0x397414: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_397418:
    if (ctx->pc == 0x397418u) {
        ctx->pc = 0x397418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397414u;
        // 0x397418: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39741Cu;
        goto label_39741c;
    }
    ctx->pc = 0x397414u;
    {
        const bool branch_taken_0x397414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397414) {
            ctx->pc = 0x397418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397414u;
            // 0x397418: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397470u;
            goto label_397470;
        }
    }
    ctx->pc = 0x39741Cu;
label_39741c:
    // 0x39741c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x39741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_397420:
    // 0x397420: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397424:
    // 0x397424: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397428:
    if (ctx->pc == 0x397428u) {
        ctx->pc = 0x397428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397424u;
        // 0x397428: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39742Cu;
        goto label_39742c;
    }
    ctx->pc = 0x397424u;
    {
        const bool branch_taken_0x397424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397424) {
            ctx->pc = 0x397428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397424u;
            // 0x397428: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397444u;
            goto label_397444;
        }
    }
    ctx->pc = 0x39742Cu;
label_39742c:
    // 0x39742c: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397430:
    if (ctx->pc == 0x397430u) {
        ctx->pc = 0x397430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39742Cu;
        // 0x397430: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397434u;
        goto label_397434;
    }
    ctx->pc = 0x39742Cu;
    {
        const bool branch_taken_0x39742c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39742c) {
            ctx->pc = 0x397430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39742Cu;
            // 0x397430: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397444u;
            goto label_397444;
        }
    }
    ctx->pc = 0x397434u;
label_397434:
    // 0x397434: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397438:
    // 0x397438: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_39743c:
    if (ctx->pc == 0x39743Cu) {
        ctx->pc = 0x39743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397438u;
        // 0x39743c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397440u;
        goto label_397440;
    }
    ctx->pc = 0x397438u;
    {
        const bool branch_taken_0x397438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397438) {
            ctx->pc = 0x39743Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397438u;
            // 0x39743c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397464u;
            goto label_397464;
        }
    }
    ctx->pc = 0x397440u;
label_397440:
    // 0x397440: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397444:
    // 0x397444: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397448:
    if (ctx->pc == 0x397448u) {
        ctx->pc = 0x397448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397444u;
        // 0x397448: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39744Cu;
        goto label_39744c;
    }
    ctx->pc = 0x397444u;
    {
        const bool branch_taken_0x397444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397444) {
            ctx->pc = 0x397448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397444u;
            // 0x397448: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397468u;
            goto label_397468;
        }
    }
    ctx->pc = 0x39744Cu;
label_39744c:
    // 0x39744c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397450:
    if (ctx->pc == 0x397450u) {
        ctx->pc = 0x397450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39744Cu;
        // 0x397450: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397454u;
        goto label_397454;
    }
    ctx->pc = 0x39744Cu;
    {
        const bool branch_taken_0x39744c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39744c) {
            ctx->pc = 0x397450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39744Cu;
            // 0x397450: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397468u;
            goto label_397468;
        }
    }
    ctx->pc = 0x397454u;
label_397454:
    // 0x397454: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397458:
    // 0x397458: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_39745c:
    if (ctx->pc == 0x39745Cu) {
        ctx->pc = 0x39745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397458u;
        // 0x39745c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397460u;
        goto label_397460;
    }
    ctx->pc = 0x397458u;
    {
        const bool branch_taken_0x397458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397458) {
            ctx->pc = 0x39745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397458u;
            // 0x39745c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397468u;
            goto label_397468;
        }
    }
    ctx->pc = 0x397460u;
label_397460:
    // 0x397460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397464:
    // 0x397464: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x397464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_397468:
    // 0x397468: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_39746c:
    // 0x39746c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_397470:
    // 0x397470: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397474:
    // 0x397474: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397478:
    if (ctx->pc == 0x397478u) {
        ctx->pc = 0x397478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397474u;
        // 0x397478: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39747Cu;
        goto label_39747c;
    }
    ctx->pc = 0x397474u;
    {
        const bool branch_taken_0x397474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397474) {
            ctx->pc = 0x397478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397474u;
            // 0x397478: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397494u;
            goto label_397494;
        }
    }
    ctx->pc = 0x39747Cu;
label_39747c:
    // 0x39747c: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397480:
    if (ctx->pc == 0x397480u) {
        ctx->pc = 0x397480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39747Cu;
        // 0x397480: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397484u;
        goto label_397484;
    }
    ctx->pc = 0x39747Cu;
    {
        const bool branch_taken_0x39747c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39747c) {
            ctx->pc = 0x397480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39747Cu;
            // 0x397480: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397494u;
            goto label_397494;
        }
    }
    ctx->pc = 0x397484u;
label_397484:
    // 0x397484: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397488:
    // 0x397488: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_39748c:
    if (ctx->pc == 0x39748Cu) {
        ctx->pc = 0x39748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397488u;
        // 0x39748c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397490u;
        goto label_397490;
    }
    ctx->pc = 0x397488u;
    {
        const bool branch_taken_0x397488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397488) {
            ctx->pc = 0x39748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397488u;
            // 0x39748c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974B4u;
            goto label_3974b4;
        }
    }
    ctx->pc = 0x397490u;
label_397490:
    // 0x397490: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397494:
    // 0x397494: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397498:
    if (ctx->pc == 0x397498u) {
        ctx->pc = 0x397498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397494u;
        // 0x397498: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39749Cu;
        goto label_39749c;
    }
    ctx->pc = 0x397494u;
    {
        const bool branch_taken_0x397494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397494) {
            ctx->pc = 0x397498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397494u;
            // 0x397498: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974B8u;
            goto label_3974b8;
        }
    }
    ctx->pc = 0x39749Cu;
label_39749c:
    // 0x39749c: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3974a0:
    if (ctx->pc == 0x3974A0u) {
        ctx->pc = 0x3974A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39749Cu;
        // 0x3974a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974A4u;
        goto label_3974a4;
    }
    ctx->pc = 0x39749Cu;
    {
        const bool branch_taken_0x39749c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x39749c) {
            ctx->pc = 0x3974A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39749Cu;
            // 0x3974a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974B8u;
            goto label_3974b8;
        }
    }
    ctx->pc = 0x3974A4u;
label_3974a4:
    // 0x3974a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3974a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3974a8:
    // 0x3974a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3974ac:
    if (ctx->pc == 0x3974ACu) {
        ctx->pc = 0x3974ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974A8u;
        // 0x3974ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974B0u;
        goto label_3974b0;
    }
    ctx->pc = 0x3974A8u;
    {
        const bool branch_taken_0x3974a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3974a8) {
            ctx->pc = 0x3974ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974A8u;
            // 0x3974ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974B8u;
            goto label_3974b8;
        }
    }
    ctx->pc = 0x3974B0u;
label_3974b0:
    // 0x3974b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3974b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3974b4:
    // 0x3974b4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3974b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3974b8:
    // 0x3974b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3974b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3974bc:
    // 0x3974bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3974bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3974c0:
    // 0x3974c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3974c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3974c4:
    // 0x3974c4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3974c8:
    if (ctx->pc == 0x3974C8u) {
        ctx->pc = 0x3974C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974C4u;
        // 0x3974c8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974CCu;
        goto label_3974cc;
    }
    ctx->pc = 0x3974C4u;
    {
        const bool branch_taken_0x3974c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3974c4) {
            ctx->pc = 0x3974C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974C4u;
            // 0x3974c8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974E4u;
            goto label_3974e4;
        }
    }
    ctx->pc = 0x3974CCu;
label_3974cc:
    // 0x3974cc: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3974d0:
    if (ctx->pc == 0x3974D0u) {
        ctx->pc = 0x3974D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974CCu;
        // 0x3974d0: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974D4u;
        goto label_3974d4;
    }
    ctx->pc = 0x3974CCu;
    {
        const bool branch_taken_0x3974cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3974cc) {
            ctx->pc = 0x3974D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974CCu;
            // 0x3974d0: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974E4u;
            goto label_3974e4;
        }
    }
    ctx->pc = 0x3974D4u;
label_3974d4:
    // 0x3974d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3974d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3974d8:
    // 0x3974d8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3974dc:
    if (ctx->pc == 0x3974DCu) {
        ctx->pc = 0x3974DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974D8u;
        // 0x3974dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974E0u;
        goto label_3974e0;
    }
    ctx->pc = 0x3974D8u;
    {
        const bool branch_taken_0x3974d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3974d8) {
            ctx->pc = 0x3974DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974D8u;
            // 0x3974dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397504u;
            goto label_397504;
        }
    }
    ctx->pc = 0x3974E0u;
label_3974e0:
    // 0x3974e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3974e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3974e4:
    // 0x3974e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3974e8:
    if (ctx->pc == 0x3974E8u) {
        ctx->pc = 0x3974E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974E4u;
        // 0x3974e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974ECu;
        goto label_3974ec;
    }
    ctx->pc = 0x3974E4u;
    {
        const bool branch_taken_0x3974e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3974e4) {
            ctx->pc = 0x3974E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974E4u;
            // 0x3974e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397508u;
            goto label_397508;
        }
    }
    ctx->pc = 0x3974ECu;
label_3974ec:
    // 0x3974ec: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3974f0:
    if (ctx->pc == 0x3974F0u) {
        ctx->pc = 0x3974F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974ECu;
        // 0x3974f0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974F4u;
        goto label_3974f4;
    }
    ctx->pc = 0x3974ECu;
    {
        const bool branch_taken_0x3974ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3974ec) {
            ctx->pc = 0x3974F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974ECu;
            // 0x3974f0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397508u;
            goto label_397508;
        }
    }
    ctx->pc = 0x3974F4u;
label_3974f4:
    // 0x3974f4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3974f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3974f8:
    // 0x3974f8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3974fc:
    if (ctx->pc == 0x3974FCu) {
        ctx->pc = 0x3974FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974F8u;
        // 0x3974fc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397500u;
        goto label_397500;
    }
    ctx->pc = 0x3974F8u;
    {
        const bool branch_taken_0x3974f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3974f8) {
            ctx->pc = 0x3974FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974F8u;
            // 0x3974fc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397508u;
            goto label_397508;
        }
    }
    ctx->pc = 0x397500u;
label_397500:
    // 0x397500: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397504:
    // 0x397504: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_397508:
    // 0x397508: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x397508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_39750c:
    // 0x39750c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_397510:
    if (ctx->pc == 0x397510u) {
        ctx->pc = 0x397510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39750Cu;
        // 0x397510: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397514u;
        goto label_397514;
    }
    ctx->pc = 0x39750Cu;
    {
        const bool branch_taken_0x39750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39750Cu;
        // 0x397510: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39750c) {
            ctx->pc = 0x397648u;
            goto label_397648;
        }
    }
    ctx->pc = 0x397514u;
label_397514:
    // 0x397514: 0x0  nop
    ctx->pc = 0x397514u;
    // NOP
label_397518:
    // 0x397518: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x397518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39751c:
    // 0x39751c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397520:
    // 0x397520: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397524:
    if (ctx->pc == 0x397524u) {
        ctx->pc = 0x397524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397520u;
        // 0x397524: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397528u;
        goto label_397528;
    }
    ctx->pc = 0x397520u;
    {
        const bool branch_taken_0x397520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397520) {
            ctx->pc = 0x397524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397520u;
            // 0x397524: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397540u;
            goto label_397540;
        }
    }
    ctx->pc = 0x397528u;
label_397528:
    // 0x397528: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39752c:
    if (ctx->pc == 0x39752Cu) {
        ctx->pc = 0x39752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397528u;
        // 0x39752c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397530u;
        goto label_397530;
    }
    ctx->pc = 0x397528u;
    {
        const bool branch_taken_0x397528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397528) {
            ctx->pc = 0x39752Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397528u;
            // 0x39752c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397540u;
            goto label_397540;
        }
    }
    ctx->pc = 0x397530u;
label_397530:
    // 0x397530: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397534:
    // 0x397534: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397538:
    if (ctx->pc == 0x397538u) {
        ctx->pc = 0x397538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397534u;
        // 0x397538: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39753Cu;
        goto label_39753c;
    }
    ctx->pc = 0x397534u;
    {
        const bool branch_taken_0x397534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397534) {
            ctx->pc = 0x397538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397534u;
            // 0x397538: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397560u;
            goto label_397560;
        }
    }
    ctx->pc = 0x39753Cu;
label_39753c:
    // 0x39753c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397540:
    // 0x397540: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397544:
    if (ctx->pc == 0x397544u) {
        ctx->pc = 0x397544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397540u;
        // 0x397544: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397548u;
        goto label_397548;
    }
    ctx->pc = 0x397540u;
    {
        const bool branch_taken_0x397540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397540) {
            ctx->pc = 0x397544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397540u;
            // 0x397544: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397564u;
            goto label_397564;
        }
    }
    ctx->pc = 0x397548u;
label_397548:
    // 0x397548: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39754c:
    if (ctx->pc == 0x39754Cu) {
        ctx->pc = 0x39754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397548u;
        // 0x39754c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397550u;
        goto label_397550;
    }
    ctx->pc = 0x397548u;
    {
        const bool branch_taken_0x397548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397548) {
            ctx->pc = 0x39754Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397548u;
            // 0x39754c: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397564u;
            goto label_397564;
        }
    }
    ctx->pc = 0x397550u;
label_397550:
    // 0x397550: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397554:
    // 0x397554: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397558:
    if (ctx->pc == 0x397558u) {
        ctx->pc = 0x397558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397554u;
        // 0x397558: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39755Cu;
        goto label_39755c;
    }
    ctx->pc = 0x397554u;
    {
        const bool branch_taken_0x397554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397554) {
            ctx->pc = 0x397558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397554u;
            // 0x397558: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397564u;
            goto label_397564;
        }
    }
    ctx->pc = 0x39755Cu;
label_39755c:
    // 0x39755c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39755cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397560:
    // 0x397560: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x397560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_397564:
    // 0x397564: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397568:
    // 0x397568: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39756c:
    if (ctx->pc == 0x39756Cu) {
        ctx->pc = 0x39756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397568u;
        // 0x39756c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397570u;
        goto label_397570;
    }
    ctx->pc = 0x397568u;
    {
        const bool branch_taken_0x397568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397568) {
            ctx->pc = 0x39756Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397568u;
            // 0x39756c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397588u;
            goto label_397588;
        }
    }
    ctx->pc = 0x397570u;
label_397570:
    // 0x397570: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397574:
    if (ctx->pc == 0x397574u) {
        ctx->pc = 0x397574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397570u;
        // 0x397574: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397578u;
        goto label_397578;
    }
    ctx->pc = 0x397570u;
    {
        const bool branch_taken_0x397570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397570) {
            ctx->pc = 0x397574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397570u;
            // 0x397574: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397588u;
            goto label_397588;
        }
    }
    ctx->pc = 0x397578u;
label_397578:
    // 0x397578: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39757c:
    // 0x39757c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397580:
    if (ctx->pc == 0x397580u) {
        ctx->pc = 0x397580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39757Cu;
        // 0x397580: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397584u;
        goto label_397584;
    }
    ctx->pc = 0x39757Cu;
    {
        const bool branch_taken_0x39757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39757c) {
            ctx->pc = 0x397580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39757Cu;
            // 0x397580: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975A8u;
            goto label_3975a8;
        }
    }
    ctx->pc = 0x397584u;
label_397584:
    // 0x397584: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397588:
    // 0x397588: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39758c:
    if (ctx->pc == 0x39758Cu) {
        ctx->pc = 0x39758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397588u;
        // 0x39758c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397590u;
        goto label_397590;
    }
    ctx->pc = 0x397588u;
    {
        const bool branch_taken_0x397588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397588) {
            ctx->pc = 0x39758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397588u;
            // 0x39758c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975ACu;
            goto label_3975ac;
        }
    }
    ctx->pc = 0x397590u;
label_397590:
    // 0x397590: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397594:
    if (ctx->pc == 0x397594u) {
        ctx->pc = 0x397594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397590u;
        // 0x397594: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397598u;
        goto label_397598;
    }
    ctx->pc = 0x397590u;
    {
        const bool branch_taken_0x397590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397590) {
            ctx->pc = 0x397594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397590u;
            // 0x397594: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975ACu;
            goto label_3975ac;
        }
    }
    ctx->pc = 0x397598u;
label_397598:
    // 0x397598: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39759c:
    // 0x39759c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3975a0:
    if (ctx->pc == 0x3975A0u) {
        ctx->pc = 0x3975A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39759Cu;
        // 0x3975a0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975A4u;
        goto label_3975a4;
    }
    ctx->pc = 0x39759Cu;
    {
        const bool branch_taken_0x39759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39759c) {
            ctx->pc = 0x3975A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39759Cu;
            // 0x3975a0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975ACu;
            goto label_3975ac;
        }
    }
    ctx->pc = 0x3975A4u;
label_3975a4:
    // 0x3975a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3975a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3975a8:
    // 0x3975a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3975a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3975ac:
    // 0x3975ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3975acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3975b0:
    // 0x3975b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3975b4:
    if (ctx->pc == 0x3975B4u) {
        ctx->pc = 0x3975B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975B0u;
        // 0x3975b4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975B8u;
        goto label_3975b8;
    }
    ctx->pc = 0x3975B0u;
    {
        const bool branch_taken_0x3975b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3975b0) {
            ctx->pc = 0x3975B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975B0u;
            // 0x3975b4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975D0u;
            goto label_3975d0;
        }
    }
    ctx->pc = 0x3975B8u;
label_3975b8:
    // 0x3975b8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3975bc:
    if (ctx->pc == 0x3975BCu) {
        ctx->pc = 0x3975BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975B8u;
        // 0x3975bc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975C0u;
        goto label_3975c0;
    }
    ctx->pc = 0x3975B8u;
    {
        const bool branch_taken_0x3975b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3975b8) {
            ctx->pc = 0x3975BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975B8u;
            // 0x3975bc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975D0u;
            goto label_3975d0;
        }
    }
    ctx->pc = 0x3975C0u;
label_3975c0:
    // 0x3975c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3975c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3975c4:
    // 0x3975c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3975c8:
    if (ctx->pc == 0x3975C8u) {
        ctx->pc = 0x3975C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975C4u;
        // 0x3975c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975CCu;
        goto label_3975cc;
    }
    ctx->pc = 0x3975C4u;
    {
        const bool branch_taken_0x3975c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3975c4) {
            ctx->pc = 0x3975C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975C4u;
            // 0x3975c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975F0u;
            goto label_3975f0;
        }
    }
    ctx->pc = 0x3975CCu;
label_3975cc:
    // 0x3975cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3975d0:
    // 0x3975d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3975d4:
    if (ctx->pc == 0x3975D4u) {
        ctx->pc = 0x3975D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975D0u;
        // 0x3975d4: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975D8u;
        goto label_3975d8;
    }
    ctx->pc = 0x3975D0u;
    {
        const bool branch_taken_0x3975d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3975d0) {
            ctx->pc = 0x3975D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975D0u;
            // 0x3975d4: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975F4u;
            goto label_3975f4;
        }
    }
    ctx->pc = 0x3975D8u;
label_3975d8:
    // 0x3975d8: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3975dc:
    if (ctx->pc == 0x3975DCu) {
        ctx->pc = 0x3975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975D8u;
        // 0x3975dc: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975E0u;
        goto label_3975e0;
    }
    ctx->pc = 0x3975D8u;
    {
        const bool branch_taken_0x3975d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3975d8) {
            ctx->pc = 0x3975DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975D8u;
            // 0x3975dc: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975F4u;
            goto label_3975f4;
        }
    }
    ctx->pc = 0x3975E0u;
label_3975e0:
    // 0x3975e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3975e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3975e4:
    // 0x3975e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3975e8:
    if (ctx->pc == 0x3975E8u) {
        ctx->pc = 0x3975E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975E4u;
        // 0x3975e8: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3975ECu;
        goto label_3975ec;
    }
    ctx->pc = 0x3975E4u;
    {
        const bool branch_taken_0x3975e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3975e4) {
            ctx->pc = 0x3975E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975E4u;
            // 0x3975e8: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3975F4u;
            goto label_3975f4;
        }
    }
    ctx->pc = 0x3975ECu;
label_3975ec:
    // 0x3975ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3975ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3975f0:
    // 0x3975f0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3975f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3975f4:
    // 0x3975f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3975f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3975f8:
    // 0x3975f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3975fc:
    if (ctx->pc == 0x3975FCu) {
        ctx->pc = 0x3975FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3975F8u;
        // 0x3975fc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397600u;
        goto label_397600;
    }
    ctx->pc = 0x3975F8u;
    {
        const bool branch_taken_0x3975f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3975f8) {
            ctx->pc = 0x3975FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3975F8u;
            // 0x3975fc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397618u;
            goto label_397618;
        }
    }
    ctx->pc = 0x397600u;
label_397600:
    // 0x397600: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397604:
    if (ctx->pc == 0x397604u) {
        ctx->pc = 0x397604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397600u;
        // 0x397604: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397608u;
        goto label_397608;
    }
    ctx->pc = 0x397600u;
    {
        const bool branch_taken_0x397600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397600) {
            ctx->pc = 0x397604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397600u;
            // 0x397604: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397618u;
            goto label_397618;
        }
    }
    ctx->pc = 0x397608u;
label_397608:
    // 0x397608: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39760c:
    // 0x39760c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397610:
    if (ctx->pc == 0x397610u) {
        ctx->pc = 0x397610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39760Cu;
        // 0x397610: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397614u;
        goto label_397614;
    }
    ctx->pc = 0x39760Cu;
    {
        const bool branch_taken_0x39760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39760c) {
            ctx->pc = 0x397610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39760Cu;
            // 0x397610: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397638u;
            goto label_397638;
        }
    }
    ctx->pc = 0x397614u;
label_397614:
    // 0x397614: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397618:
    // 0x397618: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39761c:
    if (ctx->pc == 0x39761Cu) {
        ctx->pc = 0x39761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397618u;
        // 0x39761c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397620u;
        goto label_397620;
    }
    ctx->pc = 0x397618u;
    {
        const bool branch_taken_0x397618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397618) {
            ctx->pc = 0x39761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397618u;
            // 0x39761c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39763Cu;
            goto label_39763c;
        }
    }
    ctx->pc = 0x397620u;
label_397620:
    // 0x397620: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397624:
    if (ctx->pc == 0x397624u) {
        ctx->pc = 0x397624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397620u;
        // 0x397624: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397628u;
        goto label_397628;
    }
    ctx->pc = 0x397620u;
    {
        const bool branch_taken_0x397620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397620) {
            ctx->pc = 0x397624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397620u;
            // 0x397624: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39763Cu;
            goto label_39763c;
        }
    }
    ctx->pc = 0x397628u;
label_397628:
    // 0x397628: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39762c:
    // 0x39762c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397630:
    if (ctx->pc == 0x397630u) {
        ctx->pc = 0x397630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39762Cu;
        // 0x397630: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397634u;
        goto label_397634;
    }
    ctx->pc = 0x39762Cu;
    {
        const bool branch_taken_0x39762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39762c) {
            ctx->pc = 0x397630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39762Cu;
            // 0x397630: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39763Cu;
            goto label_39763c;
        }
    }
    ctx->pc = 0x397634u;
label_397634:
    // 0x397634: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397638:
    // 0x397638: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x397638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39763c:
    // 0x39763c: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x39763cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_397640:
    // 0x397640: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_397644:
    if (ctx->pc == 0x397644u) {
        ctx->pc = 0x397644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397640u;
        // 0x397644: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397648u;
        goto label_397648;
    }
    ctx->pc = 0x397640u;
    {
        const bool branch_taken_0x397640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397640u;
        // 0x397644: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397640) {
            ctx->pc = 0x397518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397518;
        }
    }
    ctx->pc = 0x397648u;
label_397648:
    // 0x397648: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x397648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_39764c:
    // 0x39764c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x39764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_397650:
    // 0x397650: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x397650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_397654:
    // 0x397654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397658:
    // 0x397658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x397658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39765c:
    // 0x39765c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39765cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397660:
    // 0x397660: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
label_397664:
    if (ctx->pc == 0x397664u) {
        ctx->pc = 0x397664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397660u;
        // 0x397664: 0xac690004  sw          $t1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397668u;
        goto label_397668;
    }
    ctx->pc = 0x397660u;
    {
        const bool branch_taken_0x397660 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x397664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397660u;
        // 0x397664: 0xac690004  sw          $t1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397660) {
            ctx->pc = 0x3978C0u;
            goto label_3978c0;
        }
    }
    ctx->pc = 0x397668u;
label_397668:
    // 0x397668: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x397668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39766c:
    // 0x39766c: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x39766cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_397670:
    // 0x397670: 0x19000031  blez        $t0, . + 4 + (0x31 << 2)
label_397674:
    if (ctx->pc == 0x397674u) {
        ctx->pc = 0x397674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397670u;
        // 0x397674: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x397678u;
        goto label_397678;
    }
    ctx->pc = 0x397670u;
    {
        const bool branch_taken_0x397670 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x397674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397670u;
        // 0x397674: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397670) {
            ctx->pc = 0x397738u;
            goto label_397738;
        }
    }
    ctx->pc = 0x397678u;
label_397678:
    // 0x397678: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
label_39767c:
    if (ctx->pc == 0x39767Cu) {
        ctx->pc = 0x39767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397678u;
        // 0x39767c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397680u;
        goto label_397680;
    }
    ctx->pc = 0x397678u;
    {
        const bool branch_taken_0x397678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x397678) {
            ctx->pc = 0x39767Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397678u;
            // 0x39767c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397794u;
            goto label_397794;
        }
    }
    ctx->pc = 0x397680u;
label_397680:
    // 0x397680: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x397680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_397684:
    // 0x397684: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_397688:
    if (ctx->pc == 0x397688u) {
        ctx->pc = 0x397688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397684u;
        // 0x397688: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39768Cu;
        goto label_39768c;
    }
    ctx->pc = 0x397684u;
    {
        const bool branch_taken_0x397684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397684) {
            ctx->pc = 0x397688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397684u;
            // 0x397688: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39773Cu;
            goto label_39773c;
        }
    }
    ctx->pc = 0x39768Cu;
label_39768c:
    // 0x39768c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39768cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_397690:
    // 0x397690: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_397694:
    if (ctx->pc == 0x397694u) {
        ctx->pc = 0x397694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397690u;
        // 0x397694: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397698u;
        goto label_397698;
    }
    ctx->pc = 0x397690u;
    {
        const bool branch_taken_0x397690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397690) {
            ctx->pc = 0x397694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397690u;
            // 0x397694: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976ECu;
            goto label_3976ec;
        }
    }
    ctx->pc = 0x397698u;
label_397698:
    // 0x397698: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x397698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_39769c:
    // 0x39769c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3976a0:
    // 0x3976a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3976a4:
    if (ctx->pc == 0x3976A4u) {
        ctx->pc = 0x3976A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976A0u;
        // 0x3976a4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976A8u;
        goto label_3976a8;
    }
    ctx->pc = 0x3976A0u;
    {
        const bool branch_taken_0x3976a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3976a0) {
            ctx->pc = 0x3976A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976A0u;
            // 0x3976a4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976C0u;
            goto label_3976c0;
        }
    }
    ctx->pc = 0x3976A8u;
label_3976a8:
    // 0x3976a8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3976ac:
    if (ctx->pc == 0x3976ACu) {
        ctx->pc = 0x3976ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976A8u;
        // 0x3976ac: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976B0u;
        goto label_3976b0;
    }
    ctx->pc = 0x3976A8u;
    {
        const bool branch_taken_0x3976a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3976a8) {
            ctx->pc = 0x3976ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976A8u;
            // 0x3976ac: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976C0u;
            goto label_3976c0;
        }
    }
    ctx->pc = 0x3976B0u;
label_3976b0:
    // 0x3976b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3976b4:
    // 0x3976b4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3976b8:
    if (ctx->pc == 0x3976B8u) {
        ctx->pc = 0x3976B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976B4u;
        // 0x3976b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976BCu;
        goto label_3976bc;
    }
    ctx->pc = 0x3976B4u;
    {
        const bool branch_taken_0x3976b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3976b4) {
            ctx->pc = 0x3976B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976B4u;
            // 0x3976b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976E0u;
            goto label_3976e0;
        }
    }
    ctx->pc = 0x3976BCu;
label_3976bc:
    // 0x3976bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3976bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3976c0:
    // 0x3976c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3976c4:
    if (ctx->pc == 0x3976C4u) {
        ctx->pc = 0x3976C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976C0u;
        // 0x3976c4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976C8u;
        goto label_3976c8;
    }
    ctx->pc = 0x3976C0u;
    {
        const bool branch_taken_0x3976c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3976c0) {
            ctx->pc = 0x3976C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976C0u;
            // 0x3976c4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976E4u;
            goto label_3976e4;
        }
    }
    ctx->pc = 0x3976C8u;
label_3976c8:
    // 0x3976c8: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3976cc:
    if (ctx->pc == 0x3976CCu) {
        ctx->pc = 0x3976CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976C8u;
        // 0x3976cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976D0u;
        goto label_3976d0;
    }
    ctx->pc = 0x3976C8u;
    {
        const bool branch_taken_0x3976c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3976c8) {
            ctx->pc = 0x3976CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976C8u;
            // 0x3976cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976E4u;
            goto label_3976e4;
        }
    }
    ctx->pc = 0x3976D0u;
label_3976d0:
    // 0x3976d0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3976d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3976d4:
    // 0x3976d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3976d8:
    if (ctx->pc == 0x3976D8u) {
        ctx->pc = 0x3976D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976D4u;
        // 0x3976d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976DCu;
        goto label_3976dc;
    }
    ctx->pc = 0x3976D4u;
    {
        const bool branch_taken_0x3976d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3976d4) {
            ctx->pc = 0x3976D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976D4u;
            // 0x3976d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3976E4u;
            goto label_3976e4;
        }
    }
    ctx->pc = 0x3976DCu;
label_3976dc:
    // 0x3976dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3976dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3976e0:
    // 0x3976e0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3976e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3976e4:
    // 0x3976e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3976e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3976e8:
    // 0x3976e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3976e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3976ec:
    // 0x3976ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3976ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3976f0:
    // 0x3976f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3976f4:
    if (ctx->pc == 0x3976F4u) {
        ctx->pc = 0x3976F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976F0u;
        // 0x3976f4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3976F8u;
        goto label_3976f8;
    }
    ctx->pc = 0x3976F0u;
    {
        const bool branch_taken_0x3976f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3976f0) {
            ctx->pc = 0x3976F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976F0u;
            // 0x3976f4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397710u;
            goto label_397710;
        }
    }
    ctx->pc = 0x3976F8u;
label_3976f8:
    // 0x3976f8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3976fc:
    if (ctx->pc == 0x3976FCu) {
        ctx->pc = 0x3976FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976F8u;
        // 0x3976fc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397700u;
        goto label_397700;
    }
    ctx->pc = 0x3976F8u;
    {
        const bool branch_taken_0x3976f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3976f8) {
            ctx->pc = 0x3976FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3976F8u;
            // 0x3976fc: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397710u;
            goto label_397710;
        }
    }
    ctx->pc = 0x397700u;
label_397700:
    // 0x397700: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397704:
    // 0x397704: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397708:
    if (ctx->pc == 0x397708u) {
        ctx->pc = 0x397708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397704u;
        // 0x397708: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39770Cu;
        goto label_39770c;
    }
    ctx->pc = 0x397704u;
    {
        const bool branch_taken_0x397704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397704) {
            ctx->pc = 0x397708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397704u;
            // 0x397708: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397730u;
            goto label_397730;
        }
    }
    ctx->pc = 0x39770Cu;
label_39770c:
    // 0x39770c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397710:
    // 0x397710: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397714:
    if (ctx->pc == 0x397714u) {
        ctx->pc = 0x397714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397710u;
        // 0x397714: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397718u;
        goto label_397718;
    }
    ctx->pc = 0x397710u;
    {
        const bool branch_taken_0x397710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397710) {
            ctx->pc = 0x397714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397710u;
            // 0x397714: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397734u;
            goto label_397734;
        }
    }
    ctx->pc = 0x397718u;
label_397718:
    // 0x397718: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39771c:
    if (ctx->pc == 0x39771Cu) {
        ctx->pc = 0x39771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397718u;
        // 0x39771c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397720u;
        goto label_397720;
    }
    ctx->pc = 0x397718u;
    {
        const bool branch_taken_0x397718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397718) {
            ctx->pc = 0x39771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397718u;
            // 0x39771c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397734u;
            goto label_397734;
        }
    }
    ctx->pc = 0x397720u;
label_397720:
    // 0x397720: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397724:
    // 0x397724: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397728:
    if (ctx->pc == 0x397728u) {
        ctx->pc = 0x397728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397724u;
        // 0x397728: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39772Cu;
        goto label_39772c;
    }
    ctx->pc = 0x397724u;
    {
        const bool branch_taken_0x397724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397724) {
            ctx->pc = 0x397728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397724u;
            // 0x397728: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397734u;
            goto label_397734;
        }
    }
    ctx->pc = 0x39772Cu;
label_39772c:
    // 0x39772c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397730:
    // 0x397730: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x397730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_397734:
    // 0x397734: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_397738:
    // 0x397738: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x397738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39773c:
    // 0x39773c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397740:
    // 0x397740: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397744:
    if (ctx->pc == 0x397744u) {
        ctx->pc = 0x397744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397740u;
        // 0x397744: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397748u;
        goto label_397748;
    }
    ctx->pc = 0x397740u;
    {
        const bool branch_taken_0x397740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397740) {
            ctx->pc = 0x397744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397740u;
            // 0x397744: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397760u;
            goto label_397760;
        }
    }
    ctx->pc = 0x397748u;
label_397748:
    // 0x397748: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39774c:
    if (ctx->pc == 0x39774Cu) {
        ctx->pc = 0x39774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397748u;
        // 0x39774c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397750u;
        goto label_397750;
    }
    ctx->pc = 0x397748u;
    {
        const bool branch_taken_0x397748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397748) {
            ctx->pc = 0x39774Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397748u;
            // 0x39774c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397760u;
            goto label_397760;
        }
    }
    ctx->pc = 0x397750u;
label_397750:
    // 0x397750: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397754:
    // 0x397754: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397758:
    if (ctx->pc == 0x397758u) {
        ctx->pc = 0x397758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397754u;
        // 0x397758: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39775Cu;
        goto label_39775c;
    }
    ctx->pc = 0x397754u;
    {
        const bool branch_taken_0x397754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397754) {
            ctx->pc = 0x397758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397754u;
            // 0x397758: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397780u;
            goto label_397780;
        }
    }
    ctx->pc = 0x39775Cu;
label_39775c:
    // 0x39775c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397760:
    // 0x397760: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397764:
    if (ctx->pc == 0x397764u) {
        ctx->pc = 0x397764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397760u;
        // 0x397764: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397768u;
        goto label_397768;
    }
    ctx->pc = 0x397760u;
    {
        const bool branch_taken_0x397760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397760) {
            ctx->pc = 0x397764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397760u;
            // 0x397764: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397784u;
            goto label_397784;
        }
    }
    ctx->pc = 0x397768u;
label_397768:
    // 0x397768: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39776c:
    if (ctx->pc == 0x39776Cu) {
        ctx->pc = 0x39776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397768u;
        // 0x39776c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397770u;
        goto label_397770;
    }
    ctx->pc = 0x397768u;
    {
        const bool branch_taken_0x397768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397768) {
            ctx->pc = 0x39776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397768u;
            // 0x39776c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397784u;
            goto label_397784;
        }
    }
    ctx->pc = 0x397770u;
label_397770:
    // 0x397770: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397774:
    // 0x397774: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397778:
    if (ctx->pc == 0x397778u) {
        ctx->pc = 0x397778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397774u;
        // 0x397778: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39777Cu;
        goto label_39777c;
    }
    ctx->pc = 0x397774u;
    {
        const bool branch_taken_0x397774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397774) {
            ctx->pc = 0x397778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397774u;
            // 0x397778: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397784u;
            goto label_397784;
        }
    }
    ctx->pc = 0x39777Cu;
label_39777c:
    // 0x39777c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39777cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397780:
    // 0x397780: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x397780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_397784:
    // 0x397784: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x397784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_397788:
    // 0x397788: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_39778c:
    if (ctx->pc == 0x39778Cu) {
        ctx->pc = 0x39778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397788u;
        // 0x39778c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397790u;
        goto label_397790;
    }
    ctx->pc = 0x397788u;
    {
        const bool branch_taken_0x397788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397788u;
        // 0x39778c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397788) {
            ctx->pc = 0x3978C0u;
            goto label_3978c0;
        }
    }
    ctx->pc = 0x397790u;
label_397790:
    // 0x397790: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x397790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_397794:
    // 0x397794: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397798:
    // 0x397798: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39779c:
    if (ctx->pc == 0x39779Cu) {
        ctx->pc = 0x39779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397798u;
        // 0x39779c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977A0u;
        goto label_3977a0;
    }
    ctx->pc = 0x397798u;
    {
        const bool branch_taken_0x397798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397798) {
            ctx->pc = 0x39779Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397798u;
            // 0x39779c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3977B8u;
            goto label_3977b8;
        }
    }
    ctx->pc = 0x3977A0u;
label_3977a0:
    // 0x3977a0: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3977a4:
    if (ctx->pc == 0x3977A4u) {
        ctx->pc = 0x3977A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977A0u;
        // 0x3977a4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977A8u;
        goto label_3977a8;
    }
    ctx->pc = 0x3977A0u;
    {
        const bool branch_taken_0x3977a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3977a0) {
            ctx->pc = 0x3977A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977A0u;
            // 0x3977a4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3977B8u;
            goto label_3977b8;
        }
    }
    ctx->pc = 0x3977A8u;
label_3977a8:
    // 0x3977a8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3977a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3977ac:
    // 0x3977ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3977b0:
    if (ctx->pc == 0x3977B0u) {
        ctx->pc = 0x3977B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977ACu;
        // 0x3977b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977B4u;
        goto label_3977b4;
    }
    ctx->pc = 0x3977ACu;
    {
        const bool branch_taken_0x3977ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3977ac) {
            ctx->pc = 0x3977B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977ACu;
            // 0x3977b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3977D8u;
            goto label_3977d8;
        }
    }
    ctx->pc = 0x3977B4u;
label_3977b4:
    // 0x3977b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3977b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3977b8:
    // 0x3977b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3977bc:
    if (ctx->pc == 0x3977BCu) {
        ctx->pc = 0x3977BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977B8u;
        // 0x3977bc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977C0u;
        goto label_3977c0;
    }
    ctx->pc = 0x3977B8u;
    {
        const bool branch_taken_0x3977b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3977b8) {
            ctx->pc = 0x3977BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977B8u;
            // 0x3977bc: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3977DCu;
            goto label_3977dc;
        }
    }
    ctx->pc = 0x3977C0u;
label_3977c0:
    // 0x3977c0: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3977c4:
    if (ctx->pc == 0x3977C4u) {
        ctx->pc = 0x3977C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977C0u;
        // 0x3977c4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977C8u;
        goto label_3977c8;
    }
    ctx->pc = 0x3977C0u;
    {
        const bool branch_taken_0x3977c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3977c0) {
            ctx->pc = 0x3977C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977C0u;
            // 0x3977c4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3977DCu;
            goto label_3977dc;
        }
    }
    ctx->pc = 0x3977C8u;
label_3977c8:
    // 0x3977c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3977cc:
    // 0x3977cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3977d0:
    if (ctx->pc == 0x3977D0u) {
        ctx->pc = 0x3977D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977CCu;
        // 0x3977d0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977D4u;
        goto label_3977d4;
    }
    ctx->pc = 0x3977CCu;
    {
        const bool branch_taken_0x3977cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3977cc) {
            ctx->pc = 0x3977D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977CCu;
            // 0x3977d0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3977DCu;
            goto label_3977dc;
        }
    }
    ctx->pc = 0x3977D4u;
label_3977d4:
    // 0x3977d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3977d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3977d8:
    // 0x3977d8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3977d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3977dc:
    // 0x3977dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3977dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3977e0:
    // 0x3977e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3977e4:
    if (ctx->pc == 0x3977E4u) {
        ctx->pc = 0x3977E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977E0u;
        // 0x3977e4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977E8u;
        goto label_3977e8;
    }
    ctx->pc = 0x3977E0u;
    {
        const bool branch_taken_0x3977e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3977e0) {
            ctx->pc = 0x3977E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977E0u;
            // 0x3977e4: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397800u;
            goto label_397800;
        }
    }
    ctx->pc = 0x3977E8u;
label_3977e8:
    // 0x3977e8: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_3977ec:
    if (ctx->pc == 0x3977ECu) {
        ctx->pc = 0x3977ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977E8u;
        // 0x3977ec: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977F0u;
        goto label_3977f0;
    }
    ctx->pc = 0x3977E8u;
    {
        const bool branch_taken_0x3977e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3977e8) {
            ctx->pc = 0x3977ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977E8u;
            // 0x3977ec: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397800u;
            goto label_397800;
        }
    }
    ctx->pc = 0x3977F0u;
label_3977f0:
    // 0x3977f0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3977f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3977f4:
    // 0x3977f4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3977f8:
    if (ctx->pc == 0x3977F8u) {
        ctx->pc = 0x3977F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977F4u;
        // 0x3977f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977FCu;
        goto label_3977fc;
    }
    ctx->pc = 0x3977F4u;
    {
        const bool branch_taken_0x3977f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3977f4) {
            ctx->pc = 0x3977F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3977F4u;
            // 0x3977f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397820u;
            goto label_397820;
        }
    }
    ctx->pc = 0x3977FCu;
label_3977fc:
    // 0x3977fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3977fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397800:
    // 0x397800: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397804:
    if (ctx->pc == 0x397804u) {
        ctx->pc = 0x397804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397800u;
        // 0x397804: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397808u;
        goto label_397808;
    }
    ctx->pc = 0x397800u;
    {
        const bool branch_taken_0x397800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397800) {
            ctx->pc = 0x397804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397800u;
            // 0x397804: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397824u;
            goto label_397824;
        }
    }
    ctx->pc = 0x397808u;
label_397808:
    // 0x397808: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39780c:
    if (ctx->pc == 0x39780Cu) {
        ctx->pc = 0x39780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397808u;
        // 0x39780c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397810u;
        goto label_397810;
    }
    ctx->pc = 0x397808u;
    {
        const bool branch_taken_0x397808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397808) {
            ctx->pc = 0x39780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397808u;
            // 0x39780c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397824u;
            goto label_397824;
        }
    }
    ctx->pc = 0x397810u;
label_397810:
    // 0x397810: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397814:
    // 0x397814: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397818:
    if (ctx->pc == 0x397818u) {
        ctx->pc = 0x397818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397814u;
        // 0x397818: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39781Cu;
        goto label_39781c;
    }
    ctx->pc = 0x397814u;
    {
        const bool branch_taken_0x397814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397814) {
            ctx->pc = 0x397818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397814u;
            // 0x397818: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397824u;
            goto label_397824;
        }
    }
    ctx->pc = 0x39781Cu;
label_39781c:
    // 0x39781c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39781cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397820:
    // 0x397820: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x397820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_397824:
    // 0x397824: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x397824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397828:
    // 0x397828: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39782c:
    if (ctx->pc == 0x39782Cu) {
        ctx->pc = 0x39782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397828u;
        // 0x39782c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397830u;
        goto label_397830;
    }
    ctx->pc = 0x397828u;
    {
        const bool branch_taken_0x397828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397828) {
            ctx->pc = 0x39782Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397828u;
            // 0x39782c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397848u;
            goto label_397848;
        }
    }
    ctx->pc = 0x397830u;
label_397830:
    // 0x397830: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_397834:
    if (ctx->pc == 0x397834u) {
        ctx->pc = 0x397834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397830u;
        // 0x397834: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397838u;
        goto label_397838;
    }
    ctx->pc = 0x397830u;
    {
        const bool branch_taken_0x397830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397830) {
            ctx->pc = 0x397834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397830u;
            // 0x397834: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397848u;
            goto label_397848;
        }
    }
    ctx->pc = 0x397838u;
label_397838:
    // 0x397838: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39783c:
    // 0x39783c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397840:
    if (ctx->pc == 0x397840u) {
        ctx->pc = 0x397840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39783Cu;
        // 0x397840: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397844u;
        goto label_397844;
    }
    ctx->pc = 0x39783Cu;
    {
        const bool branch_taken_0x39783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39783c) {
            ctx->pc = 0x397840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39783Cu;
            // 0x397840: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397868u;
            goto label_397868;
        }
    }
    ctx->pc = 0x397844u;
label_397844:
    // 0x397844: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x397844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397848:
    // 0x397848: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39784c:
    if (ctx->pc == 0x39784Cu) {
        ctx->pc = 0x39784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397848u;
        // 0x39784c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397850u;
        goto label_397850;
    }
    ctx->pc = 0x397848u;
    {
        const bool branch_taken_0x397848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397848) {
            ctx->pc = 0x39784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397848u;
            // 0x39784c: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39786Cu;
            goto label_39786c;
        }
    }
    ctx->pc = 0x397850u;
label_397850:
    // 0x397850: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_397854:
    if (ctx->pc == 0x397854u) {
        ctx->pc = 0x397854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397850u;
        // 0x397854: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397858u;
        goto label_397858;
    }
    ctx->pc = 0x397850u;
    {
        const bool branch_taken_0x397850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397850) {
            ctx->pc = 0x397854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397850u;
            // 0x397854: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39786Cu;
            goto label_39786c;
        }
    }
    ctx->pc = 0x397858u;
label_397858:
    // 0x397858: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39785c:
    // 0x39785c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_397860:
    if (ctx->pc == 0x397860u) {
        ctx->pc = 0x397860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39785Cu;
        // 0x397860: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397864u;
        goto label_397864;
    }
    ctx->pc = 0x39785Cu;
    {
        const bool branch_taken_0x39785c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39785c) {
            ctx->pc = 0x397860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39785Cu;
            // 0x397860: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39786Cu;
            goto label_39786c;
        }
    }
    ctx->pc = 0x397864u;
label_397864:
    // 0x397864: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397868:
    // 0x397868: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x397868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_39786c:
    // 0x39786c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x39786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_397870:
    // 0x397870: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_397874:
    if (ctx->pc == 0x397874u) {
        ctx->pc = 0x397874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397870u;
        // 0x397874: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397878u;
        goto label_397878;
    }
    ctx->pc = 0x397870u;
    {
        const bool branch_taken_0x397870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397870) {
            ctx->pc = 0x397874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397870u;
            // 0x397874: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397890u;
            goto label_397890;
        }
    }
    ctx->pc = 0x397878u;
label_397878:
    // 0x397878: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
label_39787c:
    if (ctx->pc == 0x39787Cu) {
        ctx->pc = 0x39787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397878u;
        // 0x39787c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397880u;
        goto label_397880;
    }
    ctx->pc = 0x397878u;
    {
        const bool branch_taken_0x397878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397878) {
            ctx->pc = 0x39787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397878u;
            // 0x39787c: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397890u;
            goto label_397890;
        }
    }
    ctx->pc = 0x397880u;
label_397880:
    // 0x397880: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x397880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_397884:
    // 0x397884: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_397888:
    if (ctx->pc == 0x397888u) {
        ctx->pc = 0x397888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397884u;
        // 0x397888: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39788Cu;
        goto label_39788c;
    }
    ctx->pc = 0x397884u;
    {
        const bool branch_taken_0x397884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397884) {
            ctx->pc = 0x397888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397884u;
            // 0x397888: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3978B0u;
            goto label_3978b0;
        }
    }
    ctx->pc = 0x39788Cu;
label_39788c:
    // 0x39788c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_397890:
    // 0x397890: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_397894:
    if (ctx->pc == 0x397894u) {
        ctx->pc = 0x397894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397890u;
        // 0x397894: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397898u;
        goto label_397898;
    }
    ctx->pc = 0x397890u;
    {
        const bool branch_taken_0x397890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397890) {
            ctx->pc = 0x397894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397890u;
            // 0x397894: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3978B4u;
            goto label_3978b4;
        }
    }
    ctx->pc = 0x397898u;
label_397898:
    // 0x397898: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_39789c:
    if (ctx->pc == 0x39789Cu) {
        ctx->pc = 0x39789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397898u;
        // 0x39789c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978A0u;
        goto label_3978a0;
    }
    ctx->pc = 0x397898u;
    {
        const bool branch_taken_0x397898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397898) {
            ctx->pc = 0x39789Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397898u;
            // 0x39789c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3978B4u;
            goto label_3978b4;
        }
    }
    ctx->pc = 0x3978A0u;
label_3978a0:
    // 0x3978a0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3978a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3978a4:
    // 0x3978a4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3978a8:
    if (ctx->pc == 0x3978A8u) {
        ctx->pc = 0x3978A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978A4u;
        // 0x3978a8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978ACu;
        goto label_3978ac;
    }
    ctx->pc = 0x3978A4u;
    {
        const bool branch_taken_0x3978a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3978a4) {
            ctx->pc = 0x3978A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3978A4u;
            // 0x3978a8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3978B4u;
            goto label_3978b4;
        }
    }
    ctx->pc = 0x3978ACu;
label_3978ac:
    // 0x3978ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3978acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3978b0:
    // 0x3978b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3978b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3978b4:
    // 0x3978b4: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x3978b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3978b8:
    // 0x3978b8: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_3978bc:
    if (ctx->pc == 0x3978BCu) {
        ctx->pc = 0x3978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978B8u;
        // 0x3978bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978C0u;
        goto label_3978c0;
    }
    ctx->pc = 0x3978B8u;
    {
        const bool branch_taken_0x3978b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978B8u;
        // 0x3978bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978b8) {
            ctx->pc = 0x397790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397790;
        }
    }
    ctx->pc = 0x3978C0u;
label_3978c0:
    // 0x3978c0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3978c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3978c4:
    // 0x3978c4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3978c8:
    // 0x3978c8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x3978c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_3978cc:
    // 0x3978cc: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x3978ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_3978d0:
    // 0x3978d0: 0x2d620003  sltiu       $v0, $t3, 0x3
    ctx->pc = 0x3978d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3978d4:
    // 0x3978d4: 0x1440fd74  bnez        $v0, . + 4 + (-0x28C << 2)
label_3978d8:
    if (ctx->pc == 0x3978D8u) {
        ctx->pc = 0x3978D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978D4u;
        // 0x3978d8: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978DCu;
        goto label_3978dc;
    }
    ctx->pc = 0x3978D4u;
    {
        const bool branch_taken_0x3978d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3978D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978D4u;
        // 0x3978d8: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978d4) {
            ctx->pc = 0x396EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ea8;
        }
    }
    ctx->pc = 0x3978DCu;
label_3978dc:
    // 0x3978dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3978dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3978e0:
    // 0x3978e0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3978e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3978e4:
    // 0x3978e4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3978e8:
    if (ctx->pc == 0x3978E8u) {
        ctx->pc = 0x3978E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978E4u;
        // 0x3978e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978ECu;
        goto label_3978ec;
    }
    ctx->pc = 0x3978E4u;
    {
        const bool branch_taken_0x3978e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3978E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978E4u;
        // 0x3978e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978e4) {
            ctx->pc = 0x3978FCu;
            goto label_3978fc;
        }
    }
    ctx->pc = 0x3978ECu;
label_3978ec:
    // 0x3978ec: 0xc0e61f4  jal         func_3987D0
label_3978f0:
    if (ctx->pc == 0x3978F0u) {
        ctx->pc = 0x3978F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978ECu;
        // 0x3978f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978F4u;
        goto label_3978f4;
    }
    ctx->pc = 0x3978ECu;
    SET_GPR_U32(ctx, 31, 0x3978F4u);
    ctx->pc = 0x3978F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3978ECu;
    // 0x3978f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x3978ECu, 0x3978F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3978F4u;
label_3978f4:
    // 0x3978f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3978f8:
    if (ctx->pc == 0x3978F8u) {
        ctx->pc = 0x3978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978F4u;
        // 0x3978f8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978FCu;
        goto label_3978fc;
    }
    ctx->pc = 0x3978F4u;
    {
        const bool branch_taken_0x3978f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3978F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978F4u;
        // 0x3978f8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978f4) {
            ctx->pc = 0x397900u;
            goto label_397900;
        }
    }
    ctx->pc = 0x3978FCu;
label_3978fc:
    // 0x3978fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3978fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397900:
    // 0x397900: 0x1600fd67  bnez        $s0, . + 4 + (-0x299 << 2)
label_397904:
    if (ctx->pc == 0x397904u) {
        ctx->pc = 0x397904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397900u;
        // 0x397904: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397908u;
        goto label_397908;
    }
    ctx->pc = 0x397900u;
    {
        const bool branch_taken_0x397900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x397904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397900u;
        // 0x397904: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397900) {
            ctx->pc = 0x396EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396ea0;
        }
    }
    ctx->pc = 0x397908u;
label_397908:
    // 0x397908: 0x10000002  b           . + 4 + (0x2 << 2)
label_39790c:
    if (ctx->pc == 0x39790Cu) {
        ctx->pc = 0x39790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397908u;
        // 0x39790c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397910u;
        goto label_397910;
    }
    ctx->pc = 0x397908u;
    {
        const bool branch_taken_0x397908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397908u;
        // 0x39790c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397908) {
            ctx->pc = 0x397914u;
            goto label_397914;
        }
    }
    ctx->pc = 0x397910u;
label_397910:
    // 0x397910: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_397914:
    // 0x397914: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x397914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_397918:
    // 0x397918: 0x1440fc51  bnez        $v0, . + 4 + (-0x3AF << 2)
label_39791c:
    if (ctx->pc == 0x39791Cu) {
        ctx->pc = 0x39791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397918u;
        // 0x39791c: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397920u;
        goto label_397920;
    }
    ctx->pc = 0x397918u;
    {
        const bool branch_taken_0x397918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397918u;
        // 0x39791c: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397918) {
            ctx->pc = 0x396A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396a60;
        }
    }
    ctx->pc = 0x397920u;
label_397920:
    // 0x397920: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x397920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_397924:
    // 0x397924: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x397924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_397928:
    // 0x397928: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x397928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39792c:
    // 0x39792c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x39792cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_397930:
    // 0x397930: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x397930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_397934:
    // 0x397934: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x397934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_397938:
    // 0x397938: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x397938u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39793c:
    // 0x39793c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x39793cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397940:
    // 0x397940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x397940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_397944:
    // 0x397944: 0x3e00008  jr          $ra
label_397948:
    if (ctx->pc == 0x397948u) {
        ctx->pc = 0x397948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397944u;
        // 0x397948: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39794Cu;
        goto label_39794c;
    }
    ctx->pc = 0x397944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397944u;
        // 0x397948: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39794Cu;
label_39794c:
    // 0x39794c: 0x0  nop
    ctx->pc = 0x39794cu;
    // NOP
label_397950:
    // 0x397950: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x397950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_397954:
    // 0x397954: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x397954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_397958:
    // 0x397958: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x397958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_39795c:
    // 0x39795c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39795cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_397960:
    // 0x397960: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x397960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_397964:
    // 0x397964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397968:
    // 0x397968: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x397968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_39796c:
    // 0x39796c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39796cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397970:
    // 0x397970: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x397970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_397974:
    // 0x397974: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x397974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_397978:
    // 0x397978: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x397978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_39797c:
    // 0x39797c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x39797cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_397980:
    // 0x397980: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x397980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_397984:
    // 0x397984: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x397984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_397988:
    // 0x397988: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x397988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_39798c:
    // 0x39798c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x39798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_397990:
    // 0x397990: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x397990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_397994:
    // 0x397994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x397994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_397998:
    // 0x397998: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x397998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39799c:
    // 0x39799c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x39799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3979a0:
    // 0x3979a0: 0x40f809  jalr        $v0
label_3979a4:
    if (ctx->pc == 0x3979A4u) {
        ctx->pc = 0x3979A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979A0u;
        // 0x3979a4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979A8u;
        goto label_3979a8;
    }
    ctx->pc = 0x3979A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3979A8u);
        ctx->pc = 0x3979A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979A0u;
        // 0x3979a4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3979A0u, 0x3979A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3979A8u;
label_3979a8:
    // 0x3979a8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3979a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3979ac:
    // 0x3979ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3979acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3979b0:
    // 0x3979b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3979b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3979b4:
    // 0x3979b4: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_3979b8:
    if (ctx->pc == 0x3979B8u) {
        ctx->pc = 0x3979B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979B4u;
        // 0x3979b8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979BCu;
        goto label_3979bc;
    }
    ctx->pc = 0x3979B4u;
    {
        const bool branch_taken_0x3979b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3979B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979B4u;
        // 0x3979b8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979b4) {
            ctx->pc = 0x397BD0u;
            goto label_397bd0;
        }
    }
    ctx->pc = 0x3979BCu;
label_3979bc:
    // 0x3979bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3979bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3979c0:
    // 0x3979c0: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x3979c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_3979c4:
    // 0x3979c4: 0x19000029  blez        $t0, . + 4 + (0x29 << 2)
label_3979c8:
    if (ctx->pc == 0x3979C8u) {
        ctx->pc = 0x3979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979C4u;
        // 0x3979c8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979CCu;
        goto label_3979cc;
    }
    ctx->pc = 0x3979C4u;
    {
        const bool branch_taken_0x3979c4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3979C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979C4u;
        // 0x3979c8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979c4) {
            ctx->pc = 0x397A6Cu;
            goto label_397a6c;
        }
    }
    ctx->pc = 0x3979CCu;
label_3979cc:
    // 0x3979cc: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
label_3979d0:
    if (ctx->pc == 0x3979D0u) {
        ctx->pc = 0x3979D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979CCu;
        // 0x3979d0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979D4u;
        goto label_3979d4;
    }
    ctx->pc = 0x3979CCu;
    {
        const bool branch_taken_0x3979cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3979cc) {
            ctx->pc = 0x3979D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3979CCu;
            // 0x3979d0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397ABCu;
            goto label_397abc;
        }
    }
    ctx->pc = 0x3979D4u;
label_3979d4:
    // 0x3979d4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3979d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3979d8:
    // 0x3979d8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_3979dc:
    if (ctx->pc == 0x3979DCu) {
        ctx->pc = 0x3979DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979D8u;
        // 0x3979dc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979E0u;
        goto label_3979e0;
    }
    ctx->pc = 0x3979D8u;
    {
        const bool branch_taken_0x3979d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3979d8) {
            ctx->pc = 0x3979DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3979D8u;
            // 0x3979dc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397A70u;
            goto label_397a70;
        }
    }
    ctx->pc = 0x3979E0u;
label_3979e0:
    // 0x3979e0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3979e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3979e4:
    // 0x3979e4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3979e8:
    if (ctx->pc == 0x3979E8u) {
        ctx->pc = 0x3979E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979E4u;
        // 0x3979e8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979ECu;
        goto label_3979ec;
    }
    ctx->pc = 0x3979E4u;
    {
        const bool branch_taken_0x3979e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3979E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979E4u;
        // 0x3979e8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979e4) {
            ctx->pc = 0x397A2Cu;
            goto label_397a2c;
        }
    }
    ctx->pc = 0x3979ECu;
label_3979ec:
    // 0x3979ec: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3979ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3979f0:
    // 0x3979f0: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x3979f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3979f4:
    // 0x3979f4: 0x50a4000b  beql        $a1, $a0, . + 4 + (0xB << 2)
label_3979f8:
    if (ctx->pc == 0x3979F8u) {
        ctx->pc = 0x3979F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979F4u;
        // 0x3979f8: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3979FCu;
        goto label_3979fc;
    }
    ctx->pc = 0x3979F4u;
    {
        const bool branch_taken_0x3979f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3979f4) {
            ctx->pc = 0x3979F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3979F4u;
            // 0x3979f8: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397A24u;
            goto label_397a24;
        }
    }
    ctx->pc = 0x3979FCu;
label_3979fc:
    // 0x3979fc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3979fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_397a00:
    // 0x397a00: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_397a04:
    if (ctx->pc == 0x397A04u) {
        ctx->pc = 0x397A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A00u;
        // 0x397a04: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A08u;
        goto label_397a08;
    }
    ctx->pc = 0x397A00u;
    {
        const bool branch_taken_0x397a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397a00) {
            ctx->pc = 0x397A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397A00u;
            // 0x397a04: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397A24u;
            goto label_397a24;
        }
    }
    ctx->pc = 0x397A08u;
label_397a08:
    // 0x397a08: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
label_397a0c:
    if (ctx->pc == 0x397A0Cu) {
        ctx->pc = 0x397A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A08u;
        // 0x397a0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A10u;
        goto label_397a10;
    }
    ctx->pc = 0x397A08u;
    {
        const bool branch_taken_0x397a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x397A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A08u;
        // 0x397a0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a08) {
            ctx->pc = 0x397A20u;
            goto label_397a20;
        }
    }
    ctx->pc = 0x397A10u;
label_397a10:
    // 0x397a10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x397a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_397a14:
    // 0x397a14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x397a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397a18:
    // 0x397a18: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x397a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_397a1c:
    // 0x397a1c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x397a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_397a20:
    // 0x397a20: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x397a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_397a24:
    // 0x397a24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x397a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_397a28:
    // 0x397a28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x397a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_397a2c:
    // 0x397a2c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x397a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_397a30:
    // 0x397a30: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x397a30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_397a34:
    // 0x397a34: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x397a34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_397a38:
    // 0x397a38: 0x50a4000b  beql        $a1, $a0, . + 4 + (0xB << 2)
label_397a3c:
    if (ctx->pc == 0x397A3Cu) {
        ctx->pc = 0x397A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A38u;
        // 0x397a3c: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A40u;
        goto label_397a40;
    }
    ctx->pc = 0x397A38u;
    {
        const bool branch_taken_0x397a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x397a38) {
            ctx->pc = 0x397A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397A38u;
            // 0x397a3c: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397A68u;
            goto label_397a68;
        }
    }
    ctx->pc = 0x397A40u;
label_397a40:
    // 0x397a40: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x397a40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_397a44:
    // 0x397a44: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_397a48:
    if (ctx->pc == 0x397A48u) {
        ctx->pc = 0x397A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A44u;
        // 0x397a48: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A4Cu;
        goto label_397a4c;
    }
    ctx->pc = 0x397A44u;
    {
        const bool branch_taken_0x397a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x397A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A44u;
        // 0x397a48: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a44) {
            ctx->pc = 0x397A68u;
            goto label_397a68;
        }
    }
    ctx->pc = 0x397A4Cu;
label_397a4c:
    // 0x397a4c: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
label_397a50:
    if (ctx->pc == 0x397A50u) {
        ctx->pc = 0x397A54u;
        goto label_397a54;
    }
    ctx->pc = 0x397A4Cu;
    {
        const bool branch_taken_0x397a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x397a4c) {
            ctx->pc = 0x397A68u;
            goto label_397a68;
        }
    }
    ctx->pc = 0x397A54u;
label_397a54:
    // 0x397a54: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x397a54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_397a58:
    // 0x397a58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397a5c:
    // 0x397a5c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x397a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397a60:
    // 0x397a60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x397a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_397a64:
    // 0x397a64: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x397a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_397a68:
    // 0x397a68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x397a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_397a6c:
    // 0x397a6c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x397a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_397a70:
    // 0x397a70: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x397a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_397a74:
    // 0x397a74: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x397a74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_397a78:
    // 0x397a78: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x397a78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_397a7c:
    // 0x397a7c: 0x50a4000b  beql        $a1, $a0, . + 4 + (0xB << 2)
label_397a80:
    if (ctx->pc == 0x397A80u) {
        ctx->pc = 0x397A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A7Cu;
        // 0x397a80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A84u;
        goto label_397a84;
    }
    ctx->pc = 0x397A7Cu;
    {
        const bool branch_taken_0x397a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x397a7c) {
            ctx->pc = 0x397A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397A7Cu;
            // 0x397a80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397AACu;
            goto label_397aac;
        }
    }
    ctx->pc = 0x397A84u;
label_397a84:
    // 0x397a84: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x397a84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_397a88:
    // 0x397a88: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_397a8c:
    if (ctx->pc == 0x397A8Cu) {
        ctx->pc = 0x397A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A88u;
        // 0x397a8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A90u;
        goto label_397a90;
    }
    ctx->pc = 0x397A88u;
    {
        const bool branch_taken_0x397a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x397A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A88u;
        // 0x397a8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397a88) {
            ctx->pc = 0x397AACu;
            goto label_397aac;
        }
    }
    ctx->pc = 0x397A90u;
label_397a90:
    // 0x397a90: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
label_397a94:
    if (ctx->pc == 0x397A94u) {
        ctx->pc = 0x397A98u;
        goto label_397a98;
    }
    ctx->pc = 0x397A90u;
    {
        const bool branch_taken_0x397a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x397a90) {
            ctx->pc = 0x397AACu;
            goto label_397aac;
        }
    }
    ctx->pc = 0x397A98u;
label_397a98:
    // 0x397a98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x397a98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_397a9c:
    // 0x397a9c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397aa0:
    // 0x397aa0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397aa4:
    // 0x397aa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x397aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_397aa8:
    // 0x397aa8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x397aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_397aac:
    // 0x397aac: 0x248102b  sltu        $v0, $s2, $t0
    ctx->pc = 0x397aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_397ab0:
    // 0x397ab0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_397ab4:
    if (ctx->pc == 0x397AB4u) {
        ctx->pc = 0x397AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AB0u;
        // 0x397ab4: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397AB8u;
        goto label_397ab8;
    }
    ctx->pc = 0x397AB0u;
    {
        const bool branch_taken_0x397ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AB0u;
        // 0x397ab4: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ab0) {
            ctx->pc = 0x397BD0u;
            goto label_397bd0;
        }
    }
    ctx->pc = 0x397AB8u;
label_397ab8:
    // 0x397ab8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x397ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_397abc:
    // 0x397abc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x397abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_397ac0:
    // 0x397ac0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x397ac0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_397ac4:
    // 0x397ac4: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x397ac4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_397ac8:
    // 0x397ac8: 0x50a4000c  beql        $a1, $a0, . + 4 + (0xC << 2)
label_397acc:
    if (ctx->pc == 0x397ACCu) {
        ctx->pc = 0x397ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AC8u;
        // 0x397acc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397AD0u;
        goto label_397ad0;
    }
    ctx->pc = 0x397AC8u;
    {
        const bool branch_taken_0x397ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x397ac8) {
            ctx->pc = 0x397ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397AC8u;
            // 0x397acc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397AFCu;
            goto label_397afc;
        }
    }
    ctx->pc = 0x397AD0u;
label_397ad0:
    // 0x397ad0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x397ad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_397ad4:
    // 0x397ad4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_397ad8:
    if (ctx->pc == 0x397AD8u) {
        ctx->pc = 0x397AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397AD4u;
        // 0x397ad8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397ADCu;
        goto label_397adc;
    }
    ctx->pc = 0x397AD4u;
    {
        const bool branch_taken_0x397ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397ad4) {
            ctx->pc = 0x397AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397AD4u;
            // 0x397ad8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397AFCu;
            goto label_397afc;
        }
    }
    ctx->pc = 0x397ADCu;
label_397adc:
    // 0x397adc: 0x50650007  beql        $v1, $a1, . + 4 + (0x7 << 2)
label_397ae0:
    if (ctx->pc == 0x397AE0u) {
        ctx->pc = 0x397AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397ADCu;
        // 0x397ae0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397AE4u;
        goto label_397ae4;
    }
    ctx->pc = 0x397ADCu;
    {
        const bool branch_taken_0x397adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x397adc) {
            ctx->pc = 0x397AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397ADCu;
            // 0x397ae0: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397AFCu;
            goto label_397afc;
        }
    }
    ctx->pc = 0x397AE4u;
label_397ae4:
    // 0x397ae4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x397ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_397ae8:
    // 0x397ae8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x397ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397aec:
    // 0x397aec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397af0:
    // 0x397af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x397af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_397af4:
    // 0x397af4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x397af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_397af8:
    // 0x397af8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x397af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_397afc:
    // 0x397afc: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x397afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_397b00:
    // 0x397b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x397b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_397b04:
    // 0x397b04: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x397b04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_397b08:
    // 0x397b08: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x397b08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_397b0c:
    // 0x397b0c: 0x50a4000c  beql        $a1, $a0, . + 4 + (0xC << 2)
label_397b10:
    if (ctx->pc == 0x397B10u) {
        ctx->pc = 0x397B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B0Cu;
        // 0x397b10: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B14u;
        goto label_397b14;
    }
    ctx->pc = 0x397B0Cu;
    {
        const bool branch_taken_0x397b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x397b0c) {
            ctx->pc = 0x397B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B0Cu;
            // 0x397b10: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397B40u;
            goto label_397b40;
        }
    }
    ctx->pc = 0x397B14u;
label_397b14:
    // 0x397b14: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x397b14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_397b18:
    // 0x397b18: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_397b1c:
    if (ctx->pc == 0x397B1Cu) {
        ctx->pc = 0x397B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B18u;
        // 0x397b1c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B20u;
        goto label_397b20;
    }
    ctx->pc = 0x397B18u;
    {
        const bool branch_taken_0x397b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397b18) {
            ctx->pc = 0x397B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B18u;
            // 0x397b1c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397B40u;
            goto label_397b40;
        }
    }
    ctx->pc = 0x397B20u;
label_397b20:
    // 0x397b20: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
label_397b24:
    if (ctx->pc == 0x397B24u) {
        ctx->pc = 0x397B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B20u;
        // 0x397b24: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B28u;
        goto label_397b28;
    }
    ctx->pc = 0x397B20u;
    {
        const bool branch_taken_0x397b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x397b20) {
            ctx->pc = 0x397B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B20u;
            // 0x397b24: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397B40u;
            goto label_397b40;
        }
    }
    ctx->pc = 0x397B28u;
label_397b28:
    // 0x397b28: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x397b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_397b2c:
    // 0x397b2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x397b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397b30:
    // 0x397b30: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397b34:
    // 0x397b34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x397b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_397b38:
    // 0x397b38: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x397b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_397b3c:
    // 0x397b3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x397b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_397b40:
    // 0x397b40: 0x24e20028  addiu       $v0, $a3, 0x28
    ctx->pc = 0x397b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_397b44:
    // 0x397b44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x397b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_397b48:
    // 0x397b48: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x397b48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_397b4c:
    // 0x397b4c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x397b4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_397b50:
    // 0x397b50: 0x50a4000c  beql        $a1, $a0, . + 4 + (0xC << 2)
label_397b54:
    if (ctx->pc == 0x397B54u) {
        ctx->pc = 0x397B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B50u;
        // 0x397b54: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B58u;
        goto label_397b58;
    }
    ctx->pc = 0x397B50u;
    {
        const bool branch_taken_0x397b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x397b50) {
            ctx->pc = 0x397B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B50u;
            // 0x397b54: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397B84u;
            goto label_397b84;
        }
    }
    ctx->pc = 0x397B58u;
label_397b58:
    // 0x397b58: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x397b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_397b5c:
    // 0x397b5c: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_397b60:
    if (ctx->pc == 0x397B60u) {
        ctx->pc = 0x397B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B5Cu;
        // 0x397b60: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B64u;
        goto label_397b64;
    }
    ctx->pc = 0x397B5Cu;
    {
        const bool branch_taken_0x397b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x397b5c) {
            ctx->pc = 0x397B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B5Cu;
            // 0x397b60: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397B84u;
            goto label_397b84;
        }
    }
    ctx->pc = 0x397B64u;
label_397b64:
    // 0x397b64: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
label_397b68:
    if (ctx->pc == 0x397B68u) {
        ctx->pc = 0x397B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B64u;
        // 0x397b68: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B6Cu;
        goto label_397b6c;
    }
    ctx->pc = 0x397B64u;
    {
        const bool branch_taken_0x397b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x397b64) {
            ctx->pc = 0x397B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B64u;
            // 0x397b68: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397B84u;
            goto label_397b84;
        }
    }
    ctx->pc = 0x397B6Cu;
label_397b6c:
    // 0x397b6c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x397b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_397b70:
    // 0x397b70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397b74:
    // 0x397b74: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x397b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397b78:
    // 0x397b78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x397b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_397b7c:
    // 0x397b7c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x397b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_397b80:
    // 0x397b80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x397b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_397b84:
    // 0x397b84: 0x24e2003c  addiu       $v0, $a3, 0x3C
    ctx->pc = 0x397b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_397b88:
    // 0x397b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x397b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_397b8c:
    // 0x397b8c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x397b8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_397b90:
    // 0x397b90: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x397b90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_397b94:
    // 0x397b94: 0x50a4000b  beql        $a1, $a0, . + 4 + (0xB << 2)
label_397b98:
    if (ctx->pc == 0x397B98u) {
        ctx->pc = 0x397B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B94u;
        // 0x397b98: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397B9Cu;
        goto label_397b9c;
    }
    ctx->pc = 0x397B94u;
    {
        const bool branch_taken_0x397b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x397b94) {
            ctx->pc = 0x397B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397B94u;
            // 0x397b98: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397BC4u;
            goto label_397bc4;
        }
    }
    ctx->pc = 0x397B9Cu;
label_397b9c:
    // 0x397b9c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x397b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_397ba0:
    // 0x397ba0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_397ba4:
    if (ctx->pc == 0x397BA4u) {
        ctx->pc = 0x397BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BA0u;
        // 0x397ba4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BA8u;
        goto label_397ba8;
    }
    ctx->pc = 0x397BA0u;
    {
        const bool branch_taken_0x397ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x397BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BA0u;
        // 0x397ba4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ba0) {
            ctx->pc = 0x397BC4u;
            goto label_397bc4;
        }
    }
    ctx->pc = 0x397BA8u;
label_397ba8:
    // 0x397ba8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_397bac:
    if (ctx->pc == 0x397BACu) {
        ctx->pc = 0x397BB0u;
        goto label_397bb0;
    }
    ctx->pc = 0x397BA8u;
    {
        const bool branch_taken_0x397ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x397ba8) {
            ctx->pc = 0x397BC4u;
            goto label_397bc4;
        }
    }
    ctx->pc = 0x397BB0u;
label_397bb0:
    // 0x397bb0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x397bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_397bb4:
    // 0x397bb4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397bb8:
    // 0x397bb8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397bbc:
    // 0x397bbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x397bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_397bc0:
    // 0x397bc0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x397bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_397bc4:
    // 0x397bc4: 0x248102b  sltu        $v0, $s2, $t0
    ctx->pc = 0x397bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_397bc8:
    // 0x397bc8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_397bcc:
    if (ctx->pc == 0x397BCCu) {
        ctx->pc = 0x397BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BC8u;
        // 0x397bcc: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BD0u;
        goto label_397bd0;
    }
    ctx->pc = 0x397BC8u;
    {
        const bool branch_taken_0x397bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BC8u;
        // 0x397bcc: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397bc8) {
            ctx->pc = 0x397AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397ab8;
        }
    }
    ctx->pc = 0x397BD0u;
label_397bd0:
    // 0x397bd0: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x397bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_397bd4:
    // 0x397bd4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x397bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397bd8:
    // 0x397bd8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397bdc:
    // 0x397bdc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x397bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_397be0:
    // 0x397be0: 0x24e70458  addiu       $a3, $a3, 0x458
    ctx->pc = 0x397be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1112));
label_397be4:
    // 0x397be4: 0xc0bbc9c  jal         func_2EF270
label_397be8:
    if (ctx->pc == 0x397BE8u) {
        ctx->pc = 0x397BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BE4u;
        // 0x397be8: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BECu;
        goto label_397bec;
    }
    ctx->pc = 0x397BE4u;
    SET_GPR_U32(ctx, 31, 0x397BECu);
    ctx->pc = 0x397BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397BE4u;
    // 0x397be8: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x397BE4u, 0x397BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397BECu;
label_397bec:
    // 0x397bec: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x397becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397bf0:
    // 0x397bf0: 0x3c6102b  sltu        $v0, $fp, $a2
    ctx->pc = 0x397bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_397bf4:
    // 0x397bf4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_397bf8:
    if (ctx->pc == 0x397BF8u) {
        ctx->pc = 0x397BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BF4u;
        // 0x397bf8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397BFCu;
        goto label_397bfc;
    }
    ctx->pc = 0x397BF4u;
    {
        const bool branch_taken_0x397bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397BF4u;
        // 0x397bf8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397bf4) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397BFCu;
label_397bfc:
    // 0x397bfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x397bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397c00:
    // 0x397c00: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397c04:
    // 0x397c04: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x397c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_397c08:
    // 0x397c08: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x397c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_397c0c:
    // 0x397c0c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x397c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_397c10:
    // 0x397c10: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x397c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_397c14:
    // 0x397c14: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_397c18:
    if (ctx->pc == 0x397C18u) {
        ctx->pc = 0x397C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C14u;
        // 0x397c18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C1Cu;
        goto label_397c1c;
    }
    ctx->pc = 0x397C14u;
    {
        const bool branch_taken_0x397c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C14u;
        // 0x397c18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c14) {
            ctx->pc = 0x397C84u;
            goto label_397c84;
        }
    }
    ctx->pc = 0x397C1Cu;
label_397c1c:
    // 0x397c1c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_397c20:
    if (ctx->pc == 0x397C20u) {
        ctx->pc = 0x397C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C1Cu;
        // 0x397c20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C24u;
        goto label_397c24;
    }
    ctx->pc = 0x397C1Cu;
    {
        const bool branch_taken_0x397c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C1Cu;
        // 0x397c20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397c1c) {
            ctx->pc = 0x397CB4u;
            goto label_397cb4;
        }
    }
    ctx->pc = 0x397C24u;
label_397c24:
    // 0x397c24: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_397c28:
    if (ctx->pc == 0x397C28u) {
        ctx->pc = 0x397C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C24u;
        // 0x397c28: 0x8cc3fffc  lw          $v1, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C2Cu;
        goto label_397c2c;
    }
    ctx->pc = 0x397C24u;
    {
        const bool branch_taken_0x397c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397c24) {
            ctx->pc = 0x397C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397C24u;
            // 0x397c28: 0x8cc3fffc  lw          $v1, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397C88u;
            goto label_397c88;
        }
    }
    ctx->pc = 0x397C2Cu;
label_397c2c:
    // 0x397c2c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x397c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_397c30:
    // 0x397c30: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_397c34:
    if (ctx->pc == 0x397C34u) {
        ctx->pc = 0x397C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397C30u;
        // 0x397c34: 0x8cc3fffc  lw          $v1, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397C38u;
        goto label_397c38;
    }
    ctx->pc = 0x397C30u;
    {
        const bool branch_taken_0x397c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397c30) {
            ctx->pc = 0x397C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397C30u;
            // 0x397c34: 0x8cc3fffc  lw          $v1, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397C64u;
            goto label_397c64;
        }
    }
    ctx->pc = 0x397C38u;
label_397c38:
    // 0x397c38: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x397c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397c3c:
    // 0x397c3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x397c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_397c40:
    // 0x397c40: 0x8c83fffc  lw          $v1, -0x4($a0)
    ctx->pc = 0x397c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_397c44:
    // 0x397c44: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x397c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_397c48:
    // 0x397c48: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x397c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_397c4c:
    // 0x397c4c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x397c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397c50:
    // 0x397c50: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x397c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_397c54:
    // 0x397c54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x397c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397c58:
    // 0x397c58: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x397c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_397c5c:
    // 0x397c5c: 0xa2f00b  movn        $fp, $a1, $v0
    ctx->pc = 0x397c5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
label_397c60:
    // 0x397c60: 0x8cc3fffc  lw          $v1, -0x4($a2)
    ctx->pc = 0x397c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_397c64:
    // 0x397c64: 0x27c50001  addiu       $a1, $fp, 0x1
    ctx->pc = 0x397c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_397c68:
    // 0x397c68: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x397c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_397c6c:
    // 0x397c6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x397c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_397c70:
    // 0x397c70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x397c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397c74:
    // 0x397c74: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397c78:
    // 0x397c78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x397c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397c7c:
    // 0x397c7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x397c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_397c80:
    // 0x397c80: 0xa2f00b  movn        $fp, $a1, $v0
    ctx->pc = 0x397c80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
label_397c84:
    // 0x397c84: 0x8cc3fffc  lw          $v1, -0x4($a2)
    ctx->pc = 0x397c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_397c88:
    // 0x397c88: 0x27c50001  addiu       $a1, $fp, 0x1
    ctx->pc = 0x397c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_397c8c:
    // 0x397c8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x397c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_397c90:
    // 0x397c90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x397c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_397c94:
    // 0x397c94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x397c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397c98:
    // 0x397c98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x397c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397c9c:
    // 0x397c9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x397c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397ca0:
    // 0x397ca0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x397ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397ca4:
    // 0x397ca4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x397ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_397ca8:
    // 0x397ca8: 0x244502b  sltu        $t2, $s2, $a0
    ctx->pc = 0x397ca8u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_397cac:
    // 0x397cac: 0x11400026  beqz        $t2, . + 4 + (0x26 << 2)
label_397cb0:
    if (ctx->pc == 0x397CB0u) {
        ctx->pc = 0x397CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CACu;
        // 0x397cb0: 0xa2f00b  movn        $fp, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397CB4u;
        goto label_397cb4;
    }
    ctx->pc = 0x397CACu;
    {
        const bool branch_taken_0x397cac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x397CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CACu;
        // 0x397cb0: 0xa2f00b  movn        $fp, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cac) {
            ctx->pc = 0x397D48u;
            goto label_397d48;
        }
    }
    ctx->pc = 0x397CB4u;
label_397cb4:
    // 0x397cb4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x397cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_397cb8:
    // 0x397cb8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x397cb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_397cbc:
    // 0x397cbc: 0x0  nop
    ctx->pc = 0x397cbcu;
    // NOP
label_397cc0:
    // 0x397cc0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397cc4:
    // 0x397cc4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x397cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_397cc8:
    // 0x397cc8: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x397cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_397ccc:
    // 0x397ccc: 0x27c70001  addiu       $a3, $fp, 0x1
    ctx->pc = 0x397cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_397cd0:
    // 0x397cd0: 0x8d23fffc  lw          $v1, -0x4($t1)
    ctx->pc = 0x397cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
label_397cd4:
    // 0x397cd4: 0x245502b  sltu        $t2, $s2, $a1
    ctx->pc = 0x397cd4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_397cd8:
    // 0x397cd8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x397cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_397cdc:
    // 0x397cdc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x397cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_397ce0:
    // 0x397ce0: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x397ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_397ce4:
    // 0x397ce4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x397ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397ce8:
    // 0x397ce8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x397ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_397cec:
    // 0x397cec: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x397cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_397cf0:
    // 0x397cf0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x397cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_397cf4:
    // 0x397cf4: 0xe2f00b  movn        $fp, $a3, $v0
    ctx->pc = 0x397cf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 7));
label_397cf8:
    // 0x397cf8: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x397cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_397cfc:
    // 0x397cfc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x397cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_397d00:
    // 0x397d00: 0x27c70001  addiu       $a3, $fp, 0x1
    ctx->pc = 0x397d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_397d04:
    // 0x397d04: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x397d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_397d08:
    // 0x397d08: 0xe3f00b  movn        $fp, $a3, $v1
    ctx->pc = 0x397d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 7));
label_397d0c:
    // 0x397d0c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x397d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_397d10:
    // 0x397d10: 0x27c70001  addiu       $a3, $fp, 0x1
    ctx->pc = 0x397d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_397d14:
    // 0x397d14: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x397d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_397d18:
    // 0x397d18: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x397d18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_397d1c:
    // 0x397d1c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x397d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_397d20:
    // 0x397d20: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x397d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_397d24:
    // 0x397d24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x397d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397d28:
    // 0x397d28: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x397d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_397d2c:
    // 0x397d2c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x397d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_397d30:
    // 0x397d30: 0xe4f00b  movn        $fp, $a3, $a0
    ctx->pc = 0x397d30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 7));
label_397d34:
    // 0x397d34: 0x27c40001  addiu       $a0, $fp, 0x1
    ctx->pc = 0x397d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_397d38:
    // 0x397d38: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x397d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_397d3c:
    // 0x397d3c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x397d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_397d40:
    // 0x397d40: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
label_397d44:
    if (ctx->pc == 0x397D44u) {
        ctx->pc = 0x397D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D40u;
        // 0x397d44: 0x82f00b  movn        $fp, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D48u;
        goto label_397d48;
    }
    ctx->pc = 0x397D40u;
    {
        const bool branch_taken_0x397d40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x397D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D40u;
        // 0x397d44: 0x82f00b  movn        $fp, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d40) {
            ctx->pc = 0x397CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397cc0;
        }
    }
    ctx->pc = 0x397D48u;
label_397d48:
    // 0x397d48: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x397d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_397d4c:
    // 0x397d4c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x397d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_397d50:
    // 0x397d50: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x397d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_397d54:
    // 0x397d54: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x397d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_397d58:
    // 0x397d58: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x397d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_397d5c:
    // 0x397d5c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x397d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_397d60:
    // 0x397d60: 0x40f809  jalr        $v0
label_397d64:
    if (ctx->pc == 0x397D64u) {
        ctx->pc = 0x397D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D60u;
        // 0x397d64: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D68u;
        goto label_397d68;
    }
    ctx->pc = 0x397D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397D68u);
        ctx->pc = 0x397D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D60u;
        // 0x397d64: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397D60u, 0x397D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397D68u;
label_397d68:
    // 0x397d68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x397d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397d6c:
    // 0x397d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397d70:
    // 0x397d70: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x397d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_397d74:
    // 0x397d74: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x397d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397d78:
    // 0x397d78: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_397d7c:
    if (ctx->pc == 0x397D7Cu) {
        ctx->pc = 0x397D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D78u;
        // 0x397d7c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397D80u;
        goto label_397d80;
    }
    ctx->pc = 0x397D78u;
    {
        const bool branch_taken_0x397d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D78u;
        // 0x397d7c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d78) {
            ctx->pc = 0x397EF4u;
            goto label_397ef4;
        }
    }
    ctx->pc = 0x397D80u;
label_397d80:
    // 0x397d80: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397d84:
    // 0x397d84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x397d84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397d88:
    // 0x397d88: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x397d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397d8c:
    // 0x397d8c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x397d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_397d90:
    // 0x397d90: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x397d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397d94:
    // 0x397d94: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x397d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_397d98:
    // 0x397d98: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x397d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_397d9c:
    // 0x397d9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x397d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_397da0:
    // 0x397da0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x397da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_397da4:
    // 0x397da4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_397da8:
    if (ctx->pc == 0x397DA8u) {
        ctx->pc = 0x397DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DA4u;
        // 0x397da8: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DACu;
        goto label_397dac;
    }
    ctx->pc = 0x397DA4u;
    {
        const bool branch_taken_0x397da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DA4u;
        // 0x397da8: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397da4) {
            ctx->pc = 0x397DB4u;
            goto label_397db4;
        }
    }
    ctx->pc = 0x397DACu;
label_397dac:
    // 0x397dac: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_397db0:
    if (ctx->pc == 0x397DB0u) {
        ctx->pc = 0x397DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DACu;
        // 0x397db0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DB4u;
        goto label_397db4;
    }
    ctx->pc = 0x397DACu;
    {
        const bool branch_taken_0x397dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x397DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DACu;
        // 0x397db0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397dac) {
            ctx->pc = 0x397E24u;
            goto label_397e24;
        }
    }
    ctx->pc = 0x397DB4u;
label_397db4:
    // 0x397db4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x397db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397db8:
    // 0x397db8: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x397db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_397dbc:
    // 0x397dbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x397dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_397dc0:
    // 0x397dc0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x397dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397dc4:
    // 0x397dc4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x397dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397dc8:
    // 0x397dc8: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
label_397dcc:
    if (ctx->pc == 0x397DCCu) {
        ctx->pc = 0x397DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DC8u;
        // 0x397dcc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DD0u;
        goto label_397dd0;
    }
    ctx->pc = 0x397DC8u;
    {
        const bool branch_taken_0x397dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x397DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DC8u;
        // 0x397dcc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397dc8) {
            ctx->pc = 0x397E04u;
            goto label_397e04;
        }
    }
    ctx->pc = 0x397DD0u;
label_397dd0:
    // 0x397dd0: 0xc0e5050  jal         func_394140
label_397dd4:
    if (ctx->pc == 0x397DD4u) {
        ctx->pc = 0x397DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DD0u;
        // 0x397dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397DD8u;
        goto label_397dd8;
    }
    ctx->pc = 0x397DD0u;
    SET_GPR_U32(ctx, 31, 0x397DD8u);
    ctx->pc = 0x397DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397DD0u;
    // 0x397dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394140u, 0x397DD0u, 0x397DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397DD8u;
label_397dd8:
    // 0x397dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x397dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397ddc:
    // 0x397ddc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x397ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_397de0:
    // 0x397de0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x397de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_397de4:
    // 0x397de4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x397de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_397de8:
    // 0x397de8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x397de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_397dec:
    // 0x397dec: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x397decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397df0:
    // 0x397df0: 0x24d00004  addiu       $s0, $a2, 0x4
    ctx->pc = 0x397df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_397df4:
    // 0x397df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x397df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397df8:
    // 0x397df8: 0x60f809  jalr        $v1
label_397dfc:
    if (ctx->pc == 0x397DFCu) {
        ctx->pc = 0x397DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DF8u;
        // 0x397dfc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E00u;
        goto label_397e00;
    }
    ctx->pc = 0x397DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397E00u);
        ctx->pc = 0x397DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DF8u;
        // 0x397dfc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397DF8u, 0x397E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397E00u;
label_397e00:
    // 0x397e00: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x397e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_397e04:
    // 0x397e04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x397e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397e08:
    // 0x397e08: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x397e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_397e0c:
    // 0x397e0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x397e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397e10:
    // 0x397e10: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x397e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_397e14:
    // 0x397e14: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x397e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397e18:
    // 0x397e18: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_397e1c:
    if (ctx->pc == 0x397E1Cu) {
        ctx->pc = 0x397E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E18u;
        // 0x397e1c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E20u;
        goto label_397e20;
    }
    ctx->pc = 0x397E18u;
    {
        const bool branch_taken_0x397e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E18u;
        // 0x397e1c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e18) {
            ctx->pc = 0x397EF4u;
            goto label_397ef4;
        }
    }
    ctx->pc = 0x397E20u;
label_397e20:
    // 0x397e20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x397e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397e24:
    // 0x397e24: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x397e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_397e28:
    // 0x397e28: 0x8e63fffc  lw          $v1, -0x4($s3)
    ctx->pc = 0x397e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
label_397e2c:
    // 0x397e2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x397e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_397e30:
    // 0x397e30: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x397e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_397e34:
    // 0x397e34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x397e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397e38:
    // 0x397e38: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
label_397e3c:
    if (ctx->pc == 0x397E3Cu) {
        ctx->pc = 0x397E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E38u;
        // 0x397e3c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E40u;
        goto label_397e40;
    }
    ctx->pc = 0x397E38u;
    {
        const bool branch_taken_0x397e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x397E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E38u;
        // 0x397e3c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e38) {
            ctx->pc = 0x397E7Cu;
            goto label_397e7c;
        }
    }
    ctx->pc = 0x397E40u;
label_397e40:
    // 0x397e40: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x397e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_397e44:
    // 0x397e44: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x397e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397e48:
    // 0x397e48: 0x2472823  subu        $a1, $s2, $a3
    ctx->pc = 0x397e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_397e4c:
    // 0x397e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x397e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_397e50:
    // 0x397e50: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x397e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_397e54:
    // 0x397e54: 0xc0e5050  jal         func_394140
label_397e58:
    if (ctx->pc == 0x397E58u) {
        ctx->pc = 0x397E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E54u;
        // 0x397e58: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E5Cu;
        goto label_397e5c;
    }
    ctx->pc = 0x397E54u;
    SET_GPR_U32(ctx, 31, 0x397E5Cu);
    ctx->pc = 0x397E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E54u;
    // 0x397e58: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394140u, 0x397E54u, 0x397E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E5Cu;
label_397e5c:
    // 0x397e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x397e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_397e60:
    // 0x397e60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x397e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_397e64:
    // 0x397e64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x397e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_397e68:
    // 0x397e68: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x397e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_397e6c:
    // 0x397e6c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x397e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397e70:
    // 0x397e70: 0x60f809  jalr        $v1
label_397e74:
    if (ctx->pc == 0x397E74u) {
        ctx->pc = 0x397E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E70u;
        // 0x397e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E78u;
        goto label_397e78;
    }
    ctx->pc = 0x397E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397E78u);
        ctx->pc = 0x397E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E70u;
        // 0x397e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E70u, 0x397E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397E78u;
label_397e78:
    // 0x397e78: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x397e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_397e7c:
    // 0x397e7c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x397e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_397e80:
    // 0x397e80: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x397e80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_397e84:
    // 0x397e84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x397e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_397e88:
    // 0x397e88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x397e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_397e8c:
    // 0x397e8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x397e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397e90:
    // 0x397e90: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_397e94:
    if (ctx->pc == 0x397E94u) {
        ctx->pc = 0x397E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E90u;
        // 0x397e94: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397E98u;
        goto label_397e98;
    }
    ctx->pc = 0x397E90u;
    {
        const bool branch_taken_0x397e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x397E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E90u;
        // 0x397e94: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e90) {
            ctx->pc = 0x397ED8u;
            goto label_397ed8;
        }
    }
    ctx->pc = 0x397E98u;
label_397e98:
    // 0x397e98: 0xc72823  subu        $a1, $a2, $a3
    ctx->pc = 0x397e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_397e9c:
    // 0x397e9c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x397e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_397ea0:
    // 0x397ea0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x397ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397ea4:
    // 0x397ea4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x397ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_397ea8:
    // 0x397ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x397ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_397eac:
    // 0x397eac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x397eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_397eb0:
    // 0x397eb0: 0xc0e5050  jal         func_394140
label_397eb4:
    if (ctx->pc == 0x397EB4u) {
        ctx->pc = 0x397EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397EB0u;
        // 0x397eb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397EB8u;
        goto label_397eb8;
    }
    ctx->pc = 0x397EB0u;
    SET_GPR_U32(ctx, 31, 0x397EB8u);
    ctx->pc = 0x397EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397EB0u;
    // 0x397eb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394140u, 0x397EB0u, 0x397EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397EB8u;
label_397eb8:
    // 0x397eb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x397eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_397ebc:
    // 0x397ebc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x397ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_397ec0:
    // 0x397ec0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x397ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_397ec4:
    // 0x397ec4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x397ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_397ec8:
    // 0x397ec8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x397ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397ecc:
    // 0x397ecc: 0x60f809  jalr        $v1
label_397ed0:
    if (ctx->pc == 0x397ED0u) {
        ctx->pc = 0x397ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397ECCu;
        // 0x397ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397ED4u;
        goto label_397ed4;
    }
    ctx->pc = 0x397ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397ED4u);
        ctx->pc = 0x397ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397ECCu;
        // 0x397ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397ECCu, 0x397ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397ED4u;
label_397ed4:
    // 0x397ed4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x397ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_397ed8:
    // 0x397ed8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397edc:
    // 0x397edc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x397edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_397ee0:
    // 0x397ee0: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x397ee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_397ee4:
    // 0x397ee4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x397ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_397ee8:
    // 0x397ee8: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x397ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_397eec:
    // 0x397eec: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_397ef0:
    if (ctx->pc == 0x397EF0u) {
        ctx->pc = 0x397EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397EECu;
        // 0x397ef0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397EF4u;
        goto label_397ef4;
    }
    ctx->pc = 0x397EECu;
    {
        const bool branch_taken_0x397eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397EECu;
        // 0x397ef0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397eec) {
            ctx->pc = 0x397E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397e28;
        }
    }
    ctx->pc = 0x397EF4u;
label_397ef4:
    // 0x397ef4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x397ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397ef8:
    // 0x397ef8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x397ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_397efc:
    // 0x397efc: 0x2472823  subu        $a1, $s2, $a3
    ctx->pc = 0x397efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_397f00:
    // 0x397f00: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x397f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_397f04:
    // 0x397f04: 0xc0e5050  jal         func_394140
label_397f08:
    if (ctx->pc == 0x397F08u) {
        ctx->pc = 0x397F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F04u;
        // 0x397f08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397F0Cu;
        goto label_397f0c;
    }
    ctx->pc = 0x397F04u;
    SET_GPR_U32(ctx, 31, 0x397F0Cu);
    ctx->pc = 0x397F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F04u;
    // 0x397f08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394140u, 0x397F04u, 0x397F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F0Cu;
label_397f0c:
    // 0x397f0c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x397f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_397f10:
    // 0x397f10: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x397f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_397f14:
    // 0x397f14: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x397f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_397f18:
    // 0x397f18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x397f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_397f1c:
    // 0x397f1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x397f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_397f20:
    // 0x397f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x397f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397f24:
    // 0x397f24: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x397f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_397f28:
    // 0x397f28: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x397f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_397f2c:
    // 0x397f2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x397f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_397f30:
    // 0x397f30: 0xc0f809  jalr        $a2
label_397f34:
    if (ctx->pc == 0x397F34u) {
        ctx->pc = 0x397F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F30u;
        // 0x397f34: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397F38u;
        goto label_397f38;
    }
    ctx->pc = 0x397F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x397F38u);
        ctx->pc = 0x397F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F30u;
        // 0x397f34: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397F30u, 0x397F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397F38u;
label_397f38:
    // 0x397f38: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397f3c:
    // 0x397f3c: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x397f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_397f40:
    // 0x397f40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x397f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_397f44:
    // 0x397f44: 0xb02018  mult        $a0, $a1, $s0
    ctx->pc = 0x397f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_397f48:
    // 0x397f48: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x397f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_397f4c:
    // 0x397f4c: 0x3d08018  mult        $s0, $fp, $s0
    ctx->pc = 0x397f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_397f50:
    // 0x397f50: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x397f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_397f54:
    // 0x397f54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x397f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_397f58:
    // 0x397f58: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x397f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_397f5c:
    // 0x397f5c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x397f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_397f60:
    // 0x397f60: 0x40f809  jalr        $v0
label_397f64:
    if (ctx->pc == 0x397F64u) {
        ctx->pc = 0x397F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F60u;
        // 0x397f64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397F68u;
        goto label_397f68;
    }
    ctx->pc = 0x397F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397F68u);
        ctx->pc = 0x397F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F60u;
        // 0x397f64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397F60u, 0x397F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397F68u;
label_397f68:
    // 0x397f68: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x397f68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397f6c:
    // 0x397f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397f70:
    // 0x397f70: 0xa6fe0004  sh          $fp, 0x4($s7)
    ctx->pc = 0x397f70u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 30));
label_397f74:
    // 0x397f74: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x397f74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_397f78:
    // 0x397f78: 0x26f30010  addiu       $s3, $s7, 0x10
    ctx->pc = 0x397f78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_397f7c:
    // 0x397f7c: 0xa6e00006  sh          $zero, 0x6($s7)
    ctx->pc = 0x397f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 0));
label_397f80:
    // 0x397f80: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x397f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_397f84:
    // 0x397f84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x397f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397f88:
    // 0x397f88: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x397f88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
label_397f8c:
    // 0x397f8c: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x397f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_397f90:
    // 0x397f90: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_397f94:
    if (ctx->pc == 0x397F94u) {
        ctx->pc = 0x397F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F90u;
        // 0x397f94: 0xaee0000c  sw          $zero, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397F98u;
        goto label_397f98;
    }
    ctx->pc = 0x397F90u;
    {
        const bool branch_taken_0x397f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F90u;
        // 0x397f94: 0xaee0000c  sw          $zero, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f90) {
            ctx->pc = 0x398128u;
            goto label_398128;
        }
    }
    ctx->pc = 0x397F98u;
label_397f98:
    // 0x397f98: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x397f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397f9c:
    // 0x397f9c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x397f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_397fa0:
    // 0x397fa0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x397fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397fa4:
    // 0x397fa4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x397fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_397fa8:
    // 0x397fa8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x397fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_397fac:
    // 0x397fac: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x397facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_397fb0:
    // 0x397fb0: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x397fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_397fb4:
    // 0x397fb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x397fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_397fb8:
    // 0x397fb8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x397fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_397fbc:
    // 0x397fbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_397fc0:
    if (ctx->pc == 0x397FC0u) {
        ctx->pc = 0x397FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FBCu;
        // 0x397fc0: 0x8fb60004  lw          $s6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397FC4u;
        goto label_397fc4;
    }
    ctx->pc = 0x397FBCu;
    {
        const bool branch_taken_0x397fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FBCu;
        // 0x397fc0: 0x8fb60004  lw          $s6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fbc) {
            ctx->pc = 0x397FCCu;
            goto label_397fcc;
        }
    }
    ctx->pc = 0x397FC4u;
label_397fc4:
    // 0x397fc4: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_397fc8:
    if (ctx->pc == 0x397FC8u) {
        ctx->pc = 0x397FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FC4u;
        // 0x397fc8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397FCCu;
        goto label_397fcc;
    }
    ctx->pc = 0x397FC4u;
    {
        const bool branch_taken_0x397fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x397FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FC4u;
        // 0x397fc8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fc4) {
            ctx->pc = 0x398050u;
            goto label_398050;
        }
    }
    ctx->pc = 0x397FCCu;
label_397fcc:
    // 0x397fcc: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x397fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_397fd0:
    // 0x397fd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x397fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_397fd4:
    // 0x397fd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x397fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_397fd8:
    // 0x397fd8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x397fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_397fdc:
    // 0x397fdc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x397fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_397fe0:
    // 0x397fe0: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_397fe4:
    if (ctx->pc == 0x397FE4u) {
        ctx->pc = 0x397FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FE0u;
        // 0x397fe4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397FE8u;
        goto label_397fe8;
    }
    ctx->pc = 0x397FE0u;
    {
        const bool branch_taken_0x397fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x397FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FE0u;
        // 0x397fe4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fe0) {
            ctx->pc = 0x398034u;
            goto label_398034;
        }
    }
    ctx->pc = 0x397FE8u;
label_397fe8:
    // 0x397fe8: 0xaef00010  sw          $s0, 0x10($s7)
    ctx->pc = 0x397fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 16));
label_397fec:
    // 0x397fec: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x397fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_397ff0:
    // 0x397ff0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x397ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_397ff4:
    // 0x397ff4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x397ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_397ff8:
    // 0x397ff8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x397ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_397ffc:
    // 0x397ffc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x397ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_398000:
    // 0x398000: 0xc0e52c2  jal         func_394B08
label_398004:
    if (ctx->pc == 0x398004u) {
        ctx->pc = 0x398004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398000u;
        // 0x398004: 0x24560004  addiu       $s6, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398008u;
        goto label_398008;
    }
    ctx->pc = 0x398000u;
    SET_GPR_U32(ctx, 31, 0x398008u);
    ctx->pc = 0x398004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398000u;
    // 0x398004: 0x24560004  addiu       $s6, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394B08u, 0x398000u, 0x398008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398008u;
label_398008:
    // 0x398008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x398008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39800c:
    // 0x39800c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x39800cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_398010:
    // 0x398010: 0x26e3001c  addiu       $v1, $s7, 0x1C
    ctx->pc = 0x398010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
label_398014:
    // 0x398014: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x398014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_398018:
    // 0x398018: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x398018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39801c:
    // 0x39801c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x39801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_398020:
    // 0x398020: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x398020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398024:
    // 0x398024: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x398024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_398028:
    // 0x398028: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x398028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_39802c:
    // 0x39802c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x39802cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_398030:
    // 0x398030: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x398030u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
label_398034:
    // 0x398034: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x398034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_398038:
    // 0x398038: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x398038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39803c:
    // 0x39803c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x39803cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_398040:
    // 0x398040: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x398040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_398044:
    // 0x398044: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_398048:
    if (ctx->pc == 0x398048u) {
        ctx->pc = 0x398048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398044u;
        // 0x398048: 0x24a40008  addiu       $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39804Cu;
        goto label_39804c;
    }
    ctx->pc = 0x398044u;
    {
        const bool branch_taken_0x398044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398044u;
        // 0x398048: 0x24a40008  addiu       $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398044) {
            ctx->pc = 0x398128u;
            goto label_398128;
        }
    }
    ctx->pc = 0x39804Cu;
label_39804c:
    // 0x39804c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39804cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398050:
    // 0x398050: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x398050u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_398054:
    // 0x398054: 0x0  nop
    ctx->pc = 0x398054u;
    // NOP
label_398058:
    // 0x398058: 0x8ea2fffc  lw          $v0, -0x4($s5)
    ctx->pc = 0x398058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967292)));
label_39805c:
    // 0x39805c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x39805cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_398060:
    // 0x398060: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x398060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_398064:
    // 0x398064: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x398064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_398068:
    // 0x398068: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_39806c:
    if (ctx->pc == 0x39806Cu) {
        ctx->pc = 0x39806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398068u;
        // 0x39806c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398070u;
        goto label_398070;
    }
    ctx->pc = 0x398068u;
    {
        const bool branch_taken_0x398068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398068u;
        // 0x39806c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398068) {
            ctx->pc = 0x3980B4u;
            goto label_3980b4;
        }
    }
    ctx->pc = 0x398070u;
label_398070:
    // 0x398070: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x398070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_398074:
    // 0x398074: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x398074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_398078:
    // 0x398078: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x398078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_39807c:
    // 0x39807c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x39807cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_398080:
    // 0x398080: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x398080u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_398084:
    // 0x398084: 0xc0e52c2  jal         func_394B08
label_398088:
    if (ctx->pc == 0x398088u) {
        ctx->pc = 0x398088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398084u;
        // 0x398088: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39808Cu;
        goto label_39808c;
    }
    ctx->pc = 0x398084u;
    SET_GPR_U32(ctx, 31, 0x39808Cu);
    ctx->pc = 0x398088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398084u;
    // 0x398088: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394B08u, 0x398084u, 0x39808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39808Cu;
label_39808c:
    // 0x39808c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x39808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_398090:
    // 0x398090: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x398090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_398094:
    // 0x398094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x398094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_398098:
    // 0x398098: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x398098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_39809c:
    // 0x39809c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x39809cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_3980a0:
    // 0x3980a0: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x3980a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3980a4:
    // 0x3980a4: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x3980a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3980a8:
    // 0x3980a8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x3980a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_3980ac:
    // 0x3980ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3980acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3980b0:
    // 0x3980b0: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x3980b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
label_3980b4:
    // 0x3980b4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3980b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3980b8:
    // 0x3980b8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3980b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3980bc:
    // 0x3980bc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3980bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3980c0:
    // 0x3980c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3980c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3980c4:
    // 0x3980c4: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_3980c8:
    if (ctx->pc == 0x3980C8u) {
        ctx->pc = 0x3980C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980C4u;
        // 0x3980c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3980CCu;
        goto label_3980cc;
    }
    ctx->pc = 0x3980C4u;
    {
        const bool branch_taken_0x3980c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3980C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980C4u;
        // 0x3980c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3980c4) {
            ctx->pc = 0x398110u;
            goto label_398110;
        }
    }
    ctx->pc = 0x3980CCu;
label_3980cc:
    // 0x3980cc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3980ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_3980d0:
    // 0x3980d0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3980d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3980d4:
    // 0x3980d4: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x3980d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3980d8:
    // 0x3980d8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3980d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3980dc:
    // 0x3980dc: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x3980dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_3980e0:
    // 0x3980e0: 0xc0e52c2  jal         func_394B08
label_3980e4:
    if (ctx->pc == 0x3980E4u) {
        ctx->pc = 0x3980E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980E0u;
        // 0x3980e4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3980E8u;
        goto label_3980e8;
    }
    ctx->pc = 0x3980E0u;
    SET_GPR_U32(ctx, 31, 0x3980E8u);
    ctx->pc = 0x3980E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980E0u;
    // 0x3980e4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394B08u, 0x3980E0u, 0x3980E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980E8u;
label_3980e8:
    // 0x3980e8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3980e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3980ec:
    // 0x3980ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3980ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3980f0:
    // 0x3980f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3980f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3980f4:
    // 0x3980f4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3980f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3980f8:
    // 0x3980f8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x3980f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_3980fc:
    // 0x3980fc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x3980fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398100:
    // 0x398100: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x398100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_398104:
    // 0x398104: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x398104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_398108:
    // 0x398108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x398108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39810c:
    // 0x39810c: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x39810cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
label_398110:
    // 0x398110: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x398110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_398114:
    // 0x398114: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x398114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_398118:
    // 0x398118: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x398118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_39811c:
    // 0x39811c: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x39811cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_398120:
    // 0x398120: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_398124:
    if (ctx->pc == 0x398124u) {
        ctx->pc = 0x398124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398120u;
        // 0x398124: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398128u;
        goto label_398128;
    }
    ctx->pc = 0x398120u;
    {
        const bool branch_taken_0x398120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398120u;
        // 0x398124: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398120) {
            ctx->pc = 0x398058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398058;
        }
    }
    ctx->pc = 0x398128u;
label_398128:
    // 0x398128: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x398128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39812c:
    // 0x39812c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x39812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_398130:
    // 0x398130: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x398130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_398134:
    // 0x398134: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x398134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398138:
    // 0x398138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x398138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39813c:
    // 0x39813c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39813cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_398140:
    // 0x398140: 0x8c47fffc  lw          $a3, -0x4($v0)
    ctx->pc = 0x398140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_398144:
    // 0x398144: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x398144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_398148:
    // 0x398148: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x398148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39814c:
    // 0x39814c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_398150:
    // 0x398150: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x398150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_398154:
    // 0x398154: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x398154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398158:
    // 0x398158: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x398158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39815c:
    // 0x39815c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x39815cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_398160:
    // 0x398160: 0xc0e52c2  jal         func_394B08
label_398164:
    if (ctx->pc == 0x398164u) {
        ctx->pc = 0x398164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398160u;
        // 0x398164: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398168u;
        goto label_398168;
    }
    ctx->pc = 0x398160u;
    SET_GPR_U32(ctx, 31, 0x398168u);
    ctx->pc = 0x398164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398160u;
    // 0x398164: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394B08u, 0x398160u, 0x398168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398168u;
label_398168:
    // 0x398168: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x398168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_39816c:
    // 0x39816c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_398170:
    // 0x398170: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x398170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_398174:
    // 0x398174: 0x2447e880  addiu       $a3, $v0, -0x1780
    ctx->pc = 0x398174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_398178:
    // 0x398178: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x398178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_39817c:
    // 0x39817c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x39817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_398180:
    // 0x398180: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x398180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_398184:
    // 0x398184: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x398184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_398188:
    // 0x398188: 0x8ce20110  lw          $v0, 0x110($a3)
    ctx->pc = 0x398188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 272)));
label_39818c:
    // 0x39818c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x39818cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_398190:
    // 0x398190: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x398190u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
label_398194:
    // 0x398194: 0x2042823  subu        $a1, $s0, $a0
    ctx->pc = 0x398194u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_398198:
    // 0x398198: 0x40f809  jalr        $v0
label_39819c:
    if (ctx->pc == 0x39819Cu) {
        ctx->pc = 0x39819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398198u;
        // 0x39819c: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981A0u;
        goto label_3981a0;
    }
    ctx->pc = 0x398198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3981A0u);
        ctx->pc = 0x39819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398198u;
        // 0x39819c: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398198u, 0x3981A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3981A0u;
label_3981a0:
    // 0x3981a0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3981a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3981a4:
    // 0x3981a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3981a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3981a8:
    // 0x3981a8: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x3981a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3981ac:
    // 0x3981ac: 0x26f30010  addiu       $s3, $s7, 0x10
    ctx->pc = 0x3981acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_3981b0:
    // 0x3981b0: 0x13c00036  beqz        $fp, . + 4 + (0x36 << 2)
label_3981b4:
    if (ctx->pc == 0x3981B4u) {
        ctx->pc = 0x3981B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981B0u;
        // 0x3981b4: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981B8u;
        goto label_3981b8;
    }
    ctx->pc = 0x3981B0u;
    {
        const bool branch_taken_0x3981b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3981B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981B0u;
        // 0x3981b4: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981b0) {
            ctx->pc = 0x39828Cu;
            goto label_39828c;
        }
    }
    ctx->pc = 0x3981B8u;
label_3981b8:
    // 0x3981b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3981b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3981bc:
    // 0x3981bc: 0x1bc00014  blez        $fp, . + 4 + (0x14 << 2)
label_3981c0:
    if (ctx->pc == 0x3981C0u) {
        ctx->pc = 0x3981C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981BCu;
        // 0x3981c0: 0x33c30003  andi        $v1, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981C4u;
        goto label_3981c4;
    }
    ctx->pc = 0x3981BCu;
    {
        const bool branch_taken_0x3981bc = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3981C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981BCu;
        // 0x3981c0: 0x33c30003  andi        $v1, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981bc) {
            ctx->pc = 0x398210u;
            goto label_398210;
        }
    }
    ctx->pc = 0x3981C4u;
label_3981c4:
    // 0x3981c4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3981c8:
    if (ctx->pc == 0x3981C8u) {
        ctx->pc = 0x3981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981C4u;
        // 0x3981c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981CCu;
        goto label_3981cc;
    }
    ctx->pc = 0x3981C4u;
    {
        const bool branch_taken_0x3981c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981C4u;
        // 0x3981c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981c4) {
            ctx->pc = 0x398230u;
            goto label_398230;
        }
    }
    ctx->pc = 0x3981CCu;
label_3981cc:
    // 0x3981cc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3981d0:
    if (ctx->pc == 0x3981D0u) {
        ctx->pc = 0x3981D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981CCu;
        // 0x3981d0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981D4u;
        goto label_3981d4;
    }
    ctx->pc = 0x3981CCu;
    {
        const bool branch_taken_0x3981cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3981cc) {
            ctx->pc = 0x3981D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3981CCu;
            // 0x3981d0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398214u;
            goto label_398214;
        }
    }
    ctx->pc = 0x3981D4u;
label_3981d4:
    // 0x3981d4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3981d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3981d8:
    // 0x3981d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3981dc:
    if (ctx->pc == 0x3981DCu) {
        ctx->pc = 0x3981DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981D8u;
        // 0x3981dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3981E0u;
        goto label_3981e0;
    }
    ctx->pc = 0x3981D8u;
    {
        const bool branch_taken_0x3981d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3981d8) {
            ctx->pc = 0x3981DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3981D8u;
            // 0x3981dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3981FCu;
            goto label_3981fc;
        }
    }
    ctx->pc = 0x3981E0u;
label_3981e0:
    // 0x3981e0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3981e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3981e4:
    // 0x3981e4: 0x26e4001c  addiu       $a0, $s7, 0x1C
    ctx->pc = 0x3981e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
label_3981e8:
    // 0x3981e8: 0xaef00010  sw          $s0, 0x10($s7)
    ctx->pc = 0x3981e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 16));
label_3981ec:
    // 0x3981ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3981ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3981f0:
    // 0x3981f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3981f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3981f4:
    // 0x3981f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3981f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3981f8:
    // 0x3981f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3981f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3981fc:
    // 0x3981fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3981fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_398200:
    // 0x398200: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x398200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_398204:
    // 0x398204: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x398204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398208:
    // 0x398208: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x398208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_39820c:
    // 0x39820c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x39820cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_398210:
    // 0x398210: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x398210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_398214:
    // 0x398214: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x398214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_398218:
    // 0x398218: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x398218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_39821c:
    // 0x39821c: 0x25e382b  sltu        $a3, $s2, $fp
    ctx->pc = 0x39821cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_398220:
    // 0x398220: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x398220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398224:
    // 0x398224: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x398224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_398228:
    // 0x398228: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
label_39822c:
    if (ctx->pc == 0x39822Cu) {
        ctx->pc = 0x39822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398228u;
        // 0x39822c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398230u;
        goto label_398230;
    }
    ctx->pc = 0x398228u;
    {
        const bool branch_taken_0x398228 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398228u;
        // 0x39822c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398228) {
            ctx->pc = 0x39828Cu;
            goto label_39828c;
        }
    }
    ctx->pc = 0x398230u;
label_398230:
    // 0x398230: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x398230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398234:
    // 0x398234: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x398234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398238:
    // 0x398238: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x398238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_39823c:
    // 0x39823c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x39823cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_398240:
    // 0x398240: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x398240u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
label_398244:
    // 0x398244: 0x25e382b  sltu        $a3, $s2, $fp
    ctx->pc = 0x398244u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_398248:
    // 0x398248: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x398248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_39824c:
    // 0x39824c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x39824cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_398250:
    // 0x398250: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x398250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_398254:
    // 0x398254: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x398254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_398258:
    // 0x398258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x398258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_39825c:
    // 0x39825c: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x39825cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
label_398260:
    // 0x398260: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x398260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_398264:
    // 0x398264: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x398264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_398268:
    // 0x398268: 0xacd00018  sw          $s0, 0x18($a2)
    ctx->pc = 0x398268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 16));
label_39826c:
    // 0x39826c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x39826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_398270:
    // 0x398270: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x398270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_398274:
    // 0x398274: 0xacd00024  sw          $s0, 0x24($a2)
    ctx->pc = 0x398274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 16));
label_398278:
    // 0x398278: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x398278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_39827c:
    // 0x39827c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_398280:
    // 0x398280: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x398280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_398284:
    // 0x398284: 0x14e0ffec  bnez        $a3, . + 4 + (-0x14 << 2)
label_398288:
    if (ctx->pc == 0x398288u) {
        ctx->pc = 0x398288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398284u;
        // 0x398288: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39828Cu;
        goto label_39828c;
    }
    ctx->pc = 0x398284u;
    {
        const bool branch_taken_0x398284 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x398288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398284u;
        // 0x398288: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398284) {
            ctx->pc = 0x398238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398238;
        }
    }
    ctx->pc = 0x39828Cu;
label_39828c:
    // 0x39828c: 0x13c0002f  beqz        $fp, . + 4 + (0x2F << 2)
label_398290:
    if (ctx->pc == 0x398290u) {
        ctx->pc = 0x398290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39828Cu;
        // 0x398290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398294u;
        goto label_398294;
    }
    ctx->pc = 0x39828Cu;
    {
        const bool branch_taken_0x39828c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x398290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39828Cu;
        // 0x398290: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39828c) {
            ctx->pc = 0x39834Cu;
            goto label_39834c;
        }
    }
    ctx->pc = 0x398294u;
label_398294:
    // 0x398294: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x398294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_398298:
    // 0x398298: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x398298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39829c:
    // 0x39829c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x39829cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3982a0:
    // 0x3982a0: 0x1bc00014  blez        $fp, . + 4 + (0x14 << 2)
label_3982a4:
    if (ctx->pc == 0x3982A4u) {
        ctx->pc = 0x3982A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982A0u;
        // 0x3982a4: 0x33c30003  andi        $v1, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982A8u;
        goto label_3982a8;
    }
    ctx->pc = 0x3982A0u;
    {
        const bool branch_taken_0x3982a0 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3982A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982A0u;
        // 0x3982a4: 0x33c30003  andi        $v1, $fp, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3982a0) {
            ctx->pc = 0x3982F4u;
            goto label_3982f4;
        }
    }
    ctx->pc = 0x3982A8u;
label_3982a8:
    // 0x3982a8: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_3982ac:
    if (ctx->pc == 0x3982ACu) {
        ctx->pc = 0x3982ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982A8u;
        // 0x3982ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982B0u;
        goto label_3982b0;
    }
    ctx->pc = 0x3982A8u;
    {
        const bool branch_taken_0x3982a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3982a8) {
            ctx->pc = 0x3982ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3982A8u;
            // 0x3982ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398308u;
            goto label_398308;
        }
    }
    ctx->pc = 0x3982B0u;
label_3982b0:
    // 0x3982b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3982b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3982b4:
    // 0x3982b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3982b8:
    if (ctx->pc == 0x3982B8u) {
        ctx->pc = 0x3982B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982B4u;
        // 0x3982b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982BCu;
        goto label_3982bc;
    }
    ctx->pc = 0x3982B4u;
    {
        const bool branch_taken_0x3982b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3982b4) {
            ctx->pc = 0x3982B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3982B4u;
            // 0x3982b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3982F8u;
            goto label_3982f8;
        }
    }
    ctx->pc = 0x3982BCu;
label_3982bc:
    // 0x3982bc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3982bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3982c0:
    // 0x3982c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3982c4:
    if (ctx->pc == 0x3982C4u) {
        ctx->pc = 0x3982C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982C0u;
        // 0x3982c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982C8u;
        goto label_3982c8;
    }
    ctx->pc = 0x3982C0u;
    {
        const bool branch_taken_0x3982c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3982c0) {
            ctx->pc = 0x3982C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3982C0u;
            // 0x3982c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3982E4u;
            goto label_3982e4;
        }
    }
    ctx->pc = 0x3982C8u;
label_3982c8:
    // 0x3982c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3982c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3982cc:
    // 0x3982cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3982ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3982d0:
    // 0x3982d0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3982d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3982d4:
    // 0x3982d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3982d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3982d8:
    // 0x3982d8: 0x40f809  jalr        $v0
label_3982dc:
    if (ctx->pc == 0x3982DCu) {
        ctx->pc = 0x3982DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982D8u;
        // 0x3982dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982E0u;
        goto label_3982e0;
    }
    ctx->pc = 0x3982D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3982E0u);
        ctx->pc = 0x3982DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982D8u;
        // 0x3982dc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3982D8u, 0x3982E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3982E0u;
label_3982e0:
    // 0x3982e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3982e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3982e4:
    // 0x3982e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3982e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3982e8:
    // 0x3982e8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3982e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3982ec:
    // 0x3982ec: 0x40f809  jalr        $v0
label_3982f0:
    if (ctx->pc == 0x3982F0u) {
        ctx->pc = 0x3982F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982ECu;
        // 0x3982f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3982F4u;
        goto label_3982f4;
    }
    ctx->pc = 0x3982ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3982F4u);
        ctx->pc = 0x3982F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982ECu;
        // 0x3982f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3982ECu, 0x3982F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3982F4u;
label_3982f4:
    // 0x3982f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3982f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3982f8:
    // 0x3982f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3982f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3982fc:
    // 0x3982fc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3982fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_398300:
    // 0x398300: 0x1000000d  b           . + 4 + (0xD << 2)
label_398304:
    if (ctx->pc == 0x398304u) {
        ctx->pc = 0x398304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398300u;
        // 0x398304: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398308u;
        goto label_398308;
    }
    ctx->pc = 0x398300u;
    {
        const bool branch_taken_0x398300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398300u;
        // 0x398304: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398300) {
            ctx->pc = 0x398338u;
            goto label_398338;
        }
    }
    ctx->pc = 0x398308u;
label_398308:
    // 0x398308: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x398308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_39830c:
    // 0x39830c: 0x40f809  jalr        $v0
label_398310:
    if (ctx->pc == 0x398310u) {
        ctx->pc = 0x398310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39830Cu;
        // 0x398310: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398314u;
        goto label_398314;
    }
    ctx->pc = 0x39830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398314u);
        ctx->pc = 0x398310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39830Cu;
        // 0x398310: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39830Cu, 0x398314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398314u;
label_398314:
    // 0x398314: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x398314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_398318:
    // 0x398318: 0x40f809  jalr        $v0
label_39831c:
    if (ctx->pc == 0x39831Cu) {
        ctx->pc = 0x39831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398318u;
        // 0x39831c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398320u;
        goto label_398320;
    }
    ctx->pc = 0x398318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398320u);
        ctx->pc = 0x39831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398318u;
        // 0x39831c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398318u, 0x398320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398320u;
label_398320:
    // 0x398320: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x398320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_398324:
    // 0x398324: 0x40f809  jalr        $v0
label_398328:
    if (ctx->pc == 0x398328u) {
        ctx->pc = 0x398328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398324u;
        // 0x398328: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39832Cu;
        goto label_39832c;
    }
    ctx->pc = 0x398324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39832Cu);
        ctx->pc = 0x398328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398324u;
        // 0x398328: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398324u, 0x39832Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39832Cu;
label_39832c:
    // 0x39832c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_398330:
    // 0x398330: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x398330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_398334:
    // 0x398334: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x398334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_398338:
    // 0x398338: 0x40f809  jalr        $v0
label_39833c:
    if (ctx->pc == 0x39833Cu) {
        ctx->pc = 0x398340u;
        goto label_398340;
    }
    ctx->pc = 0x398338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398340u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398338u, 0x398340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398340u;
label_398340:
    // 0x398340: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x398340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_398344:
    // 0x398344: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_398348:
    if (ctx->pc == 0x398348u) {
        ctx->pc = 0x398348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398344u;
        // 0x398348: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39834Cu;
        goto label_39834c;
    }
    ctx->pc = 0x398344u;
    {
        const bool branch_taken_0x398344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398344) {
            ctx->pc = 0x398348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398344u;
            // 0x398348: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398308;
        }
    }
    ctx->pc = 0x39834Cu;
label_39834c:
    // 0x39834c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x39834cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_398350:
    // 0x398350: 0x2490e880  addiu       $s0, $a0, -0x1780
    ctx->pc = 0x398350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_398354:
    // 0x398354: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x398354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_398358:
    // 0x398358: 0x40f809  jalr        $v0
label_39835c:
    if (ctx->pc == 0x39835Cu) {
        ctx->pc = 0x39835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398358u;
        // 0x39835c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398360u;
        goto label_398360;
    }
    ctx->pc = 0x398358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398360u);
        ctx->pc = 0x39835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398358u;
        // 0x39835c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398358u, 0x398360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398360u;
label_398360:
    // 0x398360: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x398360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_398364:
    // 0x398364: 0x60f809  jalr        $v1
label_398368:
    if (ctx->pc == 0x398368u) {
        ctx->pc = 0x398368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398364u;
        // 0x398368: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39836Cu;
        goto label_39836c;
    }
    ctx->pc = 0x398364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39836Cu);
        ctx->pc = 0x398368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398364u;
        // 0x398368: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398364u, 0x39836Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39836Cu;
label_39836c:
    // 0x39836c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x39836cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_398370:
    // 0x398370: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x398370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_398374:
    // 0x398374: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x398374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_398378:
    // 0x398378: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x398378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39837c:
    // 0x39837c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x39837cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_398380:
    // 0x398380: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x398380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_398384:
    // 0x398384: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x398384u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_398388:
    // 0x398388: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x398388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39838c:
    // 0x39838c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x39838cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_398390:
    // 0x398390: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x398390u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_398394:
    // 0x398394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_398398:
    // 0x398398: 0x3e00008  jr          $ra
label_39839c:
    if (ctx->pc == 0x39839Cu) {
        ctx->pc = 0x39839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398398u;
        // 0x39839c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983A0u;
        goto label_fallthrough_0x398398;
    }
    ctx->pc = 0x398398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398398u;
        // 0x39839c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x398398:
    ctx->pc = 0x3983A0u;
}
