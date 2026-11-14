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

// Function: sub_004968E0
// Address: 0x4968e0 - 0x497450
void sub_004968E0_0x4968e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004968E0_0x4968e0");
#endif

    switch (ctx->pc) {
        case 0x4968e0u: goto label_4968e0;
        case 0x4968e4u: goto label_4968e4;
        case 0x4968e8u: goto label_4968e8;
        case 0x4968ecu: goto label_4968ec;
        case 0x4968f0u: goto label_4968f0;
        case 0x4968f4u: goto label_4968f4;
        case 0x4968f8u: goto label_4968f8;
        case 0x4968fcu: goto label_4968fc;
        case 0x496900u: goto label_496900;
        case 0x496904u: goto label_496904;
        case 0x496908u: goto label_496908;
        case 0x49690cu: goto label_49690c;
        case 0x496910u: goto label_496910;
        case 0x496914u: goto label_496914;
        case 0x496918u: goto label_496918;
        case 0x49691cu: goto label_49691c;
        case 0x496920u: goto label_496920;
        case 0x496924u: goto label_496924;
        case 0x496928u: goto label_496928;
        case 0x49692cu: goto label_49692c;
        case 0x496930u: goto label_496930;
        case 0x496934u: goto label_496934;
        case 0x496938u: goto label_496938;
        case 0x49693cu: goto label_49693c;
        case 0x496940u: goto label_496940;
        case 0x496944u: goto label_496944;
        case 0x496948u: goto label_496948;
        case 0x49694cu: goto label_49694c;
        case 0x496950u: goto label_496950;
        case 0x496954u: goto label_496954;
        case 0x496958u: goto label_496958;
        case 0x49695cu: goto label_49695c;
        case 0x496960u: goto label_496960;
        case 0x496964u: goto label_496964;
        case 0x496968u: goto label_496968;
        case 0x49696cu: goto label_49696c;
        case 0x496970u: goto label_496970;
        case 0x496974u: goto label_496974;
        case 0x496978u: goto label_496978;
        case 0x49697cu: goto label_49697c;
        case 0x496980u: goto label_496980;
        case 0x496984u: goto label_496984;
        case 0x496988u: goto label_496988;
        case 0x49698cu: goto label_49698c;
        case 0x496990u: goto label_496990;
        case 0x496994u: goto label_496994;
        case 0x496998u: goto label_496998;
        case 0x49699cu: goto label_49699c;
        case 0x4969a0u: goto label_4969a0;
        case 0x4969a4u: goto label_4969a4;
        case 0x4969a8u: goto label_4969a8;
        case 0x4969acu: goto label_4969ac;
        case 0x4969b0u: goto label_4969b0;
        case 0x4969b4u: goto label_4969b4;
        case 0x4969b8u: goto label_4969b8;
        case 0x4969bcu: goto label_4969bc;
        case 0x4969c0u: goto label_4969c0;
        case 0x4969c4u: goto label_4969c4;
        case 0x4969c8u: goto label_4969c8;
        case 0x4969ccu: goto label_4969cc;
        case 0x4969d0u: goto label_4969d0;
        case 0x4969d4u: goto label_4969d4;
        case 0x4969d8u: goto label_4969d8;
        case 0x4969dcu: goto label_4969dc;
        case 0x4969e0u: goto label_4969e0;
        case 0x4969e4u: goto label_4969e4;
        case 0x4969e8u: goto label_4969e8;
        case 0x4969ecu: goto label_4969ec;
        case 0x4969f0u: goto label_4969f0;
        case 0x4969f4u: goto label_4969f4;
        case 0x4969f8u: goto label_4969f8;
        case 0x4969fcu: goto label_4969fc;
        case 0x496a00u: goto label_496a00;
        case 0x496a04u: goto label_496a04;
        case 0x496a08u: goto label_496a08;
        case 0x496a0cu: goto label_496a0c;
        case 0x496a10u: goto label_496a10;
        case 0x496a14u: goto label_496a14;
        case 0x496a18u: goto label_496a18;
        case 0x496a1cu: goto label_496a1c;
        case 0x496a20u: goto label_496a20;
        case 0x496a24u: goto label_496a24;
        case 0x496a28u: goto label_496a28;
        case 0x496a2cu: goto label_496a2c;
        case 0x496a30u: goto label_496a30;
        case 0x496a34u: goto label_496a34;
        case 0x496a38u: goto label_496a38;
        case 0x496a3cu: goto label_496a3c;
        case 0x496a40u: goto label_496a40;
        case 0x496a44u: goto label_496a44;
        case 0x496a48u: goto label_496a48;
        case 0x496a4cu: goto label_496a4c;
        case 0x496a50u: goto label_496a50;
        case 0x496a54u: goto label_496a54;
        case 0x496a58u: goto label_496a58;
        case 0x496a5cu: goto label_496a5c;
        case 0x496a60u: goto label_496a60;
        case 0x496a64u: goto label_496a64;
        case 0x496a68u: goto label_496a68;
        case 0x496a6cu: goto label_496a6c;
        case 0x496a70u: goto label_496a70;
        case 0x496a74u: goto label_496a74;
        case 0x496a78u: goto label_496a78;
        case 0x496a7cu: goto label_496a7c;
        case 0x496a80u: goto label_496a80;
        case 0x496a84u: goto label_496a84;
        case 0x496a88u: goto label_496a88;
        case 0x496a8cu: goto label_496a8c;
        case 0x496a90u: goto label_496a90;
        case 0x496a94u: goto label_496a94;
        case 0x496a98u: goto label_496a98;
        case 0x496a9cu: goto label_496a9c;
        case 0x496aa0u: goto label_496aa0;
        case 0x496aa4u: goto label_496aa4;
        case 0x496aa8u: goto label_496aa8;
        case 0x496aacu: goto label_496aac;
        case 0x496ab0u: goto label_496ab0;
        case 0x496ab4u: goto label_496ab4;
        case 0x496ab8u: goto label_496ab8;
        case 0x496abcu: goto label_496abc;
        case 0x496ac0u: goto label_496ac0;
        case 0x496ac4u: goto label_496ac4;
        case 0x496ac8u: goto label_496ac8;
        case 0x496accu: goto label_496acc;
        case 0x496ad0u: goto label_496ad0;
        case 0x496ad4u: goto label_496ad4;
        case 0x496ad8u: goto label_496ad8;
        case 0x496adcu: goto label_496adc;
        case 0x496ae0u: goto label_496ae0;
        case 0x496ae4u: goto label_496ae4;
        case 0x496ae8u: goto label_496ae8;
        case 0x496aecu: goto label_496aec;
        case 0x496af0u: goto label_496af0;
        case 0x496af4u: goto label_496af4;
        case 0x496af8u: goto label_496af8;
        case 0x496afcu: goto label_496afc;
        case 0x496b00u: goto label_496b00;
        case 0x496b04u: goto label_496b04;
        case 0x496b08u: goto label_496b08;
        case 0x496b0cu: goto label_496b0c;
        case 0x496b10u: goto label_496b10;
        case 0x496b14u: goto label_496b14;
        case 0x496b18u: goto label_496b18;
        case 0x496b1cu: goto label_496b1c;
        case 0x496b20u: goto label_496b20;
        case 0x496b24u: goto label_496b24;
        case 0x496b28u: goto label_496b28;
        case 0x496b2cu: goto label_496b2c;
        case 0x496b30u: goto label_496b30;
        case 0x496b34u: goto label_496b34;
        case 0x496b38u: goto label_496b38;
        case 0x496b3cu: goto label_496b3c;
        case 0x496b40u: goto label_496b40;
        case 0x496b44u: goto label_496b44;
        case 0x496b48u: goto label_496b48;
        case 0x496b4cu: goto label_496b4c;
        case 0x496b50u: goto label_496b50;
        case 0x496b54u: goto label_496b54;
        case 0x496b58u: goto label_496b58;
        case 0x496b5cu: goto label_496b5c;
        case 0x496b60u: goto label_496b60;
        case 0x496b64u: goto label_496b64;
        case 0x496b68u: goto label_496b68;
        case 0x496b6cu: goto label_496b6c;
        case 0x496b70u: goto label_496b70;
        case 0x496b74u: goto label_496b74;
        case 0x496b78u: goto label_496b78;
        case 0x496b7cu: goto label_496b7c;
        case 0x496b80u: goto label_496b80;
        case 0x496b84u: goto label_496b84;
        case 0x496b88u: goto label_496b88;
        case 0x496b8cu: goto label_496b8c;
        case 0x496b90u: goto label_496b90;
        case 0x496b94u: goto label_496b94;
        case 0x496b98u: goto label_496b98;
        case 0x496b9cu: goto label_496b9c;
        case 0x496ba0u: goto label_496ba0;
        case 0x496ba4u: goto label_496ba4;
        case 0x496ba8u: goto label_496ba8;
        case 0x496bacu: goto label_496bac;
        case 0x496bb0u: goto label_496bb0;
        case 0x496bb4u: goto label_496bb4;
        case 0x496bb8u: goto label_496bb8;
        case 0x496bbcu: goto label_496bbc;
        case 0x496bc0u: goto label_496bc0;
        case 0x496bc4u: goto label_496bc4;
        case 0x496bc8u: goto label_496bc8;
        case 0x496bccu: goto label_496bcc;
        case 0x496bd0u: goto label_496bd0;
        case 0x496bd4u: goto label_496bd4;
        case 0x496bd8u: goto label_496bd8;
        case 0x496bdcu: goto label_496bdc;
        case 0x496be0u: goto label_496be0;
        case 0x496be4u: goto label_496be4;
        case 0x496be8u: goto label_496be8;
        case 0x496becu: goto label_496bec;
        case 0x496bf0u: goto label_496bf0;
        case 0x496bf4u: goto label_496bf4;
        case 0x496bf8u: goto label_496bf8;
        case 0x496bfcu: goto label_496bfc;
        case 0x496c00u: goto label_496c00;
        case 0x496c04u: goto label_496c04;
        case 0x496c08u: goto label_496c08;
        case 0x496c0cu: goto label_496c0c;
        case 0x496c10u: goto label_496c10;
        case 0x496c14u: goto label_496c14;
        case 0x496c18u: goto label_496c18;
        case 0x496c1cu: goto label_496c1c;
        case 0x496c20u: goto label_496c20;
        case 0x496c24u: goto label_496c24;
        case 0x496c28u: goto label_496c28;
        case 0x496c2cu: goto label_496c2c;
        case 0x496c30u: goto label_496c30;
        case 0x496c34u: goto label_496c34;
        case 0x496c38u: goto label_496c38;
        case 0x496c3cu: goto label_496c3c;
        case 0x496c40u: goto label_496c40;
        case 0x496c44u: goto label_496c44;
        case 0x496c48u: goto label_496c48;
        case 0x496c4cu: goto label_496c4c;
        case 0x496c50u: goto label_496c50;
        case 0x496c54u: goto label_496c54;
        case 0x496c58u: goto label_496c58;
        case 0x496c5cu: goto label_496c5c;
        case 0x496c60u: goto label_496c60;
        case 0x496c64u: goto label_496c64;
        case 0x496c68u: goto label_496c68;
        case 0x496c6cu: goto label_496c6c;
        case 0x496c70u: goto label_496c70;
        case 0x496c74u: goto label_496c74;
        case 0x496c78u: goto label_496c78;
        case 0x496c7cu: goto label_496c7c;
        case 0x496c80u: goto label_496c80;
        case 0x496c84u: goto label_496c84;
        case 0x496c88u: goto label_496c88;
        case 0x496c8cu: goto label_496c8c;
        case 0x496c90u: goto label_496c90;
        case 0x496c94u: goto label_496c94;
        case 0x496c98u: goto label_496c98;
        case 0x496c9cu: goto label_496c9c;
        case 0x496ca0u: goto label_496ca0;
        case 0x496ca4u: goto label_496ca4;
        case 0x496ca8u: goto label_496ca8;
        case 0x496cacu: goto label_496cac;
        case 0x496cb0u: goto label_496cb0;
        case 0x496cb4u: goto label_496cb4;
        case 0x496cb8u: goto label_496cb8;
        case 0x496cbcu: goto label_496cbc;
        case 0x496cc0u: goto label_496cc0;
        case 0x496cc4u: goto label_496cc4;
        case 0x496cc8u: goto label_496cc8;
        case 0x496cccu: goto label_496ccc;
        case 0x496cd0u: goto label_496cd0;
        case 0x496cd4u: goto label_496cd4;
        case 0x496cd8u: goto label_496cd8;
        case 0x496cdcu: goto label_496cdc;
        case 0x496ce0u: goto label_496ce0;
        case 0x496ce4u: goto label_496ce4;
        case 0x496ce8u: goto label_496ce8;
        case 0x496cecu: goto label_496cec;
        case 0x496cf0u: goto label_496cf0;
        case 0x496cf4u: goto label_496cf4;
        case 0x496cf8u: goto label_496cf8;
        case 0x496cfcu: goto label_496cfc;
        case 0x496d00u: goto label_496d00;
        case 0x496d04u: goto label_496d04;
        case 0x496d08u: goto label_496d08;
        case 0x496d0cu: goto label_496d0c;
        case 0x496d10u: goto label_496d10;
        case 0x496d14u: goto label_496d14;
        case 0x496d18u: goto label_496d18;
        case 0x496d1cu: goto label_496d1c;
        case 0x496d20u: goto label_496d20;
        case 0x496d24u: goto label_496d24;
        case 0x496d28u: goto label_496d28;
        case 0x496d2cu: goto label_496d2c;
        case 0x496d30u: goto label_496d30;
        case 0x496d34u: goto label_496d34;
        case 0x496d38u: goto label_496d38;
        case 0x496d3cu: goto label_496d3c;
        case 0x496d40u: goto label_496d40;
        case 0x496d44u: goto label_496d44;
        case 0x496d48u: goto label_496d48;
        case 0x496d4cu: goto label_496d4c;
        case 0x496d50u: goto label_496d50;
        case 0x496d54u: goto label_496d54;
        case 0x496d58u: goto label_496d58;
        case 0x496d5cu: goto label_496d5c;
        case 0x496d60u: goto label_496d60;
        case 0x496d64u: goto label_496d64;
        case 0x496d68u: goto label_496d68;
        case 0x496d6cu: goto label_496d6c;
        case 0x496d70u: goto label_496d70;
        case 0x496d74u: goto label_496d74;
        case 0x496d78u: goto label_496d78;
        case 0x496d7cu: goto label_496d7c;
        case 0x496d80u: goto label_496d80;
        case 0x496d84u: goto label_496d84;
        case 0x496d88u: goto label_496d88;
        case 0x496d8cu: goto label_496d8c;
        case 0x496d90u: goto label_496d90;
        case 0x496d94u: goto label_496d94;
        case 0x496d98u: goto label_496d98;
        case 0x496d9cu: goto label_496d9c;
        case 0x496da0u: goto label_496da0;
        case 0x496da4u: goto label_496da4;
        case 0x496da8u: goto label_496da8;
        case 0x496dacu: goto label_496dac;
        case 0x496db0u: goto label_496db0;
        case 0x496db4u: goto label_496db4;
        case 0x496db8u: goto label_496db8;
        case 0x496dbcu: goto label_496dbc;
        case 0x496dc0u: goto label_496dc0;
        case 0x496dc4u: goto label_496dc4;
        case 0x496dc8u: goto label_496dc8;
        case 0x496dccu: goto label_496dcc;
        case 0x496dd0u: goto label_496dd0;
        case 0x496dd4u: goto label_496dd4;
        case 0x496dd8u: goto label_496dd8;
        case 0x496ddcu: goto label_496ddc;
        case 0x496de0u: goto label_496de0;
        case 0x496de4u: goto label_496de4;
        case 0x496de8u: goto label_496de8;
        case 0x496decu: goto label_496dec;
        case 0x496df0u: goto label_496df0;
        case 0x496df4u: goto label_496df4;
        case 0x496df8u: goto label_496df8;
        case 0x496dfcu: goto label_496dfc;
        case 0x496e00u: goto label_496e00;
        case 0x496e04u: goto label_496e04;
        case 0x496e08u: goto label_496e08;
        case 0x496e0cu: goto label_496e0c;
        case 0x496e10u: goto label_496e10;
        case 0x496e14u: goto label_496e14;
        case 0x496e18u: goto label_496e18;
        case 0x496e1cu: goto label_496e1c;
        case 0x496e20u: goto label_496e20;
        case 0x496e24u: goto label_496e24;
        case 0x496e28u: goto label_496e28;
        case 0x496e2cu: goto label_496e2c;
        case 0x496e30u: goto label_496e30;
        case 0x496e34u: goto label_496e34;
        case 0x496e38u: goto label_496e38;
        case 0x496e3cu: goto label_496e3c;
        case 0x496e40u: goto label_496e40;
        case 0x496e44u: goto label_496e44;
        case 0x496e48u: goto label_496e48;
        case 0x496e4cu: goto label_496e4c;
        case 0x496e50u: goto label_496e50;
        case 0x496e54u: goto label_496e54;
        case 0x496e58u: goto label_496e58;
        case 0x496e5cu: goto label_496e5c;
        case 0x496e60u: goto label_496e60;
        case 0x496e64u: goto label_496e64;
        case 0x496e68u: goto label_496e68;
        case 0x496e6cu: goto label_496e6c;
        case 0x496e70u: goto label_496e70;
        case 0x496e74u: goto label_496e74;
        case 0x496e78u: goto label_496e78;
        case 0x496e7cu: goto label_496e7c;
        case 0x496e80u: goto label_496e80;
        case 0x496e84u: goto label_496e84;
        case 0x496e88u: goto label_496e88;
        case 0x496e8cu: goto label_496e8c;
        case 0x496e90u: goto label_496e90;
        case 0x496e94u: goto label_496e94;
        case 0x496e98u: goto label_496e98;
        case 0x496e9cu: goto label_496e9c;
        case 0x496ea0u: goto label_496ea0;
        case 0x496ea4u: goto label_496ea4;
        case 0x496ea8u: goto label_496ea8;
        case 0x496eacu: goto label_496eac;
        case 0x496eb0u: goto label_496eb0;
        case 0x496eb4u: goto label_496eb4;
        case 0x496eb8u: goto label_496eb8;
        case 0x496ebcu: goto label_496ebc;
        case 0x496ec0u: goto label_496ec0;
        case 0x496ec4u: goto label_496ec4;
        case 0x496ec8u: goto label_496ec8;
        case 0x496eccu: goto label_496ecc;
        case 0x496ed0u: goto label_496ed0;
        case 0x496ed4u: goto label_496ed4;
        case 0x496ed8u: goto label_496ed8;
        case 0x496edcu: goto label_496edc;
        case 0x496ee0u: goto label_496ee0;
        case 0x496ee4u: goto label_496ee4;
        case 0x496ee8u: goto label_496ee8;
        case 0x496eecu: goto label_496eec;
        case 0x496ef0u: goto label_496ef0;
        case 0x496ef4u: goto label_496ef4;
        case 0x496ef8u: goto label_496ef8;
        case 0x496efcu: goto label_496efc;
        case 0x496f00u: goto label_496f00;
        case 0x496f04u: goto label_496f04;
        case 0x496f08u: goto label_496f08;
        case 0x496f0cu: goto label_496f0c;
        case 0x496f10u: goto label_496f10;
        case 0x496f14u: goto label_496f14;
        case 0x496f18u: goto label_496f18;
        case 0x496f1cu: goto label_496f1c;
        case 0x496f20u: goto label_496f20;
        case 0x496f24u: goto label_496f24;
        case 0x496f28u: goto label_496f28;
        case 0x496f2cu: goto label_496f2c;
        case 0x496f30u: goto label_496f30;
        case 0x496f34u: goto label_496f34;
        case 0x496f38u: goto label_496f38;
        case 0x496f3cu: goto label_496f3c;
        case 0x496f40u: goto label_496f40;
        case 0x496f44u: goto label_496f44;
        case 0x496f48u: goto label_496f48;
        case 0x496f4cu: goto label_496f4c;
        case 0x496f50u: goto label_496f50;
        case 0x496f54u: goto label_496f54;
        case 0x496f58u: goto label_496f58;
        case 0x496f5cu: goto label_496f5c;
        case 0x496f60u: goto label_496f60;
        case 0x496f64u: goto label_496f64;
        case 0x496f68u: goto label_496f68;
        case 0x496f6cu: goto label_496f6c;
        case 0x496f70u: goto label_496f70;
        case 0x496f74u: goto label_496f74;
        case 0x496f78u: goto label_496f78;
        case 0x496f7cu: goto label_496f7c;
        case 0x496f80u: goto label_496f80;
        case 0x496f84u: goto label_496f84;
        case 0x496f88u: goto label_496f88;
        case 0x496f8cu: goto label_496f8c;
        case 0x496f90u: goto label_496f90;
        case 0x496f94u: goto label_496f94;
        case 0x496f98u: goto label_496f98;
        case 0x496f9cu: goto label_496f9c;
        case 0x496fa0u: goto label_496fa0;
        case 0x496fa4u: goto label_496fa4;
        case 0x496fa8u: goto label_496fa8;
        case 0x496facu: goto label_496fac;
        case 0x496fb0u: goto label_496fb0;
        case 0x496fb4u: goto label_496fb4;
        case 0x496fb8u: goto label_496fb8;
        case 0x496fbcu: goto label_496fbc;
        case 0x496fc0u: goto label_496fc0;
        case 0x496fc4u: goto label_496fc4;
        case 0x496fc8u: goto label_496fc8;
        case 0x496fccu: goto label_496fcc;
        case 0x496fd0u: goto label_496fd0;
        case 0x496fd4u: goto label_496fd4;
        case 0x496fd8u: goto label_496fd8;
        case 0x496fdcu: goto label_496fdc;
        case 0x496fe0u: goto label_496fe0;
        case 0x496fe4u: goto label_496fe4;
        case 0x496fe8u: goto label_496fe8;
        case 0x496fecu: goto label_496fec;
        case 0x496ff0u: goto label_496ff0;
        case 0x496ff4u: goto label_496ff4;
        case 0x496ff8u: goto label_496ff8;
        case 0x496ffcu: goto label_496ffc;
        case 0x497000u: goto label_497000;
        case 0x497004u: goto label_497004;
        case 0x497008u: goto label_497008;
        case 0x49700cu: goto label_49700c;
        case 0x497010u: goto label_497010;
        case 0x497014u: goto label_497014;
        case 0x497018u: goto label_497018;
        case 0x49701cu: goto label_49701c;
        case 0x497020u: goto label_497020;
        case 0x497024u: goto label_497024;
        case 0x497028u: goto label_497028;
        case 0x49702cu: goto label_49702c;
        case 0x497030u: goto label_497030;
        case 0x497034u: goto label_497034;
        case 0x497038u: goto label_497038;
        case 0x49703cu: goto label_49703c;
        case 0x497040u: goto label_497040;
        case 0x497044u: goto label_497044;
        case 0x497048u: goto label_497048;
        case 0x49704cu: goto label_49704c;
        case 0x497050u: goto label_497050;
        case 0x497054u: goto label_497054;
        case 0x497058u: goto label_497058;
        case 0x49705cu: goto label_49705c;
        case 0x497060u: goto label_497060;
        case 0x497064u: goto label_497064;
        case 0x497068u: goto label_497068;
        case 0x49706cu: goto label_49706c;
        case 0x497070u: goto label_497070;
        case 0x497074u: goto label_497074;
        case 0x497078u: goto label_497078;
        case 0x49707cu: goto label_49707c;
        case 0x497080u: goto label_497080;
        case 0x497084u: goto label_497084;
        case 0x497088u: goto label_497088;
        case 0x49708cu: goto label_49708c;
        case 0x497090u: goto label_497090;
        case 0x497094u: goto label_497094;
        case 0x497098u: goto label_497098;
        case 0x49709cu: goto label_49709c;
        case 0x4970a0u: goto label_4970a0;
        case 0x4970a4u: goto label_4970a4;
        case 0x4970a8u: goto label_4970a8;
        case 0x4970acu: goto label_4970ac;
        case 0x4970b0u: goto label_4970b0;
        case 0x4970b4u: goto label_4970b4;
        case 0x4970b8u: goto label_4970b8;
        case 0x4970bcu: goto label_4970bc;
        case 0x4970c0u: goto label_4970c0;
        case 0x4970c4u: goto label_4970c4;
        case 0x4970c8u: goto label_4970c8;
        case 0x4970ccu: goto label_4970cc;
        case 0x4970d0u: goto label_4970d0;
        case 0x4970d4u: goto label_4970d4;
        case 0x4970d8u: goto label_4970d8;
        case 0x4970dcu: goto label_4970dc;
        case 0x4970e0u: goto label_4970e0;
        case 0x4970e4u: goto label_4970e4;
        case 0x4970e8u: goto label_4970e8;
        case 0x4970ecu: goto label_4970ec;
        case 0x4970f0u: goto label_4970f0;
        case 0x4970f4u: goto label_4970f4;
        case 0x4970f8u: goto label_4970f8;
        case 0x4970fcu: goto label_4970fc;
        case 0x497100u: goto label_497100;
        case 0x497104u: goto label_497104;
        case 0x497108u: goto label_497108;
        case 0x49710cu: goto label_49710c;
        case 0x497110u: goto label_497110;
        case 0x497114u: goto label_497114;
        case 0x497118u: goto label_497118;
        case 0x49711cu: goto label_49711c;
        case 0x497120u: goto label_497120;
        case 0x497124u: goto label_497124;
        case 0x497128u: goto label_497128;
        case 0x49712cu: goto label_49712c;
        case 0x497130u: goto label_497130;
        case 0x497134u: goto label_497134;
        case 0x497138u: goto label_497138;
        case 0x49713cu: goto label_49713c;
        case 0x497140u: goto label_497140;
        case 0x497144u: goto label_497144;
        case 0x497148u: goto label_497148;
        case 0x49714cu: goto label_49714c;
        case 0x497150u: goto label_497150;
        case 0x497154u: goto label_497154;
        case 0x497158u: goto label_497158;
        case 0x49715cu: goto label_49715c;
        case 0x497160u: goto label_497160;
        case 0x497164u: goto label_497164;
        case 0x497168u: goto label_497168;
        case 0x49716cu: goto label_49716c;
        case 0x497170u: goto label_497170;
        case 0x497174u: goto label_497174;
        case 0x497178u: goto label_497178;
        case 0x49717cu: goto label_49717c;
        case 0x497180u: goto label_497180;
        case 0x497184u: goto label_497184;
        case 0x497188u: goto label_497188;
        case 0x49718cu: goto label_49718c;
        case 0x497190u: goto label_497190;
        case 0x497194u: goto label_497194;
        case 0x497198u: goto label_497198;
        case 0x49719cu: goto label_49719c;
        case 0x4971a0u: goto label_4971a0;
        case 0x4971a4u: goto label_4971a4;
        case 0x4971a8u: goto label_4971a8;
        case 0x4971acu: goto label_4971ac;
        case 0x4971b0u: goto label_4971b0;
        case 0x4971b4u: goto label_4971b4;
        case 0x4971b8u: goto label_4971b8;
        case 0x4971bcu: goto label_4971bc;
        case 0x4971c0u: goto label_4971c0;
        case 0x4971c4u: goto label_4971c4;
        case 0x4971c8u: goto label_4971c8;
        case 0x4971ccu: goto label_4971cc;
        case 0x4971d0u: goto label_4971d0;
        case 0x4971d4u: goto label_4971d4;
        case 0x4971d8u: goto label_4971d8;
        case 0x4971dcu: goto label_4971dc;
        case 0x4971e0u: goto label_4971e0;
        case 0x4971e4u: goto label_4971e4;
        case 0x4971e8u: goto label_4971e8;
        case 0x4971ecu: goto label_4971ec;
        case 0x4971f0u: goto label_4971f0;
        case 0x4971f4u: goto label_4971f4;
        case 0x4971f8u: goto label_4971f8;
        case 0x4971fcu: goto label_4971fc;
        case 0x497200u: goto label_497200;
        case 0x497204u: goto label_497204;
        case 0x497208u: goto label_497208;
        case 0x49720cu: goto label_49720c;
        case 0x497210u: goto label_497210;
        case 0x497214u: goto label_497214;
        case 0x497218u: goto label_497218;
        case 0x49721cu: goto label_49721c;
        case 0x497220u: goto label_497220;
        case 0x497224u: goto label_497224;
        case 0x497228u: goto label_497228;
        case 0x49722cu: goto label_49722c;
        case 0x497230u: goto label_497230;
        case 0x497234u: goto label_497234;
        case 0x497238u: goto label_497238;
        case 0x49723cu: goto label_49723c;
        case 0x497240u: goto label_497240;
        case 0x497244u: goto label_497244;
        case 0x497248u: goto label_497248;
        case 0x49724cu: goto label_49724c;
        case 0x497250u: goto label_497250;
        case 0x497254u: goto label_497254;
        case 0x497258u: goto label_497258;
        case 0x49725cu: goto label_49725c;
        case 0x497260u: goto label_497260;
        case 0x497264u: goto label_497264;
        case 0x497268u: goto label_497268;
        case 0x49726cu: goto label_49726c;
        case 0x497270u: goto label_497270;
        case 0x497274u: goto label_497274;
        case 0x497278u: goto label_497278;
        case 0x49727cu: goto label_49727c;
        case 0x497280u: goto label_497280;
        case 0x497284u: goto label_497284;
        case 0x497288u: goto label_497288;
        case 0x49728cu: goto label_49728c;
        case 0x497290u: goto label_497290;
        case 0x497294u: goto label_497294;
        case 0x497298u: goto label_497298;
        case 0x49729cu: goto label_49729c;
        case 0x4972a0u: goto label_4972a0;
        case 0x4972a4u: goto label_4972a4;
        case 0x4972a8u: goto label_4972a8;
        case 0x4972acu: goto label_4972ac;
        case 0x4972b0u: goto label_4972b0;
        case 0x4972b4u: goto label_4972b4;
        case 0x4972b8u: goto label_4972b8;
        case 0x4972bcu: goto label_4972bc;
        case 0x4972c0u: goto label_4972c0;
        case 0x4972c4u: goto label_4972c4;
        case 0x4972c8u: goto label_4972c8;
        case 0x4972ccu: goto label_4972cc;
        case 0x4972d0u: goto label_4972d0;
        case 0x4972d4u: goto label_4972d4;
        case 0x4972d8u: goto label_4972d8;
        case 0x4972dcu: goto label_4972dc;
        case 0x4972e0u: goto label_4972e0;
        case 0x4972e4u: goto label_4972e4;
        case 0x4972e8u: goto label_4972e8;
        case 0x4972ecu: goto label_4972ec;
        case 0x4972f0u: goto label_4972f0;
        case 0x4972f4u: goto label_4972f4;
        case 0x4972f8u: goto label_4972f8;
        case 0x4972fcu: goto label_4972fc;
        case 0x497300u: goto label_497300;
        case 0x497304u: goto label_497304;
        case 0x497308u: goto label_497308;
        case 0x49730cu: goto label_49730c;
        case 0x497310u: goto label_497310;
        case 0x497314u: goto label_497314;
        case 0x497318u: goto label_497318;
        case 0x49731cu: goto label_49731c;
        case 0x497320u: goto label_497320;
        case 0x497324u: goto label_497324;
        case 0x497328u: goto label_497328;
        case 0x49732cu: goto label_49732c;
        case 0x497330u: goto label_497330;
        case 0x497334u: goto label_497334;
        case 0x497338u: goto label_497338;
        case 0x49733cu: goto label_49733c;
        case 0x497340u: goto label_497340;
        case 0x497344u: goto label_497344;
        case 0x497348u: goto label_497348;
        case 0x49734cu: goto label_49734c;
        case 0x497350u: goto label_497350;
        case 0x497354u: goto label_497354;
        case 0x497358u: goto label_497358;
        case 0x49735cu: goto label_49735c;
        case 0x497360u: goto label_497360;
        case 0x497364u: goto label_497364;
        case 0x497368u: goto label_497368;
        case 0x49736cu: goto label_49736c;
        case 0x497370u: goto label_497370;
        case 0x497374u: goto label_497374;
        case 0x497378u: goto label_497378;
        case 0x49737cu: goto label_49737c;
        case 0x497380u: goto label_497380;
        case 0x497384u: goto label_497384;
        case 0x497388u: goto label_497388;
        case 0x49738cu: goto label_49738c;
        case 0x497390u: goto label_497390;
        case 0x497394u: goto label_497394;
        case 0x497398u: goto label_497398;
        case 0x49739cu: goto label_49739c;
        case 0x4973a0u: goto label_4973a0;
        case 0x4973a4u: goto label_4973a4;
        case 0x4973a8u: goto label_4973a8;
        case 0x4973acu: goto label_4973ac;
        case 0x4973b0u: goto label_4973b0;
        case 0x4973b4u: goto label_4973b4;
        case 0x4973b8u: goto label_4973b8;
        case 0x4973bcu: goto label_4973bc;
        case 0x4973c0u: goto label_4973c0;
        case 0x4973c4u: goto label_4973c4;
        case 0x4973c8u: goto label_4973c8;
        case 0x4973ccu: goto label_4973cc;
        case 0x4973d0u: goto label_4973d0;
        case 0x4973d4u: goto label_4973d4;
        case 0x4973d8u: goto label_4973d8;
        case 0x4973dcu: goto label_4973dc;
        case 0x4973e0u: goto label_4973e0;
        case 0x4973e4u: goto label_4973e4;
        case 0x4973e8u: goto label_4973e8;
        case 0x4973ecu: goto label_4973ec;
        case 0x4973f0u: goto label_4973f0;
        case 0x4973f4u: goto label_4973f4;
        case 0x4973f8u: goto label_4973f8;
        case 0x4973fcu: goto label_4973fc;
        case 0x497400u: goto label_497400;
        case 0x497404u: goto label_497404;
        case 0x497408u: goto label_497408;
        case 0x49740cu: goto label_49740c;
        case 0x497410u: goto label_497410;
        case 0x497414u: goto label_497414;
        case 0x497418u: goto label_497418;
        case 0x49741cu: goto label_49741c;
        case 0x497420u: goto label_497420;
        case 0x497424u: goto label_497424;
        case 0x497428u: goto label_497428;
        case 0x49742cu: goto label_49742c;
        case 0x497430u: goto label_497430;
        case 0x497434u: goto label_497434;
        case 0x497438u: goto label_497438;
        case 0x49743cu: goto label_49743c;
        case 0x497440u: goto label_497440;
        case 0x497444u: goto label_497444;
        case 0x497448u: goto label_497448;
        case 0x49744cu: goto label_49744c;
        default: break;
    }

    ctx->pc = 0x4968e0u;

