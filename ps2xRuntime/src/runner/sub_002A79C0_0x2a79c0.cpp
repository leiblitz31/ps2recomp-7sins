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

// Function: sub_002A79C0
// Address: 0x2a79c0 - 0x2a82b0
void sub_002A79C0_0x2a79c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A79C0_0x2a79c0");
#endif

    switch (ctx->pc) {
        case 0x2a79c0u: goto label_2a79c0;
        case 0x2a79c4u: goto label_2a79c4;
        case 0x2a79c8u: goto label_2a79c8;
        case 0x2a79ccu: goto label_2a79cc;
        case 0x2a79d0u: goto label_2a79d0;
        case 0x2a79d4u: goto label_2a79d4;
        case 0x2a79d8u: goto label_2a79d8;
        case 0x2a79dcu: goto label_2a79dc;
        case 0x2a79e0u: goto label_2a79e0;
        case 0x2a79e4u: goto label_2a79e4;
        case 0x2a79e8u: goto label_2a79e8;
        case 0x2a79ecu: goto label_2a79ec;
        case 0x2a79f0u: goto label_2a79f0;
        case 0x2a79f4u: goto label_2a79f4;
        case 0x2a79f8u: goto label_2a79f8;
        case 0x2a79fcu: goto label_2a79fc;
        case 0x2a7a00u: goto label_2a7a00;
        case 0x2a7a04u: goto label_2a7a04;
        case 0x2a7a08u: goto label_2a7a08;
        case 0x2a7a0cu: goto label_2a7a0c;
        case 0x2a7a10u: goto label_2a7a10;
        case 0x2a7a14u: goto label_2a7a14;
        case 0x2a7a18u: goto label_2a7a18;
        case 0x2a7a1cu: goto label_2a7a1c;
        case 0x2a7a20u: goto label_2a7a20;
        case 0x2a7a24u: goto label_2a7a24;
        case 0x2a7a28u: goto label_2a7a28;
        case 0x2a7a2cu: goto label_2a7a2c;
        case 0x2a7a30u: goto label_2a7a30;
        case 0x2a7a34u: goto label_2a7a34;
        case 0x2a7a38u: goto label_2a7a38;
        case 0x2a7a3cu: goto label_2a7a3c;
        case 0x2a7a40u: goto label_2a7a40;
        case 0x2a7a44u: goto label_2a7a44;
        case 0x2a7a48u: goto label_2a7a48;
        case 0x2a7a4cu: goto label_2a7a4c;
        case 0x2a7a50u: goto label_2a7a50;
        case 0x2a7a54u: goto label_2a7a54;
        case 0x2a7a58u: goto label_2a7a58;
        case 0x2a7a5cu: goto label_2a7a5c;
        case 0x2a7a60u: goto label_2a7a60;
        case 0x2a7a64u: goto label_2a7a64;
        case 0x2a7a68u: goto label_2a7a68;
        case 0x2a7a6cu: goto label_2a7a6c;
        case 0x2a7a70u: goto label_2a7a70;
        case 0x2a7a74u: goto label_2a7a74;
        case 0x2a7a78u: goto label_2a7a78;
        case 0x2a7a7cu: goto label_2a7a7c;
        case 0x2a7a80u: goto label_2a7a80;
        case 0x2a7a84u: goto label_2a7a84;
        case 0x2a7a88u: goto label_2a7a88;
        case 0x2a7a8cu: goto label_2a7a8c;
        case 0x2a7a90u: goto label_2a7a90;
        case 0x2a7a94u: goto label_2a7a94;
        case 0x2a7a98u: goto label_2a7a98;
        case 0x2a7a9cu: goto label_2a7a9c;
        case 0x2a7aa0u: goto label_2a7aa0;
        case 0x2a7aa4u: goto label_2a7aa4;
        case 0x2a7aa8u: goto label_2a7aa8;
        case 0x2a7aacu: goto label_2a7aac;
        case 0x2a7ab0u: goto label_2a7ab0;
        case 0x2a7ab4u: goto label_2a7ab4;
        case 0x2a7ab8u: goto label_2a7ab8;
        case 0x2a7abcu: goto label_2a7abc;
        case 0x2a7ac0u: goto label_2a7ac0;
        case 0x2a7ac4u: goto label_2a7ac4;
        case 0x2a7ac8u: goto label_2a7ac8;
        case 0x2a7accu: goto label_2a7acc;
        case 0x2a7ad0u: goto label_2a7ad0;
        case 0x2a7ad4u: goto label_2a7ad4;
        case 0x2a7ad8u: goto label_2a7ad8;
        case 0x2a7adcu: goto label_2a7adc;
        case 0x2a7ae0u: goto label_2a7ae0;
        case 0x2a7ae4u: goto label_2a7ae4;
        case 0x2a7ae8u: goto label_2a7ae8;
        case 0x2a7aecu: goto label_2a7aec;
        case 0x2a7af0u: goto label_2a7af0;
        case 0x2a7af4u: goto label_2a7af4;
        case 0x2a7af8u: goto label_2a7af8;
        case 0x2a7afcu: goto label_2a7afc;
        case 0x2a7b00u: goto label_2a7b00;
        case 0x2a7b04u: goto label_2a7b04;
        case 0x2a7b08u: goto label_2a7b08;
        case 0x2a7b0cu: goto label_2a7b0c;
        case 0x2a7b10u: goto label_2a7b10;
        case 0x2a7b14u: goto label_2a7b14;
        case 0x2a7b18u: goto label_2a7b18;
        case 0x2a7b1cu: goto label_2a7b1c;
        case 0x2a7b20u: goto label_2a7b20;
        case 0x2a7b24u: goto label_2a7b24;
        case 0x2a7b28u: goto label_2a7b28;
        case 0x2a7b2cu: goto label_2a7b2c;
        case 0x2a7b30u: goto label_2a7b30;
        case 0x2a7b34u: goto label_2a7b34;
        case 0x2a7b38u: goto label_2a7b38;
        case 0x2a7b3cu: goto label_2a7b3c;
        case 0x2a7b40u: goto label_2a7b40;
        case 0x2a7b44u: goto label_2a7b44;
        case 0x2a7b48u: goto label_2a7b48;
        case 0x2a7b4cu: goto label_2a7b4c;
        case 0x2a7b50u: goto label_2a7b50;
        case 0x2a7b54u: goto label_2a7b54;
        case 0x2a7b58u: goto label_2a7b58;
        case 0x2a7b5cu: goto label_2a7b5c;
        case 0x2a7b60u: goto label_2a7b60;
        case 0x2a7b64u: goto label_2a7b64;
        case 0x2a7b68u: goto label_2a7b68;
        case 0x2a7b6cu: goto label_2a7b6c;
        case 0x2a7b70u: goto label_2a7b70;
        case 0x2a7b74u: goto label_2a7b74;
        case 0x2a7b78u: goto label_2a7b78;
        case 0x2a7b7cu: goto label_2a7b7c;
        case 0x2a7b80u: goto label_2a7b80;
        case 0x2a7b84u: goto label_2a7b84;
        case 0x2a7b88u: goto label_2a7b88;
        case 0x2a7b8cu: goto label_2a7b8c;
        case 0x2a7b90u: goto label_2a7b90;
        case 0x2a7b94u: goto label_2a7b94;
        case 0x2a7b98u: goto label_2a7b98;
        case 0x2a7b9cu: goto label_2a7b9c;
        case 0x2a7ba0u: goto label_2a7ba0;
        case 0x2a7ba4u: goto label_2a7ba4;
        case 0x2a7ba8u: goto label_2a7ba8;
        case 0x2a7bacu: goto label_2a7bac;
        case 0x2a7bb0u: goto label_2a7bb0;
        case 0x2a7bb4u: goto label_2a7bb4;
        case 0x2a7bb8u: goto label_2a7bb8;
        case 0x2a7bbcu: goto label_2a7bbc;
        case 0x2a7bc0u: goto label_2a7bc0;
        case 0x2a7bc4u: goto label_2a7bc4;
        case 0x2a7bc8u: goto label_2a7bc8;
        case 0x2a7bccu: goto label_2a7bcc;
        case 0x2a7bd0u: goto label_2a7bd0;
        case 0x2a7bd4u: goto label_2a7bd4;
        case 0x2a7bd8u: goto label_2a7bd8;
        case 0x2a7bdcu: goto label_2a7bdc;
        case 0x2a7be0u: goto label_2a7be0;
        case 0x2a7be4u: goto label_2a7be4;
        case 0x2a7be8u: goto label_2a7be8;
        case 0x2a7becu: goto label_2a7bec;
        case 0x2a7bf0u: goto label_2a7bf0;
        case 0x2a7bf4u: goto label_2a7bf4;
        case 0x2a7bf8u: goto label_2a7bf8;
        case 0x2a7bfcu: goto label_2a7bfc;
        case 0x2a7c00u: goto label_2a7c00;
        case 0x2a7c04u: goto label_2a7c04;
        case 0x2a7c08u: goto label_2a7c08;
        case 0x2a7c0cu: goto label_2a7c0c;
        case 0x2a7c10u: goto label_2a7c10;
        case 0x2a7c14u: goto label_2a7c14;
        case 0x2a7c18u: goto label_2a7c18;
        case 0x2a7c1cu: goto label_2a7c1c;
        case 0x2a7c20u: goto label_2a7c20;
        case 0x2a7c24u: goto label_2a7c24;
        case 0x2a7c28u: goto label_2a7c28;
        case 0x2a7c2cu: goto label_2a7c2c;
        case 0x2a7c30u: goto label_2a7c30;
        case 0x2a7c34u: goto label_2a7c34;
        case 0x2a7c38u: goto label_2a7c38;
        case 0x2a7c3cu: goto label_2a7c3c;
        case 0x2a7c40u: goto label_2a7c40;
        case 0x2a7c44u: goto label_2a7c44;
        case 0x2a7c48u: goto label_2a7c48;
        case 0x2a7c4cu: goto label_2a7c4c;
        case 0x2a7c50u: goto label_2a7c50;
        case 0x2a7c54u: goto label_2a7c54;
        case 0x2a7c58u: goto label_2a7c58;
        case 0x2a7c5cu: goto label_2a7c5c;
        case 0x2a7c60u: goto label_2a7c60;
        case 0x2a7c64u: goto label_2a7c64;
        case 0x2a7c68u: goto label_2a7c68;
        case 0x2a7c6cu: goto label_2a7c6c;
        case 0x2a7c70u: goto label_2a7c70;
        case 0x2a7c74u: goto label_2a7c74;
        case 0x2a7c78u: goto label_2a7c78;
        case 0x2a7c7cu: goto label_2a7c7c;
        case 0x2a7c80u: goto label_2a7c80;
        case 0x2a7c84u: goto label_2a7c84;
        case 0x2a7c88u: goto label_2a7c88;
        case 0x2a7c8cu: goto label_2a7c8c;
        case 0x2a7c90u: goto label_2a7c90;
        case 0x2a7c94u: goto label_2a7c94;
        case 0x2a7c98u: goto label_2a7c98;
        case 0x2a7c9cu: goto label_2a7c9c;
        case 0x2a7ca0u: goto label_2a7ca0;
        case 0x2a7ca4u: goto label_2a7ca4;
        case 0x2a7ca8u: goto label_2a7ca8;
        case 0x2a7cacu: goto label_2a7cac;
        case 0x2a7cb0u: goto label_2a7cb0;
        case 0x2a7cb4u: goto label_2a7cb4;
        case 0x2a7cb8u: goto label_2a7cb8;
        case 0x2a7cbcu: goto label_2a7cbc;
        case 0x2a7cc0u: goto label_2a7cc0;
        case 0x2a7cc4u: goto label_2a7cc4;
        case 0x2a7cc8u: goto label_2a7cc8;
        case 0x2a7cccu: goto label_2a7ccc;
        case 0x2a7cd0u: goto label_2a7cd0;
        case 0x2a7cd4u: goto label_2a7cd4;
        case 0x2a7cd8u: goto label_2a7cd8;
        case 0x2a7cdcu: goto label_2a7cdc;
        case 0x2a7ce0u: goto label_2a7ce0;
        case 0x2a7ce4u: goto label_2a7ce4;
        case 0x2a7ce8u: goto label_2a7ce8;
        case 0x2a7cecu: goto label_2a7cec;
        case 0x2a7cf0u: goto label_2a7cf0;
        case 0x2a7cf4u: goto label_2a7cf4;
        case 0x2a7cf8u: goto label_2a7cf8;
        case 0x2a7cfcu: goto label_2a7cfc;
        case 0x2a7d00u: goto label_2a7d00;
        case 0x2a7d04u: goto label_2a7d04;
        case 0x2a7d08u: goto label_2a7d08;
        case 0x2a7d0cu: goto label_2a7d0c;
        case 0x2a7d10u: goto label_2a7d10;
        case 0x2a7d14u: goto label_2a7d14;
        case 0x2a7d18u: goto label_2a7d18;
        case 0x2a7d1cu: goto label_2a7d1c;
        case 0x2a7d20u: goto label_2a7d20;
        case 0x2a7d24u: goto label_2a7d24;
        case 0x2a7d28u: goto label_2a7d28;
        case 0x2a7d2cu: goto label_2a7d2c;
        case 0x2a7d30u: goto label_2a7d30;
        case 0x2a7d34u: goto label_2a7d34;
        case 0x2a7d38u: goto label_2a7d38;
        case 0x2a7d3cu: goto label_2a7d3c;
        case 0x2a7d40u: goto label_2a7d40;
        case 0x2a7d44u: goto label_2a7d44;
        case 0x2a7d48u: goto label_2a7d48;
        case 0x2a7d4cu: goto label_2a7d4c;
        case 0x2a7d50u: goto label_2a7d50;
        case 0x2a7d54u: goto label_2a7d54;
        case 0x2a7d58u: goto label_2a7d58;
        case 0x2a7d5cu: goto label_2a7d5c;
        case 0x2a7d60u: goto label_2a7d60;
        case 0x2a7d64u: goto label_2a7d64;
        case 0x2a7d68u: goto label_2a7d68;
        case 0x2a7d6cu: goto label_2a7d6c;
        case 0x2a7d70u: goto label_2a7d70;
        case 0x2a7d74u: goto label_2a7d74;
        case 0x2a7d78u: goto label_2a7d78;
        case 0x2a7d7cu: goto label_2a7d7c;
        case 0x2a7d80u: goto label_2a7d80;
        case 0x2a7d84u: goto label_2a7d84;
        case 0x2a7d88u: goto label_2a7d88;
        case 0x2a7d8cu: goto label_2a7d8c;
        case 0x2a7d90u: goto label_2a7d90;
        case 0x2a7d94u: goto label_2a7d94;
        case 0x2a7d98u: goto label_2a7d98;
        case 0x2a7d9cu: goto label_2a7d9c;
        case 0x2a7da0u: goto label_2a7da0;
        case 0x2a7da4u: goto label_2a7da4;
        case 0x2a7da8u: goto label_2a7da8;
        case 0x2a7dacu: goto label_2a7dac;
        case 0x2a7db0u: goto label_2a7db0;
        case 0x2a7db4u: goto label_2a7db4;
        case 0x2a7db8u: goto label_2a7db8;
        case 0x2a7dbcu: goto label_2a7dbc;
        case 0x2a7dc0u: goto label_2a7dc0;
        case 0x2a7dc4u: goto label_2a7dc4;
        case 0x2a7dc8u: goto label_2a7dc8;
        case 0x2a7dccu: goto label_2a7dcc;
        case 0x2a7dd0u: goto label_2a7dd0;
        case 0x2a7dd4u: goto label_2a7dd4;
        case 0x2a7dd8u: goto label_2a7dd8;
        case 0x2a7ddcu: goto label_2a7ddc;
        case 0x2a7de0u: goto label_2a7de0;
        case 0x2a7de4u: goto label_2a7de4;
        case 0x2a7de8u: goto label_2a7de8;
        case 0x2a7decu: goto label_2a7dec;
        case 0x2a7df0u: goto label_2a7df0;
        case 0x2a7df4u: goto label_2a7df4;
        case 0x2a7df8u: goto label_2a7df8;
        case 0x2a7dfcu: goto label_2a7dfc;
        case 0x2a7e00u: goto label_2a7e00;
        case 0x2a7e04u: goto label_2a7e04;
        case 0x2a7e08u: goto label_2a7e08;
        case 0x2a7e0cu: goto label_2a7e0c;
        case 0x2a7e10u: goto label_2a7e10;
        case 0x2a7e14u: goto label_2a7e14;
        case 0x2a7e18u: goto label_2a7e18;
        case 0x2a7e1cu: goto label_2a7e1c;
        case 0x2a7e20u: goto label_2a7e20;
        case 0x2a7e24u: goto label_2a7e24;
        case 0x2a7e28u: goto label_2a7e28;
        case 0x2a7e2cu: goto label_2a7e2c;
        case 0x2a7e30u: goto label_2a7e30;
        case 0x2a7e34u: goto label_2a7e34;
        case 0x2a7e38u: goto label_2a7e38;
        case 0x2a7e3cu: goto label_2a7e3c;
        case 0x2a7e40u: goto label_2a7e40;
        case 0x2a7e44u: goto label_2a7e44;
        case 0x2a7e48u: goto label_2a7e48;
        case 0x2a7e4cu: goto label_2a7e4c;
        case 0x2a7e50u: goto label_2a7e50;
        case 0x2a7e54u: goto label_2a7e54;
        case 0x2a7e58u: goto label_2a7e58;
        case 0x2a7e5cu: goto label_2a7e5c;
        case 0x2a7e60u: goto label_2a7e60;
        case 0x2a7e64u: goto label_2a7e64;
        case 0x2a7e68u: goto label_2a7e68;
        case 0x2a7e6cu: goto label_2a7e6c;
        case 0x2a7e70u: goto label_2a7e70;
        case 0x2a7e74u: goto label_2a7e74;
        case 0x2a7e78u: goto label_2a7e78;
        case 0x2a7e7cu: goto label_2a7e7c;
        case 0x2a7e80u: goto label_2a7e80;
        case 0x2a7e84u: goto label_2a7e84;
        case 0x2a7e88u: goto label_2a7e88;
        case 0x2a7e8cu: goto label_2a7e8c;
        case 0x2a7e90u: goto label_2a7e90;
        case 0x2a7e94u: goto label_2a7e94;
        case 0x2a7e98u: goto label_2a7e98;
        case 0x2a7e9cu: goto label_2a7e9c;
        case 0x2a7ea0u: goto label_2a7ea0;
        case 0x2a7ea4u: goto label_2a7ea4;
        case 0x2a7ea8u: goto label_2a7ea8;
        case 0x2a7eacu: goto label_2a7eac;
        case 0x2a7eb0u: goto label_2a7eb0;
        case 0x2a7eb4u: goto label_2a7eb4;
        case 0x2a7eb8u: goto label_2a7eb8;
        case 0x2a7ebcu: goto label_2a7ebc;
        case 0x2a7ec0u: goto label_2a7ec0;
        case 0x2a7ec4u: goto label_2a7ec4;
        case 0x2a7ec8u: goto label_2a7ec8;
        case 0x2a7eccu: goto label_2a7ecc;
        case 0x2a7ed0u: goto label_2a7ed0;
        case 0x2a7ed4u: goto label_2a7ed4;
        case 0x2a7ed8u: goto label_2a7ed8;
        case 0x2a7edcu: goto label_2a7edc;
        case 0x2a7ee0u: goto label_2a7ee0;
        case 0x2a7ee4u: goto label_2a7ee4;
        case 0x2a7ee8u: goto label_2a7ee8;
        case 0x2a7eecu: goto label_2a7eec;
        case 0x2a7ef0u: goto label_2a7ef0;
        case 0x2a7ef4u: goto label_2a7ef4;
        case 0x2a7ef8u: goto label_2a7ef8;
        case 0x2a7efcu: goto label_2a7efc;
        case 0x2a7f00u: goto label_2a7f00;
        case 0x2a7f04u: goto label_2a7f04;
        case 0x2a7f08u: goto label_2a7f08;
        case 0x2a7f0cu: goto label_2a7f0c;
        case 0x2a7f10u: goto label_2a7f10;
        case 0x2a7f14u: goto label_2a7f14;
        case 0x2a7f18u: goto label_2a7f18;
        case 0x2a7f1cu: goto label_2a7f1c;
        case 0x2a7f20u: goto label_2a7f20;
        case 0x2a7f24u: goto label_2a7f24;
        case 0x2a7f28u: goto label_2a7f28;
        case 0x2a7f2cu: goto label_2a7f2c;
        case 0x2a7f30u: goto label_2a7f30;
        case 0x2a7f34u: goto label_2a7f34;
        case 0x2a7f38u: goto label_2a7f38;
        case 0x2a7f3cu: goto label_2a7f3c;
        case 0x2a7f40u: goto label_2a7f40;
        case 0x2a7f44u: goto label_2a7f44;
        case 0x2a7f48u: goto label_2a7f48;
        case 0x2a7f4cu: goto label_2a7f4c;
        case 0x2a7f50u: goto label_2a7f50;
        case 0x2a7f54u: goto label_2a7f54;
        case 0x2a7f58u: goto label_2a7f58;
        case 0x2a7f5cu: goto label_2a7f5c;
        case 0x2a7f60u: goto label_2a7f60;
        case 0x2a7f64u: goto label_2a7f64;
        case 0x2a7f68u: goto label_2a7f68;
        case 0x2a7f6cu: goto label_2a7f6c;
        case 0x2a7f70u: goto label_2a7f70;
        case 0x2a7f74u: goto label_2a7f74;
        case 0x2a7f78u: goto label_2a7f78;
        case 0x2a7f7cu: goto label_2a7f7c;
        case 0x2a7f80u: goto label_2a7f80;
        case 0x2a7f84u: goto label_2a7f84;
        case 0x2a7f88u: goto label_2a7f88;
        case 0x2a7f8cu: goto label_2a7f8c;
        case 0x2a7f90u: goto label_2a7f90;
        case 0x2a7f94u: goto label_2a7f94;
        case 0x2a7f98u: goto label_2a7f98;
        case 0x2a7f9cu: goto label_2a7f9c;
        case 0x2a7fa0u: goto label_2a7fa0;
        case 0x2a7fa4u: goto label_2a7fa4;
        case 0x2a7fa8u: goto label_2a7fa8;
        case 0x2a7facu: goto label_2a7fac;
        case 0x2a7fb0u: goto label_2a7fb0;
        case 0x2a7fb4u: goto label_2a7fb4;
        case 0x2a7fb8u: goto label_2a7fb8;
        case 0x2a7fbcu: goto label_2a7fbc;
        case 0x2a7fc0u: goto label_2a7fc0;
        case 0x2a7fc4u: goto label_2a7fc4;
        case 0x2a7fc8u: goto label_2a7fc8;
        case 0x2a7fccu: goto label_2a7fcc;
        case 0x2a7fd0u: goto label_2a7fd0;
        case 0x2a7fd4u: goto label_2a7fd4;
        case 0x2a7fd8u: goto label_2a7fd8;
        case 0x2a7fdcu: goto label_2a7fdc;
        case 0x2a7fe0u: goto label_2a7fe0;
        case 0x2a7fe4u: goto label_2a7fe4;
        case 0x2a7fe8u: goto label_2a7fe8;
        case 0x2a7fecu: goto label_2a7fec;
        case 0x2a7ff0u: goto label_2a7ff0;
        case 0x2a7ff4u: goto label_2a7ff4;
        case 0x2a7ff8u: goto label_2a7ff8;
        case 0x2a7ffcu: goto label_2a7ffc;
        case 0x2a8000u: goto label_2a8000;
        case 0x2a8004u: goto label_2a8004;
        case 0x2a8008u: goto label_2a8008;
        case 0x2a800cu: goto label_2a800c;
        case 0x2a8010u: goto label_2a8010;
        case 0x2a8014u: goto label_2a8014;
        case 0x2a8018u: goto label_2a8018;
        case 0x2a801cu: goto label_2a801c;
        case 0x2a8020u: goto label_2a8020;
        case 0x2a8024u: goto label_2a8024;
        case 0x2a8028u: goto label_2a8028;
        case 0x2a802cu: goto label_2a802c;
        case 0x2a8030u: goto label_2a8030;
        case 0x2a8034u: goto label_2a8034;
        case 0x2a8038u: goto label_2a8038;
        case 0x2a803cu: goto label_2a803c;
        case 0x2a8040u: goto label_2a8040;
        case 0x2a8044u: goto label_2a8044;
        case 0x2a8048u: goto label_2a8048;
        case 0x2a804cu: goto label_2a804c;
        case 0x2a8050u: goto label_2a8050;
        case 0x2a8054u: goto label_2a8054;
        case 0x2a8058u: goto label_2a8058;
        case 0x2a805cu: goto label_2a805c;
        case 0x2a8060u: goto label_2a8060;
        case 0x2a8064u: goto label_2a8064;
        case 0x2a8068u: goto label_2a8068;
        case 0x2a806cu: goto label_2a806c;
        case 0x2a8070u: goto label_2a8070;
        case 0x2a8074u: goto label_2a8074;
        case 0x2a8078u: goto label_2a8078;
        case 0x2a807cu: goto label_2a807c;
        case 0x2a8080u: goto label_2a8080;
        case 0x2a8084u: goto label_2a8084;
        case 0x2a8088u: goto label_2a8088;
        case 0x2a808cu: goto label_2a808c;
        case 0x2a8090u: goto label_2a8090;
        case 0x2a8094u: goto label_2a8094;
        case 0x2a8098u: goto label_2a8098;
        case 0x2a809cu: goto label_2a809c;
        case 0x2a80a0u: goto label_2a80a0;
        case 0x2a80a4u: goto label_2a80a4;
        case 0x2a80a8u: goto label_2a80a8;
        case 0x2a80acu: goto label_2a80ac;
        case 0x2a80b0u: goto label_2a80b0;
        case 0x2a80b4u: goto label_2a80b4;
        case 0x2a80b8u: goto label_2a80b8;
        case 0x2a80bcu: goto label_2a80bc;
        case 0x2a80c0u: goto label_2a80c0;
        case 0x2a80c4u: goto label_2a80c4;
        case 0x2a80c8u: goto label_2a80c8;
        case 0x2a80ccu: goto label_2a80cc;
        case 0x2a80d0u: goto label_2a80d0;
        case 0x2a80d4u: goto label_2a80d4;
        case 0x2a80d8u: goto label_2a80d8;
        case 0x2a80dcu: goto label_2a80dc;
        case 0x2a80e0u: goto label_2a80e0;
        case 0x2a80e4u: goto label_2a80e4;
        case 0x2a80e8u: goto label_2a80e8;
        case 0x2a80ecu: goto label_2a80ec;
        case 0x2a80f0u: goto label_2a80f0;
        case 0x2a80f4u: goto label_2a80f4;
        case 0x2a80f8u: goto label_2a80f8;
        case 0x2a80fcu: goto label_2a80fc;
        case 0x2a8100u: goto label_2a8100;
        case 0x2a8104u: goto label_2a8104;
        case 0x2a8108u: goto label_2a8108;
        case 0x2a810cu: goto label_2a810c;
        case 0x2a8110u: goto label_2a8110;
        case 0x2a8114u: goto label_2a8114;
        case 0x2a8118u: goto label_2a8118;
        case 0x2a811cu: goto label_2a811c;
        case 0x2a8120u: goto label_2a8120;
        case 0x2a8124u: goto label_2a8124;
        case 0x2a8128u: goto label_2a8128;
        case 0x2a812cu: goto label_2a812c;
        case 0x2a8130u: goto label_2a8130;
        case 0x2a8134u: goto label_2a8134;
        case 0x2a8138u: goto label_2a8138;
        case 0x2a813cu: goto label_2a813c;
        case 0x2a8140u: goto label_2a8140;
        case 0x2a8144u: goto label_2a8144;
        case 0x2a8148u: goto label_2a8148;
        case 0x2a814cu: goto label_2a814c;
        case 0x2a8150u: goto label_2a8150;
        case 0x2a8154u: goto label_2a8154;
        case 0x2a8158u: goto label_2a8158;
        case 0x2a815cu: goto label_2a815c;
        case 0x2a8160u: goto label_2a8160;
        case 0x2a8164u: goto label_2a8164;
        case 0x2a8168u: goto label_2a8168;
        case 0x2a816cu: goto label_2a816c;
        case 0x2a8170u: goto label_2a8170;
        case 0x2a8174u: goto label_2a8174;
        case 0x2a8178u: goto label_2a8178;
        case 0x2a817cu: goto label_2a817c;
        case 0x2a8180u: goto label_2a8180;
        case 0x2a8184u: goto label_2a8184;
        case 0x2a8188u: goto label_2a8188;
        case 0x2a818cu: goto label_2a818c;
        case 0x2a8190u: goto label_2a8190;
        case 0x2a8194u: goto label_2a8194;
        case 0x2a8198u: goto label_2a8198;
        case 0x2a819cu: goto label_2a819c;
        case 0x2a81a0u: goto label_2a81a0;
        case 0x2a81a4u: goto label_2a81a4;
        case 0x2a81a8u: goto label_2a81a8;
        case 0x2a81acu: goto label_2a81ac;
        case 0x2a81b0u: goto label_2a81b0;
        case 0x2a81b4u: goto label_2a81b4;
        case 0x2a81b8u: goto label_2a81b8;
        case 0x2a81bcu: goto label_2a81bc;
        case 0x2a81c0u: goto label_2a81c0;
        case 0x2a81c4u: goto label_2a81c4;
        case 0x2a81c8u: goto label_2a81c8;
        case 0x2a81ccu: goto label_2a81cc;
        case 0x2a81d0u: goto label_2a81d0;
        case 0x2a81d4u: goto label_2a81d4;
        case 0x2a81d8u: goto label_2a81d8;
        case 0x2a81dcu: goto label_2a81dc;
        case 0x2a81e0u: goto label_2a81e0;
        case 0x2a81e4u: goto label_2a81e4;
        case 0x2a81e8u: goto label_2a81e8;
        case 0x2a81ecu: goto label_2a81ec;
        case 0x2a81f0u: goto label_2a81f0;
        case 0x2a81f4u: goto label_2a81f4;
        case 0x2a81f8u: goto label_2a81f8;
        case 0x2a81fcu: goto label_2a81fc;
        case 0x2a8200u: goto label_2a8200;
        case 0x2a8204u: goto label_2a8204;
        case 0x2a8208u: goto label_2a8208;
        case 0x2a820cu: goto label_2a820c;
        case 0x2a8210u: goto label_2a8210;
        case 0x2a8214u: goto label_2a8214;
        case 0x2a8218u: goto label_2a8218;
        case 0x2a821cu: goto label_2a821c;
        case 0x2a8220u: goto label_2a8220;
        case 0x2a8224u: goto label_2a8224;
        case 0x2a8228u: goto label_2a8228;
        case 0x2a822cu: goto label_2a822c;
        case 0x2a8230u: goto label_2a8230;
        case 0x2a8234u: goto label_2a8234;
        case 0x2a8238u: goto label_2a8238;
        case 0x2a823cu: goto label_2a823c;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a8244u: goto label_2a8244;
        case 0x2a8248u: goto label_2a8248;
        case 0x2a824cu: goto label_2a824c;
        case 0x2a8250u: goto label_2a8250;
        case 0x2a8254u: goto label_2a8254;
        case 0x2a8258u: goto label_2a8258;
        case 0x2a825cu: goto label_2a825c;
        case 0x2a8260u: goto label_2a8260;
        case 0x2a8264u: goto label_2a8264;
        case 0x2a8268u: goto label_2a8268;
        case 0x2a826cu: goto label_2a826c;
        case 0x2a8270u: goto label_2a8270;
        case 0x2a8274u: goto label_2a8274;
        case 0x2a8278u: goto label_2a8278;
        case 0x2a827cu: goto label_2a827c;
        case 0x2a8280u: goto label_2a8280;
        case 0x2a8284u: goto label_2a8284;
        case 0x2a8288u: goto label_2a8288;
        case 0x2a828cu: goto label_2a828c;
        case 0x2a8290u: goto label_2a8290;
        case 0x2a8294u: goto label_2a8294;
        case 0x2a8298u: goto label_2a8298;
        case 0x2a829cu: goto label_2a829c;
        case 0x2a82a0u: goto label_2a82a0;
        case 0x2a82a4u: goto label_2a82a4;
        case 0x2a82a8u: goto label_2a82a8;
        case 0x2a82acu: goto label_2a82ac;
        default: break;
    }

    ctx->pc = 0x2a79c0u;

