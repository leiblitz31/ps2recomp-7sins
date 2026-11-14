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

// Function: sub_004098D0
// Address: 0x4098d0 - 0x409ed8
void sub_004098D0_0x4098d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004098D0_0x4098d0");
#endif

    switch (ctx->pc) {
        case 0x4098d0u: goto label_4098d0;
        case 0x4098d4u: goto label_4098d4;
        case 0x4098d8u: goto label_4098d8;
        case 0x4098dcu: goto label_4098dc;
        case 0x4098e0u: goto label_4098e0;
        case 0x4098e4u: goto label_4098e4;
        case 0x4098e8u: goto label_4098e8;
        case 0x4098ecu: goto label_4098ec;
        case 0x4098f0u: goto label_4098f0;
        case 0x4098f4u: goto label_4098f4;
        case 0x4098f8u: goto label_4098f8;
        case 0x4098fcu: goto label_4098fc;
        case 0x409900u: goto label_409900;
        case 0x409904u: goto label_409904;
        case 0x409908u: goto label_409908;
        case 0x40990cu: goto label_40990c;
        case 0x409910u: goto label_409910;
        case 0x409914u: goto label_409914;
        case 0x409918u: goto label_409918;
        case 0x40991cu: goto label_40991c;
        case 0x409920u: goto label_409920;
        case 0x409924u: goto label_409924;
        case 0x409928u: goto label_409928;
        case 0x40992cu: goto label_40992c;
        case 0x409930u: goto label_409930;
        case 0x409934u: goto label_409934;
        case 0x409938u: goto label_409938;
        case 0x40993cu: goto label_40993c;
        case 0x409940u: goto label_409940;
        case 0x409944u: goto label_409944;
        case 0x409948u: goto label_409948;
        case 0x40994cu: goto label_40994c;
        case 0x409950u: goto label_409950;
        case 0x409954u: goto label_409954;
        case 0x409958u: goto label_409958;
        case 0x40995cu: goto label_40995c;
        case 0x409960u: goto label_409960;
        case 0x409964u: goto label_409964;
        case 0x409968u: goto label_409968;
        case 0x40996cu: goto label_40996c;
        case 0x409970u: goto label_409970;
        case 0x409974u: goto label_409974;
        case 0x409978u: goto label_409978;
        case 0x40997cu: goto label_40997c;
        case 0x409980u: goto label_409980;
        case 0x409984u: goto label_409984;
        case 0x409988u: goto label_409988;
        case 0x40998cu: goto label_40998c;
        case 0x409990u: goto label_409990;
        case 0x409994u: goto label_409994;
        case 0x409998u: goto label_409998;
        case 0x40999cu: goto label_40999c;
        case 0x4099a0u: goto label_4099a0;
        case 0x4099a4u: goto label_4099a4;
        case 0x4099a8u: goto label_4099a8;
        case 0x4099acu: goto label_4099ac;
        case 0x4099b0u: goto label_4099b0;
        case 0x4099b4u: goto label_4099b4;
        case 0x4099b8u: goto label_4099b8;
        case 0x4099bcu: goto label_4099bc;
        case 0x4099c0u: goto label_4099c0;
        case 0x4099c4u: goto label_4099c4;
        case 0x4099c8u: goto label_4099c8;
        case 0x4099ccu: goto label_4099cc;
        case 0x4099d0u: goto label_4099d0;
        case 0x4099d4u: goto label_4099d4;
        case 0x4099d8u: goto label_4099d8;
        case 0x4099dcu: goto label_4099dc;
        case 0x4099e0u: goto label_4099e0;
        case 0x4099e4u: goto label_4099e4;
        case 0x4099e8u: goto label_4099e8;
        case 0x4099ecu: goto label_4099ec;
        case 0x4099f0u: goto label_4099f0;
        case 0x4099f4u: goto label_4099f4;
        case 0x4099f8u: goto label_4099f8;
        case 0x4099fcu: goto label_4099fc;
        case 0x409a00u: goto label_409a00;
        case 0x409a04u: goto label_409a04;
        case 0x409a08u: goto label_409a08;
        case 0x409a0cu: goto label_409a0c;
        case 0x409a10u: goto label_409a10;
        case 0x409a14u: goto label_409a14;
        case 0x409a18u: goto label_409a18;
        case 0x409a1cu: goto label_409a1c;
        case 0x409a20u: goto label_409a20;
        case 0x409a24u: goto label_409a24;
        case 0x409a28u: goto label_409a28;
        case 0x409a2cu: goto label_409a2c;
        case 0x409a30u: goto label_409a30;
        case 0x409a34u: goto label_409a34;
        case 0x409a38u: goto label_409a38;
        case 0x409a3cu: goto label_409a3c;
        case 0x409a40u: goto label_409a40;
        case 0x409a44u: goto label_409a44;
        case 0x409a48u: goto label_409a48;
        case 0x409a4cu: goto label_409a4c;
        case 0x409a50u: goto label_409a50;
        case 0x409a54u: goto label_409a54;
        case 0x409a58u: goto label_409a58;
        case 0x409a5cu: goto label_409a5c;
        case 0x409a60u: goto label_409a60;
        case 0x409a64u: goto label_409a64;
        case 0x409a68u: goto label_409a68;
        case 0x409a6cu: goto label_409a6c;
        case 0x409a70u: goto label_409a70;
        case 0x409a74u: goto label_409a74;
        case 0x409a78u: goto label_409a78;
        case 0x409a7cu: goto label_409a7c;
        case 0x409a80u: goto label_409a80;
        case 0x409a84u: goto label_409a84;
        case 0x409a88u: goto label_409a88;
        case 0x409a8cu: goto label_409a8c;
        case 0x409a90u: goto label_409a90;
        case 0x409a94u: goto label_409a94;
        case 0x409a98u: goto label_409a98;
        case 0x409a9cu: goto label_409a9c;
        case 0x409aa0u: goto label_409aa0;
        case 0x409aa4u: goto label_409aa4;
        case 0x409aa8u: goto label_409aa8;
        case 0x409aacu: goto label_409aac;
        case 0x409ab0u: goto label_409ab0;
        case 0x409ab4u: goto label_409ab4;
        case 0x409ab8u: goto label_409ab8;
        case 0x409abcu: goto label_409abc;
        case 0x409ac0u: goto label_409ac0;
        case 0x409ac4u: goto label_409ac4;
        case 0x409ac8u: goto label_409ac8;
        case 0x409accu: goto label_409acc;
        case 0x409ad0u: goto label_409ad0;
        case 0x409ad4u: goto label_409ad4;
        case 0x409ad8u: goto label_409ad8;
        case 0x409adcu: goto label_409adc;
        case 0x409ae0u: goto label_409ae0;
        case 0x409ae4u: goto label_409ae4;
        case 0x409ae8u: goto label_409ae8;
        case 0x409aecu: goto label_409aec;
        case 0x409af0u: goto label_409af0;
        case 0x409af4u: goto label_409af4;
        case 0x409af8u: goto label_409af8;
        case 0x409afcu: goto label_409afc;
        case 0x409b00u: goto label_409b00;
        case 0x409b04u: goto label_409b04;
        case 0x409b08u: goto label_409b08;
        case 0x409b0cu: goto label_409b0c;
        case 0x409b10u: goto label_409b10;
        case 0x409b14u: goto label_409b14;
        case 0x409b18u: goto label_409b18;
        case 0x409b1cu: goto label_409b1c;
        case 0x409b20u: goto label_409b20;
        case 0x409b24u: goto label_409b24;
        case 0x409b28u: goto label_409b28;
        case 0x409b2cu: goto label_409b2c;
        case 0x409b30u: goto label_409b30;
        case 0x409b34u: goto label_409b34;
        case 0x409b38u: goto label_409b38;
        case 0x409b3cu: goto label_409b3c;
        case 0x409b40u: goto label_409b40;
        case 0x409b44u: goto label_409b44;
        case 0x409b48u: goto label_409b48;
        case 0x409b4cu: goto label_409b4c;
        case 0x409b50u: goto label_409b50;
        case 0x409b54u: goto label_409b54;
        case 0x409b58u: goto label_409b58;
        case 0x409b5cu: goto label_409b5c;
        case 0x409b60u: goto label_409b60;
        case 0x409b64u: goto label_409b64;
        case 0x409b68u: goto label_409b68;
        case 0x409b6cu: goto label_409b6c;
        case 0x409b70u: goto label_409b70;
        case 0x409b74u: goto label_409b74;
        case 0x409b78u: goto label_409b78;
        case 0x409b7cu: goto label_409b7c;
        case 0x409b80u: goto label_409b80;
        case 0x409b84u: goto label_409b84;
        case 0x409b88u: goto label_409b88;
        case 0x409b8cu: goto label_409b8c;
        case 0x409b90u: goto label_409b90;
        case 0x409b94u: goto label_409b94;
        case 0x409b98u: goto label_409b98;
        case 0x409b9cu: goto label_409b9c;
        case 0x409ba0u: goto label_409ba0;
        case 0x409ba4u: goto label_409ba4;
        case 0x409ba8u: goto label_409ba8;
        case 0x409bacu: goto label_409bac;
        case 0x409bb0u: goto label_409bb0;
        case 0x409bb4u: goto label_409bb4;
        case 0x409bb8u: goto label_409bb8;
        case 0x409bbcu: goto label_409bbc;
        case 0x409bc0u: goto label_409bc0;
        case 0x409bc4u: goto label_409bc4;
        case 0x409bc8u: goto label_409bc8;
        case 0x409bccu: goto label_409bcc;
        case 0x409bd0u: goto label_409bd0;
        case 0x409bd4u: goto label_409bd4;
        case 0x409bd8u: goto label_409bd8;
        case 0x409bdcu: goto label_409bdc;
        case 0x409be0u: goto label_409be0;
        case 0x409be4u: goto label_409be4;
        case 0x409be8u: goto label_409be8;
        case 0x409becu: goto label_409bec;
        case 0x409bf0u: goto label_409bf0;
        case 0x409bf4u: goto label_409bf4;
        case 0x409bf8u: goto label_409bf8;
        case 0x409bfcu: goto label_409bfc;
        case 0x409c00u: goto label_409c00;
        case 0x409c04u: goto label_409c04;
        case 0x409c08u: goto label_409c08;
        case 0x409c0cu: goto label_409c0c;
        case 0x409c10u: goto label_409c10;
        case 0x409c14u: goto label_409c14;
        case 0x409c18u: goto label_409c18;
        case 0x409c1cu: goto label_409c1c;
        case 0x409c20u: goto label_409c20;
        case 0x409c24u: goto label_409c24;
        case 0x409c28u: goto label_409c28;
        case 0x409c2cu: goto label_409c2c;
        case 0x409c30u: goto label_409c30;
        case 0x409c34u: goto label_409c34;
        case 0x409c38u: goto label_409c38;
        case 0x409c3cu: goto label_409c3c;
        case 0x409c40u: goto label_409c40;
        case 0x409c44u: goto label_409c44;
        case 0x409c48u: goto label_409c48;
        case 0x409c4cu: goto label_409c4c;
        case 0x409c50u: goto label_409c50;
        case 0x409c54u: goto label_409c54;
        case 0x409c58u: goto label_409c58;
        case 0x409c5cu: goto label_409c5c;
        case 0x409c60u: goto label_409c60;
        case 0x409c64u: goto label_409c64;
        case 0x409c68u: goto label_409c68;
        case 0x409c6cu: goto label_409c6c;
        case 0x409c70u: goto label_409c70;
        case 0x409c74u: goto label_409c74;
        case 0x409c78u: goto label_409c78;
        case 0x409c7cu: goto label_409c7c;
        case 0x409c80u: goto label_409c80;
        case 0x409c84u: goto label_409c84;
        case 0x409c88u: goto label_409c88;
        case 0x409c8cu: goto label_409c8c;
        case 0x409c90u: goto label_409c90;
        case 0x409c94u: goto label_409c94;
        case 0x409c98u: goto label_409c98;
        case 0x409c9cu: goto label_409c9c;
        case 0x409ca0u: goto label_409ca0;
        case 0x409ca4u: goto label_409ca4;
        case 0x409ca8u: goto label_409ca8;
        case 0x409cacu: goto label_409cac;
        case 0x409cb0u: goto label_409cb0;
        case 0x409cb4u: goto label_409cb4;
        case 0x409cb8u: goto label_409cb8;
        case 0x409cbcu: goto label_409cbc;
        case 0x409cc0u: goto label_409cc0;
        case 0x409cc4u: goto label_409cc4;
        case 0x409cc8u: goto label_409cc8;
        case 0x409cccu: goto label_409ccc;
        case 0x409cd0u: goto label_409cd0;
        case 0x409cd4u: goto label_409cd4;
        case 0x409cd8u: goto label_409cd8;
        case 0x409cdcu: goto label_409cdc;
        case 0x409ce0u: goto label_409ce0;
        case 0x409ce4u: goto label_409ce4;
        case 0x409ce8u: goto label_409ce8;
        case 0x409cecu: goto label_409cec;
        case 0x409cf0u: goto label_409cf0;
        case 0x409cf4u: goto label_409cf4;
        case 0x409cf8u: goto label_409cf8;
        case 0x409cfcu: goto label_409cfc;
        case 0x409d00u: goto label_409d00;
        case 0x409d04u: goto label_409d04;
        case 0x409d08u: goto label_409d08;
        case 0x409d0cu: goto label_409d0c;
        case 0x409d10u: goto label_409d10;
        case 0x409d14u: goto label_409d14;
        case 0x409d18u: goto label_409d18;
        case 0x409d1cu: goto label_409d1c;
        case 0x409d20u: goto label_409d20;
        case 0x409d24u: goto label_409d24;
        case 0x409d28u: goto label_409d28;
        case 0x409d2cu: goto label_409d2c;
        case 0x409d30u: goto label_409d30;
        case 0x409d34u: goto label_409d34;
        case 0x409d38u: goto label_409d38;
        case 0x409d3cu: goto label_409d3c;
        case 0x409d40u: goto label_409d40;
        case 0x409d44u: goto label_409d44;
        case 0x409d48u: goto label_409d48;
        case 0x409d4cu: goto label_409d4c;
        case 0x409d50u: goto label_409d50;
        case 0x409d54u: goto label_409d54;
        case 0x409d58u: goto label_409d58;
        case 0x409d5cu: goto label_409d5c;
        case 0x409d60u: goto label_409d60;
        case 0x409d64u: goto label_409d64;
        case 0x409d68u: goto label_409d68;
        case 0x409d6cu: goto label_409d6c;
        case 0x409d70u: goto label_409d70;
        case 0x409d74u: goto label_409d74;
        case 0x409d78u: goto label_409d78;
        case 0x409d7cu: goto label_409d7c;
        case 0x409d80u: goto label_409d80;
        case 0x409d84u: goto label_409d84;
        case 0x409d88u: goto label_409d88;
        case 0x409d8cu: goto label_409d8c;
        case 0x409d90u: goto label_409d90;
        case 0x409d94u: goto label_409d94;
        case 0x409d98u: goto label_409d98;
        case 0x409d9cu: goto label_409d9c;
        case 0x409da0u: goto label_409da0;
        case 0x409da4u: goto label_409da4;
        case 0x409da8u: goto label_409da8;
        case 0x409dacu: goto label_409dac;
        case 0x409db0u: goto label_409db0;
        case 0x409db4u: goto label_409db4;
        case 0x409db8u: goto label_409db8;
        case 0x409dbcu: goto label_409dbc;
        case 0x409dc0u: goto label_409dc0;
        case 0x409dc4u: goto label_409dc4;
        case 0x409dc8u: goto label_409dc8;
        case 0x409dccu: goto label_409dcc;
        case 0x409dd0u: goto label_409dd0;
        case 0x409dd4u: goto label_409dd4;
        case 0x409dd8u: goto label_409dd8;
        case 0x409ddcu: goto label_409ddc;
        case 0x409de0u: goto label_409de0;
        case 0x409de4u: goto label_409de4;
        case 0x409de8u: goto label_409de8;
        case 0x409decu: goto label_409dec;
        case 0x409df0u: goto label_409df0;
        case 0x409df4u: goto label_409df4;
        case 0x409df8u: goto label_409df8;
        case 0x409dfcu: goto label_409dfc;
        case 0x409e00u: goto label_409e00;
        case 0x409e04u: goto label_409e04;
        case 0x409e08u: goto label_409e08;
        case 0x409e0cu: goto label_409e0c;
        case 0x409e10u: goto label_409e10;
        case 0x409e14u: goto label_409e14;
        case 0x409e18u: goto label_409e18;
        case 0x409e1cu: goto label_409e1c;
        case 0x409e20u: goto label_409e20;
        case 0x409e24u: goto label_409e24;
        case 0x409e28u: goto label_409e28;
        case 0x409e2cu: goto label_409e2c;
        case 0x409e30u: goto label_409e30;
        case 0x409e34u: goto label_409e34;
        case 0x409e38u: goto label_409e38;
        case 0x409e3cu: goto label_409e3c;
        case 0x409e40u: goto label_409e40;
        case 0x409e44u: goto label_409e44;
        case 0x409e48u: goto label_409e48;
        case 0x409e4cu: goto label_409e4c;
        case 0x409e50u: goto label_409e50;
        case 0x409e54u: goto label_409e54;
        case 0x409e58u: goto label_409e58;
        case 0x409e5cu: goto label_409e5c;
        case 0x409e60u: goto label_409e60;
        case 0x409e64u: goto label_409e64;
        case 0x409e68u: goto label_409e68;
        case 0x409e6cu: goto label_409e6c;
        case 0x409e70u: goto label_409e70;
        case 0x409e74u: goto label_409e74;
        case 0x409e78u: goto label_409e78;
        case 0x409e7cu: goto label_409e7c;
        case 0x409e80u: goto label_409e80;
        case 0x409e84u: goto label_409e84;
        case 0x409e88u: goto label_409e88;
        case 0x409e8cu: goto label_409e8c;
        case 0x409e90u: goto label_409e90;
        case 0x409e94u: goto label_409e94;
        case 0x409e98u: goto label_409e98;
        case 0x409e9cu: goto label_409e9c;
        case 0x409ea0u: goto label_409ea0;
        case 0x409ea4u: goto label_409ea4;
        case 0x409ea8u: goto label_409ea8;
        case 0x409eacu: goto label_409eac;
        case 0x409eb0u: goto label_409eb0;
        case 0x409eb4u: goto label_409eb4;
        case 0x409eb8u: goto label_409eb8;
        case 0x409ebcu: goto label_409ebc;
        case 0x409ec0u: goto label_409ec0;
        case 0x409ec4u: goto label_409ec4;
        case 0x409ec8u: goto label_409ec8;
        case 0x409eccu: goto label_409ecc;
        case 0x409ed0u: goto label_409ed0;
        case 0x409ed4u: goto label_409ed4;
        default: break;
    }

    ctx->pc = 0x4098d0u;

