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

// Function: sub_003C9A68
// Address: 0x3c9a68 - 0x3ca1f0
void sub_003C9A68_0x3c9a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9A68_0x3c9a68");
#endif

    switch (ctx->pc) {
        case 0x3c9a68u: goto label_3c9a68;
        case 0x3c9a6cu: goto label_3c9a6c;
        case 0x3c9a70u: goto label_3c9a70;
        case 0x3c9a74u: goto label_3c9a74;
        case 0x3c9a78u: goto label_3c9a78;
        case 0x3c9a7cu: goto label_3c9a7c;
        case 0x3c9a80u: goto label_3c9a80;
        case 0x3c9a84u: goto label_3c9a84;
        case 0x3c9a88u: goto label_3c9a88;
        case 0x3c9a8cu: goto label_3c9a8c;
        case 0x3c9a90u: goto label_3c9a90;
        case 0x3c9a94u: goto label_3c9a94;
        case 0x3c9a98u: goto label_3c9a98;
        case 0x3c9a9cu: goto label_3c9a9c;
        case 0x3c9aa0u: goto label_3c9aa0;
        case 0x3c9aa4u: goto label_3c9aa4;
        case 0x3c9aa8u: goto label_3c9aa8;
        case 0x3c9aacu: goto label_3c9aac;
        case 0x3c9ab0u: goto label_3c9ab0;
        case 0x3c9ab4u: goto label_3c9ab4;
        case 0x3c9ab8u: goto label_3c9ab8;
        case 0x3c9abcu: goto label_3c9abc;
        case 0x3c9ac0u: goto label_3c9ac0;
        case 0x3c9ac4u: goto label_3c9ac4;
        case 0x3c9ac8u: goto label_3c9ac8;
        case 0x3c9accu: goto label_3c9acc;
        case 0x3c9ad0u: goto label_3c9ad0;
        case 0x3c9ad4u: goto label_3c9ad4;
        case 0x3c9ad8u: goto label_3c9ad8;
        case 0x3c9adcu: goto label_3c9adc;
        case 0x3c9ae0u: goto label_3c9ae0;
        case 0x3c9ae4u: goto label_3c9ae4;
        case 0x3c9ae8u: goto label_3c9ae8;
        case 0x3c9aecu: goto label_3c9aec;
        case 0x3c9af0u: goto label_3c9af0;
        case 0x3c9af4u: goto label_3c9af4;
        case 0x3c9af8u: goto label_3c9af8;
        case 0x3c9afcu: goto label_3c9afc;
        case 0x3c9b00u: goto label_3c9b00;
        case 0x3c9b04u: goto label_3c9b04;
        case 0x3c9b08u: goto label_3c9b08;
        case 0x3c9b0cu: goto label_3c9b0c;
        case 0x3c9b10u: goto label_3c9b10;
        case 0x3c9b14u: goto label_3c9b14;
        case 0x3c9b18u: goto label_3c9b18;
        case 0x3c9b1cu: goto label_3c9b1c;
        case 0x3c9b20u: goto label_3c9b20;
        case 0x3c9b24u: goto label_3c9b24;
        case 0x3c9b28u: goto label_3c9b28;
        case 0x3c9b2cu: goto label_3c9b2c;
        case 0x3c9b30u: goto label_3c9b30;
        case 0x3c9b34u: goto label_3c9b34;
        case 0x3c9b38u: goto label_3c9b38;
        case 0x3c9b3cu: goto label_3c9b3c;
        case 0x3c9b40u: goto label_3c9b40;
        case 0x3c9b44u: goto label_3c9b44;
        case 0x3c9b48u: goto label_3c9b48;
        case 0x3c9b4cu: goto label_3c9b4c;
        case 0x3c9b50u: goto label_3c9b50;
        case 0x3c9b54u: goto label_3c9b54;
        case 0x3c9b58u: goto label_3c9b58;
        case 0x3c9b5cu: goto label_3c9b5c;
        case 0x3c9b60u: goto label_3c9b60;
        case 0x3c9b64u: goto label_3c9b64;
        case 0x3c9b68u: goto label_3c9b68;
        case 0x3c9b6cu: goto label_3c9b6c;
        case 0x3c9b70u: goto label_3c9b70;
        case 0x3c9b74u: goto label_3c9b74;
        case 0x3c9b78u: goto label_3c9b78;
        case 0x3c9b7cu: goto label_3c9b7c;
        case 0x3c9b80u: goto label_3c9b80;
        case 0x3c9b84u: goto label_3c9b84;
        case 0x3c9b88u: goto label_3c9b88;
        case 0x3c9b8cu: goto label_3c9b8c;
        case 0x3c9b90u: goto label_3c9b90;
        case 0x3c9b94u: goto label_3c9b94;
        case 0x3c9b98u: goto label_3c9b98;
        case 0x3c9b9cu: goto label_3c9b9c;
        case 0x3c9ba0u: goto label_3c9ba0;
        case 0x3c9ba4u: goto label_3c9ba4;
        case 0x3c9ba8u: goto label_3c9ba8;
        case 0x3c9bacu: goto label_3c9bac;
        case 0x3c9bb0u: goto label_3c9bb0;
        case 0x3c9bb4u: goto label_3c9bb4;
        case 0x3c9bb8u: goto label_3c9bb8;
        case 0x3c9bbcu: goto label_3c9bbc;
        case 0x3c9bc0u: goto label_3c9bc0;
        case 0x3c9bc4u: goto label_3c9bc4;
        case 0x3c9bc8u: goto label_3c9bc8;
        case 0x3c9bccu: goto label_3c9bcc;
        case 0x3c9bd0u: goto label_3c9bd0;
        case 0x3c9bd4u: goto label_3c9bd4;
        case 0x3c9bd8u: goto label_3c9bd8;
        case 0x3c9bdcu: goto label_3c9bdc;
        case 0x3c9be0u: goto label_3c9be0;
        case 0x3c9be4u: goto label_3c9be4;
        case 0x3c9be8u: goto label_3c9be8;
        case 0x3c9becu: goto label_3c9bec;
        case 0x3c9bf0u: goto label_3c9bf0;
        case 0x3c9bf4u: goto label_3c9bf4;
        case 0x3c9bf8u: goto label_3c9bf8;
        case 0x3c9bfcu: goto label_3c9bfc;
        case 0x3c9c00u: goto label_3c9c00;
        case 0x3c9c04u: goto label_3c9c04;
        case 0x3c9c08u: goto label_3c9c08;
        case 0x3c9c0cu: goto label_3c9c0c;
        case 0x3c9c10u: goto label_3c9c10;
        case 0x3c9c14u: goto label_3c9c14;
        case 0x3c9c18u: goto label_3c9c18;
        case 0x3c9c1cu: goto label_3c9c1c;
        case 0x3c9c20u: goto label_3c9c20;
        case 0x3c9c24u: goto label_3c9c24;
        case 0x3c9c28u: goto label_3c9c28;
        case 0x3c9c2cu: goto label_3c9c2c;
        case 0x3c9c30u: goto label_3c9c30;
        case 0x3c9c34u: goto label_3c9c34;
        case 0x3c9c38u: goto label_3c9c38;
        case 0x3c9c3cu: goto label_3c9c3c;
        case 0x3c9c40u: goto label_3c9c40;
        case 0x3c9c44u: goto label_3c9c44;
        case 0x3c9c48u: goto label_3c9c48;
        case 0x3c9c4cu: goto label_3c9c4c;
        case 0x3c9c50u: goto label_3c9c50;
        case 0x3c9c54u: goto label_3c9c54;
        case 0x3c9c58u: goto label_3c9c58;
        case 0x3c9c5cu: goto label_3c9c5c;
        case 0x3c9c60u: goto label_3c9c60;
        case 0x3c9c64u: goto label_3c9c64;
        case 0x3c9c68u: goto label_3c9c68;
        case 0x3c9c6cu: goto label_3c9c6c;
        case 0x3c9c70u: goto label_3c9c70;
        case 0x3c9c74u: goto label_3c9c74;
        case 0x3c9c78u: goto label_3c9c78;
        case 0x3c9c7cu: goto label_3c9c7c;
        case 0x3c9c80u: goto label_3c9c80;
        case 0x3c9c84u: goto label_3c9c84;
        case 0x3c9c88u: goto label_3c9c88;
        case 0x3c9c8cu: goto label_3c9c8c;
        case 0x3c9c90u: goto label_3c9c90;
        case 0x3c9c94u: goto label_3c9c94;
        case 0x3c9c98u: goto label_3c9c98;
        case 0x3c9c9cu: goto label_3c9c9c;
        case 0x3c9ca0u: goto label_3c9ca0;
        case 0x3c9ca4u: goto label_3c9ca4;
        case 0x3c9ca8u: goto label_3c9ca8;
        case 0x3c9cacu: goto label_3c9cac;
        case 0x3c9cb0u: goto label_3c9cb0;
        case 0x3c9cb4u: goto label_3c9cb4;
        case 0x3c9cb8u: goto label_3c9cb8;
        case 0x3c9cbcu: goto label_3c9cbc;
        case 0x3c9cc0u: goto label_3c9cc0;
        case 0x3c9cc4u: goto label_3c9cc4;
        case 0x3c9cc8u: goto label_3c9cc8;
        case 0x3c9cccu: goto label_3c9ccc;
        case 0x3c9cd0u: goto label_3c9cd0;
        case 0x3c9cd4u: goto label_3c9cd4;
        case 0x3c9cd8u: goto label_3c9cd8;
        case 0x3c9cdcu: goto label_3c9cdc;
        case 0x3c9ce0u: goto label_3c9ce0;
        case 0x3c9ce4u: goto label_3c9ce4;
        case 0x3c9ce8u: goto label_3c9ce8;
        case 0x3c9cecu: goto label_3c9cec;
        case 0x3c9cf0u: goto label_3c9cf0;
        case 0x3c9cf4u: goto label_3c9cf4;
        case 0x3c9cf8u: goto label_3c9cf8;
        case 0x3c9cfcu: goto label_3c9cfc;
        case 0x3c9d00u: goto label_3c9d00;
        case 0x3c9d04u: goto label_3c9d04;
        case 0x3c9d08u: goto label_3c9d08;
        case 0x3c9d0cu: goto label_3c9d0c;
        case 0x3c9d10u: goto label_3c9d10;
        case 0x3c9d14u: goto label_3c9d14;
        case 0x3c9d18u: goto label_3c9d18;
        case 0x3c9d1cu: goto label_3c9d1c;
        case 0x3c9d20u: goto label_3c9d20;
        case 0x3c9d24u: goto label_3c9d24;
        case 0x3c9d28u: goto label_3c9d28;
        case 0x3c9d2cu: goto label_3c9d2c;
        case 0x3c9d30u: goto label_3c9d30;
        case 0x3c9d34u: goto label_3c9d34;
        case 0x3c9d38u: goto label_3c9d38;
        case 0x3c9d3cu: goto label_3c9d3c;
        case 0x3c9d40u: goto label_3c9d40;
        case 0x3c9d44u: goto label_3c9d44;
        case 0x3c9d48u: goto label_3c9d48;
        case 0x3c9d4cu: goto label_3c9d4c;
        case 0x3c9d50u: goto label_3c9d50;
        case 0x3c9d54u: goto label_3c9d54;
        case 0x3c9d58u: goto label_3c9d58;
        case 0x3c9d5cu: goto label_3c9d5c;
        case 0x3c9d60u: goto label_3c9d60;
        case 0x3c9d64u: goto label_3c9d64;
        case 0x3c9d68u: goto label_3c9d68;
        case 0x3c9d6cu: goto label_3c9d6c;
        case 0x3c9d70u: goto label_3c9d70;
        case 0x3c9d74u: goto label_3c9d74;
        case 0x3c9d78u: goto label_3c9d78;
        case 0x3c9d7cu: goto label_3c9d7c;
        case 0x3c9d80u: goto label_3c9d80;
        case 0x3c9d84u: goto label_3c9d84;
        case 0x3c9d88u: goto label_3c9d88;
        case 0x3c9d8cu: goto label_3c9d8c;
        case 0x3c9d90u: goto label_3c9d90;
        case 0x3c9d94u: goto label_3c9d94;
        case 0x3c9d98u: goto label_3c9d98;
        case 0x3c9d9cu: goto label_3c9d9c;
        case 0x3c9da0u: goto label_3c9da0;
        case 0x3c9da4u: goto label_3c9da4;
        case 0x3c9da8u: goto label_3c9da8;
        case 0x3c9dacu: goto label_3c9dac;
        case 0x3c9db0u: goto label_3c9db0;
        case 0x3c9db4u: goto label_3c9db4;
        case 0x3c9db8u: goto label_3c9db8;
        case 0x3c9dbcu: goto label_3c9dbc;
        case 0x3c9dc0u: goto label_3c9dc0;
        case 0x3c9dc4u: goto label_3c9dc4;
        case 0x3c9dc8u: goto label_3c9dc8;
        case 0x3c9dccu: goto label_3c9dcc;
        case 0x3c9dd0u: goto label_3c9dd0;
        case 0x3c9dd4u: goto label_3c9dd4;
        case 0x3c9dd8u: goto label_3c9dd8;
        case 0x3c9ddcu: goto label_3c9ddc;
        case 0x3c9de0u: goto label_3c9de0;
        case 0x3c9de4u: goto label_3c9de4;
        case 0x3c9de8u: goto label_3c9de8;
        case 0x3c9decu: goto label_3c9dec;
        case 0x3c9df0u: goto label_3c9df0;
        case 0x3c9df4u: goto label_3c9df4;
        case 0x3c9df8u: goto label_3c9df8;
        case 0x3c9dfcu: goto label_3c9dfc;
        case 0x3c9e00u: goto label_3c9e00;
        case 0x3c9e04u: goto label_3c9e04;
        case 0x3c9e08u: goto label_3c9e08;
        case 0x3c9e0cu: goto label_3c9e0c;
        case 0x3c9e10u: goto label_3c9e10;
        case 0x3c9e14u: goto label_3c9e14;
        case 0x3c9e18u: goto label_3c9e18;
        case 0x3c9e1cu: goto label_3c9e1c;
        case 0x3c9e20u: goto label_3c9e20;
        case 0x3c9e24u: goto label_3c9e24;
        case 0x3c9e28u: goto label_3c9e28;
        case 0x3c9e2cu: goto label_3c9e2c;
        case 0x3c9e30u: goto label_3c9e30;
        case 0x3c9e34u: goto label_3c9e34;
        case 0x3c9e38u: goto label_3c9e38;
        case 0x3c9e3cu: goto label_3c9e3c;
        case 0x3c9e40u: goto label_3c9e40;
        case 0x3c9e44u: goto label_3c9e44;
        case 0x3c9e48u: goto label_3c9e48;
        case 0x3c9e4cu: goto label_3c9e4c;
        case 0x3c9e50u: goto label_3c9e50;
        case 0x3c9e54u: goto label_3c9e54;
        case 0x3c9e58u: goto label_3c9e58;
        case 0x3c9e5cu: goto label_3c9e5c;
        case 0x3c9e60u: goto label_3c9e60;
        case 0x3c9e64u: goto label_3c9e64;
        case 0x3c9e68u: goto label_3c9e68;
        case 0x3c9e6cu: goto label_3c9e6c;
        case 0x3c9e70u: goto label_3c9e70;
        case 0x3c9e74u: goto label_3c9e74;
        case 0x3c9e78u: goto label_3c9e78;
        case 0x3c9e7cu: goto label_3c9e7c;
        case 0x3c9e80u: goto label_3c9e80;
        case 0x3c9e84u: goto label_3c9e84;
        case 0x3c9e88u: goto label_3c9e88;
        case 0x3c9e8cu: goto label_3c9e8c;
        case 0x3c9e90u: goto label_3c9e90;
        case 0x3c9e94u: goto label_3c9e94;
        case 0x3c9e98u: goto label_3c9e98;
        case 0x3c9e9cu: goto label_3c9e9c;
        case 0x3c9ea0u: goto label_3c9ea0;
        case 0x3c9ea4u: goto label_3c9ea4;
        case 0x3c9ea8u: goto label_3c9ea8;
        case 0x3c9eacu: goto label_3c9eac;
        case 0x3c9eb0u: goto label_3c9eb0;
        case 0x3c9eb4u: goto label_3c9eb4;
        case 0x3c9eb8u: goto label_3c9eb8;
        case 0x3c9ebcu: goto label_3c9ebc;
        case 0x3c9ec0u: goto label_3c9ec0;
        case 0x3c9ec4u: goto label_3c9ec4;
        case 0x3c9ec8u: goto label_3c9ec8;
        case 0x3c9eccu: goto label_3c9ecc;
        case 0x3c9ed0u: goto label_3c9ed0;
        case 0x3c9ed4u: goto label_3c9ed4;
        case 0x3c9ed8u: goto label_3c9ed8;
        case 0x3c9edcu: goto label_3c9edc;
        case 0x3c9ee0u: goto label_3c9ee0;
        case 0x3c9ee4u: goto label_3c9ee4;
        case 0x3c9ee8u: goto label_3c9ee8;
        case 0x3c9eecu: goto label_3c9eec;
        case 0x3c9ef0u: goto label_3c9ef0;
        case 0x3c9ef4u: goto label_3c9ef4;
        case 0x3c9ef8u: goto label_3c9ef8;
        case 0x3c9efcu: goto label_3c9efc;
        case 0x3c9f00u: goto label_3c9f00;
        case 0x3c9f04u: goto label_3c9f04;
        case 0x3c9f08u: goto label_3c9f08;
        case 0x3c9f0cu: goto label_3c9f0c;
        case 0x3c9f10u: goto label_3c9f10;
        case 0x3c9f14u: goto label_3c9f14;
        case 0x3c9f18u: goto label_3c9f18;
        case 0x3c9f1cu: goto label_3c9f1c;
        case 0x3c9f20u: goto label_3c9f20;
        case 0x3c9f24u: goto label_3c9f24;
        case 0x3c9f28u: goto label_3c9f28;
        case 0x3c9f2cu: goto label_3c9f2c;
        case 0x3c9f30u: goto label_3c9f30;
        case 0x3c9f34u: goto label_3c9f34;
        case 0x3c9f38u: goto label_3c9f38;
        case 0x3c9f3cu: goto label_3c9f3c;
        case 0x3c9f40u: goto label_3c9f40;
        case 0x3c9f44u: goto label_3c9f44;
        case 0x3c9f48u: goto label_3c9f48;
        case 0x3c9f4cu: goto label_3c9f4c;
        case 0x3c9f50u: goto label_3c9f50;
        case 0x3c9f54u: goto label_3c9f54;
        case 0x3c9f58u: goto label_3c9f58;
        case 0x3c9f5cu: goto label_3c9f5c;
        case 0x3c9f60u: goto label_3c9f60;
        case 0x3c9f64u: goto label_3c9f64;
        case 0x3c9f68u: goto label_3c9f68;
        case 0x3c9f6cu: goto label_3c9f6c;
        case 0x3c9f70u: goto label_3c9f70;
        case 0x3c9f74u: goto label_3c9f74;
        case 0x3c9f78u: goto label_3c9f78;
        case 0x3c9f7cu: goto label_3c9f7c;
        case 0x3c9f80u: goto label_3c9f80;
        case 0x3c9f84u: goto label_3c9f84;
        case 0x3c9f88u: goto label_3c9f88;
        case 0x3c9f8cu: goto label_3c9f8c;
        case 0x3c9f90u: goto label_3c9f90;
        case 0x3c9f94u: goto label_3c9f94;
        case 0x3c9f98u: goto label_3c9f98;
        case 0x3c9f9cu: goto label_3c9f9c;
        case 0x3c9fa0u: goto label_3c9fa0;
        case 0x3c9fa4u: goto label_3c9fa4;
        case 0x3c9fa8u: goto label_3c9fa8;
        case 0x3c9facu: goto label_3c9fac;
        case 0x3c9fb0u: goto label_3c9fb0;
        case 0x3c9fb4u: goto label_3c9fb4;
        case 0x3c9fb8u: goto label_3c9fb8;
        case 0x3c9fbcu: goto label_3c9fbc;
        case 0x3c9fc0u: goto label_3c9fc0;
        case 0x3c9fc4u: goto label_3c9fc4;
        case 0x3c9fc8u: goto label_3c9fc8;
        case 0x3c9fccu: goto label_3c9fcc;
        case 0x3c9fd0u: goto label_3c9fd0;
        case 0x3c9fd4u: goto label_3c9fd4;
        case 0x3c9fd8u: goto label_3c9fd8;
        case 0x3c9fdcu: goto label_3c9fdc;
        case 0x3c9fe0u: goto label_3c9fe0;
        case 0x3c9fe4u: goto label_3c9fe4;
        case 0x3c9fe8u: goto label_3c9fe8;
        case 0x3c9fecu: goto label_3c9fec;
        case 0x3c9ff0u: goto label_3c9ff0;
        case 0x3c9ff4u: goto label_3c9ff4;
        case 0x3c9ff8u: goto label_3c9ff8;
        case 0x3c9ffcu: goto label_3c9ffc;
        case 0x3ca000u: goto label_3ca000;
        case 0x3ca004u: goto label_3ca004;
        case 0x3ca008u: goto label_3ca008;
        case 0x3ca00cu: goto label_3ca00c;
        case 0x3ca010u: goto label_3ca010;
        case 0x3ca014u: goto label_3ca014;
        case 0x3ca018u: goto label_3ca018;
        case 0x3ca01cu: goto label_3ca01c;
        case 0x3ca020u: goto label_3ca020;
        case 0x3ca024u: goto label_3ca024;
        case 0x3ca028u: goto label_3ca028;
        case 0x3ca02cu: goto label_3ca02c;
        case 0x3ca030u: goto label_3ca030;
        case 0x3ca034u: goto label_3ca034;
        case 0x3ca038u: goto label_3ca038;
        case 0x3ca03cu: goto label_3ca03c;
        case 0x3ca040u: goto label_3ca040;
        case 0x3ca044u: goto label_3ca044;
        case 0x3ca048u: goto label_3ca048;
        case 0x3ca04cu: goto label_3ca04c;
        case 0x3ca050u: goto label_3ca050;
        case 0x3ca054u: goto label_3ca054;
        case 0x3ca058u: goto label_3ca058;
        case 0x3ca05cu: goto label_3ca05c;
        case 0x3ca060u: goto label_3ca060;
        case 0x3ca064u: goto label_3ca064;
        case 0x3ca068u: goto label_3ca068;
        case 0x3ca06cu: goto label_3ca06c;
        case 0x3ca070u: goto label_3ca070;
        case 0x3ca074u: goto label_3ca074;
        case 0x3ca078u: goto label_3ca078;
        case 0x3ca07cu: goto label_3ca07c;
        case 0x3ca080u: goto label_3ca080;
        case 0x3ca084u: goto label_3ca084;
        case 0x3ca088u: goto label_3ca088;
        case 0x3ca08cu: goto label_3ca08c;
        case 0x3ca090u: goto label_3ca090;
        case 0x3ca094u: goto label_3ca094;
        case 0x3ca098u: goto label_3ca098;
        case 0x3ca09cu: goto label_3ca09c;
        case 0x3ca0a0u: goto label_3ca0a0;
        case 0x3ca0a4u: goto label_3ca0a4;
        case 0x3ca0a8u: goto label_3ca0a8;
        case 0x3ca0acu: goto label_3ca0ac;
        case 0x3ca0b0u: goto label_3ca0b0;
        case 0x3ca0b4u: goto label_3ca0b4;
        case 0x3ca0b8u: goto label_3ca0b8;
        case 0x3ca0bcu: goto label_3ca0bc;
        case 0x3ca0c0u: goto label_3ca0c0;
        case 0x3ca0c4u: goto label_3ca0c4;
        case 0x3ca0c8u: goto label_3ca0c8;
        case 0x3ca0ccu: goto label_3ca0cc;
        case 0x3ca0d0u: goto label_3ca0d0;
        case 0x3ca0d4u: goto label_3ca0d4;
        case 0x3ca0d8u: goto label_3ca0d8;
        case 0x3ca0dcu: goto label_3ca0dc;
        case 0x3ca0e0u: goto label_3ca0e0;
        case 0x3ca0e4u: goto label_3ca0e4;
        case 0x3ca0e8u: goto label_3ca0e8;
        case 0x3ca0ecu: goto label_3ca0ec;
        case 0x3ca0f0u: goto label_3ca0f0;
        case 0x3ca0f4u: goto label_3ca0f4;
        case 0x3ca0f8u: goto label_3ca0f8;
        case 0x3ca0fcu: goto label_3ca0fc;
        case 0x3ca100u: goto label_3ca100;
        case 0x3ca104u: goto label_3ca104;
        case 0x3ca108u: goto label_3ca108;
        case 0x3ca10cu: goto label_3ca10c;
        case 0x3ca110u: goto label_3ca110;
        case 0x3ca114u: goto label_3ca114;
        case 0x3ca118u: goto label_3ca118;
        case 0x3ca11cu: goto label_3ca11c;
        case 0x3ca120u: goto label_3ca120;
        case 0x3ca124u: goto label_3ca124;
        case 0x3ca128u: goto label_3ca128;
        case 0x3ca12cu: goto label_3ca12c;
        case 0x3ca130u: goto label_3ca130;
        case 0x3ca134u: goto label_3ca134;
        case 0x3ca138u: goto label_3ca138;
        case 0x3ca13cu: goto label_3ca13c;
        case 0x3ca140u: goto label_3ca140;
        case 0x3ca144u: goto label_3ca144;
        case 0x3ca148u: goto label_3ca148;
        case 0x3ca14cu: goto label_3ca14c;
        case 0x3ca150u: goto label_3ca150;
        case 0x3ca154u: goto label_3ca154;
        case 0x3ca158u: goto label_3ca158;
        case 0x3ca15cu: goto label_3ca15c;
        case 0x3ca160u: goto label_3ca160;
        case 0x3ca164u: goto label_3ca164;
        case 0x3ca168u: goto label_3ca168;
        case 0x3ca16cu: goto label_3ca16c;
        case 0x3ca170u: goto label_3ca170;
        case 0x3ca174u: goto label_3ca174;
        case 0x3ca178u: goto label_3ca178;
        case 0x3ca17cu: goto label_3ca17c;
        case 0x3ca180u: goto label_3ca180;
        case 0x3ca184u: goto label_3ca184;
        case 0x3ca188u: goto label_3ca188;
        case 0x3ca18cu: goto label_3ca18c;
        case 0x3ca190u: goto label_3ca190;
        case 0x3ca194u: goto label_3ca194;
        case 0x3ca198u: goto label_3ca198;
        case 0x3ca19cu: goto label_3ca19c;
        case 0x3ca1a0u: goto label_3ca1a0;
        case 0x3ca1a4u: goto label_3ca1a4;
        case 0x3ca1a8u: goto label_3ca1a8;
        case 0x3ca1acu: goto label_3ca1ac;
        case 0x3ca1b0u: goto label_3ca1b0;
        case 0x3ca1b4u: goto label_3ca1b4;
        case 0x3ca1b8u: goto label_3ca1b8;
        case 0x3ca1bcu: goto label_3ca1bc;
        case 0x3ca1c0u: goto label_3ca1c0;
        case 0x3ca1c4u: goto label_3ca1c4;
        case 0x3ca1c8u: goto label_3ca1c8;
        case 0x3ca1ccu: goto label_3ca1cc;
        case 0x3ca1d0u: goto label_3ca1d0;
        case 0x3ca1d4u: goto label_3ca1d4;
        case 0x3ca1d8u: goto label_3ca1d8;
        case 0x3ca1dcu: goto label_3ca1dc;
        case 0x3ca1e0u: goto label_3ca1e0;
        case 0x3ca1e4u: goto label_3ca1e4;
        case 0x3ca1e8u: goto label_3ca1e8;
        case 0x3ca1ecu: goto label_3ca1ec;
        default: break;
    }

    ctx->pc = 0x3c9a68u;

