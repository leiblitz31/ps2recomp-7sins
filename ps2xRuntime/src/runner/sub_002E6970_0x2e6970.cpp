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

// Function: sub_002E6970
// Address: 0x2e6970 - 0x2e6f60
void sub_002E6970_0x2e6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6970_0x2e6970");
#endif

    switch (ctx->pc) {
        case 0x2e6970u: goto label_2e6970;
        case 0x2e6974u: goto label_2e6974;
        case 0x2e6978u: goto label_2e6978;
        case 0x2e697cu: goto label_2e697c;
        case 0x2e6980u: goto label_2e6980;
        case 0x2e6984u: goto label_2e6984;
        case 0x2e6988u: goto label_2e6988;
        case 0x2e698cu: goto label_2e698c;
        case 0x2e6990u: goto label_2e6990;
        case 0x2e6994u: goto label_2e6994;
        case 0x2e6998u: goto label_2e6998;
        case 0x2e699cu: goto label_2e699c;
        case 0x2e69a0u: goto label_2e69a0;
        case 0x2e69a4u: goto label_2e69a4;
        case 0x2e69a8u: goto label_2e69a8;
        case 0x2e69acu: goto label_2e69ac;
        case 0x2e69b0u: goto label_2e69b0;
        case 0x2e69b4u: goto label_2e69b4;
        case 0x2e69b8u: goto label_2e69b8;
        case 0x2e69bcu: goto label_2e69bc;
        case 0x2e69c0u: goto label_2e69c0;
        case 0x2e69c4u: goto label_2e69c4;
        case 0x2e69c8u: goto label_2e69c8;
        case 0x2e69ccu: goto label_2e69cc;
        case 0x2e69d0u: goto label_2e69d0;
        case 0x2e69d4u: goto label_2e69d4;
        case 0x2e69d8u: goto label_2e69d8;
        case 0x2e69dcu: goto label_2e69dc;
        case 0x2e69e0u: goto label_2e69e0;
        case 0x2e69e4u: goto label_2e69e4;
        case 0x2e69e8u: goto label_2e69e8;
        case 0x2e69ecu: goto label_2e69ec;
        case 0x2e69f0u: goto label_2e69f0;
        case 0x2e69f4u: goto label_2e69f4;
        case 0x2e69f8u: goto label_2e69f8;
        case 0x2e69fcu: goto label_2e69fc;
        case 0x2e6a00u: goto label_2e6a00;
        case 0x2e6a04u: goto label_2e6a04;
        case 0x2e6a08u: goto label_2e6a08;
        case 0x2e6a0cu: goto label_2e6a0c;
        case 0x2e6a10u: goto label_2e6a10;
        case 0x2e6a14u: goto label_2e6a14;
        case 0x2e6a18u: goto label_2e6a18;
        case 0x2e6a1cu: goto label_2e6a1c;
        case 0x2e6a20u: goto label_2e6a20;
        case 0x2e6a24u: goto label_2e6a24;
        case 0x2e6a28u: goto label_2e6a28;
        case 0x2e6a2cu: goto label_2e6a2c;
        case 0x2e6a30u: goto label_2e6a30;
        case 0x2e6a34u: goto label_2e6a34;
        case 0x2e6a38u: goto label_2e6a38;
        case 0x2e6a3cu: goto label_2e6a3c;
        case 0x2e6a40u: goto label_2e6a40;
        case 0x2e6a44u: goto label_2e6a44;
        case 0x2e6a48u: goto label_2e6a48;
        case 0x2e6a4cu: goto label_2e6a4c;
        case 0x2e6a50u: goto label_2e6a50;
        case 0x2e6a54u: goto label_2e6a54;
        case 0x2e6a58u: goto label_2e6a58;
        case 0x2e6a5cu: goto label_2e6a5c;
        case 0x2e6a60u: goto label_2e6a60;
        case 0x2e6a64u: goto label_2e6a64;
        case 0x2e6a68u: goto label_2e6a68;
        case 0x2e6a6cu: goto label_2e6a6c;
        case 0x2e6a70u: goto label_2e6a70;
        case 0x2e6a74u: goto label_2e6a74;
        case 0x2e6a78u: goto label_2e6a78;
        case 0x2e6a7cu: goto label_2e6a7c;
        case 0x2e6a80u: goto label_2e6a80;
        case 0x2e6a84u: goto label_2e6a84;
        case 0x2e6a88u: goto label_2e6a88;
        case 0x2e6a8cu: goto label_2e6a8c;
        case 0x2e6a90u: goto label_2e6a90;
        case 0x2e6a94u: goto label_2e6a94;
        case 0x2e6a98u: goto label_2e6a98;
        case 0x2e6a9cu: goto label_2e6a9c;
        case 0x2e6aa0u: goto label_2e6aa0;
        case 0x2e6aa4u: goto label_2e6aa4;
        case 0x2e6aa8u: goto label_2e6aa8;
        case 0x2e6aacu: goto label_2e6aac;
        case 0x2e6ab0u: goto label_2e6ab0;
        case 0x2e6ab4u: goto label_2e6ab4;
        case 0x2e6ab8u: goto label_2e6ab8;
        case 0x2e6abcu: goto label_2e6abc;
        case 0x2e6ac0u: goto label_2e6ac0;
        case 0x2e6ac4u: goto label_2e6ac4;
        case 0x2e6ac8u: goto label_2e6ac8;
        case 0x2e6accu: goto label_2e6acc;
        case 0x2e6ad0u: goto label_2e6ad0;
        case 0x2e6ad4u: goto label_2e6ad4;
        case 0x2e6ad8u: goto label_2e6ad8;
        case 0x2e6adcu: goto label_2e6adc;
        case 0x2e6ae0u: goto label_2e6ae0;
        case 0x2e6ae4u: goto label_2e6ae4;
        case 0x2e6ae8u: goto label_2e6ae8;
        case 0x2e6aecu: goto label_2e6aec;
        case 0x2e6af0u: goto label_2e6af0;
        case 0x2e6af4u: goto label_2e6af4;
        case 0x2e6af8u: goto label_2e6af8;
        case 0x2e6afcu: goto label_2e6afc;
        case 0x2e6b00u: goto label_2e6b00;
        case 0x2e6b04u: goto label_2e6b04;
        case 0x2e6b08u: goto label_2e6b08;
        case 0x2e6b0cu: goto label_2e6b0c;
        case 0x2e6b10u: goto label_2e6b10;
        case 0x2e6b14u: goto label_2e6b14;
        case 0x2e6b18u: goto label_2e6b18;
        case 0x2e6b1cu: goto label_2e6b1c;
        case 0x2e6b20u: goto label_2e6b20;
        case 0x2e6b24u: goto label_2e6b24;
        case 0x2e6b28u: goto label_2e6b28;
        case 0x2e6b2cu: goto label_2e6b2c;
        case 0x2e6b30u: goto label_2e6b30;
        case 0x2e6b34u: goto label_2e6b34;
        case 0x2e6b38u: goto label_2e6b38;
        case 0x2e6b3cu: goto label_2e6b3c;
        case 0x2e6b40u: goto label_2e6b40;
        case 0x2e6b44u: goto label_2e6b44;
        case 0x2e6b48u: goto label_2e6b48;
        case 0x2e6b4cu: goto label_2e6b4c;
        case 0x2e6b50u: goto label_2e6b50;
        case 0x2e6b54u: goto label_2e6b54;
        case 0x2e6b58u: goto label_2e6b58;
        case 0x2e6b5cu: goto label_2e6b5c;
        case 0x2e6b60u: goto label_2e6b60;
        case 0x2e6b64u: goto label_2e6b64;
        case 0x2e6b68u: goto label_2e6b68;
        case 0x2e6b6cu: goto label_2e6b6c;
        case 0x2e6b70u: goto label_2e6b70;
        case 0x2e6b74u: goto label_2e6b74;
        case 0x2e6b78u: goto label_2e6b78;
        case 0x2e6b7cu: goto label_2e6b7c;
        case 0x2e6b80u: goto label_2e6b80;
        case 0x2e6b84u: goto label_2e6b84;
        case 0x2e6b88u: goto label_2e6b88;
        case 0x2e6b8cu: goto label_2e6b8c;
        case 0x2e6b90u: goto label_2e6b90;
        case 0x2e6b94u: goto label_2e6b94;
        case 0x2e6b98u: goto label_2e6b98;
        case 0x2e6b9cu: goto label_2e6b9c;
        case 0x2e6ba0u: goto label_2e6ba0;
        case 0x2e6ba4u: goto label_2e6ba4;
        case 0x2e6ba8u: goto label_2e6ba8;
        case 0x2e6bacu: goto label_2e6bac;
        case 0x2e6bb0u: goto label_2e6bb0;
        case 0x2e6bb4u: goto label_2e6bb4;
        case 0x2e6bb8u: goto label_2e6bb8;
        case 0x2e6bbcu: goto label_2e6bbc;
        case 0x2e6bc0u: goto label_2e6bc0;
        case 0x2e6bc4u: goto label_2e6bc4;
        case 0x2e6bc8u: goto label_2e6bc8;
        case 0x2e6bccu: goto label_2e6bcc;
        case 0x2e6bd0u: goto label_2e6bd0;
        case 0x2e6bd4u: goto label_2e6bd4;
        case 0x2e6bd8u: goto label_2e6bd8;
        case 0x2e6bdcu: goto label_2e6bdc;
        case 0x2e6be0u: goto label_2e6be0;
        case 0x2e6be4u: goto label_2e6be4;
        case 0x2e6be8u: goto label_2e6be8;
        case 0x2e6becu: goto label_2e6bec;
        case 0x2e6bf0u: goto label_2e6bf0;
        case 0x2e6bf4u: goto label_2e6bf4;
        case 0x2e6bf8u: goto label_2e6bf8;
        case 0x2e6bfcu: goto label_2e6bfc;
        case 0x2e6c00u: goto label_2e6c00;
        case 0x2e6c04u: goto label_2e6c04;
        case 0x2e6c08u: goto label_2e6c08;
        case 0x2e6c0cu: goto label_2e6c0c;
        case 0x2e6c10u: goto label_2e6c10;
        case 0x2e6c14u: goto label_2e6c14;
        case 0x2e6c18u: goto label_2e6c18;
        case 0x2e6c1cu: goto label_2e6c1c;
        case 0x2e6c20u: goto label_2e6c20;
        case 0x2e6c24u: goto label_2e6c24;
        case 0x2e6c28u: goto label_2e6c28;
        case 0x2e6c2cu: goto label_2e6c2c;
        case 0x2e6c30u: goto label_2e6c30;
        case 0x2e6c34u: goto label_2e6c34;
        case 0x2e6c38u: goto label_2e6c38;
        case 0x2e6c3cu: goto label_2e6c3c;
        case 0x2e6c40u: goto label_2e6c40;
        case 0x2e6c44u: goto label_2e6c44;
        case 0x2e6c48u: goto label_2e6c48;
        case 0x2e6c4cu: goto label_2e6c4c;
        case 0x2e6c50u: goto label_2e6c50;
        case 0x2e6c54u: goto label_2e6c54;
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c5cu: goto label_2e6c5c;
        case 0x2e6c60u: goto label_2e6c60;
        case 0x2e6c64u: goto label_2e6c64;
        case 0x2e6c68u: goto label_2e6c68;
        case 0x2e6c6cu: goto label_2e6c6c;
        case 0x2e6c70u: goto label_2e6c70;
        case 0x2e6c74u: goto label_2e6c74;
        case 0x2e6c78u: goto label_2e6c78;
        case 0x2e6c7cu: goto label_2e6c7c;
        case 0x2e6c80u: goto label_2e6c80;
        case 0x2e6c84u: goto label_2e6c84;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6c8cu: goto label_2e6c8c;
        case 0x2e6c90u: goto label_2e6c90;
        case 0x2e6c94u: goto label_2e6c94;
        case 0x2e6c98u: goto label_2e6c98;
        case 0x2e6c9cu: goto label_2e6c9c;
        case 0x2e6ca0u: goto label_2e6ca0;
        case 0x2e6ca4u: goto label_2e6ca4;
        case 0x2e6ca8u: goto label_2e6ca8;
        case 0x2e6cacu: goto label_2e6cac;
        case 0x2e6cb0u: goto label_2e6cb0;
        case 0x2e6cb4u: goto label_2e6cb4;
        case 0x2e6cb8u: goto label_2e6cb8;
        case 0x2e6cbcu: goto label_2e6cbc;
        case 0x2e6cc0u: goto label_2e6cc0;
        case 0x2e6cc4u: goto label_2e6cc4;
        case 0x2e6cc8u: goto label_2e6cc8;
        case 0x2e6cccu: goto label_2e6ccc;
        case 0x2e6cd0u: goto label_2e6cd0;
        case 0x2e6cd4u: goto label_2e6cd4;
        case 0x2e6cd8u: goto label_2e6cd8;
        case 0x2e6cdcu: goto label_2e6cdc;
        case 0x2e6ce0u: goto label_2e6ce0;
        case 0x2e6ce4u: goto label_2e6ce4;
        case 0x2e6ce8u: goto label_2e6ce8;
        case 0x2e6cecu: goto label_2e6cec;
        case 0x2e6cf0u: goto label_2e6cf0;
        case 0x2e6cf4u: goto label_2e6cf4;
        case 0x2e6cf8u: goto label_2e6cf8;
        case 0x2e6cfcu: goto label_2e6cfc;
        case 0x2e6d00u: goto label_2e6d00;
        case 0x2e6d04u: goto label_2e6d04;
        case 0x2e6d08u: goto label_2e6d08;
        case 0x2e6d0cu: goto label_2e6d0c;
        case 0x2e6d10u: goto label_2e6d10;
        case 0x2e6d14u: goto label_2e6d14;
        case 0x2e6d18u: goto label_2e6d18;
        case 0x2e6d1cu: goto label_2e6d1c;
        case 0x2e6d20u: goto label_2e6d20;
        case 0x2e6d24u: goto label_2e6d24;
        case 0x2e6d28u: goto label_2e6d28;
        case 0x2e6d2cu: goto label_2e6d2c;
        case 0x2e6d30u: goto label_2e6d30;
        case 0x2e6d34u: goto label_2e6d34;
        case 0x2e6d38u: goto label_2e6d38;
        case 0x2e6d3cu: goto label_2e6d3c;
        case 0x2e6d40u: goto label_2e6d40;
        case 0x2e6d44u: goto label_2e6d44;
        case 0x2e6d48u: goto label_2e6d48;
        case 0x2e6d4cu: goto label_2e6d4c;
        case 0x2e6d50u: goto label_2e6d50;
        case 0x2e6d54u: goto label_2e6d54;
        case 0x2e6d58u: goto label_2e6d58;
        case 0x2e6d5cu: goto label_2e6d5c;
        case 0x2e6d60u: goto label_2e6d60;
        case 0x2e6d64u: goto label_2e6d64;
        case 0x2e6d68u: goto label_2e6d68;
        case 0x2e6d6cu: goto label_2e6d6c;
        case 0x2e6d70u: goto label_2e6d70;
        case 0x2e6d74u: goto label_2e6d74;
        case 0x2e6d78u: goto label_2e6d78;
        case 0x2e6d7cu: goto label_2e6d7c;
        case 0x2e6d80u: goto label_2e6d80;
        case 0x2e6d84u: goto label_2e6d84;
        case 0x2e6d88u: goto label_2e6d88;
        case 0x2e6d8cu: goto label_2e6d8c;
        case 0x2e6d90u: goto label_2e6d90;
        case 0x2e6d94u: goto label_2e6d94;
        case 0x2e6d98u: goto label_2e6d98;
        case 0x2e6d9cu: goto label_2e6d9c;
        case 0x2e6da0u: goto label_2e6da0;
        case 0x2e6da4u: goto label_2e6da4;
        case 0x2e6da8u: goto label_2e6da8;
        case 0x2e6dacu: goto label_2e6dac;
        case 0x2e6db0u: goto label_2e6db0;
        case 0x2e6db4u: goto label_2e6db4;
        case 0x2e6db8u: goto label_2e6db8;
        case 0x2e6dbcu: goto label_2e6dbc;
        case 0x2e6dc0u: goto label_2e6dc0;
        case 0x2e6dc4u: goto label_2e6dc4;
        case 0x2e6dc8u: goto label_2e6dc8;
        case 0x2e6dccu: goto label_2e6dcc;
        case 0x2e6dd0u: goto label_2e6dd0;
        case 0x2e6dd4u: goto label_2e6dd4;
        case 0x2e6dd8u: goto label_2e6dd8;
        case 0x2e6ddcu: goto label_2e6ddc;
        case 0x2e6de0u: goto label_2e6de0;
        case 0x2e6de4u: goto label_2e6de4;
        case 0x2e6de8u: goto label_2e6de8;
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6df4u: goto label_2e6df4;
        case 0x2e6df8u: goto label_2e6df8;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e00u: goto label_2e6e00;
        case 0x2e6e04u: goto label_2e6e04;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6e0cu: goto label_2e6e0c;
        case 0x2e6e10u: goto label_2e6e10;
        case 0x2e6e14u: goto label_2e6e14;
        case 0x2e6e18u: goto label_2e6e18;
        case 0x2e6e1cu: goto label_2e6e1c;
        case 0x2e6e20u: goto label_2e6e20;
        case 0x2e6e24u: goto label_2e6e24;
        case 0x2e6e28u: goto label_2e6e28;
        case 0x2e6e2cu: goto label_2e6e2c;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e34u: goto label_2e6e34;
        case 0x2e6e38u: goto label_2e6e38;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e40u: goto label_2e6e40;
        case 0x2e6e44u: goto label_2e6e44;
        case 0x2e6e48u: goto label_2e6e48;
        case 0x2e6e4cu: goto label_2e6e4c;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e54u: goto label_2e6e54;
        case 0x2e6e58u: goto label_2e6e58;
        case 0x2e6e5cu: goto label_2e6e5c;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e64u: goto label_2e6e64;
        case 0x2e6e68u: goto label_2e6e68;
        case 0x2e6e6cu: goto label_2e6e6c;
        case 0x2e6e70u: goto label_2e6e70;
        case 0x2e6e74u: goto label_2e6e74;
        case 0x2e6e78u: goto label_2e6e78;
        case 0x2e6e7cu: goto label_2e6e7c;
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6e84u: goto label_2e6e84;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e8cu: goto label_2e6e8c;
        case 0x2e6e90u: goto label_2e6e90;
        case 0x2e6e94u: goto label_2e6e94;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6e9cu: goto label_2e6e9c;
        case 0x2e6ea0u: goto label_2e6ea0;
        case 0x2e6ea4u: goto label_2e6ea4;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eacu: goto label_2e6eac;
        case 0x2e6eb0u: goto label_2e6eb0;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6ebcu: goto label_2e6ebc;
        case 0x2e6ec0u: goto label_2e6ec0;
        case 0x2e6ec4u: goto label_2e6ec4;
        case 0x2e6ec8u: goto label_2e6ec8;
        case 0x2e6eccu: goto label_2e6ecc;
        case 0x2e6ed0u: goto label_2e6ed0;
        case 0x2e6ed4u: goto label_2e6ed4;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6edcu: goto label_2e6edc;
        case 0x2e6ee0u: goto label_2e6ee0;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6ee8u: goto label_2e6ee8;
        case 0x2e6eecu: goto label_2e6eec;
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6ef4u: goto label_2e6ef4;
        case 0x2e6ef8u: goto label_2e6ef8;
        case 0x2e6efcu: goto label_2e6efc;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f04u: goto label_2e6f04;
        case 0x2e6f08u: goto label_2e6f08;
        case 0x2e6f0cu: goto label_2e6f0c;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f1cu: goto label_2e6f1c;
        case 0x2e6f20u: goto label_2e6f20;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f2cu: goto label_2e6f2c;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f34u: goto label_2e6f34;
        case 0x2e6f38u: goto label_2e6f38;
        case 0x2e6f3cu: goto label_2e6f3c;
        case 0x2e6f40u: goto label_2e6f40;
        case 0x2e6f44u: goto label_2e6f44;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e6f4cu: goto label_2e6f4c;
        case 0x2e6f50u: goto label_2e6f50;
        case 0x2e6f54u: goto label_2e6f54;
        case 0x2e6f58u: goto label_2e6f58;
        case 0x2e6f5cu: goto label_2e6f5c;
        default: break;
    }

    ctx->pc = 0x2e6970u;

