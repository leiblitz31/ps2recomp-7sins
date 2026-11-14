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

// Function: sub_00315AC0
// Address: 0x315ac0 - 0x316008
void sub_00315AC0_0x315ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315AC0_0x315ac0");
#endif

    switch (ctx->pc) {
        case 0x315ac0u: goto label_315ac0;
        case 0x315ac4u: goto label_315ac4;
        case 0x315ac8u: goto label_315ac8;
        case 0x315accu: goto label_315acc;
        case 0x315ad0u: goto label_315ad0;
        case 0x315ad4u: goto label_315ad4;
        case 0x315ad8u: goto label_315ad8;
        case 0x315adcu: goto label_315adc;
        case 0x315ae0u: goto label_315ae0;
        case 0x315ae4u: goto label_315ae4;
        case 0x315ae8u: goto label_315ae8;
        case 0x315aecu: goto label_315aec;
        case 0x315af0u: goto label_315af0;
        case 0x315af4u: goto label_315af4;
        case 0x315af8u: goto label_315af8;
        case 0x315afcu: goto label_315afc;
        case 0x315b00u: goto label_315b00;
        case 0x315b04u: goto label_315b04;
        case 0x315b08u: goto label_315b08;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b10u: goto label_315b10;
        case 0x315b14u: goto label_315b14;
        case 0x315b18u: goto label_315b18;
        case 0x315b1cu: goto label_315b1c;
        case 0x315b20u: goto label_315b20;
        case 0x315b24u: goto label_315b24;
        case 0x315b28u: goto label_315b28;
        case 0x315b2cu: goto label_315b2c;
        case 0x315b30u: goto label_315b30;
        case 0x315b34u: goto label_315b34;
        case 0x315b38u: goto label_315b38;
        case 0x315b3cu: goto label_315b3c;
        case 0x315b40u: goto label_315b40;
        case 0x315b44u: goto label_315b44;
        case 0x315b48u: goto label_315b48;
        case 0x315b4cu: goto label_315b4c;
        case 0x315b50u: goto label_315b50;
        case 0x315b54u: goto label_315b54;
        case 0x315b58u: goto label_315b58;
        case 0x315b5cu: goto label_315b5c;
        case 0x315b60u: goto label_315b60;
        case 0x315b64u: goto label_315b64;
        case 0x315b68u: goto label_315b68;
        case 0x315b6cu: goto label_315b6c;
        case 0x315b70u: goto label_315b70;
        case 0x315b74u: goto label_315b74;
        case 0x315b78u: goto label_315b78;
        case 0x315b7cu: goto label_315b7c;
        case 0x315b80u: goto label_315b80;
        case 0x315b84u: goto label_315b84;
        case 0x315b88u: goto label_315b88;
        case 0x315b8cu: goto label_315b8c;
        case 0x315b90u: goto label_315b90;
        case 0x315b94u: goto label_315b94;
        case 0x315b98u: goto label_315b98;
        case 0x315b9cu: goto label_315b9c;
        case 0x315ba0u: goto label_315ba0;
        case 0x315ba4u: goto label_315ba4;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bacu: goto label_315bac;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bb4u: goto label_315bb4;
        case 0x315bb8u: goto label_315bb8;
        case 0x315bbcu: goto label_315bbc;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        case 0x315c30u: goto label_315c30;
        case 0x315c34u: goto label_315c34;
        case 0x315c38u: goto label_315c38;
        case 0x315c3cu: goto label_315c3c;
        case 0x315c40u: goto label_315c40;
        case 0x315c44u: goto label_315c44;
        case 0x315c48u: goto label_315c48;
        case 0x315c4cu: goto label_315c4c;
        case 0x315c50u: goto label_315c50;
        case 0x315c54u: goto label_315c54;
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        case 0x315c68u: goto label_315c68;
        case 0x315c6cu: goto label_315c6c;
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        case 0x315c7cu: goto label_315c7c;
        case 0x315c80u: goto label_315c80;
        case 0x315c84u: goto label_315c84;
        case 0x315c88u: goto label_315c88;
        case 0x315c8cu: goto label_315c8c;
        case 0x315c90u: goto label_315c90;
        case 0x315c94u: goto label_315c94;
        case 0x315c98u: goto label_315c98;
        case 0x315c9cu: goto label_315c9c;
        case 0x315ca0u: goto label_315ca0;
        case 0x315ca4u: goto label_315ca4;
        case 0x315ca8u: goto label_315ca8;
        case 0x315cacu: goto label_315cac;
        case 0x315cb0u: goto label_315cb0;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cb8u: goto label_315cb8;
        case 0x315cbcu: goto label_315cbc;
        case 0x315cc0u: goto label_315cc0;
        case 0x315cc4u: goto label_315cc4;
        case 0x315cc8u: goto label_315cc8;
        case 0x315cccu: goto label_315ccc;
        case 0x315cd0u: goto label_315cd0;
        case 0x315cd4u: goto label_315cd4;
        case 0x315cd8u: goto label_315cd8;
        case 0x315cdcu: goto label_315cdc;
        case 0x315ce0u: goto label_315ce0;
        case 0x315ce4u: goto label_315ce4;
        case 0x315ce8u: goto label_315ce8;
        case 0x315cecu: goto label_315cec;
        case 0x315cf0u: goto label_315cf0;
        case 0x315cf4u: goto label_315cf4;
        case 0x315cf8u: goto label_315cf8;
        case 0x315cfcu: goto label_315cfc;
        case 0x315d00u: goto label_315d00;
        case 0x315d04u: goto label_315d04;
        case 0x315d08u: goto label_315d08;
        case 0x315d0cu: goto label_315d0c;
        case 0x315d10u: goto label_315d10;
        case 0x315d14u: goto label_315d14;
        case 0x315d18u: goto label_315d18;
        case 0x315d1cu: goto label_315d1c;
        case 0x315d20u: goto label_315d20;
        case 0x315d24u: goto label_315d24;
        case 0x315d28u: goto label_315d28;
        case 0x315d2cu: goto label_315d2c;
        case 0x315d30u: goto label_315d30;
        case 0x315d34u: goto label_315d34;
        case 0x315d38u: goto label_315d38;
        case 0x315d3cu: goto label_315d3c;
        case 0x315d40u: goto label_315d40;
        case 0x315d44u: goto label_315d44;
        case 0x315d48u: goto label_315d48;
        case 0x315d4cu: goto label_315d4c;
        case 0x315d50u: goto label_315d50;
        case 0x315d54u: goto label_315d54;
        case 0x315d58u: goto label_315d58;
        case 0x315d5cu: goto label_315d5c;
        case 0x315d60u: goto label_315d60;
        case 0x315d64u: goto label_315d64;
        case 0x315d68u: goto label_315d68;
        case 0x315d6cu: goto label_315d6c;
        case 0x315d70u: goto label_315d70;
        case 0x315d74u: goto label_315d74;
        case 0x315d78u: goto label_315d78;
        case 0x315d7cu: goto label_315d7c;
        case 0x315d80u: goto label_315d80;
        case 0x315d84u: goto label_315d84;
        case 0x315d88u: goto label_315d88;
        case 0x315d8cu: goto label_315d8c;
        case 0x315d90u: goto label_315d90;
        case 0x315d94u: goto label_315d94;
        case 0x315d98u: goto label_315d98;
        case 0x315d9cu: goto label_315d9c;
        case 0x315da0u: goto label_315da0;
        case 0x315da4u: goto label_315da4;
        case 0x315da8u: goto label_315da8;
        case 0x315dacu: goto label_315dac;
        case 0x315db0u: goto label_315db0;
        case 0x315db4u: goto label_315db4;
        case 0x315db8u: goto label_315db8;
        case 0x315dbcu: goto label_315dbc;
        case 0x315dc0u: goto label_315dc0;
        case 0x315dc4u: goto label_315dc4;
        case 0x315dc8u: goto label_315dc8;
        case 0x315dccu: goto label_315dcc;
        case 0x315dd0u: goto label_315dd0;
        case 0x315dd4u: goto label_315dd4;
        case 0x315dd8u: goto label_315dd8;
        case 0x315ddcu: goto label_315ddc;
        case 0x315de0u: goto label_315de0;
        case 0x315de4u: goto label_315de4;
        case 0x315de8u: goto label_315de8;
        case 0x315decu: goto label_315dec;
        case 0x315df0u: goto label_315df0;
        case 0x315df4u: goto label_315df4;
        case 0x315df8u: goto label_315df8;
        case 0x315dfcu: goto label_315dfc;
        case 0x315e00u: goto label_315e00;
        case 0x315e04u: goto label_315e04;
        case 0x315e08u: goto label_315e08;
        case 0x315e0cu: goto label_315e0c;
        case 0x315e10u: goto label_315e10;
        case 0x315e14u: goto label_315e14;
        case 0x315e18u: goto label_315e18;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e20u: goto label_315e20;
        case 0x315e24u: goto label_315e24;
        case 0x315e28u: goto label_315e28;
        case 0x315e2cu: goto label_315e2c;
        case 0x315e30u: goto label_315e30;
        case 0x315e34u: goto label_315e34;
        case 0x315e38u: goto label_315e38;
        case 0x315e3cu: goto label_315e3c;
        case 0x315e40u: goto label_315e40;
        case 0x315e44u: goto label_315e44;
        case 0x315e48u: goto label_315e48;
        case 0x315e4cu: goto label_315e4c;
        case 0x315e50u: goto label_315e50;
        case 0x315e54u: goto label_315e54;
        case 0x315e58u: goto label_315e58;
        case 0x315e5cu: goto label_315e5c;
        case 0x315e60u: goto label_315e60;
        case 0x315e64u: goto label_315e64;
        case 0x315e68u: goto label_315e68;
        case 0x315e6cu: goto label_315e6c;
        case 0x315e70u: goto label_315e70;
        case 0x315e74u: goto label_315e74;
        case 0x315e78u: goto label_315e78;
        case 0x315e7cu: goto label_315e7c;
        case 0x315e80u: goto label_315e80;
        case 0x315e84u: goto label_315e84;
        case 0x315e88u: goto label_315e88;
        case 0x315e8cu: goto label_315e8c;
        case 0x315e90u: goto label_315e90;
        case 0x315e94u: goto label_315e94;
        case 0x315e98u: goto label_315e98;
        case 0x315e9cu: goto label_315e9c;
        case 0x315ea0u: goto label_315ea0;
        case 0x315ea4u: goto label_315ea4;
        case 0x315ea8u: goto label_315ea8;
        case 0x315eacu: goto label_315eac;
        case 0x315eb0u: goto label_315eb0;
        case 0x315eb4u: goto label_315eb4;
        case 0x315eb8u: goto label_315eb8;
        case 0x315ebcu: goto label_315ebc;
        case 0x315ec0u: goto label_315ec0;
        case 0x315ec4u: goto label_315ec4;
        case 0x315ec8u: goto label_315ec8;
        case 0x315eccu: goto label_315ecc;
        case 0x315ed0u: goto label_315ed0;
        case 0x315ed4u: goto label_315ed4;
        case 0x315ed8u: goto label_315ed8;
        case 0x315edcu: goto label_315edc;
        case 0x315ee0u: goto label_315ee0;
        case 0x315ee4u: goto label_315ee4;
        case 0x315ee8u: goto label_315ee8;
        case 0x315eecu: goto label_315eec;
        case 0x315ef0u: goto label_315ef0;
        case 0x315ef4u: goto label_315ef4;
        case 0x315ef8u: goto label_315ef8;
        case 0x315efcu: goto label_315efc;
        case 0x315f00u: goto label_315f00;
        case 0x315f04u: goto label_315f04;
        case 0x315f08u: goto label_315f08;
        case 0x315f0cu: goto label_315f0c;
        case 0x315f10u: goto label_315f10;
        case 0x315f14u: goto label_315f14;
        case 0x315f18u: goto label_315f18;
        case 0x315f1cu: goto label_315f1c;
        case 0x315f20u: goto label_315f20;
        case 0x315f24u: goto label_315f24;
        case 0x315f28u: goto label_315f28;
        case 0x315f2cu: goto label_315f2c;
        case 0x315f30u: goto label_315f30;
        case 0x315f34u: goto label_315f34;
        case 0x315f38u: goto label_315f38;
        case 0x315f3cu: goto label_315f3c;
        case 0x315f40u: goto label_315f40;
        case 0x315f44u: goto label_315f44;
        case 0x315f48u: goto label_315f48;
        case 0x315f4cu: goto label_315f4c;
        case 0x315f50u: goto label_315f50;
        case 0x315f54u: goto label_315f54;
        case 0x315f58u: goto label_315f58;
        case 0x315f5cu: goto label_315f5c;
        case 0x315f60u: goto label_315f60;
        case 0x315f64u: goto label_315f64;
        case 0x315f68u: goto label_315f68;
        case 0x315f6cu: goto label_315f6c;
        case 0x315f70u: goto label_315f70;
        case 0x315f74u: goto label_315f74;
        case 0x315f78u: goto label_315f78;
        case 0x315f7cu: goto label_315f7c;
        case 0x315f80u: goto label_315f80;
        case 0x315f84u: goto label_315f84;
        case 0x315f88u: goto label_315f88;
        case 0x315f8cu: goto label_315f8c;
        case 0x315f90u: goto label_315f90;
        case 0x315f94u: goto label_315f94;
        case 0x315f98u: goto label_315f98;
        case 0x315f9cu: goto label_315f9c;
        case 0x315fa0u: goto label_315fa0;
        case 0x315fa4u: goto label_315fa4;
        case 0x315fa8u: goto label_315fa8;
        case 0x315facu: goto label_315fac;
        case 0x315fb0u: goto label_315fb0;
        case 0x315fb4u: goto label_315fb4;
        case 0x315fb8u: goto label_315fb8;
        case 0x315fbcu: goto label_315fbc;
        case 0x315fc0u: goto label_315fc0;
        case 0x315fc4u: goto label_315fc4;
        case 0x315fc8u: goto label_315fc8;
        case 0x315fccu: goto label_315fcc;
        case 0x315fd0u: goto label_315fd0;
        case 0x315fd4u: goto label_315fd4;
        case 0x315fd8u: goto label_315fd8;
        case 0x315fdcu: goto label_315fdc;
        case 0x315fe0u: goto label_315fe0;
        case 0x315fe4u: goto label_315fe4;
        case 0x315fe8u: goto label_315fe8;
        case 0x315fecu: goto label_315fec;
        case 0x315ff0u: goto label_315ff0;
        case 0x315ff4u: goto label_315ff4;
        case 0x315ff8u: goto label_315ff8;
        case 0x315ffcu: goto label_315ffc;
        case 0x316000u: goto label_316000;
        case 0x316004u: goto label_316004;
        default: break;
    }

    ctx->pc = 0x315ac0u;