label_3c9a68:
    // 0x3c9a68: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3c9a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3c9a6c:
    // 0x3c9a6c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3c9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3c9a70:
    // 0x3c9a70: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3c9a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3c9a74:
    // 0x3c9a74: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3c9a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3c9a78:
    // 0x3c9a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c9a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a7c:
    // 0x3c9a7c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3c9a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3c9a80:
    // 0x3c9a80: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3c9a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3c9a84:
    // 0x3c9a84: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3c9a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3c9a88:
    // 0x3c9a88: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3c9a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3c9a8c:
    // 0x3c9a8c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c9a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3c9a90:
    // 0x3c9a90: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3c9a90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3c9a94:
    // 0x3c9a94: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3c9a94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3c9a98:
    // 0x3c9a98: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3c9a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3c9a9c:
    // 0x3c9a9c: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x3c9a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3c9aa0:
    // 0x3c9aa0: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
label_3c9aa4:
    if (ctx->pc == 0x3C9AA4u) {
        ctx->pc = 0x3C9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AA0u;
        // 0x3c9aa4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9AA8u;
        goto label_3c9aa8;
    }
    ctx->pc = 0x3C9AA0u;
    {
        const bool branch_taken_0x3c9aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AA0u;
        // 0x3c9aa4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9aa0) {
            ctx->pc = 0x3C9C10u;
            goto label_3c9c10;
        }
    }
    ctx->pc = 0x3C9AA8u;
