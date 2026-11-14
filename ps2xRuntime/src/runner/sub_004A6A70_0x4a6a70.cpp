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

// Function: sub_004A6A70
// Address: 0x4a6a70 - 0x4a6fd0
void sub_004A6A70_0x4a6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6A70_0x4a6a70");
#endif

    switch (ctx->pc) {
        case 0x4a6a70u: goto label_4a6a70;
        case 0x4a6a74u: goto label_4a6a74;
        case 0x4a6a78u: goto label_4a6a78;
        case 0x4a6a7cu: goto label_4a6a7c;
        case 0x4a6a80u: goto label_4a6a80;
        case 0x4a6a84u: goto label_4a6a84;
        case 0x4a6a88u: goto label_4a6a88;
        case 0x4a6a8cu: goto label_4a6a8c;
        case 0x4a6a90u: goto label_4a6a90;
        case 0x4a6a94u: goto label_4a6a94;
        case 0x4a6a98u: goto label_4a6a98;
        case 0x4a6a9cu: goto label_4a6a9c;
        case 0x4a6aa0u: goto label_4a6aa0;
        case 0x4a6aa4u: goto label_4a6aa4;
        case 0x4a6aa8u: goto label_4a6aa8;
        case 0x4a6aacu: goto label_4a6aac;
        case 0x4a6ab0u: goto label_4a6ab0;
        case 0x4a6ab4u: goto label_4a6ab4;
        case 0x4a6ab8u: goto label_4a6ab8;
        case 0x4a6abcu: goto label_4a6abc;
        case 0x4a6ac0u: goto label_4a6ac0;
        case 0x4a6ac4u: goto label_4a6ac4;
        case 0x4a6ac8u: goto label_4a6ac8;
        case 0x4a6accu: goto label_4a6acc;
        case 0x4a6ad0u: goto label_4a6ad0;
        case 0x4a6ad4u: goto label_4a6ad4;
        case 0x4a6ad8u: goto label_4a6ad8;
        case 0x4a6adcu: goto label_4a6adc;
        case 0x4a6ae0u: goto label_4a6ae0;
        case 0x4a6ae4u: goto label_4a6ae4;
        case 0x4a6ae8u: goto label_4a6ae8;
        case 0x4a6aecu: goto label_4a6aec;
        case 0x4a6af0u: goto label_4a6af0;
        case 0x4a6af4u: goto label_4a6af4;
        case 0x4a6af8u: goto label_4a6af8;
        case 0x4a6afcu: goto label_4a6afc;
        case 0x4a6b00u: goto label_4a6b00;
        case 0x4a6b04u: goto label_4a6b04;
        case 0x4a6b08u: goto label_4a6b08;
        case 0x4a6b0cu: goto label_4a6b0c;
        case 0x4a6b10u: goto label_4a6b10;
        case 0x4a6b14u: goto label_4a6b14;
        case 0x4a6b18u: goto label_4a6b18;
        case 0x4a6b1cu: goto label_4a6b1c;
        case 0x4a6b20u: goto label_4a6b20;
        case 0x4a6b24u: goto label_4a6b24;
        case 0x4a6b28u: goto label_4a6b28;
        case 0x4a6b2cu: goto label_4a6b2c;
        case 0x4a6b30u: goto label_4a6b30;
        case 0x4a6b34u: goto label_4a6b34;
        case 0x4a6b38u: goto label_4a6b38;
        case 0x4a6b3cu: goto label_4a6b3c;
        case 0x4a6b40u: goto label_4a6b40;
        case 0x4a6b44u: goto label_4a6b44;
        case 0x4a6b48u: goto label_4a6b48;
        case 0x4a6b4cu: goto label_4a6b4c;
        case 0x4a6b50u: goto label_4a6b50;
        case 0x4a6b54u: goto label_4a6b54;
        case 0x4a6b58u: goto label_4a6b58;
        case 0x4a6b5cu: goto label_4a6b5c;
        case 0x4a6b60u: goto label_4a6b60;
        case 0x4a6b64u: goto label_4a6b64;
        case 0x4a6b68u: goto label_4a6b68;
        case 0x4a6b6cu: goto label_4a6b6c;
        case 0x4a6b70u: goto label_4a6b70;
        case 0x4a6b74u: goto label_4a6b74;
        case 0x4a6b78u: goto label_4a6b78;
        case 0x4a6b7cu: goto label_4a6b7c;
        case 0x4a6b80u: goto label_4a6b80;
        case 0x4a6b84u: goto label_4a6b84;
        case 0x4a6b88u: goto label_4a6b88;
        case 0x4a6b8cu: goto label_4a6b8c;
        case 0x4a6b90u: goto label_4a6b90;
        case 0x4a6b94u: goto label_4a6b94;
        case 0x4a6b98u: goto label_4a6b98;
        case 0x4a6b9cu: goto label_4a6b9c;
        case 0x4a6ba0u: goto label_4a6ba0;
        case 0x4a6ba4u: goto label_4a6ba4;
        case 0x4a6ba8u: goto label_4a6ba8;
        case 0x4a6bacu: goto label_4a6bac;
        case 0x4a6bb0u: goto label_4a6bb0;
        case 0x4a6bb4u: goto label_4a6bb4;
        case 0x4a6bb8u: goto label_4a6bb8;
        case 0x4a6bbcu: goto label_4a6bbc;
        case 0x4a6bc0u: goto label_4a6bc0;
        case 0x4a6bc4u: goto label_4a6bc4;
        case 0x4a6bc8u: goto label_4a6bc8;
        case 0x4a6bccu: goto label_4a6bcc;
        case 0x4a6bd0u: goto label_4a6bd0;
        case 0x4a6bd4u: goto label_4a6bd4;
        case 0x4a6bd8u: goto label_4a6bd8;
        case 0x4a6bdcu: goto label_4a6bdc;
        case 0x4a6be0u: goto label_4a6be0;
        case 0x4a6be4u: goto label_4a6be4;
        case 0x4a6be8u: goto label_4a6be8;
        case 0x4a6becu: goto label_4a6bec;
        case 0x4a6bf0u: goto label_4a6bf0;
        case 0x4a6bf4u: goto label_4a6bf4;
        case 0x4a6bf8u: goto label_4a6bf8;
        case 0x4a6bfcu: goto label_4a6bfc;
        case 0x4a6c00u: goto label_4a6c00;
        case 0x4a6c04u: goto label_4a6c04;
        case 0x4a6c08u: goto label_4a6c08;
        case 0x4a6c0cu: goto label_4a6c0c;
        case 0x4a6c10u: goto label_4a6c10;
        case 0x4a6c14u: goto label_4a6c14;
        case 0x4a6c18u: goto label_4a6c18;
        case 0x4a6c1cu: goto label_4a6c1c;
        case 0x4a6c20u: goto label_4a6c20;
        case 0x4a6c24u: goto label_4a6c24;
        case 0x4a6c28u: goto label_4a6c28;
        case 0x4a6c2cu: goto label_4a6c2c;
        case 0x4a6c30u: goto label_4a6c30;
        case 0x4a6c34u: goto label_4a6c34;
        case 0x4a6c38u: goto label_4a6c38;
        case 0x4a6c3cu: goto label_4a6c3c;
        case 0x4a6c40u: goto label_4a6c40;
        case 0x4a6c44u: goto label_4a6c44;
        case 0x4a6c48u: goto label_4a6c48;
        case 0x4a6c4cu: goto label_4a6c4c;
        case 0x4a6c50u: goto label_4a6c50;
        case 0x4a6c54u: goto label_4a6c54;
        case 0x4a6c58u: goto label_4a6c58;
        case 0x4a6c5cu: goto label_4a6c5c;
        case 0x4a6c60u: goto label_4a6c60;
        case 0x4a6c64u: goto label_4a6c64;
        case 0x4a6c68u: goto label_4a6c68;
        case 0x4a6c6cu: goto label_4a6c6c;
        case 0x4a6c70u: goto label_4a6c70;
        case 0x4a6c74u: goto label_4a6c74;
        case 0x4a6c78u: goto label_4a6c78;
        case 0x4a6c7cu: goto label_4a6c7c;
        case 0x4a6c80u: goto label_4a6c80;
        case 0x4a6c84u: goto label_4a6c84;
        case 0x4a6c88u: goto label_4a6c88;
        case 0x4a6c8cu: goto label_4a6c8c;
        case 0x4a6c90u: goto label_4a6c90;
        case 0x4a6c94u: goto label_4a6c94;
        case 0x4a6c98u: goto label_4a6c98;
        case 0x4a6c9cu: goto label_4a6c9c;
        case 0x4a6ca0u: goto label_4a6ca0;
        case 0x4a6ca4u: goto label_4a6ca4;
        case 0x4a6ca8u: goto label_4a6ca8;
        case 0x4a6cacu: goto label_4a6cac;
        case 0x4a6cb0u: goto label_4a6cb0;
        case 0x4a6cb4u: goto label_4a6cb4;
        case 0x4a6cb8u: goto label_4a6cb8;
        case 0x4a6cbcu: goto label_4a6cbc;
        case 0x4a6cc0u: goto label_4a6cc0;
        case 0x4a6cc4u: goto label_4a6cc4;
        case 0x4a6cc8u: goto label_4a6cc8;
        case 0x4a6cccu: goto label_4a6ccc;
        case 0x4a6cd0u: goto label_4a6cd0;
        case 0x4a6cd4u: goto label_4a6cd4;
        case 0x4a6cd8u: goto label_4a6cd8;
        case 0x4a6cdcu: goto label_4a6cdc;
        case 0x4a6ce0u: goto label_4a6ce0;
        case 0x4a6ce4u: goto label_4a6ce4;
        case 0x4a6ce8u: goto label_4a6ce8;
        case 0x4a6cecu: goto label_4a6cec;
        case 0x4a6cf0u: goto label_4a6cf0;
        case 0x4a6cf4u: goto label_4a6cf4;
        case 0x4a6cf8u: goto label_4a6cf8;
        case 0x4a6cfcu: goto label_4a6cfc;
        case 0x4a6d00u: goto label_4a6d00;
        case 0x4a6d04u: goto label_4a6d04;
        case 0x4a6d08u: goto label_4a6d08;
        case 0x4a6d0cu: goto label_4a6d0c;
        case 0x4a6d10u: goto label_4a6d10;
        case 0x4a6d14u: goto label_4a6d14;
        case 0x4a6d18u: goto label_4a6d18;
        case 0x4a6d1cu: goto label_4a6d1c;
        case 0x4a6d20u: goto label_4a6d20;
        case 0x4a6d24u: goto label_4a6d24;
        case 0x4a6d28u: goto label_4a6d28;
        case 0x4a6d2cu: goto label_4a6d2c;
        case 0x4a6d30u: goto label_4a6d30;
        case 0x4a6d34u: goto label_4a6d34;
        case 0x4a6d38u: goto label_4a6d38;
        case 0x4a6d3cu: goto label_4a6d3c;
        case 0x4a6d40u: goto label_4a6d40;
        case 0x4a6d44u: goto label_4a6d44;
        case 0x4a6d48u: goto label_4a6d48;
        case 0x4a6d4cu: goto label_4a6d4c;
        case 0x4a6d50u: goto label_4a6d50;
        case 0x4a6d54u: goto label_4a6d54;
        case 0x4a6d58u: goto label_4a6d58;
        case 0x4a6d5cu: goto label_4a6d5c;
        case 0x4a6d60u: goto label_4a6d60;
        case 0x4a6d64u: goto label_4a6d64;
        case 0x4a6d68u: goto label_4a6d68;
        case 0x4a6d6cu: goto label_4a6d6c;
        case 0x4a6d70u: goto label_4a6d70;
        case 0x4a6d74u: goto label_4a6d74;
        case 0x4a6d78u: goto label_4a6d78;
        case 0x4a6d7cu: goto label_4a6d7c;
        case 0x4a6d80u: goto label_4a6d80;
        case 0x4a6d84u: goto label_4a6d84;
        case 0x4a6d88u: goto label_4a6d88;
        case 0x4a6d8cu: goto label_4a6d8c;
        case 0x4a6d90u: goto label_4a6d90;
        case 0x4a6d94u: goto label_4a6d94;
        case 0x4a6d98u: goto label_4a6d98;
        case 0x4a6d9cu: goto label_4a6d9c;
        case 0x4a6da0u: goto label_4a6da0;
        case 0x4a6da4u: goto label_4a6da4;
        case 0x4a6da8u: goto label_4a6da8;
        case 0x4a6dacu: goto label_4a6dac;
        case 0x4a6db0u: goto label_4a6db0;
        case 0x4a6db4u: goto label_4a6db4;
        case 0x4a6db8u: goto label_4a6db8;
        case 0x4a6dbcu: goto label_4a6dbc;
        case 0x4a6dc0u: goto label_4a6dc0;
        case 0x4a6dc4u: goto label_4a6dc4;
        case 0x4a6dc8u: goto label_4a6dc8;
        case 0x4a6dccu: goto label_4a6dcc;
        case 0x4a6dd0u: goto label_4a6dd0;
        case 0x4a6dd4u: goto label_4a6dd4;
        case 0x4a6dd8u: goto label_4a6dd8;
        case 0x4a6ddcu: goto label_4a6ddc;
        case 0x4a6de0u: goto label_4a6de0;
        case 0x4a6de4u: goto label_4a6de4;
        case 0x4a6de8u: goto label_4a6de8;
        case 0x4a6decu: goto label_4a6dec;
        case 0x4a6df0u: goto label_4a6df0;
        case 0x4a6df4u: goto label_4a6df4;
        case 0x4a6df8u: goto label_4a6df8;
        case 0x4a6dfcu: goto label_4a6dfc;
        case 0x4a6e00u: goto label_4a6e00;
        case 0x4a6e04u: goto label_4a6e04;
        case 0x4a6e08u: goto label_4a6e08;
        case 0x4a6e0cu: goto label_4a6e0c;
        case 0x4a6e10u: goto label_4a6e10;
        case 0x4a6e14u: goto label_4a6e14;
        case 0x4a6e18u: goto label_4a6e18;
        case 0x4a6e1cu: goto label_4a6e1c;
        case 0x4a6e20u: goto label_4a6e20;
        case 0x4a6e24u: goto label_4a6e24;
        case 0x4a6e28u: goto label_4a6e28;
        case 0x4a6e2cu: goto label_4a6e2c;
        case 0x4a6e30u: goto label_4a6e30;
        case 0x4a6e34u: goto label_4a6e34;
        case 0x4a6e38u: goto label_4a6e38;
        case 0x4a6e3cu: goto label_4a6e3c;
        case 0x4a6e40u: goto label_4a6e40;
        case 0x4a6e44u: goto label_4a6e44;
        case 0x4a6e48u: goto label_4a6e48;
        case 0x4a6e4cu: goto label_4a6e4c;
        case 0x4a6e50u: goto label_4a6e50;
        case 0x4a6e54u: goto label_4a6e54;
        case 0x4a6e58u: goto label_4a6e58;
        case 0x4a6e5cu: goto label_4a6e5c;
        case 0x4a6e60u: goto label_4a6e60;
        case 0x4a6e64u: goto label_4a6e64;
        case 0x4a6e68u: goto label_4a6e68;
        case 0x4a6e6cu: goto label_4a6e6c;
        case 0x4a6e70u: goto label_4a6e70;
        case 0x4a6e74u: goto label_4a6e74;
        case 0x4a6e78u: goto label_4a6e78;
        case 0x4a6e7cu: goto label_4a6e7c;
        case 0x4a6e80u: goto label_4a6e80;
        case 0x4a6e84u: goto label_4a6e84;
        case 0x4a6e88u: goto label_4a6e88;
        case 0x4a6e8cu: goto label_4a6e8c;
        case 0x4a6e90u: goto label_4a6e90;
        case 0x4a6e94u: goto label_4a6e94;
        case 0x4a6e98u: goto label_4a6e98;
        case 0x4a6e9cu: goto label_4a6e9c;
        case 0x4a6ea0u: goto label_4a6ea0;
        case 0x4a6ea4u: goto label_4a6ea4;
        case 0x4a6ea8u: goto label_4a6ea8;
        case 0x4a6eacu: goto label_4a6eac;
        case 0x4a6eb0u: goto label_4a6eb0;
        case 0x4a6eb4u: goto label_4a6eb4;
        case 0x4a6eb8u: goto label_4a6eb8;
        case 0x4a6ebcu: goto label_4a6ebc;
        case 0x4a6ec0u: goto label_4a6ec0;
        case 0x4a6ec4u: goto label_4a6ec4;
        case 0x4a6ec8u: goto label_4a6ec8;
        case 0x4a6eccu: goto label_4a6ecc;
        case 0x4a6ed0u: goto label_4a6ed0;
        case 0x4a6ed4u: goto label_4a6ed4;
        case 0x4a6ed8u: goto label_4a6ed8;
        case 0x4a6edcu: goto label_4a6edc;
        case 0x4a6ee0u: goto label_4a6ee0;
        case 0x4a6ee4u: goto label_4a6ee4;
        case 0x4a6ee8u: goto label_4a6ee8;
        case 0x4a6eecu: goto label_4a6eec;
        case 0x4a6ef0u: goto label_4a6ef0;
        case 0x4a6ef4u: goto label_4a6ef4;
        case 0x4a6ef8u: goto label_4a6ef8;
        case 0x4a6efcu: goto label_4a6efc;
        case 0x4a6f00u: goto label_4a6f00;
        case 0x4a6f04u: goto label_4a6f04;
        case 0x4a6f08u: goto label_4a6f08;
        case 0x4a6f0cu: goto label_4a6f0c;
        case 0x4a6f10u: goto label_4a6f10;
        case 0x4a6f14u: goto label_4a6f14;
        case 0x4a6f18u: goto label_4a6f18;
        case 0x4a6f1cu: goto label_4a6f1c;
        case 0x4a6f20u: goto label_4a6f20;
        case 0x4a6f24u: goto label_4a6f24;
        case 0x4a6f28u: goto label_4a6f28;
        case 0x4a6f2cu: goto label_4a6f2c;
        case 0x4a6f30u: goto label_4a6f30;
        case 0x4a6f34u: goto label_4a6f34;
        case 0x4a6f38u: goto label_4a6f38;
        case 0x4a6f3cu: goto label_4a6f3c;
        case 0x4a6f40u: goto label_4a6f40;
        case 0x4a6f44u: goto label_4a6f44;
        case 0x4a6f48u: goto label_4a6f48;
        case 0x4a6f4cu: goto label_4a6f4c;
        case 0x4a6f50u: goto label_4a6f50;
        case 0x4a6f54u: goto label_4a6f54;
        case 0x4a6f58u: goto label_4a6f58;
        case 0x4a6f5cu: goto label_4a6f5c;
        case 0x4a6f60u: goto label_4a6f60;
        case 0x4a6f64u: goto label_4a6f64;
        case 0x4a6f68u: goto label_4a6f68;
        case 0x4a6f6cu: goto label_4a6f6c;
        case 0x4a6f70u: goto label_4a6f70;
        case 0x4a6f74u: goto label_4a6f74;
        case 0x4a6f78u: goto label_4a6f78;
        case 0x4a6f7cu: goto label_4a6f7c;
        case 0x4a6f80u: goto label_4a6f80;
        case 0x4a6f84u: goto label_4a6f84;
        case 0x4a6f88u: goto label_4a6f88;
        case 0x4a6f8cu: goto label_4a6f8c;
        case 0x4a6f90u: goto label_4a6f90;
        case 0x4a6f94u: goto label_4a6f94;
        case 0x4a6f98u: goto label_4a6f98;
        case 0x4a6f9cu: goto label_4a6f9c;
        case 0x4a6fa0u: goto label_4a6fa0;
        case 0x4a6fa4u: goto label_4a6fa4;
        case 0x4a6fa8u: goto label_4a6fa8;
        case 0x4a6facu: goto label_4a6fac;
        case 0x4a6fb0u: goto label_4a6fb0;
        case 0x4a6fb4u: goto label_4a6fb4;
        case 0x4a6fb8u: goto label_4a6fb8;
        case 0x4a6fbcu: goto label_4a6fbc;
        case 0x4a6fc0u: goto label_4a6fc0;
        case 0x4a6fc4u: goto label_4a6fc4;
        case 0x4a6fc8u: goto label_4a6fc8;
        case 0x4a6fccu: goto label_4a6fcc;
        default: break;
    }

    ctx->pc = 0x4a6a70u;