label_315ac0:
    // 0x315ac0: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x315ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_315ac4:
    // 0x315ac4: 0x7fb103e0  sq          $s1, 0x3E0($sp)
    ctx->pc = 0x315ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 17));
label_315ac8:
    // 0x315ac8: 0x7fb403b0  sq          $s4, 0x3B0($sp)
    ctx->pc = 0x315ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 20));
label_315acc:
    // 0x315acc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x315accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_315ad0:
    // 0x315ad0: 0x7fb503a0  sq          $s5, 0x3A0($sp)
    ctx->pc = 0x315ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 21));
label_315ad4:
    // 0x315ad4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x315ad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_315ad8:
    // 0x315ad8: 0x7fb003f0  sq          $s0, 0x3F0($sp)
    ctx->pc = 0x315ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 16));
label_315adc:
    // 0x315adc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x315adcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_315ae0:
    // 0x315ae0: 0x7fb203d0  sq          $s2, 0x3D0($sp)
    ctx->pc = 0x315ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 18));
label_315ae4:
    // 0x315ae4: 0x7fb303c0  sq          $s3, 0x3C0($sp)
    ctx->pc = 0x315ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 19));
label_315ae8:
    // 0x315ae8: 0x7fb60390  sq          $s6, 0x390($sp)
    ctx->pc = 0x315ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 22));