label_2a79c0:
    // 0x2a79c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a79c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a79c4:
    // 0x2a79c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a79c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a79c8:
    // 0x2a79c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a79cc:
    // 0x2a79cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a79d0:
    // 0x2a79d0: 0xc09d130  jal         func_2744C0
label_2a79d4:
    if (ctx->pc == 0x2A79D4u) {
        ctx->pc = 0x2A79D8u;
        goto label_2a79d8;
    }
    ctx->pc = 0x2A79D0u;
    SET_GPR_U32(ctx, 31, 0x2A79D8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2A79D0u, 0x2A79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79D8u;
label_2a79d8:
    // 0x2a79d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a79dc:
    // 0x2a79dc: 0x24636340  addiu       $v1, $v1, 0x6340
    ctx->pc = 0x2a79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25408));
label_2a79e0:
    // 0x2a79e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a79e4:
    // 0x2a79e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a79e8:
    // 0x2a79e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a79ec:
    // 0x2a79ec: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x2a79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_2a79f0:
    // 0x2a79f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a79f4:
    // 0x2a79f4: 0xa0400078  sb          $zero, 0x78($v0)
    ctx->pc = 0x2a79f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 0));
label_2a79f8:
    // 0x2a79f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a79f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a79fc:
    // 0x2a79fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a00:
    // 0x2a7a00: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2a7a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_2a7a04:
    // 0x2a7a04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2a7a08:
    // 0x2a7a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a7a0c:
    // 0x2a7a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a10:
    // 0x2a7a10: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2a7a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_2a7a14:
    // 0x2a7a14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a18:
    // 0x2a7a18: 0xa0400084  sb          $zero, 0x84($v0)
    ctx->pc = 0x2a7a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 0));
