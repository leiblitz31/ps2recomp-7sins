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

// Function: sub_00378A58
// Address: 0x378a58 - 0x379050
void sub_00378A58_0x378a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378A58_0x378a58");
#endif

    switch (ctx->pc) {
        case 0x378a58u: goto label_378a58;
        case 0x378a5cu: goto label_378a5c;
        case 0x378a60u: goto label_378a60;
        case 0x378a64u: goto label_378a64;
        case 0x378a68u: goto label_378a68;
        case 0x378a6cu: goto label_378a6c;
        case 0x378a70u: goto label_378a70;
        case 0x378a74u: goto label_378a74;
        case 0x378a78u: goto label_378a78;
        case 0x378a7cu: goto label_378a7c;
        case 0x378a80u: goto label_378a80;
        case 0x378a84u: goto label_378a84;
        case 0x378a88u: goto label_378a88;
        case 0x378a8cu: goto label_378a8c;
        case 0x378a90u: goto label_378a90;
        case 0x378a94u: goto label_378a94;
        case 0x378a98u: goto label_378a98;
        case 0x378a9cu: goto label_378a9c;
        case 0x378aa0u: goto label_378aa0;
        case 0x378aa4u: goto label_378aa4;
        case 0x378aa8u: goto label_378aa8;
        case 0x378aacu: goto label_378aac;
        case 0x378ab0u: goto label_378ab0;
        case 0x378ab4u: goto label_378ab4;
        case 0x378ab8u: goto label_378ab8;
        case 0x378abcu: goto label_378abc;
        case 0x378ac0u: goto label_378ac0;
        case 0x378ac4u: goto label_378ac4;
        case 0x378ac8u: goto label_378ac8;
        case 0x378accu: goto label_378acc;
        case 0x378ad0u: goto label_378ad0;
        case 0x378ad4u: goto label_378ad4;
        case 0x378ad8u: goto label_378ad8;
        case 0x378adcu: goto label_378adc;
        case 0x378ae0u: goto label_378ae0;
        case 0x378ae4u: goto label_378ae4;
        case 0x378ae8u: goto label_378ae8;
        case 0x378aecu: goto label_378aec;
        case 0x378af0u: goto label_378af0;
        case 0x378af4u: goto label_378af4;
        case 0x378af8u: goto label_378af8;
        case 0x378afcu: goto label_378afc;
        case 0x378b00u: goto label_378b00;
        case 0x378b04u: goto label_378b04;
        case 0x378b08u: goto label_378b08;
        case 0x378b0cu: goto label_378b0c;
        case 0x378b10u: goto label_378b10;
        case 0x378b14u: goto label_378b14;
        case 0x378b18u: goto label_378b18;
        case 0x378b1cu: goto label_378b1c;
        case 0x378b20u: goto label_378b20;
        case 0x378b24u: goto label_378b24;
        case 0x378b28u: goto label_378b28;
        case 0x378b2cu: goto label_378b2c;
        case 0x378b30u: goto label_378b30;
        case 0x378b34u: goto label_378b34;
        case 0x378b38u: goto label_378b38;
        case 0x378b3cu: goto label_378b3c;
        case 0x378b40u: goto label_378b40;
        case 0x378b44u: goto label_378b44;
        case 0x378b48u: goto label_378b48;
        case 0x378b4cu: goto label_378b4c;
        case 0x378b50u: goto label_378b50;
        case 0x378b54u: goto label_378b54;
        case 0x378b58u: goto label_378b58;
        case 0x378b5cu: goto label_378b5c;
        case 0x378b60u: goto label_378b60;
        case 0x378b64u: goto label_378b64;
        case 0x378b68u: goto label_378b68;
        case 0x378b6cu: goto label_378b6c;
        case 0x378b70u: goto label_378b70;
        case 0x378b74u: goto label_378b74;
        case 0x378b78u: goto label_378b78;
        case 0x378b7cu: goto label_378b7c;
        case 0x378b80u: goto label_378b80;
        case 0x378b84u: goto label_378b84;
        case 0x378b88u: goto label_378b88;
        case 0x378b8cu: goto label_378b8c;
        case 0x378b90u: goto label_378b90;
        case 0x378b94u: goto label_378b94;
        case 0x378b98u: goto label_378b98;
        case 0x378b9cu: goto label_378b9c;
        case 0x378ba0u: goto label_378ba0;
        case 0x378ba4u: goto label_378ba4;
        case 0x378ba8u: goto label_378ba8;
        case 0x378bacu: goto label_378bac;
        case 0x378bb0u: goto label_378bb0;
        case 0x378bb4u: goto label_378bb4;
        case 0x378bb8u: goto label_378bb8;
        case 0x378bbcu: goto label_378bbc;
        case 0x378bc0u: goto label_378bc0;
        case 0x378bc4u: goto label_378bc4;
        case 0x378bc8u: goto label_378bc8;
        case 0x378bccu: goto label_378bcc;
        case 0x378bd0u: goto label_378bd0;
        case 0x378bd4u: goto label_378bd4;
        case 0x378bd8u: goto label_378bd8;
        case 0x378bdcu: goto label_378bdc;
        case 0x378be0u: goto label_378be0;
        case 0x378be4u: goto label_378be4;
        case 0x378be8u: goto label_378be8;
        case 0x378becu: goto label_378bec;
        case 0x378bf0u: goto label_378bf0;
        case 0x378bf4u: goto label_378bf4;
        case 0x378bf8u: goto label_378bf8;
        case 0x378bfcu: goto label_378bfc;
        case 0x378c00u: goto label_378c00;
        case 0x378c04u: goto label_378c04;
        case 0x378c08u: goto label_378c08;
        case 0x378c0cu: goto label_378c0c;
        case 0x378c10u: goto label_378c10;
        case 0x378c14u: goto label_378c14;
        case 0x378c18u: goto label_378c18;
        case 0x378c1cu: goto label_378c1c;
        case 0x378c20u: goto label_378c20;
        case 0x378c24u: goto label_378c24;
        case 0x378c28u: goto label_378c28;
        case 0x378c2cu: goto label_378c2c;
        case 0x378c30u: goto label_378c30;
        case 0x378c34u: goto label_378c34;
        case 0x378c38u: goto label_378c38;
        case 0x378c3cu: goto label_378c3c;
        case 0x378c40u: goto label_378c40;
        case 0x378c44u: goto label_378c44;
        case 0x378c48u: goto label_378c48;
        case 0x378c4cu: goto label_378c4c;
        case 0x378c50u: goto label_378c50;
        case 0x378c54u: goto label_378c54;
        case 0x378c58u: goto label_378c58;
        case 0x378c5cu: goto label_378c5c;
        case 0x378c60u: goto label_378c60;
        case 0x378c64u: goto label_378c64;
        case 0x378c68u: goto label_378c68;
        case 0x378c6cu: goto label_378c6c;
        case 0x378c70u: goto label_378c70;
        case 0x378c74u: goto label_378c74;
        case 0x378c78u: goto label_378c78;
        case 0x378c7cu: goto label_378c7c;
        case 0x378c80u: goto label_378c80;
        case 0x378c84u: goto label_378c84;
        case 0x378c88u: goto label_378c88;
        case 0x378c8cu: goto label_378c8c;
        case 0x378c90u: goto label_378c90;
        case 0x378c94u: goto label_378c94;
        case 0x378c98u: goto label_378c98;
        case 0x378c9cu: goto label_378c9c;
        case 0x378ca0u: goto label_378ca0;
        case 0x378ca4u: goto label_378ca4;
        case 0x378ca8u: goto label_378ca8;
        case 0x378cacu: goto label_378cac;
        case 0x378cb0u: goto label_378cb0;
        case 0x378cb4u: goto label_378cb4;
        case 0x378cb8u: goto label_378cb8;
        case 0x378cbcu: goto label_378cbc;
        case 0x378cc0u: goto label_378cc0;
        case 0x378cc4u: goto label_378cc4;
        case 0x378cc8u: goto label_378cc8;
        case 0x378cccu: goto label_378ccc;
        case 0x378cd0u: goto label_378cd0;
        case 0x378cd4u: goto label_378cd4;
        case 0x378cd8u: goto label_378cd8;
        case 0x378cdcu: goto label_378cdc;
        case 0x378ce0u: goto label_378ce0;
        case 0x378ce4u: goto label_378ce4;
        case 0x378ce8u: goto label_378ce8;
        case 0x378cecu: goto label_378cec;
        case 0x378cf0u: goto label_378cf0;
        case 0x378cf4u: goto label_378cf4;
        case 0x378cf8u: goto label_378cf8;
        case 0x378cfcu: goto label_378cfc;
        case 0x378d00u: goto label_378d00;
        case 0x378d04u: goto label_378d04;
        case 0x378d08u: goto label_378d08;
        case 0x378d0cu: goto label_378d0c;
        case 0x378d10u: goto label_378d10;
        case 0x378d14u: goto label_378d14;
        case 0x378d18u: goto label_378d18;
        case 0x378d1cu: goto label_378d1c;
        case 0x378d20u: goto label_378d20;
        case 0x378d24u: goto label_378d24;
        case 0x378d28u: goto label_378d28;
        case 0x378d2cu: goto label_378d2c;
        case 0x378d30u: goto label_378d30;
        case 0x378d34u: goto label_378d34;
        case 0x378d38u: goto label_378d38;
        case 0x378d3cu: goto label_378d3c;
        case 0x378d40u: goto label_378d40;
        case 0x378d44u: goto label_378d44;
        case 0x378d48u: goto label_378d48;
        case 0x378d4cu: goto label_378d4c;
        case 0x378d50u: goto label_378d50;
        case 0x378d54u: goto label_378d54;
        case 0x378d58u: goto label_378d58;
        case 0x378d5cu: goto label_378d5c;
        case 0x378d60u: goto label_378d60;
        case 0x378d64u: goto label_378d64;
        case 0x378d68u: goto label_378d68;
        case 0x378d6cu: goto label_378d6c;
        case 0x378d70u: goto label_378d70;
        case 0x378d74u: goto label_378d74;
        case 0x378d78u: goto label_378d78;
        case 0x378d7cu: goto label_378d7c;
        case 0x378d80u: goto label_378d80;
        case 0x378d84u: goto label_378d84;
        case 0x378d88u: goto label_378d88;
        case 0x378d8cu: goto label_378d8c;
        case 0x378d90u: goto label_378d90;
        case 0x378d94u: goto label_378d94;
        case 0x378d98u: goto label_378d98;
        case 0x378d9cu: goto label_378d9c;
        case 0x378da0u: goto label_378da0;
        case 0x378da4u: goto label_378da4;
        case 0x378da8u: goto label_378da8;
        case 0x378dacu: goto label_378dac;
        case 0x378db0u: goto label_378db0;
        case 0x378db4u: goto label_378db4;
        case 0x378db8u: goto label_378db8;
        case 0x378dbcu: goto label_378dbc;
        case 0x378dc0u: goto label_378dc0;
        case 0x378dc4u: goto label_378dc4;
        case 0x378dc8u: goto label_378dc8;
        case 0x378dccu: goto label_378dcc;
        case 0x378dd0u: goto label_378dd0;
        case 0x378dd4u: goto label_378dd4;
        case 0x378dd8u: goto label_378dd8;
        case 0x378ddcu: goto label_378ddc;
        case 0x378de0u: goto label_378de0;
        case 0x378de4u: goto label_378de4;
        case 0x378de8u: goto label_378de8;
        case 0x378decu: goto label_378dec;
        case 0x378df0u: goto label_378df0;
        case 0x378df4u: goto label_378df4;
        case 0x378df8u: goto label_378df8;
        case 0x378dfcu: goto label_378dfc;
        case 0x378e00u: goto label_378e00;
        case 0x378e04u: goto label_378e04;
        case 0x378e08u: goto label_378e08;
        case 0x378e0cu: goto label_378e0c;
        case 0x378e10u: goto label_378e10;
        case 0x378e14u: goto label_378e14;
        case 0x378e18u: goto label_378e18;
        case 0x378e1cu: goto label_378e1c;
        case 0x378e20u: goto label_378e20;
        case 0x378e24u: goto label_378e24;
        case 0x378e28u: goto label_378e28;
        case 0x378e2cu: goto label_378e2c;
        case 0x378e30u: goto label_378e30;
        case 0x378e34u: goto label_378e34;
        case 0x378e38u: goto label_378e38;
        case 0x378e3cu: goto label_378e3c;
        case 0x378e40u: goto label_378e40;
        case 0x378e44u: goto label_378e44;
        case 0x378e48u: goto label_378e48;
        case 0x378e4cu: goto label_378e4c;
        case 0x378e50u: goto label_378e50;
        case 0x378e54u: goto label_378e54;
        case 0x378e58u: goto label_378e58;
        case 0x378e5cu: goto label_378e5c;
        case 0x378e60u: goto label_378e60;
        case 0x378e64u: goto label_378e64;
        case 0x378e68u: goto label_378e68;
        case 0x378e6cu: goto label_378e6c;
        case 0x378e70u: goto label_378e70;
        case 0x378e74u: goto label_378e74;
        case 0x378e78u: goto label_378e78;
        case 0x378e7cu: goto label_378e7c;
        case 0x378e80u: goto label_378e80;
        case 0x378e84u: goto label_378e84;
        case 0x378e88u: goto label_378e88;
        case 0x378e8cu: goto label_378e8c;
        case 0x378e90u: goto label_378e90;
        case 0x378e94u: goto label_378e94;
        case 0x378e98u: goto label_378e98;
        case 0x378e9cu: goto label_378e9c;
        case 0x378ea0u: goto label_378ea0;
        case 0x378ea4u: goto label_378ea4;
        case 0x378ea8u: goto label_378ea8;
        case 0x378eacu: goto label_378eac;
        case 0x378eb0u: goto label_378eb0;
        case 0x378eb4u: goto label_378eb4;
        case 0x378eb8u: goto label_378eb8;
        case 0x378ebcu: goto label_378ebc;
        case 0x378ec0u: goto label_378ec0;
        case 0x378ec4u: goto label_378ec4;
        case 0x378ec8u: goto label_378ec8;
        case 0x378eccu: goto label_378ecc;
        case 0x378ed0u: goto label_378ed0;
        case 0x378ed4u: goto label_378ed4;
        case 0x378ed8u: goto label_378ed8;
        case 0x378edcu: goto label_378edc;
        case 0x378ee0u: goto label_378ee0;
        case 0x378ee4u: goto label_378ee4;
        case 0x378ee8u: goto label_378ee8;
        case 0x378eecu: goto label_378eec;
        case 0x378ef0u: goto label_378ef0;
        case 0x378ef4u: goto label_378ef4;
        case 0x378ef8u: goto label_378ef8;
        case 0x378efcu: goto label_378efc;
        case 0x378f00u: goto label_378f00;
        case 0x378f04u: goto label_378f04;
        case 0x378f08u: goto label_378f08;
        case 0x378f0cu: goto label_378f0c;
        case 0x378f10u: goto label_378f10;
        case 0x378f14u: goto label_378f14;
        case 0x378f18u: goto label_378f18;
        case 0x378f1cu: goto label_378f1c;
        case 0x378f20u: goto label_378f20;
        case 0x378f24u: goto label_378f24;
        case 0x378f28u: goto label_378f28;
        case 0x378f2cu: goto label_378f2c;
        case 0x378f30u: goto label_378f30;
        case 0x378f34u: goto label_378f34;
        case 0x378f38u: goto label_378f38;
        case 0x378f3cu: goto label_378f3c;
        case 0x378f40u: goto label_378f40;
        case 0x378f44u: goto label_378f44;
        case 0x378f48u: goto label_378f48;
        case 0x378f4cu: goto label_378f4c;
        case 0x378f50u: goto label_378f50;
        case 0x378f54u: goto label_378f54;
        case 0x378f58u: goto label_378f58;
        case 0x378f5cu: goto label_378f5c;
        case 0x378f60u: goto label_378f60;
        case 0x378f64u: goto label_378f64;
        case 0x378f68u: goto label_378f68;
        case 0x378f6cu: goto label_378f6c;
        case 0x378f70u: goto label_378f70;
        case 0x378f74u: goto label_378f74;
        case 0x378f78u: goto label_378f78;
        case 0x378f7cu: goto label_378f7c;
        case 0x378f80u: goto label_378f80;
        case 0x378f84u: goto label_378f84;
        case 0x378f88u: goto label_378f88;
        case 0x378f8cu: goto label_378f8c;
        case 0x378f90u: goto label_378f90;
        case 0x378f94u: goto label_378f94;
        case 0x378f98u: goto label_378f98;
        case 0x378f9cu: goto label_378f9c;
        case 0x378fa0u: goto label_378fa0;
        case 0x378fa4u: goto label_378fa4;
        case 0x378fa8u: goto label_378fa8;
        case 0x378facu: goto label_378fac;
        case 0x378fb0u: goto label_378fb0;
        case 0x378fb4u: goto label_378fb4;
        case 0x378fb8u: goto label_378fb8;
        case 0x378fbcu: goto label_378fbc;
        case 0x378fc0u: goto label_378fc0;
        case 0x378fc4u: goto label_378fc4;
        case 0x378fc8u: goto label_378fc8;
        case 0x378fccu: goto label_378fcc;
        case 0x378fd0u: goto label_378fd0;
        case 0x378fd4u: goto label_378fd4;
        case 0x378fd8u: goto label_378fd8;
        case 0x378fdcu: goto label_378fdc;
        case 0x378fe0u: goto label_378fe0;
        case 0x378fe4u: goto label_378fe4;
        case 0x378fe8u: goto label_378fe8;
        case 0x378fecu: goto label_378fec;
        case 0x378ff0u: goto label_378ff0;
        case 0x378ff4u: goto label_378ff4;
        case 0x378ff8u: goto label_378ff8;
        case 0x378ffcu: goto label_378ffc;
        case 0x379000u: goto label_379000;
        case 0x379004u: goto label_379004;
        case 0x379008u: goto label_379008;
        case 0x37900cu: goto label_37900c;
        case 0x379010u: goto label_379010;
        case 0x379014u: goto label_379014;
        case 0x379018u: goto label_379018;
        case 0x37901cu: goto label_37901c;
        case 0x379020u: goto label_379020;
        case 0x379024u: goto label_379024;
        case 0x379028u: goto label_379028;
        case 0x37902cu: goto label_37902c;
        case 0x379030u: goto label_379030;
        case 0x379034u: goto label_379034;
        case 0x379038u: goto label_379038;
        case 0x37903cu: goto label_37903c;
        case 0x379040u: goto label_379040;
        case 0x379044u: goto label_379044;
        case 0x379048u: goto label_379048;
        case 0x37904cu: goto label_37904c;
        default: break;
    }

    ctx->pc = 0x378a58u;

