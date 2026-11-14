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

// Function: sub_003A8A90
// Address: 0x3a8a90 - 0x3a9240
void sub_003A8A90_0x3a8a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8A90_0x3a8a90");
#endif

    switch (ctx->pc) {
        case 0x3a8a90u: goto label_3a8a90;
        case 0x3a8a94u: goto label_3a8a94;
        case 0x3a8a98u: goto label_3a8a98;
        case 0x3a8a9cu: goto label_3a8a9c;
        case 0x3a8aa0u: goto label_3a8aa0;
        case 0x3a8aa4u: goto label_3a8aa4;
        case 0x3a8aa8u: goto label_3a8aa8;
        case 0x3a8aacu: goto label_3a8aac;
        case 0x3a8ab0u: goto label_3a8ab0;
        case 0x3a8ab4u: goto label_3a8ab4;
        case 0x3a8ab8u: goto label_3a8ab8;
        case 0x3a8abcu: goto label_3a8abc;
        case 0x3a8ac0u: goto label_3a8ac0;
        case 0x3a8ac4u: goto label_3a8ac4;
        case 0x3a8ac8u: goto label_3a8ac8;
        case 0x3a8accu: goto label_3a8acc;
        case 0x3a8ad0u: goto label_3a8ad0;
        case 0x3a8ad4u: goto label_3a8ad4;
        case 0x3a8ad8u: goto label_3a8ad8;
        case 0x3a8adcu: goto label_3a8adc;
        case 0x3a8ae0u: goto label_3a8ae0;
        case 0x3a8ae4u: goto label_3a8ae4;
        case 0x3a8ae8u: goto label_3a8ae8;
        case 0x3a8aecu: goto label_3a8aec;
        case 0x3a8af0u: goto label_3a8af0;
        case 0x3a8af4u: goto label_3a8af4;
        case 0x3a8af8u: goto label_3a8af8;
        case 0x3a8afcu: goto label_3a8afc;
        case 0x3a8b00u: goto label_3a8b00;
        case 0x3a8b04u: goto label_3a8b04;
        case 0x3a8b08u: goto label_3a8b08;
        case 0x3a8b0cu: goto label_3a8b0c;
        case 0x3a8b10u: goto label_3a8b10;
        case 0x3a8b14u: goto label_3a8b14;
        case 0x3a8b18u: goto label_3a8b18;
        case 0x3a8b1cu: goto label_3a8b1c;
        case 0x3a8b20u: goto label_3a8b20;
        case 0x3a8b24u: goto label_3a8b24;
        case 0x3a8b28u: goto label_3a8b28;
        case 0x3a8b2cu: goto label_3a8b2c;
        case 0x3a8b30u: goto label_3a8b30;
        case 0x3a8b34u: goto label_3a8b34;
        case 0x3a8b38u: goto label_3a8b38;
        case 0x3a8b3cu: goto label_3a8b3c;
        case 0x3a8b40u: goto label_3a8b40;
        case 0x3a8b44u: goto label_3a8b44;
        case 0x3a8b48u: goto label_3a8b48;
        case 0x3a8b4cu: goto label_3a8b4c;
        case 0x3a8b50u: goto label_3a8b50;
        case 0x3a8b54u: goto label_3a8b54;
        case 0x3a8b58u: goto label_3a8b58;
        case 0x3a8b5cu: goto label_3a8b5c;
        case 0x3a8b60u: goto label_3a8b60;
        case 0x3a8b64u: goto label_3a8b64;
        case 0x3a8b68u: goto label_3a8b68;
        case 0x3a8b6cu: goto label_3a8b6c;
        case 0x3a8b70u: goto label_3a8b70;
        case 0x3a8b74u: goto label_3a8b74;
        case 0x3a8b78u: goto label_3a8b78;
        case 0x3a8b7cu: goto label_3a8b7c;
        case 0x3a8b80u: goto label_3a8b80;
        case 0x3a8b84u: goto label_3a8b84;
        case 0x3a8b88u: goto label_3a8b88;
        case 0x3a8b8cu: goto label_3a8b8c;
        case 0x3a8b90u: goto label_3a8b90;
        case 0x3a8b94u: goto label_3a8b94;
        case 0x3a8b98u: goto label_3a8b98;
        case 0x3a8b9cu: goto label_3a8b9c;
        case 0x3a8ba0u: goto label_3a8ba0;
        case 0x3a8ba4u: goto label_3a8ba4;
        case 0x3a8ba8u: goto label_3a8ba8;
        case 0x3a8bacu: goto label_3a8bac;
        case 0x3a8bb0u: goto label_3a8bb0;
        case 0x3a8bb4u: goto label_3a8bb4;
        case 0x3a8bb8u: goto label_3a8bb8;
        case 0x3a8bbcu: goto label_3a8bbc;
        case 0x3a8bc0u: goto label_3a8bc0;
        case 0x3a8bc4u: goto label_3a8bc4;
        case 0x3a8bc8u: goto label_3a8bc8;
        case 0x3a8bccu: goto label_3a8bcc;
        case 0x3a8bd0u: goto label_3a8bd0;
        case 0x3a8bd4u: goto label_3a8bd4;
        case 0x3a8bd8u: goto label_3a8bd8;
        case 0x3a8bdcu: goto label_3a8bdc;
        case 0x3a8be0u: goto label_3a8be0;
        case 0x3a8be4u: goto label_3a8be4;
        case 0x3a8be8u: goto label_3a8be8;
        case 0x3a8becu: goto label_3a8bec;
        case 0x3a8bf0u: goto label_3a8bf0;
        case 0x3a8bf4u: goto label_3a8bf4;
        case 0x3a8bf8u: goto label_3a8bf8;
        case 0x3a8bfcu: goto label_3a8bfc;
        case 0x3a8c00u: goto label_3a8c00;
        case 0x3a8c04u: goto label_3a8c04;
        case 0x3a8c08u: goto label_3a8c08;
        case 0x3a8c0cu: goto label_3a8c0c;
        case 0x3a8c10u: goto label_3a8c10;
        case 0x3a8c14u: goto label_3a8c14;
        case 0x3a8c18u: goto label_3a8c18;
        case 0x3a8c1cu: goto label_3a8c1c;
        case 0x3a8c20u: goto label_3a8c20;
        case 0x3a8c24u: goto label_3a8c24;
        case 0x3a8c28u: goto label_3a8c28;
        case 0x3a8c2cu: goto label_3a8c2c;
        case 0x3a8c30u: goto label_3a8c30;
        case 0x3a8c34u: goto label_3a8c34;
        case 0x3a8c38u: goto label_3a8c38;
        case 0x3a8c3cu: goto label_3a8c3c;
        case 0x3a8c40u: goto label_3a8c40;
        case 0x3a8c44u: goto label_3a8c44;
        case 0x3a8c48u: goto label_3a8c48;
        case 0x3a8c4cu: goto label_3a8c4c;
        case 0x3a8c50u: goto label_3a8c50;
        case 0x3a8c54u: goto label_3a8c54;
        case 0x3a8c58u: goto label_3a8c58;
        case 0x3a8c5cu: goto label_3a8c5c;
        case 0x3a8c60u: goto label_3a8c60;
        case 0x3a8c64u: goto label_3a8c64;
        case 0x3a8c68u: goto label_3a8c68;
        case 0x3a8c6cu: goto label_3a8c6c;
        case 0x3a8c70u: goto label_3a8c70;
        case 0x3a8c74u: goto label_3a8c74;
        case 0x3a8c78u: goto label_3a8c78;
        case 0x3a8c7cu: goto label_3a8c7c;
        case 0x3a8c80u: goto label_3a8c80;
        case 0x3a8c84u: goto label_3a8c84;
        case 0x3a8c88u: goto label_3a8c88;
        case 0x3a8c8cu: goto label_3a8c8c;
        case 0x3a8c90u: goto label_3a8c90;
        case 0x3a8c94u: goto label_3a8c94;
        case 0x3a8c98u: goto label_3a8c98;
        case 0x3a8c9cu: goto label_3a8c9c;
        case 0x3a8ca0u: goto label_3a8ca0;
        case 0x3a8ca4u: goto label_3a8ca4;
        case 0x3a8ca8u: goto label_3a8ca8;
        case 0x3a8cacu: goto label_3a8cac;
        case 0x3a8cb0u: goto label_3a8cb0;
        case 0x3a8cb4u: goto label_3a8cb4;
        case 0x3a8cb8u: goto label_3a8cb8;
        case 0x3a8cbcu: goto label_3a8cbc;
        case 0x3a8cc0u: goto label_3a8cc0;
        case 0x3a8cc4u: goto label_3a8cc4;
        case 0x3a8cc8u: goto label_3a8cc8;
        case 0x3a8cccu: goto label_3a8ccc;
        case 0x3a8cd0u: goto label_3a8cd0;
        case 0x3a8cd4u: goto label_3a8cd4;
        case 0x3a8cd8u: goto label_3a8cd8;
        case 0x3a8cdcu: goto label_3a8cdc;
        case 0x3a8ce0u: goto label_3a8ce0;
        case 0x3a8ce4u: goto label_3a8ce4;
        case 0x3a8ce8u: goto label_3a8ce8;
        case 0x3a8cecu: goto label_3a8cec;
        case 0x3a8cf0u: goto label_3a8cf0;
        case 0x3a8cf4u: goto label_3a8cf4;
        case 0x3a8cf8u: goto label_3a8cf8;
        case 0x3a8cfcu: goto label_3a8cfc;
        case 0x3a8d00u: goto label_3a8d00;
        case 0x3a8d04u: goto label_3a8d04;
        case 0x3a8d08u: goto label_3a8d08;
        case 0x3a8d0cu: goto label_3a8d0c;
        case 0x3a8d10u: goto label_3a8d10;
        case 0x3a8d14u: goto label_3a8d14;
        case 0x3a8d18u: goto label_3a8d18;
        case 0x3a8d1cu: goto label_3a8d1c;
        case 0x3a8d20u: goto label_3a8d20;
        case 0x3a8d24u: goto label_3a8d24;
        case 0x3a8d28u: goto label_3a8d28;
        case 0x3a8d2cu: goto label_3a8d2c;
        case 0x3a8d30u: goto label_3a8d30;
        case 0x3a8d34u: goto label_3a8d34;
        case 0x3a8d38u: goto label_3a8d38;
        case 0x3a8d3cu: goto label_3a8d3c;
        case 0x3a8d40u: goto label_3a8d40;
        case 0x3a8d44u: goto label_3a8d44;
        case 0x3a8d48u: goto label_3a8d48;
        case 0x3a8d4cu: goto label_3a8d4c;
        case 0x3a8d50u: goto label_3a8d50;
        case 0x3a8d54u: goto label_3a8d54;
        case 0x3a8d58u: goto label_3a8d58;
        case 0x3a8d5cu: goto label_3a8d5c;
        case 0x3a8d60u: goto label_3a8d60;
        case 0x3a8d64u: goto label_3a8d64;
        case 0x3a8d68u: goto label_3a8d68;
        case 0x3a8d6cu: goto label_3a8d6c;
        case 0x3a8d70u: goto label_3a8d70;
        case 0x3a8d74u: goto label_3a8d74;
        case 0x3a8d78u: goto label_3a8d78;
        case 0x3a8d7cu: goto label_3a8d7c;
        case 0x3a8d80u: goto label_3a8d80;
        case 0x3a8d84u: goto label_3a8d84;
        case 0x3a8d88u: goto label_3a8d88;
        case 0x3a8d8cu: goto label_3a8d8c;
        case 0x3a8d90u: goto label_3a8d90;
        case 0x3a8d94u: goto label_3a8d94;
        case 0x3a8d98u: goto label_3a8d98;
        case 0x3a8d9cu: goto label_3a8d9c;
        case 0x3a8da0u: goto label_3a8da0;
        case 0x3a8da4u: goto label_3a8da4;
        case 0x3a8da8u: goto label_3a8da8;
        case 0x3a8dacu: goto label_3a8dac;
        case 0x3a8db0u: goto label_3a8db0;
        case 0x3a8db4u: goto label_3a8db4;
        case 0x3a8db8u: goto label_3a8db8;
        case 0x3a8dbcu: goto label_3a8dbc;
        case 0x3a8dc0u: goto label_3a8dc0;
        case 0x3a8dc4u: goto label_3a8dc4;
        case 0x3a8dc8u: goto label_3a8dc8;
        case 0x3a8dccu: goto label_3a8dcc;
        case 0x3a8dd0u: goto label_3a8dd0;
        case 0x3a8dd4u: goto label_3a8dd4;
        case 0x3a8dd8u: goto label_3a8dd8;
        case 0x3a8ddcu: goto label_3a8ddc;
        case 0x3a8de0u: goto label_3a8de0;
        case 0x3a8de4u: goto label_3a8de4;
        case 0x3a8de8u: goto label_3a8de8;
        case 0x3a8decu: goto label_3a8dec;
        case 0x3a8df0u: goto label_3a8df0;
        case 0x3a8df4u: goto label_3a8df4;
        case 0x3a8df8u: goto label_3a8df8;
        case 0x3a8dfcu: goto label_3a8dfc;
        case 0x3a8e00u: goto label_3a8e00;
        case 0x3a8e04u: goto label_3a8e04;
        case 0x3a8e08u: goto label_3a8e08;
        case 0x3a8e0cu: goto label_3a8e0c;
        case 0x3a8e10u: goto label_3a8e10;
        case 0x3a8e14u: goto label_3a8e14;
        case 0x3a8e18u: goto label_3a8e18;
        case 0x3a8e1cu: goto label_3a8e1c;
        case 0x3a8e20u: goto label_3a8e20;
        case 0x3a8e24u: goto label_3a8e24;
        case 0x3a8e28u: goto label_3a8e28;
        case 0x3a8e2cu: goto label_3a8e2c;
        case 0x3a8e30u: goto label_3a8e30;
        case 0x3a8e34u: goto label_3a8e34;
        case 0x3a8e38u: goto label_3a8e38;
        case 0x3a8e3cu: goto label_3a8e3c;
        case 0x3a8e40u: goto label_3a8e40;
        case 0x3a8e44u: goto label_3a8e44;
        case 0x3a8e48u: goto label_3a8e48;
        case 0x3a8e4cu: goto label_3a8e4c;
        case 0x3a8e50u: goto label_3a8e50;
        case 0x3a8e54u: goto label_3a8e54;
        case 0x3a8e58u: goto label_3a8e58;
        case 0x3a8e5cu: goto label_3a8e5c;
        case 0x3a8e60u: goto label_3a8e60;
        case 0x3a8e64u: goto label_3a8e64;
        case 0x3a8e68u: goto label_3a8e68;
        case 0x3a8e6cu: goto label_3a8e6c;
        case 0x3a8e70u: goto label_3a8e70;
        case 0x3a8e74u: goto label_3a8e74;
        case 0x3a8e78u: goto label_3a8e78;
        case 0x3a8e7cu: goto label_3a8e7c;
        case 0x3a8e80u: goto label_3a8e80;
        case 0x3a8e84u: goto label_3a8e84;
        case 0x3a8e88u: goto label_3a8e88;
        case 0x3a8e8cu: goto label_3a8e8c;
        case 0x3a8e90u: goto label_3a8e90;
        case 0x3a8e94u: goto label_3a8e94;
        case 0x3a8e98u: goto label_3a8e98;
        case 0x3a8e9cu: goto label_3a8e9c;
        case 0x3a8ea0u: goto label_3a8ea0;
        case 0x3a8ea4u: goto label_3a8ea4;
        case 0x3a8ea8u: goto label_3a8ea8;
        case 0x3a8eacu: goto label_3a8eac;
        case 0x3a8eb0u: goto label_3a8eb0;
        case 0x3a8eb4u: goto label_3a8eb4;
        case 0x3a8eb8u: goto label_3a8eb8;
        case 0x3a8ebcu: goto label_3a8ebc;
        case 0x3a8ec0u: goto label_3a8ec0;
        case 0x3a8ec4u: goto label_3a8ec4;
        case 0x3a8ec8u: goto label_3a8ec8;
        case 0x3a8eccu: goto label_3a8ecc;
        case 0x3a8ed0u: goto label_3a8ed0;
        case 0x3a8ed4u: goto label_3a8ed4;
        case 0x3a8ed8u: goto label_3a8ed8;
        case 0x3a8edcu: goto label_3a8edc;
        case 0x3a8ee0u: goto label_3a8ee0;
        case 0x3a8ee4u: goto label_3a8ee4;
        case 0x3a8ee8u: goto label_3a8ee8;
        case 0x3a8eecu: goto label_3a8eec;
        case 0x3a8ef0u: goto label_3a8ef0;
        case 0x3a8ef4u: goto label_3a8ef4;
        case 0x3a8ef8u: goto label_3a8ef8;
        case 0x3a8efcu: goto label_3a8efc;
        case 0x3a8f00u: goto label_3a8f00;
        case 0x3a8f04u: goto label_3a8f04;
        case 0x3a8f08u: goto label_3a8f08;
        case 0x3a8f0cu: goto label_3a8f0c;
        case 0x3a8f10u: goto label_3a8f10;
        case 0x3a8f14u: goto label_3a8f14;
        case 0x3a8f18u: goto label_3a8f18;
        case 0x3a8f1cu: goto label_3a8f1c;
        case 0x3a8f20u: goto label_3a8f20;
        case 0x3a8f24u: goto label_3a8f24;
        case 0x3a8f28u: goto label_3a8f28;
        case 0x3a8f2cu: goto label_3a8f2c;
        case 0x3a8f30u: goto label_3a8f30;
        case 0x3a8f34u: goto label_3a8f34;
        case 0x3a8f38u: goto label_3a8f38;
        case 0x3a8f3cu: goto label_3a8f3c;
        case 0x3a8f40u: goto label_3a8f40;
        case 0x3a8f44u: goto label_3a8f44;
        case 0x3a8f48u: goto label_3a8f48;
        case 0x3a8f4cu: goto label_3a8f4c;
        case 0x3a8f50u: goto label_3a8f50;
        case 0x3a8f54u: goto label_3a8f54;
        case 0x3a8f58u: goto label_3a8f58;
        case 0x3a8f5cu: goto label_3a8f5c;
        case 0x3a8f60u: goto label_3a8f60;
        case 0x3a8f64u: goto label_3a8f64;
        case 0x3a8f68u: goto label_3a8f68;
        case 0x3a8f6cu: goto label_3a8f6c;
        case 0x3a8f70u: goto label_3a8f70;
        case 0x3a8f74u: goto label_3a8f74;
        case 0x3a8f78u: goto label_3a8f78;
        case 0x3a8f7cu: goto label_3a8f7c;
        case 0x3a8f80u: goto label_3a8f80;
        case 0x3a8f84u: goto label_3a8f84;
        case 0x3a8f88u: goto label_3a8f88;
        case 0x3a8f8cu: goto label_3a8f8c;
        case 0x3a8f90u: goto label_3a8f90;
        case 0x3a8f94u: goto label_3a8f94;
        case 0x3a8f98u: goto label_3a8f98;
        case 0x3a8f9cu: goto label_3a8f9c;
        case 0x3a8fa0u: goto label_3a8fa0;
        case 0x3a8fa4u: goto label_3a8fa4;
        case 0x3a8fa8u: goto label_3a8fa8;
        case 0x3a8facu: goto label_3a8fac;
        case 0x3a8fb0u: goto label_3a8fb0;
        case 0x3a8fb4u: goto label_3a8fb4;
        case 0x3a8fb8u: goto label_3a8fb8;
        case 0x3a8fbcu: goto label_3a8fbc;
        case 0x3a8fc0u: goto label_3a8fc0;
        case 0x3a8fc4u: goto label_3a8fc4;
        case 0x3a8fc8u: goto label_3a8fc8;
        case 0x3a8fccu: goto label_3a8fcc;
        case 0x3a8fd0u: goto label_3a8fd0;
        case 0x3a8fd4u: goto label_3a8fd4;
        case 0x3a8fd8u: goto label_3a8fd8;
        case 0x3a8fdcu: goto label_3a8fdc;
        case 0x3a8fe0u: goto label_3a8fe0;
        case 0x3a8fe4u: goto label_3a8fe4;
        case 0x3a8fe8u: goto label_3a8fe8;
        case 0x3a8fecu: goto label_3a8fec;
        case 0x3a8ff0u: goto label_3a8ff0;
        case 0x3a8ff4u: goto label_3a8ff4;
        case 0x3a8ff8u: goto label_3a8ff8;
        case 0x3a8ffcu: goto label_3a8ffc;
        case 0x3a9000u: goto label_3a9000;
        case 0x3a9004u: goto label_3a9004;
        case 0x3a9008u: goto label_3a9008;
        case 0x3a900cu: goto label_3a900c;
        case 0x3a9010u: goto label_3a9010;
        case 0x3a9014u: goto label_3a9014;
        case 0x3a9018u: goto label_3a9018;
        case 0x3a901cu: goto label_3a901c;
        case 0x3a9020u: goto label_3a9020;
        case 0x3a9024u: goto label_3a9024;
        case 0x3a9028u: goto label_3a9028;
        case 0x3a902cu: goto label_3a902c;
        case 0x3a9030u: goto label_3a9030;
        case 0x3a9034u: goto label_3a9034;
        case 0x3a9038u: goto label_3a9038;
        case 0x3a903cu: goto label_3a903c;
        case 0x3a9040u: goto label_3a9040;
        case 0x3a9044u: goto label_3a9044;
        case 0x3a9048u: goto label_3a9048;
        case 0x3a904cu: goto label_3a904c;
        case 0x3a9050u: goto label_3a9050;
        case 0x3a9054u: goto label_3a9054;
        case 0x3a9058u: goto label_3a9058;
        case 0x3a905cu: goto label_3a905c;
        case 0x3a9060u: goto label_3a9060;
        case 0x3a9064u: goto label_3a9064;
        case 0x3a9068u: goto label_3a9068;
        case 0x3a906cu: goto label_3a906c;
        case 0x3a9070u: goto label_3a9070;
        case 0x3a9074u: goto label_3a9074;
        case 0x3a9078u: goto label_3a9078;
        case 0x3a907cu: goto label_3a907c;
        case 0x3a9080u: goto label_3a9080;
        case 0x3a9084u: goto label_3a9084;
        case 0x3a9088u: goto label_3a9088;
        case 0x3a908cu: goto label_3a908c;
        case 0x3a9090u: goto label_3a9090;
        case 0x3a9094u: goto label_3a9094;
        case 0x3a9098u: goto label_3a9098;
        case 0x3a909cu: goto label_3a909c;
        case 0x3a90a0u: goto label_3a90a0;
        case 0x3a90a4u: goto label_3a90a4;
        case 0x3a90a8u: goto label_3a90a8;
        case 0x3a90acu: goto label_3a90ac;
        case 0x3a90b0u: goto label_3a90b0;
        case 0x3a90b4u: goto label_3a90b4;
        case 0x3a90b8u: goto label_3a90b8;
        case 0x3a90bcu: goto label_3a90bc;
        case 0x3a90c0u: goto label_3a90c0;
        case 0x3a90c4u: goto label_3a90c4;
        case 0x3a90c8u: goto label_3a90c8;
        case 0x3a90ccu: goto label_3a90cc;
        case 0x3a90d0u: goto label_3a90d0;
        case 0x3a90d4u: goto label_3a90d4;
        case 0x3a90d8u: goto label_3a90d8;
        case 0x3a90dcu: goto label_3a90dc;
        case 0x3a90e0u: goto label_3a90e0;
        case 0x3a90e4u: goto label_3a90e4;
        case 0x3a90e8u: goto label_3a90e8;
        case 0x3a90ecu: goto label_3a90ec;
        case 0x3a90f0u: goto label_3a90f0;
        case 0x3a90f4u: goto label_3a90f4;
        case 0x3a90f8u: goto label_3a90f8;
        case 0x3a90fcu: goto label_3a90fc;
        case 0x3a9100u: goto label_3a9100;
        case 0x3a9104u: goto label_3a9104;
        case 0x3a9108u: goto label_3a9108;
        case 0x3a910cu: goto label_3a910c;
        case 0x3a9110u: goto label_3a9110;
        case 0x3a9114u: goto label_3a9114;
        case 0x3a9118u: goto label_3a9118;
        case 0x3a911cu: goto label_3a911c;
        case 0x3a9120u: goto label_3a9120;
        case 0x3a9124u: goto label_3a9124;
        case 0x3a9128u: goto label_3a9128;
        case 0x3a912cu: goto label_3a912c;
        case 0x3a9130u: goto label_3a9130;
        case 0x3a9134u: goto label_3a9134;
        case 0x3a9138u: goto label_3a9138;
        case 0x3a913cu: goto label_3a913c;
        case 0x3a9140u: goto label_3a9140;
        case 0x3a9144u: goto label_3a9144;
        case 0x3a9148u: goto label_3a9148;
        case 0x3a914cu: goto label_3a914c;
        case 0x3a9150u: goto label_3a9150;
        case 0x3a9154u: goto label_3a9154;
        case 0x3a9158u: goto label_3a9158;
        case 0x3a915cu: goto label_3a915c;
        case 0x3a9160u: goto label_3a9160;
        case 0x3a9164u: goto label_3a9164;
        case 0x3a9168u: goto label_3a9168;
        case 0x3a916cu: goto label_3a916c;
        case 0x3a9170u: goto label_3a9170;
        case 0x3a9174u: goto label_3a9174;
        case 0x3a9178u: goto label_3a9178;
        case 0x3a917cu: goto label_3a917c;
        case 0x3a9180u: goto label_3a9180;
        case 0x3a9184u: goto label_3a9184;
        case 0x3a9188u: goto label_3a9188;
        case 0x3a918cu: goto label_3a918c;
        case 0x3a9190u: goto label_3a9190;
        case 0x3a9194u: goto label_3a9194;
        case 0x3a9198u: goto label_3a9198;
        case 0x3a919cu: goto label_3a919c;
        case 0x3a91a0u: goto label_3a91a0;
        case 0x3a91a4u: goto label_3a91a4;
        case 0x3a91a8u: goto label_3a91a8;
        case 0x3a91acu: goto label_3a91ac;
        case 0x3a91b0u: goto label_3a91b0;
        case 0x3a91b4u: goto label_3a91b4;
        case 0x3a91b8u: goto label_3a91b8;
        case 0x3a91bcu: goto label_3a91bc;
        case 0x3a91c0u: goto label_3a91c0;
        case 0x3a91c4u: goto label_3a91c4;
        case 0x3a91c8u: goto label_3a91c8;
        case 0x3a91ccu: goto label_3a91cc;
        case 0x3a91d0u: goto label_3a91d0;
        case 0x3a91d4u: goto label_3a91d4;
        case 0x3a91d8u: goto label_3a91d8;
        case 0x3a91dcu: goto label_3a91dc;
        case 0x3a91e0u: goto label_3a91e0;
        case 0x3a91e4u: goto label_3a91e4;
        case 0x3a91e8u: goto label_3a91e8;
        case 0x3a91ecu: goto label_3a91ec;
        case 0x3a91f0u: goto label_3a91f0;
        case 0x3a91f4u: goto label_3a91f4;
        case 0x3a91f8u: goto label_3a91f8;
        case 0x3a91fcu: goto label_3a91fc;
        case 0x3a9200u: goto label_3a9200;
        case 0x3a9204u: goto label_3a9204;
        case 0x3a9208u: goto label_3a9208;
        case 0x3a920cu: goto label_3a920c;
        case 0x3a9210u: goto label_3a9210;
        case 0x3a9214u: goto label_3a9214;
        case 0x3a9218u: goto label_3a9218;
        case 0x3a921cu: goto label_3a921c;
        case 0x3a9220u: goto label_3a9220;
        case 0x3a9224u: goto label_3a9224;
        case 0x3a9228u: goto label_3a9228;
        case 0x3a922cu: goto label_3a922c;
        case 0x3a9230u: goto label_3a9230;
        case 0x3a9234u: goto label_3a9234;
        case 0x3a9238u: goto label_3a9238;
        case 0x3a923cu: goto label_3a923c;
        default: break;
    }

    ctx->pc = 0x3a8a90u;