label_2e6970:
    // 0x2e6970: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_2e6974:
    // 0x2e6974: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e6974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e6978:
    // 0x2e6978: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e6978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2e697c:
    // 0x2e697c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e697cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e6980:
    // 0x2e6980: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e6980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e6984:
    // 0x2e6984: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e6984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e6988:
    // 0x2e6988: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e6988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e698c:
    // 0x2e698c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e6990:
    // 0x2e6990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e6994:
    // 0x2e6994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e6998:
    // 0x2e6998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e699c:
    // 0x2e699c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x2e699cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_2e69a0:
    // 0x2e69a0: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x2e69a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_2e69a4:
    // 0x2e69a4: 0xa3a60180  sb          $a2, 0x180($sp)
    ctx->pc = 0x2e69a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 6));
label_2e69a8:
    // 0x2e69a8: 0xc0434e0  jal         func_10D380
label_2e69ac:
    if (ctx->pc == 0x2E69ACu) {
        ctx->pc = 0x2E69B0u;
        goto label_2e69b0;
    }
    ctx->pc = 0x2E69A8u;
    SET_GPR_U32(ctx, 31, 0x2E69B0u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2E69A8u, 0x2E69B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69B0u;
label_2e69b0:
    // 0x2e69b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e69b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e69b4:
    // 0x2e69b4: 0xc0434d8  jal         func_10D360
label_2e69b8:
    if (ctx->pc == 0x2E69B8u) {
        ctx->pc = 0x2E69BCu;
        goto label_2e69bc;
    }
    ctx->pc = 0x2E69B4u;
    SET_GPR_U32(ctx, 31, 0x2E69BCu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2E69B4u, 0x2E69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69BCu;
label_2e69bc:
    // 0x2e69bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e69bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e69c0:
    // 0x2e69c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e69c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e69c4:
    // 0x2e69c4: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2e69c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2e69c8:
    // 0x2e69c8: 0xc044edc  jal         func_113B70
label_2e69cc:
    if (ctx->pc == 0x2E69CCu) {
        ctx->pc = 0x2E69D0u;
        goto label_2e69d0;
    }
    ctx->pc = 0x2E69C8u;
    SET_GPR_U32(ctx, 31, 0x2E69D0u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x2E69C8u, 0x2E69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69D0u;
label_2e69d0:
    // 0x2e69d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e69d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e69d4:
    // 0x2e69d4: 0x10160154  beq         $zero, $s6, . + 4 + (0x154 << 2)
label_2e69d8:
    if (ctx->pc == 0x2E69D8u) {
        ctx->pc = 0x2E69DCu;
        goto label_2e69dc;
    }
    ctx->pc = 0x2E69D4u;
    {
        const bool branch_taken_0x2e69d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x2e69d4) {
            ctx->pc = 0x2E6F28u;
            goto label_2e6f28;
        }
    }
    ctx->pc = 0x2E69DCu;
label_2e69dc:
    // 0x2e69dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e69dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e69e0:
    // 0x2e69e0: 0xc0457e8  jal         func_115FA0
label_2e69e4:
    if (ctx->pc == 0x2E69E4u) {
        ctx->pc = 0x2E69E8u;
        goto label_2e69e8;
    }
    ctx->pc = 0x2E69E0u;
    SET_GPR_U32(ctx, 31, 0x2E69E8u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x2E69E0u, 0x2E69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69E8u;
label_2e69e8:
    // 0x2e69e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e69e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e69ec:
    // 0x2e69ec: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x2e69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_2e69f0:
    // 0x2e69f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e69f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e69f4:
    // 0x2e69f4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e69f8:
    // 0x2e69f8: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e69f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e69fc:
    // 0x2e69fc: 0xc0b9a4c  jal         func_2E6930
label_2e6a00:
    if (ctx->pc == 0x2E6A00u) {
        ctx->pc = 0x2E6A04u;
        goto label_2e6a04;
    }
    ctx->pc = 0x2E69FCu;
    SET_GPR_U32(ctx, 31, 0x2E6A04u);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E69FCu, 0x2E6A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A04u;
label_2e6a04:
    // 0x2e6a04: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x2e6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_2e6a08:
    // 0x2e6a08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e6a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a0c:
    // 0x2e6a0c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2e6a10:
    if (ctx->pc == 0x2E6A10u) {
        ctx->pc = 0x2E6A14u;
        goto label_2e6a14;
    }
    ctx->pc = 0x2E6A0Cu;
    {
        const bool branch_taken_0x2e6a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a0c) {
            ctx->pc = 0x2E6A80u;
            goto label_2e6a80;
        }
    }
    ctx->pc = 0x2E6A14u;
label_2e6a14:
    // 0x2e6a14: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6a18:
    // 0x2e6a18: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6a1c:
    // 0x2e6a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e6a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a20:
    // 0x2e6a20: 0xc0b9a3c  jal         func_2E68F0
label_2e6a24:
    if (ctx->pc == 0x2E6A24u) {
        ctx->pc = 0x2E6A28u;
        goto label_2e6a28;
    }
    ctx->pc = 0x2E6A20u;
    SET_GPR_U32(ctx, 31, 0x2E6A28u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E6A20u, 0x2E6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A28u;
label_2e6a28:
    // 0x2e6a28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6a2c:
    // 0x2e6a2c: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2e6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2e6a30:
    // 0x2e6a30: 0xc041b38  jal         func_106CE0
label_2e6a34:
    if (ctx->pc == 0x2E6A34u) {
        ctx->pc = 0x2E6A38u;
        goto label_2e6a38;
    }
    ctx->pc = 0x2E6A30u;
    SET_GPR_U32(ctx, 31, 0x2E6A38u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2E6A30u, 0x2E6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A38u;
label_2e6a38:
    // 0x2e6a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a3c:
    // 0x2e6a3c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2e6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2e6a40:
    // 0x2e6a40: 0xc0bc48e  jal         func_2F1238
label_2e6a44:
    if (ctx->pc == 0x2E6A44u) {
        ctx->pc = 0x2E6A48u;
        goto label_2e6a48;
    }
    ctx->pc = 0x2E6A40u;
    SET_GPR_U32(ctx, 31, 0x2E6A48u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2E6A40u, 0x2E6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A48u;
label_2e6a48:
    // 0x2e6a48: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2e6a4c:
    if (ctx->pc == 0x2E6A4Cu) {
        ctx->pc = 0x2E6A50u;
        goto label_2e6a50;
    }
    ctx->pc = 0x2E6A48u;
    {
        const bool branch_taken_0x2e6a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a48) {
            ctx->pc = 0x2E6A7Cu;
            goto label_2e6a7c;
        }
    }
    ctx->pc = 0x2E6A50u;
label_2e6a50:
    // 0x2e6a50: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6a54:
    // 0x2e6a54: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6a58:
    // 0x2e6a58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e6a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a5c:
    // 0x2e6a5c: 0xc0b9a3c  jal         func_2E68F0
label_2e6a60:
    if (ctx->pc == 0x2E6A60u) {
        ctx->pc = 0x2E6A64u;
        goto label_2e6a64;
    }
    ctx->pc = 0x2E6A5Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A64u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E6A5Cu, 0x2E6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6A64u;
label_2e6a64:
    // 0x2e6a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6a68:
    // 0x2e6a68: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2e6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_2e6a6c:
    // 0x2e6a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6a70:
    // 0x2e6a70: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e6a70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e6a74:
    // 0x2e6a74: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e6a78:
    if (ctx->pc == 0x2E6A78u) {
        ctx->pc = 0x2E6A7Cu;
        goto label_2e6a7c;
    }
    ctx->pc = 0x2E6A74u;
    {
        const bool branch_taken_0x2e6a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a74) {
            ctx->pc = 0x2E6A90u;
            goto label_2e6a90;
        }
    }
    ctx->pc = 0x2E6A7Cu;
label_2e6a7c:
    // 0x2e6a7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e6a80:
    // 0x2e6a80: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2e6a84:
    // 0x2e6a84: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2e6a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e6a88:
    // 0x2e6a88: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2e6a8c:
    if (ctx->pc == 0x2E6A8Cu) {
        ctx->pc = 0x2E6A90u;
        goto label_2e6a90;
    }
    ctx->pc = 0x2E6A88u;
    {
        const bool branch_taken_0x2e6a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a88) {
            ctx->pc = 0x2E6A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6a14;
        }
    }
    ctx->pc = 0x2E6A90u;
label_2e6a90:
    // 0x2e6a90: 0x168000b5  bnez        $s4, . + 4 + (0xB5 << 2)
label_2e6a94:
    if (ctx->pc == 0x2E6A94u) {
        ctx->pc = 0x2E6A98u;
        goto label_2e6a98;
    }
    ctx->pc = 0x2E6A90u;
    {
        const bool branch_taken_0x2e6a90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a90) {
            ctx->pc = 0x2E6D68u;
            goto label_2e6d68;
        }
    }
    ctx->pc = 0x2E6A98u;
label_2e6a98:
    // 0x2e6a98: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x2e6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2e6a9c:
    // 0x2e6a9c: 0xc119b68  jal         func_466DA0
label_2e6aa0:
    if (ctx->pc == 0x2E6AA0u) {
        ctx->pc = 0x2E6AA4u;
        goto label_2e6aa4;
    }
    ctx->pc = 0x2E6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2E6AA4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2E6A9Cu, 0x2E6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AA4u;
label_2e6aa4:
    // 0x2e6aa4: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x2e6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2e6aa8:
    // 0x2e6aa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6aac:
    // 0x2e6aac: 0xc0400e0  jal         func_100380
label_2e6ab0:
    if (ctx->pc == 0x2E6AB0u) {
        ctx->pc = 0x2E6AB4u;
        goto label_2e6ab4;
    }
    ctx->pc = 0x2E6AACu;
    SET_GPR_U32(ctx, 31, 0x2E6AB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E6AACu, 0x2E6AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AB4u;
label_2e6ab4:
    // 0x2e6ab4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e6ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ab8:
    // 0x2e6ab8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2e6abc:
    if (ctx->pc == 0x2E6ABCu) {
        ctx->pc = 0x2E6AC0u;
        goto label_2e6ac0;
    }
    ctx->pc = 0x2E6AB8u;
    {
        const bool branch_taken_0x2e6ab8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ab8) {
            ctx->pc = 0x2E6AD0u;
            goto label_2e6ad0;
        }
    }
    ctx->pc = 0x2E6AC0u;
label_2e6ac0:
    // 0x2e6ac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ac4:
    // 0x2e6ac4: 0xc0b8e2c  jal         func_2E38B0
label_2e6ac8:
    if (ctx->pc == 0x2E6AC8u) {
        ctx->pc = 0x2E6ACCu;
        goto label_2e6acc;
    }
    ctx->pc = 0x2E6AC4u;
    SET_GPR_U32(ctx, 31, 0x2E6ACCu);
    ctx->pc = 0x2E38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E38B0u, 0x2E6AC4u, 0x2E6ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6ACCu;
label_2e6acc:
    // 0x2e6acc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e6accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ad0:
    // 0x2e6ad0: 0xafb3015c  sw          $s3, 0x15C($sp)
    ctx->pc = 0x2e6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 19));