label_378a58:
    // 0x378a58: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x378a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_378a5c:
    // 0x378a5c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x378a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_378a60:
    // 0x378a60: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x378a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_378a64:
    // 0x378a64: 0x2442ac48  addiu       $v0, $v0, -0x53B8
    ctx->pc = 0x378a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945864));
label_378a68:
    // 0x378a68: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x378a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_378a6c:
    // 0x378a6c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x378a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_378a70:
    // 0x378a70: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x378a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_378a74:
    // 0x378a74: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x378a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_378a78:
    // 0x378a78: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x378a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_378a7c:
    // 0x378a7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x378a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378a80:
    // 0x378a80: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x378a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_378a84:
    // 0x378a84: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x378a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_378a88:
    // 0x378a88: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x378a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_378a8c:
    // 0x378a8c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x378a8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_378a90:
    // 0x378a90: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x378a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_378a94:
    // 0x378a94: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x378a94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_378a98:
    // 0x378a98: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x378a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_378a9c:
    // 0x378a9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x378a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_378aa0:
    // 0x378aa0: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x378aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_378aa4:
    // 0x378aa4: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x378aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_378aa8:
    // 0x378aa8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x378aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_378aac:
    // 0x378aac: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x378aacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_378ab0:
    // 0x378ab0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x378ab0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_378ab4:
    // 0x378ab4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x378ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_378ab8:
    // 0x378ab8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x378ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_378abc:
    // 0x378abc: 0x40f809  jalr        $v0