label_2a7a1c:
    // 0x2a7a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a20:
    // 0x2a7a20: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x2a7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
label_2a7a24:
    // 0x2a7a24: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x2a7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7a28:
    // 0x2a7a28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a2c:
    // 0x2a7a2c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2a7a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_2a7a30:
    // 0x2a7a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a34:
    // 0x2a7a34: 0xa0400085  sb          $zero, 0x85($v0)
    ctx->pc = 0x2a7a34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 133), (uint8_t)GPR_U32(ctx, 0));
label_2a7a38:
    // 0x2a7a38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a3c:
    // 0x2a7a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7a40:
    // 0x2a7a40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a7a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a7a44:
    // 0x2a7a44: 0x3e00008  jr          $ra
label_2a7a48:
    if (ctx->pc == 0x2A7A48u) {
        ctx->pc = 0x2A7A4Cu;
        goto label_2a7a4c;
    }
    ctx->pc = 0x2A7A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A4Cu;
label_2a7a4c:
    // 0x2a7a4c: 0x0  nop
    ctx->pc = 0x2a7a4cu;
    // NOP
label_2a7a50:
    // 0x2a7a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a7a54:
    // 0x2a7a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a7a58:
    // 0x2a7a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a7a5c:
    // 0x2a7a5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a7a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2a7a60:
    // 0x2a7a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a64:
    // 0x2a7a64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2a7a68:
    if (ctx->pc == 0x2A7A68u) {
        ctx->pc = 0x2A7A6Cu;
        goto label_2a7a6c;
    }
    ctx->pc = 0x2A7A64u;
    {
        const bool branch_taken_0x2a7a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7a64) {
            ctx->pc = 0x2A7AACu;
            goto label_2a7aac;
        }
    }
    ctx->pc = 0x2A7A6Cu;
