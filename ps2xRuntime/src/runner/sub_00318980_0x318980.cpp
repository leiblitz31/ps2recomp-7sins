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

// Function: sub_00318980
// Address: 0x318980 - 0x3194e0
void sub_00318980_0x318980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318980_0x318980");
#endif

    switch (ctx->pc) {
        case 0x318980u: goto label_318980;
        case 0x318984u: goto label_318984;
        case 0x318988u: goto label_318988;
        case 0x31898cu: goto label_31898c;
        case 0x318990u: goto label_318990;
        case 0x318994u: goto label_318994;
        case 0x318998u: goto label_318998;
        case 0x31899cu: goto label_31899c;
        case 0x3189a0u: goto label_3189a0;
        case 0x3189a4u: goto label_3189a4;
        case 0x3189a8u: goto label_3189a8;
        case 0x3189acu: goto label_3189ac;
        case 0x3189b0u: goto label_3189b0;
        case 0x3189b4u: goto label_3189b4;
        case 0x3189b8u: goto label_3189b8;
        case 0x3189bcu: goto label_3189bc;
        case 0x3189c0u: goto label_3189c0;
        case 0x3189c4u: goto label_3189c4;
        case 0x3189c8u: goto label_3189c8;
        case 0x3189ccu: goto label_3189cc;
        case 0x3189d0u: goto label_3189d0;
        case 0x3189d4u: goto label_3189d4;
        case 0x3189d8u: goto label_3189d8;
        case 0x3189dcu: goto label_3189dc;
        case 0x3189e0u: goto label_3189e0;
        case 0x3189e4u: goto label_3189e4;
        case 0x3189e8u: goto label_3189e8;
        case 0x3189ecu: goto label_3189ec;
        case 0x3189f0u: goto label_3189f0;
        case 0x3189f4u: goto label_3189f4;
        case 0x3189f8u: goto label_3189f8;
        case 0x3189fcu: goto label_3189fc;
        case 0x318a00u: goto label_318a00;
        case 0x318a04u: goto label_318a04;
        case 0x318a08u: goto label_318a08;
        case 0x318a0cu: goto label_318a0c;
        case 0x318a10u: goto label_318a10;
        case 0x318a14u: goto label_318a14;
        case 0x318a18u: goto label_318a18;
        case 0x318a1cu: goto label_318a1c;
        case 0x318a20u: goto label_318a20;
        case 0x318a24u: goto label_318a24;
        case 0x318a28u: goto label_318a28;
        case 0x318a2cu: goto label_318a2c;
        case 0x318a30u: goto label_318a30;
        case 0x318a34u: goto label_318a34;
        case 0x318a38u: goto label_318a38;
        case 0x318a3cu: goto label_318a3c;
        case 0x318a40u: goto label_318a40;
        case 0x318a44u: goto label_318a44;
        case 0x318a48u: goto label_318a48;
        case 0x318a4cu: goto label_318a4c;
        case 0x318a50u: goto label_318a50;
        case 0x318a54u: goto label_318a54;
        case 0x318a58u: goto label_318a58;
        case 0x318a5cu: goto label_318a5c;
        case 0x318a60u: goto label_318a60;
        case 0x318a64u: goto label_318a64;
        case 0x318a68u: goto label_318a68;
        case 0x318a6cu: goto label_318a6c;
        case 0x318a70u: goto label_318a70;
        case 0x318a74u: goto label_318a74;
        case 0x318a78u: goto label_318a78;
        case 0x318a7cu: goto label_318a7c;
        case 0x318a80u: goto label_318a80;
        case 0x318a84u: goto label_318a84;
        case 0x318a88u: goto label_318a88;
        case 0x318a8cu: goto label_318a8c;
        case 0x318a90u: goto label_318a90;
        case 0x318a94u: goto label_318a94;
        case 0x318a98u: goto label_318a98;
        case 0x318a9cu: goto label_318a9c;
        case 0x318aa0u: goto label_318aa0;
        case 0x318aa4u: goto label_318aa4;
        case 0x318aa8u: goto label_318aa8;
        case 0x318aacu: goto label_318aac;
        case 0x318ab0u: goto label_318ab0;
        case 0x318ab4u: goto label_318ab4;
        case 0x318ab8u: goto label_318ab8;
        case 0x318abcu: goto label_318abc;
        case 0x318ac0u: goto label_318ac0;
        case 0x318ac4u: goto label_318ac4;
        case 0x318ac8u: goto label_318ac8;
        case 0x318accu: goto label_318acc;
        case 0x318ad0u: goto label_318ad0;
        case 0x318ad4u: goto label_318ad4;
        case 0x318ad8u: goto label_318ad8;
        case 0x318adcu: goto label_318adc;
        case 0x318ae0u: goto label_318ae0;
        case 0x318ae4u: goto label_318ae4;
        case 0x318ae8u: goto label_318ae8;
        case 0x318aecu: goto label_318aec;
        case 0x318af0u: goto label_318af0;
        case 0x318af4u: goto label_318af4;
        case 0x318af8u: goto label_318af8;
        case 0x318afcu: goto label_318afc;
        case 0x318b00u: goto label_318b00;
        case 0x318b04u: goto label_318b04;
        case 0x318b08u: goto label_318b08;
        case 0x318b0cu: goto label_318b0c;
        case 0x318b10u: goto label_318b10;
        case 0x318b14u: goto label_318b14;
        case 0x318b18u: goto label_318b18;
        case 0x318b1cu: goto label_318b1c;
        case 0x318b20u: goto label_318b20;
        case 0x318b24u: goto label_318b24;
        case 0x318b28u: goto label_318b28;
        case 0x318b2cu: goto label_318b2c;
        case 0x318b30u: goto label_318b30;
        case 0x318b34u: goto label_318b34;
        case 0x318b38u: goto label_318b38;
        case 0x318b3cu: goto label_318b3c;
        case 0x318b40u: goto label_318b40;
        case 0x318b44u: goto label_318b44;
        case 0x318b48u: goto label_318b48;
        case 0x318b4cu: goto label_318b4c;
        case 0x318b50u: goto label_318b50;
        case 0x318b54u: goto label_318b54;
        case 0x318b58u: goto label_318b58;
        case 0x318b5cu: goto label_318b5c;
        case 0x318b60u: goto label_318b60;
        case 0x318b64u: goto label_318b64;
        case 0x318b68u: goto label_318b68;
        case 0x318b6cu: goto label_318b6c;
        case 0x318b70u: goto label_318b70;
        case 0x318b74u: goto label_318b74;
        case 0x318b78u: goto label_318b78;
        case 0x318b7cu: goto label_318b7c;
        case 0x318b80u: goto label_318b80;
        case 0x318b84u: goto label_318b84;
        case 0x318b88u: goto label_318b88;
        case 0x318b8cu: goto label_318b8c;
        case 0x318b90u: goto label_318b90;
        case 0x318b94u: goto label_318b94;
        case 0x318b98u: goto label_318b98;
        case 0x318b9cu: goto label_318b9c;
        case 0x318ba0u: goto label_318ba0;
        case 0x318ba4u: goto label_318ba4;
        case 0x318ba8u: goto label_318ba8;
        case 0x318bacu: goto label_318bac;
        case 0x318bb0u: goto label_318bb0;
        case 0x318bb4u: goto label_318bb4;
        case 0x318bb8u: goto label_318bb8;
        case 0x318bbcu: goto label_318bbc;
        case 0x318bc0u: goto label_318bc0;
        case 0x318bc4u: goto label_318bc4;
        case 0x318bc8u: goto label_318bc8;
        case 0x318bccu: goto label_318bcc;
        case 0x318bd0u: goto label_318bd0;
        case 0x318bd4u: goto label_318bd4;
        case 0x318bd8u: goto label_318bd8;
        case 0x318bdcu: goto label_318bdc;
        case 0x318be0u: goto label_318be0;
        case 0x318be4u: goto label_318be4;
        case 0x318be8u: goto label_318be8;
        case 0x318becu: goto label_318bec;
        case 0x318bf0u: goto label_318bf0;
        case 0x318bf4u: goto label_318bf4;
        case 0x318bf8u: goto label_318bf8;
        case 0x318bfcu: goto label_318bfc;
        case 0x318c00u: goto label_318c00;
        case 0x318c04u: goto label_318c04;
        case 0x318c08u: goto label_318c08;
        case 0x318c0cu: goto label_318c0c;
        case 0x318c10u: goto label_318c10;
        case 0x318c14u: goto label_318c14;
        case 0x318c18u: goto label_318c18;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c20u: goto label_318c20;
        case 0x318c24u: goto label_318c24;
        case 0x318c28u: goto label_318c28;
        case 0x318c2cu: goto label_318c2c;
        case 0x318c30u: goto label_318c30;
        case 0x318c34u: goto label_318c34;
        case 0x318c38u: goto label_318c38;
        case 0x318c3cu: goto label_318c3c;
        case 0x318c40u: goto label_318c40;
        case 0x318c44u: goto label_318c44;
        case 0x318c48u: goto label_318c48;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c50u: goto label_318c50;
        case 0x318c54u: goto label_318c54;
        case 0x318c58u: goto label_318c58;
        case 0x318c5cu: goto label_318c5c;
        case 0x318c60u: goto label_318c60;
        case 0x318c64u: goto label_318c64;
        case 0x318c68u: goto label_318c68;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c70u: goto label_318c70;
        case 0x318c74u: goto label_318c74;
        case 0x318c78u: goto label_318c78;
        case 0x318c7cu: goto label_318c7c;
        case 0x318c80u: goto label_318c80;
        case 0x318c84u: goto label_318c84;
        case 0x318c88u: goto label_318c88;
        case 0x318c8cu: goto label_318c8c;
        case 0x318c90u: goto label_318c90;
        case 0x318c94u: goto label_318c94;
        case 0x318c98u: goto label_318c98;
        case 0x318c9cu: goto label_318c9c;
        case 0x318ca0u: goto label_318ca0;
        case 0x318ca4u: goto label_318ca4;
        case 0x318ca8u: goto label_318ca8;
        case 0x318cacu: goto label_318cac;
        case 0x318cb0u: goto label_318cb0;
        case 0x318cb4u: goto label_318cb4;
        case 0x318cb8u: goto label_318cb8;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cc0u: goto label_318cc0;
        case 0x318cc4u: goto label_318cc4;
        case 0x318cc8u: goto label_318cc8;
        case 0x318cccu: goto label_318ccc;
        case 0x318cd0u: goto label_318cd0;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cd8u: goto label_318cd8;
        case 0x318cdcu: goto label_318cdc;
        case 0x318ce0u: goto label_318ce0;
        case 0x318ce4u: goto label_318ce4;
        case 0x318ce8u: goto label_318ce8;
        case 0x318cecu: goto label_318cec;
        case 0x318cf0u: goto label_318cf0;
        case 0x318cf4u: goto label_318cf4;
        case 0x318cf8u: goto label_318cf8;
        case 0x318cfcu: goto label_318cfc;
        case 0x318d00u: goto label_318d00;
        case 0x318d04u: goto label_318d04;
        case 0x318d08u: goto label_318d08;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d10u: goto label_318d10;
        case 0x318d14u: goto label_318d14;
        case 0x318d18u: goto label_318d18;
        case 0x318d1cu: goto label_318d1c;
        case 0x318d20u: goto label_318d20;
        case 0x318d24u: goto label_318d24;
        case 0x318d28u: goto label_318d28;
        case 0x318d2cu: goto label_318d2c;
        case 0x318d30u: goto label_318d30;
        case 0x318d34u: goto label_318d34;
        case 0x318d38u: goto label_318d38;
        case 0x318d3cu: goto label_318d3c;
        case 0x318d40u: goto label_318d40;
        case 0x318d44u: goto label_318d44;
        case 0x318d48u: goto label_318d48;
        case 0x318d4cu: goto label_318d4c;
        case 0x318d50u: goto label_318d50;
        case 0x318d54u: goto label_318d54;
        case 0x318d58u: goto label_318d58;
        case 0x318d5cu: goto label_318d5c;
        case 0x318d60u: goto label_318d60;
        case 0x318d64u: goto label_318d64;
        case 0x318d68u: goto label_318d68;
        case 0x318d6cu: goto label_318d6c;
        case 0x318d70u: goto label_318d70;
        case 0x318d74u: goto label_318d74;
        case 0x318d78u: goto label_318d78;
        case 0x318d7cu: goto label_318d7c;
        case 0x318d80u: goto label_318d80;
        case 0x318d84u: goto label_318d84;
        case 0x318d88u: goto label_318d88;
        case 0x318d8cu: goto label_318d8c;
        case 0x318d90u: goto label_318d90;
        case 0x318d94u: goto label_318d94;
        case 0x318d98u: goto label_318d98;
        case 0x318d9cu: goto label_318d9c;
        case 0x318da0u: goto label_318da0;
        case 0x318da4u: goto label_318da4;
        case 0x318da8u: goto label_318da8;
        case 0x318dacu: goto label_318dac;
        case 0x318db0u: goto label_318db0;
        case 0x318db4u: goto label_318db4;
        case 0x318db8u: goto label_318db8;
        case 0x318dbcu: goto label_318dbc;
        case 0x318dc0u: goto label_318dc0;
        case 0x318dc4u: goto label_318dc4;
        case 0x318dc8u: goto label_318dc8;
        case 0x318dccu: goto label_318dcc;
        case 0x318dd0u: goto label_318dd0;
        case 0x318dd4u: goto label_318dd4;
        case 0x318dd8u: goto label_318dd8;
        case 0x318ddcu: goto label_318ddc;
        case 0x318de0u: goto label_318de0;
        case 0x318de4u: goto label_318de4;
        case 0x318de8u: goto label_318de8;
        case 0x318decu: goto label_318dec;
        case 0x318df0u: goto label_318df0;
        case 0x318df4u: goto label_318df4;
        case 0x318df8u: goto label_318df8;
        case 0x318dfcu: goto label_318dfc;
        case 0x318e00u: goto label_318e00;
        case 0x318e04u: goto label_318e04;
        case 0x318e08u: goto label_318e08;
        case 0x318e0cu: goto label_318e0c;
        case 0x318e10u: goto label_318e10;
        case 0x318e14u: goto label_318e14;
        case 0x318e18u: goto label_318e18;
        case 0x318e1cu: goto label_318e1c;
        case 0x318e20u: goto label_318e20;
        case 0x318e24u: goto label_318e24;
        case 0x318e28u: goto label_318e28;
        case 0x318e2cu: goto label_318e2c;
        case 0x318e30u: goto label_318e30;
        case 0x318e34u: goto label_318e34;
        case 0x318e38u: goto label_318e38;
        case 0x318e3cu: goto label_318e3c;
        case 0x318e40u: goto label_318e40;
        case 0x318e44u: goto label_318e44;
        case 0x318e48u: goto label_318e48;
        case 0x318e4cu: goto label_318e4c;
        case 0x318e50u: goto label_318e50;
        case 0x318e54u: goto label_318e54;
        case 0x318e58u: goto label_318e58;
        case 0x318e5cu: goto label_318e5c;
        case 0x318e60u: goto label_318e60;
        case 0x318e64u: goto label_318e64;
        case 0x318e68u: goto label_318e68;
        case 0x318e6cu: goto label_318e6c;
        case 0x318e70u: goto label_318e70;
        case 0x318e74u: goto label_318e74;
        case 0x318e78u: goto label_318e78;
        case 0x318e7cu: goto label_318e7c;
        case 0x318e80u: goto label_318e80;
        case 0x318e84u: goto label_318e84;
        case 0x318e88u: goto label_318e88;
        case 0x318e8cu: goto label_318e8c;
        case 0x318e90u: goto label_318e90;
        case 0x318e94u: goto label_318e94;
        case 0x318e98u: goto label_318e98;
        case 0x318e9cu: goto label_318e9c;
        case 0x318ea0u: goto label_318ea0;
        case 0x318ea4u: goto label_318ea4;
        case 0x318ea8u: goto label_318ea8;
        case 0x318eacu: goto label_318eac;
        case 0x318eb0u: goto label_318eb0;
        case 0x318eb4u: goto label_318eb4;
        case 0x318eb8u: goto label_318eb8;
        case 0x318ebcu: goto label_318ebc;
        case 0x318ec0u: goto label_318ec0;
        case 0x318ec4u: goto label_318ec4;
        case 0x318ec8u: goto label_318ec8;
        case 0x318eccu: goto label_318ecc;
        case 0x318ed0u: goto label_318ed0;
        case 0x318ed4u: goto label_318ed4;
        case 0x318ed8u: goto label_318ed8;
        case 0x318edcu: goto label_318edc;
        case 0x318ee0u: goto label_318ee0;
        case 0x318ee4u: goto label_318ee4;
        case 0x318ee8u: goto label_318ee8;
        case 0x318eecu: goto label_318eec;
        case 0x318ef0u: goto label_318ef0;
        case 0x318ef4u: goto label_318ef4;
        case 0x318ef8u: goto label_318ef8;
        case 0x318efcu: goto label_318efc;
        case 0x318f00u: goto label_318f00;
        case 0x318f04u: goto label_318f04;
        case 0x318f08u: goto label_318f08;
        case 0x318f0cu: goto label_318f0c;
        case 0x318f10u: goto label_318f10;
        case 0x318f14u: goto label_318f14;
        case 0x318f18u: goto label_318f18;
        case 0x318f1cu: goto label_318f1c;
        case 0x318f20u: goto label_318f20;
        case 0x318f24u: goto label_318f24;
        case 0x318f28u: goto label_318f28;
        case 0x318f2cu: goto label_318f2c;
        case 0x318f30u: goto label_318f30;
        case 0x318f34u: goto label_318f34;
        case 0x318f38u: goto label_318f38;
        case 0x318f3cu: goto label_318f3c;
        case 0x318f40u: goto label_318f40;
        case 0x318f44u: goto label_318f44;
        case 0x318f48u: goto label_318f48;
        case 0x318f4cu: goto label_318f4c;
        case 0x318f50u: goto label_318f50;
        case 0x318f54u: goto label_318f54;
        case 0x318f58u: goto label_318f58;
        case 0x318f5cu: goto label_318f5c;
        case 0x318f60u: goto label_318f60;
        case 0x318f64u: goto label_318f64;
        case 0x318f68u: goto label_318f68;
        case 0x318f6cu: goto label_318f6c;
        case 0x318f70u: goto label_318f70;
        case 0x318f74u: goto label_318f74;
        case 0x318f78u: goto label_318f78;
        case 0x318f7cu: goto label_318f7c;
        case 0x318f80u: goto label_318f80;
        case 0x318f84u: goto label_318f84;
        case 0x318f88u: goto label_318f88;
        case 0x318f8cu: goto label_318f8c;
        case 0x318f90u: goto label_318f90;
        case 0x318f94u: goto label_318f94;
        case 0x318f98u: goto label_318f98;
        case 0x318f9cu: goto label_318f9c;
        case 0x318fa0u: goto label_318fa0;
        case 0x318fa4u: goto label_318fa4;
        case 0x318fa8u: goto label_318fa8;
        case 0x318facu: goto label_318fac;
        case 0x318fb0u: goto label_318fb0;
        case 0x318fb4u: goto label_318fb4;
        case 0x318fb8u: goto label_318fb8;
        case 0x318fbcu: goto label_318fbc;
        case 0x318fc0u: goto label_318fc0;
        case 0x318fc4u: goto label_318fc4;
        case 0x318fc8u: goto label_318fc8;
        case 0x318fccu: goto label_318fcc;
        case 0x318fd0u: goto label_318fd0;
        case 0x318fd4u: goto label_318fd4;
        case 0x318fd8u: goto label_318fd8;
        case 0x318fdcu: goto label_318fdc;
        case 0x318fe0u: goto label_318fe0;
        case 0x318fe4u: goto label_318fe4;
        case 0x318fe8u: goto label_318fe8;
        case 0x318fecu: goto label_318fec;
        case 0x318ff0u: goto label_318ff0;
        case 0x318ff4u: goto label_318ff4;
        case 0x318ff8u: goto label_318ff8;
        case 0x318ffcu: goto label_318ffc;
        case 0x319000u: goto label_319000;
        case 0x319004u: goto label_319004;
        case 0x319008u: goto label_319008;
        case 0x31900cu: goto label_31900c;
        case 0x319010u: goto label_319010;
        case 0x319014u: goto label_319014;
        case 0x319018u: goto label_319018;
        case 0x31901cu: goto label_31901c;
        case 0x319020u: goto label_319020;
        case 0x319024u: goto label_319024;
        case 0x319028u: goto label_319028;
        case 0x31902cu: goto label_31902c;
        case 0x319030u: goto label_319030;
        case 0x319034u: goto label_319034;
        case 0x319038u: goto label_319038;
        case 0x31903cu: goto label_31903c;
        case 0x319040u: goto label_319040;
        case 0x319044u: goto label_319044;
        case 0x319048u: goto label_319048;
        case 0x31904cu: goto label_31904c;
        case 0x319050u: goto label_319050;
        case 0x319054u: goto label_319054;
        case 0x319058u: goto label_319058;
        case 0x31905cu: goto label_31905c;
        case 0x319060u: goto label_319060;
        case 0x319064u: goto label_319064;
        case 0x319068u: goto label_319068;
        case 0x31906cu: goto label_31906c;
        case 0x319070u: goto label_319070;
        case 0x319074u: goto label_319074;
        case 0x319078u: goto label_319078;
        case 0x31907cu: goto label_31907c;
        case 0x319080u: goto label_319080;
        case 0x319084u: goto label_319084;
        case 0x319088u: goto label_319088;
        case 0x31908cu: goto label_31908c;
        case 0x319090u: goto label_319090;
        case 0x319094u: goto label_319094;
        case 0x319098u: goto label_319098;
        case 0x31909cu: goto label_31909c;
        case 0x3190a0u: goto label_3190a0;
        case 0x3190a4u: goto label_3190a4;
        case 0x3190a8u: goto label_3190a8;
        case 0x3190acu: goto label_3190ac;
        case 0x3190b0u: goto label_3190b0;
        case 0x3190b4u: goto label_3190b4;
        case 0x3190b8u: goto label_3190b8;
        case 0x3190bcu: goto label_3190bc;
        case 0x3190c0u: goto label_3190c0;
        case 0x3190c4u: goto label_3190c4;
        case 0x3190c8u: goto label_3190c8;
        case 0x3190ccu: goto label_3190cc;
        case 0x3190d0u: goto label_3190d0;
        case 0x3190d4u: goto label_3190d4;
        case 0x3190d8u: goto label_3190d8;
        case 0x3190dcu: goto label_3190dc;
        case 0x3190e0u: goto label_3190e0;
        case 0x3190e4u: goto label_3190e4;
        case 0x3190e8u: goto label_3190e8;
        case 0x3190ecu: goto label_3190ec;
        case 0x3190f0u: goto label_3190f0;
        case 0x3190f4u: goto label_3190f4;
        case 0x3190f8u: goto label_3190f8;
        case 0x3190fcu: goto label_3190fc;
        case 0x319100u: goto label_319100;
        case 0x319104u: goto label_319104;
        case 0x319108u: goto label_319108;
        case 0x31910cu: goto label_31910c;
        case 0x319110u: goto label_319110;
        case 0x319114u: goto label_319114;
        case 0x319118u: goto label_319118;
        case 0x31911cu: goto label_31911c;
        case 0x319120u: goto label_319120;
        case 0x319124u: goto label_319124;
        case 0x319128u: goto label_319128;
        case 0x31912cu: goto label_31912c;
        case 0x319130u: goto label_319130;
        case 0x319134u: goto label_319134;
        case 0x319138u: goto label_319138;
        case 0x31913cu: goto label_31913c;
        case 0x319140u: goto label_319140;
        case 0x319144u: goto label_319144;
        case 0x319148u: goto label_319148;
        case 0x31914cu: goto label_31914c;
        case 0x319150u: goto label_319150;
        case 0x319154u: goto label_319154;
        case 0x319158u: goto label_319158;
        case 0x31915cu: goto label_31915c;
        case 0x319160u: goto label_319160;
        case 0x319164u: goto label_319164;
        case 0x319168u: goto label_319168;
        case 0x31916cu: goto label_31916c;
        case 0x319170u: goto label_319170;
        case 0x319174u: goto label_319174;
        case 0x319178u: goto label_319178;
        case 0x31917cu: goto label_31917c;
        case 0x319180u: goto label_319180;
        case 0x319184u: goto label_319184;
        case 0x319188u: goto label_319188;
        case 0x31918cu: goto label_31918c;
        case 0x319190u: goto label_319190;
        case 0x319194u: goto label_319194;
        case 0x319198u: goto label_319198;
        case 0x31919cu: goto label_31919c;
        case 0x3191a0u: goto label_3191a0;
        case 0x3191a4u: goto label_3191a4;
        case 0x3191a8u: goto label_3191a8;
        case 0x3191acu: goto label_3191ac;
        case 0x3191b0u: goto label_3191b0;
        case 0x3191b4u: goto label_3191b4;
        case 0x3191b8u: goto label_3191b8;
        case 0x3191bcu: goto label_3191bc;
        case 0x3191c0u: goto label_3191c0;
        case 0x3191c4u: goto label_3191c4;
        case 0x3191c8u: goto label_3191c8;
        case 0x3191ccu: goto label_3191cc;
        case 0x3191d0u: goto label_3191d0;
        case 0x3191d4u: goto label_3191d4;
        case 0x3191d8u: goto label_3191d8;
        case 0x3191dcu: goto label_3191dc;
        case 0x3191e0u: goto label_3191e0;
        case 0x3191e4u: goto label_3191e4;
        case 0x3191e8u: goto label_3191e8;
        case 0x3191ecu: goto label_3191ec;
        case 0x3191f0u: goto label_3191f0;
        case 0x3191f4u: goto label_3191f4;
        case 0x3191f8u: goto label_3191f8;
        case 0x3191fcu: goto label_3191fc;
        case 0x319200u: goto label_319200;
        case 0x319204u: goto label_319204;
        case 0x319208u: goto label_319208;
        case 0x31920cu: goto label_31920c;
        case 0x319210u: goto label_319210;
        case 0x319214u: goto label_319214;
        case 0x319218u: goto label_319218;
        case 0x31921cu: goto label_31921c;
        case 0x319220u: goto label_319220;
        case 0x319224u: goto label_319224;
        case 0x319228u: goto label_319228;
        case 0x31922cu: goto label_31922c;
        case 0x319230u: goto label_319230;
        case 0x319234u: goto label_319234;
        case 0x319238u: goto label_319238;
        case 0x31923cu: goto label_31923c;
        case 0x319240u: goto label_319240;
        case 0x319244u: goto label_319244;
        case 0x319248u: goto label_319248;
        case 0x31924cu: goto label_31924c;
        case 0x319250u: goto label_319250;
        case 0x319254u: goto label_319254;
        case 0x319258u: goto label_319258;
        case 0x31925cu: goto label_31925c;
        case 0x319260u: goto label_319260;
        case 0x319264u: goto label_319264;
        case 0x319268u: goto label_319268;
        case 0x31926cu: goto label_31926c;
        case 0x319270u: goto label_319270;
        case 0x319274u: goto label_319274;
        case 0x319278u: goto label_319278;
        case 0x31927cu: goto label_31927c;
        case 0x319280u: goto label_319280;
        case 0x319284u: goto label_319284;
        case 0x319288u: goto label_319288;
        case 0x31928cu: goto label_31928c;
        case 0x319290u: goto label_319290;
        case 0x319294u: goto label_319294;
        case 0x319298u: goto label_319298;
        case 0x31929cu: goto label_31929c;
        case 0x3192a0u: goto label_3192a0;
        case 0x3192a4u: goto label_3192a4;
        case 0x3192a8u: goto label_3192a8;
        case 0x3192acu: goto label_3192ac;
        case 0x3192b0u: goto label_3192b0;
        case 0x3192b4u: goto label_3192b4;
        case 0x3192b8u: goto label_3192b8;
        case 0x3192bcu: goto label_3192bc;
        case 0x3192c0u: goto label_3192c0;
        case 0x3192c4u: goto label_3192c4;
        case 0x3192c8u: goto label_3192c8;
        case 0x3192ccu: goto label_3192cc;
        case 0x3192d0u: goto label_3192d0;
        case 0x3192d4u: goto label_3192d4;
        case 0x3192d8u: goto label_3192d8;
        case 0x3192dcu: goto label_3192dc;
        case 0x3192e0u: goto label_3192e0;
        case 0x3192e4u: goto label_3192e4;
        case 0x3192e8u: goto label_3192e8;
        case 0x3192ecu: goto label_3192ec;
        case 0x3192f0u: goto label_3192f0;
        case 0x3192f4u: goto label_3192f4;
        case 0x3192f8u: goto label_3192f8;
        case 0x3192fcu: goto label_3192fc;
        case 0x319300u: goto label_319300;
        case 0x319304u: goto label_319304;
        case 0x319308u: goto label_319308;
        case 0x31930cu: goto label_31930c;
        case 0x319310u: goto label_319310;
        case 0x319314u: goto label_319314;
        case 0x319318u: goto label_319318;
        case 0x31931cu: goto label_31931c;
        case 0x319320u: goto label_319320;
        case 0x319324u: goto label_319324;
        case 0x319328u: goto label_319328;
        case 0x31932cu: goto label_31932c;
        case 0x319330u: goto label_319330;
        case 0x319334u: goto label_319334;
        case 0x319338u: goto label_319338;
        case 0x31933cu: goto label_31933c;
        case 0x319340u: goto label_319340;
        case 0x319344u: goto label_319344;
        case 0x319348u: goto label_319348;
        case 0x31934cu: goto label_31934c;
        case 0x319350u: goto label_319350;
        case 0x319354u: goto label_319354;
        case 0x319358u: goto label_319358;
        case 0x31935cu: goto label_31935c;
        case 0x319360u: goto label_319360;
        case 0x319364u: goto label_319364;
        case 0x319368u: goto label_319368;
        case 0x31936cu: goto label_31936c;
        case 0x319370u: goto label_319370;
        case 0x319374u: goto label_319374;
        case 0x319378u: goto label_319378;
        case 0x31937cu: goto label_31937c;
        case 0x319380u: goto label_319380;
        case 0x319384u: goto label_319384;
        case 0x319388u: goto label_319388;
        case 0x31938cu: goto label_31938c;
        case 0x319390u: goto label_319390;
        case 0x319394u: goto label_319394;
        case 0x319398u: goto label_319398;
        case 0x31939cu: goto label_31939c;
        case 0x3193a0u: goto label_3193a0;
        case 0x3193a4u: goto label_3193a4;
        case 0x3193a8u: goto label_3193a8;
        case 0x3193acu: goto label_3193ac;
        case 0x3193b0u: goto label_3193b0;
        case 0x3193b4u: goto label_3193b4;
        case 0x3193b8u: goto label_3193b8;
        case 0x3193bcu: goto label_3193bc;
        case 0x3193c0u: goto label_3193c0;
        case 0x3193c4u: goto label_3193c4;
        case 0x3193c8u: goto label_3193c8;
        case 0x3193ccu: goto label_3193cc;
        case 0x3193d0u: goto label_3193d0;
        case 0x3193d4u: goto label_3193d4;
        case 0x3193d8u: goto label_3193d8;
        case 0x3193dcu: goto label_3193dc;
        case 0x3193e0u: goto label_3193e0;
        case 0x3193e4u: goto label_3193e4;
        case 0x3193e8u: goto label_3193e8;
        case 0x3193ecu: goto label_3193ec;
        case 0x3193f0u: goto label_3193f0;
        case 0x3193f4u: goto label_3193f4;
        case 0x3193f8u: goto label_3193f8;
        case 0x3193fcu: goto label_3193fc;
        case 0x319400u: goto label_319400;
        case 0x319404u: goto label_319404;
        case 0x319408u: goto label_319408;
        case 0x31940cu: goto label_31940c;
        case 0x319410u: goto label_319410;
        case 0x319414u: goto label_319414;
        case 0x319418u: goto label_319418;
        case 0x31941cu: goto label_31941c;
        case 0x319420u: goto label_319420;
        case 0x319424u: goto label_319424;
        case 0x319428u: goto label_319428;
        case 0x31942cu: goto label_31942c;
        case 0x319430u: goto label_319430;
        case 0x319434u: goto label_319434;
        case 0x319438u: goto label_319438;
        case 0x31943cu: goto label_31943c;
        case 0x319440u: goto label_319440;
        case 0x319444u: goto label_319444;
        case 0x319448u: goto label_319448;
        case 0x31944cu: goto label_31944c;
        case 0x319450u: goto label_319450;
        case 0x319454u: goto label_319454;
        case 0x319458u: goto label_319458;
        case 0x31945cu: goto label_31945c;
        case 0x319460u: goto label_319460;
        case 0x319464u: goto label_319464;
        case 0x319468u: goto label_319468;
        case 0x31946cu: goto label_31946c;
        case 0x319470u: goto label_319470;
        case 0x319474u: goto label_319474;
        case 0x319478u: goto label_319478;
        case 0x31947cu: goto label_31947c;
        case 0x319480u: goto label_319480;
        case 0x319484u: goto label_319484;
        case 0x319488u: goto label_319488;
        case 0x31948cu: goto label_31948c;
        case 0x319490u: goto label_319490;
        case 0x319494u: goto label_319494;
        case 0x319498u: goto label_319498;
        case 0x31949cu: goto label_31949c;
        case 0x3194a0u: goto label_3194a0;
        case 0x3194a4u: goto label_3194a4;
        case 0x3194a8u: goto label_3194a8;
        case 0x3194acu: goto label_3194ac;
        case 0x3194b0u: goto label_3194b0;
        case 0x3194b4u: goto label_3194b4;
        case 0x3194b8u: goto label_3194b8;
        case 0x3194bcu: goto label_3194bc;
        case 0x3194c0u: goto label_3194c0;
        case 0x3194c4u: goto label_3194c4;
        case 0x3194c8u: goto label_3194c8;
        case 0x3194ccu: goto label_3194cc;
        case 0x3194d0u: goto label_3194d0;
        case 0x3194d4u: goto label_3194d4;
        case 0x3194d8u: goto label_3194d8;
        case 0x3194dcu: goto label_3194dc;
        default: break;
    }

    ctx->pc = 0x318980u;

