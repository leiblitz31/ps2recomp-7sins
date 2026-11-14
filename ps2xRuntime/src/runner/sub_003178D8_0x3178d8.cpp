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

// Function: sub_003178D8
// Address: 0x3178d8 - 0x3182b8
void sub_003178D8_0x3178d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003178D8_0x3178d8");
#endif

    switch (ctx->pc) {
        case 0x3178d8u: goto label_3178d8;
        case 0x3178dcu: goto label_3178dc;
        case 0x3178e0u: goto label_3178e0;
        case 0x3178e4u: goto label_3178e4;
        case 0x3178e8u: goto label_3178e8;
        case 0x3178ecu: goto label_3178ec;
        case 0x3178f0u: goto label_3178f0;
        case 0x3178f4u: goto label_3178f4;
        case 0x3178f8u: goto label_3178f8;
        case 0x3178fcu: goto label_3178fc;
        case 0x317900u: goto label_317900;
        case 0x317904u: goto label_317904;
        case 0x317908u: goto label_317908;
        case 0x31790cu: goto label_31790c;
        case 0x317910u: goto label_317910;
        case 0x317914u: goto label_317914;
        case 0x317918u: goto label_317918;
        case 0x31791cu: goto label_31791c;
        case 0x317920u: goto label_317920;
        case 0x317924u: goto label_317924;
        case 0x317928u: goto label_317928;
        case 0x31792cu: goto label_31792c;
        case 0x317930u: goto label_317930;
        case 0x317934u: goto label_317934;
        case 0x317938u: goto label_317938;
        case 0x31793cu: goto label_31793c;
        case 0x317940u: goto label_317940;
        case 0x317944u: goto label_317944;
        case 0x317948u: goto label_317948;
        case 0x31794cu: goto label_31794c;
        case 0x317950u: goto label_317950;
        case 0x317954u: goto label_317954;
        case 0x317958u: goto label_317958;
        case 0x31795cu: goto label_31795c;
        case 0x317960u: goto label_317960;
        case 0x317964u: goto label_317964;
        case 0x317968u: goto label_317968;
        case 0x31796cu: goto label_31796c;
        case 0x317970u: goto label_317970;
        case 0x317974u: goto label_317974;
        case 0x317978u: goto label_317978;
        case 0x31797cu: goto label_31797c;
        case 0x317980u: goto label_317980;
        case 0x317984u: goto label_317984;
        case 0x317988u: goto label_317988;
        case 0x31798cu: goto label_31798c;
        case 0x317990u: goto label_317990;
        case 0x317994u: goto label_317994;
        case 0x317998u: goto label_317998;
        case 0x31799cu: goto label_31799c;
        case 0x3179a0u: goto label_3179a0;
        case 0x3179a4u: goto label_3179a4;
        case 0x3179a8u: goto label_3179a8;
        case 0x3179acu: goto label_3179ac;
        case 0x3179b0u: goto label_3179b0;
        case 0x3179b4u: goto label_3179b4;
        case 0x3179b8u: goto label_3179b8;
        case 0x3179bcu: goto label_3179bc;
        case 0x3179c0u: goto label_3179c0;
        case 0x3179c4u: goto label_3179c4;
        case 0x3179c8u: goto label_3179c8;
        case 0x3179ccu: goto label_3179cc;
        case 0x3179d0u: goto label_3179d0;
        case 0x3179d4u: goto label_3179d4;
        case 0x3179d8u: goto label_3179d8;
        case 0x3179dcu: goto label_3179dc;
        case 0x3179e0u: goto label_3179e0;
        case 0x3179e4u: goto label_3179e4;
        case 0x3179e8u: goto label_3179e8;
        case 0x3179ecu: goto label_3179ec;
        case 0x3179f0u: goto label_3179f0;
        case 0x3179f4u: goto label_3179f4;
        case 0x3179f8u: goto label_3179f8;
        case 0x3179fcu: goto label_3179fc;
        case 0x317a00u: goto label_317a00;
        case 0x317a04u: goto label_317a04;
        case 0x317a08u: goto label_317a08;
        case 0x317a0cu: goto label_317a0c;
        case 0x317a10u: goto label_317a10;
        case 0x317a14u: goto label_317a14;
        case 0x317a18u: goto label_317a18;
        case 0x317a1cu: goto label_317a1c;
        case 0x317a20u: goto label_317a20;
        case 0x317a24u: goto label_317a24;
        case 0x317a28u: goto label_317a28;
        case 0x317a2cu: goto label_317a2c;
        case 0x317a30u: goto label_317a30;
        case 0x317a34u: goto label_317a34;
        case 0x317a38u: goto label_317a38;
        case 0x317a3cu: goto label_317a3c;
        case 0x317a40u: goto label_317a40;
        case 0x317a44u: goto label_317a44;
        case 0x317a48u: goto label_317a48;
        case 0x317a4cu: goto label_317a4c;
        case 0x317a50u: goto label_317a50;
        case 0x317a54u: goto label_317a54;
        case 0x317a58u: goto label_317a58;
        case 0x317a5cu: goto label_317a5c;
        case 0x317a60u: goto label_317a60;
        case 0x317a64u: goto label_317a64;
        case 0x317a68u: goto label_317a68;
        case 0x317a6cu: goto label_317a6c;
        case 0x317a70u: goto label_317a70;
        case 0x317a74u: goto label_317a74;
        case 0x317a78u: goto label_317a78;
        case 0x317a7cu: goto label_317a7c;
        case 0x317a80u: goto label_317a80;
        case 0x317a84u: goto label_317a84;
        case 0x317a88u: goto label_317a88;
        case 0x317a8cu: goto label_317a8c;
        case 0x317a90u: goto label_317a90;
        case 0x317a94u: goto label_317a94;
        case 0x317a98u: goto label_317a98;
        case 0x317a9cu: goto label_317a9c;
        case 0x317aa0u: goto label_317aa0;
        case 0x317aa4u: goto label_317aa4;
        case 0x317aa8u: goto label_317aa8;
        case 0x317aacu: goto label_317aac;
        case 0x317ab0u: goto label_317ab0;
        case 0x317ab4u: goto label_317ab4;
        case 0x317ab8u: goto label_317ab8;
        case 0x317abcu: goto label_317abc;
        case 0x317ac0u: goto label_317ac0;
        case 0x317ac4u: goto label_317ac4;
        case 0x317ac8u: goto label_317ac8;
        case 0x317accu: goto label_317acc;
        case 0x317ad0u: goto label_317ad0;
        case 0x317ad4u: goto label_317ad4;
        case 0x317ad8u: goto label_317ad8;
        case 0x317adcu: goto label_317adc;
        case 0x317ae0u: goto label_317ae0;
        case 0x317ae4u: goto label_317ae4;
        case 0x317ae8u: goto label_317ae8;
        case 0x317aecu: goto label_317aec;
        case 0x317af0u: goto label_317af0;
        case 0x317af4u: goto label_317af4;
        case 0x317af8u: goto label_317af8;
        case 0x317afcu: goto label_317afc;
        case 0x317b00u: goto label_317b00;
        case 0x317b04u: goto label_317b04;
        case 0x317b08u: goto label_317b08;
        case 0x317b0cu: goto label_317b0c;
        case 0x317b10u: goto label_317b10;
        case 0x317b14u: goto label_317b14;
        case 0x317b18u: goto label_317b18;
        case 0x317b1cu: goto label_317b1c;
        case 0x317b20u: goto label_317b20;
        case 0x317b24u: goto label_317b24;
        case 0x317b28u: goto label_317b28;
        case 0x317b2cu: goto label_317b2c;
        case 0x317b30u: goto label_317b30;
        case 0x317b34u: goto label_317b34;
        case 0x317b38u: goto label_317b38;
        case 0x317b3cu: goto label_317b3c;
        case 0x317b40u: goto label_317b40;
        case 0x317b44u: goto label_317b44;
        case 0x317b48u: goto label_317b48;
        case 0x317b4cu: goto label_317b4c;
        case 0x317b50u: goto label_317b50;
        case 0x317b54u: goto label_317b54;
        case 0x317b58u: goto label_317b58;
        case 0x317b5cu: goto label_317b5c;
        case 0x317b60u: goto label_317b60;
        case 0x317b64u: goto label_317b64;
        case 0x317b68u: goto label_317b68;
        case 0x317b6cu: goto label_317b6c;
        case 0x317b70u: goto label_317b70;
        case 0x317b74u: goto label_317b74;
        case 0x317b78u: goto label_317b78;
        case 0x317b7cu: goto label_317b7c;
        case 0x317b80u: goto label_317b80;
        case 0x317b84u: goto label_317b84;
        case 0x317b88u: goto label_317b88;
        case 0x317b8cu: goto label_317b8c;
        case 0x317b90u: goto label_317b90;
        case 0x317b94u: goto label_317b94;
        case 0x317b98u: goto label_317b98;
        case 0x317b9cu: goto label_317b9c;
        case 0x317ba0u: goto label_317ba0;
        case 0x317ba4u: goto label_317ba4;
        case 0x317ba8u: goto label_317ba8;
        case 0x317bacu: goto label_317bac;
        case 0x317bb0u: goto label_317bb0;
        case 0x317bb4u: goto label_317bb4;
        case 0x317bb8u: goto label_317bb8;
        case 0x317bbcu: goto label_317bbc;
        case 0x317bc0u: goto label_317bc0;
        case 0x317bc4u: goto label_317bc4;
        case 0x317bc8u: goto label_317bc8;
        case 0x317bccu: goto label_317bcc;
        case 0x317bd0u: goto label_317bd0;
        case 0x317bd4u: goto label_317bd4;
        case 0x317bd8u: goto label_317bd8;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be0u: goto label_317be0;
        case 0x317be4u: goto label_317be4;
        case 0x317be8u: goto label_317be8;
        case 0x317becu: goto label_317bec;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bf4u: goto label_317bf4;
        case 0x317bf8u: goto label_317bf8;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c00u: goto label_317c00;
        case 0x317c04u: goto label_317c04;
        case 0x317c08u: goto label_317c08;
        case 0x317c0cu: goto label_317c0c;
        case 0x317c10u: goto label_317c10;
        case 0x317c14u: goto label_317c14;
        case 0x317c18u: goto label_317c18;
        case 0x317c1cu: goto label_317c1c;
        case 0x317c20u: goto label_317c20;
        case 0x317c24u: goto label_317c24;
        case 0x317c28u: goto label_317c28;
        case 0x317c2cu: goto label_317c2c;
        case 0x317c30u: goto label_317c30;
        case 0x317c34u: goto label_317c34;
        case 0x317c38u: goto label_317c38;
        case 0x317c3cu: goto label_317c3c;
        case 0x317c40u: goto label_317c40;
        case 0x317c44u: goto label_317c44;
        case 0x317c48u: goto label_317c48;
        case 0x317c4cu: goto label_317c4c;
        case 0x317c50u: goto label_317c50;
        case 0x317c54u: goto label_317c54;
        case 0x317c58u: goto label_317c58;
        case 0x317c5cu: goto label_317c5c;
        case 0x317c60u: goto label_317c60;
        case 0x317c64u: goto label_317c64;
        case 0x317c68u: goto label_317c68;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c70u: goto label_317c70;
        case 0x317c74u: goto label_317c74;
        case 0x317c78u: goto label_317c78;
        case 0x317c7cu: goto label_317c7c;
        case 0x317c80u: goto label_317c80;
        case 0x317c84u: goto label_317c84;
        case 0x317c88u: goto label_317c88;
        case 0x317c8cu: goto label_317c8c;
        case 0x317c90u: goto label_317c90;
        case 0x317c94u: goto label_317c94;
        case 0x317c98u: goto label_317c98;
        case 0x317c9cu: goto label_317c9c;
        case 0x317ca0u: goto label_317ca0;
        case 0x317ca4u: goto label_317ca4;
        case 0x317ca8u: goto label_317ca8;
        case 0x317cacu: goto label_317cac;
        case 0x317cb0u: goto label_317cb0;
        case 0x317cb4u: goto label_317cb4;
        case 0x317cb8u: goto label_317cb8;
        case 0x317cbcu: goto label_317cbc;
        case 0x317cc0u: goto label_317cc0;
        case 0x317cc4u: goto label_317cc4;
        case 0x317cc8u: goto label_317cc8;
        case 0x317cccu: goto label_317ccc;
        case 0x317cd0u: goto label_317cd0;
        case 0x317cd4u: goto label_317cd4;
        case 0x317cd8u: goto label_317cd8;
        case 0x317cdcu: goto label_317cdc;
        case 0x317ce0u: goto label_317ce0;
        case 0x317ce4u: goto label_317ce4;
        case 0x317ce8u: goto label_317ce8;
        case 0x317cecu: goto label_317cec;
        case 0x317cf0u: goto label_317cf0;
        case 0x317cf4u: goto label_317cf4;
        case 0x317cf8u: goto label_317cf8;
        case 0x317cfcu: goto label_317cfc;
        case 0x317d00u: goto label_317d00;
        case 0x317d04u: goto label_317d04;
        case 0x317d08u: goto label_317d08;
        case 0x317d0cu: goto label_317d0c;
        case 0x317d10u: goto label_317d10;
        case 0x317d14u: goto label_317d14;
        case 0x317d18u: goto label_317d18;
        case 0x317d1cu: goto label_317d1c;
        case 0x317d20u: goto label_317d20;
        case 0x317d24u: goto label_317d24;
        case 0x317d28u: goto label_317d28;
        case 0x317d2cu: goto label_317d2c;
        case 0x317d30u: goto label_317d30;
        case 0x317d34u: goto label_317d34;
        case 0x317d38u: goto label_317d38;
        case 0x317d3cu: goto label_317d3c;
        case 0x317d40u: goto label_317d40;
        case 0x317d44u: goto label_317d44;
        case 0x317d48u: goto label_317d48;
        case 0x317d4cu: goto label_317d4c;
        case 0x317d50u: goto label_317d50;
        case 0x317d54u: goto label_317d54;
        case 0x317d58u: goto label_317d58;
        case 0x317d5cu: goto label_317d5c;
        case 0x317d60u: goto label_317d60;
        case 0x317d64u: goto label_317d64;
        case 0x317d68u: goto label_317d68;
        case 0x317d6cu: goto label_317d6c;
        case 0x317d70u: goto label_317d70;
        case 0x317d74u: goto label_317d74;
        case 0x317d78u: goto label_317d78;
        case 0x317d7cu: goto label_317d7c;
        case 0x317d80u: goto label_317d80;
        case 0x317d84u: goto label_317d84;
        case 0x317d88u: goto label_317d88;
        case 0x317d8cu: goto label_317d8c;
        case 0x317d90u: goto label_317d90;
        case 0x317d94u: goto label_317d94;
        case 0x317d98u: goto label_317d98;
        case 0x317d9cu: goto label_317d9c;
        case 0x317da0u: goto label_317da0;
        case 0x317da4u: goto label_317da4;
        case 0x317da8u: goto label_317da8;
        case 0x317dacu: goto label_317dac;
        case 0x317db0u: goto label_317db0;
        case 0x317db4u: goto label_317db4;
        case 0x317db8u: goto label_317db8;
        case 0x317dbcu: goto label_317dbc;
        case 0x317dc0u: goto label_317dc0;
        case 0x317dc4u: goto label_317dc4;
        case 0x317dc8u: goto label_317dc8;
        case 0x317dccu: goto label_317dcc;
        case 0x317dd0u: goto label_317dd0;
        case 0x317dd4u: goto label_317dd4;
        case 0x317dd8u: goto label_317dd8;
        case 0x317ddcu: goto label_317ddc;
        case 0x317de0u: goto label_317de0;
        case 0x317de4u: goto label_317de4;
        case 0x317de8u: goto label_317de8;
        case 0x317decu: goto label_317dec;
        case 0x317df0u: goto label_317df0;
        case 0x317df4u: goto label_317df4;
        case 0x317df8u: goto label_317df8;
        case 0x317dfcu: goto label_317dfc;
        case 0x317e00u: goto label_317e00;
        case 0x317e04u: goto label_317e04;
        case 0x317e08u: goto label_317e08;
        case 0x317e0cu: goto label_317e0c;
        case 0x317e10u: goto label_317e10;
        case 0x317e14u: goto label_317e14;
        case 0x317e18u: goto label_317e18;
        case 0x317e1cu: goto label_317e1c;
        case 0x317e20u: goto label_317e20;
        case 0x317e24u: goto label_317e24;
        case 0x317e28u: goto label_317e28;
        case 0x317e2cu: goto label_317e2c;
        case 0x317e30u: goto label_317e30;
        case 0x317e34u: goto label_317e34;
        case 0x317e38u: goto label_317e38;
        case 0x317e3cu: goto label_317e3c;
        case 0x317e40u: goto label_317e40;
        case 0x317e44u: goto label_317e44;
        case 0x317e48u: goto label_317e48;
        case 0x317e4cu: goto label_317e4c;
        case 0x317e50u: goto label_317e50;
        case 0x317e54u: goto label_317e54;
        case 0x317e58u: goto label_317e58;
        case 0x317e5cu: goto label_317e5c;
        case 0x317e60u: goto label_317e60;
        case 0x317e64u: goto label_317e64;
        case 0x317e68u: goto label_317e68;
        case 0x317e6cu: goto label_317e6c;
        case 0x317e70u: goto label_317e70;
        case 0x317e74u: goto label_317e74;
        case 0x317e78u: goto label_317e78;
        case 0x317e7cu: goto label_317e7c;
        case 0x317e80u: goto label_317e80;
        case 0x317e84u: goto label_317e84;
        case 0x317e88u: goto label_317e88;
        case 0x317e8cu: goto label_317e8c;
        case 0x317e90u: goto label_317e90;
        case 0x317e94u: goto label_317e94;
        case 0x317e98u: goto label_317e98;
        case 0x317e9cu: goto label_317e9c;
        case 0x317ea0u: goto label_317ea0;
        case 0x317ea4u: goto label_317ea4;
        case 0x317ea8u: goto label_317ea8;
        case 0x317eacu: goto label_317eac;
        case 0x317eb0u: goto label_317eb0;
        case 0x317eb4u: goto label_317eb4;
        case 0x317eb8u: goto label_317eb8;
        case 0x317ebcu: goto label_317ebc;
        case 0x317ec0u: goto label_317ec0;
        case 0x317ec4u: goto label_317ec4;
        case 0x317ec8u: goto label_317ec8;
        case 0x317eccu: goto label_317ecc;
        case 0x317ed0u: goto label_317ed0;
        case 0x317ed4u: goto label_317ed4;
        case 0x317ed8u: goto label_317ed8;
        case 0x317edcu: goto label_317edc;
        case 0x317ee0u: goto label_317ee0;
        case 0x317ee4u: goto label_317ee4;
        case 0x317ee8u: goto label_317ee8;
        case 0x317eecu: goto label_317eec;
        case 0x317ef0u: goto label_317ef0;
        case 0x317ef4u: goto label_317ef4;
        case 0x317ef8u: goto label_317ef8;
        case 0x317efcu: goto label_317efc;
        case 0x317f00u: goto label_317f00;
        case 0x317f04u: goto label_317f04;
        case 0x317f08u: goto label_317f08;
        case 0x317f0cu: goto label_317f0c;
        case 0x317f10u: goto label_317f10;
        case 0x317f14u: goto label_317f14;
        case 0x317f18u: goto label_317f18;
        case 0x317f1cu: goto label_317f1c;
        case 0x317f20u: goto label_317f20;
        case 0x317f24u: goto label_317f24;
        case 0x317f28u: goto label_317f28;
        case 0x317f2cu: goto label_317f2c;
        case 0x317f30u: goto label_317f30;
        case 0x317f34u: goto label_317f34;
        case 0x317f38u: goto label_317f38;
        case 0x317f3cu: goto label_317f3c;
        case 0x317f40u: goto label_317f40;
        case 0x317f44u: goto label_317f44;
        case 0x317f48u: goto label_317f48;
        case 0x317f4cu: goto label_317f4c;
        case 0x317f50u: goto label_317f50;
        case 0x317f54u: goto label_317f54;
        case 0x317f58u: goto label_317f58;
        case 0x317f5cu: goto label_317f5c;
        case 0x317f60u: goto label_317f60;
        case 0x317f64u: goto label_317f64;
        case 0x317f68u: goto label_317f68;
        case 0x317f6cu: goto label_317f6c;
        case 0x317f70u: goto label_317f70;
        case 0x317f74u: goto label_317f74;
        case 0x317f78u: goto label_317f78;
        case 0x317f7cu: goto label_317f7c;
        case 0x317f80u: goto label_317f80;
        case 0x317f84u: goto label_317f84;
        case 0x317f88u: goto label_317f88;
        case 0x317f8cu: goto label_317f8c;
        case 0x317f90u: goto label_317f90;
        case 0x317f94u: goto label_317f94;
        case 0x317f98u: goto label_317f98;
        case 0x317f9cu: goto label_317f9c;
        case 0x317fa0u: goto label_317fa0;
        case 0x317fa4u: goto label_317fa4;
        case 0x317fa8u: goto label_317fa8;
        case 0x317facu: goto label_317fac;
        case 0x317fb0u: goto label_317fb0;
        case 0x317fb4u: goto label_317fb4;
        case 0x317fb8u: goto label_317fb8;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc0u: goto label_317fc0;
        case 0x317fc4u: goto label_317fc4;
        case 0x317fc8u: goto label_317fc8;
        case 0x317fccu: goto label_317fcc;
        case 0x317fd0u: goto label_317fd0;
        case 0x317fd4u: goto label_317fd4;
        case 0x317fd8u: goto label_317fd8;
        case 0x317fdcu: goto label_317fdc;
        case 0x317fe0u: goto label_317fe0;
        case 0x317fe4u: goto label_317fe4;
        case 0x317fe8u: goto label_317fe8;
        case 0x317fecu: goto label_317fec;
        case 0x317ff0u: goto label_317ff0;
        case 0x317ff4u: goto label_317ff4;
        case 0x317ff8u: goto label_317ff8;
        case 0x317ffcu: goto label_317ffc;
        case 0x318000u: goto label_318000;
        case 0x318004u: goto label_318004;
        case 0x318008u: goto label_318008;
        case 0x31800cu: goto label_31800c;
        case 0x318010u: goto label_318010;
        case 0x318014u: goto label_318014;
        case 0x318018u: goto label_318018;
        case 0x31801cu: goto label_31801c;
        case 0x318020u: goto label_318020;
        case 0x318024u: goto label_318024;
        case 0x318028u: goto label_318028;
        case 0x31802cu: goto label_31802c;
        case 0x318030u: goto label_318030;
        case 0x318034u: goto label_318034;
        case 0x318038u: goto label_318038;
        case 0x31803cu: goto label_31803c;
        case 0x318040u: goto label_318040;
        case 0x318044u: goto label_318044;
        case 0x318048u: goto label_318048;
        case 0x31804cu: goto label_31804c;
        case 0x318050u: goto label_318050;
        case 0x318054u: goto label_318054;
        case 0x318058u: goto label_318058;
        case 0x31805cu: goto label_31805c;
        case 0x318060u: goto label_318060;
        case 0x318064u: goto label_318064;
        case 0x318068u: goto label_318068;
        case 0x31806cu: goto label_31806c;
        case 0x318070u: goto label_318070;
        case 0x318074u: goto label_318074;
        case 0x318078u: goto label_318078;
        case 0x31807cu: goto label_31807c;
        case 0x318080u: goto label_318080;
        case 0x318084u: goto label_318084;
        case 0x318088u: goto label_318088;
        case 0x31808cu: goto label_31808c;
        case 0x318090u: goto label_318090;
        case 0x318094u: goto label_318094;
        case 0x318098u: goto label_318098;
        case 0x31809cu: goto label_31809c;
        case 0x3180a0u: goto label_3180a0;
        case 0x3180a4u: goto label_3180a4;
        case 0x3180a8u: goto label_3180a8;
        case 0x3180acu: goto label_3180ac;
        case 0x3180b0u: goto label_3180b0;
        case 0x3180b4u: goto label_3180b4;
        case 0x3180b8u: goto label_3180b8;
        case 0x3180bcu: goto label_3180bc;
        case 0x3180c0u: goto label_3180c0;
        case 0x3180c4u: goto label_3180c4;
        case 0x3180c8u: goto label_3180c8;
        case 0x3180ccu: goto label_3180cc;
        case 0x3180d0u: goto label_3180d0;
        case 0x3180d4u: goto label_3180d4;
        case 0x3180d8u: goto label_3180d8;
        case 0x3180dcu: goto label_3180dc;
        case 0x3180e0u: goto label_3180e0;
        case 0x3180e4u: goto label_3180e4;
        case 0x3180e8u: goto label_3180e8;
        case 0x3180ecu: goto label_3180ec;
        case 0x3180f0u: goto label_3180f0;
        case 0x3180f4u: goto label_3180f4;
        case 0x3180f8u: goto label_3180f8;
        case 0x3180fcu: goto label_3180fc;
        case 0x318100u: goto label_318100;
        case 0x318104u: goto label_318104;
        case 0x318108u: goto label_318108;
        case 0x31810cu: goto label_31810c;
        case 0x318110u: goto label_318110;
        case 0x318114u: goto label_318114;
        case 0x318118u: goto label_318118;
        case 0x31811cu: goto label_31811c;
        case 0x318120u: goto label_318120;
        case 0x318124u: goto label_318124;
        case 0x318128u: goto label_318128;
        case 0x31812cu: goto label_31812c;
        case 0x318130u: goto label_318130;
        case 0x318134u: goto label_318134;
        case 0x318138u: goto label_318138;
        case 0x31813cu: goto label_31813c;
        case 0x318140u: goto label_318140;
        case 0x318144u: goto label_318144;
        case 0x318148u: goto label_318148;
        case 0x31814cu: goto label_31814c;
        case 0x318150u: goto label_318150;
        case 0x318154u: goto label_318154;
        case 0x318158u: goto label_318158;
        case 0x31815cu: goto label_31815c;
        case 0x318160u: goto label_318160;
        case 0x318164u: goto label_318164;
        case 0x318168u: goto label_318168;
        case 0x31816cu: goto label_31816c;
        case 0x318170u: goto label_318170;
        case 0x318174u: goto label_318174;
        case 0x318178u: goto label_318178;
        case 0x31817cu: goto label_31817c;
        case 0x318180u: goto label_318180;
        case 0x318184u: goto label_318184;
        case 0x318188u: goto label_318188;
        case 0x31818cu: goto label_31818c;
        case 0x318190u: goto label_318190;
        case 0x318194u: goto label_318194;
        case 0x318198u: goto label_318198;
        case 0x31819cu: goto label_31819c;
        case 0x3181a0u: goto label_3181a0;
        case 0x3181a4u: goto label_3181a4;
        case 0x3181a8u: goto label_3181a8;
        case 0x3181acu: goto label_3181ac;
        case 0x3181b0u: goto label_3181b0;
        case 0x3181b4u: goto label_3181b4;
        case 0x3181b8u: goto label_3181b8;
        case 0x3181bcu: goto label_3181bc;
        case 0x3181c0u: goto label_3181c0;
        case 0x3181c4u: goto label_3181c4;
        case 0x3181c8u: goto label_3181c8;
        case 0x3181ccu: goto label_3181cc;
        case 0x3181d0u: goto label_3181d0;
        case 0x3181d4u: goto label_3181d4;
        case 0x3181d8u: goto label_3181d8;
        case 0x3181dcu: goto label_3181dc;
        case 0x3181e0u: goto label_3181e0;
        case 0x3181e4u: goto label_3181e4;
        case 0x3181e8u: goto label_3181e8;
        case 0x3181ecu: goto label_3181ec;
        case 0x3181f0u: goto label_3181f0;
        case 0x3181f4u: goto label_3181f4;
        case 0x3181f8u: goto label_3181f8;
        case 0x3181fcu: goto label_3181fc;
        case 0x318200u: goto label_318200;
        case 0x318204u: goto label_318204;
        case 0x318208u: goto label_318208;
        case 0x31820cu: goto label_31820c;
        case 0x318210u: goto label_318210;
        case 0x318214u: goto label_318214;
        case 0x318218u: goto label_318218;
        case 0x31821cu: goto label_31821c;
        case 0x318220u: goto label_318220;
        case 0x318224u: goto label_318224;
        case 0x318228u: goto label_318228;
        case 0x31822cu: goto label_31822c;
        case 0x318230u: goto label_318230;
        case 0x318234u: goto label_318234;
        case 0x318238u: goto label_318238;
        case 0x31823cu: goto label_31823c;
        case 0x318240u: goto label_318240;
        case 0x318244u: goto label_318244;
        case 0x318248u: goto label_318248;
        case 0x31824cu: goto label_31824c;
        case 0x318250u: goto label_318250;
        case 0x318254u: goto label_318254;
        case 0x318258u: goto label_318258;
        case 0x31825cu: goto label_31825c;
        case 0x318260u: goto label_318260;
        case 0x318264u: goto label_318264;
        case 0x318268u: goto label_318268;
        case 0x31826cu: goto label_31826c;
        case 0x318270u: goto label_318270;
        case 0x318274u: goto label_318274;
        case 0x318278u: goto label_318278;
        case 0x31827cu: goto label_31827c;
        case 0x318280u: goto label_318280;
        case 0x318284u: goto label_318284;
        case 0x318288u: goto label_318288;
        case 0x31828cu: goto label_31828c;
        case 0x318290u: goto label_318290;
        case 0x318294u: goto label_318294;
        case 0x318298u: goto label_318298;
        case 0x31829cu: goto label_31829c;
        case 0x3182a0u: goto label_3182a0;
        case 0x3182a4u: goto label_3182a4;
        case 0x3182a8u: goto label_3182a8;
        case 0x3182acu: goto label_3182ac;
        case 0x3182b0u: goto label_3182b0;
        case 0x3182b4u: goto label_3182b4;
        default: break;
    }

    ctx->pc = 0x3178d8u;

