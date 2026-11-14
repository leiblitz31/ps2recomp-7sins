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

// Function: sub_00341A38
// Address: 0x341a38 - 0x342040
void sub_00341A38_0x341a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341A38_0x341a38");
#endif

    switch (ctx->pc) {
        case 0x341a38u: goto label_341a38;
        case 0x341a3cu: goto label_341a3c;
        case 0x341a40u: goto label_341a40;
        case 0x341a44u: goto label_341a44;
        case 0x341a48u: goto label_341a48;
        case 0x341a4cu: goto label_341a4c;
        case 0x341a50u: goto label_341a50;
        case 0x341a54u: goto label_341a54;
        case 0x341a58u: goto label_341a58;
        case 0x341a5cu: goto label_341a5c;
        case 0x341a60u: goto label_341a60;
        case 0x341a64u: goto label_341a64;
        case 0x341a68u: goto label_341a68;
        case 0x341a6cu: goto label_341a6c;
        case 0x341a70u: goto label_341a70;
        case 0x341a74u: goto label_341a74;
        case 0x341a78u: goto label_341a78;
        case 0x341a7cu: goto label_341a7c;
        case 0x341a80u: goto label_341a80;
        case 0x341a84u: goto label_341a84;
        case 0x341a88u: goto label_341a88;
        case 0x341a8cu: goto label_341a8c;
        case 0x341a90u: goto label_341a90;
        case 0x341a94u: goto label_341a94;
        case 0x341a98u: goto label_341a98;
        case 0x341a9cu: goto label_341a9c;
        case 0x341aa0u: goto label_341aa0;
        case 0x341aa4u: goto label_341aa4;
        case 0x341aa8u: goto label_341aa8;
        case 0x341aacu: goto label_341aac;
        case 0x341ab0u: goto label_341ab0;
        case 0x341ab4u: goto label_341ab4;
        case 0x341ab8u: goto label_341ab8;
        case 0x341abcu: goto label_341abc;
        case 0x341ac0u: goto label_341ac0;
        case 0x341ac4u: goto label_341ac4;
        case 0x341ac8u: goto label_341ac8;
        case 0x341accu: goto label_341acc;
        case 0x341ad0u: goto label_341ad0;
        case 0x341ad4u: goto label_341ad4;
        case 0x341ad8u: goto label_341ad8;
        case 0x341adcu: goto label_341adc;
        case 0x341ae0u: goto label_341ae0;
        case 0x341ae4u: goto label_341ae4;
        case 0x341ae8u: goto label_341ae8;
        case 0x341aecu: goto label_341aec;
        case 0x341af0u: goto label_341af0;
        case 0x341af4u: goto label_341af4;
        case 0x341af8u: goto label_341af8;
        case 0x341afcu: goto label_341afc;
        case 0x341b00u: goto label_341b00;
        case 0x341b04u: goto label_341b04;
        case 0x341b08u: goto label_341b08;
        case 0x341b0cu: goto label_341b0c;
        case 0x341b10u: goto label_341b10;
        case 0x341b14u: goto label_341b14;
        case 0x341b18u: goto label_341b18;
        case 0x341b1cu: goto label_341b1c;
        case 0x341b20u: goto label_341b20;
        case 0x341b24u: goto label_341b24;
        case 0x341b28u: goto label_341b28;
        case 0x341b2cu: goto label_341b2c;
        case 0x341b30u: goto label_341b30;
        case 0x341b34u: goto label_341b34;
        case 0x341b38u: goto label_341b38;
        case 0x341b3cu: goto label_341b3c;
        case 0x341b40u: goto label_341b40;
        case 0x341b44u: goto label_341b44;
        case 0x341b48u: goto label_341b48;
        case 0x341b4cu: goto label_341b4c;
        case 0x341b50u: goto label_341b50;
        case 0x341b54u: goto label_341b54;
        case 0x341b58u: goto label_341b58;
        case 0x341b5cu: goto label_341b5c;
        case 0x341b60u: goto label_341b60;
        case 0x341b64u: goto label_341b64;
        case 0x341b68u: goto label_341b68;
        case 0x341b6cu: goto label_341b6c;
        case 0x341b70u: goto label_341b70;
        case 0x341b74u: goto label_341b74;
        case 0x341b78u: goto label_341b78;
        case 0x341b7cu: goto label_341b7c;
        case 0x341b80u: goto label_341b80;
        case 0x341b84u: goto label_341b84;
        case 0x341b88u: goto label_341b88;
        case 0x341b8cu: goto label_341b8c;
        case 0x341b90u: goto label_341b90;
        case 0x341b94u: goto label_341b94;
        case 0x341b98u: goto label_341b98;
        case 0x341b9cu: goto label_341b9c;
        case 0x341ba0u: goto label_341ba0;
        case 0x341ba4u: goto label_341ba4;
        case 0x341ba8u: goto label_341ba8;
        case 0x341bacu: goto label_341bac;
        case 0x341bb0u: goto label_341bb0;
        case 0x341bb4u: goto label_341bb4;
        case 0x341bb8u: goto label_341bb8;
        case 0x341bbcu: goto label_341bbc;
        case 0x341bc0u: goto label_341bc0;
        case 0x341bc4u: goto label_341bc4;
        case 0x341bc8u: goto label_341bc8;
        case 0x341bccu: goto label_341bcc;
        case 0x341bd0u: goto label_341bd0;
        case 0x341bd4u: goto label_341bd4;
        case 0x341bd8u: goto label_341bd8;
        case 0x341bdcu: goto label_341bdc;
        case 0x341be0u: goto label_341be0;
        case 0x341be4u: goto label_341be4;
        case 0x341be8u: goto label_341be8;
        case 0x341becu: goto label_341bec;
        case 0x341bf0u: goto label_341bf0;
        case 0x341bf4u: goto label_341bf4;
        case 0x341bf8u: goto label_341bf8;
        case 0x341bfcu: goto label_341bfc;
        case 0x341c00u: goto label_341c00;
        case 0x341c04u: goto label_341c04;
        case 0x341c08u: goto label_341c08;
        case 0x341c0cu: goto label_341c0c;
        case 0x341c10u: goto label_341c10;
        case 0x341c14u: goto label_341c14;
        case 0x341c18u: goto label_341c18;
        case 0x341c1cu: goto label_341c1c;
        case 0x341c20u: goto label_341c20;
        case 0x341c24u: goto label_341c24;
        case 0x341c28u: goto label_341c28;
        case 0x341c2cu: goto label_341c2c;
        case 0x341c30u: goto label_341c30;
        case 0x341c34u: goto label_341c34;
        case 0x341c38u: goto label_341c38;
        case 0x341c3cu: goto label_341c3c;
        case 0x341c40u: goto label_341c40;
        case 0x341c44u: goto label_341c44;
        case 0x341c48u: goto label_341c48;
        case 0x341c4cu: goto label_341c4c;
        case 0x341c50u: goto label_341c50;
        case 0x341c54u: goto label_341c54;
        case 0x341c58u: goto label_341c58;
        case 0x341c5cu: goto label_341c5c;
        case 0x341c60u: goto label_341c60;
        case 0x341c64u: goto label_341c64;
        case 0x341c68u: goto label_341c68;
        case 0x341c6cu: goto label_341c6c;
        case 0x341c70u: goto label_341c70;
        case 0x341c74u: goto label_341c74;
        case 0x341c78u: goto label_341c78;
        case 0x341c7cu: goto label_341c7c;
        case 0x341c80u: goto label_341c80;
        case 0x341c84u: goto label_341c84;
        case 0x341c88u: goto label_341c88;
        case 0x341c8cu: goto label_341c8c;
        case 0x341c90u: goto label_341c90;
        case 0x341c94u: goto label_341c94;
        case 0x341c98u: goto label_341c98;
        case 0x341c9cu: goto label_341c9c;
        case 0x341ca0u: goto label_341ca0;
        case 0x341ca4u: goto label_341ca4;
        case 0x341ca8u: goto label_341ca8;
        case 0x341cacu: goto label_341cac;
        case 0x341cb0u: goto label_341cb0;
        case 0x341cb4u: goto label_341cb4;
        case 0x341cb8u: goto label_341cb8;
        case 0x341cbcu: goto label_341cbc;
        case 0x341cc0u: goto label_341cc0;
        case 0x341cc4u: goto label_341cc4;
        case 0x341cc8u: goto label_341cc8;
        case 0x341cccu: goto label_341ccc;
        case 0x341cd0u: goto label_341cd0;
        case 0x341cd4u: goto label_341cd4;
        case 0x341cd8u: goto label_341cd8;
        case 0x341cdcu: goto label_341cdc;
        case 0x341ce0u: goto label_341ce0;
        case 0x341ce4u: goto label_341ce4;
        case 0x341ce8u: goto label_341ce8;
        case 0x341cecu: goto label_341cec;
        case 0x341cf0u: goto label_341cf0;
        case 0x341cf4u: goto label_341cf4;
        case 0x341cf8u: goto label_341cf8;
        case 0x341cfcu: goto label_341cfc;
        case 0x341d00u: goto label_341d00;
        case 0x341d04u: goto label_341d04;
        case 0x341d08u: goto label_341d08;
        case 0x341d0cu: goto label_341d0c;
        case 0x341d10u: goto label_341d10;
        case 0x341d14u: goto label_341d14;
        case 0x341d18u: goto label_341d18;
        case 0x341d1cu: goto label_341d1c;
        case 0x341d20u: goto label_341d20;
        case 0x341d24u: goto label_341d24;
        case 0x341d28u: goto label_341d28;
        case 0x341d2cu: goto label_341d2c;
        case 0x341d30u: goto label_341d30;
        case 0x341d34u: goto label_341d34;
        case 0x341d38u: goto label_341d38;
        case 0x341d3cu: goto label_341d3c;
        case 0x341d40u: goto label_341d40;
        case 0x341d44u: goto label_341d44;
        case 0x341d48u: goto label_341d48;
        case 0x341d4cu: goto label_341d4c;
        case 0x341d50u: goto label_341d50;
        case 0x341d54u: goto label_341d54;
        case 0x341d58u: goto label_341d58;
        case 0x341d5cu: goto label_341d5c;
        case 0x341d60u: goto label_341d60;
        case 0x341d64u: goto label_341d64;
        case 0x341d68u: goto label_341d68;
        case 0x341d6cu: goto label_341d6c;
        case 0x341d70u: goto label_341d70;
        case 0x341d74u: goto label_341d74;
        case 0x341d78u: goto label_341d78;
        case 0x341d7cu: goto label_341d7c;
        case 0x341d80u: goto label_341d80;
        case 0x341d84u: goto label_341d84;
        case 0x341d88u: goto label_341d88;
        case 0x341d8cu: goto label_341d8c;
        case 0x341d90u: goto label_341d90;
        case 0x341d94u: goto label_341d94;
        case 0x341d98u: goto label_341d98;
        case 0x341d9cu: goto label_341d9c;
        case 0x341da0u: goto label_341da0;
        case 0x341da4u: goto label_341da4;
        case 0x341da8u: goto label_341da8;
        case 0x341dacu: goto label_341dac;
        case 0x341db0u: goto label_341db0;
        case 0x341db4u: goto label_341db4;
        case 0x341db8u: goto label_341db8;
        case 0x341dbcu: goto label_341dbc;
        case 0x341dc0u: goto label_341dc0;
        case 0x341dc4u: goto label_341dc4;
        case 0x341dc8u: goto label_341dc8;
        case 0x341dccu: goto label_341dcc;
        case 0x341dd0u: goto label_341dd0;
        case 0x341dd4u: goto label_341dd4;
        case 0x341dd8u: goto label_341dd8;
        case 0x341ddcu: goto label_341ddc;
        case 0x341de0u: goto label_341de0;
        case 0x341de4u: goto label_341de4;
        case 0x341de8u: goto label_341de8;
        case 0x341decu: goto label_341dec;
        case 0x341df0u: goto label_341df0;
        case 0x341df4u: goto label_341df4;
        case 0x341df8u: goto label_341df8;
        case 0x341dfcu: goto label_341dfc;
        case 0x341e00u: goto label_341e00;
        case 0x341e04u: goto label_341e04;
        case 0x341e08u: goto label_341e08;
        case 0x341e0cu: goto label_341e0c;
        case 0x341e10u: goto label_341e10;
        case 0x341e14u: goto label_341e14;
        case 0x341e18u: goto label_341e18;
        case 0x341e1cu: goto label_341e1c;
        case 0x341e20u: goto label_341e20;
        case 0x341e24u: goto label_341e24;
        case 0x341e28u: goto label_341e28;
        case 0x341e2cu: goto label_341e2c;
        case 0x341e30u: goto label_341e30;
        case 0x341e34u: goto label_341e34;
        case 0x341e38u: goto label_341e38;
        case 0x341e3cu: goto label_341e3c;
        case 0x341e40u: goto label_341e40;
        case 0x341e44u: goto label_341e44;
        case 0x341e48u: goto label_341e48;
        case 0x341e4cu: goto label_341e4c;
        case 0x341e50u: goto label_341e50;
        case 0x341e54u: goto label_341e54;
        case 0x341e58u: goto label_341e58;
        case 0x341e5cu: goto label_341e5c;
        case 0x341e60u: goto label_341e60;
        case 0x341e64u: goto label_341e64;
        case 0x341e68u: goto label_341e68;
        case 0x341e6cu: goto label_341e6c;
        case 0x341e70u: goto label_341e70;
        case 0x341e74u: goto label_341e74;
        case 0x341e78u: goto label_341e78;
        case 0x341e7cu: goto label_341e7c;
        case 0x341e80u: goto label_341e80;
        case 0x341e84u: goto label_341e84;
        case 0x341e88u: goto label_341e88;
        case 0x341e8cu: goto label_341e8c;
        case 0x341e90u: goto label_341e90;
        case 0x341e94u: goto label_341e94;
        case 0x341e98u: goto label_341e98;
        case 0x341e9cu: goto label_341e9c;
        case 0x341ea0u: goto label_341ea0;
        case 0x341ea4u: goto label_341ea4;
        case 0x341ea8u: goto label_341ea8;
        case 0x341eacu: goto label_341eac;
        case 0x341eb0u: goto label_341eb0;
        case 0x341eb4u: goto label_341eb4;
        case 0x341eb8u: goto label_341eb8;
        case 0x341ebcu: goto label_341ebc;
        case 0x341ec0u: goto label_341ec0;
        case 0x341ec4u: goto label_341ec4;
        case 0x341ec8u: goto label_341ec8;
        case 0x341eccu: goto label_341ecc;
        case 0x341ed0u: goto label_341ed0;
        case 0x341ed4u: goto label_341ed4;
        case 0x341ed8u: goto label_341ed8;
        case 0x341edcu: goto label_341edc;
        case 0x341ee0u: goto label_341ee0;
        case 0x341ee4u: goto label_341ee4;
        case 0x341ee8u: goto label_341ee8;
        case 0x341eecu: goto label_341eec;
        case 0x341ef0u: goto label_341ef0;
        case 0x341ef4u: goto label_341ef4;
        case 0x341ef8u: goto label_341ef8;
        case 0x341efcu: goto label_341efc;
        case 0x341f00u: goto label_341f00;
        case 0x341f04u: goto label_341f04;
        case 0x341f08u: goto label_341f08;
        case 0x341f0cu: goto label_341f0c;
        case 0x341f10u: goto label_341f10;
        case 0x341f14u: goto label_341f14;
        case 0x341f18u: goto label_341f18;
        case 0x341f1cu: goto label_341f1c;
        case 0x341f20u: goto label_341f20;
        case 0x341f24u: goto label_341f24;
        case 0x341f28u: goto label_341f28;
        case 0x341f2cu: goto label_341f2c;
        case 0x341f30u: goto label_341f30;
        case 0x341f34u: goto label_341f34;
        case 0x341f38u: goto label_341f38;
        case 0x341f3cu: goto label_341f3c;
        case 0x341f40u: goto label_341f40;
        case 0x341f44u: goto label_341f44;
        case 0x341f48u: goto label_341f48;
        case 0x341f4cu: goto label_341f4c;
        case 0x341f50u: goto label_341f50;
        case 0x341f54u: goto label_341f54;
        case 0x341f58u: goto label_341f58;
        case 0x341f5cu: goto label_341f5c;
        case 0x341f60u: goto label_341f60;
        case 0x341f64u: goto label_341f64;
        case 0x341f68u: goto label_341f68;
        case 0x341f6cu: goto label_341f6c;
        case 0x341f70u: goto label_341f70;
        case 0x341f74u: goto label_341f74;
        case 0x341f78u: goto label_341f78;
        case 0x341f7cu: goto label_341f7c;
        case 0x341f80u: goto label_341f80;
        case 0x341f84u: goto label_341f84;
        case 0x341f88u: goto label_341f88;
        case 0x341f8cu: goto label_341f8c;
        case 0x341f90u: goto label_341f90;
        case 0x341f94u: goto label_341f94;
        case 0x341f98u: goto label_341f98;
        case 0x341f9cu: goto label_341f9c;
        case 0x341fa0u: goto label_341fa0;
        case 0x341fa4u: goto label_341fa4;
        case 0x341fa8u: goto label_341fa8;
        case 0x341facu: goto label_341fac;
        case 0x341fb0u: goto label_341fb0;
        case 0x341fb4u: goto label_341fb4;
        case 0x341fb8u: goto label_341fb8;
        case 0x341fbcu: goto label_341fbc;
        case 0x341fc0u: goto label_341fc0;
        case 0x341fc4u: goto label_341fc4;
        case 0x341fc8u: goto label_341fc8;
        case 0x341fccu: goto label_341fcc;
        case 0x341fd0u: goto label_341fd0;
        case 0x341fd4u: goto label_341fd4;
        case 0x341fd8u: goto label_341fd8;
        case 0x341fdcu: goto label_341fdc;
        case 0x341fe0u: goto label_341fe0;
        case 0x341fe4u: goto label_341fe4;
        case 0x341fe8u: goto label_341fe8;
        case 0x341fecu: goto label_341fec;
        case 0x341ff0u: goto label_341ff0;
        case 0x341ff4u: goto label_341ff4;
        case 0x341ff8u: goto label_341ff8;
        case 0x341ffcu: goto label_341ffc;
        case 0x342000u: goto label_342000;
        case 0x342004u: goto label_342004;
        case 0x342008u: goto label_342008;
        case 0x34200cu: goto label_34200c;
        case 0x342010u: goto label_342010;
        case 0x342014u: goto label_342014;
        case 0x342018u: goto label_342018;
        case 0x34201cu: goto label_34201c;
        case 0x342020u: goto label_342020;
        case 0x342024u: goto label_342024;
        case 0x342028u: goto label_342028;
        case 0x34202cu: goto label_34202c;
        case 0x342030u: goto label_342030;
        case 0x342034u: goto label_342034;
        case 0x342038u: goto label_342038;
        case 0x34203cu: goto label_34203c;
        default: break;
    }

    ctx->pc = 0x341a38u;