label_3a8a90:
    // 0x3a8a90: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x3a8a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_3a8a94:
    // 0x3a8a94: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x3a8a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_3a8a98:
    // 0x3a8a98: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x3a8a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_3a8a9c:
    // 0x3a8a9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a8a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a8aa0:
    // 0x3a8aa0: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x3a8aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_3a8aa4:
    // 0x3a8aa4: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x3a8aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_3a8aa8:
    // 0x3a8aa8: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x3a8aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_3a8aac:
    // 0x3a8aac: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x3a8aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_3a8ab0:
    // 0x3a8ab0: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x3a8ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
label_3a8ab4:
    // 0x3a8ab4: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x3a8ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
label_3a8ab8:
    // 0x3a8ab8: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x3a8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
label_3a8abc:
    // 0x3a8abc: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x3a8abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_3a8ac0:
    // 0x3a8ac0: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x3a8ac0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3a8ac4:
    // 0x3a8ac4: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x3a8ac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_3a8ac8:
    // 0x3a8ac8: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x3a8ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3a8acc:
    // 0x3a8acc: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x3a8accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_3a8ad0:
    // 0x3a8ad0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x3a8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_3a8ad4:
    // 0x3a8ad4: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x3a8ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
label_3a8ad8:
    // 0x3a8ad8: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x3a8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