label_2a7a6c:
    // 0x2a7a6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a7a70:
    // 0x2a7a70: 0x24636340  addiu       $v1, $v1, 0x6340
    ctx->pc = 0x2a7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25408));
label_2a7a74:
    // 0x2a7a74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a78:
    // 0x2a7a78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a7a7c:
    // 0x2a7a7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7a80:
    // 0x2a7a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7a84:
    // 0x2a7a84: 0xc09d150  jal         func_274540
label_2a7a88:
    if (ctx->pc == 0x2A7A88u) {
        ctx->pc = 0x2A7A8Cu;
        goto label_2a7a8c;
    }
    ctx->pc = 0x2A7A84u;
    SET_GPR_U32(ctx, 31, 0x2A7A8Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2A7A84u, 0x2A7A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A8Cu;
label_2a7a8c:
    // 0x2a7a8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a7a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2a7a90:
    // 0x2a7a90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a7a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a7a94:
    // 0x2a7a94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a7a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a7a98:
    // 0x2a7a98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2a7a9c:
    if (ctx->pc == 0x2A7A9Cu) {
        ctx->pc = 0x2A7AA0u;
        goto label_2a7aa0;
    }
    ctx->pc = 0x2A7A98u;
    {
        const bool branch_taken_0x2a7a98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a7a98) {
            ctx->pc = 0x2A7AACu;
            goto label_2a7aac;
        }
    }
    ctx->pc = 0x2A7AA0u;
label_2a7aa0:
    // 0x2a7aa0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a7aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7aa4:
    // 0x2a7aa4: 0xc0ba070  jal         func_2E81C0
label_2a7aa8:
    if (ctx->pc == 0x2A7AA8u) {
        ctx->pc = 0x2A7AACu;
        goto label_2a7aac;
    }
    ctx->pc = 0x2A7AA4u;
    SET_GPR_U32(ctx, 31, 0x2A7AACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A7AA4u, 0x2A7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7AACu;
label_2a7aac:
    // 0x2a7aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7ab0:
    // 0x2a7ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7ab4:
    // 0x2a7ab4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a7ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a7ab8:
    // 0x2a7ab8: 0x3e00008  jr          $ra
label_2a7abc:
    if (ctx->pc == 0x2A7ABCu) {
        ctx->pc = 0x2A7AC0u;
        goto label_2a7ac0;
    }
    ctx->pc = 0x2A7AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7AC0u;
label_2a7ac0:
    // 0x2a7ac0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2a7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_2a7ac4:
    // 0x2a7ac4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2a7ac8:
    // 0x2a7ac8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2a7acc:
    // 0x2a7acc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a7accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2a7ad0:
    // 0x2a7ad0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a7ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a7ad4:
    // 0x2a7ad4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a7ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a7ad8:
    // 0x2a7ad8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a7ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a7adc:
    // 0x2a7adc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a7adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a7ae0:
    // 0x2a7ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a7ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a7ae4:
    // 0x2a7ae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a7ae8:
    // 0x2a7ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a7aec:
    // 0x2a7aec: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x2a7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
label_2a7af0:
    // 0x2a7af0: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x2a7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
label_2a7af4:
    // 0x2a7af4: 0xafa601d0  sw          $a2, 0x1D0($sp)
    ctx->pc = 0x2a7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 6));
label_2a7af8:
    // 0x2a7af8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2a7af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7afc:
    // 0x2a7afc: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x2a7afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2a7b00:
    // 0x2a7b00: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x2a7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2a7b04:
    // 0x2a7b04: 0xc09d18c  jal         func_274630
label_2a7b08:
    if (ctx->pc == 0x2A7B08u) {
        ctx->pc = 0x2A7B0Cu;
        goto label_2a7b0c;
    }
    ctx->pc = 0x2A7B04u;
    SET_GPR_U32(ctx, 31, 0x2A7B0Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2A7B04u, 0x2A7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B0Cu;
label_2a7b0c:
    // 0x2a7b0c: 0xa3a201af  sb          $v0, 0x1AF($sp)
    ctx->pc = 0x2a7b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 431), (uint8_t)GPR_U32(ctx, 2));
label_2a7b10:
    // 0x2a7b10: 0x93a201af  lbu         $v0, 0x1AF($sp)
    ctx->pc = 0x2a7b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 431)));
label_2a7b14:
    // 0x2a7b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a7b18:
    // 0x2a7b18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a7b1c:
    if (ctx->pc == 0x2A7B1Cu) {
        ctx->pc = 0x2A7B20u;
        goto label_2a7b20;
    }
    ctx->pc = 0x2A7B18u;
    {
        const bool branch_taken_0x2a7b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b18) {
            ctx->pc = 0x2A7B2Cu;
            goto label_2a7b2c;
        }
    }
    ctx->pc = 0x2A7B20u;
label_2a7b20:
    // 0x2a7b20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b24:
    // 0x2a7b24: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_2a7b28:
    if (ctx->pc == 0x2A7B28u) {
        ctx->pc = 0x2A7B2Cu;
        goto label_2a7b2c;
    }
    ctx->pc = 0x2A7B24u;
    {
        const bool branch_taken_0x2a7b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b24) {
            ctx->pc = 0x2A7E28u;
            goto label_2a7e28;
        }
    }
    ctx->pc = 0x2A7B2Cu;
label_2a7b2c:
    // 0x2a7b2c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7b30:
    // 0x2a7b30: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7b34:
    // 0x2a7b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a7b38:
    if (ctx->pc == 0x2A7B38u) {
        ctx->pc = 0x2A7B3Cu;
        goto label_2a7b3c;
    }
    ctx->pc = 0x2A7B34u;
    {
        const bool branch_taken_0x2a7b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b34) {
            ctx->pc = 0x2A7B4Cu;
            goto label_2a7b4c;
        }
    }
    ctx->pc = 0x2A7B3Cu;
label_2a7b3c:
    // 0x2a7b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7b40:
    // 0x2a7b40: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2a7b40u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a7b44:
    // 0x2a7b44: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a7b48:
    if (ctx->pc == 0x2A7B48u) {
        ctx->pc = 0x2A7B4Cu;
        goto label_2a7b4c;
    }
    ctx->pc = 0x2A7B44u;
    {
        const bool branch_taken_0x2a7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b44) {
            ctx->pc = 0x2A7B50u;
            goto label_2a7b50;
        }
    }
    ctx->pc = 0x2A7B4Cu;
label_2a7b4c:
    // 0x2a7b4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a7b4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b50:
    // 0x2a7b50: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x2a7b50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2a7b54:
    // 0x2a7b54: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2a7b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2a7b58:
    // 0x2a7b58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a7b5c:
    if (ctx->pc == 0x2A7B5Cu) {
        ctx->pc = 0x2A7B60u;
        goto label_2a7b60;
    }
    ctx->pc = 0x2A7B58u;
    {
        const bool branch_taken_0x2a7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b58) {
            ctx->pc = 0x2A7B6Cu;
            goto label_2a7b6c;
        }
    }
    ctx->pc = 0x2A7B60u;
label_2a7b60:
    // 0x2a7b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b64:
    // 0x2a7b64: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2a7b68:
    if (ctx->pc == 0x2A7B68u) {
        ctx->pc = 0x2A7B6Cu;
        goto label_2a7b6c;
    }
    ctx->pc = 0x2A7B64u;
    {
        const bool branch_taken_0x2a7b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b64) {
            ctx->pc = 0x2A7E28u;
            goto label_2a7e28;
        }
    }
    ctx->pc = 0x2A7B6Cu;
label_2a7b6c:
    // 0x2a7b6c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7b70:
    // 0x2a7b70: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a7b74:
    // 0x2a7b74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a7b78:
    if (ctx->pc == 0x2A7B78u) {
        ctx->pc = 0x2A7B7Cu;
        goto label_2a7b7c;
    }
    ctx->pc = 0x2A7B74u;
    {
        const bool branch_taken_0x2a7b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b74) {
            ctx->pc = 0x2A7B8Cu;
            goto label_2a7b8c;
        }
    }
    ctx->pc = 0x2A7B7Cu;
label_2a7b7c:
    // 0x2a7b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7b80:
    // 0x2a7b80: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2a7b80u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a7b84:
    // 0x2a7b84: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a7b88:
    if (ctx->pc == 0x2A7B88u) {
        ctx->pc = 0x2A7B8Cu;
        goto label_2a7b8c;
    }
    ctx->pc = 0x2A7B84u;
    {
        const bool branch_taken_0x2a7b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b84) {
            ctx->pc = 0x2A7B90u;
            goto label_2a7b90;
        }
    }
    ctx->pc = 0x2A7B8Cu;
label_2a7b8c:
    // 0x2a7b8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a7b8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b90:
    // 0x2a7b90: 0x32b300ff  andi        $s3, $s5, 0xFF
    ctx->pc = 0x2a7b90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2a7b94:
    // 0x2a7b94: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2a7b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_2a7b98:
    // 0x2a7b98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2a7b9c:
    if (ctx->pc == 0x2A7B9Cu) {
        ctx->pc = 0x2A7BA0u;
        goto label_2a7ba0;
    }
    ctx->pc = 0x2A7B98u;
    {
        const bool branch_taken_0x2a7b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7b98) {
            ctx->pc = 0x2A7BACu;
            goto label_2a7bac;
        }
    }
    ctx->pc = 0x2A7BA0u;
label_2a7ba0:
    // 0x2a7ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ba4:
    // 0x2a7ba4: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2a7ba8:
    if (ctx->pc == 0x2A7BA8u) {
        ctx->pc = 0x2A7BACu;
        goto label_2a7bac;
    }
    ctx->pc = 0x2A7BA4u;
    {
        const bool branch_taken_0x2a7ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7ba4) {
            ctx->pc = 0x2A7E28u;
            goto label_2a7e28;
        }
    }
    ctx->pc = 0x2A7BACu;
label_2a7bac:
    // 0x2a7bac: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7bb0:
    // 0x2a7bb0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7bb4:
    // 0x2a7bb4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a7bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2a7bb8:
    // 0x2a7bb8: 0x24a5dc20  addiu       $a1, $a1, -0x23E0
    ctx->pc = 0x2a7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958112));
label_2a7bbc:
    // 0x2a7bbc: 0x2786a44c  addiu       $a2, $gp, -0x5BB4
    ctx->pc = 0x2a7bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943820));
label_2a7bc0:
    // 0x2a7bc0: 0xc04206c  jal         func_1081B0
label_2a7bc4:
    if (ctx->pc == 0x2A7BC4u) {
        ctx->pc = 0x2A7BC8u;
        goto label_2a7bc8;
    }
    ctx->pc = 0x2A7BC0u;
    SET_GPR_U32(ctx, 31, 0x2A7BC8u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2A7BC0u, 0x2A7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BC8u;
label_2a7bc8:
    // 0x2a7bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a7bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7bcc:
    // 0x2a7bcc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7bd0:
    // 0x2a7bd0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a7bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2a7bd4:
    // 0x2a7bd4: 0x24a5dc30  addiu       $a1, $a1, -0x23D0
    ctx->pc = 0x2a7bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958128));
label_2a7bd8:
    // 0x2a7bd8: 0xc0bc5c6  jal         func_2F1718