label_341a38:
    // 0x341a38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x341a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_341a3c:
    // 0x341a3c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x341a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_341a40:
    // 0x341a40: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x341a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_341a44:
    // 0x341a44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x341a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341a48:
    // 0x341a48: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x341a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_341a4c:
    // 0x341a4c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x341a4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_341a50:
    // 0x341a50: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x341a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_341a54:
    // 0x341a54: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x341a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_341a58:
    // 0x341a58: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x341a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_341a5c:
    // 0x341a5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x341a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_341a60:
    // 0x341a60: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x341a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_341a64:
    // 0x341a64: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x341a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_341a68:
    // 0x341a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_341a6c:
    // 0x341a6c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x341a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_341a70:
    // 0x341a70: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x341a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_341a74:
    // 0x341a74: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x341a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_341a78:
    // 0x341a78: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x341a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_341a7c:
    // 0x341a7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x341a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_341a80:
    // 0x341a80: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
label_341a84:
    if (ctx->pc == 0x341A84u) {
        ctx->pc = 0x341A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A80u;
        // 0x341a84: 0x8e740018  lw          $s4, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A88u;
        goto label_341a88;
    }
    ctx->pc = 0x341A80u;
    {
        const bool branch_taken_0x341a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A80u;
        // 0x341a84: 0x8e740018  lw          $s4, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a80) {
            ctx->pc = 0x34200Cu;
            goto label_34200c;
        }
    }
    ctx->pc = 0x341A88u;
