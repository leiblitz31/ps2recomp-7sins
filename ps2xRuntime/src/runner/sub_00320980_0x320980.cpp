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

// Function: sub_00320980
// Address: 0x320980 - 0x320f08
void sub_00320980_0x320980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320980_0x320980");
#endif

    switch (ctx->pc) {
        case 0x320980u: goto label_320980;
        case 0x320984u: goto label_320984;
        case 0x320988u: goto label_320988;
        case 0x32098cu: goto label_32098c;
        case 0x320990u: goto label_320990;
        case 0x320994u: goto label_320994;
        case 0x320998u: goto label_320998;
        case 0x32099cu: goto label_32099c;
        case 0x3209a0u: goto label_3209a0;
        case 0x3209a4u: goto label_3209a4;
        case 0x3209a8u: goto label_3209a8;
        case 0x3209acu: goto label_3209ac;
        case 0x3209b0u: goto label_3209b0;
        case 0x3209b4u: goto label_3209b4;
        case 0x3209b8u: goto label_3209b8;
        case 0x3209bcu: goto label_3209bc;
        case 0x3209c0u: goto label_3209c0;
        case 0x3209c4u: goto label_3209c4;
        case 0x3209c8u: goto label_3209c8;
        case 0x3209ccu: goto label_3209cc;
        case 0x3209d0u: goto label_3209d0;
        case 0x3209d4u: goto label_3209d4;
        case 0x3209d8u: goto label_3209d8;
        case 0x3209dcu: goto label_3209dc;
        case 0x3209e0u: goto label_3209e0;
        case 0x3209e4u: goto label_3209e4;
        case 0x3209e8u: goto label_3209e8;
        case 0x3209ecu: goto label_3209ec;
        case 0x3209f0u: goto label_3209f0;
        case 0x3209f4u: goto label_3209f4;
        case 0x3209f8u: goto label_3209f8;
        case 0x3209fcu: goto label_3209fc;
        case 0x320a00u: goto label_320a00;
        case 0x320a04u: goto label_320a04;
        case 0x320a08u: goto label_320a08;
        case 0x320a0cu: goto label_320a0c;
        case 0x320a10u: goto label_320a10;
        case 0x320a14u: goto label_320a14;
        case 0x320a18u: goto label_320a18;
        case 0x320a1cu: goto label_320a1c;
        case 0x320a20u: goto label_320a20;
        case 0x320a24u: goto label_320a24;
        case 0x320a28u: goto label_320a28;
        case 0x320a2cu: goto label_320a2c;
        case 0x320a30u: goto label_320a30;
        case 0x320a34u: goto label_320a34;
        case 0x320a38u: goto label_320a38;
        case 0x320a3cu: goto label_320a3c;
        case 0x320a40u: goto label_320a40;
        case 0x320a44u: goto label_320a44;
        case 0x320a48u: goto label_320a48;
        case 0x320a4cu: goto label_320a4c;
        case 0x320a50u: goto label_320a50;
        case 0x320a54u: goto label_320a54;
        case 0x320a58u: goto label_320a58;
        case 0x320a5cu: goto label_320a5c;
        case 0x320a60u: goto label_320a60;
        case 0x320a64u: goto label_320a64;
        case 0x320a68u: goto label_320a68;
        case 0x320a6cu: goto label_320a6c;
        case 0x320a70u: goto label_320a70;
        case 0x320a74u: goto label_320a74;
        case 0x320a78u: goto label_320a78;
        case 0x320a7cu: goto label_320a7c;
        case 0x320a80u: goto label_320a80;
        case 0x320a84u: goto label_320a84;
        case 0x320a88u: goto label_320a88;
        case 0x320a8cu: goto label_320a8c;
        case 0x320a90u: goto label_320a90;
        case 0x320a94u: goto label_320a94;
        case 0x320a98u: goto label_320a98;
        case 0x320a9cu: goto label_320a9c;
        case 0x320aa0u: goto label_320aa0;
        case 0x320aa4u: goto label_320aa4;
        case 0x320aa8u: goto label_320aa8;
        case 0x320aacu: goto label_320aac;
        case 0x320ab0u: goto label_320ab0;
        case 0x320ab4u: goto label_320ab4;
        case 0x320ab8u: goto label_320ab8;
        case 0x320abcu: goto label_320abc;
        case 0x320ac0u: goto label_320ac0;
        case 0x320ac4u: goto label_320ac4;
        case 0x320ac8u: goto label_320ac8;
        case 0x320accu: goto label_320acc;
        case 0x320ad0u: goto label_320ad0;
        case 0x320ad4u: goto label_320ad4;
        case 0x320ad8u: goto label_320ad8;
        case 0x320adcu: goto label_320adc;
        case 0x320ae0u: goto label_320ae0;
        case 0x320ae4u: goto label_320ae4;
        case 0x320ae8u: goto label_320ae8;
        case 0x320aecu: goto label_320aec;
        case 0x320af0u: goto label_320af0;
        case 0x320af4u: goto label_320af4;
        case 0x320af8u: goto label_320af8;
        case 0x320afcu: goto label_320afc;
        case 0x320b00u: goto label_320b00;
        case 0x320b04u: goto label_320b04;
        case 0x320b08u: goto label_320b08;
        case 0x320b0cu: goto label_320b0c;
        case 0x320b10u: goto label_320b10;
        case 0x320b14u: goto label_320b14;
        case 0x320b18u: goto label_320b18;
        case 0x320b1cu: goto label_320b1c;
        case 0x320b20u: goto label_320b20;
        case 0x320b24u: goto label_320b24;
        case 0x320b28u: goto label_320b28;
        case 0x320b2cu: goto label_320b2c;
        case 0x320b30u: goto label_320b30;
        case 0x320b34u: goto label_320b34;
        case 0x320b38u: goto label_320b38;
        case 0x320b3cu: goto label_320b3c;
        case 0x320b40u: goto label_320b40;
        case 0x320b44u: goto label_320b44;
        case 0x320b48u: goto label_320b48;
        case 0x320b4cu: goto label_320b4c;
        case 0x320b50u: goto label_320b50;
        case 0x320b54u: goto label_320b54;
        case 0x320b58u: goto label_320b58;
        case 0x320b5cu: goto label_320b5c;
        case 0x320b60u: goto label_320b60;
        case 0x320b64u: goto label_320b64;
        case 0x320b68u: goto label_320b68;
        case 0x320b6cu: goto label_320b6c;
        case 0x320b70u: goto label_320b70;
        case 0x320b74u: goto label_320b74;
        case 0x320b78u: goto label_320b78;
        case 0x320b7cu: goto label_320b7c;
        case 0x320b80u: goto label_320b80;
        case 0x320b84u: goto label_320b84;
        case 0x320b88u: goto label_320b88;
        case 0x320b8cu: goto label_320b8c;
        case 0x320b90u: goto label_320b90;
        case 0x320b94u: goto label_320b94;
        case 0x320b98u: goto label_320b98;
        case 0x320b9cu: goto label_320b9c;
        case 0x320ba0u: goto label_320ba0;
        case 0x320ba4u: goto label_320ba4;
        case 0x320ba8u: goto label_320ba8;
        case 0x320bacu: goto label_320bac;
        case 0x320bb0u: goto label_320bb0;
        case 0x320bb4u: goto label_320bb4;
        case 0x320bb8u: goto label_320bb8;
        case 0x320bbcu: goto label_320bbc;
        case 0x320bc0u: goto label_320bc0;
        case 0x320bc4u: goto label_320bc4;
        case 0x320bc8u: goto label_320bc8;
        case 0x320bccu: goto label_320bcc;
        case 0x320bd0u: goto label_320bd0;
        case 0x320bd4u: goto label_320bd4;
        case 0x320bd8u: goto label_320bd8;
        case 0x320bdcu: goto label_320bdc;
        case 0x320be0u: goto label_320be0;
        case 0x320be4u: goto label_320be4;
        case 0x320be8u: goto label_320be8;
        case 0x320becu: goto label_320bec;
        case 0x320bf0u: goto label_320bf0;
        case 0x320bf4u: goto label_320bf4;
        case 0x320bf8u: goto label_320bf8;
        case 0x320bfcu: goto label_320bfc;
        case 0x320c00u: goto label_320c00;
        case 0x320c04u: goto label_320c04;
        case 0x320c08u: goto label_320c08;
        case 0x320c0cu: goto label_320c0c;
        case 0x320c10u: goto label_320c10;
        case 0x320c14u: goto label_320c14;
        case 0x320c18u: goto label_320c18;
        case 0x320c1cu: goto label_320c1c;
        case 0x320c20u: goto label_320c20;
        case 0x320c24u: goto label_320c24;
        case 0x320c28u: goto label_320c28;
        case 0x320c2cu: goto label_320c2c;
        case 0x320c30u: goto label_320c30;
        case 0x320c34u: goto label_320c34;
        case 0x320c38u: goto label_320c38;
        case 0x320c3cu: goto label_320c3c;
        case 0x320c40u: goto label_320c40;
        case 0x320c44u: goto label_320c44;
        case 0x320c48u: goto label_320c48;
        case 0x320c4cu: goto label_320c4c;
        case 0x320c50u: goto label_320c50;
        case 0x320c54u: goto label_320c54;
        case 0x320c58u: goto label_320c58;
        case 0x320c5cu: goto label_320c5c;
        case 0x320c60u: goto label_320c60;
        case 0x320c64u: goto label_320c64;
        case 0x320c68u: goto label_320c68;
        case 0x320c6cu: goto label_320c6c;
        case 0x320c70u: goto label_320c70;
        case 0x320c74u: goto label_320c74;
        case 0x320c78u: goto label_320c78;
        case 0x320c7cu: goto label_320c7c;
        case 0x320c80u: goto label_320c80;
        case 0x320c84u: goto label_320c84;
        case 0x320c88u: goto label_320c88;
        case 0x320c8cu: goto label_320c8c;
        case 0x320c90u: goto label_320c90;
        case 0x320c94u: goto label_320c94;
        case 0x320c98u: goto label_320c98;
        case 0x320c9cu: goto label_320c9c;
        case 0x320ca0u: goto label_320ca0;
        case 0x320ca4u: goto label_320ca4;
        case 0x320ca8u: goto label_320ca8;
        case 0x320cacu: goto label_320cac;
        case 0x320cb0u: goto label_320cb0;
        case 0x320cb4u: goto label_320cb4;
        case 0x320cb8u: goto label_320cb8;
        case 0x320cbcu: goto label_320cbc;
        case 0x320cc0u: goto label_320cc0;
        case 0x320cc4u: goto label_320cc4;
        case 0x320cc8u: goto label_320cc8;
        case 0x320cccu: goto label_320ccc;
        case 0x320cd0u: goto label_320cd0;
        case 0x320cd4u: goto label_320cd4;
        case 0x320cd8u: goto label_320cd8;
        case 0x320cdcu: goto label_320cdc;
        case 0x320ce0u: goto label_320ce0;
        case 0x320ce4u: goto label_320ce4;
        case 0x320ce8u: goto label_320ce8;
        case 0x320cecu: goto label_320cec;
        case 0x320cf0u: goto label_320cf0;
        case 0x320cf4u: goto label_320cf4;
        case 0x320cf8u: goto label_320cf8;
        case 0x320cfcu: goto label_320cfc;
        case 0x320d00u: goto label_320d00;
        case 0x320d04u: goto label_320d04;
        case 0x320d08u: goto label_320d08;
        case 0x320d0cu: goto label_320d0c;
        case 0x320d10u: goto label_320d10;
        case 0x320d14u: goto label_320d14;
        case 0x320d18u: goto label_320d18;
        case 0x320d1cu: goto label_320d1c;
        case 0x320d20u: goto label_320d20;
        case 0x320d24u: goto label_320d24;
        case 0x320d28u: goto label_320d28;
        case 0x320d2cu: goto label_320d2c;
        case 0x320d30u: goto label_320d30;
        case 0x320d34u: goto label_320d34;
        case 0x320d38u: goto label_320d38;
        case 0x320d3cu: goto label_320d3c;
        case 0x320d40u: goto label_320d40;
        case 0x320d44u: goto label_320d44;
        case 0x320d48u: goto label_320d48;
        case 0x320d4cu: goto label_320d4c;
        case 0x320d50u: goto label_320d50;
        case 0x320d54u: goto label_320d54;
        case 0x320d58u: goto label_320d58;
        case 0x320d5cu: goto label_320d5c;
        case 0x320d60u: goto label_320d60;
        case 0x320d64u: goto label_320d64;
        case 0x320d68u: goto label_320d68;
        case 0x320d6cu: goto label_320d6c;
        case 0x320d70u: goto label_320d70;
        case 0x320d74u: goto label_320d74;
        case 0x320d78u: goto label_320d78;
        case 0x320d7cu: goto label_320d7c;
        case 0x320d80u: goto label_320d80;
        case 0x320d84u: goto label_320d84;
        case 0x320d88u: goto label_320d88;
        case 0x320d8cu: goto label_320d8c;
        case 0x320d90u: goto label_320d90;
        case 0x320d94u: goto label_320d94;
        case 0x320d98u: goto label_320d98;
        case 0x320d9cu: goto label_320d9c;
        case 0x320da0u: goto label_320da0;
        case 0x320da4u: goto label_320da4;
        case 0x320da8u: goto label_320da8;
        case 0x320dacu: goto label_320dac;
        case 0x320db0u: goto label_320db0;
        case 0x320db4u: goto label_320db4;
        case 0x320db8u: goto label_320db8;
        case 0x320dbcu: goto label_320dbc;
        case 0x320dc0u: goto label_320dc0;
        case 0x320dc4u: goto label_320dc4;
        case 0x320dc8u: goto label_320dc8;
        case 0x320dccu: goto label_320dcc;
        case 0x320dd0u: goto label_320dd0;
        case 0x320dd4u: goto label_320dd4;
        case 0x320dd8u: goto label_320dd8;
        case 0x320ddcu: goto label_320ddc;
        case 0x320de0u: goto label_320de0;
        case 0x320de4u: goto label_320de4;
        case 0x320de8u: goto label_320de8;
        case 0x320decu: goto label_320dec;
        case 0x320df0u: goto label_320df0;
        case 0x320df4u: goto label_320df4;
        case 0x320df8u: goto label_320df8;
        case 0x320dfcu: goto label_320dfc;
        case 0x320e00u: goto label_320e00;
        case 0x320e04u: goto label_320e04;
        case 0x320e08u: goto label_320e08;
        case 0x320e0cu: goto label_320e0c;
        case 0x320e10u: goto label_320e10;
        case 0x320e14u: goto label_320e14;
        case 0x320e18u: goto label_320e18;
        case 0x320e1cu: goto label_320e1c;
        case 0x320e20u: goto label_320e20;
        case 0x320e24u: goto label_320e24;
        case 0x320e28u: goto label_320e28;
        case 0x320e2cu: goto label_320e2c;
        case 0x320e30u: goto label_320e30;
        case 0x320e34u: goto label_320e34;
        case 0x320e38u: goto label_320e38;
        case 0x320e3cu: goto label_320e3c;
        case 0x320e40u: goto label_320e40;
        case 0x320e44u: goto label_320e44;
        case 0x320e48u: goto label_320e48;
        case 0x320e4cu: goto label_320e4c;
        case 0x320e50u: goto label_320e50;
        case 0x320e54u: goto label_320e54;
        case 0x320e58u: goto label_320e58;
        case 0x320e5cu: goto label_320e5c;
        case 0x320e60u: goto label_320e60;
        case 0x320e64u: goto label_320e64;
        case 0x320e68u: goto label_320e68;
        case 0x320e6cu: goto label_320e6c;
        case 0x320e70u: goto label_320e70;
        case 0x320e74u: goto label_320e74;
        case 0x320e78u: goto label_320e78;
        case 0x320e7cu: goto label_320e7c;
        case 0x320e80u: goto label_320e80;
        case 0x320e84u: goto label_320e84;
        case 0x320e88u: goto label_320e88;
        case 0x320e8cu: goto label_320e8c;
        case 0x320e90u: goto label_320e90;
        case 0x320e94u: goto label_320e94;
        case 0x320e98u: goto label_320e98;
        case 0x320e9cu: goto label_320e9c;
        case 0x320ea0u: goto label_320ea0;
        case 0x320ea4u: goto label_320ea4;
        case 0x320ea8u: goto label_320ea8;
        case 0x320eacu: goto label_320eac;
        case 0x320eb0u: goto label_320eb0;
        case 0x320eb4u: goto label_320eb4;
        case 0x320eb8u: goto label_320eb8;
        case 0x320ebcu: goto label_320ebc;
        case 0x320ec0u: goto label_320ec0;
        case 0x320ec4u: goto label_320ec4;
        case 0x320ec8u: goto label_320ec8;
        case 0x320eccu: goto label_320ecc;
        case 0x320ed0u: goto label_320ed0;
        case 0x320ed4u: goto label_320ed4;
        case 0x320ed8u: goto label_320ed8;
        case 0x320edcu: goto label_320edc;
        case 0x320ee0u: goto label_320ee0;
        case 0x320ee4u: goto label_320ee4;
        case 0x320ee8u: goto label_320ee8;
        case 0x320eecu: goto label_320eec;
        case 0x320ef0u: goto label_320ef0;
        case 0x320ef4u: goto label_320ef4;
        case 0x320ef8u: goto label_320ef8;
        case 0x320efcu: goto label_320efc;
        case 0x320f00u: goto label_320f00;
        case 0x320f04u: goto label_320f04;
        default: break;
    }

    ctx->pc = 0x320980u;