label_2a7bdc:
    if (ctx->pc == 0x2A7BDCu) {
        ctx->pc = 0x2A7BE0u;
        goto label_2a7be0;
    }
    ctx->pc = 0x2A7BD8u;
    SET_GPR_U32(ctx, 31, 0x2A7BE0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A7BD8u, 0x2A7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BE0u;
label_2a7be0:
    // 0x2a7be0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7be4:
    // 0x2a7be4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a7be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a7be8:
    // 0x2a7be8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7bec:
    // 0x2a7bec: 0xc085538  jal         func_2154E0
label_2a7bf0:
    if (ctx->pc == 0x2A7BF0u) {
        ctx->pc = 0x2A7BF4u;
        goto label_2a7bf4;
    }
    ctx->pc = 0x2A7BECu;
    SET_GPR_U32(ctx, 31, 0x2A7BF4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A7BECu, 0x2A7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BF4u;
label_2a7bf4:
    // 0x2a7bf4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a7bf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7bf8:
    // 0x2a7bf8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a7bfc:
    // 0x2a7bfc: 0xc0a5368  jal         func_294DA0
label_2a7c00:
    if (ctx->pc == 0x2A7C00u) {
        ctx->pc = 0x2A7C04u;
        goto label_2a7c04;
    }
    ctx->pc = 0x2A7BFCu;
    SET_GPR_U32(ctx, 31, 0x2A7C04u);
    ctx->pc = 0x294DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294DA0u, 0x2A7BFCu, 0x2A7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C04u;
label_2a7c04:
    // 0x2a7c04: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2a7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7c08:
    // 0x2a7c08: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x2a7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
label_2a7c0c:
    // 0x2a7c0c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7c10:
    // 0x2a7c10: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2a7c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2a7c14:
    // 0x2a7c14: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a7c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2a7c18:
    // 0x2a7c18: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2a7c1c:
    if (ctx->pc == 0x2A7C1Cu) {
        ctx->pc = 0x2A7C20u;
        goto label_2a7c20;
    }
    ctx->pc = 0x2A7C18u;
    {
        const bool branch_taken_0x2a7c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c18) {
            ctx->pc = 0x2A7C4Cu;
            goto label_2a7c4c;
        }
    }
    ctx->pc = 0x2A7C20u;
label_2a7c20:
    // 0x2a7c20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7c24:
    // 0x2a7c24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c28:
    // 0x2a7c28: 0xc0bc4c4  jal         func_2F1310
label_2a7c2c:
    if (ctx->pc == 0x2A7C2Cu) {
        ctx->pc = 0x2A7C30u;
        goto label_2a7c30;
    }
    ctx->pc = 0x2A7C28u;
    SET_GPR_U32(ctx, 31, 0x2A7C30u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A7C28u, 0x2A7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C30u;
label_2a7c30:
    // 0x2a7c30: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7c34:
    // 0x2a7c34: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2a7c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2a7c38:
    // 0x2a7c38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a7c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c3c:
    // 0x2a7c3c: 0xc0bc5c6  jal         func_2F1718
label_2a7c40:
    if (ctx->pc == 0x2A7C40u) {
        ctx->pc = 0x2A7C44u;
        goto label_2a7c44;
    }
    ctx->pc = 0x2A7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C44u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A7C3Cu, 0x2A7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C44u;
label_2a7c44:
    // 0x2a7c44: 0x10000038  b           . + 4 + (0x38 << 2)
label_2a7c48:
    if (ctx->pc == 0x2A7C48u) {
        ctx->pc = 0x2A7C4Cu;
        goto label_2a7c4c;
    }
    ctx->pc = 0x2A7C44u;
    {
        const bool branch_taken_0x2a7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c44) {
            ctx->pc = 0x2A7D28u;
            goto label_2a7d28;
        }
    }
    ctx->pc = 0x2A7C4Cu;
label_2a7c4c:
    // 0x2a7c4c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7c50:
    // 0x2a7c50: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7c54:
    // 0x2a7c54: 0x240504ae  addiu       $a1, $zero, 0x4AE
    ctx->pc = 0x2a7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
label_2a7c58:
    // 0x2a7c58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a7c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7c5c:
    // 0x2a7c5c: 0xc040ab0  jal         func_102AC0
label_2a7c60:
    if (ctx->pc == 0x2A7C60u) {
        ctx->pc = 0x2A7C64u;
        goto label_2a7c64;
    }
    ctx->pc = 0x2A7C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C64u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A7C5Cu, 0x2A7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C64u;
label_2a7c64:
    // 0x2a7c64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a7c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c68:
    // 0x2a7c68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a7c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c6c:
    // 0x2a7c6c: 0xc0a5a80  jal         func_296A00
label_2a7c70:
    if (ctx->pc == 0x2A7C70u) {
        ctx->pc = 0x2A7C74u;
        goto label_2a7c74;
    }
    ctx->pc = 0x2A7C6Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C74u);
    ctx->pc = 0x296A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A00u, 0x2A7C6Cu, 0x2A7C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C74u;
label_2a7c74:
    // 0x2a7c74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a7c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c78:
    // 0x2a7c78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7c7c:
    // 0x2a7c7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a7c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c80:
    // 0x2a7c80: 0xc0bc4c4  jal         func_2F1310
label_2a7c84:
    if (ctx->pc == 0x2A7C84u) {
        ctx->pc = 0x2A7C88u;
        goto label_2a7c88;
    }
    ctx->pc = 0x2A7C80u;
    SET_GPR_U32(ctx, 31, 0x2A7C88u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A7C80u, 0x2A7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C88u;
label_2a7c88:
    // 0x2a7c88: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7c8c:
    // 0x2a7c8c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2a7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2a7c90:
    // 0x2a7c90: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2a7c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c94:
    // 0x2a7c94: 0xc0bc5c6  jal         func_2F1718
label_2a7c98:
    if (ctx->pc == 0x2A7C98u) {
        ctx->pc = 0x2A7C9Cu;
        goto label_2a7c9c;
    }
    ctx->pc = 0x2A7C94u;
    SET_GPR_U32(ctx, 31, 0x2A7C9Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A7C94u, 0x2A7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C9Cu;
label_2a7c9c:
    // 0x2a7c9c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_2a7ca0:
    if (ctx->pc == 0x2A7CA0u) {
        ctx->pc = 0x2A7CA4u;
        goto label_2a7ca4;
    }
    ctx->pc = 0x2A7C9Cu;
    {
        const bool branch_taken_0x2a7c9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c9c) {
            ctx->pc = 0x2A7CB8u;
            goto label_2a7cb8;
        }
    }
    ctx->pc = 0x2A7CA4u;
label_2a7ca4:
    // 0x2a7ca4: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x2a7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_2a7ca8:
    // 0x2a7ca8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2a7ca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_2a7cac:
    // 0x2a7cac: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2a7cacu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_2a7cb0:
    // 0x2a7cb0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a7cb4:
    if (ctx->pc == 0x2A7CB4u) {
        ctx->pc = 0x2A7CB8u;
        goto label_2a7cb8;
    }
    ctx->pc = 0x2A7CB0u;
    {
        const bool branch_taken_0x2a7cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7cb0) {
            ctx->pc = 0x2A7CF0u;
            goto label_2a7cf0;
        }
    }
    ctx->pc = 0x2A7CB8u;
label_2a7cb8:
    // 0x2a7cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7cbc:
    // 0x2a7cbc: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_2a7cc0:
    if (ctx->pc == 0x2A7CC0u) {
        ctx->pc = 0x2A7CC4u;
        goto label_2a7cc4;
    }
    ctx->pc = 0x2A7CBCu;
    {
        const bool branch_taken_0x2a7cbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a7cbc) {
            ctx->pc = 0x2A7CD8u;
            goto label_2a7cd8;
        }
    }
    ctx->pc = 0x2A7CC4u;
label_2a7cc4:
    // 0x2a7cc4: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2a7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2a7cc8:
    // 0x2a7cc8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2a7cc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_2a7ccc:
    // 0x2a7ccc: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2a7cccu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_2a7cd0:
    // 0x2a7cd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a7cd4:
    if (ctx->pc == 0x2A7CD4u) {
        ctx->pc = 0x2A7CD8u;
        goto label_2a7cd8;
    }
    ctx->pc = 0x2A7CD0u;
    {
        const bool branch_taken_0x2a7cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7cd0) {
            ctx->pc = 0x2A7CF0u;
            goto label_2a7cf0;
        }
    }
    ctx->pc = 0x2A7CD8u;
label_2a7cd8:
    // 0x2a7cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7cdc:
    // 0x2a7cdc: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_2a7ce0:
    if (ctx->pc == 0x2A7CE0u) {
        ctx->pc = 0x2A7CE4u;
        goto label_2a7ce4;
    }
    ctx->pc = 0x2A7CDCu;
    {
        const bool branch_taken_0x2a7cdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a7cdc) {
            ctx->pc = 0x2A7CF0u;
            goto label_2a7cf0;
        }
    }
    ctx->pc = 0x2A7CE4u;
label_2a7ce4:
    // 0x2a7ce4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2a7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2a7ce8:
    // 0x2a7ce8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2a7ce8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_2a7cec:
    // 0x2a7cec: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2a7cecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_2a7cf0:
    // 0x2a7cf0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7cf4:
    // 0x2a7cf4: 0xc0bc60c  jal         func_2F1830
label_2a7cf8:
    if (ctx->pc == 0x2A7CF8u) {
        ctx->pc = 0x2A7CFCu;
        goto label_2a7cfc;
    }
    ctx->pc = 0x2A7CF4u;
    SET_GPR_U32(ctx, 31, 0x2A7CFCu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A7CF4u, 0x2A7CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CFCu;
label_2a7cfc:
    // 0x2a7cfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a7d00:
    // 0x2a7d00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2a7d04:
    // 0x2a7d04: 0xa05000a0  sb          $s0, 0xA0($v0)
    ctx->pc = 0x2a7d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 16));
label_2a7d08:
    // 0x2a7d08: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7d0c:
    // 0x2a7d0c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2a7d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2a7d10:
    // 0x2a7d10: 0xc0bc60c  jal         func_2F1830
label_2a7d14:
    if (ctx->pc == 0x2A7D14u) {
        ctx->pc = 0x2A7D18u;
        goto label_2a7d18;
    }
    ctx->pc = 0x2A7D10u;
    SET_GPR_U32(ctx, 31, 0x2A7D18u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A7D10u, 0x2A7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D18u;
label_2a7d18:
    // 0x2a7d18: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a7d1c:
    // 0x2a7d1c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7d20:
    // 0x2a7d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a7d24:
    // 0x2a7d24: 0xa0500054  sb          $s0, 0x54($v0)
    ctx->pc = 0x2a7d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 16));
label_2a7d28:
    // 0x2a7d28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7d2c:
    // 0x2a7d2c: 0x2785a450  addiu       $a1, $gp, -0x5BB0
    ctx->pc = 0x2a7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943824));
label_2a7d30:
    // 0x2a7d30: 0xc0bc4c4  jal         func_2F1310
label_2a7d34:
    if (ctx->pc == 0x2A7D34u) {
        ctx->pc = 0x2A7D38u;
        goto label_2a7d38;
    }
    ctx->pc = 0x2A7D30u;
    SET_GPR_U32(ctx, 31, 0x2A7D38u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A7D30u, 0x2A7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D38u;
label_2a7d38:
    // 0x2a7d38: 0xc122430  jal         func_4890C0
label_2a7d3c:
    if (ctx->pc == 0x2A7D3Cu) {
        ctx->pc = 0x2A7D40u;
        goto label_2a7d40;
    }
    ctx->pc = 0x2A7D38u;
    SET_GPR_U32(ctx, 31, 0x2A7D40u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2A7D38u, 0x2A7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D40u;
label_2a7d40:
    // 0x2a7d40: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2a7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_2a7d44:
    // 0x2a7d44: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7d48:
    // 0x2a7d48: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2a7d4c:
    // 0x2a7d4c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2a7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2a7d50:
    // 0x2a7d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7d54:
    // 0x2a7d54: 0x24470054  addiu       $a3, $v0, 0x54
    ctx->pc = 0x2a7d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2a7d58:
    // 0x2a7d58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a7d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7d5c:
    // 0x2a7d5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7d60:
    // 0x2a7d60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7d60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7d64:
    // 0x2a7d64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a7d64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7d68:
    // 0x2a7d68: 0xc120c08  jal         func_483020
label_2a7d6c:
    if (ctx->pc == 0x2A7D6Cu) {
        ctx->pc = 0x2A7D70u;
        goto label_2a7d70;
    }
    ctx->pc = 0x2A7D68u;
    SET_GPR_U32(ctx, 31, 0x2A7D70u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2A7D68u, 0x2A7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D70u;
label_2a7d70:
    // 0x2a7d70: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7d74:
    // 0x2a7d74: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a7d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7d78:
    // 0x2a7d78: 0x240504ab  addiu       $a1, $zero, 0x4AB
    ctx->pc = 0x2a7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1195));
label_2a7d7c:
    // 0x2a7d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7d80:
    // 0x2a7d80: 0xc04146c  jal         func_1051B0
label_2a7d84:
    if (ctx->pc == 0x2A7D84u) {
        ctx->pc = 0x2A7D88u;
        goto label_2a7d88;
    }
    ctx->pc = 0x2A7D80u;
    SET_GPR_U32(ctx, 31, 0x2A7D88u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A7D80u, 0x2A7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D88u;
label_2a7d88:
    // 0x2a7d88: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2a7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7d8c:
    // 0x2a7d8c: 0xa0620078  sb          $v0, 0x78($v1)
    ctx->pc = 0x2a7d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 2));