label_2e6ad4:
    // 0x2e6ad4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6ad8:
    // 0x2e6ad8: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6adc:
    // 0x2e6adc: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2e6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6ae0:
    // 0x2e6ae0: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2e6ae4:
    // 0x2e6ae4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e6ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e6ae8:
    // 0x2e6ae8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2e6ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2e6aec:
    // 0x2e6aec: 0x320f809  jalr        $t9
label_2e6af0:
    if (ctx->pc == 0x2E6AF0u) {
        ctx->pc = 0x2E6AF4u;
        goto label_2e6af4;
    }
    ctx->pc = 0x2E6AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E6AF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6AECu, 0x2E6AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6AF4u;
label_2e6af4:
    // 0x2e6af4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2e6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6af8:
    // 0x2e6af8: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2e6af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2e6afc:
    // 0x2e6afc: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2e6afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2e6b00:
    // 0x2e6b00: 0xc041ba4  jal         func_106E90
label_2e6b04:
    if (ctx->pc == 0x2E6B04u) {
        ctx->pc = 0x2E6B08u;
        goto label_2e6b08;
    }
    ctx->pc = 0x2E6B00u;
    SET_GPR_U32(ctx, 31, 0x2E6B08u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2E6B00u, 0x2E6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B08u;
label_2e6b08:
    // 0x2e6b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b0c:
    // 0x2e6b0c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6b10:
    // 0x2e6b10: 0x24a5e6e8  addiu       $a1, $a1, -0x1918
    ctx->pc = 0x2e6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960872));