label_378ac0:
    if (ctx->pc == 0x378AC0u) {
        ctx->pc = 0x378AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378ABCu;
        // 0x378ac0: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378AC4u;
        goto label_378ac4;
    }
    ctx->pc = 0x378ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378AC4u);
        ctx->pc = 0x378AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378ABCu;
        // 0x378ac0: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378ABCu, 0x378AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378AC4u;
label_378ac4:
    // 0x378ac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x378ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378ac8:
    // 0x378ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x378ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378acc:
    // 0x378acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x378accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_378ad0:
    // 0x378ad0: 0xc0bb7e6  jal         func_2EDF98
label_378ad4:
    if (ctx->pc == 0x378AD4u) {
        ctx->pc = 0x378AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AD0u;
        // 0x378ad4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378AD8u;
        goto label_378ad8;
    }
    ctx->pc = 0x378AD0u;
    SET_GPR_U32(ctx, 31, 0x378AD8u);
    ctx->pc = 0x378AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AD0u;
    // 0x378ad4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x378AD0u, 0x378AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AD8u;
label_378ad8:
    // 0x378ad8: 0x16000066  bnez        $s0, . + 4 + (0x66 << 2)
label_378adc:
    if (ctx->pc == 0x378ADCu) {
        ctx->pc = 0x378ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AD8u;
        // 0x378adc: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378AE0u;
        goto label_378ae0;
    }
    ctx->pc = 0x378AD8u;
    {
        const bool branch_taken_0x378ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x378ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AD8u;
        // 0x378adc: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ad8) {
            ctx->pc = 0x378C74u;
            goto label_378c74;
        }
    }
    ctx->pc = 0x378AE0u;
label_378ae0:
    // 0x378ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378ae4:
    // 0x378ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x378ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378ae8:
    // 0x378ae8: 0x12600061  beqz        $s3, . + 4 + (0x61 << 2)
label_378aec:
    if (ctx->pc == 0x378AECu) {
        ctx->pc = 0x378AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AE8u;
        // 0x378aec: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378AF0u;
        goto label_378af0;
    }
    ctx->pc = 0x378AE8u;
    {
        const bool branch_taken_0x378ae8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x378AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AE8u;
        // 0x378aec: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ae8) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378AF0u;
label_378af0:
    // 0x378af0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x378af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_378af4:
    // 0x378af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x378af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378af8:
    // 0x378af8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x378af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378afc:
    // 0x378afc: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
label_378b00:
    if (ctx->pc == 0x378B00u) {
        ctx->pc = 0x378B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AFCu;
        // 0x378b00: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B04u;
        goto label_378b04;
    }
    ctx->pc = 0x378AFCu;
    {
        const bool branch_taken_0x378afc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x378B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AFCu;
        // 0x378b00: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378afc) {
            ctx->pc = 0x378B0Cu;
            goto label_378b0c;
        }
    }
    ctx->pc = 0x378B04u;
label_378b04:
    // 0x378b04: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_378b08:
    if (ctx->pc == 0x378B08u) {
        ctx->pc = 0x378B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B04u;
        // 0x378b08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B0Cu;
        goto label_378b0c;
    }
    ctx->pc = 0x378B04u;
    {
        const bool branch_taken_0x378b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378b04) {
            ctx->pc = 0x378B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378B04u;
            // 0x378b08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B74u;
            goto label_378b74;
        }
    }
    ctx->pc = 0x378B0Cu;
label_378b0c:
    // 0x378b0c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x378b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_378b10:
    // 0x378b10: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_378b14:
    if (ctx->pc == 0x378B14u) {
        ctx->pc = 0x378B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B10u;
        // 0x378b14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B18u;
        goto label_378b18;
    }
    ctx->pc = 0x378B10u;
    {
        const bool branch_taken_0x378b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B10u;
        // 0x378b14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b10) {
            ctx->pc = 0x378B5Cu;
            goto label_378b5c;
        }
    }
    ctx->pc = 0x378B18u;