label_3c9aa8:
    // 0x3c9aa8: 0xc106784  jal         func_419E10
label_3c9aac:
    if (ctx->pc == 0x3C9AACu) {
        ctx->pc = 0x3C9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9AA8u;
        // 0x3c9aac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9AB0u;
        goto label_3c9ab0;
    }
    ctx->pc = 0x3C9AA8u;
    SET_GPR_U32(ctx, 31, 0x3C9AB0u);
    ctx->pc = 0x3C9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9AA8u;
    // 0x3c9aac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3C9AA8u, 0x3C9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9AB0u;
label_3c9ab0:
    // 0x3c9ab0: 0xc6340014  lwc1        $f20, 0x14($s1)
    ctx->pc = 0x3c9ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9ab4:
    // 0x3c9ab4: 0x24470030  addiu       $a3, $v0, 0x30
    ctx->pc = 0x3c9ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3c9ab8:
    // 0x3c9ab8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c9ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c9abc:
    // 0x3c9abc: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x3c9abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9ac0:
    // 0x3c9ac0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3c9ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9ac4:
    // 0x3c9ac4: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x3c9ac4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c9ac8:
    // 0x3c9ac8: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x3c9ac8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c9acc:
    // 0x3c9acc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c9accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9ad0:
    // 0x3c9ad0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3c9ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9ad4:
    // 0x3c9ad4: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x3c9ad4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c9ad8:
    // 0x3c9ad8: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x3c9ad8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c9adc:
    // 0x3c9adc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3c9adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9ae0:
    // 0x3c9ae0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9ae4:
    // 0x3c9ae4: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x3c9ae4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c9ae8:
    // 0x3c9ae8: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x3c9ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_3c9aec:
    // 0x3c9aec: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x3c9aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_3c9af0:
    // 0x3c9af0: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3c9af0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_3c9af4:
    // 0x3c9af4: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x3c9af4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_3c9af8:
    // 0x3c9af8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c9afc:
    // 0x3c9afc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c9afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3c9b00:
    // 0x3c9b00: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c9b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9b04:
    // 0x3c9b04: 0x0  nop
    ctx->pc = 0x3c9b04u;
    // NOP