label_4098d0:
    // 0x4098d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4098d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4098d4:
    // 0x4098d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4098d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4098d8:
    // 0x4098d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4098d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4098dc:
    // 0x4098dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4098dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4098e0:
    // 0x4098e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4098e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4098e4:
    // 0x4098e4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4098e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4098e8:
    // 0x4098e8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4098e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4098ec:
    // 0x4098ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4098ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4098f0:
    // 0x4098f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4098f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_4098f4:
    // 0x4098f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4098f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4098f8:
    // 0x4098f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4098f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_4098fc:
    // 0x4098fc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4098fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_409900:
    // 0x409900: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x409900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_409904:
    // 0x409904: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x409904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_409908:
    // 0x409908: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x409908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_40990c:
    // 0x40990c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x40990cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409910:
    // 0x409910: 0x1120002f  beqz        $t1, . + 4 + (0x2F << 2)
label_409914:
    if (ctx->pc == 0x409914u) {
        ctx->pc = 0x409914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409910u;
        // 0x409914: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409918u;
        goto label_409918;
    }
    ctx->pc = 0x409910u;
    {
        const bool branch_taken_0x409910 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x409914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409910u;
        // 0x409914: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409910) {
            ctx->pc = 0x4099D0u;
            goto label_4099d0;
        }
    }
    ctx->pc = 0x409918u;