label_378b18:
    // 0x378b18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_378b1c:
    // 0x378b1c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x378b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_378b20:
    // 0x378b20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x378b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_378b24:
    // 0x378b24: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x378b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_378b28:
    // 0x378b28: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x378b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_378b2c:
    // 0x378b2c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_378b30:
    if (ctx->pc == 0x378B30u) {
        ctx->pc = 0x378B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B2Cu;
        // 0x378b30: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B34u;
        goto label_378b34;
    }
    ctx->pc = 0x378B2Cu;
    {
        const bool branch_taken_0x378b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378b2c) {
            ctx->pc = 0x378B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378B2Cu;
            // 0x378b30: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B60u;
            goto label_378b60;
        }
    }
    ctx->pc = 0x378B34u;
label_378b34:
    // 0x378b34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x378b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_378b38:
    // 0x378b38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_378b3c:
    if (ctx->pc == 0x378B3Cu) {
        ctx->pc = 0x378B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B38u;
        // 0x378b3c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B40u;
        goto label_378b40;
    }
    ctx->pc = 0x378B38u;
    {
        const bool branch_taken_0x378b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378b38) {
            ctx->pc = 0x378B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378B38u;
            // 0x378b3c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378B60u;
            goto label_378b60;
        }
    }
    ctx->pc = 0x378B40u;
label_378b40:
    // 0x378b40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x378b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378b44:
    // 0x378b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_378b48:
    // 0x378b48: 0x10450049  beq         $v0, $a1, . + 4 + (0x49 << 2)
label_378b4c:
    if (ctx->pc == 0x378B4Cu) {
        ctx->pc = 0x378B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B48u;
        // 0x378b4c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B50u;
        goto label_378b50;
    }
    ctx->pc = 0x378B48u;
    {
        const bool branch_taken_0x378b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x378B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B48u;
        // 0x378b4c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b48) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378B50u;
label_378b50:
    // 0x378b50: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x378b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_378b54:
    // 0x378b54: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_378b58:
    if (ctx->pc == 0x378B58u) {
        ctx->pc = 0x378B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B54u;
        // 0x378b58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B5Cu;
        goto label_378b5c;
    }
    ctx->pc = 0x378B54u;
    {
        const bool branch_taken_0x378b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B54u;
        // 0x378b58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b54) {
            ctx->pc = 0x378B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378b28;
        }
    }
    ctx->pc = 0x378B5Cu;
label_378b5c:
    // 0x378b5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x378b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_378b60:
    // 0x378b60: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x378b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_378b64:
    // 0x378b64: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x378b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_378b68:
    // 0x378b68: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_378b6c:
    if (ctx->pc == 0x378B6Cu) {
        ctx->pc = 0x378B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B68u;
        // 0x378b6c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B70u;
        goto label_378b70;
    }
    ctx->pc = 0x378B68u;
    {
        const bool branch_taken_0x378b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B68u;
        // 0x378b6c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b68) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378B70u;
label_378b70:
    // 0x378b70: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x378b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378b74:
    // 0x378b74: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x378b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_378b78:
    // 0x378b78: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_378b7c:
    if (ctx->pc == 0x378B7Cu) {
        ctx->pc = 0x378B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B78u;
        // 0x378b7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B80u;
        goto label_378b80;
    }
    ctx->pc = 0x378B78u;
    {
        const bool branch_taken_0x378b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B78u;
        // 0x378b7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b78) {
            ctx->pc = 0x378BE4u;
            goto label_378be4;
        }
    }
    ctx->pc = 0x378B80u;
label_378b80:
    // 0x378b80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x378b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_378b84:
    // 0x378b84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x378b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_378b88:
    // 0x378b88: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_378b8c:
    if (ctx->pc == 0x378B8Cu) {
        ctx->pc = 0x378B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B88u;
        // 0x378b8c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B90u;
        goto label_378b90;
    }
    ctx->pc = 0x378B88u;
    {
        const bool branch_taken_0x378b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B88u;
        // 0x378b8c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b88) {
            ctx->pc = 0x378BE4u;
            goto label_378be4;
        }
    }
    ctx->pc = 0x378B90u;
label_378b90:
    // 0x378b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x378b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378b94:
    // 0x378b94: 0x10890036  beq         $a0, $t1, . + 4 + (0x36 << 2)
label_378b98:
    if (ctx->pc == 0x378B98u) {
        ctx->pc = 0x378B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B94u;
        // 0x378b98: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378B9Cu;
        goto label_378b9c;
    }
    ctx->pc = 0x378B94u;
    {
        const bool branch_taken_0x378b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x378B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B94u;
        // 0x378b98: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b94) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378B9Cu;
label_378b9c:
    // 0x378b9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x378b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_378ba0:
    // 0x378ba0: 0x1141021  addu        $v0, $t0, $s4
    ctx->pc = 0x378ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_378ba4:
    // 0x378ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x378ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_378ba8:
    // 0x378ba8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_378bac:
    // 0x378bac: 0x0  nop
    ctx->pc = 0x378bacu;
    // NOP
label_378bb0:
    // 0x378bb0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x378bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_378bb4:
    // 0x378bb4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_378bb8:
    if (ctx->pc == 0x378BB8u) {
        ctx->pc = 0x378BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BB4u;
        // 0x378bb8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378BBCu;
        goto label_378bbc;
    }
    ctx->pc = 0x378BB4u;
    {
        const bool branch_taken_0x378bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378bb4) {
            ctx->pc = 0x378BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378BB4u;
            // 0x378bb8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378BE8u;
            goto label_378be8;
        }
    }
    ctx->pc = 0x378BBCu;
label_378bbc:
    // 0x378bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x378bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_378bc0:
    // 0x378bc0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_378bc4:
    if (ctx->pc == 0x378BC4u) {
        ctx->pc = 0x378BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BC0u;
        // 0x378bc4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378BC8u;
        goto label_378bc8;
    }
    ctx->pc = 0x378BC0u;
    {
        const bool branch_taken_0x378bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378bc0) {
            ctx->pc = 0x378BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378BC0u;
            // 0x378bc4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378BE8u;
            goto label_378be8;
        }
    }
    ctx->pc = 0x378BC8u;
label_378bc8:
    // 0x378bc8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x378bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378bcc:
    // 0x378bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_378bd0:
    // 0x378bd0: 0x10450027  beq         $v0, $a1, . + 4 + (0x27 << 2)
label_378bd4:
    if (ctx->pc == 0x378BD4u) {
        ctx->pc = 0x378BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BD0u;
        // 0x378bd4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378BD8u;
        goto label_378bd8;
    }
    ctx->pc = 0x378BD0u;
    {
        const bool branch_taken_0x378bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x378BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BD0u;
        // 0x378bd4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bd0) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378BD8u;
label_378bd8:
    // 0x378bd8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x378bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_378bdc:
    // 0x378bdc: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_378be0:
    if (ctx->pc == 0x378BE0u) {
        ctx->pc = 0x378BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BDCu;
        // 0x378be0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378BE4u;
        goto label_378be4;
    }
    ctx->pc = 0x378BDCu;
    {
        const bool branch_taken_0x378bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BDCu;
        // 0x378be0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bdc) {
            ctx->pc = 0x378BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378bb0;
        }
    }
    ctx->pc = 0x378BE4u;
label_378be4:
    // 0x378be4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x378be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378be8:
    // 0x378be8: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x378be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_378bec:
    // 0x378bec: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x378becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_378bf0:
    // 0x378bf0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_378bf4:
    if (ctx->pc == 0x378BF4u) {
        ctx->pc = 0x378BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BF0u;
        // 0x378bf4: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378BF8u;
        goto label_378bf8;
    }
    ctx->pc = 0x378BF0u;
    {
        const bool branch_taken_0x378bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BF0u;
        // 0x378bf4: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bf0) {
            ctx->pc = 0x378C5Cu;
            goto label_378c5c;
        }
    }
    ctx->pc = 0x378BF8u;
label_378bf8:
    // 0x378bf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x378bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_378bfc:
    // 0x378bfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378c00:
    // 0x378c00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x378c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_378c04:
    // 0x378c04: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_378c08:
    if (ctx->pc == 0x378C08u) {
        ctx->pc = 0x378C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C04u;
        // 0x378c08: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C0Cu;
        goto label_378c0c;
    }
    ctx->pc = 0x378C04u;
    {
        const bool branch_taken_0x378c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C04u;
        // 0x378c08: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c04) {
            ctx->pc = 0x378C5Cu;
            goto label_378c5c;
        }
    }
    ctx->pc = 0x378C0Cu;