label_2e6b14:
    // 0x2e6b14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e6b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6b18:
    // 0x2e6b18: 0xc047970  jal         func_11E5C0
label_2e6b1c:
    if (ctx->pc == 0x2E6B1Cu) {
        ctx->pc = 0x2E6B20u;
        goto label_2e6b20;
    }
    ctx->pc = 0x2E6B18u;
    SET_GPR_U32(ctx, 31, 0x2E6B20u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6B18u, 0x2E6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B20u;
label_2e6b20:
    // 0x2e6b20: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6b24:
    // 0x2e6b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6b28:
    // 0x2e6b28: 0xc0b95d0  jal         func_2E5740
label_2e6b2c:
    if (ctx->pc == 0x2E6B2Cu) {
        ctx->pc = 0x2E6B30u;
        goto label_2e6b30;
    }
    ctx->pc = 0x2E6B28u;
    SET_GPR_U32(ctx, 31, 0x2E6B30u);
    ctx->pc = 0x2E5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5740u, 0x2E6B28u, 0x2E6B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B30u;
label_2e6b30:
    // 0x2e6b30: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6b34:
    // 0x2e6b34: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6b38:
    // 0x2e6b38: 0xc0b9a4c  jal         func_2E6930
label_2e6b3c:
    if (ctx->pc == 0x2E6B3Cu) {
        ctx->pc = 0x2E6B40u;
        goto label_2e6b40;
    }
    ctx->pc = 0x2E6B38u;
    SET_GPR_U32(ctx, 31, 0x2E6B40u);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E6B38u, 0x2E6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6B40u;
label_2e6b40:
    // 0x2e6b40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2e6b44:
    if (ctx->pc == 0x2E6B44u) {
        ctx->pc = 0x2E6B48u;
        goto label_2e6b48;
    }
    ctx->pc = 0x2E6B40u;
    {
        const bool branch_taken_0x2e6b40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e6b40) {
            ctx->pc = 0x2E6B5Cu;
            goto label_2e6b5c;
        }
    }
    ctx->pc = 0x2E6B48u;