label_409918:
    // 0x409918: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x409918u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_40991c:
    // 0x40991c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x40991cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_409920:
    // 0x409920: 0x8d23002c  lw          $v1, 0x2C($t1)
    ctx->pc = 0x409920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
label_409924:
    // 0x409924: 0x0  nop
    ctx->pc = 0x409924u;
    // NOP
label_409928:
    // 0x409928: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x409928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_40992c:
    // 0x40992c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x40992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_409930:
    // 0x409930: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x409930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_409934:
    // 0x409934: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x409934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_409938:
    // 0x409938: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x409938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_40993c:
    // 0x40993c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x40993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_409940:
    // 0x409940: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x409940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_409944:
    // 0x409944: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x409944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_409948:
    // 0x409948: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x409948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_40994c:
    // 0x40994c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x40994cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_409950:
    // 0x409950: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x409950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_409954:
    // 0x409954: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x409954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_409958:
    // 0x409958: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x409958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_40995c:
    // 0x40995c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x40995cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_409960:
    // 0x409960: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x409960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_409964:
    // 0x409964: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x409964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_409968:
    // 0x409968: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x409968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_40996c:
    // 0x40996c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_409970:
    // 0x409970: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x409970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_409974:
    // 0x409974: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x409974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
label_409978:
    // 0x409978: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x409978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_40997c:
    // 0x40997c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x40997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_409980:
    // 0x409980: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x409980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_409984:
    // 0x409984: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x409984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_409988:
    // 0x409988: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x409988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_40998c:
    // 0x40998c: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x40998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
label_409990:
    // 0x409990: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x409990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_409994:
    // 0x409994: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x409994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_409998:
    // 0x409998: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x409998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
label_40999c:
    // 0x40999c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x40999cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4099a0:
    // 0x4099a0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x4099a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_4099a4:
    // 0x4099a4: 0xad2a004c  sw          $t2, 0x4C($t1)
    ctx->pc = 0x4099a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 10));
label_4099a8:
    // 0x4099a8: 0xad2a0050  sw          $t2, 0x50($t1)
    ctx->pc = 0x4099a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 10));
label_4099ac:
    // 0x4099ac: 0xad2a0054  sw          $t2, 0x54($t1)
    ctx->pc = 0x4099acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 10));
label_4099b0:
    // 0x4099b0: 0xad2a0058  sw          $t2, 0x58($t1)
    ctx->pc = 0x4099b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 10));
label_4099b4:
    // 0x4099b4: 0xad2a005c  sw          $t2, 0x5C($t1)
    ctx->pc = 0x4099b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 10));
label_4099b8:
    // 0x4099b8: 0xad2a0060  sw          $t2, 0x60($t1)
    ctx->pc = 0x4099b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 10));
label_4099bc:
    // 0x4099bc: 0xad2a0064  sw          $t2, 0x64($t1)
    ctx->pc = 0x4099bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 10));
label_4099c0:
    // 0x4099c0: 0xad2a0068  sw          $t2, 0x68($t1)
    ctx->pc = 0x4099c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 10));