label_341a88:
    // 0x341a88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x341a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341a8c:
    // 0x341a8c: 0xc0d0988  jal         func_342620
label_341a90:
    if (ctx->pc == 0x341A90u) {
        ctx->pc = 0x341A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A8Cu;
        // 0x341a90: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A94u;
        goto label_341a94;
    }
    ctx->pc = 0x341A8Cu;
    SET_GPR_U32(ctx, 31, 0x341A94u);
    ctx->pc = 0x341A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A8Cu;
    // 0x341a90: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342620u, 0x341A8Cu, 0x341A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A94u;
label_341a94:
    // 0x341a94: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x341a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_341a98:
    // 0x341a98: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x341a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_341a9c:
    // 0x341a9c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_341aa0:
    if (ctx->pc == 0x341AA0u) {
        ctx->pc = 0x341AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A9Cu;
        // 0x341aa0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AA4u;
        goto label_341aa4;
    }
    ctx->pc = 0x341A9Cu;
    {
        const bool branch_taken_0x341a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x341AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A9Cu;
        // 0x341aa0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a9c) {
            ctx->pc = 0x341AD4u;
            goto label_341ad4;
        }
    }
    ctx->pc = 0x341AA4u;
label_341aa4:
    // 0x341aa4: 0x8c43c370  lw          $v1, -0x3C90($v0)
    ctx->pc = 0x341aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951792)));
label_341aa8:
    // 0x341aa8: 0x263a821  addu        $s5, $s3, $v1
    ctx->pc = 0x341aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_341aac:
    // 0x341aac: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x341aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_341ab0:
    // 0x341ab0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_341ab4:
    if (ctx->pc == 0x341AB4u) {
        ctx->pc = 0x341AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AB0u;
        // 0x341ab4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AB8u;
        goto label_341ab8;
    }
    ctx->pc = 0x341AB0u;
    {
        const bool branch_taken_0x341ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341ab0) {
            ctx->pc = 0x341AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341AB0u;
            // 0x341ab4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341ADCu;
            goto label_341adc;
        }
    }
    ctx->pc = 0x341AB8u;
label_341ab8:
    // 0x341ab8: 0xc0d12ee  jal         func_344BB8
label_341abc:
    if (ctx->pc == 0x341ABCu) {
        ctx->pc = 0x341ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AB8u;
        // 0x341abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AC0u;
        goto label_341ac0;
    }
    ctx->pc = 0x341AB8u;
    SET_GPR_U32(ctx, 31, 0x341AC0u);
    ctx->pc = 0x341ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341AB8u;
    // 0x341abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344BB8u, 0x341AB8u, 0x341AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341AC0u;
label_341ac0:
    // 0x341ac0: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x341ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_341ac4:
    // 0x341ac4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_341ac8:
    if (ctx->pc == 0x341AC8u) {
        ctx->pc = 0x341AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AC4u;
        // 0x341ac8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341ACCu;
        goto label_341acc;
    }
    ctx->pc = 0x341AC4u;
    {
        const bool branch_taken_0x341ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341ac4) {
            ctx->pc = 0x341AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341AC4u;
            // 0x341ac8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341ADCu;
            goto label_341adc;
        }
    }
    ctx->pc = 0x341ACCu;
label_341acc:
    // 0x341acc: 0x10000150  b           . + 4 + (0x150 << 2)
label_341ad0:
    if (ctx->pc == 0x341AD0u) {
        ctx->pc = 0x341AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341ACCu;
        // 0x341ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AD4u;
        goto label_341ad4;
    }
    ctx->pc = 0x341ACCu;
    {
        const bool branch_taken_0x341acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341ACCu;
        // 0x341ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341acc) {
            ctx->pc = 0x342010u;
            goto label_342010;
        }
    }
    ctx->pc = 0x341AD4u;
label_341ad4:
    // 0x341ad4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x341ad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341ad8:
    // 0x341ad8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x341ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_341adc:
    // 0x341adc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x341adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_341ae0:
    // 0x341ae0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_341ae4:
    if (ctx->pc == 0x341AE4u) {
        ctx->pc = 0x341AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AE0u;
        // 0x341ae4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AE8u;
        goto label_341ae8;
    }
    ctx->pc = 0x341AE0u;
    {
        const bool branch_taken_0x341ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AE0u;
        // 0x341ae4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ae0) {
            ctx->pc = 0x341B54u;
            goto label_341b54;
        }
    }
    ctx->pc = 0x341AE8u;
label_341ae8:
    // 0x341ae8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341aec:
    // 0x341aec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_341af0:
    if (ctx->pc == 0x341AF0u) {
        ctx->pc = 0x341AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AECu;
        // 0x341af0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AF4u;
        goto label_341af4;
    }
    ctx->pc = 0x341AECu;
    {
        const bool branch_taken_0x341aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AECu;
        // 0x341af0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341aec) {
            ctx->pc = 0x341AFCu;
            goto label_341afc;
        }
    }
    ctx->pc = 0x341AF4u;
label_341af4:
    // 0x341af4: 0xc0d526e  jal         func_3549B8