label_320980:
    // 0x320980: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x320980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_320984:
    // 0x320984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x320984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320988:
    // 0x320988: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x320988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
label_32098c:
    // 0x32098c: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x32098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
label_320990:
    // 0x320990: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x320990u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320994:
    // 0x320994: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x320994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
label_320998:
    // 0x320998: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x320998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
label_32099c:
    // 0x32099c: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x32099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
label_3209a0:
    // 0x3209a0: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x3209a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
label_3209a4:
    // 0x3209a4: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x3209a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
label_3209a8:
    // 0x3209a8: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x3209a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
label_3209ac:
    // 0x3209ac: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x3209acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_3209b0:
    // 0x3209b0: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x3209b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_3209b4:
    // 0x3209b4: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x3209b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
label_3209b8:
    // 0x3209b8: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x3209b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3209bc:
    // 0x3209bc: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3209bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_3209c0:
    // 0x3209c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3209c4:
    if (ctx->pc == 0x3209C4u) {
        ctx->pc = 0x3209C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209C0u;
        // 0x3209c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209C8u;
        goto label_3209c8;
    }
    ctx->pc = 0x3209C0u;
    {
        const bool branch_taken_0x3209c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3209C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209C0u;
        // 0x3209c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209c0) {
            ctx->pc = 0x3209D8u;
            goto label_3209d8;
        }
    }
    ctx->pc = 0x3209C8u;