label_4099c4:
    // 0x4099c4: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x4099c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4099c8:
    // 0x4099c8: 0x5520ffd7  bnel        $t1, $zero, . + 4 + (-0x29 << 2)
label_4099cc:
    if (ctx->pc == 0x4099CCu) {
        ctx->pc = 0x4099CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4099C8u;
        // 0x4099cc: 0x8d23002c  lw          $v1, 0x2C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4099D0u;
        goto label_4099d0;
    }
    ctx->pc = 0x4099C8u;
    {
        const bool branch_taken_0x4099c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x4099c8) {
            ctx->pc = 0x4099CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4099C8u;
            // 0x4099cc: 0x8d23002c  lw          $v1, 0x2C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409928;
        }
    }
    ctx->pc = 0x4099D0u;
label_4099d0:
    // 0x4099d0: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x4099d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4099d4:
    // 0x4099d4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4099d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_4099d8:
    // 0x4099d8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x4099d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_4099dc:
    // 0x4099dc: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x4099dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4099e0:
    // 0x4099e0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x4099e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4099e4:
    // 0x4099e4: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x4099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_4099e8:
    // 0x4099e8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4099e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4099ec:
    // 0x4099ec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4099ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4099f0:
    // 0x4099f0: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x4099f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4099f4:
    // 0x4099f4: 0x34a501b8  ori         $a1, $a1, 0x1B8
    ctx->pc = 0x4099f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)440);
label_4099f8:
    // 0x4099f8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x4099f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4099fc:
    // 0x4099fc: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x4099fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_409a00:
    // 0x409a00: 0x40f809  jalr        $v0
label_409a04:
    if (ctx->pc == 0x409A04u) {
        ctx->pc = 0x409A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A00u;
        // 0x409a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A08u;
        goto label_409a08;
    }
    ctx->pc = 0x409A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x409A08u);
        ctx->pc = 0x409A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A00u;
        // 0x409a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409A00u, 0x409A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x409A08u;
label_409a08:
    // 0x409a08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_409a0c:
    if (ctx->pc == 0x409A0Cu) {
        ctx->pc = 0x409A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A08u;
        // 0x409a0c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A10u;
        goto label_409a10;
    }
    ctx->pc = 0x409A08u;
    {
        const bool branch_taken_0x409a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A08u;
        // 0x409a0c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409a08) {
            ctx->pc = 0x409A18u;
            goto label_409a18;
        }
    }
    ctx->pc = 0x409A10u;
label_409a10:
    // 0x409a10: 0x10000129  b           . + 4 + (0x129 << 2)
label_409a14:
    if (ctx->pc == 0x409A14u) {
        ctx->pc = 0x409A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A10u;
        // 0x409a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A18u;
        goto label_409a18;
    }
    ctx->pc = 0x409A10u;
    {
        const bool branch_taken_0x409a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A10u;
        // 0x409a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409a10) {
            ctx->pc = 0x409EB8u;
            goto label_409eb8;
        }
    }
    ctx->pc = 0x409A18u;
label_409a18:
    // 0x409a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409a1c:
    // 0x409a1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x409a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_409a20:
    // 0x409a20: 0xc0bb7e6  jal         func_2EDF98
label_409a24:
    if (ctx->pc == 0x409A24u) {
        ctx->pc = 0x409A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A20u;
        // 0x409a24: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A28u;
        goto label_409a28;
    }
    ctx->pc = 0x409A20u;
    SET_GPR_U32(ctx, 31, 0x409A28u);
    ctx->pc = 0x409A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409A20u;
    // 0x409a24: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x409A20u, 0x409A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409A28u;
label_409a28:
    // 0x409a28: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x409a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409a2c:
    // 0x409a2c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x409a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409a30:
    // 0x409a30: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x409a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_409a34:
    // 0x409a34: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x409a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_409a38:
    // 0x409a38: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x409a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_409a3c:
    // 0x409a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409a40:
    // 0x409a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x409a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_409a44:
    // 0x409a44: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
label_409a48:
    if (ctx->pc == 0x409A48u) {
        ctx->pc = 0x409A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A44u;
        // 0x409a48: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A4Cu;
        goto label_409a4c;
    }
    ctx->pc = 0x409A44u;
    {
        const bool branch_taken_0x409a44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x409A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A44u;
        // 0x409a48: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409a44) {
            ctx->pc = 0x409A7Cu;
            goto label_409a7c;
        }
    }
    ctx->pc = 0x409A4Cu;
label_409a4c:
    // 0x409a4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x409a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_409a50:
    // 0x409a50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x409a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_409a54:
    // 0x409a54: 0x0  nop
    ctx->pc = 0x409a54u;
    // NOP
label_409a58:
    // 0x409a58: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x409a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_409a5c:
    // 0x409a5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x409a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_409a60:
    // 0x409a60: 0xad22006c  sw          $v0, 0x6C($t1)
    ctx->pc = 0x409a60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 108), GPR_U32(ctx, 2));
label_409a64:
    // 0x409a64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x409a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_409a68:
    // 0x409a68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x409a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_409a6c:
    // 0x409a6c: 0xad230074  sw          $v1, 0x74($t1)
    ctx->pc = 0x409a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 3));
label_409a70:
    // 0x409a70: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x409a70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_409a74:
    // 0x409a74: 0x1520fff8  bnez        $t1, . + 4 + (-0x8 << 2)
label_409a78:
    if (ctx->pc == 0x409A78u) {
        ctx->pc = 0x409A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A74u;
        // 0x409a78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A7Cu;
        goto label_409a7c;
    }
    ctx->pc = 0x409A74u;
    {
        const bool branch_taken_0x409a74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x409A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A74u;
        // 0x409a78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409a74) {
            ctx->pc = 0x409A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409a58;
        }
    }
    ctx->pc = 0x409A7Cu;
label_409a7c:
    // 0x409a7c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x409a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409a80:
    // 0x409a80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x409a80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409a84:
    // 0x409a84: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_409a88:
    if (ctx->pc == 0x409A88u) {
        ctx->pc = 0x409A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A84u;
        // 0x409a88: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409A8Cu;
        goto label_409a8c;
    }
    ctx->pc = 0x409A84u;
    {
        const bool branch_taken_0x409a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409A84u;
        // 0x409a88: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409a84) {
            ctx->pc = 0x409C68u;
            goto label_409c68;
        }
    }
    ctx->pc = 0x409A8Cu;
label_409a8c:
    // 0x409a8c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x409a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_409a90:
    // 0x409a90: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x409a90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409a94:
    // 0x409a94: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x409a94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_409a98:
    // 0x409a98: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x409a98u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409a9c:
    // 0x409a9c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x409a9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409aa0:
    // 0x409aa0: 0xa1142  srl         $v0, $t2, 5
    ctx->pc = 0x409aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
label_409aa4:
    // 0x409aa4: 0x3143001f  andi        $v1, $t2, 0x1F
    ctx->pc = 0x409aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
label_409aa8:
    // 0x409aa8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x409aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409aac:
    // 0x409aac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x409aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409ab0:
    // 0x409ab0: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x409ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_409ab4:
    // 0x409ab4: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x409ab4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_409ab8:
    // 0x409ab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x409ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409abc:
    // 0x409abc: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x409abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_409ac0:
    // 0x409ac0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_409ac4:
    // 0x409ac4: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
label_409ac8:
    if (ctx->pc == 0x409AC8u) {
        ctx->pc = 0x409AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409AC4u;
        // 0x409ac8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409ACCu;
        goto label_409acc;
    }
    ctx->pc = 0x409AC4u;
    {
        const bool branch_taken_0x409ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x409ac4) {
            ctx->pc = 0x409AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409AC4u;
            // 0x409ac8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409C54u;
            goto label_409c54;
        }
    }
    ctx->pc = 0x409ACCu;
label_409acc:
    // 0x409acc: 0xafab0020  sw          $t3, 0x20($sp)
    ctx->pc = 0x409accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 11));