label_3c9b08:
    // 0x3c9b08: 0x450001ab  bc1f        . + 4 + (0x1AB << 2)
label_3c9b0c:
    if (ctx->pc == 0x3C9B0Cu) {
        ctx->pc = 0x3C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B08u;
        // 0x3c9b0c: 0xe7a40008  swc1        $f4, 0x8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B10u;
        goto label_3c9b10;
    }
    ctx->pc = 0x3C9B08u;
    {
        const bool branch_taken_0x3c9b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B08u;
        // 0x3c9b0c: 0xe7a40008  swc1        $f4, 0x8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9b08) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9B10u;
label_3c9b10:
    // 0x3c9b10: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3c9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c9b14:
    // 0x3c9b14: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c9b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c9b18:
    // 0x3c9b18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9b1c:
    // 0x3c9b1c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3c9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9b20:
    // 0x3c9b20: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3c9b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3c9b24:
    // 0x3c9b24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3c9b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9b28:
    // 0x3c9b28: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3c9b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3c9b2c:
    // 0x3c9b2c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3c9b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3c9b30:
    // 0x3c9b30: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c9b30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3c9b34:
    // 0x3c9b34: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x3c9b34u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c9b38:
    // 0x3c9b38: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x3c9b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9b3c:
    // 0x3c9b3c: 0x0  nop
    ctx->pc = 0x3c9b3cu;
    // NOP
label_3c9b40:
    // 0x3c9b40: 0x4500019d  bc1f        . + 4 + (0x19D << 2)
label_3c9b44:
    if (ctx->pc == 0x3C9B44u) {
        ctx->pc = 0x3C9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B40u;
        // 0x3c9b44: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B48u;
        goto label_3c9b48;
    }
    ctx->pc = 0x3C9B40u;
    {
        const bool branch_taken_0x3c9b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B40u;
        // 0x3c9b44: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9b40) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9B48u;
label_3c9b48:
    // 0x3c9b48: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x3c9b48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_3c9b4c:
    // 0x3c9b4c: 0x2463b298  addiu       $v1, $v1, -0x4D68
    ctx->pc = 0x3c9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3c9b50:
    // 0x3c9b50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c9b54:
    // 0x3c9b54: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x3c9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3c9b58:
    // 0x3c9b58: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x3c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_3c9b5c:
    // 0x3c9b5c: 0x252cc758  addiu       $t4, $t1, -0x38A8
    ctx->pc = 0x3c9b5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952792));
label_3c9b60:
    // 0x3c9b60: 0x69830007  ldl         $v1, 0x7($t4)
    ctx->pc = 0x3c9b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3c9b64:
    // 0x3c9b64: 0x6d830000  ldr         $v1, 0x0($t4)
    ctx->pc = 0x3c9b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3c9b68:
    // 0x3c9b68: 0x698a000f  ldl         $t2, 0xF($t4)
    ctx->pc = 0x3c9b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3c9b6c:
    // 0x3c9b6c: 0x6d8a0008  ldr         $t2, 0x8($t4)
    ctx->pc = 0x3c9b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3c9b70:
    // 0x3c9b70: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x3c9b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9b74:
    // 0x3c9b74: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x3c9b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9b78:
    // 0x3c9b78: 0xb3aa001f  sdl         $t2, 0x1F($sp)
    ctx->pc = 0x3c9b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9b7c:
    // 0x3c9b7c: 0xb7aa0018  sdr         $t2, 0x18($sp)
    ctx->pc = 0x3c9b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9b80:
    // 0x3c9b80: 0x40f809  jalr        $v0
label_3c9b84:
    if (ctx->pc == 0x3C9B84u) {
        ctx->pc = 0x3C9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B80u;
        // 0x3c9b84: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B88u;
        goto label_3c9b88;
    }
    ctx->pc = 0x3C9B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C9B88u);
        ctx->pc = 0x3C9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B80u;
        // 0x3c9b84: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B80u, 0x3C9B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C9B88u;
label_3c9b88:
    // 0x3c9b88: 0x1040018b  beqz        $v0, . + 4 + (0x18B << 2)