label_3209c8:
    // 0x3209c8: 0xc0c8140  jal         func_320500
label_3209cc:
    if (ctx->pc == 0x3209CCu) {
        ctx->pc = 0x3209D0u;
        goto label_3209d0;
    }
    ctx->pc = 0x3209C8u;
    SET_GPR_U32(ctx, 31, 0x3209D0u);
    ctx->pc = 0x320500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320500u, 0x3209C8u, 0x3209D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209D0u;
label_3209d0:
    // 0x3209d0: 0x1000013c  b           . + 4 + (0x13C << 2)
label_3209d4:
    if (ctx->pc == 0x3209D4u) {
        ctx->pc = 0x3209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209D0u;
        // 0x3209d4: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209D8u;
        goto label_3209d8;
    }
    ctx->pc = 0x3209D0u;
    {
        const bool branch_taken_0x3209d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3209D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209D0u;
        // 0x3209d4: 0x7bb00260  lq          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209d0) {
            ctx->pc = 0x320EC4u;
            goto label_320ec4;
        }
    }
    ctx->pc = 0x3209D8u;
label_3209d8:
    // 0x3209d8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3209d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3209dc:
    // 0x3209dc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3209e0:
    if (ctx->pc == 0x3209E0u) {
        ctx->pc = 0x3209E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209DCu;
        // 0x3209e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209E4u;
        goto label_3209e4;
    }
    ctx->pc = 0x3209DCu;
    {
        const bool branch_taken_0x3209dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3209E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209DCu;
        // 0x3209e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209dc) {
            ctx->pc = 0x320A1Cu;
            goto label_320a1c;
        }
    }
    ctx->pc = 0x3209E4u;
label_3209e4:
    // 0x3209e4: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x3209e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_3209e8:
    // 0x3209e8: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_3209ec:
    if (ctx->pc == 0x3209ECu) {
        ctx->pc = 0x3209ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209E8u;
        // 0x3209ec: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3209F0u;
        goto label_3209f0;
    }
    ctx->pc = 0x3209E8u;
    {
        const bool branch_taken_0x3209e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3209ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209E8u;
        // 0x3209ec: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209e8) {
            ctx->pc = 0x320A1Cu;
            goto label_320a1c;
        }
    }
    ctx->pc = 0x3209F0u;
label_3209f0:
    // 0x3209f0: 0x8fc70018  lw          $a3, 0x18($fp)
    ctx->pc = 0x3209f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_3209f4:
    // 0x3209f4: 0x32a92000  andi        $t1, $s5, 0x2000
    ctx->pc = 0x3209f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8192);
label_3209f8:
    // 0x3209f8: 0x32a56000  andi        $a1, $s5, 0x6000
    ctx->pc = 0x3209f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)24576);
label_3209fc:
    // 0x3209fc: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3209fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_320a00:
    // 0x320a00: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x320a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_320a04:
    // 0x320a04: 0xafa901c4  sw          $t1, 0x1C4($sp)
    ctx->pc = 0x320a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 9));
label_320a08:
    // 0x320a08: 0x14a30026  bne         $a1, $v1, . + 4 + (0x26 << 2)
label_320a0c:
    if (ctx->pc == 0x320A0Cu) {
        ctx->pc = 0x320A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A08u;
        // 0x320a0c: 0x44b821  addu        $s7, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A10u;
        goto label_320a10;
    }
    ctx->pc = 0x320A08u;
    {
        const bool branch_taken_0x320a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x320A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A08u;
        // 0x320a0c: 0x44b821  addu        $s7, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a08) {
            ctx->pc = 0x320AA4u;
            goto label_320aa4;
        }
    }
    ctx->pc = 0x320A10u;
label_320a10:
    // 0x320a10: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x320a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_320a14:
    // 0x320a14: 0x10000023  b           . + 4 + (0x23 << 2)