label_4a6a70:
    // 0x4a6a70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a6a74:
    // 0x4a6a74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a6a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a6a78:
    // 0x4a6a78: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a6a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a6a7c:
    // 0x4a6a7c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4a6a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a80:
    // 0x4a6a80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a6a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a6a84:
    // 0x4a6a84: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a6a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a88:
    // 0x4a6a88: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a6a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a6a8c:
    // 0x4a6a8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a6a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a90:
    // 0x4a6a90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a6a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a6a94:
    // 0x4a6a94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a6a94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6a98:
    // 0x4a6a98: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a6a9c:
    // 0x4a6a9c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4a6a9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a6aa0:
    // 0x4a6aa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a6aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a6aa4:
    // 0x4a6aa4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_4a6aa8:
    if (ctx->pc == 0x4A6AA8u) {
        ctx->pc = 0x4A6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AA4u;
        // 0x4a6aa8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AACu;
        goto label_4a6aac;
    }
    ctx->pc = 0x4A6AA4u;
    {
        const bool branch_taken_0x4a6aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AA4u;
        // 0x4a6aa8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6aa4) {
            ctx->pc = 0x4A6ADCu;
            goto label_4a6adc;
        }
    }
    ctx->pc = 0x4A6AACu;
label_4a6aac:
    // 0x4a6aac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a6ab0:
    // 0x4a6ab0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4a6ab4:
    if (ctx->pc == 0x4A6AB4u) {
        ctx->pc = 0x4A6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AB0u;
        // 0x4a6ab4: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AB8u;
        goto label_4a6ab8;
    }
    ctx->pc = 0x4A6AB0u;
    {
        const bool branch_taken_0x4a6ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6ab0) {
            ctx->pc = 0x4A6AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6AB0u;
            // 0x4a6ab4: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6AE0u;
            goto label_4a6ae0;
        }
    }
    ctx->pc = 0x4A6AB8u;