label_4968e0:
    // 0x4968e0: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x4968e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_4968e4:
    // 0x4968e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4968e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4968e8:
    // 0x4968e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4968e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4968ec:
    // 0x4968ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4968ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4968f0:
    // 0x4968f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4968f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4968f4:
    // 0x4968f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4968f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4968f8:
    // 0x4968f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4968f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4968fc:
    // 0x4968fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4968fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_496900:
    // 0x496900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x496900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_496904:
    // 0x496904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x496904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_496908:
    // 0x496908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x496908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49690c:
    // 0x49690c: 0xafa404b0  sw          $a0, 0x4B0($sp)
    ctx->pc = 0x49690cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 4));
label_496910:
    // 0x496910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x496910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_496914:
    // 0x496914: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x496914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_496918:
    // 0x496918: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_49691c:
    if (ctx->pc == 0x49691Cu) {
        ctx->pc = 0x496920u;
        goto label_496920;
    }
    ctx->pc = 0x496918u;
    {
        const bool branch_taken_0x496918 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x496918) {
            ctx->pc = 0x496938u;
            goto label_496938;
        }
    }
    ctx->pc = 0x496920u;
label_496920:
    // 0x496920: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x496920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_496924:
    // 0x496924: 0x28a10016  slti        $at, $a1, 0x16
    ctx->pc = 0x496924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_496928:
    // 0x496928: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49692c:
    if (ctx->pc == 0x49692Cu) {
        ctx->pc = 0x496930u;
        goto label_496930;
    }
    ctx->pc = 0x496928u;
    {
        const bool branch_taken_0x496928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496928) {
            ctx->pc = 0x496938u;
            goto label_496938;
        }
    }
    ctx->pc = 0x496930u;