label_320a18:
    if (ctx->pc == 0x320A18u) {
        ctx->pc = 0x320A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A14u;
        // 0x320a18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A1Cu;
        goto label_320a1c;
    }
    ctx->pc = 0x320A14u;
    {
        const bool branch_taken_0x320a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A14u;
        // 0x320a18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a14) {
            ctx->pc = 0x320AA4u;
            goto label_320aa4;
        }
    }
    ctx->pc = 0x320A1Cu;
label_320a1c:
    // 0x320a1c: 0x32a24000  andi        $v0, $s5, 0x4000
    ctx->pc = 0x320a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16384);
label_320a20:
    // 0x320a20: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_320a24:
    if (ctx->pc == 0x320A24u) {
        ctx->pc = 0x320A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A20u;
        // 0x320a24: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A28u;
        goto label_320a28;
    }
    ctx->pc = 0x320A20u;
    {
        const bool branch_taken_0x320a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A20u;
        // 0x320a24: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a20) {
            ctx->pc = 0x320A90u;
            goto label_320a90;
        }
    }
    ctx->pc = 0x320A28u;
label_320a28:
    // 0x320a28: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x320a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_320a2c:
    // 0x320a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_320a30:
    // 0x320a30: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x320a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_320a34:
    // 0x320a34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x320a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_320a38:
    // 0x320a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_320a3c:
    // 0x320a3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_320a40:
    // 0x320a40: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x320a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_320a44:
    // 0x320a44: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x320a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_320a48:
    // 0x320a48: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x320a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_320a4c:
    // 0x320a4c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x320a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_320a50:
    // 0x320a50: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x320a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_320a54:
    // 0x320a54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x320a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_320a58:
    // 0x320a58: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x320a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_320a5c:
    // 0x320a5c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x320a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_320a60:
    // 0x320a60: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x320a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_320a64:
    // 0x320a64: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x320a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_320a68:
    // 0x320a68: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x320a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_320a6c:
    // 0x320a6c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x320a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_320a70:
    // 0x320a70: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x320a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_320a74:
    // 0x320a74: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x320a74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_320a78:
    // 0x320a78: 0x32a22000  andi        $v0, $s5, 0x2000
    ctx->pc = 0x320a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8192);
label_320a7c:
    // 0x320a7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_320a80:
    if (ctx->pc == 0x320A80u) {
        ctx->pc = 0x320A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A7Cu;
        // 0x320a80: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A84u;
        goto label_320a84;
    }
    ctx->pc = 0x320A7Cu;
    {
        const bool branch_taken_0x320a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A7Cu;
        // 0x320a80: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a7c) {
            ctx->pc = 0x320AA4u;
            goto label_320aa4;
        }
    }
    ctx->pc = 0x320A84u;
label_320a84:
    // 0x320a84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x320a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320a88:
    // 0x320a88: 0x10000006  b           . + 4 + (0x6 << 2)
label_320a8c:
    if (ctx->pc == 0x320A8Cu) {
        ctx->pc = 0x320A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A88u;
        // 0x320a8c: 0x8fc60014  lw          $a2, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320A90u;
        goto label_320a90;
    }
    ctx->pc = 0x320A88u;
    {
        const bool branch_taken_0x320a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A88u;
        // 0x320a8c: 0x8fc60014  lw          $a2, 0x14($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a88) {
            ctx->pc = 0x320AA4u;
            goto label_320aa4;
        }
    }
    ctx->pc = 0x320A90u;
label_320a90:
    // 0x320a90: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x320a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_320a94:
    // 0x320a94: 0x32a32000  andi        $v1, $s5, 0x2000
    ctx->pc = 0x320a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8192);
label_320a98:
    // 0x320a98: 0xafa301c4  sw          $v1, 0x1C4($sp)
    ctx->pc = 0x320a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 3));
label_320a9c:
    // 0x320a9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x320a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320aa0:
    // 0x320aa0: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x320aa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_320aa4:
    // 0x320aa4: 0x11000044  beqz        $t0, . + 4 + (0x44 << 2)
label_320aa8:
    if (ctx->pc == 0x320AA8u) {
        ctx->pc = 0x320AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AA4u;
        // 0x320aa8: 0x27b20084  addiu       $s2, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AACu;
        goto label_320aac;
    }
    ctx->pc = 0x320AA4u;
    {
        const bool branch_taken_0x320aa4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AA4u;
        // 0x320aa8: 0x27b20084  addiu       $s2, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aa4) {
            ctx->pc = 0x320BB8u;
            goto label_320bb8;
        }
    }
    ctx->pc = 0x320AACu;
label_320aac:
    // 0x320aac: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
label_320ab0:
    if (ctx->pc == 0x320AB0u) {
        ctx->pc = 0x320AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AACu;
        // 0x320ab0: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AB4u;
        goto label_320ab4;
    }
    ctx->pc = 0x320AACu;
    {
        const bool branch_taken_0x320aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AACu;
        // 0x320ab0: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aac) {
            ctx->pc = 0x320B68u;
            goto label_320b68;
        }
    }
    ctx->pc = 0x320AB4u;
label_320ab4:
    // 0x320ab4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x320ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_320ab8:
    // 0x320ab8: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
label_320abc:
    if (ctx->pc == 0x320ABCu) {
        ctx->pc = 0x320ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AB8u;
        // 0x320abc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AC0u;
        goto label_320ac0;
    }
    ctx->pc = 0x320AB8u;
    {
        const bool branch_taken_0x320ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x320ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AB8u;
        // 0x320abc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ab8) {
            ctx->pc = 0x320B6Cu;
            goto label_320b6c;
        }
    }
    ctx->pc = 0x320AC0u;
label_320ac0:
    // 0x320ac0: 0xc1067f6  jal         func_419FD8
label_320ac4:
    if (ctx->pc == 0x320AC4u) {
        ctx->pc = 0x320AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AC0u;
        // 0x320ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AC8u;
        goto label_320ac8;
    }
    ctx->pc = 0x320AC0u;
    SET_GPR_U32(ctx, 31, 0x320AC8u);
    ctx->pc = 0x320AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320AC0u;
    // 0x320ac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FD8u, 0x320AC0u, 0x320AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320AC8u;
label_320ac8:
    // 0x320ac8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_320acc:
    if (ctx->pc == 0x320ACCu) {
        ctx->pc = 0x320ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AC8u;
        // 0x320acc: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AD0u;
        goto label_320ad0;
    }
    ctx->pc = 0x320AC8u;
    {
        const bool branch_taken_0x320ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320ac8) {
            ctx->pc = 0x320ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320AC8u;
            // 0x320acc: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320AFCu;
            goto label_320afc;
        }
    }
    ctx->pc = 0x320AD0u;
label_320ad0:
    // 0x320ad0: 0xc106784  jal         func_419E10
label_320ad4:
    if (ctx->pc == 0x320AD4u) {
        ctx->pc = 0x320AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AD0u;
        // 0x320ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AD8u;
        goto label_320ad8;
    }
    ctx->pc = 0x320AD0u;
    SET_GPR_U32(ctx, 31, 0x320AD8u);
    ctx->pc = 0x320AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320AD0u;
    // 0x320ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x320AD0u, 0x320AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320AD8u;
label_320ad8:
    // 0x320ad8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x320ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_320adc:
    // 0x320adc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x320adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_320ae0:
    // 0x320ae0: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x320ae0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_320ae4:
    // 0x320ae4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x320ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_320ae8:
    // 0x320ae8: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x320ae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_320aec:
    // 0x320aec: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x320aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_320af0:
    // 0x320af0: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x320af0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_320af4:
    // 0x320af4: 0x10000030  b           . + 4 + (0x30 << 2)