label_378c0c:
    // 0x378c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x378c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378c10:
    // 0x378c10: 0x10890017  beq         $a0, $t1, . + 4 + (0x17 << 2)
label_378c14:
    if (ctx->pc == 0x378C14u) {
        ctx->pc = 0x378C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C10u;
        // 0x378c14: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C18u;
        goto label_378c18;
    }
    ctx->pc = 0x378C10u;
    {
        const bool branch_taken_0x378c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x378C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C10u;
        // 0x378c14: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c10) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378C18u;
label_378c18:
    // 0x378c18: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x378c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_378c1c:
    // 0x378c1c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x378c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_378c20:
    // 0x378c20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x378c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_378c24:
    // 0x378c24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_378c28:
    // 0x378c28: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x378c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_378c2c:
    // 0x378c2c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_378c30:
    if (ctx->pc == 0x378C30u) {
        ctx->pc = 0x378C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C2Cu;
        // 0x378c30: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C34u;
        goto label_378c34;
    }
    ctx->pc = 0x378C2Cu;
    {
        const bool branch_taken_0x378c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378c2c) {
            ctx->pc = 0x378C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378C2Cu;
            // 0x378c30: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378C60u;
            goto label_378c60;
        }
    }
    ctx->pc = 0x378C34u;
label_378c34:
    // 0x378c34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x378c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_378c38:
    // 0x378c38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_378c3c:
    if (ctx->pc == 0x378C3Cu) {
        ctx->pc = 0x378C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C38u;
        // 0x378c3c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C40u;
        goto label_378c40;
    }
    ctx->pc = 0x378C38u;
    {
        const bool branch_taken_0x378c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378c38) {
            ctx->pc = 0x378C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378C38u;
            // 0x378c3c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378C60u;
            goto label_378c60;
        }
    }
    ctx->pc = 0x378C40u;
label_378c40:
    // 0x378c40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x378c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378c44:
    // 0x378c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_378c48:
    // 0x378c48: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
label_378c4c:
    if (ctx->pc == 0x378C4Cu) {
        ctx->pc = 0x378C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C48u;
        // 0x378c4c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C50u;
        goto label_378c50;
    }
    ctx->pc = 0x378C48u;
    {
        const bool branch_taken_0x378c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x378C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C48u;
        // 0x378c4c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c48) {
            ctx->pc = 0x378C70u;
            goto label_378c70;
        }
    }
    ctx->pc = 0x378C50u;
label_378c50:
    // 0x378c50: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x378c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_378c54:
    // 0x378c54: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_378c58:
    if (ctx->pc == 0x378C58u) {
        ctx->pc = 0x378C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C54u;
        // 0x378c58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C5Cu;
        goto label_378c5c;
    }
    ctx->pc = 0x378C54u;
    {
        const bool branch_taken_0x378c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C54u;
        // 0x378c58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c54) {
            ctx->pc = 0x378C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378c28;
        }
    }
    ctx->pc = 0x378C5Cu;
label_378c5c:
    // 0x378c5c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x378c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_378c60:
    // 0x378c60: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x378c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_378c64:
    // 0x378c64: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x378c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_378c68:
    // 0x378c68: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_378c6c:
    if (ctx->pc == 0x378C6Cu) {
        ctx->pc = 0x378C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C68u;
        // 0x378c6c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C70u;
        goto label_378c70;
    }
    ctx->pc = 0x378C68u;
    {
        const bool branch_taken_0x378c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C68u;
        // 0x378c6c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c68) {
            ctx->pc = 0x378B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378b70;
        }
    }
    ctx->pc = 0x378C70u;
label_378c70:
    // 0x378c70: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x378c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_378c74:
    // 0x378c74: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_378c78:
    if (ctx->pc == 0x378C78u) {
        ctx->pc = 0x378C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C74u;
        // 0x378c78: 0x17a980  sll         $s5, $s7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C7Cu;
        goto label_378c7c;
    }
    ctx->pc = 0x378C74u;
    {
        const bool branch_taken_0x378c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C74u;
        // 0x378c78: 0x17a980  sll         $s5, $s7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c74) {
            ctx->pc = 0x378D58u;
            goto label_378d58;
        }
    }
    ctx->pc = 0x378C7Cu;
label_378c7c:
    // 0x378c7c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x378c7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_378c80:
    // 0x378c80: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x378c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_378c84:
    // 0x378c84: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x378c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_378c88:
    // 0x378c88: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_378c8c:
    if (ctx->pc == 0x378C8Cu) {
        ctx->pc = 0x378C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C88u;
        // 0x378c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378C90u;
        goto label_378c90;
    }
    ctx->pc = 0x378C88u;
    {
        const bool branch_taken_0x378c88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x378C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C88u;
        // 0x378c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c88) {
            ctx->pc = 0x378D58u;
            goto label_378d58;
        }
    }
    ctx->pc = 0x378C90u;
label_378c90:
    // 0x378c90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x378c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378c94:
    // 0x378c94: 0x0  nop
    ctx->pc = 0x378c94u;
    // NOP
label_378c98:
    // 0x378c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x378c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378c9c:
    // 0x378c9c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_378ca0:
    if (ctx->pc == 0x378CA0u) {
        ctx->pc = 0x378CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C9Cu;
        // 0x378ca0: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378CA4u;
        goto label_378ca4;
    }
    ctx->pc = 0x378C9Cu;
    {
        const bool branch_taken_0x378c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C9Cu;
        // 0x378ca0: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378c9c) {
            ctx->pc = 0x378D48u;
            goto label_378d48;
        }
    }
    ctx->pc = 0x378CA4u;
label_378ca4:
    // 0x378ca4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x378ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_378ca8:
    // 0x378ca8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x378ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_378cac:
    // 0x378cac: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x378cacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_378cb0:
    // 0x378cb0: 0x765821  addu        $t3, $v1, $s6
    ctx->pc = 0x378cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_378cb4:
    // 0x378cb4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x378cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_378cb8:
    // 0x378cb8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x378cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_378cbc:
    // 0x378cbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x378cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_378cc0:
    // 0x378cc0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_378cc4:
    if (ctx->pc == 0x378CC4u) {
        ctx->pc = 0x378CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CC0u;
        // 0x378cc4: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378CC8u;
        goto label_378cc8;
    }
    ctx->pc = 0x378CC0u;
    {
        const bool branch_taken_0x378cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CC0u;
        // 0x378cc4: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cc0) {
            ctx->pc = 0x378D34u;
            goto label_378d34;
        }
    }
    ctx->pc = 0x378CC8u;
label_378cc8:
    // 0x378cc8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x378cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_378ccc:
    // 0x378ccc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x378cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_378cd0:
    // 0x378cd0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x378cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_378cd4:
    // 0x378cd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x378cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378cd8:
    // 0x378cd8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x378cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_378cdc:
    // 0x378cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x378cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378ce0:
    // 0x378ce0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x378ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_378ce4:
    // 0x378ce4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_378ce8:
    if (ctx->pc == 0x378CE8u) {
        ctx->pc = 0x378CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CE4u;
        // 0x378ce8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x378CECu;
        goto label_378cec;
    }
    ctx->pc = 0x378CE4u;
    {
        const bool branch_taken_0x378ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CE4u;
        // 0x378ce8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ce4) {
            ctx->pc = 0x378D1Cu;
            goto label_378d1c;
        }
    }
    ctx->pc = 0x378CECu;
label_378cec:
    // 0x378cec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x378cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_378cf0:
    // 0x378cf0: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_378cf4:
    if (ctx->pc == 0x378CF4u) {
        ctx->pc = 0x378CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CF0u;
        // 0x378cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378CF8u;
        goto label_378cf8;
    }
    ctx->pc = 0x378CF0u;
    {
        const bool branch_taken_0x378cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x378cf0) {
            ctx->pc = 0x378CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378CF0u;
            // 0x378cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378D1Cu;
            goto label_378d1c;
        }
    }
    ctx->pc = 0x378CF8u;
label_378cf8:
    // 0x378cf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x378cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_378cfc:
    // 0x378cfc: 0x0  nop
    ctx->pc = 0x378cfcu;
    // NOP