label_318980:
    // 0x318980: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x318980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_318984:
    // 0x318984: 0x8f82a5b0  lw          $v0, -0x5A50($gp)
    ctx->pc = 0x318984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944176)));
label_318988:
    // 0x318988: 0x7fb00350  sq          $s0, 0x350($sp)
    ctx->pc = 0x318988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 16));
label_31898c:
    // 0x31898c: 0x7fb602f0  sq          $s6, 0x2F0($sp)
    ctx->pc = 0x31898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 22));
label_318990:
    // 0x318990: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x318990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_318994:
    // 0x318994: 0x7fb702e0  sq          $s7, 0x2E0($sp)
    ctx->pc = 0x318994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 23));
label_318998:
    // 0x318998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x318998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31899c:
    // 0x31899c: 0x7fbe02d0  sq          $fp, 0x2D0($sp)
    ctx->pc = 0x31899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 30));
label_3189a0:
    // 0x3189a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3189a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3189a4:
    // 0x3189a4: 0x7fb10340  sq          $s1, 0x340($sp)
    ctx->pc = 0x3189a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 17));
label_3189a8:
    // 0x3189a8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3189a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3189ac:
    // 0x3189ac: 0x7fb30320  sq          $s3, 0x320($sp)
    ctx->pc = 0x3189acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 19));