label_320af8:
    if (ctx->pc == 0x320AF8u) {
        ctx->pc = 0x320AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AF4u;
        // 0x320af8: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AFCu;
        goto label_320afc;
    }
    ctx->pc = 0x320AF4u;
    {
        const bool branch_taken_0x320af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AF4u;
        // 0x320af8: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320af4) {
            ctx->pc = 0x320BB8u;
            goto label_320bb8;
        }
    }
    ctx->pc = 0x320AFCu;
label_320afc:
    // 0x320afc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x320afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_320b00:
    // 0x320b00: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x320b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_320b04:
    // 0x320b04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x320b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_320b08:
    // 0x320b08: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x320b08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_320b0c:
    // 0x320b0c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x320b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_320b10:
    // 0x320b10: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x320b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_320b14:
    // 0x320b14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x320b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_320b18:
    // 0x320b18: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x320b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320b1c:
    // 0x320b1c: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_320b20:
    if (ctx->pc == 0x320B20u) {
        ctx->pc = 0x320B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B1Cu;
        // 0x320b20: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B24u;
        goto label_320b24;
    }
    ctx->pc = 0x320B1Cu;
    {
        const bool branch_taken_0x320b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B1Cu;
        // 0x320b20: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b1c) {
            ctx->pc = 0x320BBCu;
            goto label_320bbc;
        }
    }
    ctx->pc = 0x320B24u;
label_320b24:
    // 0x320b24: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x320b24u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_320b28:
    // 0x320b28: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x320b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_320b2c:
    // 0x320b2c: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x320b2cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_320b30:
    // 0x320b30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x320b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_320b34:
    // 0x320b34: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x320b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_320b38:
    // 0x320b38: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x320b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_320b3c:
    // 0x320b3c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x320b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_320b40:
    // 0x320b40: 0x7fa80100  sq          $t0, 0x100($sp)
    ctx->pc = 0x320b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 8));
label_320b44:
    // 0x320b44: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x320b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
label_320b48:
    // 0x320b48: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x320b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_320b4c:
    // 0x320b4c: 0xc103dd4  jal         func_40F750
label_320b50:
    if (ctx->pc == 0x320B50u) {
        ctx->pc = 0x320B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B4Cu;
        // 0x320b50: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B54u;
        goto label_320b54;
    }
    ctx->pc = 0x320B4Cu;
    SET_GPR_U32(ctx, 31, 0x320B54u);
    ctx->pc = 0x320B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B4Cu;
    // 0x320b50: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x320B4Cu, 0x320B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B54u;
label_320b54:
    // 0x320b54: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x320b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_320b58:
    // 0x320b58: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_320b5c:
    if (ctx->pc == 0x320B5Cu) {
        ctx->pc = 0x320B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B58u;
        // 0x320b5c: 0x7ba80000  lq          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B60u;
        goto label_320b60;
    }
    ctx->pc = 0x320B58u;
    {
        const bool branch_taken_0x320b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x320B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B58u;
        // 0x320b5c: 0x7ba80000  lq          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b58) {
            ctx->pc = 0x320B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320b28;
        }
    }
    ctx->pc = 0x320B60u;
label_320b60:
    // 0x320b60: 0x10000016  b           . + 4 + (0x16 << 2)
label_320b64:
    if (ctx->pc == 0x320B64u) {
        ctx->pc = 0x320B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B60u;
        // 0x320b64: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320B68u;
        goto label_320b68;
    }
    ctx->pc = 0x320B60u;
    {
        const bool branch_taken_0x320b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B60u;
        // 0x320b64: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b60) {
            ctx->pc = 0x320BBCu;
            goto label_320bbc;
        }
    }
    ctx->pc = 0x320B68u;
label_320b68:
    // 0x320b68: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x320b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_320b6c:
    // 0x320b6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_320b70:
    // 0x320b70: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x320b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_320b74:
    // 0x320b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x320b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_320b78:
    // 0x320b78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_320b7c:
    // 0x320b7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_320b80:
    // 0x320b80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x320b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_320b84:
    // 0x320b84: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x320b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_320b88:
    // 0x320b88: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x320b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_320b8c:
    // 0x320b8c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x320b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_320b90:
    // 0x320b90: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x320b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_320b94:
    // 0x320b94: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x320b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_320b98:
    // 0x320b98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x320b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_320b9c:
    // 0x320b9c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x320b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_320ba0:
    // 0x320ba0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x320ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_320ba4:
    // 0x320ba4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x320ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_320ba8:
    // 0x320ba8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x320ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_320bac:
    // 0x320bac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x320bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_320bb0:
    // 0x320bb0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x320bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_320bb4:
    // 0x320bb4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x320bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_320bb8:
    // 0x320bb8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x320bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_320bbc:
    // 0x320bbc: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_320bc0:
    if (ctx->pc == 0x320BC0u) {
        ctx->pc = 0x320BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BBCu;
        // 0x320bc0: 0x8fc30020  lw          $v1, 0x20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320BC4u;
        goto label_320bc4;
    }
    ctx->pc = 0x320BBCu;
    {
        const bool branch_taken_0x320bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bbc) {
            ctx->pc = 0x320BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320BBCu;
            // 0x320bc0: 0x8fc30020  lw          $v1, 0x20($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320C10u;
            goto label_320c10;
        }
    }
    ctx->pc = 0x320BC4u;
label_320bc4:
    // 0x320bc4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x320bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_320bc8:
    // 0x320bc8: 0x8c6600a0  lw          $a2, 0xA0($v1)
    ctx->pc = 0x320bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_320bcc:
    // 0x320bcc: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x320bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_320bd0:
    // 0x320bd0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x320bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_320bd4:
    // 0x320bd4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_320bd8:
    if (ctx->pc == 0x320BD8u) {
        ctx->pc = 0x320BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BD4u;
        // 0x320bd8: 0x8fc30020  lw          $v1, 0x20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320BDCu;
        goto label_320bdc;
    }
    ctx->pc = 0x320BD4u;
    {
        const bool branch_taken_0x320bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320bd4) {
            ctx->pc = 0x320BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320BD4u;
            // 0x320bd8: 0x8fc30020  lw          $v1, 0x20($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320C10u;
            goto label_320c10;
        }
    }
    ctx->pc = 0x320BDCu;
label_320bdc:
    // 0x320bdc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_320be0:
    // 0x320be0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x320be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_320be4:
    // 0x320be4: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x320be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961468)));
label_320be8:
    // 0x320be8: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x320be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
label_320bec:
    // 0x320bec: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x320becu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_320bf0:
    // 0x320bf0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x320bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_320bf4:
    // 0x320bf4: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x320bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961468)));
label_320bf8:
    // 0x320bf8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x320bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_320bfc:
    // 0x320bfc: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x320bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961468), GPR_U32(ctx, 5));
label_320c00:
    // 0x320c00: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x320c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_320c04:
    // 0x320c04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x320c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_320c08:
    // 0x320c08: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x320c08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_320c0c:
    // 0x320c0c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x320c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_320c10:
    // 0x320c10: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x320c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
label_320c14:
    // 0x320c14: 0x2464004c  addiu       $a0, $v1, 0x4C
    ctx->pc = 0x320c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
label_320c18:
    // 0x320c18: 0x8c69003c  lw          $t1, 0x3C($v1)
    ctx->pc = 0x320c18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_320c1c:
    // 0x320c1c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x320c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_320c20:
    // 0x320c20: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x320c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_320c24:
    // 0x320c24: 0xafa901b4  sw          $t1, 0x1B4($sp)
    ctx->pc = 0x320c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 9));