label_378d00:
    // 0x378d00: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x378d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_378d04:
    // 0x378d04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_378d08:
    if (ctx->pc == 0x378D08u) {
        ctx->pc = 0x378D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D04u;
        // 0x378d08: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D0Cu;
        goto label_378d0c;
    }
    ctx->pc = 0x378D04u;
    {
        const bool branch_taken_0x378d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D04u;
        // 0x378d08: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d04) {
            ctx->pc = 0x378D1Cu;
            goto label_378d1c;
        }
    }
    ctx->pc = 0x378D0Cu;
label_378d0c:
    // 0x378d0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x378d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_378d10:
    // 0x378d10: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
label_378d14:
    if (ctx->pc == 0x378D14u) {
        ctx->pc = 0x378D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D10u;
        // 0x378d14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D18u;
        goto label_378d18;
    }
    ctx->pc = 0x378D10u;
    {
        const bool branch_taken_0x378d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x378d10) {
            ctx->pc = 0x378D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378D10u;
            // 0x378d14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378d00;
        }
    }
    ctx->pc = 0x378D18u;
label_378d18:
    // 0x378d18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x378d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378d1c:
    // 0x378d1c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_378d20:
    if (ctx->pc == 0x378D20u) {
        ctx->pc = 0x378D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D1Cu;
        // 0x378d20: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D24u;
        goto label_378d24;
    }
    ctx->pc = 0x378D1Cu;
    {
        const bool branch_taken_0x378d1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D1Cu;
        // 0x378d20: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d1c) {
            ctx->pc = 0x378D34u;
            goto label_378d34;
        }
    }
    ctx->pc = 0x378D24u;
label_378d24:
    // 0x378d24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x378d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_378d28:
    // 0x378d28: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x378d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_378d2c:
    // 0x378d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_378d30:
    // 0x378d30: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x378d30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_378d34:
    // 0x378d34: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x378d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_378d38:
    // 0x378d38: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x378d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_378d3c:
    // 0x378d3c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x378d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_378d40:
    // 0x378d40: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_378d44:
    if (ctx->pc == 0x378D44u) {
        ctx->pc = 0x378D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D40u;
        // 0x378d44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D48u;
        goto label_378d48;
    }
    ctx->pc = 0x378D40u;
    {
        const bool branch_taken_0x378d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D40u;
        // 0x378d44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d40) {
            ctx->pc = 0x378CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378cb8;
        }
    }
    ctx->pc = 0x378D48u;
label_378d48:
    // 0x378d48: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x378d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_378d4c:
    // 0x378d4c: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x378d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_378d50:
    // 0x378d50: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
label_378d54:
    if (ctx->pc == 0x378D54u) {
        ctx->pc = 0x378D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D50u;
        // 0x378d54: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D58u;
        goto label_378d58;
    }
    ctx->pc = 0x378D50u;
    {
        const bool branch_taken_0x378d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x378d50) {
            ctx->pc = 0x378D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378D50u;
            // 0x378d54: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378c98;
        }
    }
    ctx->pc = 0x378D58u;
label_378d58:
    // 0x378d58: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x378d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_378d5c:
    // 0x378d5c: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x378d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_378d60:
    // 0x378d60: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x378d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_378d64:
    // 0x378d64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x378d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_378d68:
    // 0x378d68: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x378d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_378d6c:
    // 0x378d6c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x378d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_378d70:
    // 0x378d70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x378d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_378d74:
    // 0x378d74: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x378d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_378d78:
    // 0x378d78: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x378d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_378d7c:
    // 0x378d7c: 0x2470000f  addiu       $s0, $v1, 0xF
    ctx->pc = 0x378d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_378d80:
    // 0x378d80: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x378d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_378d84:
    // 0x378d84: 0x40f809  jalr        $v0
label_378d88:
    if (ctx->pc == 0x378D88u) {
        ctx->pc = 0x378D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D84u;
        // 0x378d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D8Cu;
        goto label_378d8c;
    }
    ctx->pc = 0x378D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378D8Cu);
        ctx->pc = 0x378D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D84u;
        // 0x378d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378D84u, 0x378D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378D8Cu;
label_378d8c:
    // 0x378d8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_378d90:
    if (ctx->pc == 0x378D90u) {
        ctx->pc = 0x378D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D8Cu;
        // 0x378d90: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D94u;
        goto label_378d94;
    }
    ctx->pc = 0x378D8Cu;
    {
        const bool branch_taken_0x378d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D8Cu;
        // 0x378d90: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d8c) {
            ctx->pc = 0x378D9Cu;
            goto label_378d9c;
        }
    }
    ctx->pc = 0x378D94u;
label_378d94:
    // 0x378d94: 0x10000097  b           . + 4 + (0x97 << 2)
label_378d98:
    if (ctx->pc == 0x378D98u) {
        ctx->pc = 0x378D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D94u;
        // 0x378d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378D9Cu;
        goto label_378d9c;
    }
    ctx->pc = 0x378D94u;
    {
        const bool branch_taken_0x378d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D94u;
        // 0x378d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d94) {
            ctx->pc = 0x378FF4u;
            goto label_378ff4;
        }
    }
    ctx->pc = 0x378D9Cu;
label_378d9c:
    // 0x378d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x378d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378da0:
    // 0x378da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_378da4:
    // 0x378da4: 0xc0bb7e6  jal         func_2EDF98
label_378da8:
    if (ctx->pc == 0x378DA8u) {
        ctx->pc = 0x378DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DA4u;
        // 0x378da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378DACu;
        goto label_378dac;
    }
    ctx->pc = 0x378DA4u;
    SET_GPR_U32(ctx, 31, 0x378DACu);
    ctx->pc = 0x378DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DA4u;
    // 0x378da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x378DA4u, 0x378DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378DACu;
label_378dac:
    // 0x378dac: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x378dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_378db0:
    // 0x378db0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x378db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_378db4:
    // 0x378db4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x378db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_378db8:
    // 0x378db8: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x378db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_378dbc:
    // 0x378dbc: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x378dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_378dc0:
    // 0x378dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378dc4:
    // 0x378dc4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x378dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_378dc8:
    // 0x378dc8: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x378dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
label_378dcc:
    // 0x378dcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x378dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_378dd0:
    // 0x378dd0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x378dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_378dd4:
    // 0x378dd4: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x378dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_378dd8:
    // 0x378dd8: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x378dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_378ddc:
    // 0x378ddc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x378ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_378de0:
    // 0x378de0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x378de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_378de4:
    // 0x378de4: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x378de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_378de8:
    // 0x378de8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_378dec:
    if (ctx->pc == 0x378DECu) {
        ctx->pc = 0x378DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DE8u;
        // 0x378dec: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378DF0u;
        goto label_378df0;
    }
    ctx->pc = 0x378DE8u;
    {
        const bool branch_taken_0x378de8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x378DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DE8u;
        // 0x378dec: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378de8) {
            ctx->pc = 0x378E00u;
            goto label_378e00;
        }
    }
    ctx->pc = 0x378DF0u;
label_378df0:
    // 0x378df0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x378df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_378df4:
    // 0x378df4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x378df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_378df8:
    // 0x378df8: 0xc0bb778  jal         func_2EDDE0
label_378dfc:
    if (ctx->pc == 0x378DFCu) {
        ctx->pc = 0x378DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DF8u;
        // 0x378dfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378E00u;
        goto label_378e00;
    }
    ctx->pc = 0x378DF8u;
    SET_GPR_U32(ctx, 31, 0x378E00u);
    ctx->pc = 0x378DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DF8u;
    // 0x378dfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x378DF8u, 0x378E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E00u;
label_378e00:
    // 0x378e00: 0x13c00071  beqz        $fp, . + 4 + (0x71 << 2)
label_378e04:
    if (ctx->pc == 0x378E04u) {
        ctx->pc = 0x378E08u;
        goto label_378e08;
    }
    ctx->pc = 0x378E00u;
    {
        const bool branch_taken_0x378e00 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e00) {
            ctx->pc = 0x378FC8u;
            goto label_378fc8;
        }
    }
    ctx->pc = 0x378E08u;
