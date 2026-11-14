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

// Function: sub_00238930
// Address: 0x238930 - 0x238ea0
void sub_00238930_0x238930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238930_0x238930");
#endif

    switch (ctx->pc) {
        case 0x238930u: goto label_238930;
        case 0x238934u: goto label_238934;
        case 0x238938u: goto label_238938;
        case 0x23893cu: goto label_23893c;
        case 0x238940u: goto label_238940;
        case 0x238944u: goto label_238944;
        case 0x238948u: goto label_238948;
        case 0x23894cu: goto label_23894c;
        case 0x238950u: goto label_238950;
        case 0x238954u: goto label_238954;
        case 0x238958u: goto label_238958;
        case 0x23895cu: goto label_23895c;
        case 0x238960u: goto label_238960;
        case 0x238964u: goto label_238964;
        case 0x238968u: goto label_238968;
        case 0x23896cu: goto label_23896c;
        case 0x238970u: goto label_238970;
        case 0x238974u: goto label_238974;
        case 0x238978u: goto label_238978;
        case 0x23897cu: goto label_23897c;
        case 0x238980u: goto label_238980;
        case 0x238984u: goto label_238984;
        case 0x238988u: goto label_238988;
        case 0x23898cu: goto label_23898c;
        case 0x238990u: goto label_238990;
        case 0x238994u: goto label_238994;
        case 0x238998u: goto label_238998;
        case 0x23899cu: goto label_23899c;
        case 0x2389a0u: goto label_2389a0;
        case 0x2389a4u: goto label_2389a4;
        case 0x2389a8u: goto label_2389a8;
        case 0x2389acu: goto label_2389ac;
        case 0x2389b0u: goto label_2389b0;
        case 0x2389b4u: goto label_2389b4;
        case 0x2389b8u: goto label_2389b8;
        case 0x2389bcu: goto label_2389bc;
        case 0x2389c0u: goto label_2389c0;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389c8u: goto label_2389c8;
        case 0x2389ccu: goto label_2389cc;
        case 0x2389d0u: goto label_2389d0;
        case 0x2389d4u: goto label_2389d4;
        case 0x2389d8u: goto label_2389d8;
        case 0x2389dcu: goto label_2389dc;
        case 0x2389e0u: goto label_2389e0;
        case 0x2389e4u: goto label_2389e4;
        case 0x2389e8u: goto label_2389e8;
        case 0x2389ecu: goto label_2389ec;
        case 0x2389f0u: goto label_2389f0;
        case 0x2389f4u: goto label_2389f4;
        case 0x2389f8u: goto label_2389f8;
        case 0x2389fcu: goto label_2389fc;
        case 0x238a00u: goto label_238a00;
        case 0x238a04u: goto label_238a04;
        case 0x238a08u: goto label_238a08;
        case 0x238a0cu: goto label_238a0c;
        case 0x238a10u: goto label_238a10;
        case 0x238a14u: goto label_238a14;
        case 0x238a18u: goto label_238a18;
        case 0x238a1cu: goto label_238a1c;
        case 0x238a20u: goto label_238a20;
        case 0x238a24u: goto label_238a24;
        case 0x238a28u: goto label_238a28;
        case 0x238a2cu: goto label_238a2c;
        case 0x238a30u: goto label_238a30;
        case 0x238a34u: goto label_238a34;
        case 0x238a38u: goto label_238a38;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a40u: goto label_238a40;
        case 0x238a44u: goto label_238a44;
        case 0x238a48u: goto label_238a48;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a50u: goto label_238a50;
        case 0x238a54u: goto label_238a54;
        case 0x238a58u: goto label_238a58;
        case 0x238a5cu: goto label_238a5c;
        case 0x238a60u: goto label_238a60;
        case 0x238a64u: goto label_238a64;
        case 0x238a68u: goto label_238a68;
        case 0x238a6cu: goto label_238a6c;
        case 0x238a70u: goto label_238a70;
        case 0x238a74u: goto label_238a74;
        case 0x238a78u: goto label_238a78;
        case 0x238a7cu: goto label_238a7c;
        case 0x238a80u: goto label_238a80;
        case 0x238a84u: goto label_238a84;
        case 0x238a88u: goto label_238a88;
        case 0x238a8cu: goto label_238a8c;
        case 0x238a90u: goto label_238a90;
        case 0x238a94u: goto label_238a94;
        case 0x238a98u: goto label_238a98;
        case 0x238a9cu: goto label_238a9c;
        case 0x238aa0u: goto label_238aa0;
        case 0x238aa4u: goto label_238aa4;
        case 0x238aa8u: goto label_238aa8;
        case 0x238aacu: goto label_238aac;
        case 0x238ab0u: goto label_238ab0;
        case 0x238ab4u: goto label_238ab4;
        case 0x238ab8u: goto label_238ab8;
        case 0x238abcu: goto label_238abc;
        case 0x238ac0u: goto label_238ac0;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ac8u: goto label_238ac8;
        case 0x238accu: goto label_238acc;
        case 0x238ad0u: goto label_238ad0;
        case 0x238ad4u: goto label_238ad4;
        case 0x238ad8u: goto label_238ad8;
        case 0x238adcu: goto label_238adc;
        case 0x238ae0u: goto label_238ae0;
        case 0x238ae4u: goto label_238ae4;
        case 0x238ae8u: goto label_238ae8;
        case 0x238aecu: goto label_238aec;
        case 0x238af0u: goto label_238af0;
        case 0x238af4u: goto label_238af4;
        case 0x238af8u: goto label_238af8;
        case 0x238afcu: goto label_238afc;
        case 0x238b00u: goto label_238b00;
        case 0x238b04u: goto label_238b04;
        case 0x238b08u: goto label_238b08;
        case 0x238b0cu: goto label_238b0c;
        case 0x238b10u: goto label_238b10;
        case 0x238b14u: goto label_238b14;
        case 0x238b18u: goto label_238b18;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b20u: goto label_238b20;
        case 0x238b24u: goto label_238b24;
        case 0x238b28u: goto label_238b28;
        case 0x238b2cu: goto label_238b2c;
        case 0x238b30u: goto label_238b30;
        case 0x238b34u: goto label_238b34;
        case 0x238b38u: goto label_238b38;
        case 0x238b3cu: goto label_238b3c;
        case 0x238b40u: goto label_238b40;
        case 0x238b44u: goto label_238b44;
        case 0x238b48u: goto label_238b48;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b50u: goto label_238b50;
        case 0x238b54u: goto label_238b54;
        case 0x238b58u: goto label_238b58;
        case 0x238b5cu: goto label_238b5c;
        case 0x238b60u: goto label_238b60;
        case 0x238b64u: goto label_238b64;
        case 0x238b68u: goto label_238b68;
        case 0x238b6cu: goto label_238b6c;
        case 0x238b70u: goto label_238b70;
        case 0x238b74u: goto label_238b74;
        case 0x238b78u: goto label_238b78;
        case 0x238b7cu: goto label_238b7c;
        case 0x238b80u: goto label_238b80;
        case 0x238b84u: goto label_238b84;
        case 0x238b88u: goto label_238b88;
        case 0x238b8cu: goto label_238b8c;
        case 0x238b90u: goto label_238b90;
        case 0x238b94u: goto label_238b94;
        case 0x238b98u: goto label_238b98;
        case 0x238b9cu: goto label_238b9c;
        case 0x238ba0u: goto label_238ba0;
        case 0x238ba4u: goto label_238ba4;
        case 0x238ba8u: goto label_238ba8;
        case 0x238bacu: goto label_238bac;
        case 0x238bb0u: goto label_238bb0;
        case 0x238bb4u: goto label_238bb4;
        case 0x238bb8u: goto label_238bb8;
        case 0x238bbcu: goto label_238bbc;
        case 0x238bc0u: goto label_238bc0;
        case 0x238bc4u: goto label_238bc4;
        case 0x238bc8u: goto label_238bc8;
        case 0x238bccu: goto label_238bcc;
        case 0x238bd0u: goto label_238bd0;
        case 0x238bd4u: goto label_238bd4;
        case 0x238bd8u: goto label_238bd8;
        case 0x238bdcu: goto label_238bdc;
        case 0x238be0u: goto label_238be0;
        case 0x238be4u: goto label_238be4;
        case 0x238be8u: goto label_238be8;
        case 0x238becu: goto label_238bec;
        case 0x238bf0u: goto label_238bf0;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bf8u: goto label_238bf8;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c00u: goto label_238c00;
        case 0x238c04u: goto label_238c04;
        case 0x238c08u: goto label_238c08;
        case 0x238c0cu: goto label_238c0c;
        case 0x238c10u: goto label_238c10;
        case 0x238c14u: goto label_238c14;
        case 0x238c18u: goto label_238c18;
        case 0x238c1cu: goto label_238c1c;
        case 0x238c20u: goto label_238c20;
        case 0x238c24u: goto label_238c24;
        case 0x238c28u: goto label_238c28;
        case 0x238c2cu: goto label_238c2c;
        case 0x238c30u: goto label_238c30;
        case 0x238c34u: goto label_238c34;
        case 0x238c38u: goto label_238c38;
        case 0x238c3cu: goto label_238c3c;
        case 0x238c40u: goto label_238c40;
        case 0x238c44u: goto label_238c44;
        case 0x238c48u: goto label_238c48;
        case 0x238c4cu: goto label_238c4c;
        case 0x238c50u: goto label_238c50;
        case 0x238c54u: goto label_238c54;
        case 0x238c58u: goto label_238c58;
        case 0x238c5cu: goto label_238c5c;
        case 0x238c60u: goto label_238c60;
        case 0x238c64u: goto label_238c64;
        case 0x238c68u: goto label_238c68;
        case 0x238c6cu: goto label_238c6c;
        case 0x238c70u: goto label_238c70;
        case 0x238c74u: goto label_238c74;
        case 0x238c78u: goto label_238c78;
        case 0x238c7cu: goto label_238c7c;
        case 0x238c80u: goto label_238c80;
        case 0x238c84u: goto label_238c84;
        case 0x238c88u: goto label_238c88;
        case 0x238c8cu: goto label_238c8c;
        case 0x238c90u: goto label_238c90;
        case 0x238c94u: goto label_238c94;
        case 0x238c98u: goto label_238c98;
        case 0x238c9cu: goto label_238c9c;
        case 0x238ca0u: goto label_238ca0;
        case 0x238ca4u: goto label_238ca4;
        case 0x238ca8u: goto label_238ca8;
        case 0x238cacu: goto label_238cac;
        case 0x238cb0u: goto label_238cb0;
        case 0x238cb4u: goto label_238cb4;
        case 0x238cb8u: goto label_238cb8;
        case 0x238cbcu: goto label_238cbc;
        case 0x238cc0u: goto label_238cc0;
        case 0x238cc4u: goto label_238cc4;
        case 0x238cc8u: goto label_238cc8;
        case 0x238cccu: goto label_238ccc;
        case 0x238cd0u: goto label_238cd0;
        case 0x238cd4u: goto label_238cd4;
        case 0x238cd8u: goto label_238cd8;
        case 0x238cdcu: goto label_238cdc;
        case 0x238ce0u: goto label_238ce0;
        case 0x238ce4u: goto label_238ce4;
        case 0x238ce8u: goto label_238ce8;
        case 0x238cecu: goto label_238cec;
        case 0x238cf0u: goto label_238cf0;
        case 0x238cf4u: goto label_238cf4;
        case 0x238cf8u: goto label_238cf8;
        case 0x238cfcu: goto label_238cfc;
        case 0x238d00u: goto label_238d00;
        case 0x238d04u: goto label_238d04;
        case 0x238d08u: goto label_238d08;
        case 0x238d0cu: goto label_238d0c;
        case 0x238d10u: goto label_238d10;
        case 0x238d14u: goto label_238d14;
        case 0x238d18u: goto label_238d18;
        case 0x238d1cu: goto label_238d1c;
        case 0x238d20u: goto label_238d20;
        case 0x238d24u: goto label_238d24;
        case 0x238d28u: goto label_238d28;
        case 0x238d2cu: goto label_238d2c;
        case 0x238d30u: goto label_238d30;
        case 0x238d34u: goto label_238d34;
        case 0x238d38u: goto label_238d38;
        case 0x238d3cu: goto label_238d3c;
        case 0x238d40u: goto label_238d40;
        case 0x238d44u: goto label_238d44;
        case 0x238d48u: goto label_238d48;
        case 0x238d4cu: goto label_238d4c;
        case 0x238d50u: goto label_238d50;
        case 0x238d54u: goto label_238d54;
        case 0x238d58u: goto label_238d58;
        case 0x238d5cu: goto label_238d5c;
        case 0x238d60u: goto label_238d60;
        case 0x238d64u: goto label_238d64;
        case 0x238d68u: goto label_238d68;
        case 0x238d6cu: goto label_238d6c;
        case 0x238d70u: goto label_238d70;
        case 0x238d74u: goto label_238d74;
        case 0x238d78u: goto label_238d78;
        case 0x238d7cu: goto label_238d7c;
        case 0x238d80u: goto label_238d80;
        case 0x238d84u: goto label_238d84;
        case 0x238d88u: goto label_238d88;
        case 0x238d8cu: goto label_238d8c;
        case 0x238d90u: goto label_238d90;
        case 0x238d94u: goto label_238d94;
        case 0x238d98u: goto label_238d98;
        case 0x238d9cu: goto label_238d9c;
        case 0x238da0u: goto label_238da0;
        case 0x238da4u: goto label_238da4;
        case 0x238da8u: goto label_238da8;
        case 0x238dacu: goto label_238dac;
        case 0x238db0u: goto label_238db0;
        case 0x238db4u: goto label_238db4;
        case 0x238db8u: goto label_238db8;
        case 0x238dbcu: goto label_238dbc;
        case 0x238dc0u: goto label_238dc0;
        case 0x238dc4u: goto label_238dc4;
        case 0x238dc8u: goto label_238dc8;
        case 0x238dccu: goto label_238dcc;
        case 0x238dd0u: goto label_238dd0;
        case 0x238dd4u: goto label_238dd4;
        case 0x238dd8u: goto label_238dd8;
        case 0x238ddcu: goto label_238ddc;
        case 0x238de0u: goto label_238de0;
        case 0x238de4u: goto label_238de4;
        case 0x238de8u: goto label_238de8;
        case 0x238decu: goto label_238dec;
        case 0x238df0u: goto label_238df0;
        case 0x238df4u: goto label_238df4;
        case 0x238df8u: goto label_238df8;
        case 0x238dfcu: goto label_238dfc;
        case 0x238e00u: goto label_238e00;
        case 0x238e04u: goto label_238e04;
        case 0x238e08u: goto label_238e08;
        case 0x238e0cu: goto label_238e0c;
        case 0x238e10u: goto label_238e10;
        case 0x238e14u: goto label_238e14;
        case 0x238e18u: goto label_238e18;
        case 0x238e1cu: goto label_238e1c;
        case 0x238e20u: goto label_238e20;
        case 0x238e24u: goto label_238e24;
        case 0x238e28u: goto label_238e28;
        case 0x238e2cu: goto label_238e2c;
        case 0x238e30u: goto label_238e30;
        case 0x238e34u: goto label_238e34;
        case 0x238e38u: goto label_238e38;
        case 0x238e3cu: goto label_238e3c;
        case 0x238e40u: goto label_238e40;
        case 0x238e44u: goto label_238e44;
        case 0x238e48u: goto label_238e48;
        case 0x238e4cu: goto label_238e4c;
        case 0x238e50u: goto label_238e50;
        case 0x238e54u: goto label_238e54;
        case 0x238e58u: goto label_238e58;
        case 0x238e5cu: goto label_238e5c;
        case 0x238e60u: goto label_238e60;
        case 0x238e64u: goto label_238e64;
        case 0x238e68u: goto label_238e68;
        case 0x238e6cu: goto label_238e6c;
        case 0x238e70u: goto label_238e70;
        case 0x238e74u: goto label_238e74;
        case 0x238e78u: goto label_238e78;
        case 0x238e7cu: goto label_238e7c;
        case 0x238e80u: goto label_238e80;
        case 0x238e84u: goto label_238e84;
        case 0x238e88u: goto label_238e88;
        case 0x238e8cu: goto label_238e8c;
        case 0x238e90u: goto label_238e90;
        case 0x238e94u: goto label_238e94;
        case 0x238e98u: goto label_238e98;
        case 0x238e9cu: goto label_238e9c;
        default: break;
    }

    ctx->pc = 0x238930u;