label_315aec:
    // 0x315aec: 0xffbf0380  sd          $ra, 0x380($sp)
    ctx->pc = 0x315aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 31));
label_315af0:
    // 0x315af0: 0xe7b40400  swc1        $f20, 0x400($sp)
    ctx->pc = 0x315af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_315af4:
    // 0x315af4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x315af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315af8:
    // 0x315af8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x315af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315afc:
    // 0x315afc: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x315afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_315b00:
    // 0x315b00: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x315b00u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_315b04:
    // 0x315b04: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x315b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315b08:
    // 0x315b08: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x315b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315b0c:
    // 0x315b0c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x315b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315b10:
    // 0x315b10: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x315b10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_315b14:
    // 0x315b14: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x315b14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_315b18:
    // 0x315b18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x315b18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_315b1c:
    // 0x315b1c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x315b1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_315b20:
    // 0x315b20: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x315b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_315b24:
    // 0x315b24: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x315b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_315b28:
    // 0x315b28: 0x8f83a5a8  lw          $v1, -0x5A58($gp)
    ctx->pc = 0x315b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944168)));
label_315b2c:
    // 0x315b2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x315b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_315b30:
    // 0x315b30: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x315b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_315b34:
    // 0x315b34: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x315b34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_315b38:
    // 0x315b38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315b3c:
    // 0x315b3c: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x315b3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_315b40:
    // 0x315b40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x315b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315b44:
    // 0x315b44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x315b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_315b48:
    // 0x315b48: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x315b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_315b4c:
    // 0x315b4c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x315b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_315b50:
    // 0x315b50: 0x46040500  add.s       $f20, $f0, $f4
    ctx->pc = 0x315b50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_315b54:
    // 0x315b54: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x315b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_315b58:
    // 0x315b58: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x315b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_315b5c:
    // 0x315b5c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x315b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_315b60:
    // 0x315b60: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x315b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315b64:
    // 0x315b64: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x315b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315b68:
    // 0x315b68: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x315b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_315b6c:
    // 0x315b6c: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x315b6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_315b70:
    // 0x315b70: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x315b70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_315b74:
    // 0x315b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315b78:
    // 0x315b78: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x315b78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315b7c:
    // 0x315b7c: 0x0  nop
    ctx->pc = 0x315b7cu;
    // NOP
label_315b80:
    // 0x315b80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_315b84:
    if (ctx->pc == 0x315B84u) {
        ctx->pc = 0x315B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B80u;
        // 0x315b84: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B88u;
        goto label_315b88;
    }
    ctx->pc = 0x315B80u;
    {
        const bool branch_taken_0x315b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B80u;
        // 0x315b84: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b80) {
            ctx->pc = 0x315B98u;
            goto label_315b98;
        }
    }
    ctx->pc = 0x315B88u;
label_315b88:
    // 0x315b88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315b8c:
    // 0x315b8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315b90:
    // 0x315b90: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x315b90u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
label_315b94:
    // 0x315b94: 0x0  nop
    ctx->pc = 0x315b94u;
    // NOP
label_315b98:
    // 0x315b98: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x315b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315b9c:
    // 0x315b9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x315b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315ba0:
    // 0x315ba0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x315ba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315ba4:
    // 0x315ba4: 0x0  nop
    ctx->pc = 0x315ba4u;
    // NOP
label_315ba8:
    // 0x315ba8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_315bac:
    if (ctx->pc == 0x315BACu) {
        ctx->pc = 0x315BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BA8u;
        // 0x315bac: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BB0u;
        goto label_315bb0;
    }
    ctx->pc = 0x315BA8u;
    {
        const bool branch_taken_0x315ba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BA8u;
        // 0x315bac: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ba8) {
            ctx->pc = 0x315BC4u;
            goto label_315bc4;
        }
    }
    ctx->pc = 0x315BB0u;