label_409ad0:
    // 0x409ad0: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x409ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
label_409ad4:
    // 0x409ad4: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x409ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
label_409ad8:
    // 0x409ad8: 0xafab002c  sw          $t3, 0x2C($sp)
    ctx->pc = 0x409ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 11));
label_409adc:
    // 0x409adc: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x409adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
label_409ae0:
    // 0x409ae0: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x409ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
label_409ae4:
    // 0x409ae4: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x409ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
label_409ae8:
    // 0x409ae8: 0xafab003c  sw          $t3, 0x3C($sp)
    ctx->pc = 0x409ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 11));
label_409aec:
    // 0x409aec: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x409aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409af0:
    // 0x409af0: 0x1120002c  beqz        $t1, . + 4 + (0x2C << 2)
label_409af4:
    if (ctx->pc == 0x409AF4u) {
        ctx->pc = 0x409AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409AF0u;
        // 0x409af4: 0x27ae0020  addiu       $t6, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409AF8u;
        goto label_409af8;
    }
    ctx->pc = 0x409AF0u;
    {
        const bool branch_taken_0x409af0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x409AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409AF0u;
        // 0x409af4: 0x27ae0020  addiu       $t6, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409af0) {
            ctx->pc = 0x409BA4u;
            goto label_409ba4;
        }
    }
    ctx->pc = 0x409AF8u;
label_409af8:
    // 0x409af8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x409af8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_409afc:
    // 0x409afc: 0x1f86004  sllv        $t4, $t8, $t7
    ctx->pc = 0x409afcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
label_409b00:
    // 0x409b00: 0x12d1821  addu        $v1, $t1, $t5
    ctx->pc = 0x409b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_409b04:
    // 0x409b04: 0x0  nop
    ctx->pc = 0x409b04u;
    // NOP
label_409b08:
    // 0x409b08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x409b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_409b0c:
    // 0x409b0c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x409b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
label_409b10:
    // 0x409b10: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_409b14:
    if (ctx->pc == 0x409B14u) {
        ctx->pc = 0x409B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B10u;
        // 0x409b14: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409B18u;
        goto label_409b18;
    }
    ctx->pc = 0x409B10u;
    {
        const bool branch_taken_0x409b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B10u;
        // 0x409b14: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b10) {
            ctx->pc = 0x409B98u;
            goto label_409b98;
        }
    }
    ctx->pc = 0x409B18u;
label_409b18:
    // 0x409b18: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x409b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
label_409b1c:
    // 0x409b1c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x409b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_409b20:
    // 0x409b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x409b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_409b24:
    // 0x409b24: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x409b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_409b28:
    // 0x409b28: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x409b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_409b2c:
    // 0x409b2c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x409b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_409b30:
    // 0x409b30: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x409b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
label_409b34:
    // 0x409b34: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x409b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_409b38:
    // 0x409b38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x409b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_409b3c:
    // 0x409b3c: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x409b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_409b40:
    // 0x409b40: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x409b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_409b44:
    // 0x409b44: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x409b44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_409b48:
    // 0x409b48: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x409b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
label_409b4c:
    // 0x409b4c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x409b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_409b50:
    // 0x409b50: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x409b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_409b54:
    // 0x409b54: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x409b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_409b58:
    // 0x409b58: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x409b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
label_409b5c:
    // 0x409b5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x409b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_409b60:
    // 0x409b60: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x409b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_409b64:
    // 0x409b64: 0x8d22005c  lw          $v0, 0x5C($t1)
    ctx->pc = 0x409b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 92)));
label_409b68:
    // 0x409b68: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x409b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_409b6c:
    // 0x409b6c: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x409b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_409b70:
    // 0x409b70: 0x8d220060  lw          $v0, 0x60($t1)
    ctx->pc = 0x409b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 96)));
label_409b74:
    // 0x409b74: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x409b74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_409b78:
    // 0x409b78: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x409b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
label_409b7c:
    // 0x409b7c: 0x8d220064  lw          $v0, 0x64($t1)
    ctx->pc = 0x409b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 100)));
label_409b80:
    // 0x409b80: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x409b80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_409b84:
    // 0x409b84: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x409b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
label_409b88:
    // 0x409b88: 0x8d220068  lw          $v0, 0x68($t1)
    ctx->pc = 0x409b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 104)));
label_409b8c:
    // 0x409b8c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x409b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_409b90:
    // 0x409b90: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x409b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
label_409b94:
    // 0x409b94: 0x0  nop
    ctx->pc = 0x409b94u;
    // NOP
label_409b98:
    // 0x409b98: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x409b98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_409b9c:
    // 0x409b9c: 0x1520ffda  bnez        $t1, . + 4 + (-0x26 << 2)
label_409ba0:
    if (ctx->pc == 0x409BA0u) {
        ctx->pc = 0x409BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B9Cu;
        // 0x409ba0: 0x12d1821  addu        $v1, $t1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409BA4u;
        goto label_409ba4;
    }
    ctx->pc = 0x409B9Cu;
    {
        const bool branch_taken_0x409b9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x409BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409B9Cu;
        // 0x409ba0: 0x12d1821  addu        $v1, $t1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409b9c) {
            ctx->pc = 0x409B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409b08;
        }
    }
    ctx->pc = 0x409BA4u;
label_409ba4:
    // 0x409ba4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x409ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_409ba8:
    // 0x409ba8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x409ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409bac:
    // 0x409bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x409bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_409bb0:
    // 0x409bb0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_409bb4:
    if (ctx->pc == 0x409BB4u) {
        ctx->pc = 0x409BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BB0u;
        // 0x409bb4: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409BB8u;
        goto label_409bb8;
    }
    ctx->pc = 0x409BB0u;
    {
        const bool branch_taken_0x409bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BB0u;
        // 0x409bb4: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409bb0) {
            ctx->pc = 0x409BE4u;
            goto label_409be4;
        }
    }
    ctx->pc = 0x409BB8u;
label_409bb8:
    // 0x409bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x409bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409bbc:
    // 0x409bbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x409bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_409bc0:
    // 0x409bc0: 0x81142  srl         $v0, $t0, 5
    ctx->pc = 0x409bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
label_409bc4:
    // 0x409bc4: 0x3104001f  andi        $a0, $t0, 0x1F
    ctx->pc = 0x409bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
label_409bc8:
    // 0x409bc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409bcc:
    // 0x409bcc: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x409bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_409bd0:
    // 0x409bd0: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x409bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_409bd4:
    // 0x409bd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x409bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409bd8:
    // 0x409bd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x409bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_409bdc:
    // 0x409bdc: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_409be0:
    if (ctx->pc == 0x409BE0u) {
        ctx->pc = 0x409BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BDCu;
        // 0x409be0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409BE4u;
        goto label_409be4;
    }
    ctx->pc = 0x409BDCu;
    {
        const bool branch_taken_0x409bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x409bdc) {
            ctx->pc = 0x409BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409BDCu;
            // 0x409be0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409bc0;
        }
    }
    ctx->pc = 0x409BE4u;
label_409be4:
    // 0x409be4: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x409be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_409be8:
    // 0x409be8: 0x1040ff89  beqz        $v0, . + 4 + (-0x77 << 2)
label_409bec:
    if (ctx->pc == 0x409BECu) {
        ctx->pc = 0x409BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BE8u;
        // 0x409bec: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409BF0u;
        goto label_409bf0;
    }
    ctx->pc = 0x409BE8u;
    {
        const bool branch_taken_0x409be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BE8u;
        // 0x409bec: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409be8) {
            ctx->pc = 0x409A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409a10;
        }
    }
    ctx->pc = 0x409BF0u;
label_409bf0:
    // 0x409bf0: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