label_238930:
    // 0x238930: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x238930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_238934:
    // 0x238934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x238934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_238938:
    // 0x238938: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_23893c:
    // 0x23893c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x23893cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_238940:
    // 0x238940: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x238940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_238944:
    // 0x238944: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x238944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_238948:
    // 0x238948: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x238948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_23894c:
    // 0x23894c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23894cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238950:
    // 0x238950: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_238954:
    // 0x238954: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x238954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_238958:
    // 0x238958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23895c:
    // 0x23895c: 0x0  nop
    ctx->pc = 0x23895cu;
    // NOP
label_238960:
    // 0x238960: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238964:
    // 0x238964: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x238964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_238968:
    // 0x238968: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23896c:
    // 0x23896c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_238970:
    // 0x238970: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x238970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_238974:
    // 0x238974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238978:
    // 0x238978: 0x0  nop
    ctx->pc = 0x238978u;
    // NOP
label_23897c:
    // 0x23897c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23897cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238980:
    // 0x238980: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x238980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_238984:
    // 0x238984: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_238988:
    // 0x238988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23898c:
    // 0x23898c: 0x0  nop
    ctx->pc = 0x23898cu;
    // NOP
label_238990:
    // 0x238990: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x238990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_238994:
    // 0x238994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x238994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_238998:
    // 0x238998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23899c:
    // 0x23899c: 0x0  nop
    ctx->pc = 0x23899cu;
    // NOP