label_4a6ab8:
    // 0x4a6ab8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x4a6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_4a6abc:
    // 0x4a6abc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_4a6ac0:
    if (ctx->pc == 0x4A6AC0u) {
        ctx->pc = 0x4A6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6ABCu;
        // 0x4a6ac0: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AC4u;
        goto label_4a6ac4;
    }
    ctx->pc = 0x4A6ABCu;
    {
        const bool branch_taken_0x4a6abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6abc) {
            ctx->pc = 0x4A6AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6ABCu;
            // 0x4a6ac0: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6AE0u;
            goto label_4a6ae0;
        }
    }
    ctx->pc = 0x4A6AC4u;
label_4a6ac4:
    // 0x4a6ac4: 0xc129984  jal         func_4A6610
label_4a6ac8:
    if (ctx->pc == 0x4A6AC8u) {
        ctx->pc = 0x4A6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AC4u;
        // 0x4a6ac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6ACCu;
        goto label_4a6acc;
    }
    ctx->pc = 0x4A6AC4u;
    SET_GPR_U32(ctx, 31, 0x4A6ACCu);
    ctx->pc = 0x4A6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6AC4u;
    // 0x4a6ac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6610u, 0x4A6AC4u, 0x4A6ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6ACCu;
label_4a6acc:
    // 0x4a6acc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_4a6ad0:
    if (ctx->pc == 0x4A6AD0u) {
        ctx->pc = 0x4A6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6ACCu;
        // 0x4a6ad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AD4u;
        goto label_4a6ad4;
    }
    ctx->pc = 0x4A6ACCu;
    {
        const bool branch_taken_0x4a6acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6ACCu;
        // 0x4a6ad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6acc) {
            ctx->pc = 0x4A6B30u;
            goto label_4a6b30;
        }
    }
    ctx->pc = 0x4A6AD4u;
label_4a6ad4:
    // 0x4a6ad4: 0x100000bd  b           . + 4 + (0xBD << 2)
label_4a6ad8:
    if (ctx->pc == 0x4A6AD8u) {
        ctx->pc = 0x4A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AD4u;
        // 0x4a6ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6ADCu;
        goto label_4a6adc;
    }
    ctx->pc = 0x4A6AD4u;
    {
        const bool branch_taken_0x4a6ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AD4u;
        // 0x4a6ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ad4) {
            ctx->pc = 0x4A6DCCu;
            goto label_4a6dcc;
        }
    }
    ctx->pc = 0x4A6ADCu;
label_4a6adc:
    // 0x4a6adc: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x4a6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_4a6ae0:
    // 0x4a6ae0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4a6ae4:
    if (ctx->pc == 0x4A6AE4u) {
        ctx->pc = 0x4A6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AE0u;
        // 0x4a6ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6AE8u;
        goto label_4a6ae8;
    }
    ctx->pc = 0x4A6AE0u;
    {
        const bool branch_taken_0x4a6ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AE0u;
        // 0x4a6ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ae0) {
            ctx->pc = 0x4A6AF8u;
            goto label_4a6af8;
        }
    }
    ctx->pc = 0x4A6AE8u;
label_4a6ae8:
    // 0x4a6ae8: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x4a6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_4a6aec:
    // 0x4a6aec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a6af0:
    // 0x4a6af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a6af4:
    // 0x4a6af4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a6af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a6af8:
    // 0x4a6af8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_4a6afc:
    if (ctx->pc == 0x4A6AFCu) {
        ctx->pc = 0x4A6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AF8u;
        // 0x4a6afc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B00u;
        goto label_4a6b00;
    }
    ctx->pc = 0x4A6AF8u;
    {
        const bool branch_taken_0x4a6af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6AF8u;
        // 0x4a6afc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6af8) {
            ctx->pc = 0x4A6B08u;
            goto label_4a6b08;
        }
    }
    ctx->pc = 0x4A6B00u;
label_4a6b00:
    // 0x4a6b00: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a6b04:
    if (ctx->pc == 0x4A6B04u) {
        ctx->pc = 0x4A6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B00u;
        // 0x4a6b04: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B08u;
        goto label_4a6b08;
    }
    ctx->pc = 0x4A6B00u;
    {
        const bool branch_taken_0x4a6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B00u;
        // 0x4a6b04: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b00) {
            ctx->pc = 0x4A6B2Cu;
            goto label_4a6b2c;
        }
    }
    ctx->pc = 0x4A6B08u;
label_4a6b08:
    // 0x4a6b08: 0xc1297da  jal         func_4A5F68
label_4a6b0c:
    if (ctx->pc == 0x4A6B0Cu) {
        ctx->pc = 0x4A6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B08u;
        // 0x4a6b0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B10u;
        goto label_4a6b10;
    }
    ctx->pc = 0x4A6B08u;
    SET_GPR_U32(ctx, 31, 0x4A6B10u);
    ctx->pc = 0x4A6B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B08u;
    // 0x4a6b0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A6B08u, 0x4A6B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B10u;