label_3178d8:
    // 0x3178d8: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x3178d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_3178dc:
    // 0x3178dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3178dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3178e0:
    // 0x3178e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3178e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3178e4:
    // 0x3178e4: 0x7fb703b0  sq          $s7, 0x3B0($sp)
    ctx->pc = 0x3178e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 23));
label_3178e8:
    // 0x3178e8: 0xe7b60440  swc1        $f22, 0x440($sp)
    ctx->pc = 0x3178e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3178ec:
    // 0x3178ec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3178ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3178f0:
    // 0x3178f0: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x3178f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_3178f4:
    // 0x3178f4: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x3178f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
label_3178f8:
    // 0x3178f8: 0x7fb20400  sq          $s2, 0x400($sp)
    ctx->pc = 0x3178f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 18));
label_3178fc:
    // 0x3178fc: 0x7fb303f0  sq          $s3, 0x3F0($sp)
    ctx->pc = 0x3178fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 19));
label_317900:
    // 0x317900: 0x7fb403e0  sq          $s4, 0x3E0($sp)
    ctx->pc = 0x317900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 20));
label_317904:
    // 0x317904: 0x7fb503d0  sq          $s5, 0x3D0($sp)
    ctx->pc = 0x317904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 21));
label_317908:
    // 0x317908: 0x7fb603c0  sq          $s6, 0x3C0($sp)
    ctx->pc = 0x317908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 22));