label_2a7d90:
    // 0x2a7d90: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7d94:
    // 0x2a7d94: 0x90420078  lbu         $v0, 0x78($v0)
    ctx->pc = 0x2a7d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
label_2a7d98:
    // 0x2a7d98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a7d9c:
    if (ctx->pc == 0x2A7D9Cu) {
        ctx->pc = 0x2A7DA0u;
        goto label_2a7da0;
    }
    ctx->pc = 0x2A7D98u;
    {
        const bool branch_taken_0x2a7d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7d98) {
            ctx->pc = 0x2A7DC0u;
            goto label_2a7dc0;
        }
    }
    ctx->pc = 0x2A7DA0u;
label_2a7da0:
    // 0x2a7da0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7da4:
    // 0x2a7da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7da8:
    // 0x2a7da8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7dac:
    // 0x2a7dac: 0x240504ac  addiu       $a1, $zero, 0x4AC
    ctx->pc = 0x2a7dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
label_2a7db0:
    // 0x2a7db0: 0xc042090  jal         func_108240
label_2a7db4:
    if (ctx->pc == 0x2A7DB4u) {
        ctx->pc = 0x2A7DB8u;
        goto label_2a7db8;
    }
    ctx->pc = 0x2A7DB0u;
    SET_GPR_U32(ctx, 31, 0x2A7DB8u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2A7DB0u, 0x2A7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DB8u;
label_2a7db8:
    // 0x2a7db8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7dbc:
    // 0x2a7dbc: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2a7dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_2a7dc0:
    // 0x2a7dc0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7dc4:
    // 0x2a7dc4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7dc8:
    // 0x2a7dc8: 0x24050573  addiu       $a1, $zero, 0x573
    ctx->pc = 0x2a7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1395));
label_2a7dcc:
    // 0x2a7dcc: 0x2786a44c  addiu       $a2, $gp, -0x5BB4
    ctx->pc = 0x2a7dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943820));
label_2a7dd0:
    // 0x2a7dd0: 0xc041a50  jal         func_106940
label_2a7dd4:
    if (ctx->pc == 0x2A7DD4u) {
        ctx->pc = 0x2A7DD8u;
        goto label_2a7dd8;
    }
    ctx->pc = 0x2A7DD0u;
    SET_GPR_U32(ctx, 31, 0x2A7DD8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2A7DD0u, 0x2A7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7DD8u;
label_2a7dd8:
    // 0x2a7dd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a7dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ddc:
    // 0x2a7ddc: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x2a7ddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_2a7de0:
    // 0x2a7de0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2a7de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2a7de4:
    // 0x2a7de4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a7de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2a7de8:
    // 0x2a7de8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a7dec:
    if (ctx->pc == 0x2A7DECu) {
        ctx->pc = 0x2A7DF0u;
        goto label_2a7df0;
    }
    ctx->pc = 0x2A7DE8u;
    {
        const bool branch_taken_0x2a7de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7de8) {
            ctx->pc = 0x2A7E04u;
            goto label_2a7e04;
        }
    }
    ctx->pc = 0x2A7DF0u;
label_2a7df0:
    // 0x2a7df0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7df4:
    // 0x2a7df4: 0x24440085  addiu       $a0, $v0, 0x85
    ctx->pc = 0x2a7df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 133));
label_2a7df8:
    // 0x2a7df8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a7df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a7dfc:
    // 0x2a7dfc: 0xc0bc5c6  jal         func_2F1718
label_2a7e00:
    if (ctx->pc == 0x2A7E00u) {
        ctx->pc = 0x2A7E04u;
        goto label_2a7e04;
    }
    ctx->pc = 0x2A7DFCu;
    SET_GPR_U32(ctx, 31, 0x2A7E04u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A7DFCu, 0x2A7E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E04u;
label_2a7e04:
    // 0x2a7e04: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2a7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7e08:
    // 0x2a7e08: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2a7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2a7e0c:
    // 0x2a7e0c: 0x24050538  addiu       $a1, $zero, 0x538
    ctx->pc = 0x2a7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1336));
label_2a7e10:
    // 0x2a7e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7e14:
    // 0x2a7e14: 0xc040ab0  jal         func_102AC0
label_2a7e18:
    if (ctx->pc == 0x2A7E18u) {
        ctx->pc = 0x2A7E1Cu;
        goto label_2a7e1c;
    }
    ctx->pc = 0x2A7E14u;
    SET_GPR_U32(ctx, 31, 0x2A7E1Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A7E14u, 0x2A7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E1Cu;
label_2a7e1c:
    // 0x2a7e1c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2a7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2a7e20:
    // 0x2a7e20: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x2a7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
label_2a7e24:
    // 0x2a7e24: 0x93a201af  lbu         $v0, 0x1AF($sp)
    ctx->pc = 0x2a7e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 431)));
label_2a7e28:
    // 0x2a7e28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a7e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a7e2c:
    // 0x2a7e2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a7e2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a7e30:
    // 0x2a7e30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a7e30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a7e34:
    // 0x2a7e34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a7e34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a7e38:
    // 0x2a7e38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a7e38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7e3c:
    // 0x2a7e3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a7e3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a7e40:
    // 0x2a7e40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a7e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a7e44:
    // 0x2a7e44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a7e48:
    // 0x2a7e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a7e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7e4c:
    // 0x2a7e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7e50:
    // 0x2a7e50: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x2a7e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2a7e54:
    // 0x2a7e54: 0x3e00008  jr          $ra
label_2a7e58:
    if (ctx->pc == 0x2A7E58u) {
        ctx->pc = 0x2A7E5Cu;
        goto label_2a7e5c;
    }
    ctx->pc = 0x2A7E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7E5Cu;
label_2a7e5c:
    // 0x2a7e5c: 0x0  nop
    ctx->pc = 0x2a7e5cu;
    // NOP
label_2a7e60:
    // 0x2a7e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a7e64:
    // 0x2a7e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a7e68:
    // 0x2a7e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a7e6c:
    // 0x2a7e6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7e70:
    // 0x2a7e70: 0xc09d1d8  jal         func_274760
label_2a7e74:
    if (ctx->pc == 0x2A7E74u) {
        ctx->pc = 0x2A7E78u;
        goto label_2a7e78;
    }
    ctx->pc = 0x2A7E70u;
    SET_GPR_U32(ctx, 31, 0x2A7E78u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2A7E70u, 0x2A7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7E78u;
label_2a7e78:
    // 0x2a7e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7e7c:
    // 0x2a7e7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a7e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a7e80:
    // 0x2a7e80: 0x3e00008  jr          $ra
label_2a7e84:
    if (ctx->pc == 0x2A7E84u) {
        ctx->pc = 0x2A7E88u;
        goto label_2a7e88;
    }
    ctx->pc = 0x2A7E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7E88u;
label_2a7e88:
    // 0x2a7e88: 0x0  nop
    ctx->pc = 0x2a7e88u;
    // NOP
label_2a7e8c:
    // 0x2a7e8c: 0x0  nop
    ctx->pc = 0x2a7e8cu;
    // NOP
label_2a7e90:
    // 0x2a7e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a7e94:
    // 0x2a7e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a7e98:
    // 0x2a7e98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a7e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a7e9c:
    // 0x2a7e9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a7e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2a7ea0:
    // 0x2a7ea0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a7ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7ea4:
    // 0x2a7ea4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a7ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a7ea8:
    // 0x2a7ea8: 0xc09d1e4  jal         func_274790
label_2a7eac:
    if (ctx->pc == 0x2A7EACu) {
        ctx->pc = 0x2A7EB0u;
        goto label_2a7eb0;
    }
    ctx->pc = 0x2A7EA8u;
    SET_GPR_U32(ctx, 31, 0x2A7EB0u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2A7EA8u, 0x2A7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EB0u;
label_2a7eb0:
    // 0x2a7eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7eb4:
    // 0x2a7eb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a7eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a7eb8:
    // 0x2a7eb8: 0x3e00008  jr          $ra
label_2a7ebc:
    if (ctx->pc == 0x2A7EBCu) {
        ctx->pc = 0x2A7EC0u;
        goto label_2a7ec0;
    }
    ctx->pc = 0x2A7EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7EC0u;
label_2a7ec0:
    // 0x2a7ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a7ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a7ec4:
    // 0x2a7ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a7ec8:
    // 0x2a7ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a7ecc:
    // 0x2a7ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a7ed0:
    // 0x2a7ed0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2a7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2a7ed4:
    // 0x2a7ed4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7ed8:
    // 0x2a7ed8: 0xc09d248  jal         func_274920
label_2a7edc:
    if (ctx->pc == 0x2A7EDCu) {
        ctx->pc = 0x2A7EE0u;
        goto label_2a7ee0;
    }
    ctx->pc = 0x2A7ED8u;
    SET_GPR_U32(ctx, 31, 0x2A7EE0u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2A7ED8u, 0x2A7EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7EE0u;
label_2a7ee0:
    // 0x2a7ee0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7ee4:
    // 0x2a7ee4: 0x104300b5  beq         $v0, $v1, . + 4 + (0xB5 << 2)
label_2a7ee8:
    if (ctx->pc == 0x2A7EE8u) {
        ctx->pc = 0x2A7EECu;
        goto label_2a7eec;
    }
    ctx->pc = 0x2A7EE4u;
    {
        const bool branch_taken_0x2a7ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a7ee4) {
            ctx->pc = 0x2A81BCu;
            goto label_2a81bc;
        }
    }
    ctx->pc = 0x2A7EECu;
label_2a7eec:
    // 0x2a7eec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7ef0:
    // 0x2a7ef0: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
label_2a7ef4:
    if (ctx->pc == 0x2A7EF4u) {
        ctx->pc = 0x2A7EF8u;
        goto label_2a7ef8;
    }
    ctx->pc = 0x2A7EF0u;
    {
        const bool branch_taken_0x2a7ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a7ef0) {
            ctx->pc = 0x2A7F9Cu;
            goto label_2a7f9c;
        }
    }
    ctx->pc = 0x2A7EF8u;
label_2a7ef8:
    // 0x2a7ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7efc:
    // 0x2a7efc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2a7f00:
    if (ctx->pc == 0x2A7F00u) {
        ctx->pc = 0x2A7F04u;
        goto label_2a7f04;
    }
    ctx->pc = 0x2A7EFCu;
    {
        const bool branch_taken_0x2a7efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a7efc) {
            ctx->pc = 0x2A7F0Cu;
            goto label_2a7f0c;
        }
    }
    ctx->pc = 0x2A7F04u;