label_3189b0:
    // 0x3189b0: 0x7fb40310  sq          $s4, 0x310($sp)
    ctx->pc = 0x3189b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 20));
label_3189b4:
    // 0x3189b4: 0x7fb50300  sq          $s5, 0x300($sp)
    ctx->pc = 0x3189b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 21));
label_3189b8:
    // 0x3189b8: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x3189b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
label_3189bc:
    // 0x3189bc: 0xe7b70378  swc1        $f23, 0x378($sp)
    ctx->pc = 0x3189bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_3189c0:
    // 0x3189c0: 0xe7b60370  swc1        $f22, 0x370($sp)
    ctx->pc = 0x3189c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_3189c4:
    // 0x3189c4: 0xe7b50368  swc1        $f21, 0x368($sp)
    ctx->pc = 0x3189c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_3189c8:
    // 0x3189c8: 0xe7b40360  swc1        $f20, 0x360($sp)
    ctx->pc = 0x3189c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_3189cc:
    // 0x3189cc: 0x7fb20330  sq          $s2, 0x330($sp)
    ctx->pc = 0x3189ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 18));
label_3189d0:
    // 0x3189d0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3189d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3189d4:
    // 0x3189d4: 0x124002ac  beqz        $s2, . + 4 + (0x2AC << 2)
label_3189d8:
    if (ctx->pc == 0x3189D8u) {
        ctx->pc = 0x3189D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189D4u;
        // 0x3189d8: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3189DCu;
        goto label_3189dc;
    }
    ctx->pc = 0x3189D4u;
    {
        const bool branch_taken_0x3189d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189D4u;
        // 0x3189d8: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189d4) {
            ctx->pc = 0x319488u;
            goto label_319488;
        }
    }
    ctx->pc = 0x3189DCu;
label_3189dc:
    // 0x3189dc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x3189dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3189e0:
    // 0x3189e0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3189e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3189e4:
    // 0x3189e4: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x3189e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3189e8:
    // 0x3189e8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3189e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3189ec:
    // 0x3189ec: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x3189ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3189f0:
    // 0x3189f0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3189f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3189f4:
    // 0x3189f4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3189f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3189f8:
    // 0x3189f8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3189f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3189fc:
    // 0x3189fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3189fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_318a00:
    // 0x318a00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x318a00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_318a04:
    // 0x318a04: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x318a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_318a08:
    // 0x318a08: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x318a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_318a0c:
    // 0x318a0c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x318a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_318a10:
    // 0x318a10: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x318a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_318a14:
    // 0x318a14: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x318a14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_318a18:
    // 0x318a18: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x318a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_318a1c:
    // 0x318a1c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x318a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_318a20:
    // 0x318a20: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x318a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_318a24:
    // 0x318a24: 0xa3a20045  sb          $v0, 0x45($sp)
    ctx->pc = 0x318a24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 69), (uint8_t)GPR_U32(ctx, 2));
label_318a28:
    // 0x318a28: 0xa7a00046  sh          $zero, 0x46($sp)
    ctx->pc = 0x318a28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 0));
label_318a2c:
    // 0x318a2c: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x318a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_318a30:
    // 0x318a30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_318a34:
    if (ctx->pc == 0x318A34u) {
        ctx->pc = 0x318A38u;
        goto label_318a38;
    }
    ctx->pc = 0x318A30u;
    {
        const bool branch_taken_0x318a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a30) {
            ctx->pc = 0x318A40u;
            goto label_318a40;
        }
    }
    ctx->pc = 0x318A38u;
label_318a38:
    // 0x318a38: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x318a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_318a3c:
    // 0x318a3c: 0xa3a20045  sb          $v0, 0x45($sp)
    ctx->pc = 0x318a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 69), (uint8_t)GPR_U32(ctx, 2));
label_318a40:
    // 0x318a40: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x318a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_318a44:
    // 0x318a44: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x318a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_318a48:
    // 0x318a48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x318a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_318a4c:
    // 0x318a4c: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x318a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_318a50:
    // 0x318a50: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x318a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_318a54:
    // 0x318a54: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x318a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_318a58:
    // 0x318a58: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x318a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318a5c:
    // 0x318a5c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x318a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318a60:
    // 0x318a60: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x318a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318a64:
    // 0x318a64: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x318a64u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318a68:
    // 0x318a68: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x318a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318a6c:
    // 0x318a6c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x318a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318a70:
    // 0x318a70: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x318a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318a74:
    // 0x318a74: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x318a74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_318a78:
    // 0x318a78: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x318a78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_318a7c:
    // 0x318a7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x318a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_318a80:
    // 0x318a80: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x318a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_318a84:
    // 0x318a84: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x318a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_318a88:
    // 0x318a88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318a8c:
    // 0x318a8c: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x318a8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318a90:
    // 0x318a90: 0x0  nop
    ctx->pc = 0x318a90u;
    // NOP
label_318a94:
    // 0x318a94: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_318a98:
    if (ctx->pc == 0x318A98u) {
        ctx->pc = 0x318A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A94u;
        // 0x318a98: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318A9Cu;
        goto label_318a9c;
    }
    ctx->pc = 0x318A94u;
    {
        const bool branch_taken_0x318a94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A94u;
        // 0x318a98: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a94) {
            ctx->pc = 0x318AA8u;
            goto label_318aa8;
        }
    }
    ctx->pc = 0x318A9Cu;
label_318a9c:
    // 0x318a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318aa0:
    // 0x318aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318aa4:
    // 0x318aa4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x318aa4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_318aa8:
    // 0x318aa8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x318aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_318aac:
    // 0x318aac: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x318aacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318ab0:
    // 0x318ab0: 0x0  nop
    ctx->pc = 0x318ab0u;
    // NOP
label_318ab4:
    // 0x318ab4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_318ab8:
    if (ctx->pc == 0x318AB8u) {
        ctx->pc = 0x318AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AB4u;
        // 0x318ab8: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318ABCu;
        goto label_318abc;
    }
    ctx->pc = 0x318AB4u;
    {
        const bool branch_taken_0x318ab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AB4u;
        // 0x318ab8: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ab4) {
            ctx->pc = 0x318AD0u;
            goto label_318ad0;
        }
    }
    ctx->pc = 0x318ABCu;
label_318abc:
    // 0x318abc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318ac0:
    // 0x318ac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318ac4:
    // 0x318ac4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x318ac4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_318ac8:
    // 0x318ac8: 0x10000004  b           . + 4 + (0x4 << 2)
label_318acc:
    if (ctx->pc == 0x318ACCu) {
        ctx->pc = 0x318ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AC8u;
        // 0x318acc: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318AD0u;
        goto label_318ad0;
    }
    ctx->pc = 0x318AC8u;
    {
        const bool branch_taken_0x318ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AC8u;
        // 0x318acc: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ac8) {
            ctx->pc = 0x318ADCu;
            goto label_318adc;
        }
    }
    ctx->pc = 0x318AD0u;
label_318ad0:
    // 0x318ad0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x318ad0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_318ad4:
    // 0x318ad4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x318ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318ad8:
    // 0x318ad8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x318ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_318adc:
    // 0x318adc: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x318adcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318ae0:
    // 0x318ae0: 0x0  nop
    ctx->pc = 0x318ae0u;
    // NOP