label_341af8:
    if (ctx->pc == 0x341AF8u) {
        ctx->pc = 0x341AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AF4u;
        // 0x341af8: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AFCu;
        goto label_341afc;
    }
    ctx->pc = 0x341AF4u;
    SET_GPR_U32(ctx, 31, 0x341AFCu);
    ctx->pc = 0x341AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341AF4u;
    // 0x341af8: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3549B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3549B8u, 0x341AF4u, 0x341AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341AFCu;
label_341afc:
    // 0x341afc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x341afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_341b00:
    // 0x341b00: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x341b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_341b04:
    // 0x341b04: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_341b08:
    if (ctx->pc == 0x341B08u) {
        ctx->pc = 0x341B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B04u;
        // 0x341b08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B0Cu;
        goto label_341b0c;
    }
    ctx->pc = 0x341B04u;
    {
        const bool branch_taken_0x341b04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B04u;
        // 0x341b08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b04) {
            ctx->pc = 0x341B54u;
            goto label_341b54;
        }
    }
    ctx->pc = 0x341B0Cu;
label_341b0c:
    // 0x341b0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x341b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341b10:
    // 0x341b10: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x341b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_341b14:
    // 0x341b14: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x341b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_341b18:
    // 0x341b18: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x341b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_341b1c:
    // 0x341b1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x341b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_341b20:
    // 0x341b20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_341b24:
    if (ctx->pc == 0x341B24u) {
        ctx->pc = 0x341B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B20u;
        // 0x341b24: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B28u;
        goto label_341b28;
    }
    ctx->pc = 0x341B20u;
    {
        const bool branch_taken_0x341b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B20u;
        // 0x341b24: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b20) {
            ctx->pc = 0x341B40u;
            goto label_341b40;
        }
    }
    ctx->pc = 0x341B28u;
label_341b28:
    // 0x341b28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x341b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341b2c:
    // 0x341b2c: 0x40f809  jalr        $v0
label_341b30:
    if (ctx->pc == 0x341B30u) {
        ctx->pc = 0x341B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B2Cu;
        // 0x341b30: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B34u;
        goto label_341b34;
    }
    ctx->pc = 0x341B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341B34u);
        ctx->pc = 0x341B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B2Cu;
        // 0x341b30: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B2Cu, 0x341B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341B34u;
label_341b34:
    // 0x341b34: 0x14530136  bne         $v0, $s3, . + 4 + (0x136 << 2)
label_341b38:
    if (ctx->pc == 0x341B38u) {
        ctx->pc = 0x341B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B34u;
        // 0x341b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B3Cu;
        goto label_341b3c;
    }
    ctx->pc = 0x341B34u;
    {
        const bool branch_taken_0x341b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x341B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B34u;
        // 0x341b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b34) {
            ctx->pc = 0x342010u;
            goto label_342010;
        }
    }
    ctx->pc = 0x341B3Cu;
label_341b3c:
    // 0x341b3c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x341b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_341b40:
    // 0x341b40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_341b44:
    // 0x341b44: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x341b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_341b48:
    // 0x341b48: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x341b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341b4c:
    // 0x341b4c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_341b50:
    if (ctx->pc == 0x341B50u) {
        ctx->pc = 0x341B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B4Cu;
        // 0x341b50: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B54u;
        goto label_341b54;
    }
    ctx->pc = 0x341B4Cu;
    {
        const bool branch_taken_0x341b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B4Cu;
        // 0x341b50: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b4c) {
            ctx->pc = 0x341B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341b10;
        }
    }
    ctx->pc = 0x341B54u;
label_341b54:
    // 0x341b54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x341b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_341b58:
    // 0x341b58: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x341b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_341b5c:
    // 0x341b5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x341b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_341b60:
    // 0x341b60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_341b64:
    if (ctx->pc == 0x341B64u) {
        ctx->pc = 0x341B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B60u;
        // 0x341b64: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B68u;
        goto label_341b68;
    }
    ctx->pc = 0x341B60u;
    {
        const bool branch_taken_0x341b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b60) {
            ctx->pc = 0x341B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B60u;
            // 0x341b64: 0x8e620020  lw          $v0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B78u;
            goto label_341b78;
        }
    }
    ctx->pc = 0x341B68u;
label_341b68:
    // 0x341b68: 0xc0e1fec  jal         func_387FB0
label_341b6c:
    if (ctx->pc == 0x341B6Cu) {
        ctx->pc = 0x341B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B68u;
        // 0x341b6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B70u;
        goto label_341b70;
    }
    ctx->pc = 0x341B68u;
    SET_GPR_U32(ctx, 31, 0x341B70u);
    ctx->pc = 0x341B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B68u;
    // 0x341b6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387FB0u, 0x341B68u, 0x341B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341B70u;
label_341b70:
    // 0x341b70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x341b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_341b74:
    // 0x341b74: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x341b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_341b78:
    // 0x341b78: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_341b7c:
    // 0x341b7c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x341b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_341b80:
    // 0x341b80: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x341b80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_341b84:
    // 0x341b84: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_341b88:
    if (ctx->pc == 0x341B88u) {
        ctx->pc = 0x341B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B84u;
        // 0x341b88: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B8Cu;
        goto label_341b8c;
    }
    ctx->pc = 0x341B84u;
    {
        const bool branch_taken_0x341b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B84u;
        // 0x341b88: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b84) {
            ctx->pc = 0x341CE0u;
            goto label_341ce0;
        }
    }
    ctx->pc = 0x341B8Cu;
label_341b8c:
    // 0x341b8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x341b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_341b90:
    // 0x341b90: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x341b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_341b94:
    // 0x341b94: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_341b98:
    if (ctx->pc == 0x341B98u) {
        ctx->pc = 0x341B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B94u;
        // 0x341b98: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B9Cu;
        goto label_341b9c;
    }
    ctx->pc = 0x341B94u;
    {
        const bool branch_taken_0x341b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b94) {
            ctx->pc = 0x341B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B94u;
            // 0x341b98: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341CE4u;
            goto label_341ce4;
        }
    }
    ctx->pc = 0x341B9Cu;
label_341b9c:
    // 0x341b9c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_341ba0:
    if (ctx->pc == 0x341BA0u) {
        ctx->pc = 0x341BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B9Cu;
        // 0x341ba0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BA4u;
        goto label_341ba4;
    }
    ctx->pc = 0x341B9Cu;
    {
        const bool branch_taken_0x341b9c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x341BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B9Cu;
        // 0x341ba0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b9c) {
            ctx->pc = 0x341BB8u;
            goto label_341bb8;
        }
    }
    ctx->pc = 0x341BA4u;
label_341ba4:
    // 0x341ba4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x341ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_341ba8:
    // 0x341ba8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x341ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_341bac:
    // 0x341bac: 0xc0d149a  jal         func_345268
label_341bb0:
    if (ctx->pc == 0x341BB0u) {
        ctx->pc = 0x341BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BACu;
        // 0x341bb0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BB4u;
        goto label_341bb4;
    }
    ctx->pc = 0x341BACu;
    SET_GPR_U32(ctx, 31, 0x341BB4u);
    ctx->pc = 0x341BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BACu;
    // 0x341bb0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345268u, 0x341BACu, 0x341BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BB4u;
label_341bb4:
    // 0x341bb4: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x341bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_341bb8:
    // 0x341bb8: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x341bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_341bbc:
    // 0x341bbc: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x341bbcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_341bc0:
    // 0x341bc0: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x341bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_341bc4:
    // 0x341bc4: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x341bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_341bc8:
    // 0x341bc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x341bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_341bcc:
    // 0x341bcc: 0x0  nop
    ctx->pc = 0x341bccu;
    // NOP
label_341bd0:
    // 0x341bd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x341bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_341bd4:
    // 0x341bd4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x341bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_341bd8:
    // 0x341bd8: 0x1c40001d  bgtz        $v0, . + 4 + (0x1D << 2)
label_341bdc:
    if (ctx->pc == 0x341BDCu) {
        ctx->pc = 0x341BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BD8u;
        // 0x341bdc: 0x8e160000  lw          $s6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BE0u;
        goto label_341be0;
    }
    ctx->pc = 0x341BD8u;
    {
        const bool branch_taken_0x341bd8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x341BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BD8u;
        // 0x341bdc: 0x8e160000  lw          $s6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bd8) {
            ctx->pc = 0x341C50u;
            goto label_341c50;
        }
    }
    ctx->pc = 0x341BE0u;