label_3a8adc:
    // 0x3a8adc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_3a8ae0:
    if (ctx->pc == 0x3A8AE0u) {
        ctx->pc = 0x3A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ADCu;
        // 0x3a8ae0: 0xafa800c0  sw          $t0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AE4u;
        goto label_3a8ae4;
    }
    ctx->pc = 0x3A8ADCu;
    {
        const bool branch_taken_0x3a8adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ADCu;
        // 0x3a8ae0: 0xafa800c0  sw          $t0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8adc) {
            ctx->pc = 0x3A8B60u;
            goto label_3a8b60;
        }
    }
    ctx->pc = 0x3A8AE4u;
label_3a8ae4:
    // 0x3a8ae4: 0xc0e3992  jal         func_38E648
label_3a8ae8:
    if (ctx->pc == 0x3A8AE8u) {
        ctx->pc = 0x3A8AECu;
        goto label_3a8aec;
    }
    ctx->pc = 0x3A8AE4u;
    SET_GPR_U32(ctx, 31, 0x3A8AECu);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x3A8AE4u, 0x3A8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8AECu;
label_3a8aec:
    // 0x3a8aec: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x3a8aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_3a8af0:
    // 0x3a8af0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3a8af4:
    if (ctx->pc == 0x3A8AF4u) {
        ctx->pc = 0x3A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AF0u;
        // 0x3a8af4: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8AF8u;
        goto label_3a8af8;
    }
    ctx->pc = 0x3A8AF0u;
    {
        const bool branch_taken_0x3a8af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AF0u;
        // 0x3a8af4: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8af0) {
            ctx->pc = 0x3A8B00u;
            goto label_3a8b00;
        }
    }
    ctx->pc = 0x3A8AF8u;
label_3a8af8:
    // 0x3a8af8: 0xc0e39e0  jal         func_38E780
label_3a8afc:
    if (ctx->pc == 0x3A8AFCu) {
        ctx->pc = 0x3A8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AF8u;
        // 0x3a8afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B00u;
        goto label_3a8b00;
    }
    ctx->pc = 0x3A8AF8u;
    SET_GPR_U32(ctx, 31, 0x3A8B00u);
    ctx->pc = 0x3A8AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8AF8u;
    // 0x3a8afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x3A8AF8u, 0x3A8B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B00u;