label_2a7f04:
    // 0x2a7f04: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2a7f08:
    if (ctx->pc == 0x2A7F08u) {
        ctx->pc = 0x2A7F0Cu;
        goto label_2a7f0c;
    }
    ctx->pc = 0x2A7F04u;
    {
        const bool branch_taken_0x2a7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f04) {
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A7F0Cu;
label_2a7f0c:
    // 0x2a7f0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f10:
    // 0x2a7f10: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a7f14:
    // 0x2a7f14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7f18:
    // 0x2a7f18: 0xc085538  jal         func_2154E0
label_2a7f1c:
    if (ctx->pc == 0x2A7F1Cu) {
        ctx->pc = 0x2A7F20u;
        goto label_2a7f20;
    }
    ctx->pc = 0x2A7F18u;
    SET_GPR_U32(ctx, 31, 0x2A7F20u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A7F18u, 0x2A7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F20u;
label_2a7f20:
    // 0x2a7f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f24:
    // 0x2a7f24: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2a7f28:
    // 0x2a7f28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a7f2c:
    if (ctx->pc == 0x2A7F2Cu) {
        ctx->pc = 0x2A7F30u;
        goto label_2a7f30;
    }
    ctx->pc = 0x2A7F28u;
    {
        const bool branch_taken_0x2a7f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f28) {
            ctx->pc = 0x2A7F48u;
            goto label_2a7f48;
        }
    }
    ctx->pc = 0x2A7F30u;
label_2a7f30:
    // 0x2a7f30: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f34:
    // 0x2a7f34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a7f38:
    // 0x2a7f38: 0xc09d250  jal         func_274940
label_2a7f3c:
    if (ctx->pc == 0x2A7F3Cu) {
        ctx->pc = 0x2A7F40u;
        goto label_2a7f40;
    }
    ctx->pc = 0x2A7F38u;
    SET_GPR_U32(ctx, 31, 0x2A7F40u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A7F38u, 0x2A7F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F40u;
label_2a7f40:
    // 0x2a7f40: 0x1000000e  b           . + 4 + (0xE << 2)
label_2a7f44:
    if (ctx->pc == 0x2A7F44u) {
        ctx->pc = 0x2A7F48u;
        goto label_2a7f48;
    }
    ctx->pc = 0x2A7F40u;
    {
        const bool branch_taken_0x2a7f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f40) {
            ctx->pc = 0x2A7F7Cu;
            goto label_2a7f7c;
        }
    }
    ctx->pc = 0x2A7F48u;
label_2a7f48:
    // 0x2a7f48: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f4c:
    // 0x2a7f4c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2a7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2a7f50:
    // 0x2a7f50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f54:
    // 0x2a7f54: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2a7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2a7f58:
    // 0x2a7f58: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2a7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_2a7f5c:
    // 0x2a7f5c: 0x24a582b0  addiu       $a1, $a1, -0x7D50
    ctx->pc = 0x2a7f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935216));
label_2a7f60:
    // 0x2a7f60: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2a7f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f64:
    // 0x2a7f64: 0xc121ce4  jal         func_487390
label_2a7f68:
    if (ctx->pc == 0x2A7F68u) {
        ctx->pc = 0x2A7F6Cu;
        goto label_2a7f6c;
    }
    ctx->pc = 0x2A7F64u;
    SET_GPR_U32(ctx, 31, 0x2A7F6Cu);
    ctx->pc = 0x487390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487390u, 0x2A7F64u, 0x2A7F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F6Cu;
label_2a7f6c:
    // 0x2a7f6c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f70:
    // 0x2a7f70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a7f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a7f74:
    // 0x2a7f74: 0xc09d250  jal         func_274940
label_2a7f78:
    if (ctx->pc == 0x2A7F78u) {
        ctx->pc = 0x2A7F7Cu;
        goto label_2a7f7c;
    }
    ctx->pc = 0x2A7F74u;
    SET_GPR_U32(ctx, 31, 0x2A7F7Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A7F74u, 0x2A7F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F7Cu;
label_2a7f7c:
    // 0x2a7f7c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a7f80:
    // 0x2a7f80: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a7f84:
    // 0x2a7f84: 0xc0858ac  jal         func_2162B0
label_2a7f88:
    if (ctx->pc == 0x2A7F88u) {
        ctx->pc = 0x2A7F8Cu;
        goto label_2a7f8c;
    }
    ctx->pc = 0x2A7F84u;
    SET_GPR_U32(ctx, 31, 0x2A7F8Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A7F84u, 0x2A7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F8Cu;
label_2a7f8c:
    // 0x2a7f8c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7f90:
    // 0x2a7f90: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2a7f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_2a7f94:
    // 0x2a7f94: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2a7f98:
    if (ctx->pc == 0x2A7F98u) {
        ctx->pc = 0x2A7F9Cu;
        goto label_2a7f9c;
    }
    ctx->pc = 0x2A7F94u;
    {
        const bool branch_taken_0x2a7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7f94) {
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A7F9Cu;
label_2a7f9c:
    // 0x2a7f9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7fa0:
    // 0x2a7fa0: 0x90420084  lbu         $v0, 0x84($v0)
    ctx->pc = 0x2a7fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
label_2a7fa4:
    // 0x2a7fa4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2a7fa8:
    if (ctx->pc == 0x2A7FA8u) {
        ctx->pc = 0x2A7FACu;
        goto label_2a7fac;
    }
    ctx->pc = 0x2A7FA4u;
    {
        const bool branch_taken_0x2a7fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fa4) {
            ctx->pc = 0x2A8024u;
            goto label_2a8024;
        }
    }
    ctx->pc = 0x2A7FACu;
label_2a7fac:
    // 0x2a7fac: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a7fb0:
    // 0x2a7fb0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a7fb4:
    // 0x2a7fb4: 0xc0858ac  jal         func_2162B0
label_2a7fb8:
    if (ctx->pc == 0x2A7FB8u) {
        ctx->pc = 0x2A7FBCu;
        goto label_2a7fbc;
    }
    ctx->pc = 0x2A7FB4u;
    SET_GPR_U32(ctx, 31, 0x2A7FBCu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A7FB4u, 0x2A7FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FBCu;
label_2a7fbc:
    // 0x2a7fbc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7fc0:
    // 0x2a7fc0: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2a7fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a7fc4:
    // 0x2a7fc4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2a7fc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a7fc8:
    // 0x2a7fc8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a7fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7fcc:
    // 0x2a7fcc: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x2a7fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7fd0:
    // 0x2a7fd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a7fd4:
    // 0x2a7fd4: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
label_2a7fd8:
    if (ctx->pc == 0x2A7FD8u) {
        ctx->pc = 0x2A7FDCu;
        goto label_2a7fdc;
    }
    ctx->pc = 0x2A7FD4u;
    {
        const bool branch_taken_0x2a7fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7fd4) {
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A7FDCu;
label_2a7fdc:
    // 0x2a7fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7fe0:
    // 0x2a7fe0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7fe4:
    // 0x2a7fe4: 0xa0430084  sb          $v1, 0x84($v0)
    ctx->pc = 0x2a7fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 3));
label_2a7fe8:
    // 0x2a7fe8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7fec:
    // 0x2a7fec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a7ff0:
    // 0x2a7ff0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7ff4:
    // 0x2a7ff4: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x2a7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2a7ff8:
    // 0x2a7ff8: 0x24450054  addiu       $a1, $v0, 0x54
    ctx->pc = 0x2a7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2a7ffc:
    // 0x2a7ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8000:
    // 0x2a8000: 0xc1217cc  jal         func_485F30
label_2a8004:
    if (ctx->pc == 0x2A8004u) {
        ctx->pc = 0x2A8008u;
        goto label_2a8008;
    }
    ctx->pc = 0x2A8000u;
    SET_GPR_U32(ctx, 31, 0x2A8008u);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x2A8000u, 0x2A8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8008u;
label_2a8008:
    // 0x2a8008: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a800c:
    // 0x2a800c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2a800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2a8010:
    // 0x2a8010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a8010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a8014:
    // 0x2a8014: 0xc121904  jal         func_486410
label_2a8018:
    if (ctx->pc == 0x2A8018u) {
        ctx->pc = 0x2A801Cu;
        goto label_2a801c;
    }
    ctx->pc = 0x2A8014u;
    SET_GPR_U32(ctx, 31, 0x2A801Cu);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A8014u, 0x2A801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A801Cu;
label_2a801c:
    // 0x2a801c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_2a8020:
    if (ctx->pc == 0x2A8020u) {
        ctx->pc = 0x2A8024u;
        goto label_2a8024;
    }
    ctx->pc = 0x2A801Cu;
    {
        const bool branch_taken_0x2a801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a801c) {
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A8024u;
label_2a8024:
    // 0x2a8024: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a8024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a8028:
    // 0x2a8028: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a8028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a802c:
    // 0x2a802c: 0xc0858ac  jal         func_2162B0
label_2a8030:
    if (ctx->pc == 0x2A8030u) {
        ctx->pc = 0x2A8034u;
        goto label_2a8034;
    }
    ctx->pc = 0x2A802Cu;
    SET_GPR_U32(ctx, 31, 0x2A8034u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A802Cu, 0x2A8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8034u;
label_2a8034:
    // 0x2a8034: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8038:
    // 0x2a8038: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2a8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a803c:
    // 0x2a803c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2a803cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a8040:
    // 0x2a8040: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8044:
    // 0x2a8044: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x2a8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a8048:
    // 0x2a8048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a804c:
    // 0x2a804c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2a8050:
    if (ctx->pc == 0x2A8050u) {
        ctx->pc = 0x2A8054u;
        goto label_2a8054;
    }
    ctx->pc = 0x2A804Cu;
    {
        const bool branch_taken_0x2a804c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a804c) {
            ctx->pc = 0x2A8064u;
            goto label_2a8064;
        }
    }
    ctx->pc = 0x2A8054u;
label_2a8054:
    // 0x2a8054: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2a8058:
    // 0x2a8058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a805c:
    // 0x2a805c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8060:
    // 0x2a8060: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2a8060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_2a8064:
    // 0x2a8064: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8068:
    // 0x2a8068: 0x80420085  lb          $v0, 0x85($v0)
    ctx->pc = 0x2a8068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 133)));
label_2a806c:
    // 0x2a806c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2a806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2a8070:
    // 0x2a8070: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a8070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2a8074:
    // 0x2a8074: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2a8078:
    if (ctx->pc == 0x2A8078u) {
        ctx->pc = 0x2A807Cu;
        goto label_2a807c;
    }
    ctx->pc = 0x2A8074u;
    {
        const bool branch_taken_0x2a8074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8074) {
            ctx->pc = 0x2A819Cu;
            goto label_2a819c;
        }
    }
    ctx->pc = 0x2A807Cu;
label_2a807c:
    // 0x2a807c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8080:
    // 0x2a8080: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2a8084:
    // 0x2a8084: 0x24021a0a  addiu       $v0, $zero, 0x1A0A
    ctx->pc = 0x2a8084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6666));
label_2a8088:
    // 0x2a8088: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
label_2a808c:
    if (ctx->pc == 0x2A808Cu) {
        ctx->pc = 0x2A8090u;
        goto label_2a8090;
    }
    ctx->pc = 0x2A8088u;
    {
        const bool branch_taken_0x2a8088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a8088) {
            ctx->pc = 0x2A819Cu;
            goto label_2a819c;
        }
    }
    ctx->pc = 0x2A8090u;
label_2a8090:
    // 0x2a8090: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a8090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a8094:
    // 0x2a8094: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a8094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a8098:
    // 0x2a8098: 0xc0858ac  jal         func_2162B0
label_2a809c:
    if (ctx->pc == 0x2A809Cu) {
        ctx->pc = 0x2A80A0u;
        goto label_2a80a0;
    }
    ctx->pc = 0x2A8098u;
    SET_GPR_U32(ctx, 31, 0x2A80A0u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A8098u, 0x2A80A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A80A0u;
label_2a80a0:
    // 0x2a80a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a80a4:
    // 0x2a80a4: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2a80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a80a8:
    // 0x2a80a8: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x2a80a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2a80ac:
    // 0x2a80ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a80b0:
    // 0x2a80b0: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x2a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2a80b4:
    // 0x2a80b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a80b8:
    if (ctx->pc == 0x2A80B8u) {
        ctx->pc = 0x2A80BCu;
        goto label_2a80bc;
    }
    ctx->pc = 0x2A80B4u;
    {
        const bool branch_taken_0x2a80b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a80b4) {
            ctx->pc = 0x2A80D0u;
            goto label_2a80d0;
        }
    }
    ctx->pc = 0x2A80BCu;
label_2a80bc:
    // 0x2a80bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a80bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a80c0:
    // 0x2a80c0: 0x0  nop
    ctx->pc = 0x2a80c0u;
    // NOP