label_496930:
    // 0x496930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496934:
    // 0x496934: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x496934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_496938:
    // 0x496938: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x496938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_49693c:
    // 0x49693c: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
label_496940:
    if (ctx->pc == 0x496940u) {
        ctx->pc = 0x496944u;
        goto label_496944;
    }
    ctx->pc = 0x49693Cu;
    {
        const bool branch_taken_0x49693c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x49693c) {
            ctx->pc = 0x4969ECu;
            goto label_4969ec;
        }
    }
    ctx->pc = 0x496944u;
label_496944:
    // 0x496944: 0x8f82b7a0  lw          $v0, -0x4860($gp)
    ctx->pc = 0x496944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948768)));
label_496948:
    // 0x496948: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_49694c:
    if (ctx->pc == 0x49694Cu) {
        ctx->pc = 0x496950u;
        goto label_496950;
    }
    ctx->pc = 0x496948u;
    {
        const bool branch_taken_0x496948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496948) {
            ctx->pc = 0x4969ECu;
            goto label_4969ec;
        }
    }
    ctx->pc = 0x496950u;
label_496950:
    // 0x496950: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x496950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_496954:
    // 0x496954: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x496954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_496958:
    // 0x496958: 0x27a60468  addiu       $a2, $sp, 0x468
    ctx->pc = 0x496958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1128));
label_49695c:
    // 0x49695c: 0xc115ee8  jal         func_457BA0
label_496960:
    if (ctx->pc == 0x496960u) {
        ctx->pc = 0x496964u;
        goto label_496964;
    }
    ctx->pc = 0x49695Cu;
    SET_GPR_U32(ctx, 31, 0x496964u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x49695Cu, 0x496964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496964u;
label_496964:
    // 0x496964: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_496968:
    if (ctx->pc == 0x496968u) {
        ctx->pc = 0x49696Cu;
        goto label_49696c;
    }
    ctx->pc = 0x496964u;
    {
        const bool branch_taken_0x496964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496964) {
            ctx->pc = 0x4969ECu;
            goto label_4969ec;
        }
    }
    ctx->pc = 0x49696Cu;
label_49696c:
    // 0x49696c: 0x8fa20470  lw          $v0, 0x470($sp)
    ctx->pc = 0x49696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
label_496970:
    // 0x496970: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_496974:
    if (ctx->pc == 0x496974u) {
        ctx->pc = 0x496978u;
        goto label_496978;
    }
    ctx->pc = 0x496970u;
    {
        const bool branch_taken_0x496970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x496970) {
            ctx->pc = 0x4969ECu;
            goto label_4969ec;
        }
    }
    ctx->pc = 0x496978u;
label_496978:
    // 0x496978: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x496978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_49697c:
    // 0x49697c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x49697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_496980:
    // 0x496980: 0x8fa6046c  lw          $a2, 0x46C($sp)
    ctx->pc = 0x496980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
label_496984:
    // 0x496984: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x496984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_496988:
    // 0x496988: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x496988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_49698c:
    // 0x49698c: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x49698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_496990:
    // 0x496990: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x496990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_496994:
    // 0x496994: 0x252956f0  addiu       $t1, $t1, 0x56F0
    ctx->pc = 0x496994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22256));
label_496998:
    // 0x496998: 0xc113940  jal         func_44E500
label_49699c:
    if (ctx->pc == 0x49699Cu) {
        ctx->pc = 0x4969A0u;
        goto label_4969a0;
    }
    ctx->pc = 0x496998u;
    SET_GPR_U32(ctx, 31, 0x4969A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x496998u, 0x4969A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4969A0u;
label_4969a0:
    // 0x4969a0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4969a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4969a4:
    // 0x4969a4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4969a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4969a8:
    // 0x4969a8: 0x24a55730  addiu       $a1, $a1, 0x5730
    ctx->pc = 0x4969a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22320));
label_4969ac:
    // 0x4969ac: 0xc115c24  jal         func_457090
label_4969b0:
    if (ctx->pc == 0x4969B0u) {
        ctx->pc = 0x4969B4u;
        goto label_4969b4;
    }
    ctx->pc = 0x4969ACu;
    SET_GPR_U32(ctx, 31, 0x4969B4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4969ACu, 0x4969B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4969B4u;
label_4969b4:
    // 0x4969b4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4969b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4969b8:
    // 0x4969b8: 0x8fa50470  lw          $a1, 0x470($sp)
    ctx->pc = 0x4969b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
label_4969bc:
    // 0x4969bc: 0xa0f809  jalr        $a1
label_4969c0:
    if (ctx->pc == 0x4969C0u) {
        ctx->pc = 0x4969C4u;
        goto label_4969c4;
    }
    ctx->pc = 0x4969BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4969C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4969BCu, 0x4969C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4969C4u;
label_4969c4:
    // 0x4969c4: 0xaf82b7a0  sw          $v0, -0x4860($gp)
    ctx->pc = 0x4969c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948768), GPR_U32(ctx, 2));
label_4969c8:
    // 0x4969c8: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x4969c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4969cc:
    // 0x4969cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4969d0:
    if (ctx->pc == 0x4969D0u) {
        ctx->pc = 0x4969D4u;
        goto label_4969d4;
    }
    ctx->pc = 0x4969CCu;
    {
        const bool branch_taken_0x4969cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4969cc) {
            ctx->pc = 0x4969DCu;
            goto label_4969dc;
        }
    }
    ctx->pc = 0x4969D4u;
label_4969d4:
    // 0x4969d4: 0xd  break       0
    ctx->pc = 0x4969d4u;
    runtime->handleBreak(rdram, ctx);
label_4969d8:
    // 0x4969d8: 0x0  nop
    ctx->pc = 0x4969d8u;
    // NOP
label_4969dc:
    // 0x4969dc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4969dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4969e0:
    // 0x4969e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4969e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4969e4:
    // 0x4969e4: 0xc11392c  jal         func_44E4B0
label_4969e8:
    if (ctx->pc == 0x4969E8u) {
        ctx->pc = 0x4969ECu;
        goto label_4969ec;
    }
    ctx->pc = 0x4969E4u;
    SET_GPR_U32(ctx, 31, 0x4969ECu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4969E4u, 0x4969ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4969ECu;
label_4969ec:
    // 0x4969ec: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x4969ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_4969f0:
    // 0x4969f0: 0xc0495d4  jal         func_125750
label_4969f4:
    if (ctx->pc == 0x4969F4u) {
        ctx->pc = 0x4969F8u;
        goto label_4969f8;
    }
    ctx->pc = 0x4969F0u;
    SET_GPR_U32(ctx, 31, 0x4969F8u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x4969F0u, 0x4969F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4969F8u;
label_4969f8:
    // 0x4969f8: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x4969f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_4969fc:
    // 0x4969fc: 0x2ca10016  sltiu       $at, $a1, 0x16
    ctx->pc = 0x4969fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_496a00:
    // 0x496a00: 0x1020023b  beqz        $at, . + 4 + (0x23B << 2)
label_496a04:
    if (ctx->pc == 0x496A04u) {
        ctx->pc = 0x496A08u;
        goto label_496a08;
    }
    ctx->pc = 0x496A00u;
    {
        const bool branch_taken_0x496a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496a00) {
            ctx->pc = 0x4972F0u;
            goto label_4972f0;
        }
    }
    ctx->pc = 0x496A08u;
label_496a08:
    // 0x496a08: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x496a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_496a0c:
    // 0x496a0c: 0x24421ec0  addiu       $v0, $v0, 0x1EC0
    ctx->pc = 0x496a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7872));
label_496a10:
    // 0x496a10: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x496a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_496a14:
    // 0x496a14: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x496a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_496a18:
    // 0x496a18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x496a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_496a1c:
    // 0x496a1c: 0x400008  jr          $v0
label_496a20:
    if (ctx->pc == 0x496A20u) {
        ctx->pc = 0x496A24u;
        goto label_496a24;
    }
    ctx->pc = 0x496A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x496A24u: goto label_496a24;
            case 0x496A80u: goto label_496a80;
            case 0x496AD4u: goto label_496ad4;
            case 0x496B30u: goto label_496b30;
            case 0x496B84u: goto label_496b84;
            case 0x496BE8u: goto label_496be8;
            case 0x496C44u: goto label_496c44;
            case 0x496C98u: goto label_496c98;
            case 0x496D54u: goto label_496d54;
            case 0x496DA8u: goto label_496da8;
            case 0x496DFCu: goto label_496dfc;
            case 0x496E50u: goto label_496e50;
            case 0x496F0Cu: goto label_496f0c;
            case 0x49716Cu: goto label_49716c;
            case 0x4972F0u: goto label_4972f0;
            case 0x4973A4u: goto label_4973a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496A1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x496A24u;
label_496a24:
    // 0x496a24: 0x27a40438  addiu       $a0, $sp, 0x438
    ctx->pc = 0x496a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
label_496a28:
    // 0x496a28: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496a2c:
    // 0x496a2c: 0x24a55790  addiu       $a1, $a1, 0x5790
    ctx->pc = 0x496a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22416));
label_496a30:
    // 0x496a30: 0xc040304  jal         func_100C10
label_496a34:
    if (ctx->pc == 0x496A34u) {
        ctx->pc = 0x496A38u;
        goto label_496a38;
    }
    ctx->pc = 0x496A30u;
    SET_GPR_U32(ctx, 31, 0x496A38u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496A30u, 0x496A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A38u;
label_496a38:
    // 0x496a38: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496a3c:
    // 0x496a3c: 0x27a50438  addiu       $a1, $sp, 0x438
    ctx->pc = 0x496a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
label_496a40:
    // 0x496a40: 0xc11bd88  jal         func_46F620
label_496a44:
    if (ctx->pc == 0x496A44u) {
        ctx->pc = 0x496A48u;
        goto label_496a48;
    }
    ctx->pc = 0x496A40u;
    SET_GPR_U32(ctx, 31, 0x496A48u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496A40u, 0x496A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A48u;
label_496a48:
    // 0x496a48: 0xafa204ac  sw          $v0, 0x4AC($sp)
    ctx->pc = 0x496a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 2));
label_496a4c:
    // 0x496a4c: 0x27a50438  addiu       $a1, $sp, 0x438
    ctx->pc = 0x496a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
label_496a50:
    // 0x496a50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496a54:
    // 0x496a54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496a58:
    // 0x496a58: 0xc0402d4  jal         func_100B50