label_3a8b00:
    // 0x3a8b00: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x3a8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3a8b04:
    // 0x3a8b04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a8b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a8b08:
    // 0x3a8b08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3a8b0c:
    if (ctx->pc == 0x3A8B0Cu) {
        ctx->pc = 0x3A8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B08u;
        // 0x3a8b0c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B10u;
        goto label_3a8b10;
    }
    ctx->pc = 0x3A8B08u;
    {
        const bool branch_taken_0x3a8b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B08u;
        // 0x3a8b0c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b08) {
            ctx->pc = 0x3A8B40u;
            goto label_3a8b40;
        }
    }
    ctx->pc = 0x3A8B10u;
label_3a8b10:
    // 0x3a8b10: 0x24469a20  addiu       $a2, $v0, -0x65E0
    ctx->pc = 0x3a8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941216));
label_3a8b14:
    // 0x3a8b14: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x3a8b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3a8b18:
    // 0x3a8b18: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x3a8b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3a8b1c:
    // 0x3a8b1c: 0xaba300a3  swl         $v1, 0xA3($sp)
    ctx->pc = 0x3a8b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a8b20:
    // 0x3a8b20: 0xbba300a0  swr         $v1, 0xA0($sp)
    ctx->pc = 0x3a8b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a8b24:
    // 0x3a8b24: 0x8fa800c4  lw          $t0, 0xC4($sp)
    ctx->pc = 0x3a8b24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a8b28:
    // 0x3a8b28: 0x8bab00a3  lwl         $t3, 0xA3($sp)
    ctx->pc = 0x3a8b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_3a8b2c:
    // 0x3a8b2c: 0x9bab00a0  lwr         $t3, 0xA0($sp)
    ctx->pc = 0x3a8b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_3a8b30:
    // 0x3a8b30: 0xa90b0007  swl         $t3, 0x7($t0)
    ctx->pc = 0x3a8b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a8b34:
    // 0x3a8b34: 0xb90b0004  swr         $t3, 0x4($t0)
    ctx->pc = 0x3a8b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a8b38:
    // 0x3a8b38: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a8b3c:
    if (ctx->pc == 0x3A8B3Cu) {
        ctx->pc = 0x3A8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B38u;
        // 0x3a8b3c: 0x8fa300c4  lw          $v1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B40u;
        goto label_3a8b40;
    }
    ctx->pc = 0x3A8B38u;
    {
        const bool branch_taken_0x3a8b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B38u;
        // 0x3a8b3c: 0x8fa300c4  lw          $v1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b38) {
            ctx->pc = 0x3A8B58u;
            goto label_3a8b58;
        }
    }
    ctx->pc = 0x3A8B40u;
label_3a8b40:
    // 0x3a8b40: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x3a8b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a8b44:
    // 0x3a8b44: 0x8a460063  lwl         $a2, 0x63($s2)
    ctx->pc = 0x3a8b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_3a8b48:
    // 0x3a8b48: 0x9a460060  lwr         $a2, 0x60($s2)
    ctx->pc = 0x3a8b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_3a8b4c:
    // 0x3a8b4c: 0xa8a60007  swl         $a2, 0x7($a1)
    ctx->pc = 0x3a8b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a8b50:
    // 0x3a8b50: 0xb8a60004  swr         $a2, 0x4($a1)
    ctx->pc = 0x3a8b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3a8b54:
    // 0x3a8b54: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x3a8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a8b58:
    // 0x3a8b58: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a8b5c:
    if (ctx->pc == 0x3A8B5Cu) {
        ctx->pc = 0x3A8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B58u;
        // 0x3a8b5c: 0xae43006c  sw          $v1, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8B60u;
        goto label_3a8b60;
    }
    ctx->pc = 0x3A8B58u;
    {
        const bool branch_taken_0x3a8b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B58u;
        // 0x3a8b5c: 0xae43006c  sw          $v1, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b58) {
            ctx->pc = 0x3A8B74u;
            goto label_3a8b74;
        }
    }
    ctx->pc = 0x3A8B60u;
label_3a8b60:
    // 0x3a8b60: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3a8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3a8b64:
    // 0x3a8b64: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x3a8b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_3a8b68:
    // 0x3a8b68: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x3a8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a8b6c:
    // 0x3a8b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a8b70:
    // 0x3a8b70: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x3a8b70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_3a8b74:
    // 0x3a8b74: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3a8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3a8b78:
    // 0x3a8b78: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x3a8b78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_3a8b7c:
    // 0x3a8b7c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3a8b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3a8b80:
    // 0x3a8b80: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3a8b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a8b84:
    // 0x3a8b84: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x3a8b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3a8b88:
    // 0x3a8b88: 0x8cb50014  lw          $s5, 0x14($a1)
    ctx->pc = 0x3a8b88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3a8b8c:
    // 0x3a8b8c: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3a8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3a8b90:
    // 0x3a8b90: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3a8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3a8b94:
    // 0x3a8b94: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3a8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a8b98:
    // 0x3a8b98: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_3a8b9c:
    if (ctx->pc == 0x3A8B9Cu) {
        ctx->pc = 0x3A8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B98u;
        // 0x3a8b9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BA0u;
        goto label_3a8ba0;
    }
    ctx->pc = 0x3A8B98u;
    {
        const bool branch_taken_0x3a8b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3A8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B98u;
        // 0x3a8b9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b98) {
            ctx->pc = 0x3A8BACu;
            goto label_3a8bac;
        }
    }
    ctx->pc = 0x3A8BA0u;
label_3a8ba0:
    // 0x3a8ba0: 0xc10376a  jal         func_40DDA8
label_3a8ba4:
    if (ctx->pc == 0x3A8BA4u) {
        ctx->pc = 0x3A8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BA0u;
        // 0x3a8ba4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BA8u;
        goto label_3a8ba8;
    }
    ctx->pc = 0x3A8BA0u;
    SET_GPR_U32(ctx, 31, 0x3A8BA8u);
    ctx->pc = 0x3A8BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8BA0u;
    // 0x3a8ba4: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3A8BA0u, 0x3A8BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8BA8u;
label_3a8ba8:
    // 0x3a8ba8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8bac:
    // 0x3a8bac: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x3a8bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3a8bb0:
    // 0x3a8bb0: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x3a8bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3a8bb4:
    // 0x3a8bb4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3a8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8bb8:
    // 0x3a8bb8: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x3a8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_3a8bbc:
    // 0x3a8bbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a8bc0:
    // 0x3a8bc0: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x3a8bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_3a8bc4:
    // 0x3a8bc4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3a8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3a8bc8:
    // 0x3a8bc8: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x3a8bc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a8bcc:
    // 0x3a8bcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3a8bd0:
    if (ctx->pc == 0x3A8BD0u) {
        ctx->pc = 0x3A8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BCCu;
        // 0x3a8bd0: 0xafa800c8  sw          $t0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BD4u;
        goto label_3a8bd4;
    }
    ctx->pc = 0x3A8BCCu;
    {
        const bool branch_taken_0x3a8bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BCCu;
        // 0x3a8bd0: 0xafa800c8  sw          $t0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bcc) {
            ctx->pc = 0x3A8BDCu;
            goto label_3a8bdc;
        }
    }
    ctx->pc = 0x3A8BD4u;
label_3a8bd4:
    // 0x3a8bd4: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x3a8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_3a8bd8:
    // 0x3a8bd8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3a8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3a8bdc:
    // 0x3a8bdc: 0x8fab00b4  lw          $t3, 0xB4($sp)
    ctx->pc = 0x3a8bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3a8be0:
    // 0x3a8be0: 0x8eb50014  lw          $s5, 0x14($s5)
    ctx->pc = 0x3a8be0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3a8be4:
    // 0x3a8be4: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x3a8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_3a8be8:
    // 0x3a8be8: 0x56a2ffeb  bnel        $s5, $v0, . + 4 + (-0x15 << 2)
label_3a8bec:
    if (ctx->pc == 0x3A8BECu) {
        ctx->pc = 0x3A8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BE8u;
        // 0x3a8bec: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BF0u;
        goto label_3a8bf0;
    }
    ctx->pc = 0x3A8BE8u;
    {
        const bool branch_taken_0x3a8be8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a8be8) {
            ctx->pc = 0x3A8BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8BE8u;
            // 0x3a8bec: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8b98;
        }
    }
    ctx->pc = 0x3A8BF0u;
label_3a8bf0:
    // 0x3a8bf0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3a8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8bf4:
    // 0x3a8bf4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_3a8bf8:
    if (ctx->pc == 0x3A8BF8u) {
        ctx->pc = 0x3A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BF4u;
        // 0x3a8bf8: 0x2671ce80  addiu       $s1, $s3, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8BFCu;
        goto label_3a8bfc;
    }
    ctx->pc = 0x3A8BF4u;
    {
        const bool branch_taken_0x3a8bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BF4u;
        // 0x3a8bf8: 0x2671ce80  addiu       $s1, $s3, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bf4) {
            ctx->pc = 0x3A8CA0u;
            goto label_3a8ca0;
        }
    }
    ctx->pc = 0x3A8BFCu;
label_3a8bfc:
    // 0x3a8bfc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3a8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3a8c00:
    // 0x3a8c00: 0x8e230d20  lw          $v1, 0xD20($s1)
    ctx->pc = 0x3a8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3360)));
label_3a8c04:
    // 0x3a8c04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a8c08:
    // 0x3a8c08: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3a8c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a8c0c:
    // 0x3a8c0c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3a8c10:
    if (ctx->pc == 0x3A8C10u) {
        ctx->pc = 0x3A8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C0Cu;
        // 0x3a8c10: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C14u;
        goto label_3a8c14;
    }
    ctx->pc = 0x3A8C0Cu;
    {
        const bool branch_taken_0x3a8c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C0Cu;
        // 0x3a8c10: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c0c) {
            ctx->pc = 0x3A8C7Cu;
            goto label_3a8c7c;
        }
    }
    ctx->pc = 0x3A8C14u;
label_3a8c14:
    // 0x3a8c14: 0x8e240d1c  lw          $a0, 0xD1C($s1)
    ctx->pc = 0x3a8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3356)));