label_2389a0:
    // 0x2389a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2389a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2389a4:
    // 0x2389a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2389a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2389a8:
    // 0x2389a8: 0x0  nop
    ctx->pc = 0x2389a8u;
    // NOP
label_2389ac:
    // 0x2389ac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2389acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2389b0:
    // 0x2389b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2389b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2389b4:
    // 0x2389b4: 0x0  nop
    ctx->pc = 0x2389b4u;
    // NOP
label_2389b8:
    // 0x2389b8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2389b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2389bc:
    // 0x2389bc: 0x8f82bbb8  lw          $v0, -0x4448($gp)
    ctx->pc = 0x2389bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949816)));
label_2389c0:
    // 0x2389c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2389c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2389c4:
    // 0x2389c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2389c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2389c8:
    // 0x2389c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2389c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2389cc:
    // 0x2389cc: 0x0  nop
    ctx->pc = 0x2389ccu;
    // NOP
label_2389d0:
    // 0x2389d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2389d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2389d4:
    // 0x2389d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2389d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2389d8:
    // 0x2389d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2389d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2389dc:
    // 0x2389dc: 0x0  nop
    ctx->pc = 0x2389dcu;
    // NOP
label_2389e0:
    // 0x2389e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2389e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2389e4:
    // 0x2389e4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2389e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2389e8:
    // 0x2389e8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2389e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2389ec:
    // 0x2389ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2389ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2389f0:
    // 0x2389f0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2389f4:
    if (ctx->pc == 0x2389F4u) {
        ctx->pc = 0x2389F8u;
        goto label_2389f8;
    }
    ctx->pc = 0x2389F0u;
    {
        const bool branch_taken_0x2389f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2389f0) {
            ctx->pc = 0x238A18u;
            goto label_238a18;
        }
    }
    ctx->pc = 0x2389F8u;