label_315bb0:
    // 0x315bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315bb4:
    // 0x315bb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315bb8:
    // 0x315bb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x315bb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_315bbc:
    // 0x315bbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_315bc0:
    if (ctx->pc == 0x315BC0u) {
        ctx->pc = 0x315BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BBCu;
        // 0x315bc0: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BC4u;
        goto label_315bc4;
    }
    ctx->pc = 0x315BBCu;
    {
        const bool branch_taken_0x315bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BBCu;
        // 0x315bc0: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bbc) {
            ctx->pc = 0x315BD0u;
            goto label_315bd0;
        }
    }
    ctx->pc = 0x315BC4u;
label_315bc4:
    // 0x315bc4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x315bc4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_315bc8:
    // 0x315bc8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x315bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315bcc:
    // 0x315bcc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x315bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_315bd0:
    // 0x315bd0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x315bd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315bd4:
    // 0x315bd4: 0x0  nop
    ctx->pc = 0x315bd4u;
    // NOP
label_315bd8:
    // 0x315bd8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_315bdc:
    if (ctx->pc == 0x315BDCu) {
        ctx->pc = 0x315BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD8u;
        // 0x315bdc: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BE0u;
        goto label_315be0;
    }
    ctx->pc = 0x315BD8u;
    {
        const bool branch_taken_0x315bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x315BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD8u;
        // 0x315bdc: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bd8) {
            ctx->pc = 0x315BF4u;
            goto label_315bf4;
        }
    }
    ctx->pc = 0x315BE0u;
label_315be0:
    // 0x315be0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315be4:
    // 0x315be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315be8:
    // 0x315be8: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x315be8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_315bec:
    // 0x315bec: 0x10000003  b           . + 4 + (0x3 << 2)
label_315bf0:
    if (ctx->pc == 0x315BF0u) {
        ctx->pc = 0x315BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BECu;
        // 0x315bf0: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BF4u;
        goto label_315bf4;
    }
    ctx->pc = 0x315BECu;
    {
        const bool branch_taken_0x315bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BECu;
        // 0x315bf0: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bec) {
            ctx->pc = 0x315BFCu;
            goto label_315bfc;
        }
    }
    ctx->pc = 0x315BF4u;
label_315bf4:
    // 0x315bf4: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x315bf4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_315bf8:
    // 0x315bf8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x315bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315bfc:
    // 0x315bfc: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x315bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_315c00:
    // 0x315c00: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x315c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_315c04:
    // 0x315c04: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x315c04u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_315c08:
    // 0x315c08: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x315c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315c0c:
    // 0x315c0c: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x315c0cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_315c10:
    // 0x315c10: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x315c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315c14:
    // 0x315c14: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x315c14u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_315c18:
    // 0x315c18: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x315c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315c1c:
    // 0x315c1c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x315c1cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_315c20:
    // 0x315c20: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x315c20u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_315c24:
    // 0x315c24: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x315c24u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_315c28:
    // 0x315c28: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x315c28u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_315c2c:
    // 0x315c2c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x315c2cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_315c30:
    // 0x315c30: 0x460510a8  max.s       $f2, $f2, $f5
    ctx->pc = 0x315c30u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[5]);
label_315c34:
    // 0x315c34: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x315c34u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
label_315c38:
    // 0x315c38: 0xc7808110  lwc1        $f0, -0x7EF0($gp)
    ctx->pc = 0x315c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315c3c:
    // 0x315c3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x315c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_315c40:
    // 0x315c40: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x315c40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_315c44:
    // 0x315c44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x315c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_315c48:
    // 0x315c48: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x315c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_315c4c:
    // 0x315c4c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x315c4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_315c50:
    // 0x315c50: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x315c50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_315c54:
    // 0x315c54: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x315c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_315c58:
    // 0x315c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315c5c:
    // 0x315c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x315c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_315c60:
    // 0x315c60: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x315c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_315c64:
    // 0x315c64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x315c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_315c68:
    // 0x315c68: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x315c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_315c6c:
    // 0x315c6c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x315c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_315c70:
    // 0x315c70: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x315c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_315c74:
    // 0x315c74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x315c74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315c78:
    // 0x315c78: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x315c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_315c7c:
    // 0x315c7c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
label_315c80:
    if (ctx->pc == 0x315C80u) {
        ctx->pc = 0x315C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C7Cu;
        // 0x315c80: 0xafa3034c  sw          $v1, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C84u;
        goto label_315c84;
    }
    ctx->pc = 0x315C7Cu;
    {
        const bool branch_taken_0x315c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C7Cu;
        // 0x315c80: 0xafa3034c  sw          $v1, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c7c) {
            ctx->pc = 0x315FD8u;
            goto label_315fd8;
        }
    }
    ctx->pc = 0x315C84u;
label_315c84:
    // 0x315c84: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x315c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_315c88:
    // 0x315c88: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x315c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_315c8c:
    // 0x315c8c: 0xafa3034c  sw          $v1, 0x34C($sp)
    ctx->pc = 0x315c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
label_315c90:
    // 0x315c90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x315c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315c94:
    // 0x315c94: 0x4800067  bltz        $a0, . + 4 + (0x67 << 2)
label_315c98:
    if (ctx->pc == 0x315C98u) {
        ctx->pc = 0x315C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C94u;
        // 0x315c98: 0x8fa2034c  lw          $v0, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C9Cu;
        goto label_315c9c;
    }
    ctx->pc = 0x315C94u;
    {
        const bool branch_taken_0x315c94 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x315C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C94u;
        // 0x315c98: 0x8fa2034c  lw          $v0, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c94) {
            ctx->pc = 0x315E34u;
            goto label_315e34;
        }
    }
    ctx->pc = 0x315C9Cu;
label_315c9c:
    // 0x315c9c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x315c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_315ca0:
    // 0x315ca0: 0x27ab001c  addiu       $t3, $sp, 0x1C
    ctx->pc = 0x315ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_315ca4:
    // 0x315ca4: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x315ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_315ca8:
    // 0x315ca8: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x315ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_315cac:
    // 0x315cac: 0x27a80028  addiu       $t0, $sp, 0x28
    ctx->pc = 0x315cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_315cb0:
    // 0x315cb0: 0x8fa5034c  lw          $a1, 0x34C($sp)
    ctx->pc = 0x315cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_315cb4:
    // 0x315cb4: 0x0  nop
    ctx->pc = 0x315cb4u;
    // NOP