label_3a8c18:
    // 0x3a8c18: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a8c1c:
    if (ctx->pc == 0x3A8C1Cu) {
        ctx->pc = 0x3A8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C18u;
        // 0x3a8c1c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C20u;
        goto label_3a8c20;
    }
    ctx->pc = 0x3A8C18u;
    {
        const bool branch_taken_0x3a8c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C18u;
        // 0x3a8c1c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c18) {
            ctx->pc = 0x3A8C34u;
            goto label_3a8c34;
        }
    }
    ctx->pc = 0x3A8C20u;
label_3a8c20:
    // 0x3a8c20: 0x2602e880  addiu       $v0, $s0, -0x1780
    ctx->pc = 0x3a8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3a8c24:
    // 0x3a8c24: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3a8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3a8c28:
    // 0x3a8c28: 0x60f809  jalr        $v1
label_3a8c2c:
    if (ctx->pc == 0x3A8C2Cu) {
        ctx->pc = 0x3A8C30u;
        goto label_3a8c30;
    }
    ctx->pc = 0x3A8C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A8C30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8C28u, 0x3A8C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8C30u;
label_3a8c30:
    // 0x3a8c30: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3a8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8c34:
    // 0x3a8c34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3a8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a8c38:
    // 0x3a8c38: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x3a8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3a8c3c:
    // 0x3a8c3c: 0xae200d20  sw          $zero, 0xD20($s1)
    ctx->pc = 0x3a8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 0));
label_3a8c40:
    // 0x3a8c40: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3a8c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3a8c44:
    // 0x3a8c44: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a8c48:
    // 0x3a8c48: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3a8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3a8c4c:
    // 0x3a8c4c: 0x2012  mflo        $a0
    ctx->pc = 0x3a8c4cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3a8c50:
    // 0x3a8c50: 0x40f809  jalr        $v0
label_3a8c54:
    if (ctx->pc == 0x3A8C54u) {
        ctx->pc = 0x3A8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C50u;
        // 0x3a8c54: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C58u;
        goto label_3a8c58;
    }
    ctx->pc = 0x3A8C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A8C58u);
        ctx->pc = 0x3A8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C50u;
        // 0x3a8c54: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8C50u, 0x3A8C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8C58u;
label_3a8c58:
    // 0x3a8c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a8c5c:
    if (ctx->pc == 0x3A8C5Cu) {
        ctx->pc = 0x3A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C58u;
        // 0x3a8c5c: 0xae220d1c  sw          $v0, 0xD1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C60u;
        goto label_3a8c60;
    }
    ctx->pc = 0x3A8C58u;
    {
        const bool branch_taken_0x3a8c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C58u;
        // 0x3a8c5c: 0xae220d1c  sw          $v0, 0xD1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c58) {
            ctx->pc = 0x3A8C68u;
            goto label_3a8c68;
        }
    }
    ctx->pc = 0x3A8C60u;
label_3a8c60:
    // 0x3a8c60: 0x10000168  b           . + 4 + (0x168 << 2)
label_3a8c64:
    if (ctx->pc == 0x3A8C64u) {
        ctx->pc = 0x3A8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C60u;
        // 0x3a8c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8C68u;
        goto label_3a8c68;
    }
    ctx->pc = 0x3A8C60u;
    {
        const bool branch_taken_0x3a8c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C60u;
        // 0x3a8c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c60) {
            ctx->pc = 0x3A9204u;
            goto label_3a9204;
        }
    }
    ctx->pc = 0x3A8C68u;
label_3a8c68:
    // 0x3a8c68: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3a8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8c6c:
    // 0x3a8c6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3a8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3a8c70:
    // 0x3a8c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a8c74:
    // 0x3a8c74: 0xae220d20  sw          $v0, 0xD20($s1)
    ctx->pc = 0x3a8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3360), GPR_U32(ctx, 2));
label_3a8c78:
    // 0x3a8c78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3a8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8c7c:
    // 0x3a8c7c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3a8c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a8c80:
    // 0x3a8c80: 0x2663ce80  addiu       $v1, $s3, -0x3180
    ctx->pc = 0x3a8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3a8c84:
    // 0x3a8c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c88:
    // 0x3a8c88: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x3a8c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3a8c8c:
    // 0x3a8c8c: 0x8c630d1c  lw          $v1, 0xD1C($v1)
    ctx->pc = 0x3a8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3356)));
label_3a8c90:
    // 0x3a8c90: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3a8c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3a8c94:
    // 0x3a8c94: 0x3012  mflo        $a2
    ctx->pc = 0x3a8c94u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3a8c98:
    // 0x3a8c98: 0xc0bb7e6  jal         func_2EDF98
label_3a8c9c:
    if (ctx->pc == 0x3A8C9Cu) {
        ctx->pc = 0x3A8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C98u;
        // 0x3a8c9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CA0u;
        goto label_3a8ca0;
    }
    ctx->pc = 0x3A8C98u;
    SET_GPR_U32(ctx, 31, 0x3A8CA0u);
    ctx->pc = 0x3A8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C98u;
    // 0x3a8c9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3A8C98u, 0x3A8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CA0u;
label_3a8ca0:
    // 0x3a8ca0: 0x2662ce80  addiu       $v0, $s3, -0x3180
    ctx->pc = 0x3a8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954624));
label_3a8ca4:
    // 0x3a8ca4: 0xc45506f8  lwc1        $f21, 0x6F8($v0)
    ctx->pc = 0x3a8ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a8ca8:
    // 0x3a8ca8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x3a8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3a8cac:
    // 0x3a8cac: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
label_3a8cb0:
    if (ctx->pc == 0x3A8CB0u) {
        ctx->pc = 0x3A8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CACu;
        // 0x3a8cb0: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CB4u;
        goto label_3a8cb4;
    }
    ctx->pc = 0x3A8CACu;
    {
        const bool branch_taken_0x3a8cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CACu;
        // 0x3a8cb0: 0x8fa300c8  lw          $v1, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8cac) {
            ctx->pc = 0x3A91D0u;
            goto label_3a91d0;
        }
    }
    ctx->pc = 0x3A8CB4u;
label_3a8cb4:
    // 0x3a8cb4: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
label_3a8cb8:
    if (ctx->pc == 0x3A8CB8u) {
        ctx->pc = 0x3A8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CB4u;
        // 0x3a8cb8: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CBCu;
        goto label_3a8cbc;
    }
    ctx->pc = 0x3A8CB4u;
    {
        const bool branch_taken_0x3a8cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CB4u;
        // 0x3a8cb8: 0x8fa500bc  lw          $a1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8cb4) {
            ctx->pc = 0x3A91D0u;
            goto label_3a91d0;
        }
    }
    ctx->pc = 0x3A8CBCu;
label_3a8cbc:
    // 0x3a8cbc: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x3a8cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3a8cc0:
    // 0x3a8cc0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x3a8cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a8cc4:
    // 0x3a8cc4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3a8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a8cc8:
    // 0x3a8cc8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3a8cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a8ccc:
    // 0x3a8ccc: 0x8cc5005c  lw          $a1, 0x5C($a2)
    ctx->pc = 0x3a8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_3a8cd0:
    // 0x3a8cd0: 0xafa800e8  sw          $t0, 0xE8($sp)
    ctx->pc = 0x3a8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
label_3a8cd4:
    // 0x3a8cd4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3a8cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3a8cd8:
    // 0x3a8cd8: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x3a8cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a8cdc:
    // 0x3a8cdc: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x3a8cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a8ce0:
    // 0x3a8ce0: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x3a8ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3a8ce4:
    // 0x3a8ce4: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x3a8ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3a8ce8:
    // 0x3a8ce8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3a8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a8cec:
    // 0x3a8cec: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3a8cecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8cf0:
    // 0x3a8cf0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3a8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3a8cf4:
    // 0x3a8cf4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3a8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3a8cf8:
    // 0x3a8cf8: 0x8ca7002c  lw          $a3, 0x2C($a1)
    ctx->pc = 0x3a8cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3a8cfc:
    // 0x3a8cfc: 0x8ca80030  lw          $t0, 0x30($a1)
    ctx->pc = 0x3a8cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_3a8d00:
    // 0x3a8d00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a8d04:
    // 0x3a8d04: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x3a8d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3a8d08:
    // 0x3a8d08: 0xe2f021  addu        $fp, $a3, $v0
    ctx->pc = 0x3a8d08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3a8d0c:
    // 0x3a8d0c: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x3a8d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_3a8d10:
    // 0x3a8d10: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x3a8d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_3a8d14:
    // 0x3a8d14: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x3a8d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3a8d18:
    // 0x3a8d18: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3a8d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3a8d1c:
    // 0x3a8d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a8d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a8d20:
    // 0x3a8d20: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a8d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3a8d24:
    // 0x3a8d24: 0x8cd50014  lw          $s5, 0x14($a2)
    ctx->pc = 0x3a8d24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3a8d28:
    // 0x3a8d28: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x3a8d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
label_3a8d2c:
    // 0x3a8d2c: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x3a8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
label_3a8d30:
    // 0x3a8d30: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a8d34:
    // 0x3a8d34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3a8d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a8d38:
    // 0x3a8d38: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
label_3a8d3c:
    if (ctx->pc == 0x3A8D3Cu) {
        ctx->pc = 0x3A8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D38u;
        // 0x3a8d3c: 0xc6b40010  lwc1        $f20, 0x10($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D40u;
        goto label_3a8d40;
    }
    ctx->pc = 0x3A8D38u;
    {
        const bool branch_taken_0x3a8d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x3A8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D38u;
        // 0x3a8d3c: 0xc6b40010  lwc1        $f20, 0x10($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d38) {
            ctx->pc = 0x3A8D50u;
            goto label_3a8d50;
        }
    }
    ctx->pc = 0x3A8D40u;
label_3a8d40:
    // 0x3a8d40: 0xc1036d2  jal         func_40DB48
label_3a8d44:
    if (ctx->pc == 0x3A8D44u) {
        ctx->pc = 0x3A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D40u;
        // 0x3a8d44: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D48u;
        goto label_3a8d48;
    }
    ctx->pc = 0x3A8D40u;
    SET_GPR_U32(ctx, 31, 0x3A8D48u);
    ctx->pc = 0x3A8D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D40u;
    // 0x3a8d44: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3A8D40u, 0x3A8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D48u;
label_3a8d48:
    // 0x3a8d48: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a8d4c:
    if (ctx->pc == 0x3A8D4Cu) {
        ctx->pc = 0x3A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D48u;
        // 0x3a8d4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D50u;
        goto label_3a8d50;
    }
    ctx->pc = 0x3A8D48u;
    {
        const bool branch_taken_0x3a8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D48u;
        // 0x3a8d4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d48) {
            ctx->pc = 0x3A8D54u;
            goto label_3a8d54;
        }
    }
    ctx->pc = 0x3A8D50u;