label_2389f8:
    // 0x2389f8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2389f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2389fc:
    // 0x2389fc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2389fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_238a00:
    // 0x238a00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_238a04:
    // 0x238a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x238a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238a08:
    // 0x238a08: 0x0  nop
    ctx->pc = 0x238a08u;
    // NOP
label_238a0c:
    // 0x238a0c: 0x0  nop
    ctx->pc = 0x238a0cu;
    // NOP
label_238a10:
    // 0x238a10: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_238a14:
    if (ctx->pc == 0x238A14u) {
        ctx->pc = 0x238A18u;
        goto label_238a18;
    }
    ctx->pc = 0x238A10u;
    {
        const bool branch_taken_0x238a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a10) {
            ctx->pc = 0x2389FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2389fc;
        }
    }
    ctx->pc = 0x238A18u;
label_238a18:
    // 0x238a18: 0xc78380fc  lwc1        $f3, -0x7F04($gp)
    ctx->pc = 0x238a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_238a1c:
    // 0x238a1c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x238a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238a20:
    // 0x238a20: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x238a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238a24:
    // 0x238a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238a28:
    // 0x238a28: 0x0  nop
    ctx->pc = 0x238a28u;
    // NOP
label_238a2c:
    // 0x238a2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238a2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238a30:
    // 0x238a30: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x238a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_238a34:
    // 0x238a34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x238a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_238a38:
    // 0x238a38: 0xc78180fc  lwc1        $f1, -0x7F04($gp)
    ctx->pc = 0x238a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238a3c:
    // 0x238a3c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x238a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a40:
    // 0x238a40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x238a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238a44:
    // 0x238a44: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x238a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_238a48:
    // 0x238a48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x238a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_238a4c:
    // 0x238a4c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x238a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a50:
    // 0x238a50: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a54:
    // 0x238a54: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x238a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_238a58:
    // 0x238a58: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x238a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a5c:
    // 0x238a5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a60:
    // 0x238a60: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x238a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_238a64:
    // 0x238a64: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x238a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a68:
    // 0x238a68: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a6c:
    // 0x238a6c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x238a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_238a70:
    // 0x238a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x238a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a74:
    // 0x238a74: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a78:
    // 0x238a78: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x238a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_238a7c:
    // 0x238a7c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x238a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a80:
    // 0x238a80: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a84:
    // 0x238a84: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x238a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_238a88:
    // 0x238a88: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x238a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a8c:
    // 0x238a8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a90:
    // 0x238a90: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x238a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