label_496a5c:
    if (ctx->pc == 0x496A5Cu) {
        ctx->pc = 0x496A60u;
        goto label_496a60;
    }
    ctx->pc = 0x496A58u;
    SET_GPR_U32(ctx, 31, 0x496A60u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496A58u, 0x496A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A60u;
label_496a60:
    // 0x496a60: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x496a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496a64:
    // 0x496a64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496a68:
    // 0x496a68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496a6c:
    // 0x496a6c: 0xc0406a0  jal         func_101A80
label_496a70:
    if (ctx->pc == 0x496A70u) {
        ctx->pc = 0x496A74u;
        goto label_496a74;
    }
    ctx->pc = 0x496A6Cu;
    SET_GPR_U32(ctx, 31, 0x496A74u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496A6Cu, 0x496A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A74u;
label_496a74:
    // 0x496a74: 0x8fa204ac  lw          $v0, 0x4AC($sp)
    ctx->pc = 0x496a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
label_496a78:
    // 0x496a78: 0x10000265  b           . + 4 + (0x265 << 2)
label_496a7c:
    if (ctx->pc == 0x496A7Cu) {
        ctx->pc = 0x496A80u;
        goto label_496a80;
    }
    ctx->pc = 0x496A78u;
    {
        const bool branch_taken_0x496a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496a78) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496A80u;
label_496a80:
    // 0x496a80: 0x27a40428  addiu       $a0, $sp, 0x428
    ctx->pc = 0x496a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
label_496a84:
    // 0x496a84: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496a88:
    // 0x496a88: 0x24a557b0  addiu       $a1, $a1, 0x57B0
    ctx->pc = 0x496a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22448));
label_496a8c:
    // 0x496a8c: 0xc040304  jal         func_100C10
label_496a90:
    if (ctx->pc == 0x496A90u) {
        ctx->pc = 0x496A94u;
        goto label_496a94;
    }
    ctx->pc = 0x496A8Cu;
    SET_GPR_U32(ctx, 31, 0x496A94u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496A8Cu, 0x496A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496A94u;
label_496a94:
    // 0x496a94: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496a98:
    // 0x496a98: 0x27a50428  addiu       $a1, $sp, 0x428
    ctx->pc = 0x496a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
label_496a9c:
    // 0x496a9c: 0xc11bd88  jal         func_46F620
label_496aa0:
    if (ctx->pc == 0x496AA0u) {
        ctx->pc = 0x496AA4u;
        goto label_496aa4;
    }
    ctx->pc = 0x496A9Cu;
    SET_GPR_U32(ctx, 31, 0x496AA4u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496A9Cu, 0x496AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496AA4u;
label_496aa4:
    // 0x496aa4: 0xafa204a8  sw          $v0, 0x4A8($sp)
    ctx->pc = 0x496aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 2));
label_496aa8:
    // 0x496aa8: 0x27a40428  addiu       $a0, $sp, 0x428
    ctx->pc = 0x496aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
label_496aac:
    // 0x496aac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496ab0:
    // 0x496ab0: 0xc0402d4  jal         func_100B50
label_496ab4:
    if (ctx->pc == 0x496AB4u) {
        ctx->pc = 0x496AB8u;
        goto label_496ab8;
    }
    ctx->pc = 0x496AB0u;
    SET_GPR_U32(ctx, 31, 0x496AB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496AB0u, 0x496AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496AB8u;
label_496ab8:
    // 0x496ab8: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496abc:
    // 0x496abc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496ac0:
    // 0x496ac0: 0xc0406a0  jal         func_101A80
label_496ac4:
    if (ctx->pc == 0x496AC4u) {
        ctx->pc = 0x496AC8u;
        goto label_496ac8;
    }
    ctx->pc = 0x496AC0u;
    SET_GPR_U32(ctx, 31, 0x496AC8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496AC0u, 0x496AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496AC8u;
label_496ac8:
    // 0x496ac8: 0x8fa204a8  lw          $v0, 0x4A8($sp)
    ctx->pc = 0x496ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_496acc:
    // 0x496acc: 0x10000250  b           . + 4 + (0x250 << 2)
label_496ad0:
    if (ctx->pc == 0x496AD0u) {
        ctx->pc = 0x496AD4u;
        goto label_496ad4;
    }
    ctx->pc = 0x496ACCu;
    {
        const bool branch_taken_0x496acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496acc) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496AD4u;
label_496ad4:
    // 0x496ad4: 0x27a40418  addiu       $a0, $sp, 0x418
    ctx->pc = 0x496ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
label_496ad8:
    // 0x496ad8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496adc:
    // 0x496adc: 0x24a557e0  addiu       $a1, $a1, 0x57E0
    ctx->pc = 0x496adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22496));
label_496ae0:
    // 0x496ae0: 0xc040304  jal         func_100C10
label_496ae4:
    if (ctx->pc == 0x496AE4u) {
        ctx->pc = 0x496AE8u;
        goto label_496ae8;
    }
    ctx->pc = 0x496AE0u;
    SET_GPR_U32(ctx, 31, 0x496AE8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496AE0u, 0x496AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496AE8u;
label_496ae8:
    // 0x496ae8: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496aec:
    // 0x496aec: 0x27a50418  addiu       $a1, $sp, 0x418
    ctx->pc = 0x496aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
label_496af0:
    // 0x496af0: 0xc11bd88  jal         func_46F620
label_496af4:
    if (ctx->pc == 0x496AF4u) {
        ctx->pc = 0x496AF8u;
        goto label_496af8;
    }
    ctx->pc = 0x496AF0u;
    SET_GPR_U32(ctx, 31, 0x496AF8u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496AF0u, 0x496AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496AF8u;
label_496af8:
    // 0x496af8: 0xafa204a4  sw          $v0, 0x4A4($sp)
    ctx->pc = 0x496af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 2));
label_496afc:
    // 0x496afc: 0x27a50418  addiu       $a1, $sp, 0x418
    ctx->pc = 0x496afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1048));
label_496b00:
    // 0x496b00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496b04:
    // 0x496b04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496b08:
    // 0x496b08: 0xc0402d4  jal         func_100B50
label_496b0c:
    if (ctx->pc == 0x496B0Cu) {
        ctx->pc = 0x496B10u;
        goto label_496b10;
    }
    ctx->pc = 0x496B08u;
    SET_GPR_U32(ctx, 31, 0x496B10u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496B08u, 0x496B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B10u;
label_496b10:
    // 0x496b10: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x496b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496b14:
    // 0x496b14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496b18:
    // 0x496b18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496b1c:
    // 0x496b1c: 0xc0406a0  jal         func_101A80
label_496b20:
    if (ctx->pc == 0x496B20u) {
        ctx->pc = 0x496B24u;
        goto label_496b24;
    }
    ctx->pc = 0x496B1Cu;
    SET_GPR_U32(ctx, 31, 0x496B24u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496B1Cu, 0x496B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B24u;
label_496b24:
    // 0x496b24: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x496b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_496b28:
    // 0x496b28: 0x10000239  b           . + 4 + (0x239 << 2)
label_496b2c:
    if (ctx->pc == 0x496B2Cu) {
        ctx->pc = 0x496B30u;
        goto label_496b30;
    }
    ctx->pc = 0x496B28u;
    {
        const bool branch_taken_0x496b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496b28) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496B30u;
label_496b30:
    // 0x496b30: 0x27a40408  addiu       $a0, $sp, 0x408
    ctx->pc = 0x496b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
label_496b34:
    // 0x496b34: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496b38:
    // 0x496b38: 0x24a557e0  addiu       $a1, $a1, 0x57E0
    ctx->pc = 0x496b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22496));
label_496b3c:
    // 0x496b3c: 0xc040304  jal         func_100C10
label_496b40:
    if (ctx->pc == 0x496B40u) {
        ctx->pc = 0x496B44u;
        goto label_496b44;
    }
    ctx->pc = 0x496B3Cu;
    SET_GPR_U32(ctx, 31, 0x496B44u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496B3Cu, 0x496B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B44u;
label_496b44:
    // 0x496b44: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496b48:
    // 0x496b48: 0x27a50408  addiu       $a1, $sp, 0x408
    ctx->pc = 0x496b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
label_496b4c:
    // 0x496b4c: 0xc11bd88  jal         func_46F620
label_496b50:
    if (ctx->pc == 0x496B50u) {
        ctx->pc = 0x496B54u;
        goto label_496b54;
    }
    ctx->pc = 0x496B4Cu;
    SET_GPR_U32(ctx, 31, 0x496B54u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496B4Cu, 0x496B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B54u;
label_496b54:
    // 0x496b54: 0xafa204a0  sw          $v0, 0x4A0($sp)
    ctx->pc = 0x496b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
label_496b58:
    // 0x496b58: 0x27a40408  addiu       $a0, $sp, 0x408
    ctx->pc = 0x496b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
label_496b5c:
    // 0x496b5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496b60:
    // 0x496b60: 0xc0402d4  jal         func_100B50
label_496b64:
    if (ctx->pc == 0x496B64u) {
        ctx->pc = 0x496B68u;
        goto label_496b68;
    }
    ctx->pc = 0x496B60u;
    SET_GPR_U32(ctx, 31, 0x496B68u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496B60u, 0x496B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B68u;
label_496b68:
    // 0x496b68: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496b6c:
    // 0x496b6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496b70:
    // 0x496b70: 0xc0406a0  jal         func_101A80
label_496b74:
    if (ctx->pc == 0x496B74u) {
        ctx->pc = 0x496B78u;
        goto label_496b78;
    }
    ctx->pc = 0x496B70u;
    SET_GPR_U32(ctx, 31, 0x496B78u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496B70u, 0x496B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B78u;
label_496b78:
    // 0x496b78: 0x8fa204a0  lw          $v0, 0x4A0($sp)
    ctx->pc = 0x496b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
label_496b7c:
    // 0x496b7c: 0x10000224  b           . + 4 + (0x224 << 2)
label_496b80:
    if (ctx->pc == 0x496B80u) {
        ctx->pc = 0x496B84u;
        goto label_496b84;
    }
    ctx->pc = 0x496B7Cu;
    {
        const bool branch_taken_0x496b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496b7c) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496B84u;
label_496b84:
    // 0x496b84: 0x27a503f8  addiu       $a1, $sp, 0x3F8
    ctx->pc = 0x496b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
label_496b88:
    // 0x496b88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496b8c:
    // 0x496b8c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496b90:
    // 0x496b90: 0x24a55800  addiu       $a1, $a1, 0x5800
    ctx->pc = 0x496b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22528));
label_496b94:
    // 0x496b94: 0xc040304  jal         func_100C10
label_496b98:
    if (ctx->pc == 0x496B98u) {
        ctx->pc = 0x496B9Cu;
        goto label_496b9c;
    }
    ctx->pc = 0x496B94u;
    SET_GPR_U32(ctx, 31, 0x496B9Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496B94u, 0x496B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496B9Cu;
label_496b9c:
    // 0x496b9c: 0x8f85c164  lw          $a1, -0x3E9C($gp)
    ctx->pc = 0x496b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496ba0:
    // 0x496ba0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496ba4:
    // 0x496ba4: 0x27a503f8  addiu       $a1, $sp, 0x3F8
    ctx->pc = 0x496ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
label_496ba8:
    // 0x496ba8: 0xc11bd88  jal         func_46F620
label_496bac:
    if (ctx->pc == 0x496BACu) {
        ctx->pc = 0x496BB0u;
        goto label_496bb0;
    }
    ctx->pc = 0x496BA8u;
    SET_GPR_U32(ctx, 31, 0x496BB0u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496BA8u, 0x496BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BB0u;
label_496bb0:
    // 0x496bb0: 0xafa2049c  sw          $v0, 0x49C($sp)
    ctx->pc = 0x496bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 2));
label_496bb4:
    // 0x496bb4: 0x27a503f8  addiu       $a1, $sp, 0x3F8
    ctx->pc = 0x496bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
label_496bb8:
    // 0x496bb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496bbc:
    // 0x496bbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496bc0:
    // 0x496bc0: 0xc0402d4  jal         func_100B50
label_496bc4:
    if (ctx->pc == 0x496BC4u) {
        ctx->pc = 0x496BC8u;
        goto label_496bc8;
    }
    ctx->pc = 0x496BC0u;
    SET_GPR_U32(ctx, 31, 0x496BC8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496BC0u, 0x496BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BC8u;
label_496bc8:
    // 0x496bc8: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x496bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496bcc:
    // 0x496bcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496bd0:
    // 0x496bd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496bd4:
    // 0x496bd4: 0xc0406a0  jal         func_101A80
label_496bd8:
    if (ctx->pc == 0x496BD8u) {
        ctx->pc = 0x496BDCu;
        goto label_496bdc;
    }
    ctx->pc = 0x496BD4u;
    SET_GPR_U32(ctx, 31, 0x496BDCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496BD4u, 0x496BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BDCu;
label_496bdc:
    // 0x496bdc: 0x8fa2049c  lw          $v0, 0x49C($sp)
    ctx->pc = 0x496bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
label_496be0:
    // 0x496be0: 0x1000020b  b           . + 4 + (0x20B << 2)
label_496be4:
    if (ctx->pc == 0x496BE4u) {
        ctx->pc = 0x496BE8u;
        goto label_496be8;
    }
    ctx->pc = 0x496BE0u;
    {
        const bool branch_taken_0x496be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496be0) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496BE8u;
label_496be8:
    // 0x496be8: 0x27a403e8  addiu       $a0, $sp, 0x3E8
    ctx->pc = 0x496be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_496bec:
    // 0x496bec: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496bf0:
    // 0x496bf0: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x496bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_496bf4:
    // 0x496bf4: 0xc040304  jal         func_100C10
label_496bf8:
    if (ctx->pc == 0x496BF8u) {
        ctx->pc = 0x496BFCu;
        goto label_496bfc;
    }
    ctx->pc = 0x496BF4u;
    SET_GPR_U32(ctx, 31, 0x496BFCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496BF4u, 0x496BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496BFCu;
label_496bfc:
    // 0x496bfc: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496c00:
    // 0x496c00: 0x27a503e8  addiu       $a1, $sp, 0x3E8
    ctx->pc = 0x496c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_496c04:
    // 0x496c04: 0xc11bd88  jal         func_46F620
label_496c08:
    if (ctx->pc == 0x496C08u) {
        ctx->pc = 0x496C0Cu;
        goto label_496c0c;
    }
    ctx->pc = 0x496C04u;
    SET_GPR_U32(ctx, 31, 0x496C0Cu);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496C04u, 0x496C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C0Cu;
label_496c0c:
    // 0x496c0c: 0xafa20498  sw          $v0, 0x498($sp)
    ctx->pc = 0x496c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 2));
label_496c10:
    // 0x496c10: 0x27a403e8  addiu       $a0, $sp, 0x3E8
    ctx->pc = 0x496c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_496c14:
    // 0x496c14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496c18:
    // 0x496c18: 0xc0402d4  jal         func_100B50
label_496c1c:
    if (ctx->pc == 0x496C1Cu) {
        ctx->pc = 0x496C20u;
        goto label_496c20;
    }
    ctx->pc = 0x496C18u;
    SET_GPR_U32(ctx, 31, 0x496C20u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496C18u, 0x496C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C20u;
label_496c20:
    // 0x496c20: 0x27a60458  addiu       $a2, $sp, 0x458
    ctx->pc = 0x496c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496c24:
    // 0x496c24: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x496c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_496c28:
    // 0x496c28: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x496c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496c2c:
    // 0x496c2c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x496c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_496c30:
    // 0x496c30: 0xc0406a0  jal         func_101A80
label_496c34:
    if (ctx->pc == 0x496C34u) {
        ctx->pc = 0x496C38u;
        goto label_496c38;
    }
    ctx->pc = 0x496C30u;
    SET_GPR_U32(ctx, 31, 0x496C38u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496C30u, 0x496C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C38u;
label_496c38:
    // 0x496c38: 0x8fa20498  lw          $v0, 0x498($sp)
    ctx->pc = 0x496c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
label_496c3c:
    // 0x496c3c: 0x100001f4  b           . + 4 + (0x1F4 << 2)
label_496c40:
    if (ctx->pc == 0x496C40u) {
        ctx->pc = 0x496C44u;
        goto label_496c44;
    }
    ctx->pc = 0x496C3Cu;
    {
        const bool branch_taken_0x496c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496c3c) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496C44u;
label_496c44:
    // 0x496c44: 0x27a403d8  addiu       $a0, $sp, 0x3D8
    ctx->pc = 0x496c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
label_496c48:
    // 0x496c48: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496c4c:
    // 0x496c4c: 0x24a55850  addiu       $a1, $a1, 0x5850
    ctx->pc = 0x496c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22608));
label_496c50:
    // 0x496c50: 0xc040304  jal         func_100C10
label_496c54:
    if (ctx->pc == 0x496C54u) {
        ctx->pc = 0x496C58u;
        goto label_496c58;
    }
    ctx->pc = 0x496C50u;
    SET_GPR_U32(ctx, 31, 0x496C58u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496C50u, 0x496C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C58u;
label_496c58:
    // 0x496c58: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496c5c:
    // 0x496c5c: 0x27a503d8  addiu       $a1, $sp, 0x3D8
    ctx->pc = 0x496c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
label_496c60:
    // 0x496c60: 0xc11bd88  jal         func_46F620
label_496c64:
    if (ctx->pc == 0x496C64u) {
        ctx->pc = 0x496C68u;
        goto label_496c68;
    }
    ctx->pc = 0x496C60u;
    SET_GPR_U32(ctx, 31, 0x496C68u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496C60u, 0x496C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C68u;
label_496c68:
    // 0x496c68: 0xafa20494  sw          $v0, 0x494($sp)
    ctx->pc = 0x496c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
label_496c6c:
    // 0x496c6c: 0x27a403d8  addiu       $a0, $sp, 0x3D8
    ctx->pc = 0x496c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 984));
label_496c70:
    // 0x496c70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496c74:
    // 0x496c74: 0xc0402d4  jal         func_100B50
label_496c78:
    if (ctx->pc == 0x496C78u) {
        ctx->pc = 0x496C7Cu;
        goto label_496c7c;
    }
    ctx->pc = 0x496C74u;
    SET_GPR_U32(ctx, 31, 0x496C7Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496C74u, 0x496C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C7Cu;
label_496c7c:
    // 0x496c7c: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496c80:
    // 0x496c80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496c84:
    // 0x496c84: 0xc0406a0  jal         func_101A80
label_496c88:
    if (ctx->pc == 0x496C88u) {
        ctx->pc = 0x496C8Cu;
        goto label_496c8c;
    }
    ctx->pc = 0x496C84u;
    SET_GPR_U32(ctx, 31, 0x496C8Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496C84u, 0x496C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496C8Cu;
label_496c8c:
    // 0x496c8c: 0x8fa20494  lw          $v0, 0x494($sp)
    ctx->pc = 0x496c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
label_496c90:
    // 0x496c90: 0x100001df  b           . + 4 + (0x1DF << 2)
label_496c94:
    if (ctx->pc == 0x496C94u) {
        ctx->pc = 0x496C98u;
        goto label_496c98;
    }
    ctx->pc = 0x496C90u;
    {
        const bool branch_taken_0x496c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496c90) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496C98u;
label_496c98:
    // 0x496c98: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496c9c:
    // 0x496c9c: 0x90447e7c  lbu         $a0, 0x7E7C($v0)
    ctx->pc = 0x496c9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32380)));
label_496ca0:
    // 0x496ca0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x496ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_496ca4:
    // 0x496ca4: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
label_496ca8:
    if (ctx->pc == 0x496CA8u) {
        ctx->pc = 0x496CACu;
        goto label_496cac;
    }
    ctx->pc = 0x496CA4u;
    {
        const bool branch_taken_0x496ca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x496ca4) {
            ctx->pc = 0x496D00u;
            goto label_496d00;
        }
    }
    ctx->pc = 0x496CACu;
label_496cac:
    // 0x496cac: 0x27a403c8  addiu       $a0, $sp, 0x3C8
    ctx->pc = 0x496cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_496cb0:
    // 0x496cb0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496cb4:
    // 0x496cb4: 0x24a55880  addiu       $a1, $a1, 0x5880
    ctx->pc = 0x496cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22656));