label_3a8d50:
    // 0x3a8d50: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x3a8d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a8d54:
    // 0x3a8d54: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3a8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3a8d58:
    // 0x3a8d58: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x3a8d58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a8d5c:
    // 0x3a8d5c: 0x144b0004  bne         $v0, $t3, . + 4 + (0x4 << 2)
label_3a8d60:
    if (ctx->pc == 0x3A8D60u) {
        ctx->pc = 0x3A8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D5Cu;
        // 0x3a8d60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D64u;
        goto label_3a8d64;
    }
    ctx->pc = 0x3A8D5Cu;
    {
        const bool branch_taken_0x3a8d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x3A8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D5Cu;
        // 0x3a8d60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d5c) {
            ctx->pc = 0x3A8D70u;
            goto label_3a8d70;
        }
    }
    ctx->pc = 0x3A8D64u;
label_3a8d64:
    // 0x3a8d64: 0xc10376a  jal         func_40DDA8
label_3a8d68:
    if (ctx->pc == 0x3A8D68u) {
        ctx->pc = 0x3A8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D64u;
        // 0x3a8d68: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D6Cu;
        goto label_3a8d6c;
    }
    ctx->pc = 0x3A8D64u;
    SET_GPR_U32(ctx, 31, 0x3A8D6Cu);
    ctx->pc = 0x3A8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D64u;
    // 0x3a8d68: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3A8D64u, 0x3A8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D6Cu;
label_3a8d6c:
    // 0x3a8d6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d70:
    // 0x3a8d70: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3a8d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8d74:
    // 0x3a8d74: 0x2623fffd  addiu       $v1, $s1, -0x3
    ctx->pc = 0x3a8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_3a8d78:
    // 0x3a8d78: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x3a8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_3a8d7c:
    // 0x3a8d7c: 0x2f11021  addu        $v0, $s7, $s1
    ctx->pc = 0x3a8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_3a8d80:
    // 0x3a8d80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3a8d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a8d84:
    // 0x3a8d84: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x3a8d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a8d88:
    // 0x3a8d88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3a8d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a8d8c:
    // 0x3a8d8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a8d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d90:
    // 0x3a8d90: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x3a8d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_3a8d94:
    // 0x3a8d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a8d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d98:
    // 0x3a8d98: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3a8d98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d9c:
    // 0x3a8d9c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3a8d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8da0:
    // 0x3a8da0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3a8da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a8da4:
    // 0x3a8da4: 0xc0ec7fe  jal         func_3B1FF8
label_3a8da8:
    if (ctx->pc == 0x3A8DA8u) {
        ctx->pc = 0x3A8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DA4u;
        // 0x3a8da8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8DACu;
        goto label_3a8dac;
    }
    ctx->pc = 0x3A8DA4u;
    SET_GPR_U32(ctx, 31, 0x3A8DACu);
    ctx->pc = 0x3A8DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DA4u;
    // 0x3a8da8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FF8u, 0x3A8DA4u, 0x3A8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DACu;
label_3a8dac:
    // 0x3a8dac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3a8dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8db0:
    // 0x3a8db0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3a8db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8db4:
    // 0x3a8db4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x3a8db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8db8:
    // 0x3a8db8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3a8db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8dbc:
    // 0x3a8dbc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a8dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3a8dc0:
    // 0x3a8dc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a8dc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a8dc4:
    // 0x3a8dc4: 0x4601b043  div.s       $f1, $f22, $f1
    ctx->pc = 0x3a8dc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
label_3a8dc8:
    // 0x3a8dc8: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x3a8dc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
label_3a8dcc:
    // 0x3a8dcc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3a8dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3a8dd0:
    // 0x3a8dd0: 0x122000a7  beqz        $s1, . + 4 + (0xA7 << 2)
label_3a8dd4:
    if (ctx->pc == 0x3A8DD4u) {
        ctx->pc = 0x3A8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DD0u;
        // 0x3a8dd4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8DD8u;
        goto label_3a8dd8;
    }
    ctx->pc = 0x3A8DD0u;
    {
        const bool branch_taken_0x3a8dd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DD0u;
        // 0x3a8dd4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8dd0) {
            ctx->pc = 0x3A9070u;
            goto label_3a9070;
        }
    }
    ctx->pc = 0x3A8DD8u;
label_3a8dd8:
    // 0x3a8dd8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3a8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a8ddc:
    // 0x3a8ddc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3a8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3a8de0:
    // 0x3a8de0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3a8de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3a8de4:
    // 0x3a8de4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3a8de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a8de8:
    // 0x3a8de8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x3a8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3a8dec:
    // 0x3a8dec: 0x0  nop
    ctx->pc = 0x3a8decu;
    // NOP
label_3a8df0:
    // 0x3a8df0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3a8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8df4:
    // 0x3a8df4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3a8df4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3a8df8:
    // 0x3a8df8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3a8df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a8dfc:
    // 0x3a8dfc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3a8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8e00:
    // 0x3a8e00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a8e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a8e04:
    // 0x3a8e04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3a8e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a8e08:
    // 0x3a8e08: 0xc482fffc  lwc1        $f2, -0x4($a0)
    ctx->pc = 0x3a8e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8e0c:
    // 0x3a8e0c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3a8e0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3a8e10:
    // 0x3a8e10: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x3a8e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3a8e14:
    // 0x3a8e14: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3a8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8e18:
    // 0x3a8e18: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3a8e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8e1c:
    // 0x3a8e1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a8e1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a8e20:
    // 0x3a8e20: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x3a8e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_3a8e24:
    // 0x3a8e24: 0xe4b50008  swc1        $f21, 0x8($a1)
    ctx->pc = 0x3a8e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_3a8e28:
    // 0x3a8e28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3a8e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8e2c:
    // 0x3a8e2c: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x3a8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3a8e30:
    // 0x3a8e30: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3a8e30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3a8e34:
    // 0x3a8e34: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3a8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8e38:
    // 0x3a8e38: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3a8e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8e3c:
    // 0x3a8e3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a8e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a8e40:
    // 0x3a8e40: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3a8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8e44:
    // 0x3a8e44: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3a8e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a8e48:
    // 0x3a8e48: 0x460112c2  mul.s       $f11, $f2, $f1
    ctx->pc = 0x3a8e48u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3a8e4c:
    // 0x3a8e4c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3a8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8e50:
    // 0x3a8e50: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x3a8e50u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a8e54:
    // 0x3a8e54: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3a8e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_3a8e58:
    // 0x3a8e58: 0x46030302  mul.s       $f12, $f0, $f3
    ctx->pc = 0x3a8e58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3a8e5c:
    // 0x3a8e5c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_3a8e60:
    if (ctx->pc == 0x3A8E60u) {
        ctx->pc = 0x3A8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E5Cu;
        // 0x3a8e60: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8E64u;
        goto label_3a8e64;
    }
    ctx->pc = 0x3A8E5Cu;
    {
        const bool branch_taken_0x3a8e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E5Cu;
        // 0x3a8e60: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e5c) {
            ctx->pc = 0x3A8F90u;
            goto label_3a8f90;
        }
    }
    ctx->pc = 0x3A8E64u;
label_3a8e64:
    // 0x3a8e64: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x3a8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8e68:
    // 0x3a8e68: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x3a8e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8e6c:
    // 0x3a8e6c: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x3a8e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8e70:
    // 0x3a8e70: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3a8e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3a8e74:
    // 0x3a8e74: 0xc6430054  lwc1        $f3, 0x54($s2)
    ctx->pc = 0x3a8e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8e78:
    // 0x3a8e78: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x3a8e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_3a8e7c:
    // 0x3a8e7c: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x3a8e7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_3a8e80:
    // 0x3a8e80: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a8e80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a8e84:
    // 0x3a8e84: 0xc6490030  lwc1        $f9, 0x30($s2)
    ctx->pc = 0x3a8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3a8e88:
    // 0x3a8e88: 0xc64a0034  lwc1        $f10, 0x34($s2)
    ctx->pc = 0x3a8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3a8e8c:
    // 0x3a8e8c: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a8e8cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a8e90:
    // 0x3a8e90: 0xc6470038  lwc1        $f7, 0x38($s2)
    ctx->pc = 0x3a8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3a8e94:
    // 0x3a8e94: 0xc648003c  lwc1        $f8, 0x3C($s2)
    ctx->pc = 0x3a8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3a8e98:
    // 0x3a8e98: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8e98u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a8e9c:
    // 0x3a8e9c: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a8e9cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a8ea0:
    // 0x3a8ea0: 0xe7a90060  swc1        $f9, 0x60($sp)
    ctx->pc = 0x3a8ea0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a8ea4:
    // 0x3a8ea4: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8ea4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8ea8:
    // 0x3a8ea8: 0xe7aa0064  swc1        $f10, 0x64($sp)
    ctx->pc = 0x3a8ea8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a8eac:
    // 0x3a8eac: 0xe7a70068  swc1        $f7, 0x68($sp)
    ctx->pc = 0x3a8eacu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3a8eb0:
    // 0x3a8eb0: 0xe7a8006c  swc1        $f8, 0x6C($sp)
    ctx->pc = 0x3a8eb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3a8eb4:
    // 0x3a8eb4: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x3a8eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8eb8:
    // 0x3a8eb8: 0xc645001c  lwc1        $f5, 0x1C($s2)
    ctx->pc = 0x3a8eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8ebc:
    // 0x3a8ebc: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a8ebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a8ec0:
    // 0x3a8ec0: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x3a8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8ec4:
    // 0x3a8ec4: 0xc6460024  lwc1        $f6, 0x24($s2)
    ctx->pc = 0x3a8ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a8ec8:
    // 0x3a8ec8: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x3a8ec8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_3a8ecc:
    // 0x3a8ecc: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x3a8eccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_3a8ed0:
    // 0x3a8ed0: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x3a8ed0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_3a8ed4:
    // 0x3a8ed4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3a8ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8ed8:
    // 0x3a8ed8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a8ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3a8edc:
    // 0x3a8edc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3a8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8ee0:
    // 0x3a8ee0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3a8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8ee4:
    // 0x3a8ee4: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x3a8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8ee8:
    // 0x3a8ee8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a8ee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3a8eec:
    // 0x3a8eec: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3a8eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3a8ef0:
    // 0x3a8ef0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3a8ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a8ef4:
    // 0x3a8ef4: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3a8ef4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3a8ef8:
    // 0x3a8ef8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3a8ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3a8efc:
    // 0x3a8efc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3a8efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3a8f00:
    // 0x3a8f00: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x3a8f00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3a8f04:
    // 0x3a8f04: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x3a8f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_3a8f08:
    // 0x3a8f08: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x3a8f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_3a8f0c:
    // 0x3a8f0c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a8f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3a8f10:
    // 0x3a8f10: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x3a8f10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_3a8f14:
    // 0x3a8f14: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3a8f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3a8f18:
    // 0x3a8f18: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3a8f18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_3a8f1c:
    // 0x3a8f1c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3a8f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_3a8f20:
    // 0x3a8f20: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3a8f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_3a8f24:
    // 0x3a8f24: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a8f24u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a8f28:
    // 0x3a8f28: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8f28u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a8f2c:
    // 0x3a8f2c: 0xe7a90080  swc1        $f9, 0x80($sp)
    ctx->pc = 0x3a8f2cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3a8f30:
    // 0x3a8f30: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a8f30u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a8f34:
    // 0x3a8f34: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8f34u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8f38:
    // 0x3a8f38: 0xe7aa0084  swc1        $f10, 0x84($sp)
    ctx->pc = 0x3a8f38u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3a8f3c:
    // 0x3a8f3c: 0xe7a70088  swc1        $f7, 0x88($sp)
    ctx->pc = 0x3a8f3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3a8f40:
    // 0x3a8f40: 0xe7a8008c  swc1        $f8, 0x8C($sp)
    ctx->pc = 0x3a8f40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3a8f44:
    // 0x3a8f44: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8f44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8f48:
    // 0x3a8f48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a8f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a8f4c:
    // 0x3a8f4c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3a8f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3a8f50:
    // 0x3a8f50: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3a8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3a8f54:
    // 0x3a8f54: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3a8f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8f58:
    // 0x3a8f58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a8f5c:
    // 0x3a8f5c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3a8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_3a8f60:
    // 0x3a8f60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a8f64:
    // 0x3a8f64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a8f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a8f68:
    // 0x3a8f68: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x3a8f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a8f6c:
    // 0x3a8f6c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3a8f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8f70:
    // 0x3a8f70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a8f74:
    // 0x3a8f74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a8f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a8f78:
    // 0x3a8f78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3a8f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3a8f7c:
    // 0x3a8f7c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3a8f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8f80:
    // 0x3a8f80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a8f84:
    // 0x3a8f84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a8f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a8f88:
    // 0x3a8f88: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a8f8c:
    if (ctx->pc == 0x3A8F8Cu) {
        ctx->pc = 0x3A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F88u;
        // 0x3a8f8c: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8F90u;
        goto label_3a8f90;
    }
    ctx->pc = 0x3A8F88u;
    {
        const bool branch_taken_0x3a8f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F88u;
        // 0x3a8f8c: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f88) {
            ctx->pc = 0x3A8FACu;
            goto label_3a8fac;
        }
    }
    ctx->pc = 0x3A8F90u;