label_315cb8:
    // 0x315cb8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x315cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_315cbc:
    // 0x315cbc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x315cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_315cc0:
    // 0x315cc0: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x315cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_315cc4:
    // 0x315cc4: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x315cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_315cc8:
    // 0x315cc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x315cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315ccc:
    // 0x315ccc: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x315cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_315cd0:
    // 0x315cd0: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x315cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315cd4:
    // 0x315cd4: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x315cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_315cd8:
    // 0x315cd8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x315cd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_315cdc:
    // 0x315cdc: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x315cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_315ce0:
    // 0x315ce0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x315ce0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_315ce4:
    // 0x315ce4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x315ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315ce8:
    // 0x315ce8: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x315ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315cec:
    // 0x315cec: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x315cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315cf0:
    // 0x315cf0: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x315cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315cf4:
    // 0x315cf4: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x315cf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_315cf8:
    // 0x315cf8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x315cf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_315cfc:
    // 0x315cfc: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x315cfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_315d00:
    // 0x315d00: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_315d04:
    if (ctx->pc == 0x315D04u) {
        ctx->pc = 0x315D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D00u;
        // 0x315d04: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D08u;
        goto label_315d08;
    }
    ctx->pc = 0x315D00u;
    {
        const bool branch_taken_0x315d00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D00u;
        // 0x315d04: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d00) {
            ctx->pc = 0x315D84u;
            goto label_315d84;
        }
    }
    ctx->pc = 0x315D08u;
label_315d08:
    // 0x315d08: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x315d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315d0c:
    // 0x315d0c: 0x0  nop
    ctx->pc = 0x315d0cu;
    // NOP
label_315d10:
    // 0x315d10: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_315d14:
    if (ctx->pc == 0x315D14u) {
        ctx->pc = 0x315D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D10u;
        // 0x315d14: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D18u;
        goto label_315d18;
    }
    ctx->pc = 0x315D10u;
    {
        const bool branch_taken_0x315d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315d10) {
            ctx->pc = 0x315D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315D10u;
            // 0x315d14: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315DB0u;
            goto label_315db0;
        }
    }
    ctx->pc = 0x315D18u;
label_315d18:
    // 0x315d18: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x315d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315d1c:
    // 0x315d1c: 0x0  nop
    ctx->pc = 0x315d1cu;
    // NOP
label_315d20:
    // 0x315d20: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_315d24:
    if (ctx->pc == 0x315D24u) {
        ctx->pc = 0x315D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D20u;
        // 0x315d24: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D28u;
        goto label_315d28;
    }
    ctx->pc = 0x315D20u;
    {
        const bool branch_taken_0x315d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315d20) {
            ctx->pc = 0x315D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315D20u;
            // 0x315d24: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315D94u;
            goto label_315d94;
        }
    }
    ctx->pc = 0x315D28u;
label_315d28:
    // 0x315d28: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x315d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_315d2c:
    // 0x315d2c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x315d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_315d30:
    // 0x315d30: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x315d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315d34:
    // 0x315d34: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x315d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_315d38:
    // 0x315d38: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x315d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_315d3c:
    // 0x315d3c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x315d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315d40:
    // 0x315d40: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x315d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315d44:
    // 0x315d44: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x315d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_315d48:
    // 0x315d48: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x315d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_315d4c:
    // 0x315d4c: 0xafa4034c  sw          $a0, 0x34C($sp)
    ctx->pc = 0x315d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 4));
label_315d50:
    // 0x315d50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_315d54:
    if (ctx->pc == 0x315D54u) {
        ctx->pc = 0x315D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D50u;
        // 0x315d54: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D58u;
        goto label_315d58;
    }
    ctx->pc = 0x315D50u;
    {
        const bool branch_taken_0x315d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D50u;
        // 0x315d54: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d50) {
            ctx->pc = 0x315D68u;
            goto label_315d68;
        }
    }
    ctx->pc = 0x315D58u;
label_315d58:
    // 0x315d58: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x315d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_315d5c:
    // 0x315d5c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x315d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_315d60:
    // 0x315d60: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x315d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_315d64:
    // 0x315d64: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x315d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_315d68:
    // 0x315d68: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x315d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_315d6c:
    // 0x315d6c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x315d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315d70:
    // 0x315d70: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x315d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_315d74:
    // 0x315d74: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_315d78:
    if (ctx->pc == 0x315D78u) {
        ctx->pc = 0x315D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D74u;
        // 0x315d78: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D7Cu;
        goto label_315d7c;
    }
    ctx->pc = 0x315D74u;
    {
        const bool branch_taken_0x315d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D74u;
        // 0x315d78: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d74) {
            ctx->pc = 0x315E1Cu;
            goto label_315e1c;
        }
    }
    ctx->pc = 0x315D7Cu;
label_315d7c:
    // 0x315d7c: 0x10000023  b           . + 4 + (0x23 << 2)
label_315d80:
    if (ctx->pc == 0x315D80u) {
        ctx->pc = 0x315D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D7Cu;
        // 0x315d80: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D84u;
        goto label_315d84;
    }
    ctx->pc = 0x315D7Cu;
    {
        const bool branch_taken_0x315d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D7Cu;
        // 0x315d80: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d7c) {
            ctx->pc = 0x315E0Cu;
            goto label_315e0c;
        }
    }
    ctx->pc = 0x315D84u;
label_315d84:
    // 0x315d84: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x315d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315d88:
    // 0x315d88: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_315d8c:
    if (ctx->pc == 0x315D8Cu) {
        ctx->pc = 0x315D90u;
        goto label_315d90;
    }
    ctx->pc = 0x315D88u;
    {
        const bool branch_taken_0x315d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315d88) {
            ctx->pc = 0x315D9Cu;
            goto label_315d9c;
        }
    }
    ctx->pc = 0x315D90u;
label_315d90:
    // 0x315d90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x315d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_315d94:
    // 0x315d94: 0x10000021  b           . + 4 + (0x21 << 2)
label_315d98:
    if (ctx->pc == 0x315D98u) {
        ctx->pc = 0x315D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D94u;
        // 0x315d98: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D9Cu;
        goto label_315d9c;
    }
    ctx->pc = 0x315D94u;
    {
        const bool branch_taken_0x315d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D94u;
        // 0x315d98: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d94) {
            ctx->pc = 0x315E1Cu;
            goto label_315e1c;
        }
    }
    ctx->pc = 0x315D9Cu;
label_315d9c:
    // 0x315d9c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x315d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315da0:
    // 0x315da0: 0x0  nop
    ctx->pc = 0x315da0u;
    // NOP