label_341be0:
    // 0x341be0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x341be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_341be4:
    // 0x341be4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_341be8:
    if (ctx->pc == 0x341BE8u) {
        ctx->pc = 0x341BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BE4u;
        // 0x341be8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BECu;
        goto label_341bec;
    }
    ctx->pc = 0x341BE4u;
    {
        const bool branch_taken_0x341be4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BE4u;
        // 0x341be8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341be4) {
            ctx->pc = 0x341C2Cu;
            goto label_341c2c;
        }
    }
    ctx->pc = 0x341BECu;
label_341bec:
    // 0x341bec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x341becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341bf0:
    // 0x341bf0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x341bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_341bf4:
    // 0x341bf4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x341bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_341bf8:
    // 0x341bf8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x341bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_341bfc:
    // 0x341bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341c00:
    if (ctx->pc == 0x341C00u) {
        ctx->pc = 0x341C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BFCu;
        // 0x341c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C04u;
        goto label_341c04;
    }
    ctx->pc = 0x341BFCu;
    {
        const bool branch_taken_0x341bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BFCu;
        // 0x341c00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bfc) {
            ctx->pc = 0x341C18u;
            goto label_341c18;
        }
    }
    ctx->pc = 0x341C04u;
label_341c04:
    // 0x341c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341c08:
    // 0x341c08: 0x40f809  jalr        $v0
label_341c0c:
    if (ctx->pc == 0x341C0Cu) {
        ctx->pc = 0x341C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C08u;
        // 0x341c0c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C10u;
        goto label_341c10;
    }
    ctx->pc = 0x341C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341C10u);
        ctx->pc = 0x341C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C08u;
        // 0x341c0c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C08u, 0x341C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341C10u;
label_341c10:
    // 0x341c10: 0x145000ff  bne         $v0, $s0, . + 4 + (0xFF << 2)
label_341c14:
    if (ctx->pc == 0x341C14u) {
        ctx->pc = 0x341C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C10u;
        // 0x341c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C18u;
        goto label_341c18;
    }
    ctx->pc = 0x341C10u;
    {
        const bool branch_taken_0x341c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x341C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C10u;
        // 0x341c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c10) {
            ctx->pc = 0x342010u;
            goto label_342010;
        }
    }
    ctx->pc = 0x341C18u;
label_341c18:
    // 0x341c18: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x341c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_341c1c:
    // 0x341c1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_341c20:
    // 0x341c20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x341c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341c24:
    // 0x341c24: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_341c28:
    if (ctx->pc == 0x341C28u) {
        ctx->pc = 0x341C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C24u;
        // 0x341c28: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C2Cu;
        goto label_341c2c;
    }
    ctx->pc = 0x341C24u;
    {
        const bool branch_taken_0x341c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C24u;
        // 0x341c28: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c24) {
            ctx->pc = 0x341BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341bf0;
        }
    }
    ctx->pc = 0x341C2Cu;
label_341c2c:
    // 0x341c2c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x341c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_341c30:
    // 0x341c30: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_341c34:
    if (ctx->pc == 0x341C34u) {
        ctx->pc = 0x341C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C30u;
        // 0x341c34: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C38u;
        goto label_341c38;
    }
    ctx->pc = 0x341C30u;
    {
        const bool branch_taken_0x341c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c30) {
            ctx->pc = 0x341C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341C30u;
            // 0x341c34: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341C40u;
            goto label_341c40;
        }
    }
    ctx->pc = 0x341C38u;
label_341c38:
    // 0x341c38: 0x10000003  b           . + 4 + (0x3 << 2)
label_341c3c:
    if (ctx->pc == 0x341C3Cu) {
        ctx->pc = 0x341C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C38u;
        // 0x341c3c: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C40u;
        goto label_341c40;
    }
    ctx->pc = 0x341C38u;
    {
        const bool branch_taken_0x341c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C38u;
        // 0x341c3c: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c38) {
            ctx->pc = 0x341C48u;
            goto label_341c48;
        }
    }
    ctx->pc = 0x341C40u;
label_341c40:
    // 0x341c40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x341c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_341c44:
    // 0x341c44: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x341c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_341c48:
    // 0x341c48: 0x10000020  b           . + 4 + (0x20 << 2)
label_341c4c:
    if (ctx->pc == 0x341C4Cu) {
        ctx->pc = 0x341C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C48u;
        // 0x341c4c: 0xae70001c  sw          $s0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C50u;
        goto label_341c50;
    }
    ctx->pc = 0x341C48u;
    {
        const bool branch_taken_0x341c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C48u;
        // 0x341c4c: 0xae70001c  sw          $s0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c48) {
            ctx->pc = 0x341CCCu;
            goto label_341ccc;
        }
    }
    ctx->pc = 0x341C50u;
label_341c50:
    // 0x341c50: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x341c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_341c54:
    // 0x341c54: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_341c58:
    if (ctx->pc == 0x341C58u) {
        ctx->pc = 0x341C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C54u;
        // 0x341c58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C5Cu;
        goto label_341c5c;
    }
    ctx->pc = 0x341C54u;
    {
        const bool branch_taken_0x341c54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C54u;
        // 0x341c58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c54) {
            ctx->pc = 0x341C9Cu;
            goto label_341c9c;
        }
    }
    ctx->pc = 0x341C5Cu;
label_341c5c:
    // 0x341c5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x341c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341c60:
    // 0x341c60: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x341c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_341c64:
    // 0x341c64: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x341c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_341c68:
    // 0x341c68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x341c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_341c6c:
    // 0x341c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341c70:
    if (ctx->pc == 0x341C70u) {
        ctx->pc = 0x341C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C6Cu;
        // 0x341c70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C74u;
        goto label_341c74;
    }
    ctx->pc = 0x341C6Cu;
    {
        const bool branch_taken_0x341c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C6Cu;
        // 0x341c70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c6c) {
            ctx->pc = 0x341C88u;
            goto label_341c88;
        }
    }
    ctx->pc = 0x341C74u;
label_341c74:
    // 0x341c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_341c78:
    // 0x341c78: 0x40f809  jalr        $v0
label_341c7c:
    if (ctx->pc == 0x341C7Cu) {
        ctx->pc = 0x341C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C78u;
        // 0x341c7c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C80u;
        goto label_341c80;
    }
    ctx->pc = 0x341C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341C80u);
        ctx->pc = 0x341C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C78u;
        // 0x341c7c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C78u, 0x341C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341C80u;
label_341c80:
    // 0x341c80: 0x145000e3  bne         $v0, $s0, . + 4 + (0xE3 << 2)
label_341c84:
    if (ctx->pc == 0x341C84u) {
        ctx->pc = 0x341C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C80u;
        // 0x341c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C88u;
        goto label_341c88;
    }
    ctx->pc = 0x341C80u;
    {
        const bool branch_taken_0x341c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x341C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C80u;
        // 0x341c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c80) {
            ctx->pc = 0x342010u;
            goto label_342010;
        }
    }
    ctx->pc = 0x341C88u;
label_341c88:
    // 0x341c88: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x341c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_341c8c:
    // 0x341c8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_341c90:
    // 0x341c90: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x341c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341c94:
    // 0x341c94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_341c98:
    if (ctx->pc == 0x341C98u) {
        ctx->pc = 0x341C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C94u;
        // 0x341c98: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C9Cu;
        goto label_341c9c;
    }
    ctx->pc = 0x341C94u;
    {
        const bool branch_taken_0x341c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C94u;
        // 0x341c98: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c94) {
            ctx->pc = 0x341C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341c60;
        }
    }
    ctx->pc = 0x341C9Cu;
label_341c9c:
    // 0x341c9c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x341c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_341ca0:
    // 0x341ca0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_341ca4:
    if (ctx->pc == 0x341CA4u) {
        ctx->pc = 0x341CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CA0u;
        // 0x341ca4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CA8u;
        goto label_341ca8;
    }
    ctx->pc = 0x341CA0u;
    {
        const bool branch_taken_0x341ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x341ca0) {
            ctx->pc = 0x341CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341CA0u;
            // 0x341ca4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341CB0u;
            goto label_341cb0;
        }
    }
    ctx->pc = 0x341CA8u;
label_341ca8:
    // 0x341ca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_341cac:
    if (ctx->pc == 0x341CACu) {
        ctx->pc = 0x341CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CA8u;
        // 0x341cac: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CB0u;
        goto label_341cb0;
    }
    ctx->pc = 0x341CA8u;
    {
        const bool branch_taken_0x341ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CA8u;
        // 0x341cac: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ca8) {
            ctx->pc = 0x341CB8u;
            goto label_341cb8;
        }
    }
    ctx->pc = 0x341CB0u;