label_318ae4:
    // 0x318ae4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_318ae8:
    if (ctx->pc == 0x318AE8u) {
        ctx->pc = 0x318AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AE4u;
        // 0x318ae8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318AECu;
        goto label_318aec;
    }
    ctx->pc = 0x318AE4u;
    {
        const bool branch_taken_0x318ae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AE4u;
        // 0x318ae8: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ae4) {
            ctx->pc = 0x318B00u;
            goto label_318b00;
        }
    }
    ctx->pc = 0x318AECu;
label_318aec:
    // 0x318aec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318af0:
    // 0x318af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318af4:
    // 0x318af4: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x318af4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_318af8:
    // 0x318af8: 0x10000003  b           . + 4 + (0x3 << 2)
label_318afc:
    if (ctx->pc == 0x318AFCu) {
        ctx->pc = 0x318AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AF8u;
        // 0x318afc: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318B00u;
        goto label_318b00;
    }
    ctx->pc = 0x318AF8u;
    {
        const bool branch_taken_0x318af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AF8u;
        // 0x318afc: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318af8) {
            ctx->pc = 0x318B08u;
            goto label_318b08;
        }
    }
    ctx->pc = 0x318B00u;
label_318b00:
    // 0x318b00: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x318b00u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_318b04:
    // 0x318b04: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x318b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318b08:
    // 0x318b08: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x318b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318b0c:
    // 0x318b0c: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x318b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_318b10:
    // 0x318b10: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x318b10u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_318b14:
    // 0x318b14: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x318b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318b18:
    // 0x318b18: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x318b18u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_318b1c:
    // 0x318b1c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x318b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318b20:
    // 0x318b20: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x318b20u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_318b24:
    // 0x318b24: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x318b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318b28:
    // 0x318b28: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x318b28u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_318b2c:
    // 0x318b2c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x318b2cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_318b30:
    // 0x318b30: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x318b30u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_318b34:
    // 0x318b34: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x318b34u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_318b38:
    // 0x318b38: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x318b38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_318b3c:
    // 0x318b3c: 0x46052128  max.s       $f4, $f4, $f5
    ctx->pc = 0x318b3cu;
    ctx->f[4] = std::max(ctx->f[4], ctx->f[5]);
label_318b40:
    // 0x318b40: 0x460110a8  max.s       $f2, $f2, $f1
    ctx->pc = 0x318b40u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[1]);
label_318b44:
    // 0x318b44: 0xc7808110  lwc1        $f0, -0x7EF0($gp)
    ctx->pc = 0x318b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318b48:
    // 0x318b48: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x318b48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_318b4c:
    // 0x318b4c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x318b4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_318b50:
    // 0x318b50: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x318b50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_318b54:
    // 0x318b54: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x318b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_318b58:
    // 0x318b58: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x318b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_318b5c:
    // 0x318b5c: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x318b5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_318b60:
    // 0x318b60: 0x27a30044  addiu       $v1, $sp, 0x44
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_318b64:
    // 0x318b64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318b68:
    // 0x318b68: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x318b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_318b6c:
    // 0x318b6c: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x318b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_318b70:
    // 0x318b70: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x318b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_318b74:
    // 0x318b74: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x318b74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_318b78:
    // 0x318b78: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x318b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_318b7c:
    // 0x318b7c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x318b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_318b80:
    // 0x318b80: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x318b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318b84:
    // 0x318b84: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x318b84u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_318b88:
    // 0x318b88: 0xe7a501ec  swc1        $f5, 0x1EC($sp)
    ctx->pc = 0x318b88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_318b8c:
    // 0x318b8c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x318b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318b90:
    // 0x318b90: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x318b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_318b94:
    // 0x318b94: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x318b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_318b98:
    // 0x318b98: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x318b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318b9c:
    // 0x318b9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x318b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_318ba0:
    // 0x318ba0: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x318ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_318ba4:
    // 0x318ba4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x318ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318ba8:
    // 0x318ba8: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x318ba8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_318bac:
    // 0x318bac: 0xe7a301e0  swc1        $f3, 0x1E0($sp)
    ctx->pc = 0x318bacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_318bb0:
    // 0x318bb0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x318bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318bb4:
    // 0x318bb4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x318bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_318bb8:
    // 0x318bb8: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x318bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_318bbc:
    // 0x318bbc: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x318bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318bc0:
    // 0x318bc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x318bc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_318bc4:
    // 0x318bc4: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x318bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_318bc8:
    // 0x318bc8: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x318bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318bcc:
    // 0x318bcc: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x318bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318bd0:
    // 0x318bd0: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x318bd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318bd4:
    // 0x318bd4: 0x0  nop
    ctx->pc = 0x318bd4u;
    // NOP
label_318bd8:
    // 0x318bd8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_318bdc:
    if (ctx->pc == 0x318BDCu) {
        ctx->pc = 0x318BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BD8u;
        // 0x318bdc: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BE0u;
        goto label_318be0;
    }
    ctx->pc = 0x318BD8u;
    {
        const bool branch_taken_0x318bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BD8u;
        // 0x318bdc: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318bd8) {
            ctx->pc = 0x318C08u;
            goto label_318c08;
        }
    }
    ctx->pc = 0x318BE0u;
label_318be0:
    // 0x318be0: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x318be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318be4:
    // 0x318be4: 0x0  nop
    ctx->pc = 0x318be4u;
    // NOP
label_318be8:
    // 0x318be8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_318bec:
    if (ctx->pc == 0x318BECu) {
        ctx->pc = 0x318BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BE8u;
        // 0x318bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318BF0u;
        goto label_318bf0;
    }
    ctx->pc = 0x318BE8u;
    {
        const bool branch_taken_0x318be8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BE8u;
        // 0x318bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318be8) {
            ctx->pc = 0x318C8Cu;
            goto label_318c8c;
        }
    }
    ctx->pc = 0x318BF0u;
label_318bf0:
    // 0x318bf0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x318bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318bf4:
    // 0x318bf4: 0x0  nop
    ctx->pc = 0x318bf4u;
    // NOP
label_318bf8:
    // 0x318bf8: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_318bfc:
    if (ctx->pc == 0x318BFCu) {
        ctx->pc = 0x318BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BF8u;
        // 0x318bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C00u;
        goto label_318c00;
    }
    ctx->pc = 0x318BF8u;
    {
        const bool branch_taken_0x318bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318bf8) {
            ctx->pc = 0x318BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318BF8u;
            // 0x318bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318C8Cu;
            goto label_318c8c;
        }
    }
    ctx->pc = 0x318C00u;
label_318c00:
    // 0x318c00: 0x10000022  b           . + 4 + (0x22 << 2)
label_318c04:
    if (ctx->pc == 0x318C04u) {
        ctx->pc = 0x318C08u;
        goto label_318c08;
    }
    ctx->pc = 0x318C00u;
    {
        const bool branch_taken_0x318c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c00) {
            ctx->pc = 0x318C8Cu;
            goto label_318c8c;
        }
    }
    ctx->pc = 0x318C08u;
label_318c08:
    // 0x318c08: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x318c08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_318c0c:
    // 0x318c0c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x318c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_318c10:
    // 0x318c10: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x318c10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_318c14:
    // 0x318c14: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x318c14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_318c18:
    // 0x318c18: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x318c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c1c:
    // 0x318c1c: 0x0  nop
    ctx->pc = 0x318c1cu;
    // NOP
label_318c20:
    // 0x318c20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_318c24:
    if (ctx->pc == 0x318C24u) {
        ctx->pc = 0x318C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C20u;
        // 0x318c24: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C28u;
        goto label_318c28;
    }
    ctx->pc = 0x318C20u;
    {
        const bool branch_taken_0x318c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C20u;
        // 0x318c24: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c20) {
            ctx->pc = 0x318C30u;
            goto label_318c30;
        }
    }
    ctx->pc = 0x318C28u;
label_318c28:
    // 0x318c28: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x318c28u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_318c2c:
    // 0x318c2c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x318c2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_318c30:
    // 0x318c30: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x318c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c34:
    // 0x318c34: 0x0  nop
    ctx->pc = 0x318c34u;
    // NOP
label_318c38:
    // 0x318c38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_318c3c:
    if (ctx->pc == 0x318C3Cu) {
        ctx->pc = 0x318C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C38u;
        // 0x318c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C40u;
        goto label_318c40;
    }
    ctx->pc = 0x318C38u;
    {
        const bool branch_taken_0x318c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C38u;
        // 0x318c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c38) {
            ctx->pc = 0x318C50u;
            goto label_318c50;
        }
    }
    ctx->pc = 0x318C40u;
label_318c40:
    // 0x318c40: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x318c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c44:
    // 0x318c44: 0x0  nop
    ctx->pc = 0x318c44u;
    // NOP
label_318c48:
    // 0x318c48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_318c4c:
    if (ctx->pc == 0x318C4Cu) {
        ctx->pc = 0x318C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C48u;
        // 0x318c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C50u;
        goto label_318c50;
    }
    ctx->pc = 0x318C48u;
    {
        const bool branch_taken_0x318c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318c48) {
            ctx->pc = 0x318C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318C48u;
            // 0x318c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318C50u;
            goto label_318c50;
        }
    }
    ctx->pc = 0x318C50u;
label_318c50:
    // 0x318c50: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_318c54:
    if (ctx->pc == 0x318C54u) {
        ctx->pc = 0x318C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C50u;
        // 0x318c54: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C58u;
        goto label_318c58;
    }
    ctx->pc = 0x318C50u;
    {
        const bool branch_taken_0x318c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c50) {
            ctx->pc = 0x318C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318C50u;
            // 0x318c54: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E6Cu;
            goto label_318e6c;
        }
    }
    ctx->pc = 0x318C58u;
label_318c58:
    // 0x318c58: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x318c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c5c:
    // 0x318c5c: 0x0  nop
    ctx->pc = 0x318c5cu;
    // NOP
label_318c60:
    // 0x318c60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318c64:
    if (ctx->pc == 0x318C64u) {
        ctx->pc = 0x318C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C60u;
        // 0x318c64: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C68u;
        goto label_318c68;
    }
    ctx->pc = 0x318C60u;
    {
        const bool branch_taken_0x318c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C60u;
        // 0x318c64: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c60) {
            ctx->pc = 0x318C6Cu;
            goto label_318c6c;
        }
    }
    ctx->pc = 0x318C68u;
label_318c68:
    // 0x318c68: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x318c68u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_318c6c:
    // 0x318c6c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x318c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318c70:
    // 0x318c70: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x318c70u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_318c74:
    // 0x318c74: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x318c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c78:
    // 0x318c78: 0x0  nop
    ctx->pc = 0x318c78u;
    // NOP
label_318c7c:
    // 0x318c7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318c80:
    if (ctx->pc == 0x318C80u) {
        ctx->pc = 0x318C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C7Cu;
        // 0x318c80: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C84u;
        goto label_318c84;
    }
    ctx->pc = 0x318C7Cu;
    {
        const bool branch_taken_0x318c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C7Cu;
        // 0x318c80: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c7c) {
            ctx->pc = 0x318C88u;
            goto label_318c88;
        }
    }
    ctx->pc = 0x318C84u;
label_318c84:
    // 0x318c84: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x318c84u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_318c88:
    // 0x318c88: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x318c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_318c8c:
    // 0x318c8c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_318c90:
    if (ctx->pc == 0x318C90u) {
        ctx->pc = 0x318C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C8Cu;
        // 0x318c90: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318C94u;
        goto label_318c94;
    }
    ctx->pc = 0x318C8Cu;
    {
        const bool branch_taken_0x318c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C8Cu;
        // 0x318c90: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c8c) {
            ctx->pc = 0x318E68u;
            goto label_318e68;
        }
    }
    ctx->pc = 0x318C94u;
label_318c94:
    // 0x318c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318c98:
    // 0x318c98: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x318c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318c9c:
    // 0x318c9c: 0x0  nop
    ctx->pc = 0x318c9cu;
    // NOP
label_318ca0:
    // 0x318ca0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_318ca4:
    if (ctx->pc == 0x318CA4u) {
        ctx->pc = 0x318CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CA0u;
        // 0x318ca4: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CA8u;
        goto label_318ca8;
    }
    ctx->pc = 0x318CA0u;
    {
        const bool branch_taken_0x318ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CA0u;
        // 0x318ca4: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ca0) {
            ctx->pc = 0x318CD8u;
            goto label_318cd8;
        }
    }
    ctx->pc = 0x318CA8u;
label_318ca8:
    // 0x318ca8: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x318ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318cac:
    // 0x318cac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x318cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318cb0:
    // 0x318cb0: 0x0  nop
    ctx->pc = 0x318cb0u;
    // NOP
label_318cb4:
    // 0x318cb4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_318cb8:
    if (ctx->pc == 0x318CB8u) {
        ctx->pc = 0x318CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CB4u;
        // 0x318cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CBCu;
        goto label_318cbc;
    }
    ctx->pc = 0x318CB4u;
    {
        const bool branch_taken_0x318cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CB4u;
        // 0x318cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cb4) {
            ctx->pc = 0x318D74u;
            goto label_318d74;
        }
    }
    ctx->pc = 0x318CBCu;
label_318cbc:
    // 0x318cbc: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x318cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318cc0:
    // 0x318cc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318cc4:
    // 0x318cc4: 0x0  nop
    ctx->pc = 0x318cc4u;
    // NOP
label_318cc8:
    // 0x318cc8: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_318ccc:
    if (ctx->pc == 0x318CCCu) {
        ctx->pc = 0x318CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CC8u;
        // 0x318ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318CD0u;
        goto label_318cd0;
    }
    ctx->pc = 0x318CC8u;
    {
        const bool branch_taken_0x318cc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318cc8) {
            ctx->pc = 0x318CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318CC8u;
            // 0x318ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D74u;
            goto label_318d74;
        }
    }
    ctx->pc = 0x318CD0u;
label_318cd0:
    // 0x318cd0: 0x10000028  b           . + 4 + (0x28 << 2)
label_318cd4:
    if (ctx->pc == 0x318CD4u) {
        ctx->pc = 0x318CD8u;
        goto label_318cd8;
    }
    ctx->pc = 0x318CD0u;
    {
        const bool branch_taken_0x318cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318cd0) {
            ctx->pc = 0x318D74u;
            goto label_318d74;
        }
    }
    ctx->pc = 0x318CD8u;