label_315da4:
    // 0x315da4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_315da8:
    if (ctx->pc == 0x315DA8u) {
        ctx->pc = 0x315DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DA4u;
        // 0x315da8: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DACu;
        goto label_315dac;
    }
    ctx->pc = 0x315DA4u;
    {
        const bool branch_taken_0x315da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DA4u;
        // 0x315da8: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315da4) {
            ctx->pc = 0x315DB8u;
            goto label_315db8;
        }
    }
    ctx->pc = 0x315DACu;
label_315dac:
    // 0x315dac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x315dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_315db0:
    // 0x315db0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_315db4:
    if (ctx->pc == 0x315DB4u) {
        ctx->pc = 0x315DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DB0u;
        // 0x315db4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DB8u;
        goto label_315db8;
    }
    ctx->pc = 0x315DB0u;
    {
        const bool branch_taken_0x315db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DB0u;
        // 0x315db4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315db0) {
            ctx->pc = 0x315E1Cu;
            goto label_315e1c;
        }
    }
    ctx->pc = 0x315DB8u;
label_315db8:
    // 0x315db8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x315db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_315dbc:
    // 0x315dbc: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x315dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315dc0:
    // 0x315dc0: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x315dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_315dc4:
    // 0x315dc4: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x315dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_315dc8:
    // 0x315dc8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x315dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315dcc:
    // 0x315dcc: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x315dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315dd0:
    // 0x315dd0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x315dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_315dd4:
    // 0x315dd4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x315dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_315dd8:
    // 0x315dd8: 0xafa4034c  sw          $a0, 0x34C($sp)
    ctx->pc = 0x315dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 4));
label_315ddc:
    // 0x315ddc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_315de0:
    if (ctx->pc == 0x315DE0u) {
        ctx->pc = 0x315DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DDCu;
        // 0x315de0: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DE4u;
        goto label_315de4;
    }
    ctx->pc = 0x315DDCu;
    {
        const bool branch_taken_0x315ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DDCu;
        // 0x315de0: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ddc) {
            ctx->pc = 0x315DF4u;
            goto label_315df4;
        }
    }
    ctx->pc = 0x315DE4u;
label_315de4:
    // 0x315de4: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x315de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_315de8:
    // 0x315de8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x315de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_315dec:
    // 0x315dec: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x315decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_315df0:
    // 0x315df0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x315df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_315df4:
    // 0x315df4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x315df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_315df8:
    // 0x315df8: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x315df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315dfc:
    // 0x315dfc: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x315dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_315e00:
    // 0x315e00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_315e04:
    if (ctx->pc == 0x315E04u) {
        ctx->pc = 0x315E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E00u;
        // 0x315e04: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E08u;
        goto label_315e08;
    }
    ctx->pc = 0x315E00u;
    {
        const bool branch_taken_0x315e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E00u;
        // 0x315e04: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e00) {
            ctx->pc = 0x315E1Cu;
            goto label_315e1c;
        }
    }
    ctx->pc = 0x315E08u;
label_315e08:
    // 0x315e08: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x315e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_315e0c:
    // 0x315e0c: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x315e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315e10:
    // 0x315e10: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x315e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_315e14:
    // 0x315e14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x315e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_315e18:
    // 0x315e18: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x315e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_315e1c:
    // 0x315e1c: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x315e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_315e20:
    // 0x315e20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x315e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315e24:
    // 0x315e24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315e28:
    // 0x315e28: 0x481ffa3  bgez        $a0, . + 4 + (-0x5D << 2)
label_315e2c:
    if (ctx->pc == 0x315E2Cu) {
        ctx->pc = 0x315E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E28u;
        // 0x315e2c: 0x8fa5034c  lw          $a1, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E30u;
        goto label_315e30;
    }
    ctx->pc = 0x315E28u;
    {
        const bool branch_taken_0x315e28 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x315E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E28u;
        // 0x315e2c: 0x8fa5034c  lw          $a1, 0x34C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e28) {
            ctx->pc = 0x315CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315cb8;
        }
    }
    ctx->pc = 0x315E30u;
label_315e30:
    // 0x315e30: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x315e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_315e34:
    // 0x315e34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x315e34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_315e38:
    // 0x315e38: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x315e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_315e3c:
    // 0x315e3c: 0xafa30354  sw          $v1, 0x354($sp)
    ctx->pc = 0x315e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 3));
label_315e40:
    // 0x315e40: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x315e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_315e44:
    // 0x315e44: 0x10430060  beq         $v0, $v1, . + 4 + (0x60 << 2)
label_315e48:
    if (ctx->pc == 0x315E48u) {
        ctx->pc = 0x315E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E44u;
        // 0x315e48: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E4Cu;
        goto label_315e4c;
    }
    ctx->pc = 0x315E44u;
    {
        const bool branch_taken_0x315e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x315E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E44u;
        // 0x315e48: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e44) {
            ctx->pc = 0x315FC8u;
            goto label_315fc8;
        }
    }
    ctx->pc = 0x315E4Cu;
label_315e4c:
    // 0x315e4c: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x315e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_315e50:
    // 0x315e50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x315e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315e54:
    // 0x315e54: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x315e54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_315e58:
    // 0x315e58: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
label_315e5c:
    if (ctx->pc == 0x315E5Cu) {
        ctx->pc = 0x315E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E58u;
        // 0x315e5c: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E60u;
        goto label_315e60;
    }
    ctx->pc = 0x315E58u;
    {
        const bool branch_taken_0x315e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E58u;
        // 0x315e5c: 0xafa20350  sw          $v0, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e58) {
            ctx->pc = 0x315FB8u;
            goto label_315fb8;
        }
    }
    ctx->pc = 0x315E60u;
label_315e60:
    // 0x315e60: 0x8f82a5ac  lw          $v0, -0x5A54($gp)
    ctx->pc = 0x315e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944172)));
label_315e64:
    // 0x315e64: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x315e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_315e68:
    // 0x315e68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x315e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_315e6c:
    // 0x315e6c: 0x10730053  beq         $v1, $s3, . + 4 + (0x53 << 2)
label_315e70:
    if (ctx->pc == 0x315E70u) {
        ctx->pc = 0x315E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E6Cu;
        // 0x315e70: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E74u;
        goto label_315e74;
    }
    ctx->pc = 0x315E6Cu;
    {
        const bool branch_taken_0x315e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x315E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E6Cu;
        // 0x315e70: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e6c) {
            ctx->pc = 0x315FBCu;
            goto label_315fbc;
        }
    }
    ctx->pc = 0x315E74u;