label_3c9b8c:
    if (ctx->pc == 0x3C9B8Cu) {
        ctx->pc = 0x3C9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B88u;
        // 0x3c9b8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B90u;
        goto label_3c9b90;
    }
    ctx->pc = 0x3C9B88u;
    {
        const bool branch_taken_0x3c9b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B88u;
        // 0x3c9b8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9b88) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9B90u;
label_3c9b90:
    // 0x3c9b90: 0xc104d24  jal         func_413490
label_3c9b94:
    if (ctx->pc == 0x3C9B94u) {
        ctx->pc = 0x3C9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B90u;
        // 0x3c9b94: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9B98u;
        goto label_3c9b98;
    }
    ctx->pc = 0x3C9B90u;
    SET_GPR_U32(ctx, 31, 0x3C9B98u);
    ctx->pc = 0x3C9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9B90u;
    // 0x3c9b94: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3C9B90u, 0x3C9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B98u;
label_3c9b98:
    // 0x3c9b98: 0x46140183  div.s       $f6, $f0, $f20
    ctx->pc = 0x3c9b98u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_3c9b9c:
    // 0x3c9b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c9b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c9ba0:
    // 0x3c9ba0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c9ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c9ba4:
    // 0x3c9ba4: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x3c9ba4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_3c9ba8:
    // 0x3c9ba8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x3c9ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9bac:
    // 0x3c9bac: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x3c9bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3c9bb0:
    // 0x3c9bb0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c9bb4:
    // 0x3c9bb4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3c9bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9bb8:
    // 0x3c9bb8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3c9bb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_3c9bbc:
    // 0x3c9bbc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3c9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9bc0:
    // 0x3c9bc0: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x3c9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3c9bc4:
    // 0x3c9bc4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3c9bc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c9bc8:
    // 0x3c9bc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c9bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c9bcc:
    // 0x3c9bcc: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x3c9bccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_3c9bd0:
    // 0x3c9bd0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3c9bd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3c9bd4:
    // 0x3c9bd4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3c9bd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3c9bd8:
    // 0x3c9bd8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c9bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9bdc:
    // 0x3c9bdc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3c9bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9be0:
    // 0x3c9be0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c9be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3c9be4:
    // 0x3c9be4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9be8:
    // 0x3c9be8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c9be8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3c9bec:
    // 0x3c9bec: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x3c9becu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c9bf0:
    // 0x3c9bf0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3c9bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9bf4:
    // 0x3c9bf4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3c9bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9bf8:
    // 0x3c9bf8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c9bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3c9bfc:
    // 0x3c9bfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9c00:
    // 0x3c9c00: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3c9c00u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3c9c04:
    // 0x3c9c04: 0x1000016c  b           . + 4 + (0x16C << 2)
label_3c9c08:
    if (ctx->pc == 0x3C9C08u) {
        ctx->pc = 0x3C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C04u;
        // 0x3c9c08: 0xe4450008  swc1        $f5, 0x8($v0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C0Cu;
        goto label_3c9c0c;
    }
    ctx->pc = 0x3C9C04u;
    {
        const bool branch_taken_0x3c9c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C04u;
        // 0x3c9c08: 0xe4450008  swc1        $f5, 0x8($v0) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9c04) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9C0Cu;
label_3c9c0c:
    // 0x3c9c0c: 0x0  nop
    ctx->pc = 0x3c9c0cu;
    // NOP
label_3c9c10:
    // 0x3c9c10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c9c14:
    // 0x3c9c14: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_3c9c18:
    if (ctx->pc == 0x3C9C18u) {
        ctx->pc = 0x3C9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C14u;
        // 0x3c9c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C1Cu;
        goto label_3c9c1c;
    }
    ctx->pc = 0x3C9C14u;
    {
        const bool branch_taken_0x3c9c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C14u;
        // 0x3c9c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9c14) {
            ctx->pc = 0x3C9C68u;
            goto label_3c9c68;
        }
    }
    ctx->pc = 0x3C9C1Cu;
label_3c9c1c:
    // 0x3c9c1c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c9c20:
    // 0x3c9c20: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3c9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9c24:
    // 0x3c9c24: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c9c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9c28:
    // 0x3c9c28: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3c9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9c2c:
    // 0x3c9c2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c9c2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c9c30:
    // 0x3c9c30: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3c9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9c34:
    // 0x3c9c34: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x3c9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9c38:
    // 0x3c9c38: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3c9c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3c9c3c:
    // 0x3c9c3c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x3c9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9c40:
    // 0x3c9c40: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c9c40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3c9c44:
    // 0x3c9c44: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3c9c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c9c48:
    // 0x3c9c48: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3c9c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9c4c:
    // 0x3c9c4c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c9c4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c9c50:
    // 0x3c9c50: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x3c9c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3c9c54:
    // 0x3c9c54: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3c9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9c58:
    // 0x3c9c58: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c9c58u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3c9c5c:
    // 0x3c9c5c: 0x10000156  b           . + 4 + (0x156 << 2)
label_3c9c60:
    if (ctx->pc == 0x3C9C60u) {
        ctx->pc = 0x3C9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C5Cu;
        // 0x3c9c60: 0xe444000c  swc1        $f4, 0xC($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C64u;
        goto label_3c9c64;
    }
    ctx->pc = 0x3C9C5Cu;
    {
        const bool branch_taken_0x3c9c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C5Cu;
        // 0x3c9c60: 0xe444000c  swc1        $f4, 0xC($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9c5c) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9C64u;
label_3c9c64:
    // 0x3c9c64: 0x0  nop
    ctx->pc = 0x3c9c64u;
    // NOP
label_3c9c68:
    // 0x3c9c68: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
label_3c9c6c:
    if (ctx->pc == 0x3C9C6Cu) {
        ctx->pc = 0x3C9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C68u;
        // 0x3c9c6c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9C70u;
        goto label_3c9c70;
    }
    ctx->pc = 0x3C9C68u;
    {
        const bool branch_taken_0x3c9c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C68u;
        // 0x3c9c6c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9c68) {
            ctx->pc = 0x3C9E00u;
            goto label_3c9e00;
        }
    }
    ctx->pc = 0x3C9C70u;
label_3c9c70:
    // 0x3c9c70: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3c9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3c9c74:
    // 0x3c9c74: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3c9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c9c78:
    // 0x3c9c78: 0x2470b298  addiu       $s0, $v1, -0x4D68
    ctx->pc = 0x3c9c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3c9c7c:
    // 0x3c9c7c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x3c9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_3c9c80:
    // 0x3c9c80: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x3c9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_3c9c84:
    // 0x3c9c84: 0xc4540050  lwc1        $f20, 0x50($v0)
    ctx->pc = 0x3c9c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9c88:
    // 0x3c9c88: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3c9c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9c8c:
    // 0x3c9c8c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3c9c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9c90:
    // 0x3c9c90: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x3c9c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9c94:
    // 0x3c9c94: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3c9c94u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3c9c98:
    // 0x3c9c98: 0xc4630014  lwc1        $f3, 0x14($v1)
    ctx->pc = 0x3c9c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9c9c:
    // 0x3c9c9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3c9c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3c9ca0:
    // 0x3c9ca0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3c9ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9ca4:
    // 0x3c9ca4: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x3c9ca4u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_3c9ca8:
    // 0x3c9ca8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3c9ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3c9cac:
    // 0x3c9cac: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x3c9cacu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_3c9cb0:
    // 0x3c9cb0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3c9cb0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3c9cb4:
    // 0x3c9cb4: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x3c9cb4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_3c9cb8:
    // 0x3c9cb8: 0xc106784  jal         func_419E10
label_3c9cbc:
    if (ctx->pc == 0x3C9CBCu) {
        ctx->pc = 0x3C9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9CB8u;
        // 0x3c9cbc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9CC0u;
        goto label_3c9cc0;
    }
    ctx->pc = 0x3C9CB8u;
    SET_GPR_U32(ctx, 31, 0x3C9CC0u);
    ctx->pc = 0x3C9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9CB8u;
    // 0x3c9cbc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3C9CB8u, 0x3C9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9CC0u;
label_3c9cc0:
    // 0x3c9cc0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3c9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3c9cc4:
    // 0x3c9cc4: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x3c9cc4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_3c9cc8:
    // 0x3c9cc8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x3c9cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9ccc:
    // 0x3c9ccc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c9cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3c9cd0:
    // 0x3c9cd0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3c9cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3c9cd4:
    // 0x3c9cd4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3c9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9cd8:
    // 0x3c9cd8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3c9cd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_3c9cdc:
    // 0x3c9cdc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3c9cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3c9ce0:
    // 0x3c9ce0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3c9ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9ce4:
    // 0x3c9ce4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x3c9ce4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_3c9ce8:
    // 0x3c9ce8: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x3c9ce8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3c9cec:
    // 0x3c9cec: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c9cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c9cf0:
    // 0x3c9cf0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3c9cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9cf4:
    // 0x3c9cf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c9cf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c9cf8:
    // 0x3c9cf8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3c9cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3c9cfc:
    // 0x3c9cfc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3c9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9d00:
    // 0x3c9d00: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c9d00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3c9d04:
    // 0x3c9d04: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3c9d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3c9d08:
    // 0x3c9d08: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9d0c:
    // 0x3c9d0c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c9d0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c9d10:
    // 0x3c9d10: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x3c9d10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3c9d14:
    // 0x3c9d14: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3c9d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c9d18:
    // 0x3c9d18: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3c9d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3c9d1c:
    // 0x3c9d1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3c9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9d20:
    // 0x3c9d20: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x3c9d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9d24:
    // 0x3c9d24: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x3c9d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9d28:
    // 0x3c9d28: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x3c9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9d2c:
    // 0x3c9d2c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3c9d2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c9d30:
    // 0x3c9d30: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3c9d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9d34:
    // 0x3c9d34: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3c9d34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3c9d38:
    // 0x3c9d38: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3c9d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9d3c:
    // 0x3c9d3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c9d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c9d40:
    // 0x3c9d40: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3c9d40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3c9d44:
    // 0x3c9d44: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x3c9d44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3c9d48:
    // 0x3c9d48: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x3c9d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9d4c:
    // 0x3c9d4c: 0x0  nop
    ctx->pc = 0x3c9d4cu;
    // NOP
label_3c9d50:
    // 0x3c9d50: 0x45000119  bc1f        . + 4 + (0x119 << 2)
label_3c9d54:
    if (ctx->pc == 0x3C9D54u) {
        ctx->pc = 0x3C9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D50u;
        // 0x3c9d54: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D58u;
        goto label_3c9d58;
    }
    ctx->pc = 0x3C9D50u;
    {
        const bool branch_taken_0x3c9d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D50u;
        // 0x3c9d54: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9d50) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9D58u;
label_3c9d58:
    // 0x3c9d58: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x3c9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_3c9d5c:
    // 0x3c9d5c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3c9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_3c9d60:
    // 0x3c9d60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c9d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c9d64:
    // 0x3c9d64: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3c9d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c9d68:
    // 0x3c9d68: 0x246cc758  addiu       $t4, $v1, -0x38A8
    ctx->pc = 0x3c9d68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952792));
label_3c9d6c:
    // 0x3c9d6c: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x3c9d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3c9d70:
    // 0x3c9d70: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x3c9d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3c9d74:
    // 0x3c9d74: 0x698a000f  ldl         $t2, 0xF($t4)
    ctx->pc = 0x3c9d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3c9d78:
    // 0x3c9d78: 0x6d8a0008  ldr         $t2, 0x8($t4)
    ctx->pc = 0x3c9d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3c9d7c:
    // 0x3c9d7c: 0xb3a90037  sdl         $t1, 0x37($sp)
    ctx->pc = 0x3c9d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9d80:
    // 0x3c9d80: 0xb7a90030  sdr         $t1, 0x30($sp)
    ctx->pc = 0x3c9d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9d84:
    // 0x3c9d84: 0xb3aa003f  sdl         $t2, 0x3F($sp)
    ctx->pc = 0x3c9d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9d88:
    // 0x3c9d88: 0xb7aa0038  sdr         $t2, 0x38($sp)
    ctx->pc = 0x3c9d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9d8c:
    // 0x3c9d8c: 0x40f809  jalr        $v0