label_3a8f90:
    // 0x3a8f90: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x3a8f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
label_3a8f94:
    // 0x3a8f94: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3a8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3a8f98:
    // 0x3a8f98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a8f9c:
    // 0x3a8f9c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3a8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_3a8fa0:
    // 0x3a8fa0: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x3a8fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
label_3a8fa4:
    // 0x3a8fa4: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x3a8fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
label_3a8fa8:
    // 0x3a8fa8: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x3a8fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
label_3a8fac:
    // 0x3a8fac: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x3a8facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_3a8fb0:
    // 0x3a8fb0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3a8fb4:
    if (ctx->pc == 0x3A8FB4u) {
        ctx->pc = 0x3A8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FB0u;
        // 0x3a8fb4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8FB8u;
        goto label_3a8fb8;
    }
    ctx->pc = 0x3A8FB0u;
    {
        const bool branch_taken_0x3a8fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FB0u;
        // 0x3a8fb4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8fb0) {
            ctx->pc = 0x3A9050u;
            goto label_3a9050;
        }
    }
    ctx->pc = 0x3A8FB8u;
label_3a8fb8:
    // 0x3a8fb8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3a8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8fbc:
    // 0x3a8fbc: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x3a8fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8fc0:
    // 0x3a8fc0: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x3a8fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8fc4:
    // 0x3a8fc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a8fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8fc8:
    // 0x3a8fc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a8fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a8fcc:
    // 0x3a8fcc: 0xc6440040  lwc1        $f4, 0x40($s2)
    ctx->pc = 0x3a8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8fd0:
    // 0x3a8fd0: 0xc6450044  lwc1        $f5, 0x44($s2)
    ctx->pc = 0x3a8fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8fd4:
    // 0x3a8fd4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3a8fd4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3a8fd8:
    // 0x3a8fd8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a8fd8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_3a8fdc:
    // 0x3a8fdc: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x3a8fdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3a8fe0:
    // 0x3a8fe0: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x3a8fe0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3a8fe4:
    // 0x3a8fe4: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3a8fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8fe8:
    // 0x3a8fe8: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3a8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8fec:
    // 0x3a8fec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a8fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8ff0:
    // 0x3a8ff0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a8ff0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a8ff4:
    // 0x3a8ff4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x3a8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8ff8:
    // 0x3a8ff8: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x3a8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8ffc:
    // 0x3a8ffc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a8ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a9000:
    // 0x3a9000: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3a9000u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a9004:
    // 0x3a9004: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3a9004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a9008:
    // 0x3a9008: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x3a9008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a900c:
    // 0x3a900c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3a900cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3a9010:
    // 0x3a9010: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x3a9010u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_3a9014:
    // 0x3a9014: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3a9014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9018:
    // 0x3a9018: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3a9018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a901c:
    // 0x3a901c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a901cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a9020:
    // 0x3a9020: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3a9020u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3a9024:
    // 0x3a9024: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x3a9024u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_3a9028:
    // 0x3a9028: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x3a9028u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3a902c:
    // 0x3a902c: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x3a902cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3a9030:
    // 0x3a9030: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x3a9030u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3a9034:
    // 0x3a9034: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x3a9034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3a9038:
    // 0x3a9038: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x3a9038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a903c:
    // 0x3a903c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3a903cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_3a9040:
    // 0x3a9040: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x3a9040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
label_3a9044:
    // 0x3a9044: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x3a9044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3a9048:
    // 0x3a9048: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3a9048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3a904c:
    // 0x3a904c: 0x0  nop
    ctx->pc = 0x3a904cu;
    // NOP
label_3a9050:
    // 0x3a9050: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x3a9050u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a9054:
    // 0x3a9054: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3a9054u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3a9058:
    // 0x3a9058: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3a9058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3a905c:
    // 0x3a905c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3a905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a9060:
    // 0x3a9060: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x3a9060u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
label_3a9064:
    // 0x3a9064: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x3a9064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a9068:
    // 0x3a9068: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
label_3a906c:
    if (ctx->pc == 0x3A906Cu) {
        ctx->pc = 0x3A906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9068u;
        // 0x3a906c: 0xafab00d0  sw          $t3, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9070u;
        goto label_3a9070;
    }
    ctx->pc = 0x3A9068u;
    {
        const bool branch_taken_0x3a9068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9068u;
        // 0x3a906c: 0xafab00d0  sw          $t3, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9068) {
            ctx->pc = 0x3A8DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8df0;
        }
    }
    ctx->pc = 0x3A9070u;
label_3a9070:
    // 0x3a9070: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x3a9070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3a9074:
    // 0x3a9074: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a9074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a9078:
    // 0x3a9078: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x3a9078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3a907c:
    // 0x3a907c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a9080:
    // 0x3a9080: 0xafb300e4  sw          $s3, 0xE4($sp)
    ctx->pc = 0x3a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 19));
label_3a9084:
    // 0x3a9084: 0xc0eecfa  jal         func_3BB3E8
label_3a9088:
    if (ctx->pc == 0x3A9088u) {
        ctx->pc = 0x3A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9084u;
        // 0x3a9088: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A908Cu;
        goto label_3a908c;
    }
    ctx->pc = 0x3A9084u;
    SET_GPR_U32(ctx, 31, 0x3A908Cu);
    ctx->pc = 0x3A9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9084u;
    // 0x3a9088: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB3E8u, 0x3A9084u, 0x3A908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A908Cu;
label_3a908c:
    // 0x3a908c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3a908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a9090:
    // 0x3a9090: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3a9094:
    if (ctx->pc == 0x3A9094u) {
        ctx->pc = 0x3A9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9090u;
        // 0x3a9094: 0x8fb000dc  lw          $s0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9098u;
        goto label_3a9098;
    }
    ctx->pc = 0x3A9090u;
    {
        const bool branch_taken_0x3a9090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9090u;
        // 0x3a9094: 0x8fb000dc  lw          $s0, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9090) {
            ctx->pc = 0x3A91BCu;
            goto label_3a91bc;
        }
    }
    ctx->pc = 0x3A9098u;
label_3a9098:
    // 0x3a9098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a909c:
    // 0x3a909c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x3a909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a90a0:
    // 0x3a90a0: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
label_3a90a4:
    if (ctx->pc == 0x3A90A4u) {
        ctx->pc = 0x3A90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90A0u;
        // 0x3a90a4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90A8u;
        goto label_3a90a8;
    }
    ctx->pc = 0x3A90A0u;
    {
        const bool branch_taken_0x3a90a0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3A90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90A0u;
        // 0x3a90a4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90a0) {
            ctx->pc = 0x3A90B0u;
            goto label_3a90b0;
        }
    }
    ctx->pc = 0x3A90A8u;
label_3a90a8:
    // 0x3a90a8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_3a90ac:
    if (ctx->pc == 0x3A90ACu) {
        ctx->pc = 0x3A90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90A8u;
        // 0x3a90ac: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90B0u;
        goto label_3a90b0;
    }
    ctx->pc = 0x3A90A8u;
    {
        const bool branch_taken_0x3a90a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a90a8) {
            ctx->pc = 0x3A90ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A90A8u;
            // 0x3a90ac: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A910Cu;
            goto label_3a910c;
        }
    }
    ctx->pc = 0x3A90B0u;
label_3a90b0:
    // 0x3a90b0: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x3a90b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3a90b4:
    // 0x3a90b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3a90b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a90b8:
    // 0x3a90b8: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x3a90b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3a90bc:
    // 0x3a90bc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3a90bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a90c0:
    // 0x3a90c0: 0x96080008  lhu         $t0, 0x8($s0)
    ctx->pc = 0x3a90c0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_3a90c4:
    // 0x3a90c4: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x3a90c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_3a90c8:
    // 0x3a90c8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a90cc:
    // 0x3a90cc: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x3a90ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_3a90d0:
    // 0x3a90d0: 0x1174021  addu        $t0, $t0, $s7
    ctx->pc = 0x3a90d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_3a90d4:
    // 0x3a90d4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3a90d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_3a90d8:
    // 0x3a90d8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x3a90d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3a90dc:
    // 0x3a90dc: 0xc0e3356  jal         func_38CD58