label_318cd8:
    // 0x318cd8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x318cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318cdc:
    // 0x318cdc: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x318cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318ce0:
    // 0x318ce0: 0xc7a201e4  lwc1        $f2, 0x1E4($sp)
    ctx->pc = 0x318ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318ce4:
    // 0x318ce4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318ce4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318ce8:
    // 0x318ce8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x318ce8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_318cec:
    // 0x318cec: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x318cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_318cf0:
    // 0x318cf0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x318cf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_318cf4:
    // 0x318cf4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x318cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318cf8:
    // 0x318cf8: 0x0  nop
    ctx->pc = 0x318cf8u;
    // NOP
label_318cfc:
    // 0x318cfc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_318d00:
    if (ctx->pc == 0x318D00u) {
        ctx->pc = 0x318D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CFCu;
        // 0x318d00: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D04u;
        goto label_318d04;
    }
    ctx->pc = 0x318CFCu;
    {
        const bool branch_taken_0x318cfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CFCu;
        // 0x318d00: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cfc) {
            ctx->pc = 0x318D0Cu;
            goto label_318d0c;
        }
    }
    ctx->pc = 0x318D04u;
label_318d04:
    // 0x318d04: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x318d04u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_318d08:
    // 0x318d08: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x318d08u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_318d0c:
    // 0x318d0c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x318d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318d10:
    // 0x318d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318d14:
    // 0x318d14: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x318d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d18:
    // 0x318d18: 0x0  nop
    ctx->pc = 0x318d18u;
    // NOP
label_318d1c:
    // 0x318d1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_318d20:
    if (ctx->pc == 0x318D20u) {
        ctx->pc = 0x318D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D1Cu;
        // 0x318d20: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D24u;
        goto label_318d24;
    }
    ctx->pc = 0x318D1Cu;
    {
        const bool branch_taken_0x318d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D1Cu;
        // 0x318d20: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d1c) {
            ctx->pc = 0x318D38u;
            goto label_318d38;
        }
    }
    ctx->pc = 0x318D24u;
label_318d24:
    // 0x318d24: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x318d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318d28:
    // 0x318d28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318d28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d2c:
    // 0x318d2c: 0x0  nop
    ctx->pc = 0x318d2cu;
    // NOP
label_318d30:
    // 0x318d30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_318d34:
    if (ctx->pc == 0x318D34u) {
        ctx->pc = 0x318D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D30u;
        // 0x318d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D38u;
        goto label_318d38;
    }
    ctx->pc = 0x318D30u;
    {
        const bool branch_taken_0x318d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318d30) {
            ctx->pc = 0x318D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318D30u;
            // 0x318d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D38u;
            goto label_318d38;
        }
    }
    ctx->pc = 0x318D38u;
label_318d38:
    // 0x318d38: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
label_318d3c:
    if (ctx->pc == 0x318D3Cu) {
        ctx->pc = 0x318D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D38u;
        // 0x318d3c: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D40u;
        goto label_318d40;
    }
    ctx->pc = 0x318D38u;
    {
        const bool branch_taken_0x318d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d38) {
            ctx->pc = 0x318D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318D38u;
            // 0x318d3c: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E6Cu;
            goto label_318e6c;
        }
    }
    ctx->pc = 0x318D40u;
label_318d40:
    // 0x318d40: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x318d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d44:
    // 0x318d44: 0x0  nop
    ctx->pc = 0x318d44u;
    // NOP
label_318d48:
    // 0x318d48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318d4c:
    if (ctx->pc == 0x318D4Cu) {
        ctx->pc = 0x318D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D48u;
        // 0x318d4c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D50u;
        goto label_318d50;
    }
    ctx->pc = 0x318D48u;
    {
        const bool branch_taken_0x318d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D48u;
        // 0x318d4c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d48) {
            ctx->pc = 0x318D54u;
            goto label_318d54;
        }
    }
    ctx->pc = 0x318D50u;
label_318d50:
    // 0x318d50: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x318d50u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_318d54:
    // 0x318d54: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x318d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318d58:
    // 0x318d58: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x318d58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_318d5c:
    // 0x318d5c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x318d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d60:
    // 0x318d60: 0x0  nop
    ctx->pc = 0x318d60u;
    // NOP
label_318d64:
    // 0x318d64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318d68:
    if (ctx->pc == 0x318D68u) {
        ctx->pc = 0x318D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D64u;
        // 0x318d68: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D6Cu;
        goto label_318d6c;
    }
    ctx->pc = 0x318D64u;
    {
        const bool branch_taken_0x318d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D64u;
        // 0x318d68: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d64) {
            ctx->pc = 0x318D70u;
            goto label_318d70;
        }
    }
    ctx->pc = 0x318D6Cu;
label_318d6c:
    // 0x318d6c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x318d6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_318d70:
    // 0x318d70: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x318d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_318d74:
    // 0x318d74: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_318d78:
    if (ctx->pc == 0x318D78u) {
        ctx->pc = 0x318D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D74u;
        // 0x318d78: 0xc7a30034  lwc1        $f3, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D7Cu;
        goto label_318d7c;
    }
    ctx->pc = 0x318D74u;
    {
        const bool branch_taken_0x318d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D74u;
        // 0x318d78: 0xc7a30034  lwc1        $f3, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d74) {
            ctx->pc = 0x318E68u;
            goto label_318e68;
        }
    }
    ctx->pc = 0x318D7Cu;
label_318d7c:
    // 0x318d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318d80:
    // 0x318d80: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x318d80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d84:
    // 0x318d84: 0x0  nop
    ctx->pc = 0x318d84u;
    // NOP
label_318d88:
    // 0x318d88: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_318d8c:
    if (ctx->pc == 0x318D8Cu) {
        ctx->pc = 0x318D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D88u;
        // 0x318d8c: 0xc7a1001c  lwc1        $f1, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318D90u;
        goto label_318d90;
    }
    ctx->pc = 0x318D88u;
    {
        const bool branch_taken_0x318d88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D88u;
        // 0x318d8c: 0xc7a1001c  lwc1        $f1, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d88) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318D90u;
label_318d90:
    // 0x318d90: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x318d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318d94:
    // 0x318d94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x318d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318d98:
    // 0x318d98: 0x0  nop
    ctx->pc = 0x318d98u;
    // NOP
label_318d9c:
    // 0x318d9c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_318da0:
    if (ctx->pc == 0x318DA0u) {
        ctx->pc = 0x318DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D9Cu;
        // 0x318da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DA4u;
        goto label_318da4;
    }
    ctx->pc = 0x318D9Cu;
    {
        const bool branch_taken_0x318d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D9Cu;
        // 0x318da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d9c) {
            ctx->pc = 0x318E5Cu;
            goto label_318e5c;
        }
    }
    ctx->pc = 0x318DA4u;
label_318da4:
    // 0x318da4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x318da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318da8:
    // 0x318da8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318dac:
    // 0x318dac: 0x0  nop
    ctx->pc = 0x318dacu;
    // NOP
label_318db0:
    // 0x318db0: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_318db4:
    if (ctx->pc == 0x318DB4u) {
        ctx->pc = 0x318DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DB0u;
        // 0x318db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DB8u;
        goto label_318db8;
    }
    ctx->pc = 0x318DB0u;
    {
        const bool branch_taken_0x318db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318db0) {
            ctx->pc = 0x318DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318DB0u;
            // 0x318db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E5Cu;
            goto label_318e5c;
        }
    }
    ctx->pc = 0x318DB8u;
label_318db8:
    // 0x318db8: 0x10000029  b           . + 4 + (0x29 << 2)
label_318dbc:
    if (ctx->pc == 0x318DBCu) {
        ctx->pc = 0x318DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DB8u;
        // 0x318dbc: 0x27b3004c  addiu       $s3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DC0u;
        goto label_318dc0;
    }
    ctx->pc = 0x318DB8u;
    {
        const bool branch_taken_0x318db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DB8u;
        // 0x318dbc: 0x27b3004c  addiu       $s3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318db8) {
            ctx->pc = 0x318E60u;
            goto label_318e60;
        }
    }
    ctx->pc = 0x318DC0u;
label_318dc0:
    // 0x318dc0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x318dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318dc4:
    // 0x318dc4: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x318dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318dc8:
    // 0x318dc8: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x318dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318dcc:
    // 0x318dcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318dccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318dd0:
    // 0x318dd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x318dd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_318dd4:
    // 0x318dd4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x318dd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_318dd8:
    // 0x318dd8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x318dd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_318ddc:
    // 0x318ddc: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x318ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318de0:
    // 0x318de0: 0x0  nop
    ctx->pc = 0x318de0u;
    // NOP
label_318de4:
    // 0x318de4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_318de8:
    if (ctx->pc == 0x318DE8u) {
        ctx->pc = 0x318DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE4u;
        // 0x318de8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318DECu;
        goto label_318dec;
    }
    ctx->pc = 0x318DE4u;
    {
        const bool branch_taken_0x318de4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE4u;
        // 0x318de8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318de4) {
            ctx->pc = 0x318DF4u;
            goto label_318df4;
        }
    }
    ctx->pc = 0x318DECu;
label_318dec:
    // 0x318dec: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x318decu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_318df0:
    // 0x318df0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x318df0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_318df4:
    // 0x318df4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x318df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318df8:
    // 0x318df8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318dfc:
    // 0x318dfc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x318dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318e00:
    // 0x318e00: 0x0  nop
    ctx->pc = 0x318e00u;
    // NOP
label_318e04:
    // 0x318e04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_318e08:
    if (ctx->pc == 0x318E08u) {
        ctx->pc = 0x318E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E04u;
        // 0x318e08: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E0Cu;
        goto label_318e0c;
    }
    ctx->pc = 0x318E04u;
    {
        const bool branch_taken_0x318e04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E04u;
        // 0x318e08: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e04) {
            ctx->pc = 0x318E20u;
            goto label_318e20;
        }
    }
    ctx->pc = 0x318E0Cu;
label_318e0c:
    // 0x318e0c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x318e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318e10:
    // 0x318e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318e14:
    // 0x318e14: 0x0  nop
    ctx->pc = 0x318e14u;
    // NOP
label_318e18:
    // 0x318e18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_318e1c:
    if (ctx->pc == 0x318E1Cu) {
        ctx->pc = 0x318E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E18u;
        // 0x318e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E20u;
        goto label_318e20;
    }
    ctx->pc = 0x318E18u;
    {
        const bool branch_taken_0x318e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318e18) {
            ctx->pc = 0x318E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E18u;
            // 0x318e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E20u;
            goto label_318e20;
        }
    }
    ctx->pc = 0x318E20u;
label_318e20:
    // 0x318e20: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_318e24:
    if (ctx->pc == 0x318E24u) {
        ctx->pc = 0x318E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E20u;
        // 0x318e24: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E28u;
        goto label_318e28;
    }
    ctx->pc = 0x318E20u;
    {
        const bool branch_taken_0x318e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e20) {
            ctx->pc = 0x318E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E20u;
            // 0x318e24: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E6Cu;
            goto label_318e6c;
        }
    }
    ctx->pc = 0x318E28u;
label_318e28:
    // 0x318e28: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x318e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318e2c:
    // 0x318e2c: 0x0  nop
    ctx->pc = 0x318e2cu;
    // NOP
label_318e30:
    // 0x318e30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318e34:
    if (ctx->pc == 0x318E34u) {
        ctx->pc = 0x318E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E30u;
        // 0x318e34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E38u;
        goto label_318e38;
    }
    ctx->pc = 0x318E30u;
    {
        const bool branch_taken_0x318e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E30u;
        // 0x318e34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e30) {
            ctx->pc = 0x318E3Cu;
            goto label_318e3c;
        }
    }
    ctx->pc = 0x318E38u;
label_318e38:
    // 0x318e38: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x318e38u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_318e3c:
    // 0x318e3c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x318e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318e40:
    // 0x318e40: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x318e40u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_318e44:
    // 0x318e44: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x318e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318e48:
    // 0x318e48: 0x0  nop
    ctx->pc = 0x318e48u;
    // NOP
label_318e4c:
    // 0x318e4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318e50:
    if (ctx->pc == 0x318E50u) {
        ctx->pc = 0x318E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E4Cu;
        // 0x318e50: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E54u;
        goto label_318e54;
    }
    ctx->pc = 0x318E4Cu;
    {
        const bool branch_taken_0x318e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E4Cu;
        // 0x318e50: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e4c) {
            ctx->pc = 0x318E58u;
            goto label_318e58;
        }
    }
    ctx->pc = 0x318E54u;
label_318e54:
    // 0x318e54: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x318e54u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_318e58:
    // 0x318e58: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x318e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_318e5c:
    // 0x318e5c: 0x27b3004c  addiu       $s3, $sp, 0x4C
    ctx->pc = 0x318e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_318e60:
    // 0x318e60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_318e64:
    if (ctx->pc == 0x318E64u) {
        ctx->pc = 0x318E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E60u;
        // 0x318e64: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E68u;
        goto label_318e68;
    }
    ctx->pc = 0x318E60u;
    {
        const bool branch_taken_0x318e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E60u;
        // 0x318e64: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e60) {
            ctx->pc = 0x318E78u;
            goto label_318e78;
        }
    }
    ctx->pc = 0x318E68u;
label_318e68:
    // 0x318e68: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x318e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_318e6c:
    // 0x318e6c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x318e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_318e70:
    // 0x318e70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x318e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318e74:
    // 0x318e74: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x318e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_318e78:
    // 0x318e78: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x318e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_318e7c:
    // 0x318e7c: 0x50400188  beql        $v0, $zero, . + 4 + (0x188 << 2)
label_318e80:
    if (ctx->pc == 0x318E80u) {
        ctx->pc = 0x318E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E7Cu;
        // 0x318e80: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318E84u;
        goto label_318e84;
    }
    ctx->pc = 0x318E7Cu;
    {
        const bool branch_taken_0x318e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e7c) {
            ctx->pc = 0x318E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E7Cu;
            // 0x318e80: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3194A0u;
            goto label_3194a0;
        }
    }
    ctx->pc = 0x318E84u;