label_3c9d90:
    if (ctx->pc == 0x3C9D90u) {
        ctx->pc = 0x3C9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D8Cu;
        // 0x3c9d90: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D94u;
        goto label_3c9d94;
    }
    ctx->pc = 0x3C9D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C9D94u);
        ctx->pc = 0x3C9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D8Cu;
        // 0x3c9d90: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D8Cu, 0x3C9D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C9D94u;
label_3c9d94:
    // 0x3c9d94: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
label_3c9d98:
    if (ctx->pc == 0x3C9D98u) {
        ctx->pc = 0x3C9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D94u;
        // 0x3c9d98: 0xc7a50030  lwc1        $f5, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9D9Cu;
        goto label_3c9d9c;
    }
    ctx->pc = 0x3C9D94u;
    {
        const bool branch_taken_0x3c9d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9D94u;
        // 0x3c9d98: 0xc7a50030  lwc1        $f5, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9d94) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9D9Cu;
label_3c9d9c:
    // 0x3c9d9c: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x3c9d9cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
label_3c9da0:
    // 0x3c9da0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3c9da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9da4:
    // 0x3c9da4: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x3c9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3c9da8:
    // 0x3c9da8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c9dac:
    // 0x3c9dac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c9dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c9db0:
    // 0x3c9db0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c9db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9db4:
    // 0x3c9db4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3c9db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9db8:
    // 0x3c9db8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3c9db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3c9dbc:
    // 0x3c9dbc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x3c9dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9dc0:
    // 0x3c9dc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c9dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c9dc4:
    // 0x3c9dc4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3c9dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3c9dc8:
    // 0x3c9dc8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3c9dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9dcc:
    // 0x3c9dcc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3c9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9dd0:
    // 0x3c9dd0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c9dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c9dd4:
    // 0x3c9dd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9dd8:
    // 0x3c9dd8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c9dd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c9ddc:
    // 0x3c9ddc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x3c9ddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c9de0:
    // 0x3c9de0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3c9de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9de4:
    // 0x3c9de4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3c9de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9de8:
    // 0x3c9de8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3c9de8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c9dec:
    // 0x3c9dec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3c9decu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3c9df0:
    // 0x3c9df0: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3c9df0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_3c9df4:
    // 0x3c9df4: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_3c9df8:
    if (ctx->pc == 0x3C9DF8u) {
        ctx->pc = 0x3C9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DF4u;
        // 0x3c9df8: 0xe4440008  swc1        $f4, 0x8($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9DFCu;
        goto label_3c9dfc;
    }
    ctx->pc = 0x3C9DF4u;
    {
        const bool branch_taken_0x3c9df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9DF4u;
        // 0x3c9df8: 0xe4440008  swc1        $f4, 0x8($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9df4) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9DFCu;
label_3c9dfc:
    // 0x3c9dfc: 0x0  nop
    ctx->pc = 0x3c9dfcu;
    // NOP
label_3c9e00:
    // 0x3c9e00: 0x14620071  bne         $v1, $v0, . + 4 + (0x71 << 2)
label_3c9e04:
    if (ctx->pc == 0x3C9E04u) {
        ctx->pc = 0x3C9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E00u;
        // 0x3c9e04: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E08u;
        goto label_3c9e08;
    }
    ctx->pc = 0x3C9E00u;
    {
        const bool branch_taken_0x3c9e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E00u;
        // 0x3c9e04: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9e00) {
            ctx->pc = 0x3C9FC8u;
            goto label_3c9fc8;
        }
    }
    ctx->pc = 0x3C9E08u;
label_3c9e08:
    // 0x3c9e08: 0xc106784  jal         func_419E10
label_3c9e0c:
    if (ctx->pc == 0x3C9E0Cu) {
        ctx->pc = 0x3C9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E08u;
        // 0x3c9e0c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E10u;
        goto label_3c9e10;
    }
    ctx->pc = 0x3C9E08u;
    SET_GPR_U32(ctx, 31, 0x3C9E10u);
    ctx->pc = 0x3C9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E08u;
    // 0x3c9e0c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3C9E08u, 0x3C9E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E10u;
label_3c9e10:
    // 0x3c9e10: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3c9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c9e14:
    // 0x3c9e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c9e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e18:
    // 0x3c9e18: 0xc106784  jal         func_419E10
label_3c9e1c:
    if (ctx->pc == 0x3C9E1Cu) {
        ctx->pc = 0x3C9E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E18u;
        // 0x3c9e1c: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E20u;
        goto label_3c9e20;
    }
    ctx->pc = 0x3C9E18u;
    SET_GPR_U32(ctx, 31, 0x3C9E20u);
    ctx->pc = 0x3C9E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E18u;
    // 0x3c9e1c: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3C9E18u, 0x3C9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E20u;
label_3c9e20:
    // 0x3c9e20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c9e20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9e24:
    // 0x3c9e24: 0xc6340014  lwc1        $f20, 0x14($s1)
    ctx->pc = 0x3c9e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9e28:
    // 0x3c9e28: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x3c9e28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c9e2c:
    // 0x3c9e2c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c9e30:
    // 0x3c9e30: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3c9e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9e34:
    // 0x3c9e34: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3c9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9e38:
    // 0x3c9e38: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x3c9e38u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c9e3c:
    // 0x3c9e3c: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x3c9e3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3c9e40:
    // 0x3c9e40: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3c9e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9e44:
    // 0x3c9e44: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3c9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9e48:
    // 0x3c9e48: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x3c9e48u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c9e4c:
    // 0x3c9e4c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x3c9e4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3c9e50:
    // 0x3c9e50: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3c9e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9e54:
    // 0x3c9e54: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9e58:
    // 0x3c9e58: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x3c9e58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3c9e5c:
    // 0x3c9e5c: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x3c9e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_3c9e60:
    // 0x3c9e60: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x3c9e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_3c9e64:
    // 0x3c9e64: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3c9e64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_3c9e68:
    // 0x3c9e68: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x3c9e68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_3c9e6c:
    // 0x3c9e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c9e70:
    // 0x3c9e70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c9e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3c9e74:
    // 0x3c9e74: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c9e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9e78:
    // 0x3c9e78: 0x0  nop
    ctx->pc = 0x3c9e78u;
    // NOP
label_3c9e7c:
    // 0x3c9e7c: 0x450000ce  bc1f        . + 4 + (0xCE << 2)
label_3c9e80:
    if (ctx->pc == 0x3C9E80u) {
        ctx->pc = 0x3C9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E7Cu;
        // 0x3c9e80: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9E84u;
        goto label_3c9e84;
    }
    ctx->pc = 0x3C9E7Cu;
    {
        const bool branch_taken_0x3c9e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E7Cu;
        // 0x3c9e80: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9e7c) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9E84u;
label_3c9e84:
    // 0x3c9e84: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3c9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c9e88:
    // 0x3c9e88: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c9e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c9e8c:
    // 0x3c9e8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c9e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9e90:
    // 0x3c9e90: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3c9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9e94:
    // 0x3c9e94: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3c9e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3c9e98:
    // 0x3c9e98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3c9e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9e9c:
    // 0x3c9e9c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3c9e9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3c9ea0:
    // 0x3c9ea0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3c9ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3c9ea4:
    // 0x3c9ea4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c9ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3c9ea8:
    // 0x3c9ea8: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x3c9ea8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c9eac:
    // 0x3c9eac: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x3c9eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9eb0:
    // 0x3c9eb0: 0x0  nop
    ctx->pc = 0x3c9eb0u;
    // NOP
label_3c9eb4:
    // 0x3c9eb4: 0x450000c0  bc1f        . + 4 + (0xC0 << 2)
label_3c9eb8:
    if (ctx->pc == 0x3C9EB8u) {
        ctx->pc = 0x3C9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EB4u;
        // 0x3c9eb8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9EBCu;
        goto label_3c9ebc;
    }
    ctx->pc = 0x3C9EB4u;
    {
        const bool branch_taken_0x3c9eb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EB4u;
        // 0x3c9eb8: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9eb4) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9EBCu;
label_3c9ebc:
    // 0x3c9ebc: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x3c9ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_3c9ec0:
    // 0x3c9ec0: 0x2463b298  addiu       $v1, $v1, -0x4D68
    ctx->pc = 0x3c9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3c9ec4:
    // 0x3c9ec4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c9ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c9ec8:
    // 0x3c9ec8: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x3c9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3c9ecc:
    // 0x3c9ecc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3c9ed0:
    // 0x3c9ed0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x3c9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_3c9ed4:
    // 0x3c9ed4: 0x252cc758  addiu       $t4, $t1, -0x38A8
    ctx->pc = 0x3c9ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952792));
label_3c9ed8:
    // 0x3c9ed8: 0x69830007  ldl         $v1, 0x7($t4)
    ctx->pc = 0x3c9ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3c9edc:
    // 0x3c9edc: 0x6d830000  ldr         $v1, 0x0($t4)
    ctx->pc = 0x3c9edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3c9ee0:
    // 0x3c9ee0: 0x698a000f  ldl         $t2, 0xF($t4)
    ctx->pc = 0x3c9ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3c9ee4:
    // 0x3c9ee4: 0x6d8a0008  ldr         $t2, 0x8($t4)
    ctx->pc = 0x3c9ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3c9ee8:
    // 0x3c9ee8: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x3c9ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9eec:
    // 0x3c9eec: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x3c9eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9ef0:
    // 0x3c9ef0: 0xb3aa005f  sdl         $t2, 0x5F($sp)
    ctx->pc = 0x3c9ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9ef4:
    // 0x3c9ef4: 0xb7aa0058  sdr         $t2, 0x58($sp)
    ctx->pc = 0x3c9ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3c9ef8:
    // 0x3c9ef8: 0x40f809  jalr        $v0
label_3c9efc:
    if (ctx->pc == 0x3C9EFCu) {
        ctx->pc = 0x3C9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EF8u;
        // 0x3c9efc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F00u;
        goto label_3c9f00;
    }
    ctx->pc = 0x3C9EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C9F00u);
        ctx->pc = 0x3C9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EF8u;
        // 0x3c9efc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9EF8u, 0x3C9F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C9F00u;