label_409bf4:
    if (ctx->pc == 0x409BF4u) {
        ctx->pc = 0x409BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BF0u;
        // 0x409bf4: 0x3102001f  andi        $v0, $t0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x409BF8u;
        goto label_409bf8;
    }
    ctx->pc = 0x409BF0u;
    {
        const bool branch_taken_0x409bf0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x409BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409BF0u;
        // 0x409bf4: 0x3102001f  andi        $v0, $t0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x409bf0) {
            ctx->pc = 0x409C50u;
            goto label_409c50;
        }
    }
    ctx->pc = 0x409BF8u;
label_409bf8:
    // 0x409bf8: 0x81942  srl         $v1, $t0, 5
    ctx->pc = 0x409bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
label_409bfc:
    // 0x409bfc: 0x581004  sllv        $v0, $t8, $v0
    ctx->pc = 0x409bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
label_409c00:
    // 0x409c00: 0x36880  sll         $t5, $v1, 2
    ctx->pc = 0x409c00u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_409c04:
    // 0x409c04: 0x26027  nor         $t4, $zero, $v0
    ctx->pc = 0x409c04u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_409c08:
    // 0x409c08: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x409c08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_409c0c:
    // 0x409c0c: 0x1f83004  sllv        $a2, $t8, $t7
    ctx->pc = 0x409c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
label_409c10:
    // 0x409c10: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x409c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_409c14:
    // 0x409c14: 0x1271821  addu        $v1, $t1, $a3
    ctx->pc = 0x409c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_409c18:
    // 0x409c18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x409c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_409c1c:
    // 0x409c1c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x409c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_409c20:
    // 0x409c20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_409c24:
    if (ctx->pc == 0x409C24u) {
        ctx->pc = 0x409C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C20u;
        // 0x409c24: 0x2524004c  addiu       $a0, $t1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409C28u;
        goto label_409c28;
    }
    ctx->pc = 0x409C20u;
    {
        const bool branch_taken_0x409c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C20u;
        // 0x409c24: 0x2524004c  addiu       $a0, $t1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409c20) {
            ctx->pc = 0x409C44u;
            goto label_409c44;
        }
    }
    ctx->pc = 0x409C28u;
label_409c28:
    // 0x409c28: 0x8d22006c  lw          $v0, 0x6C($t1)
    ctx->pc = 0x409c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 108)));
label_409c2c:
    // 0x409c2c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x409c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_409c30:
    // 0x409c30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x409c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_409c34:
    // 0x409c34: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x409c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_409c38:
    // 0x409c38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x409c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409c3c:
    // 0x409c3c: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x409c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
label_409c40:
    // 0x409c40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x409c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_409c44:
    // 0x409c44: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x409c44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_409c48:
    // 0x409c48: 0x1520fff3  bnez        $t1, . + 4 + (-0xD << 2)
label_409c4c:
    if (ctx->pc == 0x409C4Cu) {
        ctx->pc = 0x409C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C48u;
        // 0x409c4c: 0x1271821  addu        $v1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409C50u;
        goto label_409c50;
    }
    ctx->pc = 0x409C48u;
    {
        const bool branch_taken_0x409c48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x409C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C48u;
        // 0x409c4c: 0x1271821  addu        $v1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409c48) {
            ctx->pc = 0x409C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409c18;
        }
    }
    ctx->pc = 0x409C50u;
label_409c50:
    // 0x409c50: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x409c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409c54:
    // 0x409c54: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x409c54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_409c58:
    // 0x409c58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x409c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409c5c:
    // 0x409c5c: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x409c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_409c60:
    // 0x409c60: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
label_409c64:
    if (ctx->pc == 0x409C64u) {
        ctx->pc = 0x409C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C60u;
        // 0x409c64: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409C68u;
        goto label_409c68;
    }
    ctx->pc = 0x409C60u;
    {
        const bool branch_taken_0x409c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C60u;
        // 0x409c64: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409c60) {
            ctx->pc = 0x409AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409aa0;
        }
    }
    ctx->pc = 0x409C68u;
label_409c68:
    // 0x409c68: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x409c68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409c6c:
    // 0x409c6c: 0x1120005f  beqz        $t1, . + 4 + (0x5F << 2)
label_409c70:
    if (ctx->pc == 0x409C70u) {
        ctx->pc = 0x409C74u;
        goto label_409c74;
    }
    ctx->pc = 0x409C6Cu;
    {
        const bool branch_taken_0x409c6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x409c6c) {
            ctx->pc = 0x409DECu;
            goto label_409dec;
        }
    }
    ctx->pc = 0x409C74u;
label_409c74:
    // 0x409c74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x409c74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409c78:
    // 0x409c78: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
label_409c7c:
    if (ctx->pc == 0x409C7Cu) {
        ctx->pc = 0x409C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C78u;
        // 0x409c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409C80u;
        goto label_409c80;
    }
    ctx->pc = 0x409C78u;
    {
        const bool branch_taken_0x409c78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x409C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409C78u;
        // 0x409c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409c78) {
            ctx->pc = 0x409D6Cu;
            goto label_409d6c;
        }
    }
    ctx->pc = 0x409C80u;
label_409c80:
    // 0x409c80: 0x252f000c  addiu       $t7, $t1, 0xC
    ctx->pc = 0x409c80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_409c84:
    // 0x409c84: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x409c84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409c88:
    // 0x409c88: 0x252e002c  addiu       $t6, $t1, 0x2C
    ctx->pc = 0x409c88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 44));
label_409c8c:
    // 0x409c8c: 0xa1142  srl         $v0, $t2, 5
    ctx->pc = 0x409c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
label_409c90:
    // 0x409c90: 0x3143001f  andi        $v1, $t2, 0x1F
    ctx->pc = 0x409c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
label_409c94:
    // 0x409c94: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x409c94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409c98:
    // 0x409c98: 0x6d3804  sllv        $a3, $t5, $v1
    ctx->pc = 0x409c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
label_409c9c:
    // 0x409c9c: 0x1e62021  addu        $a0, $t7, $a2
    ctx->pc = 0x409c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_409ca0:
    // 0x409ca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x409ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409ca4:
    // 0x409ca4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x409ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_409ca8:
    // 0x409ca8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_409cac:
    if (ctx->pc == 0x409CACu) {
        ctx->pc = 0x409CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409CA8u;
        // 0x409cac: 0x254b0001  addiu       $t3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409CB0u;
        goto label_409cb0;
    }
    ctx->pc = 0x409CA8u;
    {
        const bool branch_taken_0x409ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409CA8u;
        // 0x409cac: 0x254b0001  addiu       $t3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409ca8) {
            ctx->pc = 0x409D54u;
            goto label_409d54;
        }
    }
    ctx->pc = 0x409CB0u;
label_409cb0:
    // 0x409cb0: 0x1c61821  addu        $v1, $t6, $a2
    ctx->pc = 0x409cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_409cb4:
    // 0x409cb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x409cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_409cb8:
    // 0x409cb8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x409cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_409cbc:
    // 0x409cbc: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_409cc0:
    if (ctx->pc == 0x409CC0u) {
        ctx->pc = 0x409CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409CBCu;
        // 0x409cc0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409CC4u;
        goto label_409cc4;
    }
    ctx->pc = 0x409CBCu;
    {
        const bool branch_taken_0x409cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409cbc) {
            ctx->pc = 0x409CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409CBCu;
            // 0x409cc0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409D58u;
            goto label_409d58;
        }
    }
    ctx->pc = 0x409CC4u;
label_409cc4:
    // 0x409cc4: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x409cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_409cc8:
    // 0x409cc8: 0x2526004c  addiu       $a2, $t1, 0x4C
    ctx->pc = 0x409cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 76));
label_409ccc:
    // 0x409ccc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409cd0:
    // 0x409cd0: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x409cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_409cd4:
    // 0x409cd4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x409cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_409cd8:
    // 0x409cd8: 0x6d1804  sllv        $v1, $t5, $v1
    ctx->pc = 0x409cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