label_238a94:
    // 0x238a94: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x238a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238a98:
    // 0x238a98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238a9c:
    // 0x238a9c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x238a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_238aa0:
    // 0x238aa0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x238aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238aa4:
    // 0x238aa4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238aa8:
    // 0x238aa8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x238aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_238aac:
    // 0x238aac: 0x8f82bbb8  lw          $v0, -0x4448($gp)
    ctx->pc = 0x238aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949816)));
label_238ab0:
    // 0x238ab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ab4:
    // 0x238ab4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x238ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238ab8:
    // 0x238ab8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238abc:
    // 0x238abc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238ac0:
    // 0x238ac0: 0x40f809  jalr        $v0
label_238ac4:
    if (ctx->pc == 0x238AC4u) {
        ctx->pc = 0x238AC8u;
        goto label_238ac8;
    }
    ctx->pc = 0x238AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238AC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AC0u, 0x238AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238AC8u;
label_238ac8:
    // 0x238ac8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x238ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238acc:
    // 0x238acc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x238accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_238ad0:
    // 0x238ad0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238ad4:
    // 0x238ad4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238ad8:
    // 0x238ad8: 0x40f809  jalr        $v0
label_238adc:
    if (ctx->pc == 0x238ADCu) {
        ctx->pc = 0x238AE0u;
        goto label_238ae0;
    }
    ctx->pc = 0x238AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238AE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AD8u, 0x238AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238AE0u;
label_238ae0:
    // 0x238ae0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_238ae4:
    // 0x238ae4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x238ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238ae8:
    // 0x238ae8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238aec:
    // 0x238aec: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238af0:
    // 0x238af0: 0x40f809  jalr        $v0
label_238af4:
    if (ctx->pc == 0x238AF4u) {
        ctx->pc = 0x238AF8u;
        goto label_238af8;
    }
    ctx->pc = 0x238AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238AF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AF0u, 0x238AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238AF8u;
label_238af8:
    // 0x238af8: 0x8382bbd0  lb          $v0, -0x4430($gp)
    ctx->pc = 0x238af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949840)));
label_238afc:
    // 0x238afc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_238b00:
    if (ctx->pc == 0x238B00u) {
        ctx->pc = 0x238B04u;
        goto label_238b04;
    }
    ctx->pc = 0x238AFCu;
    {
        const bool branch_taken_0x238afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238afc) {
            ctx->pc = 0x238B18u;
            goto label_238b18;
        }
    }
    ctx->pc = 0x238B04u;
label_238b04:
    // 0x238b04: 0xc11904c  jal         func_464130
label_238b08:
    if (ctx->pc == 0x238B08u) {
        ctx->pc = 0x238B0Cu;
        goto label_238b0c;
    }
    ctx->pc = 0x238B04u;
    SET_GPR_U32(ctx, 31, 0x238B0Cu);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x238B04u, 0x238B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B0Cu;
label_238b0c:
    // 0x238b0c: 0xff82bbc8  sd          $v0, -0x4438($gp)
    ctx->pc = 0x238b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294949832), GPR_U64(ctx, 2));
label_238b10:
    // 0x238b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238b14:
    // 0x238b14: 0xa382bbd0  sb          $v0, -0x4430($gp)
    ctx->pc = 0x238b14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949840), (uint8_t)GPR_U32(ctx, 2));
label_238b18:
    // 0x238b18: 0xc11904c  jal         func_464130
label_238b1c:
    if (ctx->pc == 0x238B1Cu) {
        ctx->pc = 0x238B20u;
        goto label_238b20;
    }
    ctx->pc = 0x238B18u;
    SET_GPR_U32(ctx, 31, 0x238B20u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x238B18u, 0x238B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B20u;
label_238b20:
    // 0x238b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238b24:
    // 0x238b24: 0xdf82bbc8  ld          $v0, -0x4438($gp)
    ctx->pc = 0x238b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294949832)));
label_238b28:
    // 0x238b28: 0x202202f  dsubu       $a0, $s0, $v0
    ctx->pc = 0x238b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
label_238b2c:
    // 0x238b2c: 0xc09005c  jal         func_240170
label_238b30:
    if (ctx->pc == 0x238B30u) {
        ctx->pc = 0x238B34u;
        goto label_238b34;
    }
    ctx->pc = 0x238B2Cu;
    SET_GPR_U32(ctx, 31, 0x238B34u);
    ctx->pc = 0x240170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240170u, 0x238B2Cu, 0x238B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B34u;