label_31790c:
    // 0x31790c: 0x7fbe03a0  sq          $fp, 0x3A0($sp)
    ctx->pc = 0x31790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 30));
label_317910:
    // 0x317910: 0xffbf0390  sd          $ra, 0x390($sp)
    ctx->pc = 0x317910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 31));
label_317914:
    // 0x317914: 0xe7b50438  swc1        $f21, 0x438($sp)
    ctx->pc = 0x317914u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_317918:
    // 0x317918: 0xe7b40430  swc1        $f20, 0x430($sp)
    ctx->pc = 0x317918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_31791c:
    // 0x31791c: 0xc7878134  lwc1        $f7, -0x7ECC($gp)
    ctx->pc = 0x31791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_317920:
    // 0x317920: 0xc6e4000c  lwc1        $f4, 0xC($s7)
    ctx->pc = 0x317920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_317924:
    // 0x317924: 0xafa60324  sw          $a2, 0x324($sp)
    ctx->pc = 0x317924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 6));
label_317928:
    // 0x317928: 0x46040583  div.s       $f22, $f0, $f4
    ctx->pc = 0x317928u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_31792c:
    // 0x31792c: 0xafa70328  sw          $a3, 0x328($sp)
    ctx->pc = 0x31792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 7));
label_317930:
    // 0x317930: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x317930u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_317934:
    // 0x317934: 0xafa8032c  sw          $t0, 0x32C($sp)
    ctx->pc = 0x317934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 8));
label_317938:
    // 0x317938: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x317938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31793c:
    // 0x31793c: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x31793cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_317940:
    // 0x317940: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x317940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_317944:
    // 0x317944: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x317944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317948:
    // 0x317948: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x317948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31794c:
    // 0x31794c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31794cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_317950:
    // 0x317950: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x317950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_317954:
    // 0x317954: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x317954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_317958:
    // 0x317958: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x317958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31795c:
    // 0x31795c: 0xb3a70013  sdl         $a3, 0x13($sp)
    ctx->pc = 0x31795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317960:
    // 0x317960: 0xb7a7000c  sdr         $a3, 0xC($sp)
    ctx->pc = 0x317960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317964:
    // 0x317964: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x317964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_317968:
    // 0x317968: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x317968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31796c:
    // 0x31796c: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x31796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_317970:
    // 0x317970: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x317970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_317974:
    // 0x317974: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x317974u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_317978:
    // 0x317978: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x317978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31797c:
    // 0x31797c: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x31797cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_317980:
    // 0x317980: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x317980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317984:
    // 0x317984: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x317984u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_317988:
    // 0x317988: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x317988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31798c:
    // 0x31798c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x31798cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_317990:
    // 0x317990: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x317990u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_317994:
    // 0x317994: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x317994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_317998:
    // 0x317998: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x317998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_31799c:
    // 0x31799c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x31799cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3179a0:
    // 0x3179a0: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x3179a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3179a4:
    // 0x3179a4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3179a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3179a8:
    // 0x3179a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3179a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3179ac:
    // 0x3179ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3179acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3179b0:
    // 0x3179b0: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x3179b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3179b4:
    // 0x3179b4: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x3179b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3179b8:
    // 0x3179b8: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x3179b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_3179bc:
    // 0x3179bc: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x3179bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3179c0:
    // 0x3179c0: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x3179c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3179c4:
    // 0x3179c4: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x3179c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_3179c8:
    // 0x3179c8: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x3179c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3179cc:
    // 0x3179cc: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x3179ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3179d0:
    // 0x3179d0: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x3179d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3179d4:
    // 0x3179d4: 0xb3a80033  sdl         $t0, 0x33($sp)
    ctx->pc = 0x3179d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3179d8:
    // 0x3179d8: 0xb7a8002c  sdr         $t0, 0x2C($sp)
    ctx->pc = 0x3179d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3179dc:
    // 0x3179dc: 0xafa90034  sw          $t1, 0x34($sp)
    ctx->pc = 0x3179dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
label_3179e0:
    // 0x3179e0: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x3179e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3179e4:
    // 0x3179e4: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x3179e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3179e8:
    // 0x3179e8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x3179e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3179ec:
    // 0x3179ec: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3179ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3179f0:
    // 0x3179f0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x3179f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3179f4:
    // 0x3179f4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x3179f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_3179f8:
    // 0x3179f8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3179f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3179fc:
    // 0x3179fc: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x3179fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_317a00:
    // 0x317a00: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x317a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317a04:
    // 0x317a04: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x317a04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_317a08:
    // 0x317a08: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x317a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_317a0c:
    // 0x317a0c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x317a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_317a10:
    // 0x317a10: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x317a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_317a14:
    // 0x317a14: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x317a14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_317a18:
    // 0x317a18: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x317a18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_317a1c:
    // 0x317a1c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x317a1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_317a20:
    // 0x317a20: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x317a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_317a24:
    // 0x317a24: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x317a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_317a28:
    // 0x317a28: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x317a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_317a2c:
    // 0x317a2c: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x317a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_317a30:
    // 0x317a30: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x317a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_317a34:
    // 0x317a34: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x317a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_317a38:
    // 0x317a38: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x317a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_317a3c:
    // 0x317a3c: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x317a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_317a40:
    // 0x317a40: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x317a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317a44:
    // 0x317a44: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x317a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317a48:
    // 0x317a48: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x317a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317a4c:
    // 0x317a4c: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x317a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317a50:
    // 0x317a50: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x317a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317a54:
    // 0x317a54: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x317a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317a58:
    // 0x317a58: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x317a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_317a5c:
    // 0x317a5c: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x317a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_317a60:
    // 0x317a60: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x317a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_317a64:
    // 0x317a64: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x317a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_317a68:
    // 0x317a68: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x317a68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_317a6c:
    // 0x317a6c: 0x10800202  beqz        $a0, . + 4 + (0x202 << 2)
label_317a70:
    if (ctx->pc == 0x317A70u) {
        ctx->pc = 0x317A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A6Cu;
        // 0x317a70: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317A74u;
        goto label_317a74;
    }
    ctx->pc = 0x317A6Cu;
    {
        const bool branch_taken_0x317a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A6Cu;
        // 0x317a70: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a6c) {
            ctx->pc = 0x318278u;
            goto label_318278;
        }
    }
    ctx->pc = 0x317A74u;
label_317a74:
    // 0x317a74: 0x27a90194  addiu       $t1, $sp, 0x194
    ctx->pc = 0x317a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_317a78:
    // 0x317a78: 0x27a201a4  addiu       $v0, $sp, 0x1A4
    ctx->pc = 0x317a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