label_341cb0:
    // 0x341cb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x341cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_341cb4:
    // 0x341cb4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x341cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_341cb8:
    // 0x341cb8: 0xae700020  sw          $s0, 0x20($s3)
    ctx->pc = 0x341cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 16));
label_341cbc:
    // 0x341cbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x341cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_341cc0:
    // 0x341cc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_341cc4:
    // 0x341cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_341cc8:
    // 0x341cc8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x341cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_341ccc:
    // 0x341ccc: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x341cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_341cd0:
    // 0x341cd0: 0x161effbf  bne         $s0, $fp, . + 4 + (-0x41 << 2)
label_341cd4:
    if (ctx->pc == 0x341CD4u) {
        ctx->pc = 0x341CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CD0u;
        // 0x341cd4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CD8u;
        goto label_341cd8;
    }
    ctx->pc = 0x341CD0u;
    {
        const bool branch_taken_0x341cd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        ctx->pc = 0x341CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CD0u;
        // 0x341cd4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341cd0) {
            ctx->pc = 0x341BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341bd0;
        }
    }
    ctx->pc = 0x341CD8u;
label_341cd8:
    // 0x341cd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_341cdc:
    if (ctx->pc == 0x341CDCu) {
        ctx->pc = 0x341CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CD8u;
        // 0x341cdc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CE0u;
        goto label_341ce0;
    }
    ctx->pc = 0x341CD8u;
    {
        const bool branch_taken_0x341cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CD8u;
        // 0x341cdc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341cd8) {
            ctx->pc = 0x341CECu;
            goto label_341cec;
        }
    }
    ctx->pc = 0x341CE0u;
label_341ce0:
    // 0x341ce0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x341ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_341ce4:
    // 0x341ce4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x341ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_341ce8:
    // 0x341ce8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_341cec:
    // 0x341cec: 0x12a0006a  beqz        $s5, . + 4 + (0x6A << 2)
label_341cf0:
    if (ctx->pc == 0x341CF0u) {
        ctx->pc = 0x341CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CECu;
        // 0x341cf0: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CF4u;
        goto label_341cf4;
    }
    ctx->pc = 0x341CECu;
    {
        const bool branch_taken_0x341cec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x341CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CECu;
        // 0x341cf0: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341cec) {
            ctx->pc = 0x341E98u;
            goto label_341e98;
        }
    }
    ctx->pc = 0x341CF4u;
label_341cf4:
    // 0x341cf4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x341cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_341cf8:
    // 0x341cf8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x341cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_341cfc:
    // 0x341cfc: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
label_341d00:
    if (ctx->pc == 0x341D00u) {
        ctx->pc = 0x341D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CFCu;
        // 0x341d00: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D04u;
        goto label_341d04;
    }
    ctx->pc = 0x341CFCu;
    {
        const bool branch_taken_0x341cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341cfc) {
            ctx->pc = 0x341D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341CFCu;
            // 0x341d00: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341E9Cu;
            goto label_341e9c;
        }
    }
    ctx->pc = 0x341D04u;
label_341d04:
    // 0x341d04: 0xc0d149a  jal         func_345268
label_341d08:
    if (ctx->pc == 0x341D08u) {
        ctx->pc = 0x341D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D04u;
        // 0x341d08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D0Cu;
        goto label_341d0c;
    }
    ctx->pc = 0x341D04u;
    SET_GPR_U32(ctx, 31, 0x341D0Cu);
    ctx->pc = 0x341D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341D04u;
    // 0x341d08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345268u, 0x341D04u, 0x341D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D0Cu;
label_341d0c:
    // 0x341d0c: 0xc0d434e  jal         func_350D38
label_341d10:
    if (ctx->pc == 0x341D10u) {
        ctx->pc = 0x341D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D0Cu;
        // 0x341d10: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D14u;
        goto label_341d14;
    }
    ctx->pc = 0x341D0Cu;
    SET_GPR_U32(ctx, 31, 0x341D14u);
    ctx->pc = 0x341D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341D0Cu;
    // 0x341d10: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D38u, 0x341D0Cu, 0x341D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D14u;
label_341d14:
    // 0x341d14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x341d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_341d18:
    // 0x341d18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x341d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_341d1c:
    // 0x341d1c: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
label_341d20:
    if (ctx->pc == 0x341D20u) {
        ctx->pc = 0x341D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D1Cu;
        // 0x341d20: 0x346d0001  ori         $t5, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D24u;
        goto label_341d24;
    }
    ctx->pc = 0x341D1Cu;
    {
        const bool branch_taken_0x341d1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D1Cu;
        // 0x341d20: 0x346d0001  ori         $t5, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d1c) {
            ctx->pc = 0x341E94u;
            goto label_341e94;
        }
    }
    ctx->pc = 0x341D24u;
label_341d24:
    // 0x341d24: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x341d24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_341d28:
    // 0x341d28: 0x8eac0020  lw          $t4, 0x20($s5)
    ctx->pc = 0x341d28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_341d2c:
    // 0x341d2c: 0x8eaa0024  lw          $t2, 0x24($s5)
    ctx->pc = 0x341d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_341d30:
    // 0x341d30: 0x91023  negu        $v0, $t1
    ctx->pc = 0x341d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_341d34:
    // 0x341d34: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x341d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_341d38:
    // 0x341d38: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x341d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_341d3c:
    // 0x341d3c: 0x8eab0008  lw          $t3, 0x8($s5)
    ctx->pc = 0x341d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_341d40:
    // 0x341d40: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x341d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_341d44:
    // 0x341d44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x341d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_341d48:
    // 0x341d48: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_341d4c:
    if (ctx->pc == 0x341D4Cu) {
        ctx->pc = 0x341D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D48u;
        // 0x341d4c: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D50u;
        goto label_341d50;
    }
    ctx->pc = 0x341D48u;
    {
        const bool branch_taken_0x341d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D48u;
        // 0x341d4c: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d48) {
            ctx->pc = 0x341DF8u;
            goto label_341df8;
        }
    }
    ctx->pc = 0x341D50u;
label_341d50:
    // 0x341d50: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x341d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_341d54:
    // 0x341d54: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_341d58:
    if (ctx->pc == 0x341D58u) {
        ctx->pc = 0x341D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D54u;
        // 0x341d58: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D5Cu;
        goto label_341d5c;
    }
    ctx->pc = 0x341D54u;
    {
        const bool branch_taken_0x341d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D54u;
        // 0x341d58: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d54) {
            ctx->pc = 0x341DC4u;
            goto label_341dc4;
        }
    }
    ctx->pc = 0x341D5Cu;
label_341d5c:
    // 0x341d5c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_341d60:
    if (ctx->pc == 0x341D60u) {
        ctx->pc = 0x341D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D5Cu;
        // 0x341d60: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D64u;
        goto label_341d64;
    }
    ctx->pc = 0x341D5Cu;
    {
        const bool branch_taken_0x341d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341d5c) {
            ctx->pc = 0x341D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341D5Cu;
            // 0x341d60: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D98u;
            goto label_341d98;
        }
    }
    ctx->pc = 0x341D64u;
label_341d64:
    // 0x341d64: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x341d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_341d68:
    // 0x341d68: 0x25880004  addiu       $t0, $t4, 0x4
    ctx->pc = 0x341d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_341d6c:
    // 0x341d6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x341d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_341d70:
    // 0x341d70: 0x25470004  addiu       $a3, $t2, 0x4
    ctx->pc = 0x341d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_341d74:
    // 0x341d74: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341d78:
    // 0x341d78: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x341d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_341d7c:
    // 0x341d7c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x341d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_341d80:
    // 0x341d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341d84:
    // 0x341d84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x341d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_341d88:
    // 0x341d88: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x341d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_341d8c:
    // 0x341d8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341d90:
    // 0x341d90: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x341d90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_341d94:
    // 0x341d94: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x341d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_341d98:
    // 0x341d98: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x341d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_341d9c:
    // 0x341d9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x341d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341da0:
    // 0x341da0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x341da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_341da4:
    // 0x341da4: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341da8:
    // 0x341da8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341dac:
    // 0x341dac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x341dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_341db0:
    // 0x341db0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x341db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_341db4:
    // 0x341db4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x341db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_341db8:
    // 0x341db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341dbc:
    // 0x341dbc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x341dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_341dc0:
    // 0x341dc0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x341dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_341dc4:
    // 0x341dc4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x341dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_341dc8:
    // 0x341dc8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x341dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_341dcc:
    // 0x341dcc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341dd0:
    // 0x341dd0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x341dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_341dd4:
    // 0x341dd4: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341dd8:
    // 0x341dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341ddc:
    // 0x341ddc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x341ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_341de0:
    // 0x341de0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x341de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_341de4:
    // 0x341de4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x341de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_341de8:
    // 0x341de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341dec:
    // 0x341dec: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x341decu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_341df0:
    // 0x341df0: 0x11200028  beqz        $t1, . + 4 + (0x28 << 2)