label_238b34:
    // 0x238b34: 0xc7818100  lwc1        $f1, -0x7F00($gp)
    ctx->pc = 0x238b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238b38:
    // 0x238b38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x238b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238b3c:
    // 0x238b3c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x238b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_238b40:
    // 0x238b40: 0xff90bbc8  sd          $s0, -0x4438($gp)
    ctx->pc = 0x238b40u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294949832), GPR_U64(ctx, 16));
label_238b44:
    // 0x238b44: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_238b48:
    // 0x238b48: 0x24c6bb40  addiu       $a2, $a2, -0x44C0
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949696));
label_238b4c:
    // 0x238b4c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x238b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_238b50:
    // 0x238b50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x238b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238b54:
    // 0x238b54: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x238b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_238b58:
    // 0x238b58: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x238b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_238b5c:
    // 0x238b5c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x238b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_238b60:
    // 0x238b60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_238b64:
    // 0x238b64: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x238b64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_238b68:
    // 0x238b68: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x238b68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_238b6c:
    // 0x238b6c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_238b70:
    // 0x238b70: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_238b74:
    if (ctx->pc == 0x238B74u) {
        ctx->pc = 0x238B78u;
        goto label_238b78;
    }
    ctx->pc = 0x238B70u;
    {
        const bool branch_taken_0x238b70 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x238b70) {
            ctx->pc = 0x238B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238b54;
        }
    }
    ctx->pc = 0x238B78u;
label_238b78:
    // 0x238b78: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x238b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_238b7c:
    // 0x238b7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x238b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_238b80:
    // 0x238b80: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x238b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238b84:
    // 0x238b84: 0xc781bbd4  lwc1        $f1, -0x442C($gp)
    ctx->pc = 0x238b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238b88:
    // 0x238b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238b8c:
    // 0x238b8c: 0x0  nop
    ctx->pc = 0x238b8cu;
    // NOP
label_238b90:
    // 0x238b90: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238b90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238b94:
    // 0x238b94: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x238b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_238b98:
    // 0x238b98: 0xe780bbd4  swc1        $f0, -0x442C($gp)
    ctx->pc = 0x238b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949844), bits); }
label_238b9c:
    // 0x238b9c: 0xc78cbbd4  lwc1        $f12, -0x442C($gp)
    ctx->pc = 0x238b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238ba0:
    // 0x238ba0: 0xc0c3966  jal         func_30E598