label_318e84:
    // 0x318e84: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_318e88:
    // 0x318e88: 0x8c64fff4  lw          $a0, -0xC($v1)
    ctx->pc = 0x318e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_318e8c:
    // 0x318e8c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x318e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_318e90:
    // 0x318e90: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x318e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_318e94:
    // 0x318e94: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x318e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_318e98:
    // 0x318e98: 0x14680071  bne         $v1, $t0, . + 4 + (0x71 << 2)
label_318e9c:
    if (ctx->pc == 0x318E9Cu) {
        ctx->pc = 0x318E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E98u;
        // 0x318e9c: 0x8fa201d8  lw          $v0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318EA0u;
        goto label_318ea0;
    }
    ctx->pc = 0x318E98u;
    {
        const bool branch_taken_0x318e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x318E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E98u;
        // 0x318e9c: 0x8fa201d8  lw          $v0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e98) {
            ctx->pc = 0x319060u;
            goto label_319060;
        }
    }
    ctx->pc = 0x318EA0u;
label_318ea0:
    // 0x318ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x318ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_318ea4:
    // 0x318ea4: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x318ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_318ea8:
    // 0x318ea8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x318ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_318eac:
    // 0x318eac: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x318eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_318eb0:
    // 0x318eb0: 0x8c4c0020  lw          $t4, 0x20($v0)
    ctx->pc = 0x318eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_318eb4:
    // 0x318eb4: 0x27a90038  addiu       $t1, $sp, 0x38
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_318eb8:
    // 0x318eb8: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x318eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_318ebc:
    // 0x318ebc: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x318ebcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_318ec0:
    // 0x318ec0: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x318ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_318ec4:
    // 0x318ec4: 0x0  nop
    ctx->pc = 0x318ec4u;
    // NOP
label_318ec8:
    // 0x318ec8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x318ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_318ecc:
    // 0x318ecc: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x318eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_318ed0:
    // 0x318ed0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_318ed4:
    // 0x318ed4: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x318ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_318ed8:
    // 0x318ed8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x318ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_318edc:
    // 0x318edc: 0x3067000c  andi        $a3, $v1, 0xC
    ctx->pc = 0x318edcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_318ee0:
    // 0x318ee0: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_318ee4:
    // 0x318ee4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x318ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318ee8:
    // 0x318ee8: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x318ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_318eec:
    // 0x318eec: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x318eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318ef0:
    // 0x318ef0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x318ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_318ef4:
    // 0x318ef4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x318ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318ef8:
    // 0x318ef8: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x318ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318efc:
    // 0x318efc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x318efcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_318f00:
    // 0x318f00: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x318f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_318f04:
    // 0x318f04: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x318f04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_318f08:
    // 0x318f08: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x318f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318f0c:
    // 0x318f0c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x318f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318f10:
    // 0x318f10: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x318f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318f14:
    // 0x318f14: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x318f14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_318f18:
    // 0x318f18: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x318f18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_318f1c:
    // 0x318f1c: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x318f1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_318f20:
    // 0x318f20: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_318f24:
    if (ctx->pc == 0x318F24u) {
        ctx->pc = 0x318F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F20u;
        // 0x318f24: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F28u;
        goto label_318f28;
    }
    ctx->pc = 0x318F20u;
    {
        const bool branch_taken_0x318f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F20u;
        // 0x318f24: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f20) {
            ctx->pc = 0x318FB4u;
            goto label_318fb4;
        }
    }
    ctx->pc = 0x318F28u;
label_318f28:
    // 0x318f28: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x318f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318f2c:
    // 0x318f2c: 0x0  nop
    ctx->pc = 0x318f2cu;
    // NOP
label_318f30:
    // 0x318f30: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_318f34:
    if (ctx->pc == 0x318F34u) {
        ctx->pc = 0x318F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F30u;
        // 0x318f34: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F38u;
        goto label_318f38;
    }
    ctx->pc = 0x318F30u;
    {
        const bool branch_taken_0x318f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318f30) {
            ctx->pc = 0x318F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F30u;
            // 0x318f34: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319048u;
            goto label_319048;
        }
    }
    ctx->pc = 0x318F38u;
label_318f38:
    // 0x318f38: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x318f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318f3c:
    // 0x318f3c: 0x0  nop
    ctx->pc = 0x318f3cu;
    // NOP
label_318f40:
    // 0x318f40: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_318f44:
    if (ctx->pc == 0x318F44u) {
        ctx->pc = 0x318F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F40u;
        // 0x318f44: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F48u;
        goto label_318f48;
    }
    ctx->pc = 0x318F40u;
    {
        const bool branch_taken_0x318f40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F40u;
        // 0x318f44: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f40) {
            ctx->pc = 0x318FC4u;
            goto label_318fc4;
        }
    }
    ctx->pc = 0x318F48u;
label_318f48:
    // 0x318f48: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x318f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_318f4c:
    // 0x318f4c: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x318f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_318f50:
    // 0x318f50: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x318f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318f54:
    // 0x318f54: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x318f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318f58:
    // 0x318f58: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x318f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_318f5c:
    // 0x318f5c: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x318f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318f60:
    // 0x318f60: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x318f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_318f64:
    // 0x318f64: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x318f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_318f68:
    // 0x318f68: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x318f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
label_318f6c:
    // 0x318f6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_318f70:
    if (ctx->pc == 0x318F70u) {
        ctx->pc = 0x318F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F6Cu;
        // 0x318f70: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F74u;
        goto label_318f74;
    }
    ctx->pc = 0x318F6Cu;
    {
        const bool branch_taken_0x318f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F6Cu;
        // 0x318f70: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f6c) {
            ctx->pc = 0x318F88u;
            goto label_318f88;
        }
    }
    ctx->pc = 0x318F74u;
label_318f74:
    // 0x318f74: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x318f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_318f78:
    // 0x318f78: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x318f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_318f7c:
    // 0x318f7c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x318f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_318f80:
    // 0x318f80: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x318f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_318f84:
    // 0x318f84: 0x0  nop
    ctx->pc = 0x318f84u;
    // NOP
label_318f88:
    // 0x318f88: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x318f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_318f8c:
    // 0x318f8c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x318f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318f90:
    // 0x318f90: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x318f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_318f94:
    // 0x318f94: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_318f98:
    if (ctx->pc == 0x318F98u) {
        ctx->pc = 0x318F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F94u;
        // 0x318f98: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318F9Cu;
        goto label_318f9c;
    }
    ctx->pc = 0x318F94u;
    {
        const bool branch_taken_0x318f94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F94u;
        // 0x318f98: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f94) {
            ctx->pc = 0x319048u;
            goto label_319048;
        }
    }
    ctx->pc = 0x318F9Cu;
label_318f9c:
    // 0x318f9c: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x318f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_318fa0:
    // 0x318fa0: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x318fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318fa4:
    // 0x318fa4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x318fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_318fa8:
    // 0x318fa8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x318fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_318fac:
    // 0x318fac: 0x10000026  b           . + 4 + (0x26 << 2)
label_318fb0:
    if (ctx->pc == 0x318FB0u) {
        ctx->pc = 0x318FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FACu;
        // 0x318fb0: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FB4u;
        goto label_318fb4;
    }
    ctx->pc = 0x318FACu;
    {
        const bool branch_taken_0x318fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FACu;
        // 0x318fb0: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fac) {
            ctx->pc = 0x319048u;
            goto label_319048;
        }
    }
    ctx->pc = 0x318FB4u;
label_318fb4:
    // 0x318fb4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x318fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318fb8:
    // 0x318fb8: 0x0  nop
    ctx->pc = 0x318fb8u;
    // NOP
label_318fbc:
    // 0x318fbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_318fc0:
    if (ctx->pc == 0x318FC0u) {
        ctx->pc = 0x318FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FBCu;
        // 0x318fc0: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FC4u;
        goto label_318fc4;
    }
    ctx->pc = 0x318FBCu;
    {
        const bool branch_taken_0x318fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FBCu;
        // 0x318fc0: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fbc) {
            ctx->pc = 0x318FCCu;
            goto label_318fcc;
        }
    }
    ctx->pc = 0x318FC4u;
label_318fc4:
    // 0x318fc4: 0x10000020  b           . + 4 + (0x20 << 2)
label_318fc8:
    if (ctx->pc == 0x318FC8u) {
        ctx->pc = 0x318FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FC4u;
        // 0x318fc8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FCCu;
        goto label_318fcc;
    }
    ctx->pc = 0x318FC4u;
    {
        const bool branch_taken_0x318fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FC4u;
        // 0x318fc8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fc4) {
            ctx->pc = 0x319048u;
            goto label_319048;
        }
    }
    ctx->pc = 0x318FCCu;
label_318fcc:
    // 0x318fcc: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x318fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318fd0:
    // 0x318fd0: 0x0  nop
    ctx->pc = 0x318fd0u;
    // NOP
label_318fd4:
    // 0x318fd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_318fd8:
    if (ctx->pc == 0x318FD8u) {
        ctx->pc = 0x318FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FD4u;
        // 0x318fd8: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FDCu;
        goto label_318fdc;
    }
    ctx->pc = 0x318FD4u;
    {
        const bool branch_taken_0x318fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FD4u;
        // 0x318fd8: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fd4) {
            ctx->pc = 0x318FE4u;
            goto label_318fe4;
        }
    }
    ctx->pc = 0x318FDCu;
label_318fdc:
    // 0x318fdc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_318fe0:
    if (ctx->pc == 0x318FE0u) {
        ctx->pc = 0x318FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FDCu;
        // 0x318fe0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318FE4u;
        goto label_318fe4;
    }
    ctx->pc = 0x318FDCu;
    {
        const bool branch_taken_0x318fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FDCu;
        // 0x318fe0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fdc) {
            ctx->pc = 0x319048u;
            goto label_319048;
        }
    }
    ctx->pc = 0x318FE4u;
label_318fe4:
    // 0x318fe4: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x318fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_318fe8:
    // 0x318fe8: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x318fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318fec:
    // 0x318fec: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x318fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_318ff0:
    // 0x318ff0: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x318ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_318ff4:
    // 0x318ff4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x318ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318ff8:
    // 0x318ff8: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x318ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318ffc:
    // 0x318ffc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x318ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_319000:
    // 0x319000: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x319000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_319004:
    // 0x319004: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x319004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
label_319008:
    // 0x319008: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31900c:
    if (ctx->pc == 0x31900Cu) {
        ctx->pc = 0x31900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319008u;
        // 0x31900c: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319010u;
        goto label_319010;
    }
    ctx->pc = 0x319008u;
    {
        const bool branch_taken_0x319008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319008u;
        // 0x31900c: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319008) {
            ctx->pc = 0x319020u;
            goto label_319020;
        }
    }
    ctx->pc = 0x319010u;
label_319010:
    // 0x319010: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x319010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_319014:
    // 0x319014: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x319014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_319018:
    // 0x319018: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x319018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_31901c:
    // 0x31901c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x31901cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_319020:
    // 0x319020: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x319020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_319024:
    // 0x319024: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x319024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319028:
    // 0x319028: 0x0  nop
    ctx->pc = 0x319028u;
    // NOP
label_31902c:
    // 0x31902c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_319030:
    if (ctx->pc == 0x319030u) {
        ctx->pc = 0x319030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31902Cu;
        // 0x319030: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319034u;
        goto label_319034;
    }
    ctx->pc = 0x31902Cu;
    {
        const bool branch_taken_0x31902c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31902Cu;
        // 0x319030: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31902c) {
            ctx->pc = 0x319048u;
            goto label_319048;
        }
    }
    ctx->pc = 0x319034u;
label_319034:
    // 0x319034: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x319034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_319038:
    // 0x319038: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x319038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31903c:
    // 0x31903c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x31903cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_319040:
    // 0x319040: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x319040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_319044:
    // 0x319044: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x319044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_319048:
    // 0x319048: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x319048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_31904c:
    // 0x31904c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_319050:
    // 0x319050: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x319050u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_319054:
    // 0x319054: 0x108dff9c  beq         $a0, $t5, . + 4 + (-0x64 << 2)
label_319058:
    if (ctx->pc == 0x319058u) {
        ctx->pc = 0x319058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319054u;
        // 0x319058: 0x8fa501d8  lw          $a1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31905Cu;
        goto label_31905c;
    }
    ctx->pc = 0x319054u;
    {
        const bool branch_taken_0x319054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        ctx->pc = 0x319058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319054u;
        // 0x319058: 0x8fa501d8  lw          $a1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319054) {
            ctx->pc = 0x318EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318ec8;
        }
    }
    ctx->pc = 0x31905Cu;
label_31905c:
    // 0x31905c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_319060:
    // 0x319060: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x319060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_319064:
    // 0x319064: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x319064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_319068:
    // 0x319068: 0xa7a30200  sh          $v1, 0x200($sp)
    ctx->pc = 0x319068u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 3));
label_31906c:
    // 0x31906c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x31906cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_319070:
    // 0x319070: 0xa7a20202  sh          $v0, 0x202($sp)
    ctx->pc = 0x319070u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 514), (uint16_t)GPR_U32(ctx, 2));
label_319074:
    // 0x319074: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x319074u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_319078:
    // 0x319078: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x319078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_31907c:
    // 0x31907c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_319080:
    // 0x319080: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x319080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_319084:
    // 0x319084: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
label_319088:
    if (ctx->pc == 0x319088u) {
        ctx->pc = 0x319088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319084u;
        // 0x319088: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31908Cu;
        goto label_31908c;
    }
    ctx->pc = 0x319084u;
    {
        const bool branch_taken_0x319084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319084u;
        // 0x319088: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319084) {
            ctx->pc = 0x319474u;
            goto label_319474;
        }
    }
    ctx->pc = 0x31908Cu;
label_31908c:
    // 0x31908c: 0xc797812c  lwc1        $f23, -0x7ED4($gp)
    ctx->pc = 0x31908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_319090:
    // 0x319090: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x319090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_319094:
    // 0x319094: 0xc7968130  lwc1        $f22, -0x7ED0($gp)
    ctx->pc = 0x319094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_319098:
    // 0x319098: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x319098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_31909c:
    // 0x31909c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3190a0:
    // 0x3190a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3190a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3190a4:
    // 0x3190a4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3190a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3190a8:
    // 0x3190a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3190ac:
    if (ctx->pc == 0x3190ACu) {
        ctx->pc = 0x3190ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190A8u;
        // 0x3190ac: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3190B0u;
        goto label_3190b0;
    }
    ctx->pc = 0x3190A8u;
    {
        const bool branch_taken_0x3190a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190A8u;
        // 0x3190ac: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190a8) {
            ctx->pc = 0x3190BCu;
            goto label_3190bc;
        }
    }
    ctx->pc = 0x3190B0u;