label_4a6b10:
    // 0x4a6b10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a6b14:
    // 0x4a6b14: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x4a6b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b18:
    // 0x4a6b18: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4a6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a6b1c:
    // 0x4a6b1c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4a6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a6b20:
    // 0x4a6b20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a6b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a6b24:
    // 0x4a6b24: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4a6b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_4a6b28:
    // 0x4a6b28: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x4a6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_4a6b2c:
    // 0x4a6b2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b30:
    // 0x4a6b30: 0xc12976a  jal         func_4A5DA8
label_4a6b34:
    if (ctx->pc == 0x4A6B34u) {
        ctx->pc = 0x4A6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B30u;
        // 0x4a6b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B38u;
        goto label_4a6b38;
    }
    ctx->pc = 0x4A6B30u;
    SET_GPR_U32(ctx, 31, 0x4A6B38u);
    ctx->pc = 0x4A6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B30u;
    // 0x4a6b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A6B30u, 0x4A6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B38u;
label_4a6b38:
    // 0x4a6b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4a6b3c:
    if (ctx->pc == 0x4A6B3Cu) {
        ctx->pc = 0x4A6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B38u;
        // 0x4a6b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B40u;
        goto label_4a6b40;
    }
    ctx->pc = 0x4A6B38u;
    {
        const bool branch_taken_0x4a6b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B38u;
        // 0x4a6b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b38) {
            ctx->pc = 0x4A6B50u;
            goto label_4a6b50;
        }
    }
    ctx->pc = 0x4A6B40u;
label_4a6b40:
    // 0x4a6b40: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4a6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a6b44:
    // 0x4a6b44: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4a6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_4a6b48:
    // 0x4a6b48: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4a6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a6b4c:
    // 0x4a6b4c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x4a6b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_4a6b50:
    // 0x4a6b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a6b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6b54:
    // 0x4a6b54: 0xc12931a  jal         func_4A4C68
label_4a6b58:
    if (ctx->pc == 0x4A6B58u) {
        ctx->pc = 0x4A6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B54u;
        // 0x4a6b58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B5Cu;
        goto label_4a6b5c;
    }
    ctx->pc = 0x4A6B54u;
    SET_GPR_U32(ctx, 31, 0x4A6B5Cu);
    ctx->pc = 0x4A6B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6B54u;
    // 0x4a6b58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A6B54u, 0x4A6B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6B5Cu;
label_4a6b5c:
    // 0x4a6b5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4a6b60:
    if (ctx->pc == 0x4A6B60u) {
        ctx->pc = 0x4A6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B5Cu;
        // 0x4a6b60: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B64u;
        goto label_4a6b64;
    }
    ctx->pc = 0x4A6B5Cu;
    {
        const bool branch_taken_0x4a6b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B5Cu;
        // 0x4a6b60: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b5c) {
            ctx->pc = 0x4A6B70u;
            goto label_4a6b70;
        }
    }
    ctx->pc = 0x4A6B64u;
label_4a6b64:
    // 0x4a6b64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a6b68:
    // 0x4a6b68: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4a6b6c:
    if (ctx->pc == 0x4A6B6Cu) {
        ctx->pc = 0x4A6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B68u;
        // 0x4a6b6c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B70u;
        goto label_4a6b70;
    }
    ctx->pc = 0x4A6B68u;
    {
        const bool branch_taken_0x4a6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B68u;
        // 0x4a6b6c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b68) {
            ctx->pc = 0x4A6BE4u;
            goto label_4a6be4;
        }
    }
    ctx->pc = 0x4A6B70u;
label_4a6b70:
    // 0x4a6b70: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x4a6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_4a6b74:
    // 0x4a6b74: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_4a6b78:
    if (ctx->pc == 0x4A6B78u) {
        ctx->pc = 0x4A6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B74u;
        // 0x4a6b78: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B7Cu;
        goto label_4a6b7c;
    }
    ctx->pc = 0x4A6B74u;
    {
        const bool branch_taken_0x4a6b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6b74) {
            ctx->pc = 0x4A6B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6B74u;
            // 0x4a6b78: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6B8Cu;
            goto label_4a6b8c;
        }
    }
    ctx->pc = 0x4A6B7Cu;
label_4a6b7c:
    // 0x4a6b7c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a6b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a6b80:
    // 0x4a6b80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a6b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a6b84:
    // 0x4a6b84: 0x1000000f  b           . + 4 + (0xF << 2)
label_4a6b88:
    if (ctx->pc == 0x4A6B88u) {
        ctx->pc = 0x4A6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B84u;
        // 0x4a6b88: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B8Cu;
        goto label_4a6b8c;
    }
    ctx->pc = 0x4A6B84u;
    {
        const bool branch_taken_0x4a6b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B84u;
        // 0x4a6b88: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6b84) {
            ctx->pc = 0x4A6BC4u;
            goto label_4a6bc4;
        }
    }
    ctx->pc = 0x4A6B8Cu;
label_4a6b8c:
    // 0x4a6b8c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4a6b90:
    if (ctx->pc == 0x4A6B90u) {
        ctx->pc = 0x4A6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6B8Cu;
        // 0x4a6b90: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6B94u;
        goto label_4a6b94;
    }
    ctx->pc = 0x4A6B8Cu;
    {
        const bool branch_taken_0x4a6b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6b8c) {
            ctx->pc = 0x4A6B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6B8Cu;
            // 0x4a6b90: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6BC0u;
            goto label_4a6bc0;
        }
    }
    ctx->pc = 0x4A6B94u;
label_4a6b94:
    // 0x4a6b94: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x4a6b94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
label_4a6b98:
    // 0x4a6b98: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x4a6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
label_4a6b9c:
    // 0x4a6b9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a6b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a6ba0:
    // 0x4a6ba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a6ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6ba4:
    // 0x4a6ba4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a6ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6ba8:
    // 0x4a6ba8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a6ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6bac:
    // 0x4a6bac: 0xc12aa26  jal         func_4AA898
label_4a6bb0:
    if (ctx->pc == 0x4A6BB0u) {
        ctx->pc = 0x4A6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BACu;
        // 0x4a6bb0: 0x35290806  ori         $t1, $t1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BB4u;
        goto label_4a6bb4;
    }
    ctx->pc = 0x4A6BACu;
    SET_GPR_U32(ctx, 31, 0x4A6BB4u);
    ctx->pc = 0x4A6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6BACu;
    // 0x4a6bb0: 0x35290806  ori         $t1, $t1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4A6BACu, 0x4A6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6BB4u;
label_4a6bb4:
    // 0x4a6bb4: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
label_4a6bb8:
    if (ctx->pc == 0x4A6BB8u) {
        ctx->pc = 0x4A6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BB4u;
        // 0x4a6bb8: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BBCu;
        goto label_4a6bbc;
    }
    ctx->pc = 0x4A6BB4u;
    {
        const bool branch_taken_0x4a6bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BB4u;
        // 0x4a6bb8: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bb4) {
            ctx->pc = 0x4A6AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6ad4;
        }
    }
    ctx->pc = 0x4A6BBCu;
label_4a6bbc:
    // 0x4a6bbc: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x4a6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4a6bc0:
    // 0x4a6bc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a6bc4:
    // 0x4a6bc4: 0xc12a936  jal         func_4AA4D8
label_4a6bc8:
    if (ctx->pc == 0x4A6BC8u) {
        ctx->pc = 0x4A6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BC4u;
        // 0x4a6bc8: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BCCu;
        goto label_4a6bcc;
    }
    ctx->pc = 0x4A6BC4u;
    SET_GPR_U32(ctx, 31, 0x4A6BCCu);
    ctx->pc = 0x4A6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6BC4u;
    // 0x4a6bc8: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4A6BC4u, 0x4A6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6BCCu;
label_4a6bcc:
    // 0x4a6bcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a6bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6bd0:
    // 0x4a6bd0: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_4a6bd4:
    if (ctx->pc == 0x4A6BD4u) {
        ctx->pc = 0x4A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BD0u;
        // 0x4a6bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BD8u;
        goto label_4a6bd8;
    }
    ctx->pc = 0x4A6BD0u;
    {
        const bool branch_taken_0x4a6bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BD0u;
        // 0x4a6bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6bd0) {
            ctx->pc = 0x4A6DCCu;
            goto label_4a6dcc;
        }
    }
    ctx->pc = 0x4A6BD8u;
label_4a6bd8:
    // 0x4a6bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6bdc:
    // 0x4a6bdc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x4a6bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a6be0:
    // 0x4a6be0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x4a6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_4a6be4:
    // 0x4a6be4: 0xc12a4ce  jal         func_4A9338
label_4a6be8:
    if (ctx->pc == 0x4A6BE8u) {
        ctx->pc = 0x4A6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6BE4u;
        // 0x4a6be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6BECu;
        goto label_4a6bec;
    }
    ctx->pc = 0x4A6BE4u;
    SET_GPR_U32(ctx, 31, 0x4A6BECu);
    ctx->pc = 0x4A6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6BE4u;
    // 0x4a6be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9338u, 0x4A6BE4u, 0x4A6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6BECu;
label_4a6bec:
    // 0x4a6bec: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x4a6becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_4a6bf0:
    // 0x4a6bf0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x4a6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_4a6bf4:
    // 0x4a6bf4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x4a6bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_4a6bf8:
    // 0x4a6bf8: 0xae150058  sw          $s5, 0x58($s0)
    ctx->pc = 0x4a6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 21));