label_341df4:
    if (ctx->pc == 0x341DF4u) {
        ctx->pc = 0x341DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DF0u;
        // 0x341df4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DF8u;
        goto label_341df8;
    }
    ctx->pc = 0x341DF0u;
    {
        const bool branch_taken_0x341df0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x341DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DF0u;
        // 0x341df4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341df0) {
            ctx->pc = 0x341E94u;
            goto label_341e94;
        }
    }
    ctx->pc = 0x341DF8u;
label_341df8:
    // 0x341df8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x341df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341dfc:
    // 0x341dfc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x341dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_341e00:
    // 0x341e00: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x341e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_341e04:
    // 0x341e04: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
label_341e08:
    // 0x341e08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x341e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_341e0c:
    // 0x341e0c: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341e10:
    // 0x341e10: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x341e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_341e14:
    // 0x341e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e18:
    // 0x341e18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x341e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_341e1c:
    // 0x341e1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x341e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_341e20:
    // 0x341e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e24:
    // 0x341e24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x341e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_341e28:
    // 0x341e28: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341e2c:
    // 0x341e2c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x341e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_341e30:
    // 0x341e30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x341e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_341e34:
    // 0x341e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e38:
    // 0x341e38: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x341e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_341e3c:
    // 0x341e3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x341e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_341e40:
    // 0x341e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e44:
    // 0x341e44: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x341e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_341e48:
    // 0x341e48: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341e4c:
    // 0x341e4c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_341e50:
    // 0x341e50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x341e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_341e54:
    // 0x341e54: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x341e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_341e58:
    // 0x341e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e5c:
    // 0x341e5c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x341e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_341e60:
    // 0x341e60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x341e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_341e64:
    // 0x341e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e68:
    // 0x341e68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x341e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_341e6c:
    // 0x341e6c: 0x1661818  mult        $v1, $t3, $a2
    ctx->pc = 0x341e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_341e70:
    // 0x341e70: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x341e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_341e74:
    // 0x341e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e78:
    // 0x341e78: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x341e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_341e7c:
    // 0x341e7c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x341e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_341e80:
    // 0x341e80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x341e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_341e84:
    // 0x341e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x341e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_341e88:
    // 0x341e88: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x341e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_341e8c:
    // 0x341e8c: 0x1520ffdc  bnez        $t1, . + 4 + (-0x24 << 2)
label_341e90:
    if (ctx->pc == 0x341E90u) {
        ctx->pc = 0x341E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E8Cu;
        // 0x341e90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E94u;
        goto label_341e94;
    }
    ctx->pc = 0x341E8Cu;
    {
        const bool branch_taken_0x341e8c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E8Cu;
        // 0x341e90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e8c) {
            ctx->pc = 0x341E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341e00;
        }
    }
    ctx->pc = 0x341E94u;
label_341e94:
    // 0x341e94: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x341e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
label_341e98:
    // 0x341e98: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x341e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_341e9c:
    // 0x341e9c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x341e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_341ea0:
    // 0x341ea0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_341ea4:
    if (ctx->pc == 0x341EA4u) {
        ctx->pc = 0x341EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EA0u;
        // 0x341ea4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EA8u;
        goto label_341ea8;
    }
    ctx->pc = 0x341EA0u;
    {
        const bool branch_taken_0x341ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EA0u;
        // 0x341ea4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ea0) {
            ctx->pc = 0x341F2Cu;
            goto label_341f2c;
        }
    }
    ctx->pc = 0x341EA8u;
label_341ea8:
    // 0x341ea8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_341eac:
    if (ctx->pc == 0x341EACu) {
        ctx->pc = 0x341EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EA8u;
        // 0x341eac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EB0u;
        goto label_341eb0;
    }
    ctx->pc = 0x341EA8u;
    {
        const bool branch_taken_0x341ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EA8u;
        // 0x341eac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ea8) {
            ctx->pc = 0x341ECCu;
            goto label_341ecc;
        }
    }
    ctx->pc = 0x341EB0u;
label_341eb0:
    // 0x341eb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x341eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_341eb4:
    // 0x341eb4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x341eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_341eb8:
    // 0x341eb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_341ebc:
    if (ctx->pc == 0x341EBCu) {
        ctx->pc = 0x341EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EB8u;
        // 0x341ebc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EC0u;
        goto label_341ec0;
    }
    ctx->pc = 0x341EB8u;
    {
        const bool branch_taken_0x341eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EB8u;
        // 0x341ebc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341eb8) {
            ctx->pc = 0x341ECCu;
            goto label_341ecc;
        }
    }
    ctx->pc = 0x341EC0u;
label_341ec0:
    // 0x341ec0: 0xc0d526e  jal         func_3549B8
label_341ec4:
    if (ctx->pc == 0x341EC4u) {
        ctx->pc = 0x341EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EC0u;
        // 0x341ec4: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EC8u;
        goto label_341ec8;
    }
    ctx->pc = 0x341EC0u;
    SET_GPR_U32(ctx, 31, 0x341EC8u);
    ctx->pc = 0x341EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EC0u;
    // 0x341ec4: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3549B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3549B8u, 0x341EC0u, 0x341EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341EC8u;
label_341ec8:
    // 0x341ec8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x341ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_341ecc:
    // 0x341ecc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x341eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_341ed0:
    // 0x341ed0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x341ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_341ed4:
    // 0x341ed4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x341ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_341ed8:
    // 0x341ed8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x341ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_341edc:
    // 0x341edc: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_341ee0:
    if (ctx->pc == 0x341EE0u) {
        ctx->pc = 0x341EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EDCu;
        // 0x341ee0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EE4u;
        goto label_341ee4;
    }
    ctx->pc = 0x341EDCu;
    {
        const bool branch_taken_0x341edc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EDCu;
        // 0x341ee0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341edc) {
            ctx->pc = 0x341F2Cu;
            goto label_341f2c;
        }
    }
    ctx->pc = 0x341EE4u;
label_341ee4:
    // 0x341ee4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x341ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341ee8:
    // 0x341ee8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x341ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_341eec:
    // 0x341eec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x341eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_341ef0:
    // 0x341ef0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x341ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_341ef4:
    // 0x341ef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x341ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_341ef8:
    // 0x341ef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341efc:
    if (ctx->pc == 0x341EFCu) {
        ctx->pc = 0x341EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EF8u;
        // 0x341efc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F00u;
        goto label_341f00;
    }
    ctx->pc = 0x341EF8u;
    {
        const bool branch_taken_0x341ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EF8u;
        // 0x341efc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ef8) {
            ctx->pc = 0x341F14u;
            goto label_341f14;
        }
    }
    ctx->pc = 0x341F00u;
label_341f00:
    // 0x341f00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x341f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341f04:
    // 0x341f04: 0x40f809  jalr        $v0
label_341f08:
    if (ctx->pc == 0x341F08u) {
        ctx->pc = 0x341F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F04u;
        // 0x341f08: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F0Cu;
        goto label_341f0c;
    }
    ctx->pc = 0x341F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341F0Cu);
        ctx->pc = 0x341F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F04u;
        // 0x341f08: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341F04u, 0x341F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341F0Cu;
label_341f0c:
    // 0x341f0c: 0x14530040  bne         $v0, $s3, . + 4 + (0x40 << 2)
label_341f10:
    if (ctx->pc == 0x341F10u) {
        ctx->pc = 0x341F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F0Cu;
        // 0x341f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F14u;
        goto label_341f14;
    }
    ctx->pc = 0x341F0Cu;
    {
        const bool branch_taken_0x341f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x341F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F0Cu;
        // 0x341f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f0c) {
            ctx->pc = 0x342010u;
            goto label_342010;
        }
    }
    ctx->pc = 0x341F14u;
label_341f14:
    // 0x341f14: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x341f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_341f18:
    // 0x341f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_341f1c:
    // 0x341f1c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x341f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_341f20:
    // 0x341f20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x341f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341f24:
    // 0x341f24: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_341f28:
    if (ctx->pc == 0x341F28u) {
        ctx->pc = 0x341F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F24u;
        // 0x341f28: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F2Cu;
        goto label_341f2c;
    }
    ctx->pc = 0x341F24u;
    {
        const bool branch_taken_0x341f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F24u;
        // 0x341f28: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f24) {
            ctx->pc = 0x341EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341ee8;
        }
    }
    ctx->pc = 0x341F2Cu;