label_317a7c:
    // 0x317a7c: 0x27a4019c  addiu       $a0, $sp, 0x19C
    ctx->pc = 0x317a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_317a80:
    // 0x317a80: 0xafa90334  sw          $t1, 0x334($sp)
    ctx->pc = 0x317a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 9));
label_317a84:
    // 0x317a84: 0xafa20338  sw          $v0, 0x338($sp)
    ctx->pc = 0x317a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 2));
label_317a88:
    // 0x317a88: 0xafa4033c  sw          $a0, 0x33C($sp)
    ctx->pc = 0x317a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 4));
label_317a8c:
    // 0x317a8c: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x317a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_317a90:
    // 0x317a90: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x317a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_317a94:
    // 0x317a94: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x317a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_317a98:
    // 0x317a98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x317a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317a9c:
    // 0x317a9c: 0x4800021  bltz        $a0, . + 4 + (0x21 << 2)
label_317aa0:
    if (ctx->pc == 0x317AA0u) {
        ctx->pc = 0x317AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A9Cu;
        // 0x317aa0: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317AA4u;
        goto label_317aa4;
    }
    ctx->pc = 0x317A9Cu;
    {
        const bool branch_taken_0x317a9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x317AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A9Cu;
        // 0x317aa0: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a9c) {
            ctx->pc = 0x317B24u;
            goto label_317b24;
        }
    }
    ctx->pc = 0x317AA4u;
label_317aa4:
    // 0x317aa4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x317aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_317aa8:
    // 0x317aa8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x317aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_317aac:
    // 0x317aac: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x317aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_317ab0:
    // 0x317ab0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x317ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_317ab4:
    // 0x317ab4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x317ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_317ab8:
    // 0x317ab8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x317ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_317abc:
    // 0x317abc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x317abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317ac0:
    // 0x317ac0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x317ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317ac4:
    // 0x317ac4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317ac8:
    // 0x317ac8: 0x0  nop
    ctx->pc = 0x317ac8u;
    // NOP
label_317acc:
    // 0x317acc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_317ad0:
    if (ctx->pc == 0x317AD0u) {
        ctx->pc = 0x317AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ACCu;
        // 0x317ad0: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317AD4u;
        goto label_317ad4;
    }
    ctx->pc = 0x317ACCu;
    {
        const bool branch_taken_0x317acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ACCu;
        // 0x317ad0: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317acc) {
            ctx->pc = 0x317AE0u;
            goto label_317ae0;
        }
    }
    ctx->pc = 0x317AD4u;
label_317ad4:
    // 0x317ad4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x317ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_317ad8:
    // 0x317ad8: 0x1000000c  b           . + 4 + (0xC << 2)
label_317adc:
    if (ctx->pc == 0x317ADCu) {
        ctx->pc = 0x317ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AD8u;
        // 0x317adc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317AE0u;
        goto label_317ae0;
    }
    ctx->pc = 0x317AD8u;
    {
        const bool branch_taken_0x317ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AD8u;
        // 0x317adc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ad8) {
            ctx->pc = 0x317B0Cu;
            goto label_317b0c;
        }
    }
    ctx->pc = 0x317AE0u;
label_317ae0:
    // 0x317ae0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x317ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317ae4:
    // 0x317ae4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x317ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317ae8:
    // 0x317ae8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x317ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_317aec:
    // 0x317aec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317af0:
    // 0x317af0: 0x0  nop
    ctx->pc = 0x317af0u;
    // NOP
label_317af4:
    // 0x317af4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_317af8:
    if (ctx->pc == 0x317AF8u) {
        ctx->pc = 0x317AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AF4u;
        // 0x317af8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317AFCu;
        goto label_317afc;
    }
    ctx->pc = 0x317AF4u;
    {
        const bool branch_taken_0x317af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AF4u;
        // 0x317af8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317af4) {
            ctx->pc = 0x317B0Cu;
            goto label_317b0c;
        }
    }
    ctx->pc = 0x317AFCu;
label_317afc:
    // 0x317afc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x317afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_317b00:
    // 0x317b00: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x317b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_317b04:
    // 0x317b04: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x317b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_317b08:
    // 0x317b08: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x317b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_317b0c:
    // 0x317b0c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x317b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_317b10:
    // 0x317b10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x317b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317b14:
    // 0x317b14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x317b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317b18:
    // 0x317b18: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
label_317b1c:
    if (ctx->pc == 0x317B1Cu) {
        ctx->pc = 0x317B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B18u;
        // 0x317b1c: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B20u;
        goto label_317b20;
    }
    ctx->pc = 0x317B18u;
    {
        const bool branch_taken_0x317b18 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x317B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B18u;
        // 0x317b1c: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b18) {
            ctx->pc = 0x317AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317ab0;
        }
    }
    ctx->pc = 0x317B20u;
label_317b20:
    // 0x317b20: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x317b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_317b24:
    // 0x317b24: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x317b24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317b28:
    // 0x317b28: 0x8f83a5b4  lw          $v1, -0x5A4C($gp)
    ctx->pc = 0x317b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
label_317b2c:
    // 0x317b2c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x317b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_317b30:
    // 0x317b30: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x317b30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317b34:
    // 0x317b34: 0x526001cc  beql        $s3, $zero, . + 4 + (0x1CC << 2)
label_317b38:
    if (ctx->pc == 0x317B38u) {
        ctx->pc = 0x317B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B34u;
        // 0x317b38: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B3Cu;
        goto label_317b3c;
    }
    ctx->pc = 0x317B34u;
    {
        const bool branch_taken_0x317b34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x317b34) {
            ctx->pc = 0x317B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317B34u;
            // 0x317b38: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318268u;
            goto label_318268;
        }
    }
    ctx->pc = 0x317B3Cu;
label_317b3c:
    // 0x317b3c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x317b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317b40:
    // 0x317b40: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x317b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317b44:
    // 0x317b44: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x317b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317b48:
    // 0x317b48: 0x0  nop
    ctx->pc = 0x317b48u;
    // NOP
label_317b4c:
    // 0x317b4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_317b50:
    if (ctx->pc == 0x317B50u) {
        ctx->pc = 0x317B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B4Cu;
        // 0x317b50: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B54u;
        goto label_317b54;
    }
    ctx->pc = 0x317B4Cu;
    {
        const bool branch_taken_0x317b4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B4Cu;
        // 0x317b50: 0x46000186  mov.s       $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b4c) {
            ctx->pc = 0x317B60u;
            goto label_317b60;
        }
    }
    ctx->pc = 0x317B54u;
label_317b54:
    // 0x317b54: 0x10000008  b           . + 4 + (0x8 << 2)
label_317b58:
    if (ctx->pc == 0x317B58u) {
        ctx->pc = 0x317B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B54u;
        // 0x317b58: 0x46023041  sub.s       $f1, $f6, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B5Cu;
        goto label_317b5c;
    }
    ctx->pc = 0x317B54u;
    {
        const bool branch_taken_0x317b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B54u;
        // 0x317b58: 0x46023041  sub.s       $f1, $f6, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b54) {
            ctx->pc = 0x317B78u;
            goto label_317b78;
        }
    }
    ctx->pc = 0x317B5Cu;
label_317b5c:
    // 0x317b5c: 0x0  nop
    ctx->pc = 0x317b5cu;
    // NOP
label_317b60:
    // 0x317b60: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x317b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317b64:
    // 0x317b64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317b68:
    // 0x317b68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x317b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317b6c:
    // 0x317b6c: 0x0  nop
    ctx->pc = 0x317b6cu;
    // NOP
label_317b70:
    // 0x317b70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317b74:
    if (ctx->pc == 0x317B74u) {
        ctx->pc = 0x317B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B70u;
        // 0x317b74: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B78u;
        goto label_317b78;
    }
    ctx->pc = 0x317B70u;
    {
        const bool branch_taken_0x317b70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317b70) {
            ctx->pc = 0x317B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317B70u;
            // 0x317b74: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317B78u;
            goto label_317b78;
        }
    }
    ctx->pc = 0x317B78u;
label_317b78:
    // 0x317b78: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x317b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317b7c:
    // 0x317b7c: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x317b7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_317b80:
    // 0x317b80: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x317b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317b84:
    // 0x317b84: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x317b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317b88:
    // 0x317b88: 0x0  nop
    ctx->pc = 0x317b88u;
    // NOP
label_317b8c:
    // 0x317b8c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_317b90:
    if (ctx->pc == 0x317B90u) {
        ctx->pc = 0x317B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B8Cu;
        // 0x317b90: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B94u;
        goto label_317b94;
    }
    ctx->pc = 0x317B8Cu;
    {
        const bool branch_taken_0x317b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B8Cu;
        // 0x317b90: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b8c) {
            ctx->pc = 0x317B9Cu;
            goto label_317b9c;
        }
    }
    ctx->pc = 0x317B94u;
label_317b94:
    // 0x317b94: 0x10000007  b           . + 4 + (0x7 << 2)
label_317b98:
    if (ctx->pc == 0x317B98u) {
        ctx->pc = 0x317B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B94u;
        // 0x317b98: 0x46022841  sub.s       $f1, $f5, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B9Cu;
        goto label_317b9c;
    }
    ctx->pc = 0x317B94u;
    {
        const bool branch_taken_0x317b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B94u;
        // 0x317b98: 0x46022841  sub.s       $f1, $f5, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b94) {
            ctx->pc = 0x317BB4u;
            goto label_317bb4;
        }
    }
    ctx->pc = 0x317B9Cu;
label_317b9c:
    // 0x317b9c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x317b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317ba0:
    // 0x317ba0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317ba4:
    // 0x317ba4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x317ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317ba8:
    // 0x317ba8: 0x0  nop
    ctx->pc = 0x317ba8u;
    // NOP
label_317bac:
    // 0x317bac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317bb0:
    if (ctx->pc == 0x317BB0u) {
        ctx->pc = 0x317BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BACu;
        // 0x317bb0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BB4u;
        goto label_317bb4;
    }
    ctx->pc = 0x317BACu;
    {
        const bool branch_taken_0x317bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317bac) {
            ctx->pc = 0x317BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317BACu;
            // 0x317bb0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317BB4u;
            goto label_317bb4;
        }
    }
    ctx->pc = 0x317BB4u;
label_317bb4:
    // 0x317bb4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x317bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317bb8:
    // 0x317bb8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x317bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_317bbc:
    // 0x317bbc: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x317bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317bc0:
    // 0x317bc0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x317bc0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_317bc4:
    // 0x317bc4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x317bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317bc8:
    // 0x317bc8: 0x0  nop
    ctx->pc = 0x317bc8u;
    // NOP
label_317bcc:
    // 0x317bcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_317bd0:
    if (ctx->pc == 0x317BD0u) {
        ctx->pc = 0x317BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BCCu;
        // 0x317bd0: 0x46012100  add.s       $f4, $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BD4u;
        goto label_317bd4;
    }
    ctx->pc = 0x317BCCu;
    {
        const bool branch_taken_0x317bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BCCu;
        // 0x317bd0: 0x46012100  add.s       $f4, $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bcc) {
            ctx->pc = 0x317BDCu;
            goto label_317bdc;
        }
    }
    ctx->pc = 0x317BD4u;
label_317bd4:
    // 0x317bd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_317bd8:
    if (ctx->pc == 0x317BD8u) {
        ctx->pc = 0x317BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BD4u;
        // 0x317bd8: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BDCu;
        goto label_317bdc;
    }
    ctx->pc = 0x317BD4u;
    {
        const bool branch_taken_0x317bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BD4u;
        // 0x317bd8: 0x46021841  sub.s       $f1, $f3, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bd4) {
            ctx->pc = 0x317BF4u;
            goto label_317bf4;
        }
    }
    ctx->pc = 0x317BDCu;
label_317bdc:
    // 0x317bdc: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x317bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317be0:
    // 0x317be0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317be4:
    // 0x317be4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x317be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317be8:
    // 0x317be8: 0x0  nop
    ctx->pc = 0x317be8u;
    // NOP
label_317bec:
    // 0x317bec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317bf0:
    if (ctx->pc == 0x317BF0u) {
        ctx->pc = 0x317BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BECu;
        // 0x317bf0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BF4u;
        goto label_317bf4;
    }
    ctx->pc = 0x317BECu;
    {
        const bool branch_taken_0x317bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317bec) {
            ctx->pc = 0x317BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317BECu;
            // 0x317bf0: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317BF4u;
            goto label_317bf4;
        }
    }
    ctx->pc = 0x317BF4u;