label_238ba4:
    if (ctx->pc == 0x238BA4u) {
        ctx->pc = 0x238BA8u;
        goto label_238ba8;
    }
    ctx->pc = 0x238BA0u;
    SET_GPR_U32(ctx, 31, 0x238BA8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x238BA0u, 0x238BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BA8u;
label_238ba8:
    // 0x238ba8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x238ba8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_238bac:
    // 0x238bac: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x238bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238bb0:
    // 0x238bb0: 0xc78cbbd4  lwc1        $f12, -0x442C($gp)
    ctx->pc = 0x238bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238bb4:
    // 0x238bb4: 0xc0c38f0  jal         func_30E3C0
label_238bb8:
    if (ctx->pc == 0x238BB8u) {
        ctx->pc = 0x238BBCu;
        goto label_238bbc;
    }
    ctx->pc = 0x238BB4u;
    SET_GPR_U32(ctx, 31, 0x238BBCu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x238BB4u, 0x238BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BBCu;
label_238bbc:
    // 0x238bbc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x238bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238bc0:
    // 0x238bc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x238bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238bc4:
    // 0x238bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238bc8:
    // 0x238bc8: 0x0  nop
    ctx->pc = 0x238bc8u;
    // NOP
label_238bcc:
    // 0x238bcc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238bccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238bd0:
    // 0x238bd0: 0x4615a01d  msub.s      $f0, $f20, $f21
    ctx->pc = 0x238bd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
label_238bd4:
    // 0x238bd4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x238bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_238bd8:
    // 0x238bd8: 0xc78cbbd4  lwc1        $f12, -0x442C($gp)
    ctx->pc = 0x238bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238bdc:
    // 0x238bdc: 0xc0c3966  jal         func_30E598
label_238be0:
    if (ctx->pc == 0x238BE0u) {
        ctx->pc = 0x238BE4u;
        goto label_238be4;
    }
    ctx->pc = 0x238BDCu;
    SET_GPR_U32(ctx, 31, 0x238BE4u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x238BDCu, 0x238BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BE4u;
label_238be4:
    // 0x238be4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x238be4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_238be8:
    // 0x238be8: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x238be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238bec:
    // 0x238bec: 0xc78cbbd4  lwc1        $f12, -0x442C($gp)
    ctx->pc = 0x238becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238bf0:
    // 0x238bf0: 0xc0c38f0  jal         func_30E3C0
label_238bf4:
    if (ctx->pc == 0x238BF4u) {
        ctx->pc = 0x238BF8u;
        goto label_238bf8;
    }
    ctx->pc = 0x238BF0u;
    SET_GPR_U32(ctx, 31, 0x238BF8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x238BF0u, 0x238BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BF8u;
label_238bf8:
    // 0x238bf8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x238bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238bfc:
    // 0x238bfc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x238bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238c00:
    // 0x238c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238c04:
    // 0x238c04: 0x0  nop
    ctx->pc = 0x238c04u;
    // NOP
label_238c08:
    // 0x238c08: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238c08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238c0c:
    // 0x238c0c: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x238c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
label_238c10:
    // 0x238c10: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x238c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_238c14:
    // 0x238c14: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c18:
    // 0x238c18: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c1c:
    // 0x238c1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238c20:
    // 0x238c20: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c24:
    // 0x238c24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x238c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_238c28:
    // 0x238c28: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c2c:
    // 0x238c2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c30:
    // 0x238c30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238c30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238c34:
    // 0x238c34: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c38:
    // 0x238c38: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x238c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_238c3c:
    // 0x238c3c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c40:
    // 0x238c40: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c44:
    // 0x238c44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238c44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238c48:
    // 0x238c48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c4c:
    // 0x238c4c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x238c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_238c50:
    // 0x238c50: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c54:
    // 0x238c54: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c58:
    // 0x238c58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238c5c:
    // 0x238c5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c60:
    // 0x238c60: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x238c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_238c64:
    // 0x238c64: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c68:
    // 0x238c68: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c6c:
    // 0x238c6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238c70:
    // 0x238c70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c74:
    // 0x238c74: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x238c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_238c78:
    // 0x238c78: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c7c:
    // 0x238c7c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c80:
    // 0x238c80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238c84:
    // 0x238c84: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c88:
    // 0x238c88: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x238c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_238c8c:
    // 0x238c8c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238c90:
    // 0x238c90: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238c94:
    // 0x238c94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238c98:
    // 0x238c98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238c9c:
    // 0x238c9c: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x238c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_238ca0:
    // 0x238ca0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238ca4:
    // 0x238ca4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238ca8:
    // 0x238ca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238cac:
    // 0x238cac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238cb0:
    // 0x238cb0: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x238cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
label_238cb4:
    // 0x238cb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x238cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238cb8:
    // 0x238cb8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x238cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238cbc:
    // 0x238cbc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x238cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_238cc0:
    // 0x238cc0: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_238cc4:
    // 0x238cc4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x238cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238cc8:
    // 0x238cc8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238ccc:
    // 0x238ccc: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x238cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_238cd0:
    // 0x238cd0: 0x40f809  jalr        $v0
label_238cd4:
    if (ctx->pc == 0x238CD4u) {
        ctx->pc = 0x238CD8u;
        goto label_238cd8;
    }
    ctx->pc = 0x238CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238CD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238CD0u, 0x238CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238CD8u;
label_238cd8:
    // 0x238cd8: 0x8f82bbbc  lw          $v0, -0x4444($gp)
    ctx->pc = 0x238cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949820)));
label_238cdc:
    // 0x238cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238ce0:
    // 0x238ce0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238ce4:
    // 0x238ce4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238ce8:
    // 0x238ce8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238cec:
    // 0x238cec: 0x40f809  jalr        $v0
label_238cf0:
    if (ctx->pc == 0x238CF0u) {
        ctx->pc = 0x238CF4u;
        goto label_238cf4;
    }
    ctx->pc = 0x238CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238CF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238CECu, 0x238CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238CF4u;
label_238cf4:
    // 0x238cf4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x238cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238cf8:
    // 0x238cf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x238cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_238cfc:
    // 0x238cfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238d00:
    // 0x238d00: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238d04:
    // 0x238d04: 0x40f809  jalr        $v0
label_238d08:
    if (ctx->pc == 0x238D08u) {
        ctx->pc = 0x238D0Cu;
        goto label_238d0c;
    }
    ctx->pc = 0x238D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238D0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238D04u, 0x238D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238D0Cu;
label_238d0c:
    // 0x238d0c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x238d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_238d10:
    // 0x238d10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x238d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_238d14:
    // 0x238d14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238d18:
    // 0x238d18: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_238d1c:
    // 0x238d1c: 0x40f809  jalr        $v0
label_238d20:
    if (ctx->pc == 0x238D20u) {
        ctx->pc = 0x238D24u;
        goto label_238d24;
    }
    ctx->pc = 0x238D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238D24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238D1Cu, 0x238D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238D24u;
label_238d24:
    // 0x238d24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x238d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_238d28:
    // 0x238d28: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x238d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_238d2c:
    // 0x238d2c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x238d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_238d30:
    // 0x238d30: 0xc781bbd8  lwc1        $f1, -0x4428($gp)
    ctx->pc = 0x238d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238d34:
    // 0x238d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238d38:
    // 0x238d38: 0x0  nop
    ctx->pc = 0x238d38u;
    // NOP
label_238d3c:
    // 0x238d3c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238d3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238d40:
    // 0x238d40: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x238d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_238d44:
    // 0x238d44: 0xe780bbd8  swc1        $f0, -0x4428($gp)
    ctx->pc = 0x238d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949848), bits); }
label_238d48:
    // 0x238d48: 0xc78cbbd8  lwc1        $f12, -0x4428($gp)
    ctx->pc = 0x238d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238d4c:
    // 0x238d4c: 0xc0c3966  jal         func_30E598