label_2e6b48:
    // 0x2e6b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6b4c:
    // 0x2e6b4c: 0x0  nop
    ctx->pc = 0x2e6b4cu;
    // NOP
label_2e6b50:
    // 0x2e6b50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e6b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e6b54:
    // 0x2e6b54: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e6b58:
    if (ctx->pc == 0x2E6B58u) {
        ctx->pc = 0x2E6B5Cu;
        goto label_2e6b5c;
    }
    ctx->pc = 0x2E6B54u;
    {
        const bool branch_taken_0x2e6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b54) {
            ctx->pc = 0x2E6B78u;
            goto label_2e6b78;
        }
    }
    ctx->pc = 0x2E6B5Cu;
label_2e6b5c:
    // 0x2e6b5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2e6b60:
    // 0x2e6b60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e6b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e6b64:
    // 0x2e6b64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e6b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e6b68:
    // 0x2e6b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6b6c:
    // 0x2e6b6c: 0x0  nop
    ctx->pc = 0x2e6b6cu;
    // NOP
label_2e6b70:
    // 0x2e6b70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e6b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e6b74:
    // 0x2e6b74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e6b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e6b78:
    // 0x2e6b78: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6b7c:
    // 0x2e6b7c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e6b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6b80:
    // 0x2e6b80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e6b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e6b84:
    // 0x2e6b84: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2e6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6b88:
    // 0x2e6b88: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2e6b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2e6b8c:
    // 0x2e6b8c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6b90:
    // 0x2e6b90: 0x24a5e6b8  addiu       $a1, $a1, -0x1948
    ctx->pc = 0x2e6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
label_2e6b94:
    // 0x2e6b94: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2e6b98:
    // 0x2e6b98: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2e6b9c:
    // 0x2e6b9c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2e6b9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2e6ba0:
    // 0x2e6ba0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e6ba4:
    // 0x2e6ba4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e6ba8:
    // 0x2e6ba8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2e6ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2e6bac:
    // 0x2e6bac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e6bb0:
    // 0x2e6bb0: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_2e6bb4:
    if (ctx->pc == 0x2E6BB4u) {
        ctx->pc = 0x2E6BB8u;
        goto label_2e6bb8;
    }
    ctx->pc = 0x2E6BB0u;
    {
        const bool branch_taken_0x2e6bb0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e6bb0) {
            ctx->pc = 0x2E6B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6b9c;
        }
    }
    ctx->pc = 0x2E6BB8u;
label_2e6bb8:
    // 0x2e6bb8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2e6bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_2e6bbc:
    // 0x2e6bbc: 0x24c6e6d0  addiu       $a2, $a2, -0x1930
    ctx->pc = 0x2e6bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
label_2e6bc0:
    // 0x2e6bc0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e6bc4:
    // 0x2e6bc4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e6bc8:
    // 0x2e6bc8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2e6bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2e6bcc:
    // 0x2e6bcc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2e6bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_2e6bd0:
    // 0x2e6bd0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2e6bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_2e6bd4:
    // 0x2e6bd4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2e6bd8:
    // 0x2e6bd8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2e6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e6bdc:
    // 0x2e6bdc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2e6bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2e6be0:
    // 0x2e6be0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2e6be4:
    // 0x2e6be4: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_2e6be8:
    if (ctx->pc == 0x2E6BE8u) {
        ctx->pc = 0x2E6BECu;
        goto label_2e6bec;
    }
    ctx->pc = 0x2E6BE4u;
    {
        const bool branch_taken_0x2e6be4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2e6be4) {
            ctx->pc = 0x2E6BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6bc8;
        }
    }
    ctx->pc = 0x2E6BECu;
label_2e6bec:
    // 0x2e6bec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e6becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6bf0:
    // 0x2e6bf0: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2e6bf4:
    if (ctx->pc == 0x2E6BF4u) {
        ctx->pc = 0x2E6BF8u;
        goto label_2e6bf8;
    }
    ctx->pc = 0x2E6BF0u;
    {
        const bool branch_taken_0x2e6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6bf0) {
            ctx->pc = 0x2E6D5Cu;
            goto label_2e6d5c;
        }
    }
    ctx->pc = 0x2E6BF8u;
label_2e6bf8:
    // 0x2e6bf8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2e6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e6bfc:
    // 0x2e6bfc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2e6bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2e6c00:
    // 0x2e6c00: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2e6c00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2e6c04:
    // 0x2e6c04: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e6c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2e6c08:
    // 0x2e6c08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2e6c0c:
    // 0x2e6c0c: 0xc0bc60c  jal         func_2F1830
label_2e6c10:
    if (ctx->pc == 0x2E6C10u) {
        ctx->pc = 0x2E6C14u;
        goto label_2e6c14;
    }
    ctx->pc = 0x2E6C0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C14u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2E6C0Cu, 0x2E6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C14u;
label_2e6c14:
    // 0x2e6c14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e6c18:
    // 0x2e6c18: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2e6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2e6c1c:
    // 0x2e6c1c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e6c1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e6c20:
    // 0x2e6c20: 0xa0620140  sb          $v0, 0x140($v1)
    ctx->pc = 0x2e6c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 2));
label_2e6c24:
    // 0x2e6c24: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2e6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e6c28:
    // 0x2e6c28: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2e6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2e6c2c:
    // 0x2e6c2c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2e6c2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2e6c30:
    // 0x2e6c30: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2e6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2e6c34:
    // 0x2e6c34: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2e6c38:
    // 0x2e6c38: 0xc0bc60c  jal         func_2F1830
label_2e6c3c:
    if (ctx->pc == 0x2E6C3Cu) {
        ctx->pc = 0x2E6C40u;
        goto label_2e6c40;
    }
    ctx->pc = 0x2E6C38u;
    SET_GPR_U32(ctx, 31, 0x2E6C40u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2E6C38u, 0x2E6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C40u;
label_2e6c40:
    // 0x2e6c40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e6c44:
    // 0x2e6c44: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2e6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2e6c48:
    // 0x2e6c48: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2e6c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e6c4c:
    // 0x2e6c4c: 0xa0620100  sb          $v0, 0x100($v1)
    ctx->pc = 0x2e6c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
label_2e6c50:
    // 0x2e6c50: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x2e6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_2e6c54:
    // 0x2e6c54: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
label_2e6c58:
    if (ctx->pc == 0x2E6C58u) {
        ctx->pc = 0x2E6C5Cu;
        goto label_2e6c5c;
    }
    ctx->pc = 0x2E6C54u;
    {
        const bool branch_taken_0x2e6c54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c54) {
            ctx->pc = 0x2E6CE0u;
            goto label_2e6ce0;
        }
    }
    ctx->pc = 0x2E6C5Cu;