label_315e74:
    // 0x315e74: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x315e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_315e78:
    // 0x315e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_315e7c:
    // 0x315e7c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_315e80:
    if (ctx->pc == 0x315E80u) {
        ctx->pc = 0x315E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E7Cu;
        // 0x315e80: 0x8fa20354  lw          $v0, 0x354($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E84u;
        goto label_315e84;
    }
    ctx->pc = 0x315E7Cu;
    {
        const bool branch_taken_0x315e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E7Cu;
        // 0x315e80: 0x8fa20354  lw          $v0, 0x354($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e7c) {
            ctx->pc = 0x315FC0u;
            goto label_315fc0;
        }
    }
    ctx->pc = 0x315E84u;
label_315e84:
    // 0x315e84: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x315e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_315e88:
    // 0x315e88: 0xc0e2048  jal         func_388120
label_315e8c:
    if (ctx->pc == 0x315E8Cu) {
        ctx->pc = 0x315E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E88u;
        // 0x315e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E90u;
        goto label_315e90;
    }
    ctx->pc = 0x315E88u;
    SET_GPR_U32(ctx, 31, 0x315E90u);
    ctx->pc = 0x315E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E88u;
    // 0x315e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x315E88u, 0x315E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E90u;
label_315e90:
    // 0x315e90: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x315e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_315e94:
    // 0x315e94: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x315e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315e98:
    // 0x315e98: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x315e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_315e9c:
    // 0x315e9c: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x315e9cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_315ea0:
    // 0x315ea0: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x315ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_315ea4:
    // 0x315ea4: 0xe7a90360  swc1        $f9, 0x360($sp)
    ctx->pc = 0x315ea4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_315ea8:
    // 0x315ea8: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x315ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_315eac:
    // 0x315eac: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x315eacu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_315eb0:
    // 0x315eb0: 0xe7a60364  swc1        $f6, 0x364($sp)
    ctx->pc = 0x315eb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
label_315eb4:
    // 0x315eb4: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x315eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_315eb8:
    // 0x315eb8: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x315eb8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_315ebc:
    // 0x315ebc: 0xe7a50368  swc1        $f5, 0x368($sp)
    ctx->pc = 0x315ebcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_315ec0:
    // 0x315ec0: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x315ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_315ec4:
    // 0x315ec4: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x315ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_315ec8:
    // 0x315ec8: 0x46074802  mul.s       $f0, $f9, $f7
    ctx->pc = 0x315ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_315ecc:
    // 0x315ecc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x315eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_315ed0:
    // 0x315ed0: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x315ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
label_315ed4:
    // 0x315ed4: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x315ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_315ed8:
    // 0x315ed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x315ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_315edc:
    // 0x315edc: 0x46020280  add.s       $f10, $f0, $f2
    ctx->pc = 0x315edcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_315ee0:
    // 0x315ee0: 0x46144842  mul.s       $f1, $f9, $f20
    ctx->pc = 0x315ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
label_315ee4:
    // 0x315ee4: 0x46143082  mul.s       $f2, $f6, $f20
    ctx->pc = 0x315ee4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
label_315ee8:
    // 0x315ee8: 0x461428c2  mul.s       $f3, $f5, $f20
    ctx->pc = 0x315ee8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_315eec:
    // 0x315eec: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x315eecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_315ef0:
    // 0x315ef0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x315ef0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_315ef4:
    // 0x315ef4: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x315ef4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_315ef8:
    // 0x315ef8: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x315ef8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_315efc:
    // 0x315efc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x315efcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_315f00:
    // 0x315f00: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x315f00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_315f04:
    // 0x315f04: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x315f04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_315f08:
    // 0x315f08: 0xe7a30378  swc1        $f3, 0x378($sp)
    ctx->pc = 0x315f08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_315f0c:
    // 0x315f0c: 0xe7a10370  swc1        $f1, 0x370($sp)
    ctx->pc = 0x315f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_315f10:
    // 0x315f10: 0xe7a20374  swc1        $f2, 0x374($sp)
    ctx->pc = 0x315f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_315f14:
    // 0x315f14: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x315f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_315f18:
    // 0x315f18: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x315f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_315f1c:
    // 0x315f1c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x315f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_315f20:
    // 0x315f20: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x315f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_315f24:
    // 0x315f24: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x315f24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_315f28:
    // 0x315f28: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x315f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_315f2c:
    // 0x315f2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x315f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_315f30:
    // 0x315f30: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x315f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_315f34:
    // 0x315f34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x315f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_315f38:
    // 0x315f38: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x315f38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_315f3c:
    // 0x315f3c: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x315f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f40:
    // 0x315f40: 0x0  nop
    ctx->pc = 0x315f40u;
    // NOP
label_315f44:
    // 0x315f44: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_315f48:
    if (ctx->pc == 0x315F48u) {
        ctx->pc = 0x315F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F44u;
        // 0x315f48: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F4Cu;
        goto label_315f4c;
    }
    ctx->pc = 0x315F44u;
    {
        const bool branch_taken_0x315f44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F44u;
        // 0x315f48: 0x46005306  mov.s       $f12, $f10 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f44) {
            ctx->pc = 0x315F90u;
            goto label_315f90;
        }
    }
    ctx->pc = 0x315F4Cu;
label_315f4c:
    // 0x315f4c: 0x46045034  c.lt.s      $f10, $f4
    ctx->pc = 0x315f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f50:
    // 0x315f50: 0x0  nop
    ctx->pc = 0x315f50u;
    // NOP
label_315f54:
    // 0x315f54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_315f58:
    if (ctx->pc == 0x315F58u) {
        ctx->pc = 0x315F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F54u;
        // 0x315f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F5Cu;
        goto label_315f5c;
    }
    ctx->pc = 0x315F54u;
    {
        const bool branch_taken_0x315f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x315F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F54u;
        // 0x315f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f54) {
            ctx->pc = 0x315F74u;
            goto label_315f74;
        }
    }
    ctx->pc = 0x315F5Cu;
label_315f5c:
    // 0x315f5c: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x315f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
label_315f60:
    // 0x315f60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x315f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f64:
    // 0x315f64: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_315f68:
    if (ctx->pc == 0x315F68u) {
        ctx->pc = 0x315F6Cu;
        goto label_315f6c;
    }
    ctx->pc = 0x315F64u;
    {
        const bool branch_taken_0x315f64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315f64) {
            ctx->pc = 0x315F94u;
            goto label_315f94;
        }
    }
    ctx->pc = 0x315F6Cu;
label_315f6c:
    // 0x315f6c: 0x10000009  b           . + 4 + (0x9 << 2)
label_315f70:
    if (ctx->pc == 0x315F70u) {
        ctx->pc = 0x315F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F6Cu;
        // 0x315f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F74u;
        goto label_315f74;
    }
    ctx->pc = 0x315F6Cu;
    {
        const bool branch_taken_0x315f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F6Cu;
        // 0x315f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f6c) {
            ctx->pc = 0x315F94u;
            goto label_315f94;
        }
    }
    ctx->pc = 0x315F74u;