label_496cb8:
    // 0x496cb8: 0xc040304  jal         func_100C10
label_496cbc:
    if (ctx->pc == 0x496CBCu) {
        ctx->pc = 0x496CC0u;
        goto label_496cc0;
    }
    ctx->pc = 0x496CB8u;
    SET_GPR_U32(ctx, 31, 0x496CC0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496CB8u, 0x496CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496CC0u;
label_496cc0:
    // 0x496cc0: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496cc4:
    // 0x496cc4: 0x27a503c8  addiu       $a1, $sp, 0x3C8
    ctx->pc = 0x496cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_496cc8:
    // 0x496cc8: 0xc11bd88  jal         func_46F620
label_496ccc:
    if (ctx->pc == 0x496CCCu) {
        ctx->pc = 0x496CD0u;
        goto label_496cd0;
    }
    ctx->pc = 0x496CC8u;
    SET_GPR_U32(ctx, 31, 0x496CD0u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496CC8u, 0x496CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496CD0u;
label_496cd0:
    // 0x496cd0: 0xafa20490  sw          $v0, 0x490($sp)
    ctx->pc = 0x496cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
label_496cd4:
    // 0x496cd4: 0x27a403c8  addiu       $a0, $sp, 0x3C8
    ctx->pc = 0x496cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 968));
label_496cd8:
    // 0x496cd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496cdc:
    // 0x496cdc: 0xc0402d4  jal         func_100B50
label_496ce0:
    if (ctx->pc == 0x496CE0u) {
        ctx->pc = 0x496CE4u;
        goto label_496ce4;
    }
    ctx->pc = 0x496CDCu;
    SET_GPR_U32(ctx, 31, 0x496CE4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496CDCu, 0x496CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496CE4u;
label_496ce4:
    // 0x496ce4: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496ce8:
    // 0x496ce8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496cec:
    // 0x496cec: 0xc0406a0  jal         func_101A80
label_496cf0:
    if (ctx->pc == 0x496CF0u) {
        ctx->pc = 0x496CF4u;
        goto label_496cf4;
    }
    ctx->pc = 0x496CECu;
    SET_GPR_U32(ctx, 31, 0x496CF4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496CECu, 0x496CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496CF4u;
label_496cf4:
    // 0x496cf4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x496cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_496cf8:
    // 0x496cf8: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_496cfc:
    if (ctx->pc == 0x496CFCu) {
        ctx->pc = 0x496D00u;
        goto label_496d00;
    }
    ctx->pc = 0x496CF8u;
    {
        const bool branch_taken_0x496cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496cf8) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496D00u;
label_496d00:
    // 0x496d00: 0x27a403b8  addiu       $a0, $sp, 0x3B8
    ctx->pc = 0x496d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
label_496d04:
    // 0x496d04: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496d08:
    // 0x496d08: 0x24a558a0  addiu       $a1, $a1, 0x58A0
    ctx->pc = 0x496d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22688));
label_496d0c:
    // 0x496d0c: 0xc040304  jal         func_100C10
label_496d10:
    if (ctx->pc == 0x496D10u) {
        ctx->pc = 0x496D14u;
        goto label_496d14;
    }
    ctx->pc = 0x496D0Cu;
    SET_GPR_U32(ctx, 31, 0x496D14u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496D0Cu, 0x496D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D14u;
label_496d14:
    // 0x496d14: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496d18:
    // 0x496d18: 0x27a503b8  addiu       $a1, $sp, 0x3B8
    ctx->pc = 0x496d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
label_496d1c:
    // 0x496d1c: 0xc11bd88  jal         func_46F620
label_496d20:
    if (ctx->pc == 0x496D20u) {
        ctx->pc = 0x496D24u;
        goto label_496d24;
    }
    ctx->pc = 0x496D1Cu;
    SET_GPR_U32(ctx, 31, 0x496D24u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496D1Cu, 0x496D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D24u;
label_496d24:
    // 0x496d24: 0xafa2048c  sw          $v0, 0x48C($sp)
    ctx->pc = 0x496d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1164), GPR_U32(ctx, 2));
label_496d28:
    // 0x496d28: 0x27a403b8  addiu       $a0, $sp, 0x3B8
    ctx->pc = 0x496d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
label_496d2c:
    // 0x496d2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496d30:
    // 0x496d30: 0xc0402d4  jal         func_100B50
label_496d34:
    if (ctx->pc == 0x496D34u) {
        ctx->pc = 0x496D38u;
        goto label_496d38;
    }
    ctx->pc = 0x496D30u;
    SET_GPR_U32(ctx, 31, 0x496D38u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496D30u, 0x496D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D38u;
label_496d38:
    // 0x496d38: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496d3c:
    // 0x496d3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496d40:
    // 0x496d40: 0xc0406a0  jal         func_101A80
label_496d44:
    if (ctx->pc == 0x496D44u) {
        ctx->pc = 0x496D48u;
        goto label_496d48;
    }
    ctx->pc = 0x496D40u;
    SET_GPR_U32(ctx, 31, 0x496D48u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496D40u, 0x496D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D48u;
label_496d48:
    // 0x496d48: 0x8fa2048c  lw          $v0, 0x48C($sp)
    ctx->pc = 0x496d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
label_496d4c:
    // 0x496d4c: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_496d50:
    if (ctx->pc == 0x496D50u) {
        ctx->pc = 0x496D54u;
        goto label_496d54;
    }
    ctx->pc = 0x496D4Cu;
    {
        const bool branch_taken_0x496d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496d4c) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496D54u;
label_496d54:
    // 0x496d54: 0x27a403a8  addiu       $a0, $sp, 0x3A8
    ctx->pc = 0x496d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_496d58:
    // 0x496d58: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496d5c:
    // 0x496d5c: 0x24a558c0  addiu       $a1, $a1, 0x58C0
    ctx->pc = 0x496d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22720));
label_496d60:
    // 0x496d60: 0xc040304  jal         func_100C10
label_496d64:
    if (ctx->pc == 0x496D64u) {
        ctx->pc = 0x496D68u;
        goto label_496d68;
    }
    ctx->pc = 0x496D60u;
    SET_GPR_U32(ctx, 31, 0x496D68u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496D60u, 0x496D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D68u;
label_496d68:
    // 0x496d68: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496d6c:
    // 0x496d6c: 0x27a503a8  addiu       $a1, $sp, 0x3A8
    ctx->pc = 0x496d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_496d70:
    // 0x496d70: 0xc11bd88  jal         func_46F620
label_496d74:
    if (ctx->pc == 0x496D74u) {
        ctx->pc = 0x496D78u;
        goto label_496d78;
    }
    ctx->pc = 0x496D70u;
    SET_GPR_U32(ctx, 31, 0x496D78u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496D70u, 0x496D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D78u;
label_496d78:
    // 0x496d78: 0xafa20488  sw          $v0, 0x488($sp)
    ctx->pc = 0x496d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 2));
label_496d7c:
    // 0x496d7c: 0x27a403a8  addiu       $a0, $sp, 0x3A8
    ctx->pc = 0x496d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
label_496d80:
    // 0x496d80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496d84:
    // 0x496d84: 0xc0402d4  jal         func_100B50
label_496d88:
    if (ctx->pc == 0x496D88u) {
        ctx->pc = 0x496D8Cu;
        goto label_496d8c;
    }
    ctx->pc = 0x496D84u;
    SET_GPR_U32(ctx, 31, 0x496D8Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496D84u, 0x496D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D8Cu;
label_496d8c:
    // 0x496d8c: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496d90:
    // 0x496d90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496d94:
    // 0x496d94: 0xc0406a0  jal         func_101A80
label_496d98:
    if (ctx->pc == 0x496D98u) {
        ctx->pc = 0x496D9Cu;
        goto label_496d9c;
    }
    ctx->pc = 0x496D94u;
    SET_GPR_U32(ctx, 31, 0x496D9Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496D94u, 0x496D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496D9Cu;
label_496d9c:
    // 0x496d9c: 0x8fa20488  lw          $v0, 0x488($sp)
    ctx->pc = 0x496d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
label_496da0:
    // 0x496da0: 0x1000019b  b           . + 4 + (0x19B << 2)
label_496da4:
    if (ctx->pc == 0x496DA4u) {
        ctx->pc = 0x496DA8u;
        goto label_496da8;
    }
    ctx->pc = 0x496DA0u;
    {
        const bool branch_taken_0x496da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496da0) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496DA8u;
label_496da8:
    // 0x496da8: 0x27a40398  addiu       $a0, $sp, 0x398
    ctx->pc = 0x496da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
label_496dac:
    // 0x496dac: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496db0:
    // 0x496db0: 0x24a558e0  addiu       $a1, $a1, 0x58E0
    ctx->pc = 0x496db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22752));
label_496db4:
    // 0x496db4: 0xc040304  jal         func_100C10
label_496db8:
    if (ctx->pc == 0x496DB8u) {
        ctx->pc = 0x496DBCu;
        goto label_496dbc;
    }
    ctx->pc = 0x496DB4u;
    SET_GPR_U32(ctx, 31, 0x496DBCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496DB4u, 0x496DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496DBCu;
label_496dbc:
    // 0x496dbc: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496dc0:
    // 0x496dc0: 0x27a50398  addiu       $a1, $sp, 0x398
    ctx->pc = 0x496dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
label_496dc4:
    // 0x496dc4: 0xc11bd88  jal         func_46F620
label_496dc8:
    if (ctx->pc == 0x496DC8u) {
        ctx->pc = 0x496DCCu;
        goto label_496dcc;
    }
    ctx->pc = 0x496DC4u;
    SET_GPR_U32(ctx, 31, 0x496DCCu);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496DC4u, 0x496DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496DCCu;
label_496dcc:
    // 0x496dcc: 0xafa20484  sw          $v0, 0x484($sp)
    ctx->pc = 0x496dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 2));
label_496dd0:
    // 0x496dd0: 0x27a40398  addiu       $a0, $sp, 0x398
    ctx->pc = 0x496dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
label_496dd4:
    // 0x496dd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496dd8:
    // 0x496dd8: 0xc0402d4  jal         func_100B50
label_496ddc:
    if (ctx->pc == 0x496DDCu) {
        ctx->pc = 0x496DE0u;
        goto label_496de0;
    }
    ctx->pc = 0x496DD8u;
    SET_GPR_U32(ctx, 31, 0x496DE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496DD8u, 0x496DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496DE0u;
label_496de0:
    // 0x496de0: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496de4:
    // 0x496de4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496de8:
    // 0x496de8: 0xc0406a0  jal         func_101A80
label_496dec:
    if (ctx->pc == 0x496DECu) {
        ctx->pc = 0x496DF0u;
        goto label_496df0;
    }
    ctx->pc = 0x496DE8u;
    SET_GPR_U32(ctx, 31, 0x496DF0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496DE8u, 0x496DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496DF0u;
label_496df0:
    // 0x496df0: 0x8fa20484  lw          $v0, 0x484($sp)
    ctx->pc = 0x496df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
label_496df4:
    // 0x496df4: 0x10000186  b           . + 4 + (0x186 << 2)
label_496df8:
    if (ctx->pc == 0x496DF8u) {
        ctx->pc = 0x496DFCu;
        goto label_496dfc;
    }
    ctx->pc = 0x496DF4u;
    {
        const bool branch_taken_0x496df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496df4) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496DFCu;
label_496dfc:
    // 0x496dfc: 0x27a40388  addiu       $a0, $sp, 0x388
    ctx->pc = 0x496dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_496e00:
    // 0x496e00: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496e04:
    // 0x496e04: 0x24a55910  addiu       $a1, $a1, 0x5910
    ctx->pc = 0x496e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22800));