label_317bf4:
    // 0x317bf4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x317bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_317bf8:
    // 0x317bf8: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x317bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317bfc:
    // 0x317bfc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x317bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_317c00:
    // 0x317c00: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x317c00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_317c04:
    // 0x317c04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x317c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c08:
    // 0x317c08: 0x0  nop
    ctx->pc = 0x317c08u;
    // NOP
label_317c0c:
    // 0x317c0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_317c10:
    if (ctx->pc == 0x317C10u) {
        ctx->pc = 0x317C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C0Cu;
        // 0x317c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C14u;
        goto label_317c14;
    }
    ctx->pc = 0x317C0Cu;
    {
        const bool branch_taken_0x317c0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C0Cu;
        // 0x317c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c0c) {
            ctx->pc = 0x317C18u;
            goto label_317c18;
        }
    }
    ctx->pc = 0x317C14u;
label_317c14:
    // 0x317c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317c18:
    // 0x317c18: 0x10400193  beqz        $v0, . + 4 + (0x193 << 2)
label_317c1c:
    if (ctx->pc == 0x317C1Cu) {
        ctx->pc = 0x317C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C18u;
        // 0x317c1c: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C20u;
        goto label_317c20;
    }
    ctx->pc = 0x317C18u;
    {
        const bool branch_taken_0x317c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C18u;
        // 0x317c1c: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c18) {
            ctx->pc = 0x318268u;
            goto label_318268;
        }
    }
    ctx->pc = 0x317C20u;
label_317c20:
    // 0x317c20: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x317c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_317c24:
    // 0x317c24: 0xafa50330  sw          $a1, 0x330($sp)
    ctx->pc = 0x317c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 5));
label_317c28:
    // 0x317c28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x317c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317c2c:
    // 0x317c2c: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x317c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c30:
    // 0x317c30: 0x0  nop
    ctx->pc = 0x317c30u;
    // NOP
label_317c34:
    // 0x317c34: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_317c38:
    if (ctx->pc == 0x317C38u) {
        ctx->pc = 0x317C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C34u;
        // 0x317c38: 0x8dac0008  lw          $t4, 0x8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C3Cu;
        goto label_317c3c;
    }
    ctx->pc = 0x317C34u;
    {
        const bool branch_taken_0x317c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C34u;
        // 0x317c38: 0x8dac0008  lw          $t4, 0x8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c34) {
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317C3Cu;
label_317c3c:
    // 0x317c3c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x317c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317c40:
    // 0x317c40: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x317c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c44:
    // 0x317c44: 0x0  nop
    ctx->pc = 0x317c44u;
    // NOP
label_317c48:
    // 0x317c48: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_317c4c:
    if (ctx->pc == 0x317C4Cu) {
        ctx->pc = 0x317C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C48u;
        // 0x317c4c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C50u;
        goto label_317c50;
    }
    ctx->pc = 0x317C48u;
    {
        const bool branch_taken_0x317c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C48u;
        // 0x317c4c: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c48) {
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317C50u;
label_317c50:
    // 0x317c50: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x317c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c54:
    // 0x317c54: 0x0  nop
    ctx->pc = 0x317c54u;
    // NOP
label_317c58:
    // 0x317c58: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
label_317c5c:
    if (ctx->pc == 0x317C5Cu) {
        ctx->pc = 0x317C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C58u;
        // 0x317c5c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C60u;
        goto label_317c60;
    }
    ctx->pc = 0x317C58u;
    {
        const bool branch_taken_0x317c58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C58u;
        // 0x317c5c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c58) {
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317C60u;
label_317c60:
    // 0x317c60: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x317c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317c64:
    // 0x317c64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c68:
    // 0x317c68: 0x0  nop
    ctx->pc = 0x317c68u;
    // NOP
label_317c6c:
    // 0x317c6c: 0x45000059  bc1f        . + 4 + (0x59 << 2)
label_317c70:
    if (ctx->pc == 0x317C70u) {
        ctx->pc = 0x317C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C6Cu;
        // 0x317c70: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C74u;
        goto label_317c74;
    }
    ctx->pc = 0x317C6Cu;
    {
        const bool branch_taken_0x317c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C6Cu;
        // 0x317c70: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c6c) {
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317C74u;
label_317c74:
    // 0x317c74: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x317c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317c78:
    // 0x317c78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c7c:
    // 0x317c7c: 0x0  nop
    ctx->pc = 0x317c7cu;
    // NOP
label_317c80:
    // 0x317c80: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_317c84:
    if (ctx->pc == 0x317C84u) {
        ctx->pc = 0x317C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C80u;
        // 0x317c84: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C88u;
        goto label_317c88;
    }
    ctx->pc = 0x317C80u;
    {
        const bool branch_taken_0x317c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C80u;
        // 0x317c84: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c80) {
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317C88u;
label_317c88:
    // 0x317c88: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x317c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317c8c:
    // 0x317c8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317c90:
    // 0x317c90: 0x0  nop
    ctx->pc = 0x317c90u;
    // NOP
label_317c94:
    // 0x317c94: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_317c98:
    if (ctx->pc == 0x317C98u) {
        ctx->pc = 0x317C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C94u;
        // 0x317c98: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C9Cu;
        goto label_317c9c;
    }
    ctx->pc = 0x317C94u;
    {
        const bool branch_taken_0x317c94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C94u;
        // 0x317c98: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c94) {
            ctx->pc = 0x317DD4u;
            goto label_317dd4;
        }
    }
    ctx->pc = 0x317C9Cu;
label_317c9c:
    // 0x317c9c: 0xa7a00196  sh          $zero, 0x196($sp)
    ctx->pc = 0x317c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 406), (uint16_t)GPR_U32(ctx, 0));
label_317ca0:
    // 0x317ca0: 0xa3a60195  sb          $a2, 0x195($sp)
    ctx->pc = 0x317ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 405), (uint8_t)GPR_U32(ctx, 6));
label_317ca4:
    // 0x317ca4: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x317ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
label_317ca8:
    // 0x317ca8: 0x9662001e  lhu         $v0, 0x1E($s3)
    ctx->pc = 0x317ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
label_317cac:
    // 0x317cac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_317cb0:
    if (ctx->pc == 0x317CB0u) {
        ctx->pc = 0x317CB4u;
        goto label_317cb4;
    }
    ctx->pc = 0x317CACu;
    {
        const bool branch_taken_0x317cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317cac) {
            ctx->pc = 0x317CC0u;
            goto label_317cc0;
        }
    }
    ctx->pc = 0x317CB4u;
label_317cb4:
    // 0x317cb4: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x317cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_317cb8:
    // 0x317cb8: 0xa3a20195  sb          $v0, 0x195($sp)
    ctx->pc = 0x317cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 405), (uint8_t)GPR_U32(ctx, 2));
label_317cbc:
    // 0x317cbc: 0x0  nop
    ctx->pc = 0x317cbcu;
    // NOP
label_317cc0:
    // 0x317cc0: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x317cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_317cc4:
    // 0x317cc4: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x317cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_317cc8:
    // 0x317cc8: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x317cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_317ccc:
    // 0x317ccc: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x317cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_317cd0:
    // 0x317cd0: 0x6ba90017  ldl         $t1, 0x17($sp)
    ctx->pc = 0x317cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_317cd4:
    // 0x317cd4: 0x6fa90010  ldr         $t1, 0x10($sp)
    ctx->pc = 0x317cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_317cd8:
    // 0x317cd8: 0xb3a7016b  sdl         $a3, 0x16B($sp)
    ctx->pc = 0x317cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317cdc:
    // 0x317cdc: 0xb7a70164  sdr         $a3, 0x164($sp)
    ctx->pc = 0x317cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317ce0:
    // 0x317ce0: 0xb3a80173  sdl         $t0, 0x173($sp)
    ctx->pc = 0x317ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 371); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317ce4:
    // 0x317ce4: 0xb7a8016c  sdr         $t0, 0x16C($sp)
    ctx->pc = 0x317ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317ce8:
    // 0x317ce8: 0xb3a9017b  sdl         $t1, 0x17B($sp)
    ctx->pc = 0x317ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 379); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317cec:
    // 0x317cec: 0xb7a90174  sdr         $t1, 0x174($sp)
    ctx->pc = 0x317cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 372); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317cf0:
    // 0x317cf0: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x317cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_317cf4:
    // 0x317cf4: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x317cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_317cf8:
    // 0x317cf8: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x317cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_317cfc:
    // 0x317cfc: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x317cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_317d00:
    // 0x317d00: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x317d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_317d04:
    // 0x317d04: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x317d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_317d08:
    // 0x317d08: 0xb3a30183  sdl         $v1, 0x183($sp)
    ctx->pc = 0x317d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 387); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317d0c:
    // 0x317d0c: 0xb7a3017c  sdr         $v1, 0x17C($sp)
    ctx->pc = 0x317d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 380); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317d10:
    // 0x317d10: 0xb3a4018b  sdl         $a0, 0x18B($sp)
    ctx->pc = 0x317d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 395); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317d14:
    // 0x317d14: 0xb7a40184  sdr         $a0, 0x184($sp)
    ctx->pc = 0x317d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 388); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317d18:
    // 0x317d18: 0xb3a50193  sdl         $a1, 0x193($sp)
    ctx->pc = 0x317d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 403); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_317d1c:
    // 0x317d1c: 0xb7a5018c  sdr         $a1, 0x18C($sp)
    ctx->pc = 0x317d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 396); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_317d20:
    // 0x317d20: 0x8fa70334  lw          $a3, 0x334($sp)
    ctx->pc = 0x317d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_317d24:
    // 0x317d24: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x317d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317d28:
    // 0x317d28: 0xafa7019c  sw          $a3, 0x19C($sp)
    ctx->pc = 0x317d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 7));
label_317d2c:
    // 0x317d2c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x317d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317d30:
    // 0x317d30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317d34:
    // 0x317d34: 0x0  nop
    ctx->pc = 0x317d34u;
    // NOP
label_317d38:
    // 0x317d38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_317d3c:
    if (ctx->pc == 0x317D3Cu) {
        ctx->pc = 0x317D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D38u;
        // 0x317d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D40u;
        goto label_317d40;
    }
    ctx->pc = 0x317D38u;
    {
        const bool branch_taken_0x317d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D38u;
        // 0x317d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d38) {
            ctx->pc = 0x317D48u;
            goto label_317d48;
        }
    }
    ctx->pc = 0x317D40u;
label_317d40:
    // 0x317d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317d44:
    // 0x317d44: 0x0  nop
    ctx->pc = 0x317d44u;
    // NOP
label_317d48:
    // 0x317d48: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x317d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317d4c:
    // 0x317d4c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x317d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317d50:
    // 0x317d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317d54:
    // 0x317d54: 0x0  nop
    ctx->pc = 0x317d54u;
    // NOP
label_317d58:
    // 0x317d58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317d5c:
    if (ctx->pc == 0x317D5Cu) {
        ctx->pc = 0x317D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D58u;
        // 0x317d5c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D60u;
        goto label_317d60;
    }
    ctx->pc = 0x317D58u;
    {
        const bool branch_taken_0x317d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317d58) {
            ctx->pc = 0x317D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D58u;
            // 0x317d5c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317D60u;
            goto label_317d60;
        }
    }
    ctx->pc = 0x317D60u;
label_317d60:
    // 0x317d60: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x317d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317d64:
    // 0x317d64: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x317d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317d68:
    // 0x317d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317d6c:
    // 0x317d6c: 0x0  nop
    ctx->pc = 0x317d6cu;
    // NOP
label_317d70:
    // 0x317d70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317d74:
    if (ctx->pc == 0x317D74u) {
        ctx->pc = 0x317D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D70u;
        // 0x317d74: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D78u;
        goto label_317d78;
    }
    ctx->pc = 0x317D70u;
    {
        const bool branch_taken_0x317d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317d70) {
            ctx->pc = 0x317D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D70u;
            // 0x317d74: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317D78u;
            goto label_317d78;
        }
    }
    ctx->pc = 0x317D78u;
label_317d78:
    // 0x317d78: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x317d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317d7c:
    // 0x317d7c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x317d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317d80:
    // 0x317d80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317d84:
    // 0x317d84: 0x0  nop
    ctx->pc = 0x317d84u;
    // NOP
label_317d88:
    // 0x317d88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317d8c:
    if (ctx->pc == 0x317D8Cu) {
        ctx->pc = 0x317D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D88u;
        // 0x317d8c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317D90u;
        goto label_317d90;
    }
    ctx->pc = 0x317D88u;
    {
        const bool branch_taken_0x317d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317d88) {
            ctx->pc = 0x317D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317D88u;
            // 0x317d8c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317D90u;
            goto label_317d90;
        }
    }
    ctx->pc = 0x317D90u;