label_2e6c5c:
    // 0x2e6c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6c60:
    // 0x2e6c60: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6c64:
    // 0x2e6c64: 0x24a5e6f8  addiu       $a1, $a1, -0x1908
    ctx->pc = 0x2e6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960888));
label_2e6c68:
    // 0x2e6c68: 0x2786a564  addiu       $a2, $gp, -0x5A9C
    ctx->pc = 0x2e6c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944100));
label_2e6c6c:
    // 0x2e6c6c: 0xc04206c  jal         func_1081B0
label_2e6c70:
    if (ctx->pc == 0x2E6C70u) {
        ctx->pc = 0x2E6C74u;
        goto label_2e6c74;
    }
    ctx->pc = 0x2E6C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C74u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2E6C6Cu, 0x2E6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C74u;
label_2e6c74:
    // 0x2e6c74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e6c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e6c78:
    // 0x2e6c78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6c7c:
    // 0x2e6c7c: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x2e6c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_2e6c80:
    // 0x2e6c80: 0xc0b9624  jal         func_2E5890
label_2e6c84:
    if (ctx->pc == 0x2E6C84u) {
        ctx->pc = 0x2E6C88u;
        goto label_2e6c88;
    }
    ctx->pc = 0x2E6C80u;
    SET_GPR_U32(ctx, 31, 0x2E6C88u);
    ctx->pc = 0x2E5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5890u, 0x2E6C80u, 0x2E6C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C88u;
label_2e6c88:
    // 0x2e6c88: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2e6c8c:
    if (ctx->pc == 0x2E6C8Cu) {
        ctx->pc = 0x2E6C90u;
        goto label_2e6c90;
    }
    ctx->pc = 0x2E6C88u;
    {
        const bool branch_taken_0x2e6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c88) {
            ctx->pc = 0x2E6D58u;
            goto label_2e6d58;
        }
    }
    ctx->pc = 0x2E6C90u;
label_2e6c90:
    // 0x2e6c90: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2e6c94:
    // 0x2e6c94: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e6c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e6c98:
    // 0x2e6c98: 0xc040304  jal         func_100C10
label_2e6c9c:
    if (ctx->pc == 0x2E6C9Cu) {
        ctx->pc = 0x2E6CA0u;
        goto label_2e6ca0;
    }
    ctx->pc = 0x2E6C98u;
    SET_GPR_U32(ctx, 31, 0x2E6CA0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2E6C98u, 0x2E6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CA0u;
label_2e6ca0:
    // 0x2e6ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ca4:
    // 0x2e6ca4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e6ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e6ca8:
    // 0x2e6ca8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2e6ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e6cac:
    // 0x2e6cac: 0xc047970  jal         func_11E5C0
label_2e6cb0:
    if (ctx->pc == 0x2E6CB0u) {
        ctx->pc = 0x2E6CB4u;
        goto label_2e6cb4;
    }
    ctx->pc = 0x2E6CACu;
    SET_GPR_U32(ctx, 31, 0x2E6CB4u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6CACu, 0x2E6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CB4u;
label_2e6cb4:
    // 0x2e6cb4: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6cb8:
    // 0x2e6cb8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2e6cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2e6cbc:
    // 0x2e6cbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e6cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6cc0:
    // 0x2e6cc0: 0xc0b8f84  jal         func_2E3E10
label_2e6cc4:
    if (ctx->pc == 0x2E6CC4u) {
        ctx->pc = 0x2E6CC8u;
        goto label_2e6cc8;
    }
    ctx->pc = 0x2E6CC0u;
    SET_GPR_U32(ctx, 31, 0x2E6CC8u);
    ctx->pc = 0x2E3E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3E10u, 0x2E6CC0u, 0x2E6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CC8u;
label_2e6cc8:
    // 0x2e6cc8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2e6ccc:
    // 0x2e6ccc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6cd0:
    // 0x2e6cd0: 0xc0402d4  jal         func_100B50
label_2e6cd4:
    if (ctx->pc == 0x2E6CD4u) {
        ctx->pc = 0x2E6CD8u;
        goto label_2e6cd8;
    }
    ctx->pc = 0x2E6CD0u;
    SET_GPR_U32(ctx, 31, 0x2E6CD8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E6CD0u, 0x2E6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CD8u;
label_2e6cd8:
    // 0x2e6cd8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2e6cdc:
    if (ctx->pc == 0x2E6CDCu) {
        ctx->pc = 0x2E6CE0u;
        goto label_2e6ce0;
    }
    ctx->pc = 0x2E6CD8u;
    {
        const bool branch_taken_0x2e6cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6cd8) {
            ctx->pc = 0x2E6D58u;
            goto label_2e6d58;
        }
    }
    ctx->pc = 0x2E6CE0u;
label_2e6ce0:
    // 0x2e6ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ce4:
    // 0x2e6ce4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e6ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2e6ce8:
    // 0x2e6ce8: 0x2786a564  addiu       $a2, $gp, -0x5A9C
    ctx->pc = 0x2e6ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944100));
label_2e6cec:
    // 0x2e6cec: 0xc04206c  jal         func_1081B0
label_2e6cf0:
    if (ctx->pc == 0x2E6CF0u) {
        ctx->pc = 0x2E6CF4u;
        goto label_2e6cf4;
    }
    ctx->pc = 0x2E6CECu;
    SET_GPR_U32(ctx, 31, 0x2E6CF4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2E6CECu, 0x2E6CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6CF4u;
label_2e6cf4:
    // 0x2e6cf4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e6cf8:
    // 0x2e6cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e6cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6cfc:
    // 0x2e6cfc: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x2e6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_2e6d00:
    // 0x2e6d00: 0xc0b9624  jal         func_2E5890
label_2e6d04:
    if (ctx->pc == 0x2E6D04u) {
        ctx->pc = 0x2E6D08u;
        goto label_2e6d08;
    }
    ctx->pc = 0x2E6D00u;
    SET_GPR_U32(ctx, 31, 0x2E6D08u);
    ctx->pc = 0x2E5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5890u, 0x2E6D00u, 0x2E6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D08u;
label_2e6d08:
    // 0x2e6d08: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2e6d0c:
    if (ctx->pc == 0x2E6D0Cu) {
        ctx->pc = 0x2E6D10u;
        goto label_2e6d10;
    }
    ctx->pc = 0x2E6D08u;
    {
        const bool branch_taken_0x2e6d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d08) {
            ctx->pc = 0x2E6D68u;
            goto label_2e6d68;
        }
    }
    ctx->pc = 0x2E6D10u;
label_2e6d10:
    // 0x2e6d10: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e6d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2e6d14:
    // 0x2e6d14: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e6d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e6d18:
    // 0x2e6d18: 0xc040304  jal         func_100C10