label_496e08:
    // 0x496e08: 0xc040304  jal         func_100C10
label_496e0c:
    if (ctx->pc == 0x496E0Cu) {
        ctx->pc = 0x496E10u;
        goto label_496e10;
    }
    ctx->pc = 0x496E08u;
    SET_GPR_U32(ctx, 31, 0x496E10u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496E08u, 0x496E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E10u;
label_496e10:
    // 0x496e10: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496e14:
    // 0x496e14: 0x27a50388  addiu       $a1, $sp, 0x388
    ctx->pc = 0x496e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_496e18:
    // 0x496e18: 0xc11bd88  jal         func_46F620
label_496e1c:
    if (ctx->pc == 0x496E1Cu) {
        ctx->pc = 0x496E20u;
        goto label_496e20;
    }
    ctx->pc = 0x496E18u;
    SET_GPR_U32(ctx, 31, 0x496E20u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496E18u, 0x496E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E20u;
label_496e20:
    // 0x496e20: 0xafa20480  sw          $v0, 0x480($sp)
    ctx->pc = 0x496e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
label_496e24:
    // 0x496e24: 0x27a40388  addiu       $a0, $sp, 0x388
    ctx->pc = 0x496e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_496e28:
    // 0x496e28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496e2c:
    // 0x496e2c: 0xc0402d4  jal         func_100B50
label_496e30:
    if (ctx->pc == 0x496E30u) {
        ctx->pc = 0x496E34u;
        goto label_496e34;
    }
    ctx->pc = 0x496E2Cu;
    SET_GPR_U32(ctx, 31, 0x496E34u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496E2Cu, 0x496E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E34u;
label_496e34:
    // 0x496e34: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496e38:
    // 0x496e38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496e3c:
    // 0x496e3c: 0xc0406a0  jal         func_101A80
label_496e40:
    if (ctx->pc == 0x496E40u) {
        ctx->pc = 0x496E44u;
        goto label_496e44;
    }
    ctx->pc = 0x496E3Cu;
    SET_GPR_U32(ctx, 31, 0x496E44u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496E3Cu, 0x496E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E44u;
label_496e44:
    // 0x496e44: 0x8fa20480  lw          $v0, 0x480($sp)
    ctx->pc = 0x496e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
label_496e48:
    // 0x496e48: 0x10000171  b           . + 4 + (0x171 << 2)
label_496e4c:
    if (ctx->pc == 0x496E4Cu) {
        ctx->pc = 0x496E50u;
        goto label_496e50;
    }
    ctx->pc = 0x496E48u;
    {
        const bool branch_taken_0x496e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496e48) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496E50u;
label_496e50:
    // 0x496e50: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496e54:
    // 0x496e54: 0x90427e7c  lbu         $v0, 0x7E7C($v0)
    ctx->pc = 0x496e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32380)));
label_496e58:
    // 0x496e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x496e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_496e5c:
    // 0x496e5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_496e60:
    if (ctx->pc == 0x496E60u) {
        ctx->pc = 0x496E64u;
        goto label_496e64;
    }
    ctx->pc = 0x496E5Cu;
    {
        const bool branch_taken_0x496e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x496e5c) {
            ctx->pc = 0x496EB8u;
            goto label_496eb8;
        }
    }
    ctx->pc = 0x496E64u;
label_496e64:
    // 0x496e64: 0x27a40378  addiu       $a0, $sp, 0x378
    ctx->pc = 0x496e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_496e68:
    // 0x496e68: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496e6c:
    // 0x496e6c: 0x24a55930  addiu       $a1, $a1, 0x5930
    ctx->pc = 0x496e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22832));
label_496e70:
    // 0x496e70: 0xc040304  jal         func_100C10
label_496e74:
    if (ctx->pc == 0x496E74u) {
        ctx->pc = 0x496E78u;
        goto label_496e78;
    }
    ctx->pc = 0x496E70u;
    SET_GPR_U32(ctx, 31, 0x496E78u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496E70u, 0x496E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E78u;
label_496e78:
    // 0x496e78: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496e7c:
    // 0x496e7c: 0x27a50378  addiu       $a1, $sp, 0x378
    ctx->pc = 0x496e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_496e80:
    // 0x496e80: 0xc11bd88  jal         func_46F620
label_496e84:
    if (ctx->pc == 0x496E84u) {
        ctx->pc = 0x496E88u;
        goto label_496e88;
    }
    ctx->pc = 0x496E80u;
    SET_GPR_U32(ctx, 31, 0x496E88u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496E80u, 0x496E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E88u;
label_496e88:
    // 0x496e88: 0xafa2047c  sw          $v0, 0x47C($sp)
    ctx->pc = 0x496e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1148), GPR_U32(ctx, 2));
label_496e8c:
    // 0x496e8c: 0x27a40378  addiu       $a0, $sp, 0x378
    ctx->pc = 0x496e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
label_496e90:
    // 0x496e90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496e94:
    // 0x496e94: 0xc0402d4  jal         func_100B50
label_496e98:
    if (ctx->pc == 0x496E98u) {
        ctx->pc = 0x496E9Cu;
        goto label_496e9c;
    }
    ctx->pc = 0x496E94u;
    SET_GPR_U32(ctx, 31, 0x496E9Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496E94u, 0x496E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496E9Cu;
label_496e9c:
    // 0x496e9c: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496ea0:
    // 0x496ea0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496ea4:
    // 0x496ea4: 0xc0406a0  jal         func_101A80
label_496ea8:
    if (ctx->pc == 0x496EA8u) {
        ctx->pc = 0x496EACu;
        goto label_496eac;
    }
    ctx->pc = 0x496EA4u;
    SET_GPR_U32(ctx, 31, 0x496EACu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496EA4u, 0x496EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496EACu;
label_496eac:
    // 0x496eac: 0x8fa2047c  lw          $v0, 0x47C($sp)
    ctx->pc = 0x496eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1148)));
label_496eb0:
    // 0x496eb0: 0x10000157  b           . + 4 + (0x157 << 2)
label_496eb4:
    if (ctx->pc == 0x496EB4u) {
        ctx->pc = 0x496EB8u;
        goto label_496eb8;
    }
    ctx->pc = 0x496EB0u;
    {
        const bool branch_taken_0x496eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496eb0) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496EB8u;
label_496eb8:
    // 0x496eb8: 0x27a40368  addiu       $a0, $sp, 0x368
    ctx->pc = 0x496eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_496ebc:
    // 0x496ebc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496ec0:
    // 0x496ec0: 0x24a55950  addiu       $a1, $a1, 0x5950
    ctx->pc = 0x496ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22864));
label_496ec4:
    // 0x496ec4: 0xc040304  jal         func_100C10
label_496ec8:
    if (ctx->pc == 0x496EC8u) {
        ctx->pc = 0x496ECCu;
        goto label_496ecc;
    }
    ctx->pc = 0x496EC4u;
    SET_GPR_U32(ctx, 31, 0x496ECCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496EC4u, 0x496ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496ECCu;
label_496ecc:
    // 0x496ecc: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496ed0:
    // 0x496ed0: 0x27a50368  addiu       $a1, $sp, 0x368
    ctx->pc = 0x496ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_496ed4:
    // 0x496ed4: 0xc11bd88  jal         func_46F620
label_496ed8:
    if (ctx->pc == 0x496ED8u) {
        ctx->pc = 0x496EDCu;
        goto label_496edc;
    }
    ctx->pc = 0x496ED4u;
    SET_GPR_U32(ctx, 31, 0x496EDCu);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496ED4u, 0x496EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496EDCu;
label_496edc:
    // 0x496edc: 0xafa20478  sw          $v0, 0x478($sp)
    ctx->pc = 0x496edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 2));
label_496ee0:
    // 0x496ee0: 0x27a40368  addiu       $a0, $sp, 0x368
    ctx->pc = 0x496ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_496ee4:
    // 0x496ee4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496ee8:
    // 0x496ee8: 0xc0402d4  jal         func_100B50
label_496eec:
    if (ctx->pc == 0x496EECu) {
        ctx->pc = 0x496EF0u;
        goto label_496ef0;
    }
    ctx->pc = 0x496EE8u;
    SET_GPR_U32(ctx, 31, 0x496EF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496EE8u, 0x496EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496EF0u;
label_496ef0:
    // 0x496ef0: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496ef4:
    // 0x496ef4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496ef8:
    // 0x496ef8: 0xc0406a0  jal         func_101A80
label_496efc:
    if (ctx->pc == 0x496EFCu) {
        ctx->pc = 0x496F00u;
        goto label_496f00;
    }
    ctx->pc = 0x496EF8u;
    SET_GPR_U32(ctx, 31, 0x496F00u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496EF8u, 0x496F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496F00u;
label_496f00:
    // 0x496f00: 0x8fa20478  lw          $v0, 0x478($sp)
    ctx->pc = 0x496f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1144)));
label_496f04:
    // 0x496f04: 0x10000142  b           . + 4 + (0x142 << 2)
label_496f08:
    if (ctx->pc == 0x496F08u) {
        ctx->pc = 0x496F0Cu;
        goto label_496f0c;
    }
    ctx->pc = 0x496F04u;
    {
        const bool branch_taken_0x496f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496f04) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496F0Cu;
label_496f0c:
    // 0x496f0c: 0x8f83c154  lw          $v1, -0x3EAC($gp)
    ctx->pc = 0x496f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951252)));
label_496f10:
    // 0x496f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x496f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496f14:
    // 0x496f14: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_496f18:
    if (ctx->pc == 0x496F18u) {
        ctx->pc = 0x496F1Cu;
        goto label_496f1c;
    }
    ctx->pc = 0x496F14u;
    {
        const bool branch_taken_0x496f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496f14) {
            ctx->pc = 0x496F78u;
            goto label_496f78;
        }
    }
    ctx->pc = 0x496F1Cu;
label_496f1c:
    // 0x496f1c: 0x27a40358  addiu       $a0, $sp, 0x358
    ctx->pc = 0x496f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_496f20:
    // 0x496f20: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x496f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_496f24:
    // 0x496f24: 0x24a55970  addiu       $a1, $a1, 0x5970
    ctx->pc = 0x496f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
label_496f28:
    // 0x496f28: 0xc040304  jal         func_100C10
label_496f2c:
    if (ctx->pc == 0x496F2Cu) {
        ctx->pc = 0x496F30u;
        goto label_496f30;
    }
    ctx->pc = 0x496F28u;
    SET_GPR_U32(ctx, 31, 0x496F30u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496F28u, 0x496F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496F30u;
label_496f30:
    // 0x496f30: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x496f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496f34:
    // 0x496f34: 0x27a50358  addiu       $a1, $sp, 0x358
    ctx->pc = 0x496f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_496f38:
    // 0x496f38: 0xc11bd88  jal         func_46F620
label_496f3c:
    if (ctx->pc == 0x496F3Cu) {
        ctx->pc = 0x496F40u;
        goto label_496f40;
    }
    ctx->pc = 0x496F38u;
    SET_GPR_U32(ctx, 31, 0x496F40u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496F38u, 0x496F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496F40u;
label_496f40:
    // 0x496f40: 0xafa20474  sw          $v0, 0x474($sp)
    ctx->pc = 0x496f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 2));
label_496f44:
    // 0x496f44: 0x27b00358  addiu       $s0, $sp, 0x358
    ctx->pc = 0x496f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_496f48:
    // 0x496f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x496f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_496f4c:
    // 0x496f4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496f50:
    // 0x496f50: 0xc0402d4  jal         func_100B50
label_496f54:
    if (ctx->pc == 0x496F54u) {
        ctx->pc = 0x496F58u;
        goto label_496f58;
    }
    ctx->pc = 0x496F50u;
    SET_GPR_U32(ctx, 31, 0x496F58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496F50u, 0x496F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496F58u;
label_496f58:
    // 0x496f58: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496f5c:
    // 0x496f5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496f60:
    // 0x496f60: 0xc0406a0  jal         func_101A80
label_496f64:
    if (ctx->pc == 0x496F64u) {
        ctx->pc = 0x496F68u;
        goto label_496f68;
    }
    ctx->pc = 0x496F60u;
    SET_GPR_U32(ctx, 31, 0x496F68u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496F60u, 0x496F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496F68u;
label_496f68:
    // 0x496f68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x496f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_496f6c:
    // 0x496f6c: 0x8fa20474  lw          $v0, 0x474($sp)
    ctx->pc = 0x496f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1140)));
label_496f70:
    // 0x496f70: 0x10000127  b           . + 4 + (0x127 << 2)
label_496f74:
    if (ctx->pc == 0x496F74u) {
        ctx->pc = 0x496F78u;
        goto label_496f78;
    }
    ctx->pc = 0x496F70u;
    {
        const bool branch_taken_0x496f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496f70) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496F78u;
label_496f78:
    // 0x496f78: 0x8f82c158  lw          $v0, -0x3EA8($gp)
    ctx->pc = 0x496f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951256)));
label_496f7c:
    // 0x496f7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x496f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_496f80:
    // 0x496f80: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
label_496f84:
    if (ctx->pc == 0x496F84u) {
        ctx->pc = 0x496F88u;
        goto label_496f88;
    }
    ctx->pc = 0x496F80u;
    {
        const bool branch_taken_0x496f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x496f80) {
            ctx->pc = 0x496FF0u;
            goto label_496ff0;
        }
    }
    ctx->pc = 0x496F88u;
label_496f88:
    // 0x496f88: 0x27a50348  addiu       $a1, $sp, 0x348
    ctx->pc = 0x496f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_496f8c:
    // 0x496f8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x496f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_496f90:
    // 0x496f90: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x496f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
label_496f94:
    // 0x496f94: 0x24c65990  addiu       $a2, $a2, 0x5990
    ctx->pc = 0x496f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22928));
label_496f98:
    // 0x496f98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x496f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_496f9c:
    // 0x496f9c: 0xc040304  jal         func_100C10