label_317d90:
    // 0x317d90: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x317d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317d94:
    // 0x317d94: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x317d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317d98:
    // 0x317d98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317d9c:
    // 0x317d9c: 0x0  nop
    ctx->pc = 0x317d9cu;
    // NOP
label_317da0:
    // 0x317da0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317da4:
    if (ctx->pc == 0x317DA4u) {
        ctx->pc = 0x317DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DA0u;
        // 0x317da4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DA8u;
        goto label_317da8;
    }
    ctx->pc = 0x317DA0u;
    {
        const bool branch_taken_0x317da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317da0) {
            ctx->pc = 0x317DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317DA0u;
            // 0x317da4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317DA8u;
            goto label_317da8;
        }
    }
    ctx->pc = 0x317DA8u;
label_317da8:
    // 0x317da8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x317da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317dac:
    // 0x317dac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x317dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317db0:
    // 0x317db0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317db4:
    // 0x317db4: 0x0  nop
    ctx->pc = 0x317db4u;
    // NOP
label_317db8:
    // 0x317db8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_317dbc:
    if (ctx->pc == 0x317DBCu) {
        ctx->pc = 0x317DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DB8u;
        // 0x317dbc: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DC0u;
        goto label_317dc0;
    }
    ctx->pc = 0x317DB8u;
    {
        const bool branch_taken_0x317db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317db8) {
            ctx->pc = 0x317DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317DB8u;
            // 0x317dbc: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317DC0u;
            goto label_317dc0;
        }
    }
    ctx->pc = 0x317DC0u;
label_317dc0:
    // 0x317dc0: 0x8fa80338  lw          $t0, 0x338($sp)
    ctx->pc = 0x317dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_317dc4:
    // 0x317dc4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x317dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_317dc8:
    // 0x317dc8: 0xafa802a4  sw          $t0, 0x2A4($sp)
    ctx->pc = 0x317dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 8));
label_317dcc:
    // 0x317dcc: 0x10000004  b           . + 4 + (0x4 << 2)
label_317dd0:
    if (ctx->pc == 0x317DD0u) {
        ctx->pc = 0x317DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DCCu;
        // 0x317dd0: 0x27ab019c  addiu       $t3, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DD4u;
        goto label_317dd4;
    }
    ctx->pc = 0x317DCCu;
    {
        const bool branch_taken_0x317dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DCCu;
        // 0x317dd0: 0x27ab019c  addiu       $t3, $sp, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317dcc) {
            ctx->pc = 0x317DE0u;
            goto label_317de0;
        }
    }
    ctx->pc = 0x317DD4u;
label_317dd4:
    // 0x317dd4: 0x8fa9033c  lw          $t1, 0x33C($sp)
    ctx->pc = 0x317dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_317dd8:
    // 0x317dd8: 0x27ab019c  addiu       $t3, $sp, 0x19C
    ctx->pc = 0x317dd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_317ddc:
    // 0x317ddc: 0xafa902a4  sw          $t1, 0x2A4($sp)
    ctx->pc = 0x317ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 9));
label_317de0:
    // 0x317de0: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x317de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_317de4:
    // 0x317de4: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x317de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_317de8:
    // 0x317de8: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
label_317dec:
    if (ctx->pc == 0x317DECu) {
        ctx->pc = 0x317DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DE8u;
        // 0x317dec: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317DF0u;
        goto label_317df0;
    }
    ctx->pc = 0x317DE8u;
    {
        const bool branch_taken_0x317de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317DE8u;
        // 0x317dec: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317de8) {
            ctx->pc = 0x318264u;
            goto label_318264;
        }
    }
    ctx->pc = 0x317DF0u;
label_317df0:
    // 0x317df0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x317df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_317df4:
    // 0x317df4: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x317df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_317df8:
    // 0x317df8: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x317df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_317dfc:
    // 0x317dfc: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x317dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
label_317e00:
    // 0x317e00: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x317e00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_317e04:
    // 0x317e04: 0xafa40344  sw          $a0, 0x344($sp)
    ctx->pc = 0x317e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 4));
label_317e08:
    // 0x317e08: 0xafa50348  sw          $a1, 0x348($sp)
    ctx->pc = 0x317e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 5));
label_317e0c:
    // 0x317e0c: 0xafa6034c  sw          $a2, 0x34C($sp)
    ctx->pc = 0x317e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 6));
label_317e10:
    // 0x317e10: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x317e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_317e14:
    // 0x317e14: 0x0  nop
    ctx->pc = 0x317e14u;
    // NOP
label_317e18:
    // 0x317e18: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x317e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_317e1c:
    // 0x317e1c: 0x10000067  b           . + 4 + (0x67 << 2)
label_317e20:
    if (ctx->pc == 0x317E20u) {
        ctx->pc = 0x317E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E1Cu;
        // 0x317e20: 0xafa502a4  sw          $a1, 0x2A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E24u;
        goto label_317e24;
    }
    ctx->pc = 0x317E1Cu;
    {
        const bool branch_taken_0x317e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E1Cu;
        // 0x317e20: 0xafa502a4  sw          $a1, 0x2A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e1c) {
            ctx->pc = 0x317FBCu;
            goto label_317fbc;
        }
    }
    ctx->pc = 0x317E24u;
label_317e24:
    // 0x317e24: 0x0  nop
    ctx->pc = 0x317e24u;
    // NOP
label_317e28:
    // 0x317e28: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x317e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_317e2c:
    // 0x317e2c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_317e30:
    if (ctx->pc == 0x317E30u) {
        ctx->pc = 0x317E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E2Cu;
        // 0x317e30: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E34u;
        goto label_317e34;
    }
    ctx->pc = 0x317E2Cu;
    {
        const bool branch_taken_0x317e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E2Cu;
        // 0x317e30: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e2c) {
            ctx->pc = 0x317EDCu;
            goto label_317edc;
        }
    }
    ctx->pc = 0x317E34u;
label_317e34:
    // 0x317e34: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x317e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_317e38:
    // 0x317e38: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x317e38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_317e3c:
    // 0x317e3c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x317e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_317e40:
    // 0x317e40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x317e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317e44:
    // 0x317e44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_317e48:
    // 0x317e48: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x317e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_317e4c:
    // 0x317e4c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x317e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_317e50:
    // 0x317e50: 0x145e000a  bne         $v0, $fp, . + 4 + (0xA << 2)
label_317e54:
    if (ctx->pc == 0x317E54u) {
        ctx->pc = 0x317E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E50u;
        // 0x317e54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E58u;
        goto label_317e58;
    }
    ctx->pc = 0x317E50u;
    {
        const bool branch_taken_0x317e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x317E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E50u;
        // 0x317e54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e50) {
            ctx->pc = 0x317E7Cu;
            goto label_317e7c;
        }
    }
    ctx->pc = 0x317E58u;
label_317e58:
    // 0x317e58: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x317e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_317e5c:
    // 0x317e5c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x317e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_317e60:
    // 0x317e60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x317e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_317e64:
    // 0x317e64: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x317e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_317e68:
    // 0x317e68: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x317e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_317e6c:
    // 0x317e6c: 0x0  nop
    ctx->pc = 0x317e6cu;
    // NOP
label_317e70:
    // 0x317e70: 0x0  nop
    ctx->pc = 0x317e70u;
    // NOP
label_317e74:
    // 0x317e74: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_317e78:
    if (ctx->pc == 0x317E78u) {
        ctx->pc = 0x317E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E74u;
        // 0x317e78: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E7Cu;
        goto label_317e7c;
    }
    ctx->pc = 0x317E74u;
    {
        const bool branch_taken_0x317e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x317e74) {
            ctx->pc = 0x317E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317E74u;
            // 0x317e78: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e60;
        }
    }
    ctx->pc = 0x317E7Cu;
label_317e7c:
    // 0x317e7c: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x317e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_317e80:
    // 0x317e80: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x317e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_317e84:
    // 0x317e84: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_317e88:
    if (ctx->pc == 0x317E88u) {
        ctx->pc = 0x317E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E84u;
        // 0x317e88: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317E8Cu;
        goto label_317e8c;
    }
    ctx->pc = 0x317E84u;
    {
        const bool branch_taken_0x317e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x317E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317E84u;
        // 0x317e88: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317e84) {
            ctx->pc = 0x317EB4u;
            goto label_317eb4;
        }
    }
    ctx->pc = 0x317E8Cu;
label_317e8c:
    // 0x317e8c: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x317e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_317e90:
    // 0x317e90: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x317e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_317e94:
    // 0x317e94: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x317e94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_317e98:
    // 0x317e98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x317e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_317e9c:
    // 0x317e9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x317e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317ea0:
    // 0x317ea0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x317ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_317ea4:
    // 0x317ea4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x317ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_317ea8:
    // 0x317ea8: 0x0  nop
    ctx->pc = 0x317ea8u;
    // NOP
label_317eac:
    // 0x317eac: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_317eb0:
    if (ctx->pc == 0x317EB0u) {
        ctx->pc = 0x317EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EACu;
        // 0x317eb0: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EB4u;
        goto label_317eb4;
    }
    ctx->pc = 0x317EACu;
    {
        const bool branch_taken_0x317eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x317eac) {
            ctx->pc = 0x317EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317EACu;
            // 0x317eb0: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e98;
        }
    }
    ctx->pc = 0x317EB4u;
label_317eb4:
    // 0x317eb4: 0xa7a602b0  sh          $a2, 0x2B0($sp)
    ctx->pc = 0x317eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 688), (uint16_t)GPR_U32(ctx, 6));
label_317eb8:
    // 0x317eb8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x317eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_317ebc:
    // 0x317ebc: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x317ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_317ec0:
    // 0x317ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317ec4:
    // 0x317ec4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x317ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_317ec8:
    // 0x317ec8: 0xa7a202b2  sh          $v0, 0x2B2($sp)
    ctx->pc = 0x317ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 690), (uint16_t)GPR_U32(ctx, 2));
label_317ecc:
    // 0x317ecc: 0x10000043  b           . + 4 + (0x43 << 2)
label_317ed0:
    if (ctx->pc == 0x317ED0u) {
        ctx->pc = 0x317ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ECCu;
        // 0x317ed0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317ED4u;
        goto label_317ed4;
    }
    ctx->pc = 0x317ECCu;
    {
        const bool branch_taken_0x317ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ECCu;
        // 0x317ed0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ecc) {
            ctx->pc = 0x317FDCu;
            goto label_317fdc;
        }
    }
    ctx->pc = 0x317ED4u;
label_317ed4:
    // 0x317ed4: 0x10000037  b           . + 4 + (0x37 << 2)
label_317ed8:
    if (ctx->pc == 0x317ED8u) {
        ctx->pc = 0x317ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ED4u;
        // 0x317ed8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317EDCu;
        goto label_317edc;
    }
    ctx->pc = 0x317ED4u;
    {
        const bool branch_taken_0x317ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ED4u;
        // 0x317ed8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ed4) {
            ctx->pc = 0x317FB4u;
            goto label_317fb4;
        }
    }
    ctx->pc = 0x317EDCu;
label_317edc:
    // 0x317edc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x317edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_317ee0:
    // 0x317ee0: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_317ee4:
    // 0x317ee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x317ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_317ee8:
    // 0x317ee8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x317ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_317eec:
    // 0x317eec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x317eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_317ef0:
    // 0x317ef0: 0x3066000c  andi        $a2, $v1, 0xC
    ctx->pc = 0x317ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_317ef4:
    // 0x317ef4: 0x8fa80340  lw          $t0, 0x340($sp)
    ctx->pc = 0x317ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_317ef8:
    // 0x317ef8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x317ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_317efc:
    // 0x317efc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x317efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317f00:
    // 0x317f00: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x317f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317f04:
    // 0x317f04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x317f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317f08:
    // 0x317f08: 0x0  nop
    ctx->pc = 0x317f08u;
    // NOP
label_317f0c:
    // 0x317f0c: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_317f10:
    if (ctx->pc == 0x317F10u) {
        ctx->pc = 0x317F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F0Cu;
        // 0x317f10: 0x8fa90344  lw          $t1, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F14u;
        goto label_317f14;
    }
    ctx->pc = 0x317F0Cu;
    {
        const bool branch_taken_0x317f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F0Cu;
        // 0x317f10: 0x8fa90344  lw          $t1, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f0c) {
            ctx->pc = 0x317ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317ed4;
        }
    }
    ctx->pc = 0x317F14u;
label_317f14:
    // 0x317f14: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x317f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_317f18:
    // 0x317f18: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x317f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317f1c:
    // 0x317f1c: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x317f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_317f20:
    // 0x317f20: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x317f20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_317f24:
    // 0x317f24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x317f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317f28:
    // 0x317f28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317f2c:
    // 0x317f2c: 0x0  nop
    ctx->pc = 0x317f2cu;
    // NOP