label_238d50:
    if (ctx->pc == 0x238D50u) {
        ctx->pc = 0x238D54u;
        goto label_238d54;
    }
    ctx->pc = 0x238D4Cu;
    SET_GPR_U32(ctx, 31, 0x238D54u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x238D4Cu, 0x238D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D54u;
label_238d54:
    // 0x238d54: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x238d54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_238d58:
    // 0x238d58: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x238d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238d5c:
    // 0x238d5c: 0xc78cbbd8  lwc1        $f12, -0x4428($gp)
    ctx->pc = 0x238d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238d60:
    // 0x238d60: 0xc0c38f0  jal         func_30E3C0
label_238d64:
    if (ctx->pc == 0x238D64u) {
        ctx->pc = 0x238D68u;
        goto label_238d68;
    }
    ctx->pc = 0x238D60u;
    SET_GPR_U32(ctx, 31, 0x238D68u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x238D60u, 0x238D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D68u;
label_238d68:
    // 0x238d68: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x238d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238d6c:
    // 0x238d6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x238d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238d70:
    // 0x238d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238d74:
    // 0x238d74: 0x0  nop
    ctx->pc = 0x238d74u;
    // NOP
label_238d78:
    // 0x238d78: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238d78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238d7c:
    // 0x238d7c: 0x4615a01d  msub.s      $f0, $f20, $f21
    ctx->pc = 0x238d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
label_238d80:
    // 0x238d80: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x238d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_238d84:
    // 0x238d84: 0xc78cbbd8  lwc1        $f12, -0x4428($gp)
    ctx->pc = 0x238d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238d88:
    // 0x238d88: 0xc0c3966  jal         func_30E598
label_238d8c:
    if (ctx->pc == 0x238D8Cu) {
        ctx->pc = 0x238D90u;
        goto label_238d90;
    }
    ctx->pc = 0x238D88u;
    SET_GPR_U32(ctx, 31, 0x238D90u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x238D88u, 0x238D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D90u;
label_238d90:
    // 0x238d90: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x238d90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_238d94:
    // 0x238d94: 0xc7b40064  lwc1        $f20, 0x64($sp)
    ctx->pc = 0x238d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238d98:
    // 0x238d98: 0xc78cbbd8  lwc1        $f12, -0x4428($gp)
    ctx->pc = 0x238d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_238d9c:
    // 0x238d9c: 0xc0c38f0  jal         func_30E3C0
label_238da0:
    if (ctx->pc == 0x238DA0u) {
        ctx->pc = 0x238DA4u;
        goto label_238da4;
    }
    ctx->pc = 0x238D9Cu;
    SET_GPR_U32(ctx, 31, 0x238DA4u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x238D9Cu, 0x238DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DA4u;
label_238da4:
    // 0x238da4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x238da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238da8:
    // 0x238da8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x238da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238dac:
    // 0x238dac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238db0:
    // 0x238db0: 0x0  nop
    ctx->pc = 0x238db0u;
    // NOP
label_238db4:
    // 0x238db4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x238db4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_238db8:
    // 0x238db8: 0x4615a01c  madd.s      $f0, $f20, $f21
    ctx->pc = 0x238db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
label_238dbc:
    // 0x238dbc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x238dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_238dc0:
    // 0x238dc0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238dc4:
    // 0x238dc4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238dc8:
    // 0x238dc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238dcc:
    // 0x238dcc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238dd0:
    // 0x238dd0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x238dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_238dd4:
    // 0x238dd4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238dd8:
    // 0x238dd8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238ddc:
    // 0x238ddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238de0:
    // 0x238de0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238de4:
    // 0x238de4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x238de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_238de8:
    // 0x238de8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238dec:
    // 0x238dec: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238df0:
    // 0x238df0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238df0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238df4:
    // 0x238df4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238df8:
    // 0x238df8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x238df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_238dfc:
    // 0x238dfc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238e00:
    // 0x238e00: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238e04:
    // 0x238e04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238e08:
    // 0x238e08: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238e0c:
    // 0x238e0c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x238e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_238e10:
    // 0x238e10: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238e14:
    // 0x238e14: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238e18:
    // 0x238e18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238e1c:
    // 0x238e1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238e20:
    // 0x238e20: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x238e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_238e24:
    // 0x238e24: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238e28:
    // 0x238e28: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238e2c:
    // 0x238e2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238e30:
    // 0x238e30: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238e34:
    // 0x238e34: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x238e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_238e38:
    // 0x238e38: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x238e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238e3c:
    // 0x238e3c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x238e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238e40:
    // 0x238e40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238e44:
    // 0x238e44: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238e48:
    // 0x238e48: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x238e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_238e4c:
    // 0x238e4c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x238e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_238e50:
    // 0x238e50: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x238e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238e54:
    // 0x238e54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_238e58:
    // 0x238e58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x238e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238e5c:
    // 0x238e5c: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x238e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
label_238e60:
    // 0x238e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x238e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238e64:
    // 0x238e64: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x238e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_238e68:
    // 0x238e68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_238e6c:
    // 0x238e6c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x238e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_238e70:
    // 0x238e70: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238e74:
    // 0x238e74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_238e78:
    // 0x238e78: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x238e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_238e7c:
    // 0x238e7c: 0x40f809  jalr        $v0
label_238e80:
    if (ctx->pc == 0x238E80u) {
        ctx->pc = 0x238E84u;
        goto label_238e84;
    }
    ctx->pc = 0x238E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238E84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E7Cu, 0x238E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238E84u;
label_238e84:
    // 0x238e84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238e88:
    // 0x238e88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238e8c:
    // 0x238e8c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x238e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_238e90:
    // 0x238e90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x238e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238e94:
    // 0x238e94: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x238e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_238e98:
    // 0x238e98: 0x3e00008  jr          $ra
label_238e9c:
    if (ctx->pc == 0x238E9Cu) {
        ctx->pc = 0x238EA0u;
        goto label_fallthrough_0x238e98;
    }
    ctx->pc = 0x238E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238e98:
    ctx->pc = 0x238EA0u;
}