label_3c9f00:
    // 0x3c9f00: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_3c9f04:
    if (ctx->pc == 0x3C9F04u) {
        ctx->pc = 0x3C9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F00u;
        // 0x3c9f04: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F08u;
        goto label_3c9f08;
    }
    ctx->pc = 0x3C9F00u;
    {
        const bool branch_taken_0x3c9f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F00u;
        // 0x3c9f04: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f00) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9F08u;
label_3c9f08:
    // 0x3c9f08: 0xc104d24  jal         func_413490
label_3c9f0c:
    if (ctx->pc == 0x3C9F0Cu) {
        ctx->pc = 0x3C9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F08u;
        // 0x3c9f0c: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F10u;
        goto label_3c9f10;
    }
    ctx->pc = 0x3C9F08u;
    SET_GPR_U32(ctx, 31, 0x3C9F10u);
    ctx->pc = 0x3C9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9F08u;
    // 0x3c9f0c: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3C9F08u, 0x3C9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9F10u;
label_3c9f10:
    // 0x3c9f10: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x3c9f10u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_3c9f14:
    // 0x3c9f14: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x3c9f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9f18:
    // 0x3c9f18: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x3c9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9f1c:
    // 0x3c9f1c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3c9f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9f20:
    // 0x3c9f20: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3c9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9f24:
    // 0x3c9f24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9f28:
    // 0x3c9f28: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x3c9f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9f2c:
    // 0x3c9f2c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3c9f2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3c9f30:
    // 0x3c9f30: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3c9f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9f34:
    // 0x3c9f34: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3c9f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9f38:
    // 0x3c9f38: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c9f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3c9f3c:
    // 0x3c9f3c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3c9f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3c9f40:
    // 0x3c9f40: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3c9f40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3c9f44:
    // 0x3c9f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c9f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c9f48:
    // 0x3c9f48: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c9f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c9f4c:
    // 0x3c9f4c: 0x0  nop
    ctx->pc = 0x3c9f4cu;
    // NOP
label_3c9f50:
    // 0x3c9f50: 0x45000099  bc1f        . + 4 + (0x99 << 2)
label_3c9f54:
    if (ctx->pc == 0x3C9F54u) {
        ctx->pc = 0x3C9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F50u;
        // 0x3c9f54: 0xc7a60050  lwc1        $f6, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9F58u;
        goto label_3c9f58;
    }
    ctx->pc = 0x3C9F50u;
    {
        const bool branch_taken_0x3c9f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9F50u;
        // 0x3c9f54: 0xc7a60050  lwc1        $f6, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9f50) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9F58u;
label_3c9f58:
    // 0x3c9f58: 0x46142903  div.s       $f4, $f5, $f20
    ctx->pc = 0x3c9f58u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[5], ctx->f[20]); }
label_3c9f5c:
    // 0x3c9f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c9f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c9f60:
    // 0x3c9f60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c9f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c9f64:
    // 0x3c9f64: 0x4605a943  div.s       $f5, $f21, $f5
    ctx->pc = 0x3c9f64u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[21], ctx->f[5]); }
label_3c9f68:
    // 0x3c9f68: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3c9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9f6c:
    // 0x3c9f6c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c9f70:
    // 0x3c9f70: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3c9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9f74:
    // 0x3c9f74: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3c9f74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3c9f78:
    // 0x3c9f78: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3c9f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3c9f7c:
    // 0x3c9f7c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x3c9f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3c9f80:
    // 0x3c9f80: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3c9f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_3c9f84:
    // 0x3c9f84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9f88:
    // 0x3c9f88: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3c9f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_3c9f8c:
    // 0x3c9f8c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c9f8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3c9f90:
    // 0x3c9f90: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x3c9f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3c9f94:
    // 0x3c9f94: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c9f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9f98:
    // 0x3c9f98: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x3c9f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9f9c:
    // 0x3c9f9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9fa0:
    // 0x3c9fa0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c9fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3c9fa4:
    // 0x3c9fa4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c9fa4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c9fa8:
    // 0x3c9fa8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x3c9fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3c9fac:
    // 0x3c9fac: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3c9facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c9fb0:
    // 0x3c9fb0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x3c9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c9fb4:
    // 0x3c9fb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c9fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c9fb8:
    // 0x3c9fb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c9fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3c9fbc:
    // 0x3c9fbc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c9fbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3c9fc0:
    // 0x3c9fc0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_3c9fc4:
    if (ctx->pc == 0x3C9FC4u) {
        ctx->pc = 0x3C9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FC0u;
        // 0x3c9fc4: 0xe4440008  swc1        $f4, 0x8($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FC8u;
        goto label_3c9fc8;
    }
    ctx->pc = 0x3C9FC0u;
    {
        const bool branch_taken_0x3c9fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FC0u;
        // 0x3c9fc4: 0xe4440008  swc1        $f4, 0x8($v0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9fc0) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3C9FC8u;
label_3c9fc8:
    // 0x3c9fc8: 0x1462007c  bne         $v1, $v0, . + 4 + (0x7C << 2)
label_3c9fcc:
    if (ctx->pc == 0x3C9FCCu) {
        ctx->pc = 0x3C9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FC8u;
        // 0x3c9fcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FD0u;
        goto label_3c9fd0;
    }
    ctx->pc = 0x3C9FC8u;
    {
        const bool branch_taken_0x3c9fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FC8u;
        // 0x3c9fcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9fc8) {
            ctx->pc = 0x3CA1BCu;
            goto label_3ca1bc;
        }
    }
    ctx->pc = 0x3C9FD0u;
label_3c9fd0:
    // 0x3c9fd0: 0xc106784  jal         func_419E10
label_3c9fd4:
    if (ctx->pc == 0x3C9FD4u) {
        ctx->pc = 0x3C9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FD0u;
        // 0x3c9fd4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FD8u;
        goto label_3c9fd8;
    }
    ctx->pc = 0x3C9FD0u;
    SET_GPR_U32(ctx, 31, 0x3C9FD8u);
    ctx->pc = 0x3C9FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9FD0u;
    // 0x3c9fd4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3C9FD0u, 0x3C9FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9FD8u;
label_3c9fd8:
    // 0x3c9fd8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3c9fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c9fdc:
    // 0x3c9fdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c9fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9fe0:
    // 0x3c9fe0: 0xc106784  jal         func_419E10
label_3c9fe4:
    if (ctx->pc == 0x3C9FE4u) {
        ctx->pc = 0x3C9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9FE0u;
        // 0x3c9fe4: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9FE8u;
        goto label_3c9fe8;
    }
    ctx->pc = 0x3C9FE0u;
    SET_GPR_U32(ctx, 31, 0x3C9FE8u);
    ctx->pc = 0x3C9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9FE0u;
    // 0x3c9fe4: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3C9FE0u, 0x3C9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9FE8u;
label_3c9fe8:
    // 0x3c9fe8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c9fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c9fec:
    // 0x3c9fec: 0xc6340014  lwc1        $f20, 0x14($s1)
    ctx->pc = 0x3c9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c9ff0:
    // 0x3c9ff0: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x3c9ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_3c9ff4:
    // 0x3c9ff4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c9ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c9ff8:
    // 0x3c9ff8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3c9ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c9ffc:
    // 0x3c9ffc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3c9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca000:
    // 0x3ca000: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x3ca000u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ca004:
    // 0x3ca004: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x3ca004u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3ca008:
    // 0x3ca008: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3ca008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca00c:
    // 0x3ca00c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3ca00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca010:
    // 0x3ca010: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x3ca010u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ca014:
    // 0x3ca014: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x3ca014u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3ca018:
    // 0x3ca018: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3ca018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca01c:
    // 0x3ca01c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3ca01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca020:
    // 0x3ca020: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x3ca020u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ca024:
    // 0x3ca024: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x3ca024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_3ca028:
    // 0x3ca028: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x3ca028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_3ca02c:
    // 0x3ca02c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3ca02cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_3ca030:
    // 0x3ca030: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x3ca030u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_3ca034:
    // 0x3ca034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ca034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ca038:
    // 0x3ca038: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3ca038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3ca03c:
    // 0x3ca03c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3ca03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ca040:
    // 0x3ca040: 0x0  nop
    ctx->pc = 0x3ca040u;
    // NOP
label_3ca044:
    // 0x3ca044: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_3ca048:
    if (ctx->pc == 0x3CA048u) {
        ctx->pc = 0x3CA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA044u;
        // 0x3ca048: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA04Cu;
        goto label_3ca04c;
    }
    ctx->pc = 0x3CA044u;
    {
        const bool branch_taken_0x3ca044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA044u;
        // 0x3ca048: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca044) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3CA04Cu;
label_3ca04c:
    // 0x3ca04c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3ca04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ca050:
    // 0x3ca050: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3ca050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ca054:
    // 0x3ca054: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ca054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca058:
    // 0x3ca058: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3ca058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ca05c:
    // 0x3ca05c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3ca05cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3ca060:
    // 0x3ca060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3ca060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca064:
    // 0x3ca064: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3ca064u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3ca068:
    // 0x3ca068: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3ca068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3ca06c:
    // 0x3ca06c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ca06cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3ca070:
    // 0x3ca070: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x3ca070u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ca074:
    // 0x3ca074: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x3ca074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ca078:
    // 0x3ca078: 0x0  nop
    ctx->pc = 0x3ca078u;
    // NOP
label_3ca07c:
    // 0x3ca07c: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_3ca080:
    if (ctx->pc == 0x3CA080u) {
        ctx->pc = 0x3CA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA07Cu;
        // 0x3ca080: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA084u;
        goto label_3ca084;
    }
    ctx->pc = 0x3CA07Cu;
    {
        const bool branch_taken_0x3ca07c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA07Cu;
        // 0x3ca080: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca07c) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3CA084u;
label_3ca084:
    // 0x3ca084: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x3ca084u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_3ca088:
    // 0x3ca088: 0x2463b298  addiu       $v1, $v1, -0x4D68
    ctx->pc = 0x3ca088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3ca08c:
    // 0x3ca08c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3ca08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca090:
    // 0x3ca090: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x3ca090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3ca094:
    // 0x3ca094: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3ca094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ca098:
    // 0x3ca098: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x3ca098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_3ca09c:
    // 0x3ca09c: 0x252cc758  addiu       $t4, $t1, -0x38A8
    ctx->pc = 0x3ca09cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952792));