label_317f30:
    // 0x317f30: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_317f34:
    if (ctx->pc == 0x317F34u) {
        ctx->pc = 0x317F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F30u;
        // 0x317f34: 0x8fa30348  lw          $v1, 0x348($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F38u;
        goto label_317f38;
    }
    ctx->pc = 0x317F30u;
    {
        const bool branch_taken_0x317f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F30u;
        // 0x317f34: 0x8fa30348  lw          $v1, 0x348($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f30) {
            ctx->pc = 0x317FB4u;
            goto label_317fb4;
        }
    }
    ctx->pc = 0x317F38u;
label_317f38:
    // 0x317f38: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x317f38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_317f3c:
    // 0x317f3c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x317f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_317f40:
    // 0x317f40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x317f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317f44:
    // 0x317f44: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x317f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_317f48:
    // 0x317f48: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x317f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_317f4c:
    // 0x317f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x317f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317f50:
    // 0x317f50: 0xafa302a4  sw          $v1, 0x2A4($sp)
    ctx->pc = 0x317f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 3));
label_317f54:
    // 0x317f54: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_317f58:
    if (ctx->pc == 0x317F58u) {
        ctx->pc = 0x317F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F54u;
        // 0x317f58: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F5Cu;
        goto label_317f5c;
    }
    ctx->pc = 0x317F54u;
    {
        const bool branch_taken_0x317f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F54u;
        // 0x317f58: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f54) {
            ctx->pc = 0x317F78u;
            goto label_317f78;
        }
    }
    ctx->pc = 0x317F5Cu;
label_317f5c:
    // 0x317f5c: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x317f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_317f60:
    // 0x317f60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x317f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_317f64:
    // 0x317f64: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x317f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_317f68:
    // 0x317f68: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x317f68u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_317f6c:
    // 0x317f6c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x317f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_317f70:
    // 0x317f70: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x317f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_317f74:
    // 0x317f74: 0x0  nop
    ctx->pc = 0x317f74u;
    // NOP
label_317f78:
    // 0x317f78: 0x8fa8034c  lw          $t0, 0x34C($sp)
    ctx->pc = 0x317f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_317f7c:
    // 0x317f7c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x317f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317f80:
    // 0x317f80: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x317f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_317f84:
    // 0x317f84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x317f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317f88:
    // 0x317f88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317f88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317f8c:
    // 0x317f8c: 0x0  nop
    ctx->pc = 0x317f8cu;
    // NOP
label_317f90:
    // 0x317f90: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_317f94:
    if (ctx->pc == 0x317F94u) {
        ctx->pc = 0x317F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F90u;
        // 0x317f94: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317F98u;
        goto label_317f98;
    }
    ctx->pc = 0x317F90u;
    {
        const bool branch_taken_0x317f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F90u;
        // 0x317f94: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f90) {
            ctx->pc = 0x317FB4u;
            goto label_317fb4;
        }
    }
    ctx->pc = 0x317F98u;
label_317f98:
    // 0x317f98: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x317f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_317f9c:
    // 0x317f9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x317f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317fa0:
    // 0x317fa0: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x317fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_317fa4:
    // 0x317fa4: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x317fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
label_317fa8:
    // 0x317fa8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x317fa8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_317fac:
    // 0x317fac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x317facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_317fb0:
    // 0x317fb0: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x317fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_317fb4:
    // 0x317fb4: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x317fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_317fb8:
    // 0x317fb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x317fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_317fbc:
    // 0x317fbc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x317fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_317fc0:
    // 0x317fc0: 0x105eff99  beq         $v0, $fp, . + 4 + (-0x67 << 2)
label_317fc4:
    if (ctx->pc == 0x317FC4u) {
        ctx->pc = 0x317FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FC0u;
        // 0x317fc4: 0x8fa702a4  lw          $a3, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FC8u;
        goto label_317fc8;
    }
    ctx->pc = 0x317FC0u;
    {
        const bool branch_taken_0x317fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x317FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FC0u;
        // 0x317fc4: 0x8fa702a4  lw          $a3, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fc0) {
            ctx->pc = 0x317E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e28;
        }
    }
    ctx->pc = 0x317FC8u;
label_317fc8:
    // 0x317fc8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x317fc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_317fcc:
    // 0x317fcc: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x317fccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_317fd0:
    // 0x317fd0: 0xa7a302b0  sh          $v1, 0x2B0($sp)
    ctx->pc = 0x317fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 688), (uint16_t)GPR_U32(ctx, 3));
label_317fd4:
    // 0x317fd4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x317fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_317fd8:
    // 0x317fd8: 0xa7a202b2  sh          $v0, 0x2B2($sp)
    ctx->pc = 0x317fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 690), (uint16_t)GPR_U32(ctx, 2));
label_317fdc:
    // 0x317fdc: 0x97b402b0  lhu         $s4, 0x2B0($sp)
    ctx->pc = 0x317fdcu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 688)));
label_317fe0:
    // 0x317fe0: 0x97a202b2  lhu         $v0, 0x2B2($sp)
    ctx->pc = 0x317fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 690)));
label_317fe4:
    // 0x317fe4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x317fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_317fe8:
    // 0x317fe8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x317fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317fec:
    // 0x317fec: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
label_317ff0:
    if (ctx->pc == 0x317FF0u) {
        ctx->pc = 0x317FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FECu;
        // 0x317ff0: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317FF4u;
        goto label_317ff4;
    }
    ctx->pc = 0x317FECu;
    {
        const bool branch_taken_0x317fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FECu;
        // 0x317ff0: 0x8fa302a4  lw          $v1, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fec) {
            ctx->pc = 0x318258u;
            goto label_318258;
        }
    }
    ctx->pc = 0x317FF4u;
label_317ff4:
    // 0x317ff4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x317ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_317ff8:
    // 0x317ff8: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x317ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_317ffc:
    // 0x317ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x317ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318000:
    // 0x318000: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x318000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_318004:
    // 0x318004: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_318008:
    // 0x318008: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31800c:
    if (ctx->pc == 0x31800Cu) {
        ctx->pc = 0x31800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318008u;
        // 0x31800c: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318010u;
        goto label_318010;
    }
    ctx->pc = 0x318008u;
    {
        const bool branch_taken_0x318008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318008u;
        // 0x31800c: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318008) {
            ctx->pc = 0x31801Cu;
            goto label_31801c;
        }
    }
    ctx->pc = 0x318010u;
label_318010:
    // 0x318010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x318010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_318014:
    // 0x318014: 0x10000002  b           . + 4 + (0x2 << 2)
label_318018:
    if (ctx->pc == 0x318018u) {
        ctx->pc = 0x318018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318014u;
        // 0x318018: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31801Cu;
        goto label_31801c;
    }
    ctx->pc = 0x318014u;
    {
        const bool branch_taken_0x318014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318014u;
        // 0x318018: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318014) {
            ctx->pc = 0x318020u;
            goto label_318020;
        }
    }
    ctx->pc = 0x31801Cu;
label_31801c:
    // 0x31801c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x31801cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_318020:
    // 0x318020: 0x8fa30330  lw          $v1, 0x330($sp)
    ctx->pc = 0x318020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_318024:
    // 0x318024: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x318024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_318028:
    // 0x318028: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31802c:
    // 0x31802c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x31802cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_318030:
    // 0x318030: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x318030u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_318034:
    // 0x318034: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x318034u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_318038:
    // 0x318038: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x318038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31803c:
    // 0x31803c: 0x4c9021  addu        $s2, $v0, $t4
    ctx->pc = 0x31803cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_318040:
    // 0x318040: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x318040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_318044:
    // 0x318044: 0x4c8021  addu        $s0, $v0, $t4
    ctx->pc = 0x318044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_318048:
    // 0x318048: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x318048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31804c:
    // 0x31804c: 0x16c0004c  bnez        $s6, . + 4 + (0x4C << 2)
label_318050:
    if (ctx->pc == 0x318050u) {
        ctx->pc = 0x318050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31804Cu;
        // 0x318050: 0x4c8821  addu        $s1, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318054u;
        goto label_318054;
    }
    ctx->pc = 0x31804Cu;
    {
        const bool branch_taken_0x31804c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x318050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31804Cu;
        // 0x318050: 0x4c8821  addu        $s1, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31804c) {
            ctx->pc = 0x318180u;
            goto label_318180;
        }
    }
    ctx->pc = 0x318054u;
label_318054:
    // 0x318054: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x318054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318058:
    // 0x318058: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x318058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_31805c:
    // 0x31805c: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x31805cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_318060:
    // 0x318060: 0xe7a70300  swc1        $f7, 0x300($sp)
    ctx->pc = 0x318060u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_318064:
    // 0x318064: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x318064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318068:
    // 0x318068: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x318068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31806c:
    // 0x31806c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x31806cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_318070:
    // 0x318070: 0xe7a60304  swc1        $f6, 0x304($sp)
    ctx->pc = 0x318070u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
label_318074:
    // 0x318074: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x318074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_318078:
    // 0x318078: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x318078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31807c:
    // 0x31807c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x31807cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_318080:
    // 0x318080: 0xe7a50308  swc1        $f5, 0x308($sp)
    ctx->pc = 0x318080u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_318084:
    // 0x318084: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x318084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318088:
    // 0x318088: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x318088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31808c:
    // 0x31808c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31808cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_318090:
    // 0x318090: 0xe7a20310  swc1        $f2, 0x310($sp)
    ctx->pc = 0x318090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_318094:
    // 0x318094: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x318094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318098:
    // 0x318098: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x318098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31809c:
    // 0x31809c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31809cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3180a0:
    // 0x3180a0: 0xe7a40314  swc1        $f4, 0x314($sp)
    ctx->pc = 0x3180a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
label_3180a4:
    // 0x3180a4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3180a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3180a8:
    // 0x3180a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3180a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3180ac:
    // 0x3180ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3180acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3180b0:
    // 0x3180b0: 0xe7a10318  swc1        $f1, 0x318($sp)
    ctx->pc = 0x3180b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
label_3180b4:
    // 0x3180b4: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x3180b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3180b8:
    // 0x3180b8: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x3180b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3180bc:
    // 0x3180bc: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x3180bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_3180c0:
    // 0x3180c0: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3180c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3180c4:
    // 0x3180c4: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3180c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3180c8:
    // 0x3180c8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3180c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_3180cc:
    // 0x3180cc: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x3180ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_3180d0:
    // 0x3180d0: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3180d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3180d4:
    // 0x3180d4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3180d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_3180d8:
    // 0x3180d8: 0xe7a302c8  swc1        $f3, 0x2C8($sp)
    ctx->pc = 0x3180d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_3180dc:
    // 0x3180dc: 0xe7a202c4  swc1        $f2, 0x2C4($sp)
    ctx->pc = 0x3180dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_3180e0:
    // 0x3180e0: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x3180e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_3180e4:
    // 0x3180e4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3180e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3180e8:
    // 0x3180e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3180e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3180ec:
    // 0x3180ec: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3180ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3180f0:
    // 0x3180f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3180f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3180f4:
    // 0x3180f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3180f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3180f8:
    // 0x3180f8: 0x46000004  c1          0x4
    ctx->pc = 0x3180f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3180fc:
    // 0x3180fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3180fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318100:
    // 0x318100: 0x0  nop
    ctx->pc = 0x318100u;
    // NOP
label_318104:
    // 0x318104: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_318108:
    if (ctx->pc == 0x318108u) {
        ctx->pc = 0x318108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318104u;
        // 0x318108: 0xc7a402c0  lwc1        $f4, 0x2C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31810Cu;
        goto label_31810c;
    }
    ctx->pc = 0x318104u;
    {
        const bool branch_taken_0x318104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318104u;
        // 0x318108: 0xc7a402c0  lwc1        $f4, 0x2C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318104) {
            ctx->pc = 0x318110u;
            goto label_318110;
        }
    }
    ctx->pc = 0x31810Cu;
label_31810c:
    // 0x31810c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x31810cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_318110:
    // 0x318110: 0xc7a502c4  lwc1        $f5, 0x2C4($sp)
    ctx->pc = 0x318110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_318114:
    // 0x318114: 0xc7a602c8  lwc1        $f6, 0x2C8($sp)
    ctx->pc = 0x318114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_318118:
    // 0x318118: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x318118u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_31811c:
    // 0x31811c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x31811cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_318120:
    // 0x318120: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x318120u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_318124:
    // 0x318124: 0xe7a402c0  swc1        $f4, 0x2C0($sp)
    ctx->pc = 0x318124u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_318128:
    // 0x318128: 0xe7a502c4  swc1        $f5, 0x2C4($sp)
    ctx->pc = 0x318128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_31812c:
    // 0x31812c: 0xe7a602c8  swc1        $f6, 0x2C8($sp)
    ctx->pc = 0x31812cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_318130:
    // 0x318130: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x318130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318134:
    // 0x318134: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x318134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318138:
    // 0x318138: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x318138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31813c:
    // 0x31813c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31813cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318140:
    // 0x318140: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x318140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318144:
    // 0x318144: 0xe7a102f0  swc1        $f1, 0x2F0($sp)
    ctx->pc = 0x318144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_318148:
    // 0x318148: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x318148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31814c:
    // 0x31814c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31814cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_318150:
    // 0x318150: 0xe7a302f4  swc1        $f3, 0x2F4($sp)
    ctx->pc = 0x318150u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 756), bits); }