label_3190b0:
    // 0x3190b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3190b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3190b4:
    // 0x3190b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3190b8:
    if (ctx->pc == 0x3190B8u) {
        ctx->pc = 0x3190B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190B4u;
        // 0x3190b8: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3190BCu;
        goto label_3190bc;
    }
    ctx->pc = 0x3190B4u;
    {
        const bool branch_taken_0x3190b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190B4u;
        // 0x3190b8: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190b4) {
            ctx->pc = 0x3190C0u;
            goto label_3190c0;
        }
    }
    ctx->pc = 0x3190BCu;
label_3190bc:
    // 0x3190bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3190bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3190c0:
    // 0x3190c0: 0x8fa902b0  lw          $t1, 0x2B0($sp)
    ctx->pc = 0x3190c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_3190c4:
    // 0x3190c4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3190c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_3190c8:
    // 0x3190c8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3190c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_3190cc:
    // 0x3190cc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3190ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3190d0:
    // 0x3190d0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3190d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3190d4:
    // 0x3190d4: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x3190d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3190d8:
    // 0x3190d8: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x3190d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3190dc:
    // 0x3190dc: 0x941818  mult        $v1, $a0, $s4
    ctx->pc = 0x3190dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3190e0:
    // 0x3190e0: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x3190e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3190e4:
    // 0x3190e4: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x3190e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3190e8:
    // 0x3190e8: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x3190e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3190ec:
    // 0x3190ec: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x3190ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3190f0:
    // 0x3190f0: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x3190f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3190f4:
    // 0x3190f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3190f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3190f8:
    // 0x3190f8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3190f8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3190fc:
    // 0x3190fc: 0xe7a70210  swc1        $f7, 0x210($sp)
    ctx->pc = 0x3190fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_319100:
    // 0x319100: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x319100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319104:
    // 0x319104: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x319104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_319108:
    // 0x319108: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x319108u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_31910c:
    // 0x31910c: 0xe7aa0214  swc1        $f10, 0x214($sp)
    ctx->pc = 0x31910cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_319110:
    // 0x319110: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x319110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_319114:
    // 0x319114: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x319114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319118:
    // 0x319118: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x319118u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_31911c:
    // 0x31911c: 0xe7a80218  swc1        $f8, 0x218($sp)
    ctx->pc = 0x31911cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_319120:
    // 0x319120: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x319120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_319124:
    // 0x319124: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x319124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319128:
    // 0x319128: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x319128u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_31912c:
    // 0x31912c: 0xe7a40220  swc1        $f4, 0x220($sp)
    ctx->pc = 0x31912cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_319130:
    // 0x319130: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x319130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319134:
    // 0x319134: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x319134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_319138:
    // 0x319138: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x319138u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_31913c:
    // 0x31913c: 0xe7a60224  swc1        $f6, 0x224($sp)
    ctx->pc = 0x31913cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_319140:
    // 0x319140: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x319140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319144:
    // 0x319144: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x319144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319148:
    // 0x319148: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x319148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31914c:
    // 0x31914c: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x31914cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_319150:
    // 0x319150: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x319150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_319154:
    // 0x319154: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x319154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319158:
    // 0x319158: 0x46042a42  mul.s       $f9, $f5, $f4
    ctx->pc = 0x319158u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_31915c:
    // 0x31915c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x31915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319160:
    // 0x319160: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x319160u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_319164:
    // 0x319164: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x319164u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_319168:
    // 0x319168: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x319168u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_31916c:
    // 0x31916c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x31916cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_319170:
    // 0x319170: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x319170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_319174:
    // 0x319174: 0x46091981  sub.s       $f6, $f3, $f9
    ctx->pc = 0x319174u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_319178:
    // 0x319178: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x319178u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_31917c:
    // 0x31917c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31917cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_319180:
    // 0x319180: 0xe7a60248  swc1        $f6, 0x248($sp)
    ctx->pc = 0x319180u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_319184:
    // 0x319184: 0xe7a50240  swc1        $f5, 0x240($sp)
    ctx->pc = 0x319184u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_319188:
    // 0x319188: 0xe7a40244  swc1        $f4, 0x244($sp)
    ctx->pc = 0x319188u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_31918c:
    // 0x31918c: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x31918cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_319190:
    // 0x319190: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x319190u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_319194:
    // 0x319194: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x319194u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_319198:
    // 0x319198: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x319198u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
label_31919c:
    // 0x31919c: 0x46083a80  add.s       $f10, $f7, $f8
    ctx->pc = 0x31919cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_3191a0:
    // 0x3191a0: 0x460ab834  c.lt.s      $f23, $f10
    ctx->pc = 0x3191a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3191a4:
    // 0x3191a4: 0x0  nop
    ctx->pc = 0x3191a4u;
    // NOP
label_3191a8:
    // 0x3191a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3191ac:
    if (ctx->pc == 0x3191ACu) {
        ctx->pc = 0x3191ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191A8u;
        // 0x3191ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3191B0u;
        goto label_3191b0;
    }
    ctx->pc = 0x3191A8u;
    {
        const bool branch_taken_0x3191a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3191ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191A8u;
        // 0x3191ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191a8) {
            ctx->pc = 0x3191B8u;
            goto label_3191b8;
        }
    }
    ctx->pc = 0x3191B0u;
label_3191b0:
    // 0x3191b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3191b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3191b4:
    // 0x3191b4: 0x0  nop
    ctx->pc = 0x3191b4u;
    // NOP
label_3191b8:
    // 0x3191b8: 0x506000a6  beql        $v1, $zero, . + 4 + (0xA6 << 2)
label_3191bc:
    if (ctx->pc == 0x3191BCu) {
        ctx->pc = 0x3191BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191B8u;
        // 0x3191bc: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3191C0u;
        goto label_3191c0;
    }
    ctx->pc = 0x3191B8u;
    {
        const bool branch_taken_0x3191b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3191b8) {
            ctx->pc = 0x3191BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3191B8u;
            // 0x3191bc: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319454u;
            goto label_319454;
        }
    }
    ctx->pc = 0x3191C0u;
label_3191c0:
    // 0x3191c0: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x3191c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_3191c4:
    // 0x3191c4: 0x46160242  mul.s       $f9, $f0, $f22
    ctx->pc = 0x3191c4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3191c8:
    // 0x3191c8: 0x460952c1  sub.s       $f11, $f10, $f9
    ctx->pc = 0x3191c8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_3191cc:
    // 0x3191cc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3191ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3191d0:
    // 0x3191d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3191d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3191d4:
    // 0x3191d4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3191d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3191d8:
    // 0x3191d8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3191d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3191dc:
    // 0x3191dc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3191dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3191e0:
    // 0x3191e0: 0xe7a20230  swc1        $f2, 0x230($sp)
    ctx->pc = 0x3191e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_3191e4:
    // 0x3191e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3191e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3191e8:
    // 0x3191e8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3191e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3191ec:
    // 0x3191ec: 0xe7a30234  swc1        $f3, 0x234($sp)
    ctx->pc = 0x3191ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_3191f0:
    // 0x3191f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3191f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3191f4:
    // 0x3191f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3191f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3191f8:
    // 0x3191f8: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x3191f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_3191fc:
    // 0x3191fc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3191fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_319200:
    // 0x319200: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x319200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_319204:
    // 0x319204: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x319204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_319208:
    // 0x319208: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x319208u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_31920c:
    // 0x31920c: 0x46011200  add.s       $f8, $f2, $f1
    ctx->pc = 0x31920cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_319210:
    // 0x319210: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x319210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319214:
    // 0x319214: 0x0  nop
    ctx->pc = 0x319214u;
    // NOP
label_319218:
    // 0x319218: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31921c:
    if (ctx->pc == 0x31921Cu) {
        ctx->pc = 0x31921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319218u;
        // 0x31921c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319220u;
        goto label_319220;
    }
    ctx->pc = 0x319218u;
    {
        const bool branch_taken_0x319218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319218u;
        // 0x31921c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319218) {
            ctx->pc = 0x319230u;
            goto label_319230;
        }
    }
    ctx->pc = 0x319220u;
label_319220:
    // 0x319220: 0x460b4036  c.le.s      $f8, $f11
    ctx->pc = 0x319220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319224:
    // 0x319224: 0x0  nop
    ctx->pc = 0x319224u;
    // NOP
label_319228:
    // 0x319228: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31922c:
    if (ctx->pc == 0x31922Cu) {
        ctx->pc = 0x31922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319228u;
        // 0x31922c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319230u;
        goto label_319230;
    }
    ctx->pc = 0x319228u;
    {
        const bool branch_taken_0x319228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319228) {
            ctx->pc = 0x31922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319228u;
            // 0x31922c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319230u;
            goto label_319230;
        }
    }
    ctx->pc = 0x319230u;
label_319230:
    // 0x319230: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_319234:
    if (ctx->pc == 0x319234u) {
        ctx->pc = 0x319234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319230u;
        // 0x319234: 0xc7a30238  lwc1        $f3, 0x238($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319238u;
        goto label_319238;
    }
    ctx->pc = 0x319230u;
    {
        const bool branch_taken_0x319230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319230u;
        // 0x319234: 0xc7a30238  lwc1        $f3, 0x238($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319230) {
            ctx->pc = 0x319450u;
            goto label_319450;
        }
    }
    ctx->pc = 0x319238u;
label_319238:
    // 0x319238: 0xc7a40214  lwc1        $f4, 0x214($sp)
    ctx->pc = 0x319238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31923c:
    // 0x31923c: 0xc7a20234  lwc1        $f2, 0x234($sp)
    ctx->pc = 0x31923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319240:
    // 0x319240: 0xc7a70218  lwc1        $f7, 0x218($sp)
    ctx->pc = 0x319240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_319244:
    // 0x319244: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x319244u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_319248:
    // 0x319248: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x319248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31924c:
    // 0x31924c: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x31924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319250:
    // 0x319250: 0x46071182  mul.s       $f6, $f2, $f7
    ctx->pc = 0x319250u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_319254:
    // 0x319254: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x319254u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_319258:
    // 0x319258: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x319258u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_31925c:
    // 0x31925c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x31925cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_319260:
    // 0x319260: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x319260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_319264:
    // 0x319264: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x319264u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_319268:
    // 0x319268: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x319268u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_31926c:
    // 0x31926c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31926cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_319270:
    // 0x319270: 0xe7a60250  swc1        $f6, 0x250($sp)
    ctx->pc = 0x319270u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_319274:
    // 0x319274: 0xe7a40258  swc1        $f4, 0x258($sp)
    ctx->pc = 0x319274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_319278:
    // 0x319278: 0xe7a30254  swc1        $f3, 0x254($sp)
    ctx->pc = 0x319278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_31927c:
    // 0x31927c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x31927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319280:
    // 0x319280: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x319280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319284:
    // 0x319284: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x319284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_319288:
    // 0x319288: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x319288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31928c:
    // 0x31928c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x31928cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_319290:
    // 0x319290: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x319290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_319294:
    // 0x319294: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x319294u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_319298:
    // 0x319298: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x319298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31929c:
    // 0x31929c: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x31929cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3192a0:
    // 0x3192a0: 0x0  nop
    ctx->pc = 0x3192a0u;
    // NOP
label_3192a4:
    // 0x3192a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3192a8:
    if (ctx->pc == 0x3192A8u) {
        ctx->pc = 0x3192A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192A4u;
        // 0x3192a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192ACu;
        goto label_3192ac;
    }
    ctx->pc = 0x3192A4u;
    {
        const bool branch_taken_0x3192a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3192A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192A4u;
        // 0x3192a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192a4) {
            ctx->pc = 0x3192C0u;
            goto label_3192c0;
        }
    }
    ctx->pc = 0x3192ACu;
label_3192ac:
    // 0x3192ac: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x3192acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_3192b0:
    // 0x3192b0: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x3192b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3192b4:
    // 0x3192b4: 0x0  nop
    ctx->pc = 0x3192b4u;
    // NOP
label_3192b8:
    // 0x3192b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3192bc:
    if (ctx->pc == 0x3192BCu) {
        ctx->pc = 0x3192BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192B8u;
        // 0x3192bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192C0u;
        goto label_3192c0;
    }
    ctx->pc = 0x3192B8u;
    {
        const bool branch_taken_0x3192b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3192b8) {
            ctx->pc = 0x3192BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3192B8u;
            // 0x3192bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3192C0u;
            goto label_3192c0;
        }
    }
    ctx->pc = 0x3192C0u;
label_3192c0:
    // 0x3192c0: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_3192c4:
    if (ctx->pc == 0x3192C4u) {
        ctx->pc = 0x3192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192C0u;
        // 0x3192c4: 0xc7a00250  lwc1        $f0, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3192C8u;
        goto label_3192c8;
    }
    ctx->pc = 0x3192C0u;
    {
        const bool branch_taken_0x3192c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192C0u;
        // 0x3192c4: 0xc7a00250  lwc1        $f0, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192c0) {
            ctx->pc = 0x319450u;
            goto label_319450;
        }
    }
    ctx->pc = 0x3192C8u;
label_3192c8:
    // 0x3192c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3192c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3192cc:
    // 0x3192cc: 0xc7a30220  lwc1        $f3, 0x220($sp)
    ctx->pc = 0x3192ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3192d0:
    // 0x3192d0: 0xc7a20224  lwc1        $f2, 0x224($sp)
    ctx->pc = 0x3192d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3192d4:
    // 0x3192d4: 0xc7a40254  lwc1        $f4, 0x254($sp)
    ctx->pc = 0x3192d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3192d8:
    // 0x3192d8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3192d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3192dc:
    // 0x3192dc: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x3192dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3192e0:
    // 0x3192e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3192e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3192e4:
    // 0x3192e4: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x3192e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3192e8:
    // 0x3192e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3192e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3192ec:
    // 0x3192ec: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3192ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_3192f0:
    // 0x3192f0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3192f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3192f4:
    // 0x3192f4: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x3192f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3192f8:
    // 0x3192f8: 0x0  nop
    ctx->pc = 0x3192f8u;
    // NOP