label_4a6bfc:
    // 0x4a6bfc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4a6bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4a6c00:
    // 0x4a6c00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4a6c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4a6c04:
    // 0x4a6c04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4a6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_4a6c08:
    // 0x4a6c08: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x4a6c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
label_4a6c0c:
    // 0x4a6c0c: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x4a6c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
label_4a6c10:
    // 0x4a6c10: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x4a6c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
label_4a6c14:
    // 0x4a6c14: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x4a6c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
label_4a6c18:
    // 0x4a6c18: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4a6c1c:
    // 0x4a6c1c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4a6c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_4a6c20:
    // 0x4a6c20: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x4a6c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a6c24:
    // 0x4a6c24: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x4a6c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a6c28:
    // 0x4a6c28: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x4a6c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a6c2c:
    // 0x4a6c2c: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x4a6c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a6c30:
    // 0x4a6c30: 0x6a440017  ldl         $a0, 0x17($s2)
    ctx->pc = 0x4a6c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a6c34:
    // 0x4a6c34: 0x6e440010  ldr         $a0, 0x10($s2)
    ctx->pc = 0x4a6c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a6c38:
    // 0x4a6c38: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x4a6c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4a6c3c:
    // 0x4a6c3c: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x4a6c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6c40:
    // 0x4a6c40: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x4a6c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6c44:
    // 0x4a6c44: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x4a6c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6c48:
    // 0x4a6c48: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x4a6c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6c4c:
    // 0x4a6c4c: 0xb2040027  sdl         $a0, 0x27($s0)
    ctx->pc = 0x4a6c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6c50:
    // 0x4a6c50: 0xb6040020  sdr         $a0, 0x20($s0)
    ctx->pc = 0x4a6c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6c54:
    // 0x4a6c54: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x4a6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
label_4a6c58:
    // 0x4a6c58: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4a6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a6c5c:
    // 0x4a6c5c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4a6c60:
    if (ctx->pc == 0x4A6C60u) {
        ctx->pc = 0x4A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C5Cu;
        // 0x4a6c60: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C64u;
        goto label_4a6c64;
    }
    ctx->pc = 0x4A6C5Cu;
    {
        const bool branch_taken_0x4a6c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6c5c) {
            ctx->pc = 0x4A6C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6C5Cu;
            // 0x4a6c60: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6C98u;
            goto label_4a6c98;
        }
    }
    ctx->pc = 0x4A6C64u;
label_4a6c64:
    // 0x4a6c64: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x4a6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a6c68:
    // 0x4a6c68: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_4a6c6c:
    if (ctx->pc == 0x4A6C6Cu) {
        ctx->pc = 0x4A6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C68u;
        // 0x4a6c6c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C70u;
        goto label_4a6c70;
    }
    ctx->pc = 0x4A6C68u;
    {
        const bool branch_taken_0x4a6c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6c68) {
            ctx->pc = 0x4A6C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6C68u;
            // 0x4a6c6c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6C98u;
            goto label_4a6c98;
        }
    }
    ctx->pc = 0x4A6C70u;
label_4a6c70:
    // 0x4a6c70: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a6c74:
    // 0x4a6c74: 0xc127ca4  jal         func_49F290
label_4a6c78:
    if (ctx->pc == 0x4A6C78u) {
        ctx->pc = 0x4A6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C74u;
        // 0x4a6c78: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C7Cu;
        goto label_4a6c7c;
    }
    ctx->pc = 0x4A6C74u;
    SET_GPR_U32(ctx, 31, 0x4A6C7Cu);
    ctx->pc = 0x4A6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6C74u;
    // 0x4a6c78: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A6C74u, 0x4A6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6C7Cu;
label_4a6c7c:
    // 0x4a6c7c: 0x1040ff95  beqz        $v0, . + 4 + (-0x6B << 2)
label_4a6c80:
    if (ctx->pc == 0x4A6C80u) {
        ctx->pc = 0x4A6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C7Cu;
        // 0x4a6c80: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C84u;
        goto label_4a6c84;
    }
    ctx->pc = 0x4A6C7Cu;
    {
        const bool branch_taken_0x4a6c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C7Cu;
        // 0x4a6c80: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6c7c) {
            ctx->pc = 0x4A6AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6ad4;
        }
    }
    ctx->pc = 0x4A6C84u;
label_4a6c84:
    // 0x4a6c84: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4a6c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4a6c88:
    // 0x4a6c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a6c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6c8c:
    // 0x4a6c8c: 0xc0bb778  jal         func_2EDDE0
label_4a6c90:
    if (ctx->pc == 0x4A6C90u) {
        ctx->pc = 0x4A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6C8Cu;
        // 0x4a6c90: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6C94u;
        goto label_4a6c94;
    }
    ctx->pc = 0x4A6C8Cu;
    SET_GPR_U32(ctx, 31, 0x4A6C94u);
    ctx->pc = 0x4A6C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6C8Cu;
    // 0x4a6c90: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A6C8Cu, 0x4A6C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6C94u;
label_4a6c94:
    // 0x4a6c94: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4a6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_4a6c98:
    // 0x4a6c98: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4a6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4a6c9c:
    // 0x4a6c9c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x4a6c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_4a6ca0:
    // 0x4a6ca0: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x4a6ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_4a6ca4:
    // 0x4a6ca4: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x4a6ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
label_4a6ca8:
    // 0x4a6ca8: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x4a6ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
label_4a6cac:
    // 0x4a6cac: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x4a6cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
label_4a6cb0:
    // 0x4a6cb0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x4a6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_4a6cb4:
    // 0x4a6cb4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_4a6cb8:
    if (ctx->pc == 0x4A6CB8u) {
        ctx->pc = 0x4A6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CB4u;
        // 0x4a6cb8: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6CBCu;
        goto label_4a6cbc;
    }
    ctx->pc = 0x4A6CB4u;
    {
        const bool branch_taken_0x4a6cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CB4u;
        // 0x4a6cb8: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6cb4) {
            ctx->pc = 0x4A6D30u;
            goto label_4a6d30;
        }
    }
    ctx->pc = 0x4A6CBCu;
label_4a6cbc:
    // 0x4a6cbc: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4a6cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a6cc0:
    // 0x4a6cc0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4a6cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a6cc4:
    // 0x4a6cc4: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x4a6cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a6cc8:
    // 0x4a6cc8: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x4a6cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a6ccc:
    // 0x4a6ccc: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x4a6cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a6cd0:
    // 0x4a6cd0: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x4a6cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a6cd4:
    // 0x4a6cd4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x4a6cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4a6cd8:
    // 0x4a6cd8: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x4a6cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6cdc:
    // 0x4a6cdc: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x4a6cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6ce0:
    // 0x4a6ce0: 0xb203003b  sdl         $v1, 0x3B($s0)
    ctx->pc = 0x4a6ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6ce4:
    // 0x4a6ce4: 0xb6030034  sdr         $v1, 0x34($s0)
    ctx->pc = 0x4a6ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6ce8:
    // 0x4a6ce8: 0xb2040043  sdl         $a0, 0x43($s0)
    ctx->pc = 0x4a6ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6cec:
    // 0x4a6cec: 0xb604003c  sdr         $a0, 0x3C($s0)
    ctx->pc = 0x4a6cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6cf0:
    // 0x4a6cf0: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x4a6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
label_4a6cf4:
    // 0x4a6cf4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4a6cf8:
    // 0x4a6cf8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4a6cfc:
    if (ctx->pc == 0x4A6CFCu) {
        ctx->pc = 0x4A6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6CF8u;
        // 0x4a6cfc: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D00u;
        goto label_4a6d00;
    }
    ctx->pc = 0x4A6CF8u;
    {
        const bool branch_taken_0x4a6cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6cf8) {
            ctx->pc = 0x4A6CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6CF8u;
            // 0x4a6cfc: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6D34u;
            goto label_4a6d34;
        }
    }
    ctx->pc = 0x4A6D00u;
label_4a6d00:
    // 0x4a6d00: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4a6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4a6d04:
    // 0x4a6d04: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_4a6d08:
    if (ctx->pc == 0x4A6D08u) {
        ctx->pc = 0x4A6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D04u;
        // 0x4a6d08: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D0Cu;
        goto label_4a6d0c;
    }
    ctx->pc = 0x4A6D04u;
    {
        const bool branch_taken_0x4a6d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6d04) {
            ctx->pc = 0x4A6D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6D04u;
            // 0x4a6d08: 0x92030039  lbu         $v1, 0x39($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6D34u;
            goto label_4a6d34;
        }
    }
    ctx->pc = 0x4A6D0Cu;
label_4a6d0c:
    // 0x4a6d0c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a6d10:
    // 0x4a6d10: 0xc127ca4  jal         func_49F290
label_4a6d14:
    if (ctx->pc == 0x4A6D14u) {
        ctx->pc = 0x4A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D10u;
        // 0x4a6d14: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D18u;
        goto label_4a6d18;
    }
    ctx->pc = 0x4A6D10u;
    SET_GPR_U32(ctx, 31, 0x4A6D18u);
    ctx->pc = 0x4A6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6D10u;
    // 0x4a6d14: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A6D10u, 0x4A6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6D18u;