label_2a80c4:
    // 0x2a80c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a80c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a80c8:
    // 0x2a80c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a80cc:
    if (ctx->pc == 0x2A80CCu) {
        ctx->pc = 0x2A80D0u;
        goto label_2a80d0;
    }
    ctx->pc = 0x2A80C8u;
    {
        const bool branch_taken_0x2a80c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a80c8) {
            ctx->pc = 0x2A80ECu;
            goto label_2a80ec;
        }
    }
    ctx->pc = 0x2A80D0u;
label_2a80d0:
    // 0x2a80d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a80d4:
    // 0x2a80d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a80d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a80d8:
    // 0x2a80d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a80d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a80dc:
    // 0x2a80dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a80dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a80e0:
    // 0x2a80e0: 0x0  nop
    ctx->pc = 0x2a80e0u;
    // NOP
label_2a80e4:
    // 0x2a80e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a80e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a80e8:
    // 0x2a80e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a80e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a80ec:
    // 0x2a80ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2a80f0:
    // 0x2a80f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a80f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a80f4:
    // 0x2a80f4: 0x0  nop
    ctx->pc = 0x2a80f4u;
    // NOP
label_2a80f8:
    // 0x2a80f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a80f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a80fc:
    // 0x2a80fc: 0x0  nop
    ctx->pc = 0x2a80fcu;
    // NOP
label_2a8100:
    // 0x2a8100: 0x0  nop
    ctx->pc = 0x2a8100u;
    // NOP
label_2a8104:
    // 0x2a8104: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2a8104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a8108:
    // 0x2a8108: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_2a810c:
    if (ctx->pc == 0x2A810Cu) {
        ctx->pc = 0x2A8110u;
        goto label_2a8110;
    }
    ctx->pc = 0x2A8108u;
    {
        const bool branch_taken_0x2a8108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8108) {
            ctx->pc = 0x2A819Cu;
            goto label_2a819c;
        }
    }
    ctx->pc = 0x2A8110u;
label_2a8110:
    // 0x2a8110: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8114:
    // 0x2a8114: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a8114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a8118:
    // 0x2a8118: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a8118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a811c:
    // 0x2a811c: 0xc085538  jal         func_2154E0
label_2a8120:
    if (ctx->pc == 0x2A8120u) {
        ctx->pc = 0x2A8124u;
        goto label_2a8124;
    }
    ctx->pc = 0x2A811Cu;
    SET_GPR_U32(ctx, 31, 0x2A8124u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A811Cu, 0x2A8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8124u;
label_2a8124:
    // 0x2a8124: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8128:
    // 0x2a8128: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a812c:
    // 0x2a812c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a8130:
    // 0x2a8130: 0xc090f80  jal         func_243E00
label_2a8134:
    if (ctx->pc == 0x2A8134u) {
        ctx->pc = 0x2A8138u;
        goto label_2a8138;
    }
    ctx->pc = 0x2A8130u;
    SET_GPR_U32(ctx, 31, 0x2A8138u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A8130u, 0x2A8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8138u;
label_2a8138:
    // 0x2a8138: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2a8138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a813c:
    // 0x2a813c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a8140:
    // 0x2a8140: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a8144:
    // 0x2a8144: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8148:
    // 0x2a8148: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a814c:
    // 0x2a814c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a814cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2a8150:
    // 0x2a8150: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a8150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2a8154:
    // 0x2a8154: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a8154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a8158:
    // 0x2a8158: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a8158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a815c:
    // 0x2a815c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2a8160:
    // 0x2a8160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8164:
    // 0x2a8164: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a8164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2a8168:
    // 0x2a8168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a8168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a816c:
    // 0x2a816c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_2a8170:
    // 0x2a8170: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a8170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a8174:
    // 0x2a8174: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2a8174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_2a8178:
    // 0x2a8178: 0x24650085  addiu       $a1, $v1, 0x85
    ctx->pc = 0x2a8178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 133));
label_2a817c:
    // 0x2a817c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a817cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a8180:
    // 0x2a8180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8184:
    // 0x2a8184: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8188:
    // 0x2a8188: 0xc08f6e4  jal         func_23DB90
label_2a818c:
    if (ctx->pc == 0x2A818Cu) {
        ctx->pc = 0x2A8190u;
        goto label_2a8190;
    }
    ctx->pc = 0x2A8188u;
    SET_GPR_U32(ctx, 31, 0x2A8190u);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x2A8188u, 0x2A8190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8190u;
label_2a8190:
    // 0x2a8190: 0x24031a0a  addiu       $v1, $zero, 0x1A0A
    ctx->pc = 0x2a8190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6666));
label_2a8194:
    // 0x2a8194: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a8194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8198:
    // 0x2a8198: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x2a8198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
label_2a819c:
    // 0x2a819c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a81a0:
    // 0x2a81a0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a81a4:
    // 0x2a81a4: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x2a81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2a81a8:
    // 0x2a81a8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2a81a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a81ac:
    // 0x2a81ac: 0xc121910  jal         func_486440
label_2a81b0:
    if (ctx->pc == 0x2A81B0u) {
        ctx->pc = 0x2A81B4u;
        goto label_2a81b4;
    }
    ctx->pc = 0x2A81ACu;
    SET_GPR_U32(ctx, 31, 0x2A81B4u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x2A81ACu, 0x2A81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81B4u;
label_2a81b4:
    // 0x2a81b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a81b8:
    if (ctx->pc == 0x2A81B8u) {
        ctx->pc = 0x2A81BCu;
        goto label_2a81bc;
    }
    ctx->pc = 0x2A81B4u;
    {
        const bool branch_taken_0x2a81b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a81b4) {
            ctx->pc = 0x2A81D0u;
            goto label_2a81d0;
        }
    }
    ctx->pc = 0x2A81BCu;
label_2a81bc:
    // 0x2a81bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a81c0:
    // 0x2a81c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a81c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a81c4:
    // 0x2a81c4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2a81c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2a81c8:
    // 0x2a81c8: 0x320f809  jalr        $t9
label_2a81cc:
    if (ctx->pc == 0x2A81CCu) {
        ctx->pc = 0x2A81D0u;
        goto label_2a81d0;
    }
    ctx->pc = 0x2A81C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A81D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A81C8u, 0x2A81D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A81D0u;
label_2a81d0:
    // 0x2a81d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a81d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a81d4:
    // 0x2a81d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a81d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a81d8:
    // 0x2a81d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a81d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a81dc:
    // 0x2a81dc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2a81dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a81e0:
    // 0x2a81e0: 0x3e00008  jr          $ra
label_2a81e4:
    if (ctx->pc == 0x2A81E4u) {
        ctx->pc = 0x2A81E8u;
        goto label_2a81e8;
    }
    ctx->pc = 0x2A81E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A81E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A81E8u;
label_2a81e8:
    // 0x2a81e8: 0x0  nop
    ctx->pc = 0x2a81e8u;
    // NOP
label_2a81ec:
    // 0x2a81ec: 0x0  nop
    ctx->pc = 0x2a81ecu;
    // NOP
label_2a81f0:
    // 0x2a81f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a81f4:
    // 0x2a81f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a81f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a81f8:
    // 0x2a81f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a81fc:
    // 0x2a81fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a8200:
    // 0x2a8200: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a8200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2a8204:
    // 0x2a8204: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a8204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8208:
    // 0x2a8208: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2a8208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2a820c:
    // 0x2a820c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a820cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8210:
    // 0x2a8210: 0xc085538  jal         func_2154E0
label_2a8214:
    if (ctx->pc == 0x2A8214u) {
        ctx->pc = 0x2A8218u;
        goto label_2a8218;
    }
    ctx->pc = 0x2A8210u;
    SET_GPR_U32(ctx, 31, 0x2A8218u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A8210u, 0x2A8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8218u;
label_2a8218:
    // 0x2a8218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a821c:
    // 0x2a821c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2a821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2a8220:
    // 0x2a8220: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a8220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8224:
    // 0x2a8224: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_2a8228:
    if (ctx->pc == 0x2A8228u) {
        ctx->pc = 0x2A822Cu;
        goto label_2a822c;
    }
    ctx->pc = 0x2A8224u;
    {
        const bool branch_taken_0x2a8224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a8224) {
            ctx->pc = 0x2A8258u;
            goto label_2a8258;
        }
    }
    ctx->pc = 0x2A822Cu;
label_2a822c:
    // 0x2a822c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8230:
    // 0x2a8230: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2a8230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2a8234:
    // 0x2a8234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8238:
    // 0x2a8238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a823c:
    // 0x2a823c: 0xc121ce4  jal         func_487390
label_2a8240:
    if (ctx->pc == 0x2A8240u) {
        ctx->pc = 0x2A8244u;
        goto label_2a8244;
    }
    ctx->pc = 0x2A823Cu;
    SET_GPR_U32(ctx, 31, 0x2A8244u);
    ctx->pc = 0x487390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487390u, 0x2A823Cu, 0x2A8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8244u;
label_2a8244:
    // 0x2a8244: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8248:
    // 0x2a8248: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2a8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2a824c:
    // 0x2a824c: 0xc121cf4  jal         func_4873D0
label_2a8250:
    if (ctx->pc == 0x2A8250u) {
        ctx->pc = 0x2A8254u;
        goto label_2a8254;
    }
    ctx->pc = 0x2A824Cu;
    SET_GPR_U32(ctx, 31, 0x2A8254u);
    ctx->pc = 0x4873D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4873D0u, 0x2A824Cu, 0x2A8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8254u;
label_2a8254:
    // 0x2a8254: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2a8254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2a8258:
    // 0x2a8258: 0xc122430  jal         func_4890C0
label_2a825c:
    if (ctx->pc == 0x2A825Cu) {
        ctx->pc = 0x2A8260u;
        goto label_2a8260;
    }
    ctx->pc = 0x2A8258u;
    SET_GPR_U32(ctx, 31, 0x2A8260u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2A8258u, 0x2A8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8260u;
label_2a8260:
    // 0x2a8260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a8264:
    // 0x2a8264: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a8264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8268:
    // 0x2a8268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a826c:
    // 0x2a826c: 0x24450054  addiu       $a1, $v0, 0x54
    ctx->pc = 0x2a826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2a8270:
    // 0x2a8270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8274:
    // 0x2a8274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8278:
    // 0x2a8278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a827c:
    // 0x2a827c: 0xc121290  jal         func_484A40
label_2a8280:
    if (ctx->pc == 0x2A8280u) {
        ctx->pc = 0x2A8284u;
        goto label_2a8284;
    }
    ctx->pc = 0x2A827Cu;
    SET_GPR_U32(ctx, 31, 0x2A8284u);
    ctx->pc = 0x484A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A40u, 0x2A827Cu, 0x2A8284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8284u;
label_2a8284:
    // 0x2a8284: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a8284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a8288:
    // 0x2a8288: 0xc09d220  jal         func_274880
label_2a828c:
    if (ctx->pc == 0x2A828Cu) {
        ctx->pc = 0x2A8290u;
        goto label_2a8290;
    }
    ctx->pc = 0x2A8288u;
    SET_GPR_U32(ctx, 31, 0x2A8290u);
    ctx->pc = 0x274880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274880u, 0x2A8288u, 0x2A8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8290u;
label_2a8290:
    // 0x2a8290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a8294:
    // 0x2a8294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a8294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8298:
    // 0x2a8298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a829c:
    // 0x2a829c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a829cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a82a0:
    // 0x2a82a0: 0x3e00008  jr          $ra
label_2a82a4:
    if (ctx->pc == 0x2A82A4u) {
        ctx->pc = 0x2A82A8u;
        goto label_2a82a8;
    }
    ctx->pc = 0x2A82A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82A8u;
label_2a82a8:
    // 0x2a82a8: 0x0  nop
    ctx->pc = 0x2a82a8u;
    // NOP
label_2a82ac:
    // 0x2a82ac: 0x0  nop
    ctx->pc = 0x2a82acu;
    // NOP
    ctx->pc = 0x2a82b0u;
}