label_315f74:
    // 0x315f74: 0x460aa034  c.lt.s      $f20, $f10
    ctx->pc = 0x315f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_315f78:
    // 0x315f78: 0x0  nop
    ctx->pc = 0x315f78u;
    // NOP
label_315f7c:
    // 0x315f7c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_315f80:
    if (ctx->pc == 0x315F80u) {
        ctx->pc = 0x315F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F7Cu;
        // 0x315f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F84u;
        goto label_315f84;
    }
    ctx->pc = 0x315F7Cu;
    {
        const bool branch_taken_0x315f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x315f7c) {
            ctx->pc = 0x315F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315F7Cu;
            // 0x315f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315F94u;
            goto label_315f94;
        }
    }
    ctx->pc = 0x315F84u;
label_315f84:
    // 0x315f84: 0x46145001  sub.s       $f0, $f10, $f20
    ctx->pc = 0x315f84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[20]);
label_315f88:
    // 0x315f88: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_315f8c:
    if (ctx->pc == 0x315F8Cu) {
        ctx->pc = 0x315F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F88u;
        // 0x315f8c: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F90u;
        goto label_315f90;
    }
    ctx->pc = 0x315F88u;
    {
        const bool branch_taken_0x315f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F88u;
        // 0x315f8c: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f88) {
            ctx->pc = 0x315F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315f60;
        }
    }
    ctx->pc = 0x315F90u;
label_315f90:
    // 0x315f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315f94:
    // 0x315f94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_315f98:
    if (ctx->pc == 0x315F98u) {
        ctx->pc = 0x315F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F94u;
        // 0x315f98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F9Cu;
        goto label_315f9c;
    }
    ctx->pc = 0x315F94u;
    {
        const bool branch_taken_0x315f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F94u;
        // 0x315f98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f94) {
            ctx->pc = 0x315FB8u;
            goto label_315fb8;
        }
    }
    ctx->pc = 0x315F9Cu;
label_315f9c:
    // 0x315f9c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x315f9cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_315fa0:
    // 0x315fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315fa4:
    // 0x315fa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x315fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315fa8:
    // 0x315fa8: 0x2a0f809  jalr        $s5
label_315fac:
    if (ctx->pc == 0x315FACu) {
        ctx->pc = 0x315FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FA8u;
        // 0x315fac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FB0u;
        goto label_315fb0;
    }
    ctx->pc = 0x315FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x315FB0u);
        ctx->pc = 0x315FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FA8u;
        // 0x315fac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315FA8u, 0x315FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315FB0u;
label_315fb0:
    // 0x315fb0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_315fb4:
    if (ctx->pc == 0x315FB4u) {
        ctx->pc = 0x315FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FB0u;
        // 0x315fb4: 0x7bb003f0  lq          $s0, 0x3F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FB8u;
        goto label_315fb8;
    }
    ctx->pc = 0x315FB0u;
    {
        const bool branch_taken_0x315fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315fb0) {
            ctx->pc = 0x315FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FB0u;
            // 0x315fb4: 0x7bb003f0  lq          $s0, 0x3F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315FDCu;
            goto label_315fdc;
        }
    }
    ctx->pc = 0x315FB8u;
label_315fb8:
    // 0x315fb8: 0x8fa30350  lw          $v1, 0x350($sp)
    ctx->pc = 0x315fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_315fbc:
    // 0x315fbc: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x315fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_315fc0:
    // 0x315fc0: 0x1462ffa3  bne         $v1, $v0, . + 4 + (-0x5D << 2)
label_315fc4:
    if (ctx->pc == 0x315FC4u) {
        ctx->pc = 0x315FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FC0u;
        // 0x315fc4: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FC8u;
        goto label_315fc8;
    }
    ctx->pc = 0x315FC0u;
    {
        const bool branch_taken_0x315fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FC0u;
        // 0x315fc4: 0x8fa30350  lw          $v1, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fc0) {
            ctx->pc = 0x315E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315e50;
        }
    }
    ctx->pc = 0x315FC8u;
label_315fc8:
    // 0x315fc8: 0x8fa3034c  lw          $v1, 0x34C($sp)
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_315fcc:
    // 0x315fcc: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x315fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_315fd0:
    // 0x315fd0: 0x5440ff2d  bnel        $v0, $zero, . + 4 + (-0xD3 << 2)
label_315fd4:
    if (ctx->pc == 0x315FD4u) {
        ctx->pc = 0x315FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FD0u;
        // 0x315fd4: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FD8u;
        goto label_315fd8;
    }
    ctx->pc = 0x315FD0u;
    {
        const bool branch_taken_0x315fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315fd0) {
            ctx->pc = 0x315FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FD0u;
            // 0x315fd4: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315c88;
        }
    }
    ctx->pc = 0x315FD8u;
label_315fd8:
    // 0x315fd8: 0x7bb003f0  lq          $s0, 0x3F0($sp)
    ctx->pc = 0x315fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
label_315fdc:
    // 0x315fdc: 0x7bb103e0  lq          $s1, 0x3E0($sp)
    ctx->pc = 0x315fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_315fe0:
    // 0x315fe0: 0x7bb203d0  lq          $s2, 0x3D0($sp)
    ctx->pc = 0x315fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_315fe4:
    // 0x315fe4: 0x7bb303c0  lq          $s3, 0x3C0($sp)
    ctx->pc = 0x315fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_315fe8:
    // 0x315fe8: 0x7bb403b0  lq          $s4, 0x3B0($sp)
    ctx->pc = 0x315fe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_315fec:
    // 0x315fec: 0x7bb503a0  lq          $s5, 0x3A0($sp)
    ctx->pc = 0x315fecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_315ff0:
    // 0x315ff0: 0x7bb60390  lq          $s6, 0x390($sp)
    ctx->pc = 0x315ff0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_315ff4:
    // 0x315ff4: 0xdfbf0380  ld          $ra, 0x380($sp)
    ctx->pc = 0x315ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 896)));
label_315ff8:
    // 0x315ff8: 0xc7b40400  lwc1        $f20, 0x400($sp)
    ctx->pc = 0x315ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_315ffc:
    // 0x315ffc: 0x3e00008  jr          $ra
label_316000:
    if (ctx->pc == 0x316000u) {
        ctx->pc = 0x316000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FFCu;
        // 0x316000: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316004u;
        goto label_316004;
    }
    ctx->pc = 0x315FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FFCu;
        // 0x316000: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316004u;
label_316004:
    // 0x316004: 0x0  nop
    ctx->pc = 0x316004u;
    // NOP
    ctx->pc = 0x316008u;
}