label_341f2c:
    // 0x341f2c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_341f30:
    if (ctx->pc == 0x341F30u) {
        ctx->pc = 0x341F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F2Cu;
        // 0x341f30: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F34u;
        goto label_341f34;
    }
    ctx->pc = 0x341F2Cu;
    {
        const bool branch_taken_0x341f2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x341F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F2Cu;
        // 0x341f30: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f2c) {
            ctx->pc = 0x341F68u;
            goto label_341f68;
        }
    }
    ctx->pc = 0x341F34u;
label_341f34:
    // 0x341f34: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x341f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_341f38:
    // 0x341f38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_341f3c:
    if (ctx->pc == 0x341F3Cu) {
        ctx->pc = 0x341F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F38u;
        // 0x341f3c: 0x8f83a858  lw          $v1, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F40u;
        goto label_341f40;
    }
    ctx->pc = 0x341F38u;
    {
        const bool branch_taken_0x341f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F38u;
        // 0x341f3c: 0x8f83a858  lw          $v1, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f38) {
            ctx->pc = 0x341F68u;
            goto label_341f68;
        }
    }
    ctx->pc = 0x341F40u;
label_341f40:
    // 0x341f40: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x341f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
label_341f44:
    // 0x341f44: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x341f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_341f48:
    // 0x341f48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x341f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_341f4c:
    // 0x341f4c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x341f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341f50:
    // 0x341f50: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_341f54:
    // 0x341f54: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x341f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_341f58:
    // 0x341f58: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x341f58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_341f5c:
    // 0x341f5c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x341f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_341f60:
    // 0x341f60: 0xc0d43be  jal         func_350EF8
label_341f64:
    if (ctx->pc == 0x341F64u) {
        ctx->pc = 0x341F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F60u;
        // 0x341f64: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F68u;
        goto label_341f68;
    }
    ctx->pc = 0x341F60u;
    SET_GPR_U32(ctx, 31, 0x341F68u);
    ctx->pc = 0x341F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341F60u;
    // 0x341f64: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350EF8u, 0x341F60u, 0x341F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F68u;
label_341f68:
    // 0x341f68: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x341f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_341f6c:
    // 0x341f6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x341f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_341f70:
    // 0x341f70: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_341f74:
    if (ctx->pc == 0x341F74u) {
        ctx->pc = 0x341F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F70u;
        // 0x341f74: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F78u;
        goto label_341f78;
    }
    ctx->pc = 0x341F70u;
    {
        const bool branch_taken_0x341f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F70u;
        // 0x341f74: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f70) {
            ctx->pc = 0x341FCCu;
            goto label_341fcc;
        }
    }
    ctx->pc = 0x341F78u;
label_341f78:
    // 0x341f78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x341f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_341f7c:
    // 0x341f7c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_341f80:
    if (ctx->pc == 0x341F80u) {
        ctx->pc = 0x341F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F7Cu;
        // 0x341f80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F84u;
        goto label_341f84;
    }
    ctx->pc = 0x341F7Cu;
    {
        const bool branch_taken_0x341f7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x341F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F7Cu;
        // 0x341f80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f7c) {
            ctx->pc = 0x341FCCu;
            goto label_341fcc;
        }
    }
    ctx->pc = 0x341F84u;
label_341f84:
    // 0x341f84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x341f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341f88:
    // 0x341f88: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x341f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_341f8c:
    // 0x341f8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x341f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_341f90:
    // 0x341f90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x341f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_341f94:
    // 0x341f94: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x341f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_341f98:
    // 0x341f98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_341f9c:
    if (ctx->pc == 0x341F9Cu) {
        ctx->pc = 0x341F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F98u;
        // 0x341f9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FA0u;
        goto label_341fa0;
    }
    ctx->pc = 0x341F98u;
    {
        const bool branch_taken_0x341f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F98u;
        // 0x341f9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f98) {
            ctx->pc = 0x341FB4u;
            goto label_341fb4;
        }
    }
    ctx->pc = 0x341FA0u;
label_341fa0:
    // 0x341fa0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x341fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_341fa4:
    // 0x341fa4: 0x40f809  jalr        $v0
label_341fa8:
    if (ctx->pc == 0x341FA8u) {
        ctx->pc = 0x341FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FA4u;
        // 0x341fa8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FACu;
        goto label_341fac;
    }
    ctx->pc = 0x341FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341FACu);
        ctx->pc = 0x341FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FA4u;
        // 0x341fa8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341FA4u, 0x341FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341FACu;
label_341fac:
    // 0x341fac: 0x14530018  bne         $v0, $s3, . + 4 + (0x18 << 2)
label_341fb0:
    if (ctx->pc == 0x341FB0u) {
        ctx->pc = 0x341FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FACu;
        // 0x341fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FB4u;
        goto label_341fb4;
    }
    ctx->pc = 0x341FACu;
    {
        const bool branch_taken_0x341fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x341FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FACu;
        // 0x341fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341fac) {
            ctx->pc = 0x342010u;
            goto label_342010;
        }
    }
    ctx->pc = 0x341FB4u;
label_341fb4:
    // 0x341fb4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x341fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_341fb8:
    // 0x341fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_341fbc:
    // 0x341fbc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x341fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_341fc0:
    // 0x341fc0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x341fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_341fc4:
    // 0x341fc4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_341fc8:
    if (ctx->pc == 0x341FC8u) {
        ctx->pc = 0x341FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FC4u;
        // 0x341fc8: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FCCu;
        goto label_341fcc;
    }
    ctx->pc = 0x341FC4u;
    {
        const bool branch_taken_0x341fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FC4u;
        // 0x341fc8: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341fc4) {
            ctx->pc = 0x341F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341f88;
        }
    }
    ctx->pc = 0x341FCCu;
label_341fcc:
    // 0x341fcc: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x341fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341fd0:
    // 0x341fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_341fd4:
    // 0x341fd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x341fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_341fd8:
    // 0x341fd8: 0x0  nop
    ctx->pc = 0x341fd8u;
    // NOP
label_341fdc:
    // 0x341fdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_341fe0:
    if (ctx->pc == 0x341FE0u) {
        ctx->pc = 0x341FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FDCu;
        // 0x341fe0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FE4u;
        goto label_341fe4;
    }
    ctx->pc = 0x341FDCu;
    {
        const bool branch_taken_0x341fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x341FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FDCu;
        // 0x341fe0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341fdc) {
            ctx->pc = 0x341FF8u;
            goto label_341ff8;
        }
    }
    ctx->pc = 0x341FE4u;
label_341fe4:
    // 0x341fe4: 0x46010004  c1          0x10004
    ctx->pc = 0x341fe4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_341fe8:
    // 0x341fe8: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x341fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_341fec:
    // 0x341fec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x341fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_341ff0:
    // 0x341ff0: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x341ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341ff4:
    // 0x341ff4: 0x0  nop
    ctx->pc = 0x341ff4u;
    // NOP
label_341ff8:
    // 0x341ff8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x341ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_341ffc:
    // 0x341ffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x341ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_342000:
    // 0x342000: 0x0  nop
    ctx->pc = 0x342000u;
    // NOP
label_342004:
    // 0x342004: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_342008:
    if (ctx->pc == 0x342008u) {
        ctx->pc = 0x342008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342004u;
        // 0x342008: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34200Cu;
        goto label_34200c;
    }
    ctx->pc = 0x342004u;
    {
        const bool branch_taken_0x342004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x342004) {
            ctx->pc = 0x342008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342004u;
            // 0x342008: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34200Cu;
            goto label_34200c;
        }
    }
    ctx->pc = 0x34200Cu;
label_34200c:
    // 0x34200c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x34200cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_342010:
    // 0x342010: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x342010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_342014:
    // 0x342014: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x342014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_342018:
    // 0x342018: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x342018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_34201c:
    // 0x34201c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x34201cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_342020:
    // 0x342020: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x342020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_342024:
    // 0x342024: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x342024u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_342028:
    // 0x342028: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x342028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34202c:
    // 0x34202c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x34202cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_342030:
    // 0x342030: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x342030u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342034:
    // 0x342034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_342038:
    // 0x342038: 0x3e00008  jr          $ra
label_34203c:
    if (ctx->pc == 0x34203Cu) {
        ctx->pc = 0x34203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342038u;
        // 0x34203c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342040u;
        goto label_fallthrough_0x342038;
    }
    ctx->pc = 0x342038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342038u;
        // 0x34203c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x342038:
    ctx->pc = 0x342040u;
}