label_409cdc:
    // 0x409cdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x409cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409ce0:
    // 0x409ce0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x409ce0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_409ce4:
    // 0x409ce4: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x409ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_409ce8:
    // 0x409ce8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x409ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_409cec:
    // 0x409cec: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_409cf0:
    if (ctx->pc == 0x409CF0u) {
        ctx->pc = 0x409CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409CECu;
        // 0x409cf0: 0x8d27006c  lw          $a3, 0x6C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409CF4u;
        goto label_409cf4;
    }
    ctx->pc = 0x409CECu;
    {
        const bool branch_taken_0x409cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x409CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409CECu;
        // 0x409cf0: 0x8d27006c  lw          $a3, 0x6C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409cec) {
            ctx->pc = 0x409D24u;
            goto label_409d24;
        }
    }
    ctx->pc = 0x409CF4u;
label_409cf4:
    // 0x409cf4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x409cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409cf8:
    // 0x409cf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x409cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_409cfc:
    // 0x409cfc: 0x0  nop
    ctx->pc = 0x409cfcu;
    // NOP
label_409d00:
    // 0x409d00: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x409d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_409d04:
    // 0x409d04: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x409d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_409d08:
    // 0x409d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409d0c:
    // 0x409d0c: 0x8a2004  sllv        $a0, $t2, $a0
    ctx->pc = 0x409d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
label_409d10:
    // 0x409d10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x409d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_409d14:
    // 0x409d14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x409d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409d18:
    // 0x409d18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x409d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_409d1c:
    // 0x409d1c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_409d20:
    if (ctx->pc == 0x409D20u) {
        ctx->pc = 0x409D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D1Cu;
        // 0x409d20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409D24u;
        goto label_409d24;
    }
    ctx->pc = 0x409D1Cu;
    {
        const bool branch_taken_0x409d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x409d1c) {
            ctx->pc = 0x409D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409D1Cu;
            // 0x409d20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409d00;
        }
    }
    ctx->pc = 0x409D24u;
label_409d24:
    // 0x409d24: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x409d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_409d28:
    // 0x409d28: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x409d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_409d2c:
    // 0x409d2c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x409d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_409d30:
    // 0x409d30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x409d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_409d34:
    // 0x409d34: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x409d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_409d38:
    // 0x409d38: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x409d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_409d3c:
    // 0x409d3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x409d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409d40:
    // 0x409d40: 0x4d1004  sllv        $v0, $t5, $v0
    ctx->pc = 0x409d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
label_409d44:
    // 0x409d44: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x409d44u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_409d48:
    // 0x409d48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x409d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_409d4c:
    // 0x409d4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x409d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_409d50:
    // 0x409d50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x409d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_409d54:
    // 0x409d54: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x409d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409d58:
    // 0x409d58: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x409d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_409d5c:
    // 0x409d5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x409d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409d60:
    // 0x409d60: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x409d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_409d64:
    // 0x409d64: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_409d68:
    if (ctx->pc == 0x409D68u) {
        ctx->pc = 0x409D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D64u;
        // 0x409d68: 0xa1142  srl         $v0, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409D6Cu;
        goto label_409d6c;
    }
    ctx->pc = 0x409D64u;
    {
        const bool branch_taken_0x409d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D64u;
        // 0x409d68: 0xa1142  srl         $v0, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409d64) {
            ctx->pc = 0x409C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409c90;
        }
    }
    ctx->pc = 0x409D6Cu;
label_409d6c:
    // 0x409d6c: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x409d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_409d70:
    // 0x409d70: 0x5520ffc1  bnel        $t1, $zero, . + 4 + (-0x3F << 2)
label_409d74:
    if (ctx->pc == 0x409D74u) {
        ctx->pc = 0x409D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D70u;
        // 0x409d74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409D78u;
        goto label_409d78;
    }
    ctx->pc = 0x409D70u;
    {
        const bool branch_taken_0x409d70 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x409d70) {
            ctx->pc = 0x409D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409D70u;
            // 0x409d74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409c78;
        }
    }
    ctx->pc = 0x409D78u;
label_409d78:
    // 0x409d78: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x409d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409d7c:
    // 0x409d7c: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
label_409d80:
    if (ctx->pc == 0x409D80u) {
        ctx->pc = 0x409D84u;
        goto label_409d84;
    }
    ctx->pc = 0x409D7Cu;
    {
        const bool branch_taken_0x409d7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x409d7c) {
            ctx->pc = 0x409DECu;
            goto label_409dec;
        }
    }
    ctx->pc = 0x409D84u;
label_409d84:
    // 0x409d84: 0x0  nop
    ctx->pc = 0x409d84u;
    // NOP
label_409d88:
    // 0x409d88: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
label_409d8c:
    if (ctx->pc == 0x409D8Cu) {
        ctx->pc = 0x409D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D88u;
        // 0x409d8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409D90u;
        goto label_409d90;
    }
    ctx->pc = 0x409D88u;
    {
        const bool branch_taken_0x409d88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x409D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409D88u;
        // 0x409d8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409d88) {
            ctx->pc = 0x409DDCu;
            goto label_409ddc;
        }
    }
    ctx->pc = 0x409D90u;
label_409d90:
    // 0x409d90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x409d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_409d94:
    // 0x409d94: 0x8d26006c  lw          $a2, 0x6C($t1)
    ctx->pc = 0x409d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 108)));
label_409d98:
    // 0x409d98: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x409d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_409d9c:
    // 0x409d9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x409d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409da0:
    // 0x409da0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x409da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_409da4:
    // 0x409da4: 0x50a40007  beql        $a1, $a0, . + 4 + (0x7 << 2)
label_409da8:
    if (ctx->pc == 0x409DA8u) {
        ctx->pc = 0x409DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DA4u;
        // 0x409da8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409DACu;
        goto label_409dac;
    }
    ctx->pc = 0x409DA4u;
    {
        const bool branch_taken_0x409da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x409da4) {
            ctx->pc = 0x409DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409DA4u;
            // 0x409da8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409DC4u;
            goto label_409dc4;
        }
    }
    ctx->pc = 0x409DACu;
label_409dac:
    // 0x409dac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x409dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_409db0:
    // 0x409db0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x409db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_409db4:
    // 0x409db4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x409db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409db8:
    // 0x409db8: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
label_409dbc:
    if (ctx->pc == 0x409DBCu) {
        ctx->pc = 0x409DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DB8u;
        // 0x409dbc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409DC0u;
        goto label_409dc0;
    }
    ctx->pc = 0x409DB8u;
    {
        const bool branch_taken_0x409db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x409db8) {
            ctx->pc = 0x409DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409DB8u;
            // 0x409dbc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409DC0u;
            goto label_409dc0;
        }
    }
    ctx->pc = 0x409DC0u;
label_409dc0:
    // 0x409dc0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x409dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409dc4:
    // 0x409dc4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x409dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_409dc8:
    // 0x409dc8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x409dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_409dcc:
    // 0x409dcc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x409dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409dd0:
    // 0x409dd0: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x409dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_409dd4:
    // 0x409dd4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_409dd8:
    if (ctx->pc == 0x409DD8u) {
        ctx->pc = 0x409DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DD4u;
        // 0x409dd8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409DDCu;
        goto label_409ddc;
    }
    ctx->pc = 0x409DD4u;
    {
        const bool branch_taken_0x409dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DD4u;
        // 0x409dd8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409dd4) {
            ctx->pc = 0x409DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409da0;
        }
    }
    ctx->pc = 0x409DDCu;
label_409ddc:
    // 0x409ddc: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x409ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_409de0:
    // 0x409de0: 0x1520ffe9  bnez        $t1, . + 4 + (-0x17 << 2)
label_409de4:
    if (ctx->pc == 0x409DE4u) {
        ctx->pc = 0x409DE8u;
        goto label_409de8;
    }
    ctx->pc = 0x409DE0u;
    {
        const bool branch_taken_0x409de0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x409de0) {
            ctx->pc = 0x409D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409d88;
        }
    }
    ctx->pc = 0x409DE8u;