label_496fa0:
    if (ctx->pc == 0x496FA0u) {
        ctx->pc = 0x496FA4u;
        goto label_496fa4;
    }
    ctx->pc = 0x496F9Cu;
    SET_GPR_U32(ctx, 31, 0x496FA4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x496F9Cu, 0x496FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496FA4u;
label_496fa4:
    // 0x496fa4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x496fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_496fa8:
    // 0x496fa8: 0x8f88c164  lw          $t0, -0x3E9C($gp)
    ctx->pc = 0x496fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_496fac:
    // 0x496fac: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x496facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_496fb0:
    // 0x496fb0: 0x27a90348  addiu       $t1, $sp, 0x348
    ctx->pc = 0x496fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_496fb4:
    // 0x496fb4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x496fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_496fb8:
    // 0x496fb8: 0xc11bd88  jal         func_46F620
label_496fbc:
    if (ctx->pc == 0x496FBCu) {
        ctx->pc = 0x496FC0u;
        goto label_496fc0;
    }
    ctx->pc = 0x496FB8u;
    SET_GPR_U32(ctx, 31, 0x496FC0u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x496FB8u, 0x496FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496FC0u;
label_496fc0:
    // 0x496fc0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x496fc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_496fc4:
    // 0x496fc4: 0x27a40348  addiu       $a0, $sp, 0x348
    ctx->pc = 0x496fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_496fc8:
    // 0x496fc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496fcc:
    // 0x496fcc: 0xc0402d4  jal         func_100B50
label_496fd0:
    if (ctx->pc == 0x496FD0u) {
        ctx->pc = 0x496FD4u;
        goto label_496fd4;
    }
    ctx->pc = 0x496FCCu;
    SET_GPR_U32(ctx, 31, 0x496FD4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x496FCCu, 0x496FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496FD4u;
label_496fd4:
    // 0x496fd4: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x496fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_496fd8:
    // 0x496fd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x496fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_496fdc:
    // 0x496fdc: 0xc0406a0  jal         func_101A80
label_496fe0:
    if (ctx->pc == 0x496FE0u) {
        ctx->pc = 0x496FE4u;
        goto label_496fe4;
    }
    ctx->pc = 0x496FDCu;
    SET_GPR_U32(ctx, 31, 0x496FE4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x496FDCu, 0x496FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496FE4u;
label_496fe4:
    // 0x496fe4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x496fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_496fe8:
    // 0x496fe8: 0x10000109  b           . + 4 + (0x109 << 2)
label_496fec:
    if (ctx->pc == 0x496FECu) {
        ctx->pc = 0x496FF0u;
        goto label_496ff0;
    }
    ctx->pc = 0x496FE8u;
    {
        const bool branch_taken_0x496fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496fe8) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x496FF0u;
label_496ff0:
    // 0x496ff0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x496ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_496ff4:
    // 0x496ff4: 0x8c427e70  lw          $v0, 0x7E70($v0)
    ctx->pc = 0x496ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_496ff8:
    // 0x496ff8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x496ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_496ffc:
    // 0x496ffc: 0x1444001a  bne         $v0, $a0, . + 4 + (0x1A << 2)
label_497000:
    if (ctx->pc == 0x497000u) {
        ctx->pc = 0x497004u;
        goto label_497004;
    }
    ctx->pc = 0x496FFCu;
    {
        const bool branch_taken_0x496ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x496ffc) {
            ctx->pc = 0x497068u;
            goto label_497068;
        }
    }
    ctx->pc = 0x497004u;
label_497004:
    // 0x497004: 0x27a50338  addiu       $a1, $sp, 0x338
    ctx->pc = 0x497004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
label_497008:
    // 0x497008: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x497008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49700c:
    // 0x49700c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_497010:
    // 0x497010: 0x244259b0  addiu       $v0, $v0, 0x59B0
    ctx->pc = 0x497010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22960));
label_497014:
    // 0x497014: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497018:
    // 0x497018: 0xc040304  jal         func_100C10
label_49701c:
    if (ctx->pc == 0x49701Cu) {
        ctx->pc = 0x497020u;
        goto label_497020;
    }
    ctx->pc = 0x497018u;
    SET_GPR_U32(ctx, 31, 0x497020u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x497018u, 0x497020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497020u;
label_497020:
    // 0x497020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497024:
    // 0x497024: 0x8f82c164  lw          $v0, -0x3E9C($gp)
    ctx->pc = 0x497024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_497028:
    // 0x497028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49702c:
    // 0x49702c: 0x27a50338  addiu       $a1, $sp, 0x338
    ctx->pc = 0x49702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
label_497030:
    // 0x497030: 0xc11bd88  jal         func_46F620
label_497034:
    if (ctx->pc == 0x497034u) {
        ctx->pc = 0x497038u;
        goto label_497038;
    }
    ctx->pc = 0x497030u;
    SET_GPR_U32(ctx, 31, 0x497038u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x497030u, 0x497038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497038u;
label_497038:
    // 0x497038: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x497038u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49703c:
    // 0x49703c: 0x27a40338  addiu       $a0, $sp, 0x338
    ctx->pc = 0x49703cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
label_497040:
    // 0x497040: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x497040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497044:
    // 0x497044: 0xc0402d4  jal         func_100B50
label_497048:
    if (ctx->pc == 0x497048u) {
        ctx->pc = 0x49704Cu;
        goto label_49704c;
    }
    ctx->pc = 0x497044u;
    SET_GPR_U32(ctx, 31, 0x49704Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x497044u, 0x49704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49704Cu;
label_49704c:
    // 0x49704c: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x49704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_497050:
    // 0x497050: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x497050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497054:
    // 0x497054: 0xc0406a0  jal         func_101A80
label_497058:
    if (ctx->pc == 0x497058u) {
        ctx->pc = 0x49705Cu;
        goto label_49705c;
    }
    ctx->pc = 0x497054u;
    SET_GPR_U32(ctx, 31, 0x49705Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x497054u, 0x49705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49705Cu;
label_49705c:
    // 0x49705c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x49705cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_497060:
    // 0x497060: 0x100000eb  b           . + 4 + (0xEB << 2)
label_497064:
    if (ctx->pc == 0x497064u) {
        ctx->pc = 0x497068u;
        goto label_497068;
    }
    ctx->pc = 0x497060u;
    {
        const bool branch_taken_0x497060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x497060) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x497068u;
label_497068:
    // 0x497068: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x497068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49706c:
    // 0x49706c: 0x90447e7c  lbu         $a0, 0x7E7C($v0)
    ctx->pc = 0x49706cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32380)));
label_497070:
    // 0x497070: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x497070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_497074:
    // 0x497074: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
label_497078:
    if (ctx->pc == 0x497078u) {
        ctx->pc = 0x49707Cu;
        goto label_49707c;
    }
    ctx->pc = 0x497074u;
    {
        const bool branch_taken_0x497074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x497074) {
            ctx->pc = 0x4970F8u;
            goto label_4970f8;
        }
    }
    ctx->pc = 0x49707Cu;
label_49707c:
    // 0x49707c: 0x27a20328  addiu       $v0, $sp, 0x328
    ctx->pc = 0x49707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_497080:
    // 0x497080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497084:
    // 0x497084: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x497084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_497088:
    // 0x497088: 0x24a559d0  addiu       $a1, $a1, 0x59D0
    ctx->pc = 0x497088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
label_49708c:
    // 0x49708c: 0xc040304  jal         func_100C10
label_497090:
    if (ctx->pc == 0x497090u) {
        ctx->pc = 0x497094u;
        goto label_497094;
    }
    ctx->pc = 0x49708Cu;
    SET_GPR_U32(ctx, 31, 0x497094u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x49708Cu, 0x497094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497094u;
label_497094:
    // 0x497094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497098:
    // 0x497098: 0x8f82c164  lw          $v0, -0x3E9C($gp)
    ctx->pc = 0x497098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_49709c:
    // 0x49709c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970a0:
    // 0x4970a0: 0x27a50328  addiu       $a1, $sp, 0x328
    ctx->pc = 0x4970a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_4970a4:
    // 0x4970a4: 0xc11bd88  jal         func_46F620
label_4970a8:
    if (ctx->pc == 0x4970A8u) {
        ctx->pc = 0x4970ACu;
        goto label_4970ac;
    }
    ctx->pc = 0x4970A4u;
    SET_GPR_U32(ctx, 31, 0x4970ACu);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x4970A4u, 0x4970ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4970ACu;
label_4970ac:
    // 0x4970ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4970acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970b0:
    // 0x4970b0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4970b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4970b4:
    // 0x4970b4: 0x27a20328  addiu       $v0, $sp, 0x328
    ctx->pc = 0x4970b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_4970b8:
    // 0x4970b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4970b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970bc:
    // 0x4970bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4970bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4970c0:
    // 0x4970c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4970c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970c4:
    // 0x4970c4: 0xc0402d4  jal         func_100B50
label_4970c8:
    if (ctx->pc == 0x4970C8u) {
        ctx->pc = 0x4970CCu;
        goto label_4970cc;
    }
    ctx->pc = 0x4970C4u;
    SET_GPR_U32(ctx, 31, 0x4970CCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4970C4u, 0x4970CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4970CCu;
label_4970cc:
    // 0x4970cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4970ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970d0:
    // 0x4970d0: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x4970d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_4970d4:
    // 0x4970d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4970d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4970d8:
    // 0x4970d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4970d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4970dc:
    // 0x4970dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4970dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970e0:
    // 0x4970e0: 0xc0406a0  jal         func_101A80
label_4970e4:
    if (ctx->pc == 0x4970E4u) {
        ctx->pc = 0x4970E8u;
        goto label_4970e8;
    }
    ctx->pc = 0x4970E0u;
    SET_GPR_U32(ctx, 31, 0x4970E8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x4970E0u, 0x4970E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4970E8u;
label_4970e8:
    // 0x4970e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4970e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4970ec:
    // 0x4970ec: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4970ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4970f0:
    // 0x4970f0: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_4970f4:
    if (ctx->pc == 0x4970F4u) {
        ctx->pc = 0x4970F8u;
        goto label_4970f8;
    }
    ctx->pc = 0x4970F0u;
    {
        const bool branch_taken_0x4970f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4970f0) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x4970F8u;
label_4970f8:
    // 0x4970f8: 0x27a50318  addiu       $a1, $sp, 0x318
    ctx->pc = 0x4970f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_4970fc:
    // 0x4970fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4970fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_497100:
    // 0x497100: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x497100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_497104:
    // 0x497104: 0x244259f0  addiu       $v0, $v0, 0x59F0
    ctx->pc = 0x497104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23024));
label_497108:
    // 0x497108: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49710c:
    // 0x49710c: 0xc040304  jal         func_100C10
label_497110:
    if (ctx->pc == 0x497110u) {
        ctx->pc = 0x497114u;
        goto label_497114;
    }
    ctx->pc = 0x49710Cu;
    SET_GPR_U32(ctx, 31, 0x497114u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x49710Cu, 0x497114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497114u;
label_497114:
    // 0x497114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497118:
    // 0x497118: 0x8f85c164  lw          $a1, -0x3E9C($gp)
    ctx->pc = 0x497118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_49711c:
    // 0x49711c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x49711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_497120:
    // 0x497120: 0x27a20318  addiu       $v0, $sp, 0x318
    ctx->pc = 0x497120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_497124:
    // 0x497124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497128:
    // 0x497128: 0xc11bd88  jal         func_46F620
label_49712c:
    if (ctx->pc == 0x49712Cu) {
        ctx->pc = 0x497130u;
        goto label_497130;
    }
    ctx->pc = 0x497128u;
    SET_GPR_U32(ctx, 31, 0x497130u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x497128u, 0x497130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497130u;
label_497130:
    // 0x497130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497134:
    // 0x497134: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x497134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_497138:
    // 0x497138: 0x27a50318  addiu       $a1, $sp, 0x318
    ctx->pc = 0x497138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_49713c:
    // 0x49713c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x49713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_497140:
    // 0x497140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x497140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497144:
    // 0x497144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497148:
    // 0x497148: 0xc0402d4  jal         func_100B50
label_49714c:
    if (ctx->pc == 0x49714Cu) {
        ctx->pc = 0x497150u;
        goto label_497150;
    }
    ctx->pc = 0x497148u;
    SET_GPR_U32(ctx, 31, 0x497150u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x497148u, 0x497150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497150u;
label_497150:
    // 0x497150: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x497150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_497154:
    // 0x497154: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x497154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497158:
    // 0x497158: 0xc0406a0  jal         func_101A80
label_49715c:
    if (ctx->pc == 0x49715Cu) {
        ctx->pc = 0x497160u;
        goto label_497160;
    }
    ctx->pc = 0x497158u;
    SET_GPR_U32(ctx, 31, 0x497160u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x497158u, 0x497160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497160u;
label_497160:
    // 0x497160: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x497160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_497164:
    // 0x497164: 0x100000aa  b           . + 4 + (0xAA << 2)
label_497168:
    if (ctx->pc == 0x497168u) {
        ctx->pc = 0x49716Cu;
        goto label_49716c;
    }
    ctx->pc = 0x497164u;
    {
        const bool branch_taken_0x497164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x497164) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x49716Cu;
label_49716c:
    // 0x49716c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_497170:
    // 0x497170: 0x8c447e70  lw          $a0, 0x7E70($v0)
    ctx->pc = 0x497170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_497174:
    // 0x497174: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x497174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_497178:
    // 0x497178: 0x14850020  bne         $a0, $a1, . + 4 + (0x20 << 2)
label_49717c:
    if (ctx->pc == 0x49717Cu) {
        ctx->pc = 0x497180u;
        goto label_497180;
    }
    ctx->pc = 0x497178u;
    {
        const bool branch_taken_0x497178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x497178) {
            ctx->pc = 0x4971FCu;
            goto label_4971fc;
        }
    }
    ctx->pc = 0x497180u;
label_497180:
    // 0x497180: 0x27a20308  addiu       $v0, $sp, 0x308
    ctx->pc = 0x497180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_497184:
    // 0x497184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497188:
    // 0x497188: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x497188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_49718c:
    // 0x49718c: 0x24a55a10  addiu       $a1, $a1, 0x5A10
    ctx->pc = 0x49718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
label_497190:
    // 0x497190: 0xc040304  jal         func_100C10
label_497194:
    if (ctx->pc == 0x497194u) {
        ctx->pc = 0x497198u;
        goto label_497198;
    }
    ctx->pc = 0x497190u;
    SET_GPR_U32(ctx, 31, 0x497198u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x497190u, 0x497198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497198u;
label_497198:
    // 0x497198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49719c:
    // 0x49719c: 0x8f82c164  lw          $v0, -0x3E9C($gp)
    ctx->pc = 0x49719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_4971a0:
    // 0x4971a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4971a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971a4:
    // 0x4971a4: 0x27a50308  addiu       $a1, $sp, 0x308
    ctx->pc = 0x4971a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_4971a8:
    // 0x4971a8: 0xc11bd88  jal         func_46F620
label_4971ac:
    if (ctx->pc == 0x4971ACu) {
        ctx->pc = 0x4971B0u;
        goto label_4971b0;
    }
    ctx->pc = 0x4971A8u;
    SET_GPR_U32(ctx, 31, 0x4971B0u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x4971A8u, 0x4971B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971B0u;
label_4971b0:
    // 0x4971b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4971b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971b4:
    // 0x4971b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4971b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4971b8:
    // 0x4971b8: 0x27a20308  addiu       $v0, $sp, 0x308
    ctx->pc = 0x4971b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_4971bc:
    // 0x4971bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4971bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971c0:
    // 0x4971c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4971c4:
    // 0x4971c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4971c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971c8:
    // 0x4971c8: 0xc0402d4  jal         func_100B50
label_4971cc:
    if (ctx->pc == 0x4971CCu) {
        ctx->pc = 0x4971D0u;
        goto label_4971d0;
    }
    ctx->pc = 0x4971C8u;
    SET_GPR_U32(ctx, 31, 0x4971D0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4971C8u, 0x4971D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971D0u;
label_4971d0:
    // 0x4971d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4971d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971d4:
    // 0x4971d4: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x4971d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_4971d8:
    // 0x4971d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4971d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4971dc:
    // 0x4971dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4971dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4971e0:
    // 0x4971e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4971e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971e4:
    // 0x4971e4: 0xc0406a0  jal         func_101A80
label_4971e8:
    if (ctx->pc == 0x4971E8u) {
        ctx->pc = 0x4971ECu;
        goto label_4971ec;
    }
    ctx->pc = 0x4971E4u;
    SET_GPR_U32(ctx, 31, 0x4971ECu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x4971E4u, 0x4971ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4971ECu;
label_4971ec:
    // 0x4971ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4971ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4971f0:
    // 0x4971f0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4971f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4971f4:
    // 0x4971f4: 0x10000086  b           . + 4 + (0x86 << 2)
label_4971f8:
    if (ctx->pc == 0x4971F8u) {
        ctx->pc = 0x4971FCu;
        goto label_4971fc;
    }
    ctx->pc = 0x4971F4u;
    {
        const bool branch_taken_0x4971f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4971f4) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x4971FCu;
label_4971fc:
    // 0x4971fc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_497200:
    // 0x497200: 0x90457e7c  lbu         $a1, 0x7E7C($v0)
    ctx->pc = 0x497200u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32380)));
label_497204:
    // 0x497204: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x497204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_497208:
    // 0x497208: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_49720c:
    if (ctx->pc == 0x49720Cu) {
        ctx->pc = 0x497210u;
        goto label_497210;
    }
    ctx->pc = 0x497208u;
    {
        const bool branch_taken_0x497208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497208) {
            ctx->pc = 0x497274u;
            goto label_497274;
        }
    }
    ctx->pc = 0x497210u;
label_497210:
    // 0x497210: 0x27a402f8  addiu       $a0, $sp, 0x2F8
    ctx->pc = 0x497210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_497214:
    // 0x497214: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x497214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_497218:
    // 0x497218: 0x24a55a30  addiu       $a1, $a1, 0x5A30
    ctx->pc = 0x497218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23088));
label_49721c:
    // 0x49721c: 0xc040304  jal         func_100C10
label_497220:
    if (ctx->pc == 0x497220u) {
        ctx->pc = 0x497224u;
        goto label_497224;
    }
    ctx->pc = 0x49721Cu;
    SET_GPR_U32(ctx, 31, 0x497224u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x49721Cu, 0x497224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497224u;
label_497224:
    // 0x497224: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x497224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_497228:
    // 0x497228: 0x27a502f8  addiu       $a1, $sp, 0x2F8
    ctx->pc = 0x497228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_49722c:
    // 0x49722c: 0xc11bd88  jal         func_46F620
label_497230:
    if (ctx->pc == 0x497230u) {
        ctx->pc = 0x497234u;
        goto label_497234;
    }
    ctx->pc = 0x49722Cu;
    SET_GPR_U32(ctx, 31, 0x497234u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x49722Cu, 0x497234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497234u;
label_497234:
    // 0x497234: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x497234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497238:
    // 0x497238: 0x27a202f8  addiu       $v0, $sp, 0x2F8
    ctx->pc = 0x497238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_49723c:
    // 0x49723c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497240:
    // 0x497240: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x497240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497244:
    // 0x497244: 0xc0402d4  jal         func_100B50
label_497248:
    if (ctx->pc == 0x497248u) {
        ctx->pc = 0x49724Cu;
        goto label_49724c;
    }
    ctx->pc = 0x497244u;
    SET_GPR_U32(ctx, 31, 0x49724Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x497244u, 0x49724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49724Cu;
label_49724c:
    // 0x49724c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49724cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497250:
    // 0x497250: 0x27a20458  addiu       $v0, $sp, 0x458
    ctx->pc = 0x497250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_497254:
    // 0x497254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497258:
    // 0x497258: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x497258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49725c:
    // 0x49725c: 0xc0406a0  jal         func_101A80
label_497260:
    if (ctx->pc == 0x497260u) {
        ctx->pc = 0x497264u;
        goto label_497264;
    }
    ctx->pc = 0x49725Cu;
    SET_GPR_U32(ctx, 31, 0x497264u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x49725Cu, 0x497264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497264u;
label_497264:
    // 0x497264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497268:
    // 0x497268: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x497268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49726c:
    // 0x49726c: 0x10000068  b           . + 4 + (0x68 << 2)
label_497270:
    if (ctx->pc == 0x497270u) {
        ctx->pc = 0x497274u;
        goto label_497274;
    }
    ctx->pc = 0x49726Cu;
    {
        const bool branch_taken_0x49726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49726c) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x497274u;
label_497274:
    // 0x497274: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x497274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_497278:
    // 0x497278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49727c:
    // 0x49727c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x49727cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_497280:
    // 0x497280: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x497280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
label_497284:
    // 0x497284: 0xc040304  jal         func_100C10
label_497288:
    if (ctx->pc == 0x497288u) {
        ctx->pc = 0x49728Cu;
        goto label_49728c;
    }
    ctx->pc = 0x497284u;
    SET_GPR_U32(ctx, 31, 0x49728Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x497284u, 0x49728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49728Cu;
label_49728c:
    // 0x49728c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49728cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497290:
    // 0x497290: 0x8f82c164  lw          $v0, -0x3E9C($gp)
    ctx->pc = 0x497290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_497294:
    // 0x497294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497298:
    // 0x497298: 0x27a502e8  addiu       $a1, $sp, 0x2E8
    ctx->pc = 0x497298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_49729c:
    // 0x49729c: 0xc11bd88  jal         func_46F620
label_4972a0:
    if (ctx->pc == 0x4972A0u) {
        ctx->pc = 0x4972A4u;
        goto label_4972a4;
    }
    ctx->pc = 0x49729Cu;
    SET_GPR_U32(ctx, 31, 0x4972A4u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x49729Cu, 0x4972A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4972A4u;
label_4972a4:
    // 0x4972a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4972a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4972a8:
    // 0x4972a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4972a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4972ac:
    // 0x4972ac: 0x27a202e8  addiu       $v0, $sp, 0x2E8
    ctx->pc = 0x4972acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_4972b0:
    // 0x4972b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4972b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4972b4:
    // 0x4972b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4972b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4972b8:
    // 0x4972b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4972b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4972bc:
    // 0x4972bc: 0xc0402d4  jal         func_100B50
label_4972c0:
    if (ctx->pc == 0x4972C0u) {
        ctx->pc = 0x4972C4u;
        goto label_4972c4;
    }
    ctx->pc = 0x4972BCu;
    SET_GPR_U32(ctx, 31, 0x4972C4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4972BCu, 0x4972C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4972C4u;
label_4972c4:
    // 0x4972c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4972c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4972c8:
    // 0x4972c8: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x4972c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_4972cc:
    // 0x4972cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4972ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4972d0:
    // 0x4972d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4972d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4972d4:
    // 0x4972d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4972d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4972d8:
    // 0x4972d8: 0xc0406a0  jal         func_101A80
label_4972dc:
    if (ctx->pc == 0x4972DCu) {
        ctx->pc = 0x4972E0u;
        goto label_4972e0;
    }
    ctx->pc = 0x4972D8u;
    SET_GPR_U32(ctx, 31, 0x4972E0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x4972D8u, 0x4972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4972E0u;
label_4972e0:
    // 0x4972e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4972e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4972e4:
    // 0x4972e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4972e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4972e8:
    // 0x4972e8: 0x10000049  b           . + 4 + (0x49 << 2)
label_4972ec:
    if (ctx->pc == 0x4972ECu) {
        ctx->pc = 0x4972F0u;
        goto label_4972f0;
    }
    ctx->pc = 0x4972E8u;
    {
        const bool branch_taken_0x4972e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4972e8) {
            ctx->pc = 0x497410u;
            goto label_497410;
        }
    }
    ctx->pc = 0x4972F0u;
label_4972f0:
    // 0x4972f0: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x4972f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4972f4:
    // 0x4972f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4972f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4972f8:
    // 0x4972f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4972f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4972fc:
    // 0x4972fc: 0x27a20448  addiu       $v0, $sp, 0x448
    ctx->pc = 0x4972fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
label_497300:
    // 0x497300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x497300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497304:
    // 0x497304: 0xc115ee8  jal         func_457BA0
label_497308:
    if (ctx->pc == 0x497308u) {
        ctx->pc = 0x49730Cu;
        goto label_49730c;
    }
    ctx->pc = 0x497304u;
    SET_GPR_U32(ctx, 31, 0x49730Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x497304u, 0x49730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49730Cu;
label_49730c:
    // 0x49730c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497310:
    // 0x497310: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_497314:
    if (ctx->pc == 0x497314u) {
        ctx->pc = 0x497318u;
        goto label_497318;
    }
    ctx->pc = 0x497310u;
    {
        const bool branch_taken_0x497310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497310) {
            ctx->pc = 0x4973A4u;
            goto label_4973a4;
        }
    }
    ctx->pc = 0x497318u;
label_497318:
    // 0x497318: 0x8fa50450  lw          $a1, 0x450($sp)
    ctx->pc = 0x497318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_49731c:
    // 0x49731c: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_497320:
    if (ctx->pc == 0x497320u) {
        ctx->pc = 0x497324u;
        goto label_497324;
    }
    ctx->pc = 0x49731Cu;
    {
        const bool branch_taken_0x49731c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x49731c) {
            ctx->pc = 0x4973A4u;
            goto label_4973a4;
        }
    }
    ctx->pc = 0x497324u;
label_497324:
    // 0x497324: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x497324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_497328:
    // 0x497328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49732c:
    // 0x49732c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49732cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497330:
    // 0x497330: 0x8fa6044c  lw          $a2, 0x44C($sp)
    ctx->pc = 0x497330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1100)));
label_497334:
    // 0x497334: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x497334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_497338:
    // 0x497338: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x497338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_49733c:
    // 0x49733c: 0x24020448  addiu       $v0, $zero, 0x448
    ctx->pc = 0x49733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
label_497340:
    // 0x497340: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x497340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497344:
    // 0x497344: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x497344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497348:
    // 0x497348: 0xc113940  jal         func_44E500
label_49734c:
    if (ctx->pc == 0x49734Cu) {
        ctx->pc = 0x497350u;
        goto label_497350;
    }
    ctx->pc = 0x497348u;
    SET_GPR_U32(ctx, 31, 0x497350u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x497348u, 0x497350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497350u;
label_497350:
    // 0x497350: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x497350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_497354:
    // 0x497354: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x497354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_497358:
    // 0x497358: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x497358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
label_49735c:
    // 0x49735c: 0xc115c24  jal         func_457090
label_497360:
    if (ctx->pc == 0x497360u) {
        ctx->pc = 0x497364u;
        goto label_497364;
    }
    ctx->pc = 0x49735Cu;
    SET_GPR_U32(ctx, 31, 0x497364u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x49735Cu, 0x497364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497364u;
label_497364:
    // 0x497364: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x497364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_497368:
    // 0x497368: 0x8fa50450  lw          $a1, 0x450($sp)
    ctx->pc = 0x497368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_49736c:
    // 0x49736c: 0xa0f809  jalr        $a1
label_497370:
    if (ctx->pc == 0x497370u) {
        ctx->pc = 0x497374u;
        goto label_497374;
    }
    ctx->pc = 0x49736Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x497374u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49736Cu, 0x497374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497374u;
label_497374:
    // 0x497374: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x497374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_497378:
    // 0x497378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49737c:
    if (ctx->pc == 0x49737Cu) {
        ctx->pc = 0x497380u;
        goto label_497380;
    }
    ctx->pc = 0x497378u;
    {
        const bool branch_taken_0x497378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497378) {
            ctx->pc = 0x497388u;
            goto label_497388;
        }
    }
    ctx->pc = 0x497380u;
label_497380:
    // 0x497380: 0xd  break       0
    ctx->pc = 0x497380u;
    runtime->handleBreak(rdram, ctx);
label_497384:
    // 0x497384: 0x0  nop
    ctx->pc = 0x497384u;
    // NOP
label_497388:
    // 0x497388: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x497388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_49738c:
    // 0x49738c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x49738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_497390:
    // 0x497390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x497390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_497394:
    // 0x497394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x497394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497398:
    // 0x497398: 0xc11392c  jal         func_44E4B0
label_49739c:
    if (ctx->pc == 0x49739Cu) {
        ctx->pc = 0x4973A0u;
        goto label_4973a0;
    }
    ctx->pc = 0x497398u;
    SET_GPR_U32(ctx, 31, 0x4973A0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x497398u, 0x4973A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4973A0u;
label_4973a0:
    // 0x4973a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4973a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4973a4:
    // 0x4973a4: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x4973a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_4973a8:
    // 0x4973a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4973a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4973ac:
    // 0x4973ac: 0x2782b788  addiu       $v0, $gp, -0x4878
    ctx->pc = 0x4973acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948744));
label_4973b0:
    // 0x4973b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4973b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4973b4:
    // 0x4973b4: 0xc040304  jal         func_100C10
label_4973b8:
    if (ctx->pc == 0x4973B8u) {
        ctx->pc = 0x4973BCu;
        goto label_4973bc;
    }
    ctx->pc = 0x4973B4u;
    SET_GPR_U32(ctx, 31, 0x4973BCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x4973B4u, 0x4973BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4973BCu;
label_4973bc:
    // 0x4973bc: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x4973bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_4973c0:
    // 0x4973c0: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x4973c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_4973c4:
    // 0x4973c4: 0xc11bd88  jal         func_46F620
label_4973c8:
    if (ctx->pc == 0x4973C8u) {
        ctx->pc = 0x4973CCu;
        goto label_4973cc;
    }
    ctx->pc = 0x4973C4u;
    SET_GPR_U32(ctx, 31, 0x4973CCu);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x4973C4u, 0x4973CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4973CCu;
label_4973cc:
    // 0x4973cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4973ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4973d0:
    // 0x4973d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4973d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4973d4:
    // 0x4973d4: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x4973d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_4973d8:
    // 0x4973d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4973d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4973dc:
    // 0x4973dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4973dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4973e0:
    // 0x4973e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4973e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4973e4:
    // 0x4973e4: 0xc0402d4  jal         func_100B50
label_4973e8:
    if (ctx->pc == 0x4973E8u) {
        ctx->pc = 0x4973ECu;
        goto label_4973ec;
    }
    ctx->pc = 0x4973E4u;
    SET_GPR_U32(ctx, 31, 0x4973ECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x4973E4u, 0x4973ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4973ECu;
label_4973ec:
    // 0x4973ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4973ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4973f0:
    // 0x4973f0: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x4973f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_4973f4:
    // 0x4973f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4973f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4973f8:
    // 0x4973f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4973f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4973fc:
    // 0x4973fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4973fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497400:
    // 0x497400: 0xc0406a0  jal         func_101A80
label_497404:
    if (ctx->pc == 0x497404u) {
        ctx->pc = 0x497408u;
        goto label_497408;
    }
    ctx->pc = 0x497400u;
    SET_GPR_U32(ctx, 31, 0x497408u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x497400u, 0x497408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497408u;
label_497408:
    // 0x497408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49740c:
    // 0x49740c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49740cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497410:
    // 0x497410: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x497410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_497414:
    // 0x497414: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x497414u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_497418:
    // 0x497418: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x497418u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49741c:
    // 0x49741c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x49741cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_497420:
    // 0x497420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x497420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_497424:
    // 0x497424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x497424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_497428:
    // 0x497428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x497428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49742c:
    // 0x49742c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49742cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_497430:
    // 0x497430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_497434:
    // 0x497434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_497438:
    // 0x497438: 0x27bd04c0  addiu       $sp, $sp, 0x4C0
    ctx->pc = 0x497438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_49743c:
    // 0x49743c: 0x3e00008  jr          $ra
label_497440:
    if (ctx->pc == 0x497440u) {
        ctx->pc = 0x497444u;
        goto label_497444;
    }
    ctx->pc = 0x49743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49743Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497444u;
label_497444:
    // 0x497444: 0x0  nop
    ctx->pc = 0x497444u;
    // NOP
label_497448:
    // 0x497448: 0x0  nop
    ctx->pc = 0x497448u;
    // NOP
label_49744c:
    // 0x49744c: 0x0  nop
    ctx->pc = 0x49744cu;
    // NOP
    ctx->pc = 0x497450u;
}