label_2e6d1c:
    if (ctx->pc == 0x2E6D1Cu) {
        ctx->pc = 0x2E6D20u;
        goto label_2e6d20;
    }
    ctx->pc = 0x2E6D18u;
    SET_GPR_U32(ctx, 31, 0x2E6D20u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2E6D18u, 0x2E6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D20u;
label_2e6d20:
    // 0x2e6d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d24:
    // 0x2e6d24: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e6d28:
    // 0x2e6d28: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2e6d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e6d2c:
    // 0x2e6d2c: 0xc047970  jal         func_11E5C0
label_2e6d30:
    if (ctx->pc == 0x2E6D30u) {
        ctx->pc = 0x2E6D34u;
        goto label_2e6d34;
    }
    ctx->pc = 0x2E6D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E6D34u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6D2Cu, 0x2E6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D34u;
label_2e6d34:
    // 0x2e6d34: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6d38:
    // 0x2e6d38: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2e6d3c:
    // 0x2e6d3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e6d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d40:
    // 0x2e6d40: 0xc0b8f84  jal         func_2E3E10
label_2e6d44:
    if (ctx->pc == 0x2E6D44u) {
        ctx->pc = 0x2E6D48u;
        goto label_2e6d48;
    }
    ctx->pc = 0x2E6D40u;
    SET_GPR_U32(ctx, 31, 0x2E6D48u);
    ctx->pc = 0x2E3E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3E10u, 0x2E6D40u, 0x2E6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D48u;
label_2e6d48:
    // 0x2e6d48: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2e6d4c:
    // 0x2e6d4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e6d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6d50:
    // 0x2e6d50: 0xc0402d4  jal         func_100B50
label_2e6d54:
    if (ctx->pc == 0x2E6D54u) {
        ctx->pc = 0x2E6D58u;
        goto label_2e6d58;
    }
    ctx->pc = 0x2E6D50u;
    SET_GPR_U32(ctx, 31, 0x2E6D58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E6D50u, 0x2E6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D58u;
label_2e6d58:
    // 0x2e6d58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e6d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e6d5c:
    // 0x2e6d5c: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x2e6d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2e6d60:
    // 0x2e6d60: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_2e6d64:
    if (ctx->pc == 0x2E6D64u) {
        ctx->pc = 0x2E6D68u;
        goto label_2e6d68;
    }
    ctx->pc = 0x2E6D60u;
    {
        const bool branch_taken_0x2e6d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d60) {
            ctx->pc = 0x2E6BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6bf8;
        }
    }
    ctx->pc = 0x2E6D68u;
label_2e6d68:
    // 0x2e6d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d6c:
    // 0x2e6d6c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6d70:
    // 0x2e6d70: 0x24a5e710  addiu       $a1, $a1, -0x18F0
    ctx->pc = 0x2e6d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960912));
label_2e6d74:
    // 0x2e6d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d78:
    // 0x2e6d78: 0xc047970  jal         func_11E5C0
label_2e6d7c:
    if (ctx->pc == 0x2E6D7Cu) {
        ctx->pc = 0x2E6D80u;
        goto label_2e6d80;
    }
    ctx->pc = 0x2E6D78u;
    SET_GPR_U32(ctx, 31, 0x2E6D80u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6D78u, 0x2E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D80u;
label_2e6d80:
    // 0x2e6d80: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2e6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6d84:
    // 0x2e6d84: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2e6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2e6d88:
    // 0x2e6d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d8c:
    // 0x2e6d8c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6d90:
    // 0x2e6d90: 0x24a5e730  addiu       $a1, $a1, -0x18D0
    ctx->pc = 0x2e6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960944));
label_2e6d94:
    // 0x2e6d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d98:
    // 0x2e6d98: 0xc047970  jal         func_11E5C0
label_2e6d9c:
    if (ctx->pc == 0x2E6D9Cu) {
        ctx->pc = 0x2E6DA0u;
        goto label_2e6da0;
    }
    ctx->pc = 0x2E6D98u;
    SET_GPR_U32(ctx, 31, 0x2E6DA0u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6D98u, 0x2E6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DA0u;
label_2e6da0:
    // 0x2e6da0: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2e6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6da4:
    // 0x2e6da4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2e6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2e6da8:
    // 0x2e6da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6dac:
    // 0x2e6dac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6db0:
    // 0x2e6db0: 0x24a5e750  addiu       $a1, $a1, -0x18B0
    ctx->pc = 0x2e6db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
label_2e6db4:
    // 0x2e6db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6db8:
    // 0x2e6db8: 0xc047970  jal         func_11E5C0
label_2e6dbc:
    if (ctx->pc == 0x2E6DBCu) {
        ctx->pc = 0x2E6DC0u;
        goto label_2e6dc0;
    }
    ctx->pc = 0x2E6DB8u;
    SET_GPR_U32(ctx, 31, 0x2E6DC0u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6DB8u, 0x2E6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DC0u;
label_2e6dc0:
    // 0x2e6dc0: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2e6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6dc4:
    // 0x2e6dc4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e6dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2e6dc8:
    // 0x2e6dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6dcc:
    // 0x2e6dcc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6dd0:
    // 0x2e6dd0: 0x24a5e760  addiu       $a1, $a1, -0x18A0
    ctx->pc = 0x2e6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
label_2e6dd4:
    // 0x2e6dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e6dd8:
    // 0x2e6dd8: 0xc047970  jal         func_11E5C0
label_2e6ddc:
    if (ctx->pc == 0x2E6DDCu) {
        ctx->pc = 0x2E6DE0u;
        goto label_2e6de0;
    }
    ctx->pc = 0x2E6DD8u;
    SET_GPR_U32(ctx, 31, 0x2E6DE0u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2E6DD8u, 0x2E6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DE0u;
label_2e6de0:
    // 0x2e6de0: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2e6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6de4:
    // 0x2e6de4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2e6de8:
    // 0x2e6de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6dec:
    // 0x2e6dec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e6decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2e6df0:
    // 0x2e6df0: 0x24a5e770  addiu       $a1, $a1, -0x1890
    ctx->pc = 0x2e6df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961008));
label_2e6df4:
    // 0x2e6df4: 0x2786a564  addiu       $a2, $gp, -0x5A9C
    ctx->pc = 0x2e6df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944100));
label_2e6df8:
    // 0x2e6df8: 0xc04206c  jal         func_1081B0