label_4a6d18:
    // 0x4a6d18: 0x1040ff6e  beqz        $v0, . + 4 + (-0x92 << 2)
label_4a6d1c:
    if (ctx->pc == 0x4A6D1Cu) {
        ctx->pc = 0x4A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D18u;
        // 0x4a6d1c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D20u;
        goto label_4a6d20;
    }
    ctx->pc = 0x4A6D18u;
    {
        const bool branch_taken_0x4a6d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D18u;
        // 0x4a6d1c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d18) {
            ctx->pc = 0x4A6AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6ad4;
        }
    }
    ctx->pc = 0x4A6D20u;
label_4a6d20:
    // 0x4a6d20: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x4a6d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4a6d24:
    // 0x4a6d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a6d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6d28:
    // 0x4a6d28: 0xc0bb778  jal         func_2EDDE0
label_4a6d2c:
    if (ctx->pc == 0x4A6D2Cu) {
        ctx->pc = 0x4A6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D28u;
        // 0x4a6d2c: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D30u;
        goto label_4a6d30;
    }
    ctx->pc = 0x4A6D28u;
    SET_GPR_U32(ctx, 31, 0x4A6D30u);
    ctx->pc = 0x4A6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6D28u;
    // 0x4a6d2c: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A6D28u, 0x4A6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6D30u;
label_4a6d30:
    // 0x4a6d30: 0x92030039  lbu         $v1, 0x39($s0)
    ctx->pc = 0x4a6d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_4a6d34:
    // 0x4a6d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6d38:
    // 0x4a6d38: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_4a6d3c:
    if (ctx->pc == 0x4A6D3Cu) {
        ctx->pc = 0x4A6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D38u;
        // 0x4a6d3c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D40u;
        goto label_4a6d40;
    }
    ctx->pc = 0x4A6D38u;
    {
        const bool branch_taken_0x4a6d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a6d38) {
            ctx->pc = 0x4A6D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6D38u;
            // 0x4a6d3c: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6D64u;
            goto label_4a6d64;
        }
    }
    ctx->pc = 0x4A6D40u;
label_4a6d40:
    // 0x4a6d40: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x4a6d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_4a6d44:
    // 0x4a6d44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4a6d48:
    if (ctx->pc == 0x4A6D48u) {
        ctx->pc = 0x4A6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D44u;
        // 0x4a6d48: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D4Cu;
        goto label_4a6d4c;
    }
    ctx->pc = 0x4A6D44u;
    {
        const bool branch_taken_0x4a6d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D44u;
        // 0x4a6d48: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d44) {
            ctx->pc = 0x4A6D58u;
            goto label_4a6d58;
        }
    }
    ctx->pc = 0x4A6D4Cu;
label_4a6d4c:
    // 0x4a6d4c: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x4a6d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_4a6d50:
    // 0x4a6d50: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a6d54:
    if (ctx->pc == 0x4A6D54u) {
        ctx->pc = 0x4A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D50u;
        // 0x4a6d54: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D58u;
        goto label_4a6d58;
    }
    ctx->pc = 0x4A6D50u;
    {
        const bool branch_taken_0x4a6d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D50u;
        // 0x4a6d54: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d50) {
            ctx->pc = 0x4A6D5Cu;
            goto label_4a6d5c;
        }
    }
    ctx->pc = 0x4A6D58u;
label_4a6d58:
    // 0x4a6d58: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x4a6d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4a6d5c:
    // 0x4a6d5c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4a6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4a6d60:
    // 0x4a6d60: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4a6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4a6d64:
    // 0x4a6d64: 0x32830008  andi        $v1, $s4, 0x8
    ctx->pc = 0x4a6d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_4a6d68:
    // 0x4a6d68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x4a6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a6d6c:
    // 0x4a6d6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a6d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4a6d70:
    // 0x4a6d70: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4a6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4a6d74:
    // 0x4a6d74: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x4a6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_4a6d78:
    // 0x4a6d78: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_4a6d7c:
    if (ctx->pc == 0x4A6D7Cu) {
        ctx->pc = 0x4A6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D78u;
        // 0x4a6d7c: 0x2602005c  addiu       $v0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D80u;
        goto label_4a6d80;
    }
    ctx->pc = 0x4A6D78u;
    {
        const bool branch_taken_0x4a6d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D78u;
        // 0x4a6d7c: 0x2602005c  addiu       $v0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d78) {
            ctx->pc = 0x4A6D84u;
            goto label_4a6d84;
        }
    }
    ctx->pc = 0x4A6D80u;
label_4a6d80:
    // 0x4a6d80: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x4a6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_4a6d84:
    // 0x4a6d84: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a6d88:
    // 0x4a6d88: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4a6d8c:
    // 0x4a6d8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4a6d90:
    if (ctx->pc == 0x4A6D90u) {
        ctx->pc = 0x4A6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D8Cu;
        // 0x4a6d90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D94u;
        goto label_4a6d94;
    }
    ctx->pc = 0x4A6D8Cu;
    {
        const bool branch_taken_0x4a6d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D8Cu;
        // 0x4a6d90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6d8c) {
            ctx->pc = 0x4A6DB4u;
            goto label_4a6db4;
        }
    }
    ctx->pc = 0x4A6D94u;
label_4a6d94:
    // 0x4a6d94: 0x40f809  jalr        $v0
label_4a6d98:
    if (ctx->pc == 0x4A6D98u) {
        ctx->pc = 0x4A6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D94u;
        // 0x4a6d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6D9Cu;
        goto label_4a6d9c;
    }
    ctx->pc = 0x4A6D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6D9Cu);
        ctx->pc = 0x4A6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6D94u;
        // 0x4a6d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6D94u, 0x4A6D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6D9Cu;
label_4a6d9c:
    // 0x4a6d9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4a6da0:
    if (ctx->pc == 0x4A6DA0u) {
        ctx->pc = 0x4A6DA4u;
        goto label_4a6da4;
    }
    ctx->pc = 0x4A6D9Cu;
    {
        const bool branch_taken_0x4a6d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6d9c) {
            ctx->pc = 0x4A6DB4u;
            goto label_4a6db4;
        }
    }
    ctx->pc = 0x4A6DA4u;
label_4a6da4:
    // 0x4a6da4: 0xc12a260  jal         func_4A8980
label_4a6da8:
    if (ctx->pc == 0x4A6DA8u) {
        ctx->pc = 0x4A6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DA4u;
        // 0x4a6da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6DACu;
        goto label_4a6dac;
    }
    ctx->pc = 0x4A6DA4u;
    SET_GPR_U32(ctx, 31, 0x4A6DACu);
    ctx->pc = 0x4A6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6DA4u;
    // 0x4a6da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8980u, 0x4A6DA4u, 0x4A6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6DACu;
label_4a6dac:
    // 0x4a6dac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a6db0:
    if (ctx->pc == 0x4A6DB0u) {
        ctx->pc = 0x4A6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DACu;
        // 0x4a6db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6DB4u;
        goto label_4a6db4;
    }
    ctx->pc = 0x4A6DACu;
    {
        const bool branch_taken_0x4a6dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DACu;
        // 0x4a6db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6dac) {
            ctx->pc = 0x4A6DCCu;
            goto label_4a6dcc;
        }
    }
    ctx->pc = 0x4A6DB4u;
label_4a6db4:
    // 0x4a6db4: 0xc1283a8  jal         func_4A0EA0
label_4a6db8:
    if (ctx->pc == 0x4A6DB8u) {
        ctx->pc = 0x4A6DBCu;
        goto label_4a6dbc;
    }
    ctx->pc = 0x4A6DB4u;
    SET_GPR_U32(ctx, 31, 0x4A6DBCu);
    ctx->pc = 0x4A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0EA0u, 0x4A6DB4u, 0x4A6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6DBCu;
label_4a6dbc:
    // 0x4a6dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6dc0:
    // 0x4a6dc0: 0xc128328  jal         func_4A0CA0
label_4a6dc4:
    if (ctx->pc == 0x4A6DC4u) {
        ctx->pc = 0x4A6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DC0u;
        // 0x4a6dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6DC8u;
        goto label_4a6dc8;
    }
    ctx->pc = 0x4A6DC0u;
    SET_GPR_U32(ctx, 31, 0x4A6DC8u);
    ctx->pc = 0x4A6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6DC0u;
    // 0x4a6dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0CA0u, 0x4A6DC0u, 0x4A6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6DC8u;
label_4a6dc8:
    // 0x4a6dc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a6dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6dcc:
    // 0x4a6dcc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a6dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a6dd0:
    // 0x4a6dd0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a6dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a6dd4:
    // 0x4a6dd4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a6dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a6dd8:
    // 0x4a6dd8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a6dd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a6ddc:
    // 0x4a6ddc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a6ddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6de0:
    // 0x4a6de0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a6de0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6de4:
    // 0x4a6de4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a6de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6de8:
    // 0x4a6de8: 0x3e00008  jr          $ra
label_4a6dec:
    if (ctx->pc == 0x4A6DECu) {
        ctx->pc = 0x4A6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DE8u;
        // 0x4a6dec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6DF0u;
        goto label_4a6df0;
    }
    ctx->pc = 0x4A6DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6DE8u;
        // 0x4a6dec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6DF0u;