label_3a90e0:
    if (ctx->pc == 0x3A90E0u) {
        ctx->pc = 0x3A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90DCu;
        // 0x3a90e0: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90E4u;
        goto label_3a90e4;
    }
    ctx->pc = 0x3A90DCu;
    SET_GPR_U32(ctx, 31, 0x3A90E4u);
    ctx->pc = 0x3A90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90DCu;
    // 0x3a90e0: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3A90DCu, 0x3A90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90E4u;
label_3a90e4:
    // 0x3a90e4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a90e8:
    // 0x3a90e8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3a90e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a90ec:
    // 0x3a90ec: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x3a90ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a90f0:
    // 0x3a90f0: 0xc0e335c  jal         func_38CD70
label_3a90f4:
    if (ctx->pc == 0x3A90F4u) {
        ctx->pc = 0x3A90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90F0u;
        // 0x3a90f4: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90F8u;
        goto label_3a90f8;
    }
    ctx->pc = 0x3A90F0u;
    SET_GPR_U32(ctx, 31, 0x3A90F8u);
    ctx->pc = 0x3A90F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90F0u;
    // 0x3a90f4: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3A90F0u, 0x3A90F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90F8u;
label_3a90f8:
    // 0x3a90f8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3a90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a90fc:
    // 0x3a90fc: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x3a90fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3a9100:
    // 0x3a9100: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3a9104:
    if (ctx->pc == 0x3A9104u) {
        ctx->pc = 0x3A9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9100u;
        // 0x3a9104: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9108u;
        goto label_3a9108;
    }
    ctx->pc = 0x3A9100u;
    {
        const bool branch_taken_0x3a9100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9100u;
        // 0x3a9104: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9100) {
            ctx->pc = 0x3A91BCu;
            goto label_3a91bc;
        }
    }
    ctx->pc = 0x3A9108u;
label_3a9108:
    // 0x3a9108: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3a9108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a910c:
    // 0x3a910c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3a910cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9110:
    // 0x3a9110: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3a9110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9114:
    // 0x3a9114: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x3a9114u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3a9118:
    // 0x3a9118: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3a9118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a911c:
    // 0x3a911c: 0x96870004  lhu         $a3, 0x4($s4)
    ctx->pc = 0x3a911cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_3a9120:
    // 0x3a9120: 0x27d00008  addiu       $s0, $fp, 0x8
    ctx->pc = 0x3a9120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3a9124:
    // 0x3a9124: 0x96280008  lhu         $t0, 0x8($s1)
    ctx->pc = 0x3a9124u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_3a9128:
    // 0x3a9128: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x3a9128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_3a912c:
    // 0x3a912c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a9130:
    // 0x3a9130: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x3a9130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_3a9134:
    // 0x3a9134: 0x1174021  addu        $t0, $t0, $s7
    ctx->pc = 0x3a9134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_3a9138:
    // 0x3a9138: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x3a9138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3a913c:
    // 0x3a913c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x3a913cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_3a9140:
    // 0x3a9140: 0xc0e3356  jal         func_38CD58
label_3a9144:
    if (ctx->pc == 0x3A9144u) {
        ctx->pc = 0x3A9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9140u;
        // 0x3a9144: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9148u;
        goto label_3a9148;
    }
    ctx->pc = 0x3A9140u;
    SET_GPR_U32(ctx, 31, 0x3A9148u);
    ctx->pc = 0x3A9144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9140u;
    // 0x3a9144: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3A9140u, 0x3A9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9148u;
label_3a9148:
    // 0x3a9148: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x3a9148u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_3a914c:
    // 0x3a914c: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x3a914cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a9150:
    // 0x3a9150: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3a9150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a9154:
    // 0x3a9154: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a9154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a9158:
    // 0x3a9158: 0xc0e335c  jal         func_38CD70
label_3a915c:
    if (ctx->pc == 0x3A915Cu) {
        ctx->pc = 0x3A915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9158u;
        // 0x3a915c: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9160u;
        goto label_3a9160;
    }
    ctx->pc = 0x3A9158u;
    SET_GPR_U32(ctx, 31, 0x3A9160u);
    ctx->pc = 0x3A915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9158u;
    // 0x3a915c: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3A9158u, 0x3A9160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9160u;
label_3a9160:
    // 0x3a9160: 0x9666000c  lhu         $a2, 0xC($s3)
    ctx->pc = 0x3a9160u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_3a9164:
    // 0x3a9164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9168:
    // 0x3a9168: 0x96870010  lhu         $a3, 0x10($s4)
    ctx->pc = 0x3a9168u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_3a916c:
    // 0x3a916c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3a916cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3a9170:
    // 0x3a9170: 0x96280014  lhu         $t0, 0x14($s1)
    ctx->pc = 0x3a9170u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_3a9174:
    // 0x3a9174: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x3a9174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_3a9178:
    // 0x3a9178: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a9178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a917c:
    // 0x3a917c: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x3a917cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_3a9180:
    // 0x3a9180: 0x1174021  addu        $t0, $t0, $s7
    ctx->pc = 0x3a9180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_3a9184:
    // 0x3a9184: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3a9184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_3a9188:
    // 0x3a9188: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x3a9188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3a918c:
    // 0x3a918c: 0xc0e3356  jal         func_38CD58
label_3a9190:
    if (ctx->pc == 0x3A9190u) {
        ctx->pc = 0x3A9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A918Cu;
        // 0x3a9190: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9194u;
        goto label_3a9194;
    }
    ctx->pc = 0x3A918Cu;
    SET_GPR_U32(ctx, 31, 0x3A9194u);
    ctx->pc = 0x3A9190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A918Cu;
    // 0x3a9190: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3A918Cu, 0x3A9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9194u;
label_3a9194:
    // 0x3a9194: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3a9194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a9198:
    // 0x3a9198: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x3a9198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3a919c:
    // 0x3a919c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a919cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a91a0:
    // 0x3a91a0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a91a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a91a4:
    // 0x3a91a4: 0xc0e335c  jal         func_38CD70
label_3a91a8:
    if (ctx->pc == 0x3A91A8u) {
        ctx->pc = 0x3A91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91A4u;
        // 0x3a91a8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A91ACu;
        goto label_3a91ac;
    }
    ctx->pc = 0x3A91A4u;
    SET_GPR_U32(ctx, 31, 0x3A91ACu);
    ctx->pc = 0x3A91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A91A4u;
    // 0x3a91a8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3A91A4u, 0x3A91ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A91ACu;
label_3a91ac:
    // 0x3a91ac: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x3a91acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a91b0:
    // 0x3a91b0: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x3a91b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_3a91b4:
    // 0x3a91b4: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
label_3a91b8:
    if (ctx->pc == 0x3A91B8u) {
        ctx->pc = 0x3A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91B4u;
        // 0x3a91b8: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A91BCu;
        goto label_3a91bc;
    }
    ctx->pc = 0x3A91B4u;
    {
        const bool branch_taken_0x3a91b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a91b4) {
            ctx->pc = 0x3A91B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A91B4u;
            // 0x3a91b8: 0x96660000  lhu         $a2, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9118;
        }
    }
    ctx->pc = 0x3A91BCu;
label_3a91bc:
    // 0x3a91bc: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x3a91bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3a91c0:
    // 0x3a91c0: 0x8eb50014  lw          $s5, 0x14($s5)
    ctx->pc = 0x3a91c0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3a91c4:
    // 0x3a91c4: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x3a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3a91c8:
    // 0x3a91c8: 0x16a2fed9  bne         $s5, $v0, . + 4 + (-0x127 << 2)
label_3a91cc:
    if (ctx->pc == 0x3A91CCu) {
        ctx->pc = 0x3A91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91C8u;
        // 0x3a91cc: 0x8fb700e4  lw          $s7, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A91D0u;
        goto label_3a91d0;
    }
    ctx->pc = 0x3A91C8u;
    {
        const bool branch_taken_0x3a91c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91C8u;
        // 0x3a91cc: 0x8fb700e4  lw          $s7, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91c8) {
            ctx->pc = 0x3A8D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8d30;
        }
    }
    ctx->pc = 0x3A91D0u;
label_3a91d0:
    // 0x3a91d0: 0xc0e39c0  jal         func_38E700
label_3a91d4:
    if (ctx->pc == 0x3A91D4u) {
        ctx->pc = 0x3A91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91D0u;
        // 0x3a91d4: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A91D8u;
        goto label_3a91d8;
    }
    ctx->pc = 0x3A91D0u;
    SET_GPR_U32(ctx, 31, 0x3A91D8u);
    ctx->pc = 0x3A91D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A91D0u;
    // 0x3a91d4: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x3A91D0u, 0x3A91D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A91D8u;
label_3a91d8:
    // 0x3a91d8: 0x8fab00bc  lw          $t3, 0xBC($sp)
    ctx->pc = 0x3a91d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3a91dc:
    // 0x3a91dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3a91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3a91e0:
    // 0x3a91e0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x3a91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3a91e4:
    // 0x3a91e4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x3a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3a91e8:
    // 0x3a91e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3a91ec:
    // 0x3a91ec: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x3a91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_3a91f0:
    // 0x3a91f0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x3a91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a91f4:
    // 0x3a91f4: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x3a91f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3a91f8:
    // 0x3a91f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a91fc:
    // 0x3a91fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a9200:
    // 0x3a9200: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3a9200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3a9204:
    // 0x3a9204: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x3a9204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3a9208:
    // 0x3a9208: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x3a9208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3a920c:
    // 0x3a920c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x3a920cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3a9210:
    // 0x3a9210: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x3a9210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3a9214:
    // 0x3a9214: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x3a9214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3a9218:
    // 0x3a9218: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x3a9218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3a921c:
    // 0x3a921c: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x3a921cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3a9220:
    // 0x3a9220: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x3a9220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3a9224:
    // 0x3a9224: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x3a9224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3a9228:
    // 0x3a9228: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x3a9228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_3a922c:
    // 0x3a922c: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x3a922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a9230:
    // 0x3a9230: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x3a9230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a9234:
    // 0x3a9234: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x3a9234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a9238:
    // 0x3a9238: 0x3e00008  jr          $ra
label_3a923c:
    if (ctx->pc == 0x3A923Cu) {
        ctx->pc = 0x3A923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9238u;
        // 0x3a923c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9240u;
        goto label_fallthrough_0x3a9238;
    }
    ctx->pc = 0x3A9238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9238u;
        // 0x3a923c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a9238:
    ctx->pc = 0x3A9240u;
}