label_320c28:
    // 0x320c28: 0x8c690024  lw          $t1, 0x24($v1)
    ctx->pc = 0x320c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_320c2c:
    // 0x320c2c: 0xafa901b0  sw          $t1, 0x1B0($sp)
    ctx->pc = 0x320c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 9));
label_320c30:
    // 0x320c30: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x320c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_320c34:
    // 0x320c34: 0x184000a1  blez        $v0, . + 4 + (0xA1 << 2)
label_320c38:
    if (ctx->pc == 0x320C38u) {
        ctx->pc = 0x320C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C34u;
        // 0x320c38: 0x8fd30008  lw          $s3, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C3Cu;
        goto label_320c3c;
    }
    ctx->pc = 0x320C34u;
    {
        const bool branch_taken_0x320c34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x320C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C34u;
        // 0x320c38: 0x8fd30008  lw          $s3, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c34) {
            ctx->pc = 0x320EBCu;
            goto label_320ebc;
        }
    }
    ctx->pc = 0x320C3Cu;
label_320c3c:
    // 0x320c3c: 0x32a24000  andi        $v0, $s5, 0x4000
    ctx->pc = 0x320c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16384);
label_320c40:
    // 0x320c40: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x320c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_320c44:
    // 0x320c44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x320c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_320c48:
    // 0x320c48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x320c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_320c4c:
    // 0x320c4c: 0x24960008  addiu       $s6, $a0, 0x8
    ctx->pc = 0x320c4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_320c50:
    // 0x320c50: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x320c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_320c54:
    // 0x320c54: 0x2471006c  addiu       $s1, $v1, 0x6C
    ctx->pc = 0x320c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_320c58:
    // 0x320c58: 0x32b51000  andi        $s5, $s5, 0x1000
    ctx->pc = 0x320c58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_320c5c:
    // 0x320c5c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x320c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320c60:
    // 0x320c60: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x320c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_320c64:
    // 0x320c64: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x320c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_320c68:
    // 0x320c68: 0x2484ece0  addiu       $a0, $a0, -0x1320
    ctx->pc = 0x320c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
label_320c6c:
    // 0x320c6c: 0x14640042  bne         $v1, $a0, . + 4 + (0x42 << 2)
label_320c70:
    if (ctx->pc == 0x320C70u) {
        ctx->pc = 0x320C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C6Cu;
        // 0x320c70: 0x8fa501bc  lw          $a1, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C74u;
        goto label_320c74;
    }
    ctx->pc = 0x320C6Cu;
    {
        const bool branch_taken_0x320c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x320C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C6Cu;
        // 0x320c70: 0x8fa501bc  lw          $a1, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c6c) {
            ctx->pc = 0x320D78u;
            goto label_320d78;
        }
    }
    ctx->pc = 0x320C74u;
label_320c74:
    // 0x320c74: 0xc626ffec  lwc1        $f6, -0x14($s1)
    ctx->pc = 0x320c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_320c78:
    // 0x320c78: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x320c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_320c7c:
    // 0x320c7c: 0xc620ffe8  lwc1        $f0, -0x18($s1)
    ctx->pc = 0x320c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_320c80:
    // 0x320c80: 0xc621fff0  lwc1        $f1, -0x10($s1)
    ctx->pc = 0x320c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_320c84:
    // 0x320c84: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x320c84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_320c88:
    // 0x320c88: 0xc624fff4  lwc1        $f4, -0xC($s1)
    ctx->pc = 0x320c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_320c8c:
    // 0x320c8c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x320c8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_320c90:
    // 0x320c90: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x320c90u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_320c94:
    // 0x320c94: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x320c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_320c98:
    // 0x320c98: 0x460122c2  mul.s       $f11, $f4, $f1
    ctx->pc = 0x320c98u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_320c9c:
    // 0x320c9c: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x320c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_320ca0:
    // 0x320ca0: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x320ca0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_320ca4:
    // 0x320ca4: 0xe7a50180  swc1        $f5, 0x180($sp)
    ctx->pc = 0x320ca4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_320ca8:
    // 0x320ca8: 0x46002242  mul.s       $f9, $f4, $f0
    ctx->pc = 0x320ca8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_320cac:
    // 0x320cac: 0xe7a70188  swc1        $f7, 0x188($sp)
    ctx->pc = 0x320cacu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_320cb0:
    // 0x320cb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x320cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_320cb4:
    // 0x320cb4: 0xe7ab01a8  swc1        $f11, 0x1A8($sp)
    ctx->pc = 0x320cb4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_320cb8:
    // 0x320cb8: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x320cb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_320cbc:
    // 0x320cbc: 0xe7a30190  swc1        $f3, 0x190($sp)
    ctx->pc = 0x320cbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_320cc0:
    // 0x320cc0: 0x46022a80  add.s       $f10, $f5, $f2
    ctx->pc = 0x320cc0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_320cc4:
    // 0x320cc4: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x320cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_320cc8:
    // 0x320cc8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x320cc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_320ccc:
    // 0x320ccc: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x320cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_320cd0:
    // 0x320cd0: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x320cd0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_320cd4:
    // 0x320cd4: 0xe7a901a0  swc1        $f9, 0x1A0($sp)
    ctx->pc = 0x320cd4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_320cd8:
    // 0x320cd8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x320cd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_320cdc:
    // 0x320cdc: 0xe7a401a4  swc1        $f4, 0x1A4($sp)
    ctx->pc = 0x320cdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_320ce0:
    // 0x320ce0: 0x46040a00  add.s       $f8, $f1, $f4
    ctx->pc = 0x320ce0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_320ce4:
    // 0x320ce4: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x320ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_320ce8:
    // 0x320ce8: 0x460b0181  sub.s       $f6, $f0, $f11
    ctx->pc = 0x320ce8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
label_320cec:
    // 0x320cec: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x320cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_320cf0:
    // 0x320cf0: 0x460919c1  sub.s       $f7, $f3, $f9
    ctx->pc = 0x320cf0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_320cf4:
    // 0x320cf4: 0xafa9014c  sw          $t1, 0x14C($sp)
    ctx->pc = 0x320cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 9));
label_320cf8:
    // 0x320cf8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x320cf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_320cfc:
    // 0x320cfc: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x320cfcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_320d00:
    // 0x320d00: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x320d00u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_320d04:
    // 0x320d04: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x320d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_320d08:
    // 0x320d08: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x320d08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_320d0c:
    // 0x320d0c: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x320d0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_320d10:
    // 0x320d10: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x320d10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_320d14:
    // 0x320d14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x320d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_320d18:
    // 0x320d18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x320d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_320d1c:
    // 0x320d1c: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x320d1cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_320d20:
    // 0x320d20: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x320d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_320d24:
    // 0x320d24: 0x4605a141  sub.s       $f5, $f20, $f5
    ctx->pc = 0x320d24u;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
label_320d28:
    // 0x320d28: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x320d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_320d2c:
    // 0x320d2c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x320d2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_320d30:
    // 0x320d30: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x320d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_320d34:
    // 0x320d34: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x320d34u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_320d38:
    // 0x320d38: 0xe7a60150  swc1        $f6, 0x150($sp)
    ctx->pc = 0x320d38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_320d3c:
    // 0x320d3c: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x320d3cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_320d40:
    // 0x320d40: 0xe7a50154  swc1        $f5, 0x154($sp)
    ctx->pc = 0x320d40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_320d44:
    // 0x320d44: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x320d44u;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_320d48:
    // 0x320d48: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x320d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_320d4c:
    // 0x320d4c: 0xe7a80160  swc1        $f8, 0x160($sp)
    ctx->pc = 0x320d4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_320d50:
    // 0x320d50: 0xe7a70164  swc1        $f7, 0x164($sp)
    ctx->pc = 0x320d50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_320d54:
    // 0x320d54: 0xe7aa0168  swc1        $f10, 0x168($sp)
    ctx->pc = 0x320d54u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_320d58:
    // 0x320d58: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x320d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_320d5c:
    // 0x320d5c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x320d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_320d60:
    // 0x320d60: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x320d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_320d64:
    // 0x320d64: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x320d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_320d68:
    // 0x320d68: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x320d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_320d6c:
    // 0x320d6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_320d70:
    if (ctx->pc == 0x320D70u) {
        ctx->pc = 0x320D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D6Cu;
        // 0x320d70: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D74u;
        goto label_320d74;
    }
    ctx->pc = 0x320D6Cu;
    {
        const bool branch_taken_0x320d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D6Cu;
        // 0x320d70: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d6c) {
            ctx->pc = 0x320D84u;
            goto label_320d84;
        }
    }
    ctx->pc = 0x320D74u;