label_3ca0a0:
    // 0x3ca0a0: 0x69830007  ldl         $v1, 0x7($t4)
    ctx->pc = 0x3ca0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3ca0a4:
    // 0x3ca0a4: 0x6d830000  ldr         $v1, 0x0($t4)
    ctx->pc = 0x3ca0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3ca0a8:
    // 0x3ca0a8: 0x698a000f  ldl         $t2, 0xF($t4)
    ctx->pc = 0x3ca0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3ca0ac:
    // 0x3ca0ac: 0x6d8a0008  ldr         $t2, 0x8($t4)
    ctx->pc = 0x3ca0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3ca0b0:
    // 0x3ca0b0: 0xb3a30077  sdl         $v1, 0x77($sp)
    ctx->pc = 0x3ca0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ca0b4:
    // 0x3ca0b4: 0xb7a30070  sdr         $v1, 0x70($sp)
    ctx->pc = 0x3ca0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ca0b8:
    // 0x3ca0b8: 0xb3aa007f  sdl         $t2, 0x7F($sp)
    ctx->pc = 0x3ca0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ca0bc:
    // 0x3ca0bc: 0xb7aa0078  sdr         $t2, 0x78($sp)
    ctx->pc = 0x3ca0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ca0c0:
    // 0x3ca0c0: 0x40f809  jalr        $v0
label_3ca0c4:
    if (ctx->pc == 0x3CA0C4u) {
        ctx->pc = 0x3CA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0C0u;
        // 0x3ca0c4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA0C8u;
        goto label_3ca0c8;
    }
    ctx->pc = 0x3CA0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA0C8u);
        ctx->pc = 0x3CA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0C0u;
        // 0x3ca0c4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA0C0u, 0x3CA0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA0C8u;
label_3ca0c8:
    // 0x3ca0c8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3ca0cc:
    if (ctx->pc == 0x3CA0CCu) {
        ctx->pc = 0x3CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0C8u;
        // 0x3ca0cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA0D0u;
        goto label_3ca0d0;
    }
    ctx->pc = 0x3CA0C8u;
    {
        const bool branch_taken_0x3ca0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0C8u;
        // 0x3ca0cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca0c8) {
            ctx->pc = 0x3CA1B8u;
            goto label_3ca1b8;
        }
    }
    ctx->pc = 0x3CA0D0u;
label_3ca0d0:
    // 0x3ca0d0: 0xc104d24  jal         func_413490
label_3ca0d4:
    if (ctx->pc == 0x3CA0D4u) {
        ctx->pc = 0x3CA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0D0u;
        // 0x3ca0d4: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA0D8u;
        goto label_3ca0d8;
    }
    ctx->pc = 0x3CA0D0u;
    SET_GPR_U32(ctx, 31, 0x3CA0D8u);
    ctx->pc = 0x3CA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA0D0u;
    // 0x3ca0d4: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3CA0D0u, 0x3CA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0D8u;
label_3ca0d8:
    // 0x3ca0d8: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x3ca0d8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_3ca0dc:
    // 0x3ca0dc: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x3ca0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ca0e0:
    // 0x3ca0e0: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x3ca0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca0e4:
    // 0x3ca0e4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3ca0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca0e8:
    // 0x3ca0e8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3ca0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ca0ec:
    // 0x3ca0ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ca0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ca0f0:
    // 0x3ca0f0: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x3ca0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ca0f4:
    // 0x3ca0f4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3ca0f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3ca0f8:
    // 0x3ca0f8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3ca0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca0fc:
    // 0x3ca0fc: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x3ca0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ca100:
    // 0x3ca100: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3ca100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3ca104:
    // 0x3ca104: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ca104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3ca108:
    // 0x3ca108: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x3ca108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3ca10c:
    // 0x3ca10c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3ca10cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ca110:
    // 0x3ca110: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3ca110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ca114:
    // 0x3ca114: 0x0  nop
    ctx->pc = 0x3ca114u;
    // NOP
label_3ca118:
    // 0x3ca118: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_3ca11c:
    if (ctx->pc == 0x3CA11Cu) {
        ctx->pc = 0x3CA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA118u;
        // 0x3ca11c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA120u;
        goto label_3ca120;
    }
    ctx->pc = 0x3CA118u;
    {
        const bool branch_taken_0x3ca118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA118u;
        // 0x3ca11c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca118) {
            ctx->pc = 0x3CA1BCu;
            goto label_3ca1bc;
        }
    }
    ctx->pc = 0x3CA120u;
label_3ca120:
    // 0x3ca120: 0x46142803  div.s       $f0, $f5, $f20
    ctx->pc = 0x3ca120u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[20]); }
label_3ca124:
    // 0x3ca124: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ca124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ca128:
    // 0x3ca128: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3ca128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ca12c:
    // 0x3ca12c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x3ca12cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_3ca130:
    // 0x3ca130: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x3ca130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ca134:
    // 0x3ca134: 0x0  nop
    ctx->pc = 0x3ca134u;
    // NOP
label_3ca138:
    // 0x3ca138: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3ca13c:
    if (ctx->pc == 0x3CA13Cu) {
        ctx->pc = 0x3CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA138u;
        // 0x3ca13c: 0x46001981  sub.s       $f6, $f3, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA140u;
        goto label_3ca140;
    }
    ctx->pc = 0x3CA138u;
    {
        const bool branch_taken_0x3ca138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA138u;
        // 0x3ca13c: 0x46001981  sub.s       $f6, $f3, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca138) {
            ctx->pc = 0x3CA158u;
            goto label_3ca158;
        }
    }
    ctx->pc = 0x3CA140u;
label_3ca140:
    // 0x3ca140: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x3ca140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_3ca144:
    // 0x3ca144: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x3ca144u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_3ca148:
    // 0x3ca148: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x3ca148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3ca14c:
    // 0x3ca14c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3ca14cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3ca150:
    // 0x3ca150: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3ca150u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3ca154:
    // 0x3ca154: 0x0  nop
    ctx->pc = 0x3ca154u;
    // NOP
label_3ca158:
    // 0x3ca158: 0x4605a903  div.s       $f4, $f21, $f5
    ctx->pc = 0x3ca158u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[21], ctx->f[5]); }
label_3ca15c:
    // 0x3ca15c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x3ca15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca160:
    // 0x3ca160: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x3ca160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3ca164:
    // 0x3ca164: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3ca164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3ca168:
    // 0x3ca168: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ca168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca16c:
    // 0x3ca16c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3ca16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ca170:
    // 0x3ca170: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x3ca170u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_3ca174:
    // 0x3ca174: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3ca174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ca178:
    // 0x3ca178: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3ca178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_3ca17c:
    // 0x3ca17c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3ca17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3ca180:
    // 0x3ca180: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3ca180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ca184:
    // 0x3ca184: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3ca184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3ca188:
    // 0x3ca188: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3ca188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca18c:
    // 0x3ca18c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x3ca18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca190:
    // 0x3ca190: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3ca190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_3ca194:
    // 0x3ca194: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ca194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ca198:
    // 0x3ca198: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3ca198u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3ca19c:
    // 0x3ca19c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3ca19cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3ca1a0:
    // 0x3ca1a0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3ca1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca1a4:
    // 0x3ca1a4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x3ca1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ca1a8:
    // 0x3ca1a8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3ca1a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_3ca1ac:
    // 0x3ca1ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ca1acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ca1b0:
    // 0x3ca1b0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3ca1b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3ca1b4:
    // 0x3ca1b4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x3ca1b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3ca1b8:
    // 0x3ca1b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ca1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca1bc:
    // 0x3ca1bc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3ca1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ca1c0:
    // 0x3ca1c0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3ca1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ca1c4:
    // 0x3ca1c4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3ca1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ca1c8:
    // 0x3ca1c8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3ca1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ca1cc:
    // 0x3ca1cc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3ca1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ca1d0:
    // 0x3ca1d0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3ca1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ca1d4:
    // 0x3ca1d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ca1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3ca1d8:
    // 0x3ca1d8: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3ca1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ca1dc:
    // 0x3ca1dc: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3ca1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ca1e0:
    // 0x3ca1e0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3ca1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ca1e4:
    // 0x3ca1e4: 0x3e00008  jr          $ra
label_3ca1e8:
    if (ctx->pc == 0x3CA1E8u) {
        ctx->pc = 0x3CA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1E4u;
        // 0x3ca1e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA1ECu;
        goto label_3ca1ec;
    }
    ctx->pc = 0x3CA1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1E4u;
        // 0x3ca1e8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA1ECu;
label_3ca1ec:
    // 0x3ca1ec: 0x0  nop
    ctx->pc = 0x3ca1ecu;
    // NOP
    ctx->pc = 0x3ca1f0u;
}