label_4a6df0:
    // 0x4a6df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a6df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a6df4:
    // 0x4a6df4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a6df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a6df8:
    // 0x4a6df8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a6df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a6dfc:
    // 0x4a6dfc: 0x34a50806  ori         $a1, $a1, 0x806
    ctx->pc = 0x4a6dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
label_4a6e00:
    // 0x4a6e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a6e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6e04:
    // 0x4a6e04: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a6e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a6e08:
    // 0x4a6e08: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a6e0c:
    // 0x4a6e0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a6e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a6e10:
    // 0x4a6e10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a6e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6e14:
    // 0x4a6e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a6e18:
    // 0x4a6e18: 0xc12a936  jal         func_4AA4D8
label_4a6e1c:
    if (ctx->pc == 0x4A6E1Cu) {
        ctx->pc = 0x4A6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E18u;
        // 0x4a6e1c: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6E20u;
        goto label_4a6e20;
    }
    ctx->pc = 0x4A6E18u;
    SET_GPR_U32(ctx, 31, 0x4A6E20u);
    ctx->pc = 0x4A6E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6E18u;
    // 0x4a6e1c: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4A6E18u, 0x4A6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6E20u;
label_4a6e20:
    // 0x4a6e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a6e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6e24:
    // 0x4a6e24: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_4a6e28:
    if (ctx->pc == 0x4A6E28u) {
        ctx->pc = 0x4A6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E24u;
        // 0x4a6e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6E2Cu;
        goto label_4a6e2c;
    }
    ctx->pc = 0x4A6E24u;
    {
        const bool branch_taken_0x4a6e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E24u;
        // 0x4a6e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e24) {
            ctx->pc = 0x4A6E34u;
            goto label_4a6e34;
        }
    }
    ctx->pc = 0x4A6E2Cu;
label_4a6e2c:
    // 0x4a6e2c: 0x10000061  b           . + 4 + (0x61 << 2)
label_4a6e30:
    if (ctx->pc == 0x4A6E30u) {
        ctx->pc = 0x4A6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E2Cu;
        // 0x4a6e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6E34u;
        goto label_4a6e34;
    }
    ctx->pc = 0x4A6E2Cu;
    {
        const bool branch_taken_0x4a6e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E2Cu;
        // 0x4a6e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e2c) {
            ctx->pc = 0x4A6FB4u;
            goto label_4a6fb4;
        }
    }
    ctx->pc = 0x4A6E34u;
label_4a6e34:
    // 0x4a6e34: 0x901025  or          $v0, $a0, $s0
    ctx->pc = 0x4a6e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_4a6e38:
    // 0x4a6e38: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4a6e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4a6e3c:
    // 0x4a6e3c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4a6e40:
    if (ctx->pc == 0x4A6E40u) {
        ctx->pc = 0x4A6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E3Cu;
        // 0x4a6e40: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6E44u;
        goto label_4a6e44;
    }
    ctx->pc = 0x4A6E3Cu;
    {
        const bool branch_taken_0x4a6e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E3Cu;
        // 0x4a6e40: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e3c) {
            ctx->pc = 0x4A6E9Cu;
            goto label_4a6e9c;
        }
    }
    ctx->pc = 0x4A6E44u;
label_4a6e44:
    // 0x4a6e44: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x4a6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a6e48:
    // 0x4a6e48: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x4a6e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a6e4c:
    // 0x4a6e4c: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x4a6e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a6e50:
    // 0x4a6e50: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x4a6e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a6e54:
    // 0x4a6e54: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x4a6e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a6e58:
    // 0x4a6e58: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x4a6e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4a6e5c:
    // 0x4a6e5c: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x4a6e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4a6e60:
    // 0x4a6e60: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x4a6e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4a6e64:
    // 0x4a6e64: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x4a6e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4a6e68:
    // 0x4a6e68: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x4a6e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e6c:
    // 0x4a6e6c: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x4a6e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e70:
    // 0x4a6e70: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x4a6e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e74:
    // 0x4a6e74: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x4a6e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e78:
    // 0x4a6e78: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x4a6e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e7c:
    // 0x4a6e7c: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x4a6e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e80:
    // 0x4a6e80: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x4a6e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e84:
    // 0x4a6e84: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x4a6e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6e88:
    // 0x4a6e88: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4a6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a6e8c:
    // 0x4a6e8c: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
label_4a6e90:
    if (ctx->pc == 0x4A6E90u) {
        ctx->pc = 0x4A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E8Cu;
        // 0x4a6e90: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6E94u;
        goto label_4a6e94;
    }
    ctx->pc = 0x4A6E8Cu;
    {
        const bool branch_taken_0x4a6e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6E8Cu;
        // 0x4a6e90: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6e8c) {
            ctx->pc = 0x4A6E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6e48;
        }
    }
    ctx->pc = 0x4A6E94u;
label_4a6e94:
    // 0x4a6e94: 0x1000000d  b           . + 4 + (0xD << 2)
label_4a6e98:
    if (ctx->pc == 0x4A6E98u) {
        ctx->pc = 0x4A6E9Cu;
        goto label_4a6e9c;
    }
    ctx->pc = 0x4A6E94u;
    {
        const bool branch_taken_0x4a6e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6e94) {
            ctx->pc = 0x4A6ECCu;
            goto label_4a6ecc;
        }
    }
    ctx->pc = 0x4A6E9Cu;
label_4a6e9c:
    // 0x4a6e9c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x4a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a6ea0:
    // 0x4a6ea0: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x4a6ea0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_4a6ea4:
    // 0x4a6ea4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x4a6ea4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_4a6ea8:
    // 0x4a6ea8: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x4a6ea8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_4a6eac:
    // 0x4a6eac: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x4a6eacu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_4a6eb0:
    // 0x4a6eb0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x4a6eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_4a6eb4:
    // 0x4a6eb4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x4a6eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_4a6eb8:
    // 0x4a6eb8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x4a6eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_4a6ebc:
    // 0x4a6ebc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x4a6ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_4a6ec0:
    // 0x4a6ec0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4a6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a6ec4:
    // 0x4a6ec4: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
label_4a6ec8:
    if (ctx->pc == 0x4A6EC8u) {
        ctx->pc = 0x4A6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EC4u;
        // 0x4a6ec8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6ECCu;
        goto label_4a6ecc;
    }
    ctx->pc = 0x4A6EC4u;
    {
        const bool branch_taken_0x4a6ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6EC4u;
        // 0x4a6ec8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6ec4) {
            ctx->pc = 0x4A6EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6ea0;
        }
    }
    ctx->pc = 0x4A6ECCu;
label_4a6ecc:
    // 0x4a6ecc: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4a6eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a6ed0:
    // 0x4a6ed0: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4a6ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a6ed4:
    // 0x4a6ed4: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x4a6ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a6ed8:
    // 0x4a6ed8: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x4a6ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a6edc:
    // 0x4a6edc: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x4a6edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a6ee0:
    // 0x4a6ee0: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x4a6ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a6ee4:
    // 0x4a6ee4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x4a6ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4a6ee8:
    // 0x4a6ee8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x4a6ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6eec:
    // 0x4a6eec: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x4a6eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6ef0:
    // 0x4a6ef0: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x4a6ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6ef4:
    // 0x4a6ef4: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x4a6ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6ef8:
    // 0x4a6ef8: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x4a6ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6efc:
    // 0x4a6efc: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x4a6efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a6f00:
    // 0x4a6f00: 0xc1283a8  jal         func_4A0EA0
label_4a6f04:
    if (ctx->pc == 0x4A6F04u) {
        ctx->pc = 0x4A6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F00u;
        // 0x4a6f04: 0xac670018  sw          $a3, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F08u;
        goto label_4a6f08;
    }
    ctx->pc = 0x4A6F00u;
    SET_GPR_U32(ctx, 31, 0x4A6F08u);
    ctx->pc = 0x4A6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F00u;
    // 0x4a6f04: 0xac670018  sw          $a3, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0EA0u, 0x4A6F00u, 0x4A6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F08u;
label_4a6f08:
    // 0x4a6f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a6f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6f0c:
    // 0x4a6f0c: 0xc128328  jal         func_4A0CA0
label_4a6f10:
    if (ctx->pc == 0x4A6F10u) {
        ctx->pc = 0x4A6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F0Cu;
        // 0x4a6f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F14u;
        goto label_4a6f14;
    }
    ctx->pc = 0x4A6F0Cu;
    SET_GPR_U32(ctx, 31, 0x4A6F14u);
    ctx->pc = 0x4A6F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F0Cu;
    // 0x4a6f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0CA0u, 0x4A6F0Cu, 0x4A6F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F14u;
label_4a6f14:
    // 0x4a6f14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4a6f18:
    if (ctx->pc == 0x4A6F18u) {
        ctx->pc = 0x4A6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F14u;
        // 0x4a6f18: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F1Cu;
        goto label_4a6f1c;
    }
    ctx->pc = 0x4A6F14u;
    {
        const bool branch_taken_0x4a6f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6f14) {
            ctx->pc = 0x4A6F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6F14u;
            // 0x4a6f18: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6F2Cu;
            goto label_4a6f2c;
        }
    }
    ctx->pc = 0x4A6F1Cu;