label_320d74:
    // 0x320d74: 0x0  nop
    ctx->pc = 0x320d74u;
    // NOP
label_320d78:
    // 0x320d78: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x320d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_320d7c:
    // 0x320d7c: 0x40f809  jalr        $v0
label_320d80:
    if (ctx->pc == 0x320D80u) {
        ctx->pc = 0x320D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D7Cu;
        // 0x320d80: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D84u;
        goto label_320d84;
    }
    ctx->pc = 0x320D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320D84u);
        ctx->pc = 0x320D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D7Cu;
        // 0x320d80: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D7Cu, 0x320D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320D84u;
label_320d84:
    // 0x320d84: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x320d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_320d88:
    // 0x320d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x320d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320d8c:
    // 0x320d8c: 0xc103dd4  jal         func_40F750
label_320d90:
    if (ctx->pc == 0x320D90u) {
        ctx->pc = 0x320D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D8Cu;
        // 0x320d90: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320D94u;
        goto label_320d94;
    }
    ctx->pc = 0x320D8Cu;
    SET_GPR_U32(ctx, 31, 0x320D94u);
    ctx->pc = 0x320D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D8Cu;
    // 0x320d90: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x320D8Cu, 0x320D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D94u;
label_320d94:
    // 0x320d94: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x320d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_320d98:
    // 0x320d98: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_320d9c:
    if (ctx->pc == 0x320D9Cu) {
        ctx->pc = 0x320D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D98u;
        // 0x320d9c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DA0u;
        goto label_320da0;
    }
    ctx->pc = 0x320D98u;
    {
        const bool branch_taken_0x320d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d98) {
            ctx->pc = 0x320D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320D98u;
            // 0x320d9c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320E34u;
            goto label_320e34;
        }
    }
    ctx->pc = 0x320DA0u;
label_320da0:
    // 0x320da0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_320da4:
    if (ctx->pc == 0x320DA4u) {
        ctx->pc = 0x320DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DA0u;
        // 0x320da4: 0x7ba20140  lq          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DA8u;
        goto label_320da8;
    }
    ctx->pc = 0x320DA0u;
    {
        const bool branch_taken_0x320da0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x320DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DA0u;
        // 0x320da4: 0x7ba20140  lq          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320da0) {
            ctx->pc = 0x320DD8u;
            goto label_320dd8;
        }
    }
    ctx->pc = 0x320DA8u;
label_320da8:
    // 0x320da8: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x320da8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_320dac:
    // 0x320dac: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x320dacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_320db0:
    // 0x320db0: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x320db0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_320db4:
    // 0x320db4: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x320db4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_320db8:
    // 0x320db8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x320db8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_320dbc:
    // 0x320dbc: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x320dbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_320dc0:
    // 0x320dc0: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x320dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
label_320dc4:
    // 0x320dc4: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x320dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_320dc8:
    // 0x320dc8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_320dcc:
    if (ctx->pc == 0x320DCCu) {
        ctx->pc = 0x320DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DC8u;
        // 0x320dcc: 0x8fa901c0  lw          $t1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DD0u;
        goto label_320dd0;
    }
    ctx->pc = 0x320DC8u;
    {
        const bool branch_taken_0x320dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DC8u;
        // 0x320dcc: 0x8fa901c0  lw          $t1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320dc8) {
            ctx->pc = 0x320DE4u;
            goto label_320de4;
        }
    }
    ctx->pc = 0x320DD0u;
label_320dd0:
    // 0x320dd0: 0xc106794  jal         func_419E50
label_320dd4:
    if (ctx->pc == 0x320DD4u) {
        ctx->pc = 0x320DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DD0u;
        // 0x320dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DD8u;
        goto label_320dd8;
    }
    ctx->pc = 0x320DD0u;
    SET_GPR_U32(ctx, 31, 0x320DD8u);
    ctx->pc = 0x320DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DD0u;
    // 0x320dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x320DD0u, 0x320DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DD8u;
label_320dd8:
    // 0x320dd8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x320dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_320ddc:
    // 0x320ddc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_320de0:
    if (ctx->pc == 0x320DE0u) {
        ctx->pc = 0x320DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DDCu;
        // 0x320de0: 0x8fa901c0  lw          $t1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DE4u;
        goto label_320de4;
    }
    ctx->pc = 0x320DDCu;
    {
        const bool branch_taken_0x320ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x320DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DDCu;
        // 0x320de0: 0x8fa901c0  lw          $t1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ddc) {
            ctx->pc = 0x320E30u;
            goto label_320e30;
        }
    }
    ctx->pc = 0x320DE4u;
label_320de4:
    // 0x320de4: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
label_320de8:
    if (ctx->pc == 0x320DE8u) {
        ctx->pc = 0x320DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DE4u;
        // 0x320de8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DECu;
        goto label_320dec;
    }
    ctx->pc = 0x320DE4u;
    {
        const bool branch_taken_0x320de4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x320DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DE4u;
        // 0x320de8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320de4) {
            ctx->pc = 0x320E00u;
            goto label_320e00;
        }
    }
    ctx->pc = 0x320DECu;
label_320dec:
    // 0x320dec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x320decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320df0:
    // 0x320df0: 0xc103dd4  jal         func_40F750
label_320df4:
    if (ctx->pc == 0x320DF4u) {
        ctx->pc = 0x320DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DF0u;
        // 0x320df4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320DF8u;
        goto label_320df8;
    }
    ctx->pc = 0x320DF0u;
    SET_GPR_U32(ctx, 31, 0x320DF8u);
    ctx->pc = 0x320DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DF0u;
    // 0x320df4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x320DF0u, 0x320DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DF8u;
label_320df8:
    // 0x320df8: 0x1000000a  b           . + 4 + (0xA << 2)
label_320dfc:
    if (ctx->pc == 0x320DFCu) {
        ctx->pc = 0x320DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DF8u;
        // 0x320dfc: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E00u;
        goto label_320e00;
    }
    ctx->pc = 0x320DF8u;
    {
        const bool branch_taken_0x320df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DF8u;
        // 0x320dfc: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320df8) {
            ctx->pc = 0x320E24u;
            goto label_320e24;
        }
    }
    ctx->pc = 0x320E00u;
label_320e00:
    // 0x320e00: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x320e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_320e04:
    // 0x320e04: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x320e04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
label_320e08:
    // 0x320e08: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x320e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_320e0c:
    // 0x320e0c: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x320e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
label_320e10:
    // 0x320e10: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x320e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_320e14:
    // 0x320e14: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x320e14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_320e18:
    // 0x320e18: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x320e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_320e1c:
    // 0x320e1c: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x320e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
label_320e20:
    // 0x320e20: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x320e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_320e24:
    // 0x320e24: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x320e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