label_378e08:
    // 0x378e08: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x378e08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_378e0c:
    // 0x378e0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x378e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_378e10:
    // 0x378e10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x378e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_378e14:
    // 0x378e14: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x378e14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_378e18:
    // 0x378e18: 0x11c2006b  beq         $t6, $v0, . + 4 + (0x6B << 2)
label_378e1c:
    if (ctx->pc == 0x378E1Cu) {
        ctx->pc = 0x378E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E18u;
        // 0x378e1c: 0xe1980  sll         $v1, $t6, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378E20u;
        goto label_378e20;
    }
    ctx->pc = 0x378E18u;
    {
        const bool branch_taken_0x378e18 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x378E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E18u;
        // 0x378e1c: 0xe1980  sll         $v1, $t6, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e18) {
            ctx->pc = 0x378FC8u;
            goto label_378fc8;
        }
    }
    ctx->pc = 0x378E20u;
label_378e20:
    // 0x378e20: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x378e20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
label_378e24:
    // 0x378e24: 0x7e5021  addu        $t2, $v1, $fp
    ctx->pc = 0x378e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_378e28:
    // 0x378e28: 0xe1027  nor         $v0, $zero, $t6
    ctx->pc = 0x378e28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 14)));
label_378e2c:
    // 0x378e2c: 0x30490003  andi        $t1, $v0, 0x3
    ctx->pc = 0x378e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_378e30:
    // 0x378e30: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x378e30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_378e34:
    // 0x378e34: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x378e34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
label_378e38:
    // 0x378e38: 0x1120002d  beqz        $t1, . + 4 + (0x2D << 2)
label_378e3c:
    if (ctx->pc == 0x378E3Cu) {
        ctx->pc = 0x378E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E38u;
        // 0x378e3c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378E40u;
        goto label_378e40;
    }
    ctx->pc = 0x378E38u;
    {
        const bool branch_taken_0x378e38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x378E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E38u;
        // 0x378e3c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e38) {
            ctx->pc = 0x378EF0u;
            goto label_378ef0;
        }
    }
    ctx->pc = 0x378E40u;
label_378e40:
    // 0x378e40: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x378e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_378e44:
    // 0x378e44: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_378e48:
    if (ctx->pc == 0x378E48u) {
        ctx->pc = 0x378E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E44u;
        // 0x378e48: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x378E4Cu;
        goto label_378e4c;
    }
    ctx->pc = 0x378E44u;
    {
        const bool branch_taken_0x378e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E44u;
        // 0x378e48: 0x29220002  slti        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e44) {
            ctx->pc = 0x378EB8u;
            goto label_378eb8;
        }
    }
    ctx->pc = 0x378E4Cu;
label_378e4c:
    // 0x378e4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_378e50:
    if (ctx->pc == 0x378E50u) {
        ctx->pc = 0x378E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E4Cu;
        // 0x378e50: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378E54u;
        goto label_378e54;
    }
    ctx->pc = 0x378E4Cu;
    {
        const bool branch_taken_0x378e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E4Cu;
        // 0x378e50: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e4c) {
            ctx->pc = 0x378E88u;
            goto label_378e88;
        }
    }
    ctx->pc = 0x378E54u;
label_378e54:
    // 0x378e54: 0x2545ffc0  addiu       $a1, $t2, -0x40
    ctx->pc = 0x378e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967232));
label_378e58:
    // 0x378e58: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x378e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_378e5c:
    // 0x378e5c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x378e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_378e60:
    // 0x378e60: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x378e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_378e64:
    // 0x378e64: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x378e64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_378e68:
    // 0x378e68: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x378e68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_378e6c:
    // 0x378e6c: 0x79420010  lq          $v0, 0x10($t2)
    ctx->pc = 0x378e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_378e70:
    // 0x378e70: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x378e70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_378e74:
    // 0x378e74: 0x79430020  lq          $v1, 0x20($t2)
    ctx->pc = 0x378e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_378e78:
    // 0x378e78: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x378e78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_378e7c:
    // 0x378e7c: 0x79420030  lq          $v0, 0x30($t2)
    ctx->pc = 0x378e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_378e80:
    // 0x378e80: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x378e80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_378e84:
    // 0x378e84: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x378e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_378e88:
    // 0x378e88: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x378e88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_378e8c:
    // 0x378e8c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x378e8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_378e90:
    // 0x378e90: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x378e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_378e94:
    // 0x378e94: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x378e94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_378e98:
    // 0x378e98: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x378e98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_378e9c:
    // 0x378e9c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x378e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_378ea0:
    // 0x378ea0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x378ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_378ea4:
    // 0x378ea4: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x378ea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_378ea8:
    // 0x378ea8: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x378ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_378eac:
    // 0x378eac: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x378eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_378eb0:
    // 0x378eb0: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x378eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_378eb4:
    // 0x378eb4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x378eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_378eb8:
    // 0x378eb8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x378eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_378ebc:
    // 0x378ebc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x378ebcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_378ec0:
    // 0x378ec0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x378ec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_378ec4:
    // 0x378ec4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x378ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_378ec8:
    // 0x378ec8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x378ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_378ecc:
    // 0x378ecc: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x378eccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_378ed0:
    // 0x378ed0: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x378ed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_378ed4:
    // 0x378ed4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x378ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_378ed8:
    // 0x378ed8: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x378ed8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_378edc:
    // 0x378edc: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x378edcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_378ee0:
    // 0x378ee0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x378ee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_378ee4:
    // 0x378ee4: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x378ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
label_378ee8:
    // 0x378ee8: 0x11cf0037  beq         $t6, $t7, . + 4 + (0x37 << 2)
label_378eec:
    if (ctx->pc == 0x378EECu) {
        ctx->pc = 0x378EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EE8u;
        // 0x378eec: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378EF0u;
        goto label_378ef0;
    }
    ctx->pc = 0x378EE8u;
    {
        const bool branch_taken_0x378ee8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x378EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EE8u;
        // 0x378eec: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ee8) {
            ctx->pc = 0x378FC8u;
            goto label_378fc8;
        }
    }
    ctx->pc = 0x378EF0u;
label_378ef0:
    // 0x378ef0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x378ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_378ef4:
    // 0x378ef4: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x378ef4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_378ef8:
    // 0x378ef8: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x378ef8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_378efc:
    // 0x378efc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x378efcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_378f00:
    // 0x378f00: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x378f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_378f04:
    // 0x378f04: 0x2566ffc0  addiu       $a2, $t3, -0x40
    ctx->pc = 0x378f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_378f08:
    // 0x378f08: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x378f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_378f0c:
    // 0x378f0c: 0x2567ff80  addiu       $a3, $t3, -0x80
    ctx->pc = 0x378f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967168));
label_378f10:
    // 0x378f10: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x378f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_378f14:
    // 0x378f14: 0x2568ff40  addiu       $t0, $t3, -0xC0
    ctx->pc = 0x378f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967104));
label_378f18:
    // 0x378f18: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x378f18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_378f1c:
    // 0x378f1c: 0x256bff00  addiu       $t3, $t3, -0x100
    ctx->pc = 0x378f1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967040));
label_378f20:
    // 0x378f20: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x378f20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_378f24:
    // 0x378f24: 0x79820010  lq          $v0, 0x10($t4)
    ctx->pc = 0x378f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 16)));
label_378f28:
    // 0x378f28: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x378f28u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_378f2c:
    // 0x378f2c: 0x79a30020  lq          $v1, 0x20($t5)
    ctx->pc = 0x378f2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 32)));
label_378f30:
    // 0x378f30: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x378f30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
label_378f34:
    // 0x378f34: 0x79220030  lq          $v0, 0x30($t1)
    ctx->pc = 0x378f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 48)));
label_378f38:
    // 0x378f38: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x378f38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_378f3c:
    // 0x378f3c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x378f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_378f40:
    // 0x378f40: 0x7943ffc0  lq          $v1, -0x40($t2)
    ctx->pc = 0x378f40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4294967232)));
label_378f44:
    // 0x378f44: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x378f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_378f48:
    // 0x378f48: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x378f48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_378f4c:
    // 0x378f4c: 0x7982ffd0  lq          $v0, -0x30($t4)
    ctx->pc = 0x378f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 4294967248)));