label_3192fc:
    // 0x3192fc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_319300:
    if (ctx->pc == 0x319300u) {
        ctx->pc = 0x319300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192FCu;
        // 0x319300: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319304u;
        goto label_319304;
    }
    ctx->pc = 0x3192FCu;
    {
        const bool branch_taken_0x3192fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192FCu;
        // 0x319300: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192fc) {
            ctx->pc = 0x319314u;
            goto label_319314;
        }
    }
    ctx->pc = 0x319304u;
label_319304:
    // 0x319304: 0x460b1836  c.le.s      $f3, $f11
    ctx->pc = 0x319304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319308:
    // 0x319308: 0x0  nop
    ctx->pc = 0x319308u;
    // NOP
label_31930c:
    // 0x31930c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319310:
    if (ctx->pc == 0x319310u) {
        ctx->pc = 0x319310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31930Cu;
        // 0x319310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319314u;
        goto label_319314;
    }
    ctx->pc = 0x31930Cu;
    {
        const bool branch_taken_0x31930c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31930c) {
            ctx->pc = 0x319310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31930Cu;
            // 0x319310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319314u;
            goto label_319314;
        }
    }
    ctx->pc = 0x319314u;
label_319314:
    // 0x319314: 0x5060004f  beql        $v1, $zero, . + 4 + (0x4F << 2)
label_319318:
    if (ctx->pc == 0x319318u) {
        ctx->pc = 0x319318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319314u;
        // 0x319318: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31931Cu;
        goto label_31931c;
    }
    ctx->pc = 0x319314u;
    {
        const bool branch_taken_0x319314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319314) {
            ctx->pc = 0x319318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319314u;
            // 0x319318: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319454u;
            goto label_319454;
        }
    }
    ctx->pc = 0x31931Cu;
label_31931c:
    // 0x31931c: 0x460a6303  div.s       $f12, $f12, $f10
    ctx->pc = 0x31931cu;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[10]); }
label_319320:
    // 0x319320: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x319320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_319324:
    // 0x319324: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x319324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_319328:
    // 0x319328: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x319328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_31932c:
    // 0x31932c: 0xb3a50273  sdl         $a1, 0x273($sp)
    ctx->pc = 0x31932cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319330:
    // 0x319330: 0xb7a5026c  sdr         $a1, 0x26C($sp)
    ctx->pc = 0x319330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319334:
    // 0x319334: 0xafa80274  sw          $t0, 0x274($sp)
    ctx->pc = 0x319334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 8));
label_319338:
    // 0x319338: 0xafa70278  sw          $a3, 0x278($sp)
    ctx->pc = 0x319338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 7));
label_31933c:
    // 0x31933c: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x31933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
label_319340:
    // 0x319340: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x319340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_319344:
    // 0x319344: 0xafa60284  sw          $a2, 0x284($sp)
    ctx->pc = 0x319344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 6));
label_319348:
    // 0x319348: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x319348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_31934c:
    // 0x31934c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319350:
    // 0x319350: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x319350u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_319354:
    // 0x319354: 0xe7a70290  swc1        $f7, 0x290($sp)
    ctx->pc = 0x319354u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_319358:
    // 0x319358: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x319358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31935c:
    // 0x31935c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x31935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_319360:
    // 0x319360: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x319360u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_319364:
    // 0x319364: 0xe7a60294  swc1        $f6, 0x294($sp)
    ctx->pc = 0x319364u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_319368:
    // 0x319368: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x319368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31936c:
    // 0x31936c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319370:
    // 0x319370: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x319370u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_319374:
    // 0x319374: 0xe7a50298  swc1        $f5, 0x298($sp)
    ctx->pc = 0x319374u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_319378:
    // 0x319378: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x319378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31937c:
    // 0x31937c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319380:
    // 0x319380: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x319380u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_319384:
    // 0x319384: 0xe7a202a0  swc1        $f2, 0x2A0($sp)
    ctx->pc = 0x319384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_319388:
    // 0x319388: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x319388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31938c:
    // 0x31938c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x31938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_319390:
    // 0x319390: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x319390u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_319394:
    // 0x319394: 0xe7a402a4  swc1        $f4, 0x2A4($sp)
    ctx->pc = 0x319394u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_319398:
    // 0x319398: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x319398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31939c:
    // 0x31939c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3193a0:
    // 0x3193a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3193a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3193a4:
    // 0x3193a4: 0xe7a102a8  swc1        $f1, 0x2A8($sp)
    ctx->pc = 0x3193a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_3193a8:
    // 0x3193a8: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x3193a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3193ac:
    // 0x3193ac: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x3193acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3193b0:
    // 0x3193b0: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x3193b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_3193b4:
    // 0x3193b4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3193b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3193b8:
    // 0x3193b8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3193b8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3193bc:
    // 0x3193bc: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3193bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_3193c0:
    // 0x3193c0: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x3193c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_3193c4:
    // 0x3193c4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3193c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3193c8:
    // 0x3193c8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3193c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3193cc:
    // 0x3193cc: 0xe7a30268  swc1        $f3, 0x268($sp)
    ctx->pc = 0x3193ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_3193d0:
    // 0x3193d0: 0xe7a20264  swc1        $f2, 0x264($sp)
    ctx->pc = 0x3193d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_3193d4:
    // 0x3193d4: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x3193d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_3193d8:
    // 0x3193d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3193d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3193dc:
    // 0x3193dc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3193dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3193e0:
    // 0x3193e0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3193e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3193e4:
    // 0x3193e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3193e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3193e8:
    // 0x3193e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3193e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3193ec:
    // 0x3193ec: 0x46000004  c1          0x4
    ctx->pc = 0x3193ecu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3193f0:
    // 0x3193f0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3193f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3193f4:
    // 0x3193f4: 0x0  nop
    ctx->pc = 0x3193f4u;
    // NOP
label_3193f8:
    // 0x3193f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3193fc:
    if (ctx->pc == 0x3193FCu) {
        ctx->pc = 0x3193FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193F8u;
        // 0x3193fc: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319400u;
        goto label_319400;
    }
    ctx->pc = 0x3193F8u;
    {
        const bool branch_taken_0x3193f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3193FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193F8u;
        // 0x3193fc: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193f8) {
            ctx->pc = 0x319410u;
            goto label_319410;
        }
    }
    ctx->pc = 0x319400u;
label_319400:
    // 0x319400: 0x4600a103  div.s       $f4, $f20, $f0
    ctx->pc = 0x319400u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_319404:
    // 0x319404: 0x10000004  b           . + 4 + (0x4 << 2)
label_319408:
    if (ctx->pc == 0x319408u) {
        ctx->pc = 0x319408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319404u;
        // 0x319408: 0xc7a00260  lwc1        $f0, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31940Cu;
        goto label_31940c;
    }
    ctx->pc = 0x319404u;
    {
        const bool branch_taken_0x319404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319404u;
        // 0x319408: 0xc7a00260  lwc1        $f0, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319404) {
            ctx->pc = 0x319418u;
            goto label_319418;
        }
    }
    ctx->pc = 0x31940Cu;
label_31940c:
    // 0x31940c: 0x0  nop
    ctx->pc = 0x31940cu;
    // NOP
label_319410:
    // 0x319410: 0xc7a00260  lwc1        $f0, 0x260($sp)
    ctx->pc = 0x319410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319414:
    // 0x319414: 0x0  nop
    ctx->pc = 0x319414u;
    // NOP
label_319418:
    // 0x319418: 0xc7a10264  lwc1        $f1, 0x264($sp)
    ctx->pc = 0x319418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31941c:
    // 0x31941c: 0xc7a20268  lwc1        $f2, 0x268($sp)
    ctx->pc = 0x31941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319420:
    // 0x319420: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x319420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_319424:
    // 0x319424: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x319424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_319428:
    // 0x319428: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x319428u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31942c:
    // 0x31942c: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x31942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_319430:
    // 0x319430: 0xe7a10264  swc1        $f1, 0x264($sp)
    ctx->pc = 0x319430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_319434:
    // 0x319434: 0xe7a20268  swc1        $f2, 0x268($sp)
    ctx->pc = 0x319434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_319438:
    // 0x319438: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x319438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31943c:
    // 0x31943c: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x31943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_319440:
    // 0x319440: 0x2e0f809  jalr        $s7
label_319444:
    if (ctx->pc == 0x319444u) {
        ctx->pc = 0x319444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319440u;
        // 0x319444: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319448u;
        goto label_319448;
    }
    ctx->pc = 0x319440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x319448u);
        ctx->pc = 0x319444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319440u;
        // 0x319444: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319440u, 0x319448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319448u;
label_319448:
    // 0x319448: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_31944c:
    if (ctx->pc == 0x31944Cu) {
        ctx->pc = 0x31944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319448u;
        // 0x31944c: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319450u;
        goto label_319450;
    }
    ctx->pc = 0x319448u;
    {
        const bool branch_taken_0x319448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319448) {
            ctx->pc = 0x31944Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319448u;
            // 0x31944c: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3194A0u;
            goto label_3194a0;
        }
    }
    ctx->pc = 0x319450u;
label_319450:
    // 0x319450: 0x97a20200  lhu         $v0, 0x200($sp)
    ctx->pc = 0x319450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
label_319454:
    // 0x319454: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x319454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_319458:
    // 0x319458: 0x97a40202  lhu         $a0, 0x202($sp)
    ctx->pc = 0x319458u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 514)));
label_31945c:
    // 0x31945c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x31945cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_319460:
    // 0x319460: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x319460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_319464:
    // 0x319464: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x319464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_319468:
    // 0x319468: 0x5440ff0f  bnel        $v0, $zero, . + 4 + (-0xF1 << 2)
label_31946c:
    if (ctx->pc == 0x31946Cu) {
        ctx->pc = 0x31946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319468u;
        // 0x31946c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319470u;
        goto label_319470;
    }
    ctx->pc = 0x319468u;
    {
        const bool branch_taken_0x319468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319468) {
            ctx->pc = 0x31946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319468u;
            // 0x31946c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3190A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3190a8;
        }
    }
    ctx->pc = 0x319470u;
label_319470:
    // 0x319470: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x319470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_319474:
    // 0x319474: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x319474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_319478:
    // 0x319478: 0x1440fe83  bnez        $v0, . + 4 + (-0x17D << 2)
label_31947c:
    if (ctx->pc == 0x31947Cu) {
        ctx->pc = 0x31947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319478u;
        // 0x31947c: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319480u;
        goto label_319480;
    }
    ctx->pc = 0x319478u;
    {
        const bool branch_taken_0x319478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319478u;
        // 0x31947c: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319478) {
            ctx->pc = 0x318E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318e88;
        }
    }
    ctx->pc = 0x319480u;
label_319480:
    // 0x319480: 0x10000007  b           . + 4 + (0x7 << 2)
label_319484:
    if (ctx->pc == 0x319484u) {
        ctx->pc = 0x319484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319480u;
        // 0x319484: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319488u;
        goto label_319488;
    }
    ctx->pc = 0x319480u;
    {
        const bool branch_taken_0x319480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319480u;
        // 0x319484: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319480) {
            ctx->pc = 0x3194A0u;
            goto label_3194a0;
        }
    }
    ctx->pc = 0x319488u;
label_319488:
    // 0x319488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31948c:
    // 0x31948c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x31948cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_319490:
    // 0x319490: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x319490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_319494:
    // 0x319494: 0xc0c60ae  jal         func_3182B8
label_319498:
    if (ctx->pc == 0x319498u) {
        ctx->pc = 0x319498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319494u;
        // 0x319498: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31949Cu;
        goto label_31949c;
    }
    ctx->pc = 0x319494u;
    SET_GPR_U32(ctx, 31, 0x31949Cu);
    ctx->pc = 0x319498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319494u;
    // 0x319498: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3182B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3182B8u, 0x319494u, 0x31949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31949Cu;
label_31949c:
    // 0x31949c: 0x7bb00350  lq          $s0, 0x350($sp)
    ctx->pc = 0x31949cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_3194a0:
    // 0x3194a0: 0x7bb10340  lq          $s1, 0x340($sp)
    ctx->pc = 0x3194a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_3194a4:
    // 0x3194a4: 0x7bb20330  lq          $s2, 0x330($sp)
    ctx->pc = 0x3194a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_3194a8:
    // 0x3194a8: 0x7bb30320  lq          $s3, 0x320($sp)
    ctx->pc = 0x3194a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_3194ac:
    // 0x3194ac: 0x7bb40310  lq          $s4, 0x310($sp)
    ctx->pc = 0x3194acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3194b0:
    // 0x3194b0: 0x7bb50300  lq          $s5, 0x300($sp)
    ctx->pc = 0x3194b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_3194b4:
    // 0x3194b4: 0x7bb602f0  lq          $s6, 0x2F0($sp)
    ctx->pc = 0x3194b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_3194b8:
    // 0x3194b8: 0x7bb702e0  lq          $s7, 0x2E0($sp)
    ctx->pc = 0x3194b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_3194bc:
    // 0x3194bc: 0x7bbe02d0  lq          $fp, 0x2D0($sp)
    ctx->pc = 0x3194bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_3194c0:
    // 0x3194c0: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x3194c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_3194c4:
    // 0x3194c4: 0xc7b70378  lwc1        $f23, 0x378($sp)
    ctx->pc = 0x3194c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3194c8:
    // 0x3194c8: 0xc7b60370  lwc1        $f22, 0x370($sp)
    ctx->pc = 0x3194c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3194cc:
    // 0x3194cc: 0xc7b50368  lwc1        $f21, 0x368($sp)
    ctx->pc = 0x3194ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3194d0:
    // 0x3194d0: 0xc7b40360  lwc1        $f20, 0x360($sp)
    ctx->pc = 0x3194d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3194d4:
    // 0x3194d4: 0x3e00008  jr          $ra
label_3194d8:
    if (ctx->pc == 0x3194D8u) {
        ctx->pc = 0x3194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194D4u;
        // 0x3194d8: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3194DCu;
        goto label_3194dc;
    }
    ctx->pc = 0x3194D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194D4u;
        // 0x3194d8: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3194D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3194DCu;
label_3194dc:
    // 0x3194dc: 0x0  nop
    ctx->pc = 0x3194dcu;
    // NOP
    ctx->pc = 0x3194e0u;
}