label_320e28:
    // 0x320e28: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x320e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_320e2c:
    // 0x320e2c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x320e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_320e30:
    // 0x320e30: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x320e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_320e34:
    // 0x320e34: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x320e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_320e38:
    // 0x320e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320e3c:
    // 0x320e3c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_320e40:
    if (ctx->pc == 0x320E40u) {
        ctx->pc = 0x320E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E3Cu;
        // 0x320e40: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E44u;
        goto label_320e44;
    }
    ctx->pc = 0x320E3Cu;
    {
        const bool branch_taken_0x320e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x320E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E3Cu;
        // 0x320e40: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e3c) {
            ctx->pc = 0x320E6Cu;
            goto label_320e6c;
        }
    }
    ctx->pc = 0x320E44u;
label_320e44:
    // 0x320e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_320e48:
    if (ctx->pc == 0x320E48u) {
        ctx->pc = 0x320E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E44u;
        // 0x320e48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E4Cu;
        goto label_320e4c;
    }
    ctx->pc = 0x320E44u;
    {
        const bool branch_taken_0x320e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E44u;
        // 0x320e48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e44) {
            ctx->pc = 0x320E5Cu;
            goto label_320e5c;
        }
    }
    ctx->pc = 0x320E4Cu;
label_320e4c:
    // 0x320e4c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_320e50:
    if (ctx->pc == 0x320E50u) {
        ctx->pc = 0x320E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E4Cu;
        // 0x320e50: 0x8fa901b8  lw          $t1, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E54u;
        goto label_320e54;
    }
    ctx->pc = 0x320E4Cu;
    {
        const bool branch_taken_0x320e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E4Cu;
        // 0x320e50: 0x8fa901b8  lw          $t1, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e4c) {
            ctx->pc = 0x320E80u;
            goto label_320e80;
        }
    }
    ctx->pc = 0x320E54u;
label_320e54:
    // 0x320e54: 0x1000000d  b           . + 4 + (0xD << 2)
label_320e58:
    if (ctx->pc == 0x320E58u) {
        ctx->pc = 0x320E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E54u;
        // 0x320e58: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E5Cu;
        goto label_320e5c;
    }
    ctx->pc = 0x320E54u;
    {
        const bool branch_taken_0x320e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E54u;
        // 0x320e58: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e54) {
            ctx->pc = 0x320E8Cu;
            goto label_320e8c;
        }
    }
    ctx->pc = 0x320E5Cu;
label_320e5c:
    // 0x320e5c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_320e60:
    if (ctx->pc == 0x320E60u) {
        ctx->pc = 0x320E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E5Cu;
        // 0x320e60: 0x8fa901b8  lw          $t1, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E64u;
        goto label_320e64;
    }
    ctx->pc = 0x320E5Cu;
    {
        const bool branch_taken_0x320e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x320E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E5Cu;
        // 0x320e60: 0x8fa901b8  lw          $t1, 0x1B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e5c) {
            ctx->pc = 0x320E78u;
            goto label_320e78;
        }
    }
    ctx->pc = 0x320E64u;
label_320e64:
    // 0x320e64: 0x10000009  b           . + 4 + (0x9 << 2)
label_320e68:
    if (ctx->pc == 0x320E68u) {
        ctx->pc = 0x320E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E64u;
        // 0x320e68: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E6Cu;
        goto label_320e6c;
    }
    ctx->pc = 0x320E64u;
    {
        const bool branch_taken_0x320e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E64u;
        // 0x320e68: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e64) {
            ctx->pc = 0x320E8Cu;
            goto label_320e8c;
        }
    }
    ctx->pc = 0x320E6Cu;
label_320e6c:
    // 0x320e6c: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x320e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_320e70:
    // 0x320e70: 0x10000004  b           . + 4 + (0x4 << 2)
label_320e74:
    if (ctx->pc == 0x320E74u) {
        ctx->pc = 0x320E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E70u;
        // 0x320e74: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E78u;
        goto label_320e78;
    }
    ctx->pc = 0x320E70u;
    {
        const bool branch_taken_0x320e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E70u;
        // 0x320e74: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320e70) {
            ctx->pc = 0x320E84u;
            goto label_320e84;
        }
    }
    ctx->pc = 0x320E78u;
label_320e78:
    // 0x320e78: 0xae970000  sw          $s7, 0x0($s4)
    ctx->pc = 0x320e78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 23));
label_320e7c:
    // 0x320e7c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x320e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_320e80:
    // 0x320e80: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x320e80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320e84:
    // 0x320e84: 0x8fa901b8  lw          $t1, 0x1B8($sp)
    ctx->pc = 0x320e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_320e88:
    // 0x320e88: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x320e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_320e8c:
    // 0x320e8c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x320e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_320e90:
    // 0x320e90: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x320e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_320e94:
    // 0x320e94: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x320e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_320e98:
    // 0x320e98: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x320e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_320e9c:
    // 0x320e9c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x320e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_320ea0:
    // 0x320ea0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x320ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_320ea4:
    // 0x320ea4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x320ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_320ea8:
    // 0x320ea8: 0xafa901b8  sw          $t1, 0x1B8($sp)
    ctx->pc = 0x320ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 9));
label_320eac:
    // 0x320eac: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x320eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_320eb0:
    // 0x320eb0: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x320eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_320eb4:
    // 0x320eb4: 0x1440ff6a  bnez        $v0, . + 4 + (-0x96 << 2)
label_320eb8:
    if (ctx->pc == 0x320EB8u) {
        ctx->pc = 0x320EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EB4u;
        // 0x320eb8: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EBCu;
        goto label_320ebc;
    }
    ctx->pc = 0x320EB4u;
    {
        const bool branch_taken_0x320eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EB4u;
        // 0x320eb8: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320eb4) {
            ctx->pc = 0x320C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320c60;
        }
    }
    ctx->pc = 0x320EBCu;
label_320ebc:
    // 0x320ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320ec0:
    // 0x320ec0: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x320ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_320ec4:
    // 0x320ec4: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x320ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_320ec8:
    // 0x320ec8: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x320ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_320ecc:
    // 0x320ecc: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x320eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_320ed0:
    // 0x320ed0: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x320ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_320ed4:
    // 0x320ed4: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x320ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_320ed8:
    // 0x320ed8: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x320ed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_320edc:
    // 0x320edc: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x320edcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_320ee0:
    // 0x320ee0: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x320ee0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_320ee4:
    // 0x320ee4: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x320ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_320ee8:
    // 0x320ee8: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x320ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_320eec:
    // 0x320eec: 0x3e00008  jr          $ra
label_320ef0:
    if (ctx->pc == 0x320EF0u) {
        ctx->pc = 0x320EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EECu;
        // 0x320ef0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320EF4u;
        goto label_320ef4;
    }
    ctx->pc = 0x320EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EECu;
        // 0x320ef0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320EF4u;
label_320ef4:
    // 0x320ef4: 0x0  nop
    ctx->pc = 0x320ef4u;
    // NOP
label_320ef8:
    // 0x320ef8: 0xaf84a5e8  sw          $a0, -0x5A18($gp)
    ctx->pc = 0x320ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944232), GPR_U32(ctx, 4));
label_320efc:
    // 0x320efc: 0x3e00008  jr          $ra
label_320f00:
    if (ctx->pc == 0x320F00u) {
        ctx->pc = 0x320F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EFCu;
        // 0x320f00: 0xaf85a5ec  sw          $a1, -0x5A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F04u;
        goto label_320f04;
    }
    ctx->pc = 0x320EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320EFCu;
        // 0x320f00: 0xaf85a5ec  sw          $a1, -0x5A14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F04u;
label_320f04:
    // 0x320f04: 0x0  nop
    ctx->pc = 0x320f04u;
    // NOP
    ctx->pc = 0x320f08u;
}