label_318154:
    // 0x318154: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x318154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318158:
    // 0x318158: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x318158u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31815c:
    // 0x31815c: 0xe7a202f8  swc1        $f2, 0x2F8($sp)
    ctx->pc = 0x31815cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_318160:
    // 0x318160: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x318160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_318164:
    // 0x318164: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x318164u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_318168:
    // 0x318168: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x318168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_31816c:
    // 0x31816c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x31816cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_318170:
    // 0x318170: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x318170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_318174:
    // 0x318174: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x318174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_318178:
    // 0x318178: 0x10000012  b           . + 4 + (0x12 << 2)
label_31817c:
    if (ctx->pc == 0x31817Cu) {
        ctx->pc = 0x31817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318178u;
        // 0x31817c: 0xe7a10320  swc1        $f1, 0x320($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318180u;
        goto label_318180;
    }
    ctx->pc = 0x318178u;
    {
        const bool branch_taken_0x318178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318178u;
        // 0x31817c: 0xe7a10320  swc1        $f1, 0x320($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318178) {
            ctx->pc = 0x3181C4u;
            goto label_3181c4;
        }
    }
    ctx->pc = 0x318180u;
label_318180:
    // 0x318180: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x318180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_318184:
    // 0x318184: 0x7faa0350  sq          $t2, 0x350($sp)
    ctx->pc = 0x318184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 10));
label_318188:
    // 0x318188: 0x7fab0360  sq          $t3, 0x360($sp)
    ctx->pc = 0x318188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 11));
label_31818c:
    // 0x31818c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_318190:
    // 0x318190: 0x7fac0370  sq          $t4, 0x370($sp)
    ctx->pc = 0x318190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 12));
label_318194:
    // 0x318194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x318194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_318198:
    // 0x318198: 0x7fad0380  sq          $t5, 0x380($sp)
    ctx->pc = 0x318198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 13));
label_31819c:
    // 0x31819c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31819cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3181a0:
    // 0x3181a0: 0x27a802c0  addiu       $t0, $sp, 0x2C0
    ctx->pc = 0x3181a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_3181a4:
    // 0x3181a4: 0xc0f152c  jal         func_3C54B0
label_3181a8:
    if (ctx->pc == 0x3181A8u) {
        ctx->pc = 0x3181A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181A4u;
        // 0x3181a8: 0x27a90320  addiu       $t1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3181ACu;
        goto label_3181ac;
    }
    ctx->pc = 0x3181A4u;
    SET_GPR_U32(ctx, 31, 0x3181ACu);
    ctx->pc = 0x3181A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3181A4u;
    // 0x3181a8: 0x27a90320  addiu       $t1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C54B0u, 0x3181A4u, 0x3181ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181ACu;
label_3181ac:
    // 0x3181ac: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x3181acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_3181b0:
    // 0x3181b0: 0x7baa0350  lq          $t2, 0x350($sp)
    ctx->pc = 0x3181b0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_3181b4:
    // 0x3181b4: 0x7bab0360  lq          $t3, 0x360($sp)
    ctx->pc = 0x3181b4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_3181b8:
    // 0x3181b8: 0x7bac0370  lq          $t4, 0x370($sp)
    ctx->pc = 0x3181b8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_3181bc:
    // 0x3181bc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3181c0:
    if (ctx->pc == 0x3181C0u) {
        ctx->pc = 0x3181C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181BCu;
        // 0x3181c0: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3181C4u;
        goto label_3181c4;
    }
    ctx->pc = 0x3181BCu;
    {
        const bool branch_taken_0x3181bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181BCu;
        // 0x3181c0: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181bc) {
            ctx->pc = 0x318234u;
            goto label_318234;
        }
    }
    ctx->pc = 0x3181C4u;
label_3181c4:
    // 0x3181c4: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x3181c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3181c8:
    // 0x3181c8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x3181c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3181cc:
    // 0x3181cc: 0x8fa40324  lw          $a0, 0x324($sp)
    ctx->pc = 0x3181ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_3181d0:
    // 0x3181d0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3181d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3181d4:
    // 0x3181d4: 0x8fa7032c  lw          $a3, 0x32C($sp)
    ctx->pc = 0x3181d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_3181d8:
    // 0x3181d8: 0xe7a00320  swc1        $f0, 0x320($sp)
    ctx->pc = 0x3181d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_3181dc:
    // 0x3181dc: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x3181dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3181e0:
    // 0x3181e0: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x3181e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3181e4:
    // 0x3181e4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3181e8:
    // 0x3181e8: 0xb3a302d3  sdl         $v1, 0x2D3($sp)
    ctx->pc = 0x3181e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3181ec:
    // 0x3181ec: 0xb7a302cc  sdr         $v1, 0x2CC($sp)
    ctx->pc = 0x3181ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 716); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3181f0:
    // 0x3181f0: 0xafa802d4  sw          $t0, 0x2D4($sp)
    ctx->pc = 0x3181f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 8));
label_3181f4:
    // 0x3181f4: 0x8fa30328  lw          $v1, 0x328($sp)
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_3181f8:
    // 0x3181f8: 0xc7ac0320  lwc1        $f12, 0x320($sp)
    ctx->pc = 0x3181f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3181fc:
    // 0x3181fc: 0x7faa0350  sq          $t2, 0x350($sp)
    ctx->pc = 0x3181fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 10));
label_318200:
    // 0x318200: 0x7fab0360  sq          $t3, 0x360($sp)
    ctx->pc = 0x318200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 11));
label_318204:
    // 0x318204: 0x7fac0370  sq          $t4, 0x370($sp)
    ctx->pc = 0x318204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 12));
label_318208:
    // 0x318208: 0x7fad0380  sq          $t5, 0x380($sp)
    ctx->pc = 0x318208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 13));
label_31820c:
    // 0x31820c: 0xafb502d8  sw          $s5, 0x2D8($sp)
    ctx->pc = 0x31820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 21));
label_318210:
    // 0x318210: 0xafb002dc  sw          $s0, 0x2DC($sp)
    ctx->pc = 0x318210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 16));
label_318214:
    // 0x318214: 0xafb102e0  sw          $s1, 0x2E0($sp)
    ctx->pc = 0x318214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 17));
label_318218:
    // 0x318218: 0x60f809  jalr        $v1
label_31821c:
    if (ctx->pc == 0x31821Cu) {
        ctx->pc = 0x31821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318218u;
        // 0x31821c: 0xafb202e4  sw          $s2, 0x2E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318220u;
        goto label_318220;
    }
    ctx->pc = 0x318218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x318220u);
        ctx->pc = 0x31821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318218u;
        // 0x31821c: 0xafb202e4  sw          $s2, 0x2E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318218u, 0x318220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x318220u;
label_318220:
    // 0x318220: 0x7baa0350  lq          $t2, 0x350($sp)
    ctx->pc = 0x318220u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_318224:
    // 0x318224: 0x7bab0360  lq          $t3, 0x360($sp)
    ctx->pc = 0x318224u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_318228:
    // 0x318228: 0x7bac0370  lq          $t4, 0x370($sp)
    ctx->pc = 0x318228u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_31822c:
    // 0x31822c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_318230:
    if (ctx->pc == 0x318230u) {
        ctx->pc = 0x318230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31822Cu;
        // 0x318230: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318234u;
        goto label_318234;
    }
    ctx->pc = 0x31822Cu;
    {
        const bool branch_taken_0x31822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31822Cu;
        // 0x318230: 0x7bad0380  lq          $t5, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31822c) {
            ctx->pc = 0x318278u;
            goto label_318278;
        }
    }
    ctx->pc = 0x318234u;
label_318234:
    // 0x318234: 0x97a202b0  lhu         $v0, 0x2B0($sp)
    ctx->pc = 0x318234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 688)));
label_318238:
    // 0x318238: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x318238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31823c:
    // 0x31823c: 0x97a402b2  lhu         $a0, 0x2B2($sp)
    ctx->pc = 0x31823cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 690)));
label_318240:
    // 0x318240: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x318240u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_318244:
    // 0x318244: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_318248:
    // 0x318248: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x318248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31824c:
    // 0x31824c: 0x5440ff6e  bnel        $v0, $zero, . + 4 + (-0x92 << 2)
label_318250:
    if (ctx->pc == 0x318250u) {
        ctx->pc = 0x318250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31824Cu;
        // 0x318250: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318254u;
        goto label_318254;
    }
    ctx->pc = 0x31824Cu;
    {
        const bool branch_taken_0x31824c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31824c) {
            ctx->pc = 0x318250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31824Cu;
            // 0x318250: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318008;
        }
    }
    ctx->pc = 0x318254u;
label_318254:
    // 0x318254: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_318258:
    // 0x318258: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x318258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31825c:
    // 0x31825c: 0x5440feee  bnel        $v0, $zero, . + 4 + (-0x112 << 2)
label_318260:
    if (ctx->pc == 0x318260u) {
        ctx->pc = 0x318260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31825Cu;
        // 0x318260: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318264u;
        goto label_318264;
    }
    ctx->pc = 0x31825Cu;
    {
        const bool branch_taken_0x31825c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31825c) {
            ctx->pc = 0x318260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31825Cu;
            // 0x318260: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317e18;
        }
    }
    ctx->pc = 0x318264u;
label_318264:
    // 0x318264: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_318268:
    // 0x318268: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x318268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_31826c:
    // 0x31826c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x31826cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_318270:
    // 0x318270: 0x5440fe07  bnel        $v0, $zero, . + 4 + (-0x1F9 << 2)
label_318274:
    if (ctx->pc == 0x318274u) {
        ctx->pc = 0x318274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318270u;
        // 0x318274: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318278u;
        goto label_318278;
    }
    ctx->pc = 0x318270u;
    {
        const bool branch_taken_0x318270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318270) {
            ctx->pc = 0x318274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318270u;
            // 0x318274: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317a90;
        }
    }
    ctx->pc = 0x318278u;
label_318278:
    // 0x318278: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x318278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_31827c:
    // 0x31827c: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x31827cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_318280:
    // 0x318280: 0x7bb20400  lq          $s2, 0x400($sp)
    ctx->pc = 0x318280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
label_318284:
    // 0x318284: 0x7bb303f0  lq          $s3, 0x3F0($sp)
    ctx->pc = 0x318284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_318288:
    // 0x318288: 0x7bb403e0  lq          $s4, 0x3E0($sp)
    ctx->pc = 0x318288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_31828c:
    // 0x31828c: 0x7bb503d0  lq          $s5, 0x3D0($sp)
    ctx->pc = 0x31828cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_318290:
    // 0x318290: 0x7bb603c0  lq          $s6, 0x3C0($sp)
    ctx->pc = 0x318290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_318294:
    // 0x318294: 0x7bb703b0  lq          $s7, 0x3B0($sp)
    ctx->pc = 0x318294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_318298:
    // 0x318298: 0x7bbe03a0  lq          $fp, 0x3A0($sp)
    ctx->pc = 0x318298u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_31829c:
    // 0x31829c: 0xdfbf0390  ld          $ra, 0x390($sp)
    ctx->pc = 0x31829cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 912)));
label_3182a0:
    // 0x3182a0: 0xc7b60440  lwc1        $f22, 0x440($sp)
    ctx->pc = 0x3182a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3182a4:
    // 0x3182a4: 0xc7b50438  lwc1        $f21, 0x438($sp)
    ctx->pc = 0x3182a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3182a8:
    // 0x3182a8: 0xc7b40430  lwc1        $f20, 0x430($sp)
    ctx->pc = 0x3182a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3182ac:
    // 0x3182ac: 0x3e00008  jr          $ra
label_3182b0:
    if (ctx->pc == 0x3182B0u) {
        ctx->pc = 0x3182B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182ACu;
        // 0x3182b0: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3182B4u;
        goto label_3182b4;
    }
    ctx->pc = 0x3182ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3182B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182ACu;
        // 0x3182b0: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3182ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3182B4u;
label_3182b4:
    // 0x3182b4: 0x0  nop
    ctx->pc = 0x3182b4u;
    // NOP
    ctx->pc = 0x3182b8u;
}