label_378f50:
    // 0x378f50: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x378f50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_378f54:
    // 0x378f54: 0x79a3ffe0  lq          $v1, -0x20($t5)
    ctx->pc = 0x378f54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 4294967264)));
label_378f58:
    // 0x378f58: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x378f58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_378f5c:
    // 0x378f5c: 0x7922fff0  lq          $v0, -0x10($t1)
    ctx->pc = 0x378f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967280)));
label_378f60:
    // 0x378f60: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x378f60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_378f64:
    // 0x378f64: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x378f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_378f68:
    // 0x378f68: 0x7943ff80  lq          $v1, -0x80($t2)
    ctx->pc = 0x378f68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4294967168)));
label_378f6c:
    // 0x378f6c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x378f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_378f70:
    // 0x378f70: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x378f70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_378f74:
    // 0x378f74: 0x7982ff90  lq          $v0, -0x70($t4)
    ctx->pc = 0x378f74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 4294967184)));
label_378f78:
    // 0x378f78: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x378f78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_378f7c:
    // 0x378f7c: 0x79a3ffa0  lq          $v1, -0x60($t5)
    ctx->pc = 0x378f7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
label_378f80:
    // 0x378f80: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x378f80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_378f84:
    // 0x378f84: 0x7922ffb0  lq          $v0, -0x50($t1)
    ctx->pc = 0x378f84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967216)));
label_378f88:
    // 0x378f88: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x378f88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
label_378f8c:
    // 0x378f8c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x378f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_378f90:
    // 0x378f90: 0x7943ff40  lq          $v1, -0xC0($t2)
    ctx->pc = 0x378f90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 4294967104)));
label_378f94:
    // 0x378f94: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x378f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_378f98:
    // 0x378f98: 0x254aff00  addiu       $t2, $t2, -0x100
    ctx->pc = 0x378f98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967040));
label_378f9c:
    // 0x378f9c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x378f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
label_378fa0:
    // 0x378fa0: 0x7982ff50  lq          $v0, -0xB0($t4)
    ctx->pc = 0x378fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 4294967120)));
label_378fa4:
    // 0x378fa4: 0x258cff00  addiu       $t4, $t4, -0x100
    ctx->pc = 0x378fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967040));
label_378fa8:
    // 0x378fa8: 0x7d020010  sq          $v0, 0x10($t0)
    ctx->pc = 0x378fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
label_378fac:
    // 0x378fac: 0x79a3ff60  lq          $v1, -0xA0($t5)
    ctx->pc = 0x378facu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 13), 4294967136)));
label_378fb0:
    // 0x378fb0: 0x25adff00  addiu       $t5, $t5, -0x100
    ctx->pc = 0x378fb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967040));
label_378fb4:
    // 0x378fb4: 0x7d030020  sq          $v1, 0x20($t0)
    ctx->pc = 0x378fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
label_378fb8:
    // 0x378fb8: 0x7922ff70  lq          $v0, -0x90($t1)
    ctx->pc = 0x378fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 4294967152)));
label_378fbc:
    // 0x378fbc: 0x2529ff00  addiu       $t1, $t1, -0x100
    ctx->pc = 0x378fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967040));
label_378fc0:
    // 0x378fc0: 0x15cfffcf  bne         $t6, $t7, . + 4 + (-0x31 << 2)
label_378fc4:
    if (ctx->pc == 0x378FC4u) {
        ctx->pc = 0x378FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FC0u;
        // 0x378fc4: 0x7d020030  sq          $v0, 0x30($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FC8u;
        goto label_378fc8;
    }
    ctx->pc = 0x378FC0u;
    {
        const bool branch_taken_0x378fc0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x378FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FC0u;
        // 0x378fc4: 0x7d020030  sq          $v0, 0x30($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378fc0) {
            ctx->pc = 0x378F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378f00;
        }
    }
    ctx->pc = 0x378FC8u;
label_378fc8:
    // 0x378fc8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_378fcc:
    if (ctx->pc == 0x378FCCu) {
        ctx->pc = 0x378FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FC8u;
        // 0x378fcc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FD0u;
        goto label_378fd0;
    }
    ctx->pc = 0x378FC8u;
    {
        const bool branch_taken_0x378fc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x378FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FC8u;
        // 0x378fcc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378fc8) {
            ctx->pc = 0x378FDCu;
            goto label_378fdc;
        }
    }
    ctx->pc = 0x378FD0u;
label_378fd0:
    // 0x378fd0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x378fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_378fd4:
    // 0x378fd4: 0xc0bb778  jal         func_2EDDE0
label_378fd8:
    if (ctx->pc == 0x378FD8u) {
        ctx->pc = 0x378FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FD4u;
        // 0x378fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FDCu;
        goto label_378fdc;
    }
    ctx->pc = 0x378FD4u;
    SET_GPR_U32(ctx, 31, 0x378FDCu);
    ctx->pc = 0x378FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FD4u;
    // 0x378fd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x378FD4u, 0x378FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FDCu;
label_378fdc:
    // 0x378fdc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_378fe0:
    if (ctx->pc == 0x378FE0u) {
        ctx->pc = 0x378FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FDCu;
        // 0x378fe0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FE4u;
        goto label_378fe4;
    }
    ctx->pc = 0x378FDCu;
    {
        const bool branch_taken_0x378fdc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x378FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FDCu;
        // 0x378fe0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378fdc) {
            ctx->pc = 0x378FF0u;
            goto label_378ff0;
        }
    }
    ctx->pc = 0x378FE4u;
label_378fe4:
    // 0x378fe4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x378fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_378fe8:
    // 0x378fe8: 0xc0bb778  jal         func_2EDDE0
label_378fec:
    if (ctx->pc == 0x378FECu) {
        ctx->pc = 0x378FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FE8u;
        // 0x378fec: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FF0u;
        goto label_378ff0;
    }
    ctx->pc = 0x378FE8u;
    SET_GPR_U32(ctx, 31, 0x378FF0u);
    ctx->pc = 0x378FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FE8u;
    // 0x378fec: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x378FE8u, 0x378FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FF0u;
label_378ff0:
    // 0x378ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378ff4:
    // 0x378ff4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_378ff8:
    if (ctx->pc == 0x378FF8u) {
        ctx->pc = 0x378FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FF4u;
        // 0x378ff8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378FFCu;
        goto label_378ffc;
    }
    ctx->pc = 0x378FF4u;
    {
        const bool branch_taken_0x378ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FF4u;
        // 0x378ff8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ff4) {
            ctx->pc = 0x379020u;
            goto label_379020;
        }
    }
    ctx->pc = 0x378FFCu;
label_378ffc:
    // 0x378ffc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x378ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_379000:
    // 0x379000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x379000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379004:
    // 0x379004: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x379004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_379008:
    // 0x379008: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x379008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_37900c:
    // 0x37900c: 0x2446ac48  addiu       $a2, $v0, -0x53B8
    ctx->pc = 0x37900cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945864));
label_379010:
    // 0x379010: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x379010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_379014:
    // 0x379014: 0x40f809  jalr        $v0
label_379018:
    if (ctx->pc == 0x379018u) {
        ctx->pc = 0x379018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379014u;
        // 0x379018: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37901Cu;
        goto label_37901c;
    }
    ctx->pc = 0x379014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37901Cu);
        ctx->pc = 0x379018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379014u;
        // 0x379018: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379014u, 0x37901Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37901Cu;
label_37901c:
    // 0x37901c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379020:
    // 0x379020: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x379020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_379024:
    // 0x379024: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x379024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_379028:
    // 0x379028: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x379028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_37902c:
    // 0x37902c: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x37902cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_379030:
    // 0x379030: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x379030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_379034:
    // 0x379034: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x379034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_379038:
    // 0x379038: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x379038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_37903c:
    // 0x37903c: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x37903cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_379040:
    // 0x379040: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x379040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_379044:
    // 0x379044: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x379044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_379048:
    // 0x379048: 0x3e00008  jr          $ra
label_37904c:
    if (ctx->pc == 0x37904Cu) {
        ctx->pc = 0x37904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379048u;
        // 0x37904c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379050u;
        goto label_fallthrough_0x379048;
    }
    ctx->pc = 0x379048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379048u;
        // 0x37904c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379048:
    ctx->pc = 0x379050u;
}