label_409de8:
    // 0x409de8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x409de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409dec:
    // 0x409dec: 0x11200032  beqz        $t1, . + 4 + (0x32 << 2)
label_409df0:
    if (ctx->pc == 0x409DF0u) {
        ctx->pc = 0x409DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DECu;
        // 0x409df0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409DF4u;
        goto label_409df4;
    }
    ctx->pc = 0x409DECu;
    {
        const bool branch_taken_0x409dec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x409DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409DECu;
        // 0x409df0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409dec) {
            ctx->pc = 0x409EB8u;
            goto label_409eb8;
        }
    }
    ctx->pc = 0x409DF4u;
label_409df4:
    // 0x409df4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x409df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409df8:
    // 0x409df8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x409df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409dfc:
    // 0x409dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x409dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e00:
    // 0x409e00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x409e00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e04:
    // 0x409e04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x409e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e08:
    // 0x409e08: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_409e0c:
    if (ctx->pc == 0x409E0Cu) {
        ctx->pc = 0x409E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E08u;
        // 0x409e0c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409E10u;
        goto label_409e10;
    }
    ctx->pc = 0x409E08u;
    {
        const bool branch_taken_0x409e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x409E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E08u;
        // 0x409e0c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409e08) {
            ctx->pc = 0x409E88u;
            goto label_409e88;
        }
    }
    ctx->pc = 0x409E10u;
label_409e10:
    // 0x409e10: 0x252d000c  addiu       $t5, $t1, 0xC
    ctx->pc = 0x409e10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_409e14:
    // 0x409e14: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x409e14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409e18:
    // 0x409e18: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x409e18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e1c:
    // 0x409e1c: 0xa1142  srl         $v0, $t2, 5
    ctx->pc = 0x409e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
label_409e20:
    // 0x409e20: 0x3144001f  andi        $a0, $t2, 0x1F
    ctx->pc = 0x409e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)31);
label_409e24:
    // 0x409e24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_409e28:
    // 0x409e28: 0x8e2004  sllv        $a0, $t6, $a0
    ctx->pc = 0x409e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
label_409e2c:
    // 0x409e2c: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x409e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_409e30:
    // 0x409e30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x409e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_409e34:
    // 0x409e34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x409e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_409e38:
    // 0x409e38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_409e3c:
    if (ctx->pc == 0x409E3Cu) {
        ctx->pc = 0x409E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E38u;
        // 0x409e3c: 0x254b0001  addiu       $t3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409E40u;
        goto label_409e40;
    }
    ctx->pc = 0x409E38u;
    {
        const bool branch_taken_0x409e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x409E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E38u;
        // 0x409e3c: 0x254b0001  addiu       $t3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409e38) {
            ctx->pc = 0x409E48u;
            goto label_409e48;
        }
    }
    ctx->pc = 0x409E40u;
label_409e40:
    // 0x409e40: 0x1000000d  b           . + 4 + (0xD << 2)
label_409e44:
    if (ctx->pc == 0x409E44u) {
        ctx->pc = 0x409E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E40u;
        // 0x409e44: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409E48u;
        goto label_409e48;
    }
    ctx->pc = 0x409E40u;
    {
        const bool branch_taken_0x409e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E40u;
        // 0x409e44: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409e40) {
            ctx->pc = 0x409E78u;
            goto label_409e78;
        }
    }
    ctx->pc = 0x409E48u;
label_409e48:
    // 0x409e48: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_409e4c:
    if (ctx->pc == 0x409E4Cu) {
        ctx->pc = 0x409E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E48u;
        // 0x409e4c: 0x25480001  addiu       $t0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409E50u;
        goto label_409e50;
    }
    ctx->pc = 0x409E48u;
    {
        const bool branch_taken_0x409e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x409e48) {
            ctx->pc = 0x409E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409E48u;
            // 0x409e4c: 0x25480001  addiu       $t0, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409E6Cu;
            goto label_409e6c;
        }
    }
    ctx->pc = 0x409E50u;
label_409e50:
    // 0x409e50: 0x8d220074  lw          $v0, 0x74($t1)
    ctx->pc = 0x409e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
label_409e54:
    // 0x409e54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x409e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_409e58:
    // 0x409e58: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x409e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_409e5c:
    // 0x409e5c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x409e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_409e60:
    // 0x409e60: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x409e60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_409e64:
    // 0x409e64: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x409e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_409e68:
    // 0x409e68: 0x25480001  addiu       $t0, $t2, 0x1
    ctx->pc = 0x409e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_409e6c:
    // 0x409e6c: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x409e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_409e70:
    // 0x409e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x409e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_409e74:
    // 0x409e74: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x409e74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_409e78:
    // 0x409e78: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x409e78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_409e7c:
    // 0x409e7c: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x409e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_409e80:
    // 0x409e80: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_409e84:
    if (ctx->pc == 0x409E84u) {
        ctx->pc = 0x409E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E80u;
        // 0x409e84: 0xa1142  srl         $v0, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409E88u;
        goto label_409e88;
    }
    ctx->pc = 0x409E80u;
    {
        const bool branch_taken_0x409e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E80u;
        // 0x409e84: 0xa1142  srl         $v0, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409e80) {
            ctx->pc = 0x409E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409e20;
        }
    }
    ctx->pc = 0x409E88u;
label_409e88:
    // 0x409e88: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_409e8c:
    if (ctx->pc == 0x409E8Cu) {
        ctx->pc = 0x409E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E88u;
        // 0x409e8c: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409E90u;
        goto label_409e90;
    }
    ctx->pc = 0x409E88u;
    {
        const bool branch_taken_0x409e88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x409E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409E88u;
        // 0x409e8c: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409e88) {
            ctx->pc = 0x409EA4u;
            goto label_409ea4;
        }
    }
    ctx->pc = 0x409E90u;
label_409e90:
    // 0x409e90: 0x8d230074  lw          $v1, 0x74($t1)
    ctx->pc = 0x409e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 116)));
label_409e94:
    // 0x409e94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x409e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_409e98:
    // 0x409e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x409e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_409e9c:
    // 0x409e9c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x409e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_409ea0:
    // 0x409ea0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x409ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_409ea4:
    // 0x409ea4: 0xad260070  sw          $a2, 0x70($t1)
    ctx->pc = 0x409ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 6));
label_409ea8:
    // 0x409ea8: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x409ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_409eac:
    // 0x409eac: 0x5520ffd2  bnel        $t1, $zero, . + 4 + (-0x2E << 2)
label_409eb0:
    if (ctx->pc == 0x409EB0u) {
        ctx->pc = 0x409EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409EACu;
        // 0x409eb0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409EB4u;
        goto label_409eb4;
    }
    ctx->pc = 0x409EACu;
    {
        const bool branch_taken_0x409eac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x409eac) {
            ctx->pc = 0x409EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409EACu;
            // 0x409eb0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409df8;
        }
    }
    ctx->pc = 0x409EB4u;
label_409eb4:
    // 0x409eb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x409eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409eb8:
    // 0x409eb8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x409eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_409ebc:
    // 0x409ebc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x409ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_409ec0:
    // 0x409ec0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x409ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_409ec4:
    // 0x409ec4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x409ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_409ec8:
    // 0x409ec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x409ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_409ecc:
    // 0x409ecc: 0x3e00008  jr          $ra
label_409ed0:
    if (ctx->pc == 0x409ED0u) {
        ctx->pc = 0x409ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409ECCu;
        // 0x409ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x409ED4u;
        goto label_409ed4;
    }
    ctx->pc = 0x409ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409ECCu;
        // 0x409ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409ED4u;
label_409ed4:
    // 0x409ed4: 0x0  nop
    ctx->pc = 0x409ed4u;
    // NOP
    ctx->pc = 0x409ed8u;
}