label_2e6dfc:
    if (ctx->pc == 0x2E6DFCu) {
        ctx->pc = 0x2E6E00u;
        goto label_2e6e00;
    }
    ctx->pc = 0x2E6DF8u;
    SET_GPR_U32(ctx, 31, 0x2E6E00u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2E6DF8u, 0x2E6E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E00u;
label_2e6e00:
    // 0x2e6e00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e6e00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e04:
    // 0x2e6e04: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x2e6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_2e6e08:
    // 0x2e6e08: 0x10000021  b           . + 4 + (0x21 << 2)
label_2e6e0c:
    if (ctx->pc == 0x2E6E0Cu) {
        ctx->pc = 0x2E6E10u;
        goto label_2e6e10;
    }
    ctx->pc = 0x2E6E08u;
    {
        const bool branch_taken_0x2e6e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e08) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E10u;
label_2e6e10:
    // 0x2e6e10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2e6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e14:
    // 0x2e6e14: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2e6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2e6e18:
    // 0x2e6e18: 0xc044edc  jal         func_113B70
label_2e6e1c:
    if (ctx->pc == 0x2E6E1Cu) {
        ctx->pc = 0x2E6E20u;
        goto label_2e6e20;
    }
    ctx->pc = 0x2E6E18u;
    SET_GPR_U32(ctx, 31, 0x2E6E20u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x2E6E18u, 0x2E6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E20u;
label_2e6e20:
    // 0x2e6e20: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e6e20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e24:
    // 0x2e6e24: 0x1015001a  beq         $zero, $s5, . + 4 + (0x1A << 2)
label_2e6e28:
    if (ctx->pc == 0x2E6E28u) {
        ctx->pc = 0x2E6E2Cu;
        goto label_2e6e2c;
    }
    ctx->pc = 0x2E6E24u;
    {
        const bool branch_taken_0x2e6e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x2e6e24) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E2Cu;
label_2e6e2c:
    // 0x2e6e2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e6e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e30:
    // 0x2e6e30: 0xc0457d8  jal         func_115F60
label_2e6e34:
    if (ctx->pc == 0x2E6E34u) {
        ctx->pc = 0x2E6E38u;
        goto label_2e6e38;
    }
    ctx->pc = 0x2E6E30u;
    SET_GPR_U32(ctx, 31, 0x2E6E38u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x2E6E30u, 0x2E6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E38u;
label_2e6e38:
    // 0x2e6e38: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2e6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_2e6e3c:
    // 0x2e6e3c: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6e40:
    // 0x2e6e40: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x2e6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_2e6e44:
    // 0x2e6e44: 0xc0b8fd4  jal         func_2E3F50
label_2e6e48:
    if (ctx->pc == 0x2E6E48u) {
        ctx->pc = 0x2E6E4Cu;
        goto label_2e6e4c;
    }
    ctx->pc = 0x2E6E44u;
    SET_GPR_U32(ctx, 31, 0x2E6E4Cu);
    ctx->pc = 0x2E3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F50u, 0x2E6E44u, 0x2E6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E4Cu;
label_2e6e4c:
    // 0x2e6e4c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2e6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6e50:
    // 0x2e6e50: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x2e6e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_2e6e54:
    // 0x2e6e54: 0xc0b9804  jal         func_2E6010
label_2e6e58:
    if (ctx->pc == 0x2E6E58u) {
        ctx->pc = 0x2E6E5Cu;
        goto label_2e6e5c;
    }
    ctx->pc = 0x2E6E54u;
    SET_GPR_U32(ctx, 31, 0x2E6E5Cu);
    ctx->pc = 0x2E6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6010u, 0x2E6E54u, 0x2E6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E5Cu;
label_2e6e5c:
    // 0x2e6e5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2e6e60:
    if (ctx->pc == 0x2E6E60u) {
        ctx->pc = 0x2E6E64u;
        goto label_2e6e64;
    }
    ctx->pc = 0x2E6E5Cu;
    {
        const bool branch_taken_0x2e6e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e5c) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E64u;
label_2e6e64:
    // 0x2e6e64: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2e6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6e68:
    // 0x2e6e68: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x2e6e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_2e6e6c:
    // 0x2e6e6c: 0xc0b9824  jal         func_2E6090
label_2e6e70:
    if (ctx->pc == 0x2E6E70u) {
        ctx->pc = 0x2E6E74u;
        goto label_2e6e74;
    }
    ctx->pc = 0x2E6E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E6E74u);
    ctx->pc = 0x2E6090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6090u, 0x2E6E6Cu, 0x2E6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E74u;
label_2e6e74:
    // 0x2e6e74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e6e78:
    if (ctx->pc == 0x2E6E78u) {
        ctx->pc = 0x2E6E7Cu;
        goto label_2e6e7c;
    }
    ctx->pc = 0x2E6E74u;
    {
        const bool branch_taken_0x2e6e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e74) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E7Cu;
label_2e6e7c:
    // 0x2e6e7c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6e80:
    // 0x2e6e80: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e6e84:
    // 0x2e6e84: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x2e6e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_2e6e88:
    // 0x2e6e88: 0xc0444e0  jal         func_111380
label_2e6e8c:
    if (ctx->pc == 0x2E6E8Cu) {
        ctx->pc = 0x2E6E90u;
        goto label_2e6e90;
    }
    ctx->pc = 0x2E6E88u;
    SET_GPR_U32(ctx, 31, 0x2E6E90u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E6E88u, 0x2E6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E90u;
label_2e6e90:
    // 0x2e6e90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2e6e94:
    // 0x2e6e94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e6e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e98:
    // 0x2e6e98: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2e6e9c:
    // 0x2e6e9c: 0xc0b9624  jal         func_2E5890
label_2e6ea0:
    if (ctx->pc == 0x2E6EA0u) {
        ctx->pc = 0x2E6EA4u;
        goto label_2e6ea4;
    }
    ctx->pc = 0x2E6E9Cu;
    SET_GPR_U32(ctx, 31, 0x2E6EA4u);
    ctx->pc = 0x2E5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5890u, 0x2E6E9Cu, 0x2E6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EA4u;
label_2e6ea4:
    // 0x2e6ea4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_2e6ea8:
    if (ctx->pc == 0x2E6EA8u) {
        ctx->pc = 0x2E6EACu;
        goto label_2e6eac;
    }
    ctx->pc = 0x2E6EA4u;
    {
        const bool branch_taken_0x2e6ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ea4) {
            ctx->pc = 0x2E6E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6e10;
        }
    }
    ctx->pc = 0x2E6EACu;
label_2e6eac:
    // 0x2e6eac: 0x93a30180  lbu         $v1, 0x180($sp)
    ctx->pc = 0x2e6eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
label_2e6eb0:
    // 0x2e6eb0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2e6eb4:
    if (ctx->pc == 0x2E6EB4u) {
        ctx->pc = 0x2E6EB8u;
        goto label_2e6eb8;
    }
    ctx->pc = 0x2E6EB0u;
    {
        const bool branch_taken_0x2e6eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6eb0) {
            ctx->pc = 0x2E6EE4u;
            goto label_2e6ee4;
        }
    }
    ctx->pc = 0x2E6EB8u;
label_2e6eb8:
    // 0x2e6eb8: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6ebc:
    // 0x2e6ebc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2e6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6ec0:
    // 0x2e6ec0: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x2e6ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_2e6ec4:
    // 0x2e6ec4: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
label_2e6ec8:
    if (ctx->pc == 0x2E6EC8u) {
        ctx->pc = 0x2E6ECCu;
        goto label_2e6ecc;
    }
    ctx->pc = 0x2E6EC4u;
    {
        const bool branch_taken_0x2e6ec4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ec4) {
            ctx->pc = 0x2E6EE4u;
            goto label_2e6ee4;
        }
    }
    ctx->pc = 0x2E6ECCu;
label_2e6ecc:
    // 0x2e6ecc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2e6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6ed0:
    // 0x2e6ed0: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2e6ed4:
    // 0x2e6ed4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2e6ed8:
    // 0x2e6ed8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2e6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6edc:
    // 0x2e6edc: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2e6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2e6ee0:
    // 0x2e6ee0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e6ee4:
    // 0x2e6ee4: 0x16800010  bnez        $s4, . + 4 + (0x10 << 2)
label_2e6ee8:
    if (ctx->pc == 0x2E6EE8u) {
        ctx->pc = 0x2E6EECu;
        goto label_2e6eec;
    }
    ctx->pc = 0x2E6EE4u;
    {
        const bool branch_taken_0x2e6ee4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ee4) {
            ctx->pc = 0x2E6F28u;
            goto label_2e6f28;
        }
    }
    ctx->pc = 0x2E6EECu;
label_2e6eec:
    // 0x2e6eec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6ef0:
    // 0x2e6ef0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2e6ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6ef4:
    // 0x2e6ef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6ef8:
    // 0x2e6ef8: 0x0  nop
    ctx->pc = 0x2e6ef8u;
    // NOP
label_2e6efc:
    // 0x2e6efc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e6efcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e6f00:
    // 0x2e6f00: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2e6f04:
    if (ctx->pc == 0x2E6F04u) {
        ctx->pc = 0x2E6F08u;
        goto label_2e6f08;
    }
    ctx->pc = 0x2E6F00u;
    {
        const bool branch_taken_0x2e6f00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6f00) {
            ctx->pc = 0x2E6F14u;
            goto label_2e6f14;
        }
    }
    ctx->pc = 0x2E6F08u;
label_2e6f08:
    // 0x2e6f08: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2e6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2e6f0c:
    // 0x2e6f0c: 0xc0b8fe4  jal         func_2E3F90
label_2e6f10:
    if (ctx->pc == 0x2E6F10u) {
        ctx->pc = 0x2E6F14u;
        goto label_2e6f14;
    }
    ctx->pc = 0x2E6F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F14u);
    ctx->pc = 0x2E3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F90u, 0x2E6F0Cu, 0x2E6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F14u;
label_2e6f14:
    // 0x2e6f14: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2e6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2e6f18:
    // 0x2e6f18: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e6f1c:
    // 0x2e6f1c: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x2e6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_2e6f20:
    // 0x2e6f20: 0xc0b9bd8  jal         func_2E6F60
label_2e6f24:
    if (ctx->pc == 0x2E6F24u) {
        ctx->pc = 0x2E6F28u;
        goto label_2e6f28;
    }
    ctx->pc = 0x2E6F20u;
    SET_GPR_U32(ctx, 31, 0x2E6F28u);
    ctx->pc = 0x2E6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6F60u, 0x2E6F20u, 0x2E6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F28u;
label_2e6f28:
    // 0x2e6f28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e6f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e6f2c:
    // 0x2e6f2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e6f2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e6f30:
    // 0x2e6f30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e6f30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e6f34:
    // 0x2e6f34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e6f34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e6f38:
    // 0x2e6f38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e6f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e6f3c:
    // 0x2e6f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e6f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6f40:
    // 0x2e6f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e6f44:
    // 0x2e6f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e6f48:
    // 0x2e6f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e6f4c:
    // 0x2e6f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6f50:
    // 0x2e6f50: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x2e6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2e6f54:
    // 0x2e6f54: 0x3e00008  jr          $ra
label_2e6f58:
    if (ctx->pc == 0x2E6F58u) {
        ctx->pc = 0x2E6F5Cu;
        goto label_2e6f5c;
    }
    ctx->pc = 0x2E6F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6F5Cu;
label_2e6f5c:
    // 0x2e6f5c: 0x0  nop
    ctx->pc = 0x2e6f5cu;
    // NOP
    ctx->pc = 0x2e6f60u;
}