label_4a6f1c:
    // 0x4a6f1c: 0xc127cae  jal         func_49F2B8
label_4a6f20:
    if (ctx->pc == 0x4A6F20u) {
        ctx->pc = 0x4A6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F1Cu;
        // 0x4a6f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F24u;
        goto label_4a6f24;
    }
    ctx->pc = 0x4A6F1Cu;
    SET_GPR_U32(ctx, 31, 0x4A6F24u);
    ctx->pc = 0x4A6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F1Cu;
    // 0x4a6f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A6F1Cu, 0x4A6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F24u;
label_4a6f24:
    // 0x4a6f24: 0x10000023  b           . + 4 + (0x23 << 2)
label_4a6f28:
    if (ctx->pc == 0x4A6F28u) {
        ctx->pc = 0x4A6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F24u;
        // 0x4a6f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F2Cu;
        goto label_4a6f2c;
    }
    ctx->pc = 0x4A6F24u;
    {
        const bool branch_taken_0x4a6f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F24u;
        // 0x4a6f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6f24) {
            ctx->pc = 0x4A6FB4u;
            goto label_4a6fb4;
        }
    }
    ctx->pc = 0x4A6F2Cu;
label_4a6f2c:
    // 0x4a6f2c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x4a6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4a6f30:
    // 0x4a6f30: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_4a6f34:
    if (ctx->pc == 0x4A6F34u) {
        ctx->pc = 0x4A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F30u;
        // 0x4a6f34: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F38u;
        goto label_4a6f38;
    }
    ctx->pc = 0x4A6F30u;
    {
        const bool branch_taken_0x4a6f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6f30) {
            ctx->pc = 0x4A6F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6F30u;
            // 0x4a6f34: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6FA8u;
            goto label_4a6fa8;
        }
    }
    ctx->pc = 0x4A6F38u;
label_4a6f38:
    // 0x4a6f38: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x4a6f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a6f3c:
    // 0x4a6f3c: 0x40f809  jalr        $v0
label_4a6f40:
    if (ctx->pc == 0x4A6F40u) {
        ctx->pc = 0x4A6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F3Cu;
        // 0x4a6f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F44u;
        goto label_4a6f44;
    }
    ctx->pc = 0x4A6F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A6F44u);
        ctx->pc = 0x4A6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F3Cu;
        // 0x4a6f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6F3Cu, 0x4A6F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6F44u;
label_4a6f44:
    // 0x4a6f44: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_4a6f48:
    if (ctx->pc == 0x4A6F48u) {
        ctx->pc = 0x4A6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F44u;
        // 0x4a6f48: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F4Cu;
        goto label_4a6f4c;
    }
    ctx->pc = 0x4A6F44u;
    {
        const bool branch_taken_0x4a6f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6f44) {
            ctx->pc = 0x4A6F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6F44u;
            // 0x4a6f48: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6FA8u;
            goto label_4a6fa8;
        }
    }
    ctx->pc = 0x4A6F4Cu;
label_4a6f4c:
    // 0x4a6f4c: 0xc1283a8  jal         func_4A0EA0
label_4a6f50:
    if (ctx->pc == 0x4A6F50u) {
        ctx->pc = 0x4A6F54u;
        goto label_4a6f54;
    }
    ctx->pc = 0x4A6F4Cu;
    SET_GPR_U32(ctx, 31, 0x4A6F54u);
    ctx->pc = 0x4A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0EA0u, 0x4A6F4Cu, 0x4A6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F54u;
label_4a6f54:
    // 0x4a6f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a6f58:
    // 0x4a6f58: 0xc128342  jal         func_4A0D08
label_4a6f5c:
    if (ctx->pc == 0x4A6F5Cu) {
        ctx->pc = 0x4A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F58u;
        // 0x4a6f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F60u;
        goto label_4a6f60;
    }
    ctx->pc = 0x4A6F58u;
    SET_GPR_U32(ctx, 31, 0x4A6F60u);
    ctx->pc = 0x4A6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F58u;
    // 0x4a6f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0D08u, 0x4A6F58u, 0x4A6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F60u;
label_4a6f60:
    // 0x4a6f60: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4a6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4a6f64:
    // 0x4a6f64: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a6f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a6f68:
    // 0x4a6f68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4a6f6c:
    if (ctx->pc == 0x4A6F6Cu) {
        ctx->pc = 0x4A6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F68u;
        // 0x4a6f6c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F70u;
        goto label_4a6f70;
    }
    ctx->pc = 0x4A6F68u;
    {
        const bool branch_taken_0x4a6f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F68u;
        // 0x4a6f6c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6f68) {
            ctx->pc = 0x4A6F90u;
            goto label_4a6f90;
        }
    }
    ctx->pc = 0x4A6F70u;
label_4a6f70:
    // 0x4a6f70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a6f74:
    // 0x4a6f74: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x4a6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4a6f78:
    // 0x4a6f78: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_4a6f7c:
    if (ctx->pc == 0x4A6F7Cu) {
        ctx->pc = 0x4A6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F78u;
        // 0x4a6f7c: 0x26448880  addiu       $a0, $s2, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F80u;
        goto label_4a6f80;
    }
    ctx->pc = 0x4A6F78u;
    {
        const bool branch_taken_0x4a6f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6f78) {
            ctx->pc = 0x4A6F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6F78u;
            // 0x4a6f7c: 0x26448880  addiu       $a0, $s2, -0x7780 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936704));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6F80u;
            goto label_4a6f80;
        }
    }
    ctx->pc = 0x4A6F80u;
label_4a6f80:
    // 0x4a6f80: 0xc12a9a0  jal         func_4AA680
label_4a6f84:
    if (ctx->pc == 0x4A6F84u) {
        ctx->pc = 0x4A6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F80u;
        // 0x4a6f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F88u;
        goto label_4a6f88;
    }
    ctx->pc = 0x4A6F80u;
    SET_GPR_U32(ctx, 31, 0x4A6F88u);
    ctx->pc = 0x4A6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F80u;
    // 0x4a6f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4A6F80u, 0x4A6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6F88u;
label_4a6f88:
    // 0x4a6f88: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a6f8c:
    if (ctx->pc == 0x4A6F8Cu) {
        ctx->pc = 0x4A6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F88u;
        // 0x4a6f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F90u;
        goto label_4a6f90;
    }
    ctx->pc = 0x4A6F88u;
    {
        const bool branch_taken_0x4a6f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F88u;
        // 0x4a6f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6f88) {
            ctx->pc = 0x4A6FB4u;
            goto label_4a6fb4;
        }
    }
    ctx->pc = 0x4A6F90u;
label_4a6f90:
    // 0x4a6f90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4a6f94:
    if (ctx->pc == 0x4A6F94u) {
        ctx->pc = 0x4A6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F90u;
        // 0x4a6f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6F98u;
        goto label_4a6f98;
    }
    ctx->pc = 0x4A6F90u;
    {
        const bool branch_taken_0x4a6f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F90u;
        // 0x4a6f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6f90) {
            ctx->pc = 0x4A6FB4u;
            goto label_4a6fb4;
        }
    }
    ctx->pc = 0x4A6F98u;
label_4a6f98:
    // 0x4a6f98: 0xc127cae  jal         func_49F2B8
label_4a6f9c:
    if (ctx->pc == 0x4A6F9Cu) {
        ctx->pc = 0x4A6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6F98u;
        // 0x4a6f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6FA0u;
        goto label_4a6fa0;
    }
    ctx->pc = 0x4A6F98u;
    SET_GPR_U32(ctx, 31, 0x4A6FA0u);
    ctx->pc = 0x4A6F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6F98u;
    // 0x4a6f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A6F98u, 0x4A6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6FA0u;
label_4a6fa0:
    // 0x4a6fa0: 0x10000004  b           . + 4 + (0x4 << 2)
label_4a6fa4:
    if (ctx->pc == 0x4A6FA4u) {
        ctx->pc = 0x4A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6FA0u;
        // 0x4a6fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6FA8u;
        goto label_4a6fa8;
    }
    ctx->pc = 0x4A6FA0u;
    {
        const bool branch_taken_0x4a6fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6FA0u;
        // 0x4a6fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6fa0) {
            ctx->pc = 0x4A6FB4u;
            goto label_4a6fb4;
        }
    }
    ctx->pc = 0x4A6FA8u;
label_4a6fa8:
    // 0x4a6fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a6fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6fac:
    // 0x4a6fac: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4a6facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4a6fb0:
    // 0x4a6fb0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4a6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4a6fb4:
    // 0x4a6fb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a6fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6fb8:
    // 0x4a6fb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6fbc:
    // 0x4a6fbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a6fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6fc0:
    // 0x4a6fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a6fc4:
    // 0x4a6fc4: 0x3e00008  jr          $ra
label_4a6fc8:
    if (ctx->pc == 0x4A6FC8u) {
        ctx->pc = 0x4A6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6FC4u;
        // 0x4a6fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6FCCu;
        goto label_4a6fcc;
    }
    ctx->pc = 0x4A6FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6FC4u;
        // 0x4a6fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6FCCu;
label_4a6fcc:
    // 0x4a6fcc: 0x0  nop
    ctx->pc = 0x4a6fccu;
    // NOP
    ctx->pc = 0x4a6fd0u;
}
