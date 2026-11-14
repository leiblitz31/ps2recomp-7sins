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

// Function: sub_001E6D00
// Address: 0x1e6d00 - 0x1e7010
void sub_001E6D00_0x1e6d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6D00_0x1e6d00");
#endif

    switch (ctx->pc) {
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d04u: goto label_1e6d04;
        case 0x1e6d08u: goto label_1e6d08;
        case 0x1e6d0cu: goto label_1e6d0c;
        case 0x1e6d10u: goto label_1e6d10;
        case 0x1e6d14u: goto label_1e6d14;
        case 0x1e6d18u: goto label_1e6d18;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d20u: goto label_1e6d20;
        case 0x1e6d24u: goto label_1e6d24;
        case 0x1e6d28u: goto label_1e6d28;
        case 0x1e6d2cu: goto label_1e6d2c;
        case 0x1e6d30u: goto label_1e6d30;
        case 0x1e6d34u: goto label_1e6d34;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d3cu: goto label_1e6d3c;
        case 0x1e6d40u: goto label_1e6d40;
        case 0x1e6d44u: goto label_1e6d44;
        case 0x1e6d48u: goto label_1e6d48;
        case 0x1e6d4cu: goto label_1e6d4c;
        case 0x1e6d50u: goto label_1e6d50;
        case 0x1e6d54u: goto label_1e6d54;
        case 0x1e6d58u: goto label_1e6d58;
        case 0x1e6d5cu: goto label_1e6d5c;
        case 0x1e6d60u: goto label_1e6d60;
        case 0x1e6d64u: goto label_1e6d64;
        case 0x1e6d68u: goto label_1e6d68;
        case 0x1e6d6cu: goto label_1e6d6c;
        case 0x1e6d70u: goto label_1e6d70;
        case 0x1e6d74u: goto label_1e6d74;
        case 0x1e6d78u: goto label_1e6d78;
        case 0x1e6d7cu: goto label_1e6d7c;
        case 0x1e6d80u: goto label_1e6d80;
        case 0x1e6d84u: goto label_1e6d84;
        case 0x1e6d88u: goto label_1e6d88;
        case 0x1e6d8cu: goto label_1e6d8c;
        case 0x1e6d90u: goto label_1e6d90;
        case 0x1e6d94u: goto label_1e6d94;
        case 0x1e6d98u: goto label_1e6d98;
        case 0x1e6d9cu: goto label_1e6d9c;
        case 0x1e6da0u: goto label_1e6da0;
        case 0x1e6da4u: goto label_1e6da4;
        case 0x1e6da8u: goto label_1e6da8;
        case 0x1e6dacu: goto label_1e6dac;
        case 0x1e6db0u: goto label_1e6db0;
        case 0x1e6db4u: goto label_1e6db4;
        case 0x1e6db8u: goto label_1e6db8;
        case 0x1e6dbcu: goto label_1e6dbc;
        case 0x1e6dc0u: goto label_1e6dc0;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6dc8u: goto label_1e6dc8;
        case 0x1e6dccu: goto label_1e6dcc;
        case 0x1e6dd0u: goto label_1e6dd0;
        case 0x1e6dd4u: goto label_1e6dd4;
        case 0x1e6dd8u: goto label_1e6dd8;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6de0u: goto label_1e6de0;
        case 0x1e6de4u: goto label_1e6de4;
        case 0x1e6de8u: goto label_1e6de8;
        case 0x1e6decu: goto label_1e6dec;
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6df4u: goto label_1e6df4;
        case 0x1e6df8u: goto label_1e6df8;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e00u: goto label_1e6e00;
        case 0x1e6e04u: goto label_1e6e04;
        case 0x1e6e08u: goto label_1e6e08;
        case 0x1e6e0cu: goto label_1e6e0c;
        case 0x1e6e10u: goto label_1e6e10;
        case 0x1e6e14u: goto label_1e6e14;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e20u: goto label_1e6e20;
        case 0x1e6e24u: goto label_1e6e24;
        case 0x1e6e28u: goto label_1e6e28;
        case 0x1e6e2cu: goto label_1e6e2c;
        case 0x1e6e30u: goto label_1e6e30;
        case 0x1e6e34u: goto label_1e6e34;
        case 0x1e6e38u: goto label_1e6e38;
        case 0x1e6e3cu: goto label_1e6e3c;
        case 0x1e6e40u: goto label_1e6e40;
        case 0x1e6e44u: goto label_1e6e44;
        case 0x1e6e48u: goto label_1e6e48;
        case 0x1e6e4cu: goto label_1e6e4c;
        case 0x1e6e50u: goto label_1e6e50;
        case 0x1e6e54u: goto label_1e6e54;
        case 0x1e6e58u: goto label_1e6e58;
        case 0x1e6e5cu: goto label_1e6e5c;
        case 0x1e6e60u: goto label_1e6e60;
        case 0x1e6e64u: goto label_1e6e64;
        case 0x1e6e68u: goto label_1e6e68;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e70u: goto label_1e6e70;
        case 0x1e6e74u: goto label_1e6e74;
        case 0x1e6e78u: goto label_1e6e78;
        case 0x1e6e7cu: goto label_1e6e7c;
        case 0x1e6e80u: goto label_1e6e80;
        case 0x1e6e84u: goto label_1e6e84;
        case 0x1e6e88u: goto label_1e6e88;
        case 0x1e6e8cu: goto label_1e6e8c;
        case 0x1e6e90u: goto label_1e6e90;
        case 0x1e6e94u: goto label_1e6e94;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6e9cu: goto label_1e6e9c;
        case 0x1e6ea0u: goto label_1e6ea0;
        case 0x1e6ea4u: goto label_1e6ea4;
        case 0x1e6ea8u: goto label_1e6ea8;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eb0u: goto label_1e6eb0;
        case 0x1e6eb4u: goto label_1e6eb4;
        case 0x1e6eb8u: goto label_1e6eb8;
        case 0x1e6ebcu: goto label_1e6ebc;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6ec4u: goto label_1e6ec4;
        case 0x1e6ec8u: goto label_1e6ec8;
        case 0x1e6eccu: goto label_1e6ecc;
        case 0x1e6ed0u: goto label_1e6ed0;
        case 0x1e6ed4u: goto label_1e6ed4;
        case 0x1e6ed8u: goto label_1e6ed8;
        case 0x1e6edcu: goto label_1e6edc;
        case 0x1e6ee0u: goto label_1e6ee0;
        case 0x1e6ee4u: goto label_1e6ee4;
        case 0x1e6ee8u: goto label_1e6ee8;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6ef0u: goto label_1e6ef0;
        case 0x1e6ef4u: goto label_1e6ef4;
        case 0x1e6ef8u: goto label_1e6ef8;
        case 0x1e6efcu: goto label_1e6efc;
        case 0x1e6f00u: goto label_1e6f00;
        case 0x1e6f04u: goto label_1e6f04;
        case 0x1e6f08u: goto label_1e6f08;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f10u: goto label_1e6f10;
        case 0x1e6f14u: goto label_1e6f14;
        case 0x1e6f18u: goto label_1e6f18;
        case 0x1e6f1cu: goto label_1e6f1c;
        case 0x1e6f20u: goto label_1e6f20;
        case 0x1e6f24u: goto label_1e6f24;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f30u: goto label_1e6f30;
        case 0x1e6f34u: goto label_1e6f34;
        case 0x1e6f38u: goto label_1e6f38;
        case 0x1e6f3cu: goto label_1e6f3c;
        case 0x1e6f40u: goto label_1e6f40;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f48u: goto label_1e6f48;
        case 0x1e6f4cu: goto label_1e6f4c;
        case 0x1e6f50u: goto label_1e6f50;
        case 0x1e6f54u: goto label_1e6f54;
        case 0x1e6f58u: goto label_1e6f58;
        case 0x1e6f5cu: goto label_1e6f5c;
        case 0x1e6f60u: goto label_1e6f60;
        case 0x1e6f64u: goto label_1e6f64;
        case 0x1e6f68u: goto label_1e6f68;
        case 0x1e6f6cu: goto label_1e6f6c;
        case 0x1e6f70u: goto label_1e6f70;
        case 0x1e6f74u: goto label_1e6f74;
        case 0x1e6f78u: goto label_1e6f78;
        case 0x1e6f7cu: goto label_1e6f7c;
        case 0x1e6f80u: goto label_1e6f80;
        case 0x1e6f84u: goto label_1e6f84;
        case 0x1e6f88u: goto label_1e6f88;
        case 0x1e6f8cu: goto label_1e6f8c;
        case 0x1e6f90u: goto label_1e6f90;
        case 0x1e6f94u: goto label_1e6f94;
        case 0x1e6f98u: goto label_1e6f98;
        case 0x1e6f9cu: goto label_1e6f9c;
        case 0x1e6fa0u: goto label_1e6fa0;
        case 0x1e6fa4u: goto label_1e6fa4;
        case 0x1e6fa8u: goto label_1e6fa8;
        case 0x1e6facu: goto label_1e6fac;
        case 0x1e6fb0u: goto label_1e6fb0;
        case 0x1e6fb4u: goto label_1e6fb4;
        case 0x1e6fb8u: goto label_1e6fb8;
        case 0x1e6fbcu: goto label_1e6fbc;
        case 0x1e6fc0u: goto label_1e6fc0;
        case 0x1e6fc4u: goto label_1e6fc4;
        case 0x1e6fc8u: goto label_1e6fc8;
        case 0x1e6fccu: goto label_1e6fcc;
        case 0x1e6fd0u: goto label_1e6fd0;
        case 0x1e6fd4u: goto label_1e6fd4;
        case 0x1e6fd8u: goto label_1e6fd8;
        case 0x1e6fdcu: goto label_1e6fdc;
        case 0x1e6fe0u: goto label_1e6fe0;
        case 0x1e6fe4u: goto label_1e6fe4;
        case 0x1e6fe8u: goto label_1e6fe8;
        case 0x1e6fecu: goto label_1e6fec;
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e6ff4u: goto label_1e6ff4;
        case 0x1e6ff8u: goto label_1e6ff8;
        case 0x1e6ffcu: goto label_1e6ffc;
        case 0x1e7000u: goto label_1e7000;
        case 0x1e7004u: goto label_1e7004;
        case 0x1e7008u: goto label_1e7008;
        case 0x1e700cu: goto label_1e700c;
        default: break;
    }

    ctx->pc = 0x1e6d00u;

label_1e6d00:
    // 0x1e6d00: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1e6d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1e6d04:
    // 0x1e6d04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e6d08:
    // 0x1e6d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e6d0c:
    // 0x1e6d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6d10:
    // 0x1e6d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6d14:
    // 0x1e6d14: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x1e6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_1e6d18:
    // 0x1e6d18: 0xc12242c  jal         func_4890B0
label_1e6d1c:
    if (ctx->pc == 0x1E6D1Cu) {
        ctx->pc = 0x1E6D20u;
        goto label_1e6d20;
    }
    ctx->pc = 0x1E6D18u;
    SET_GPR_U32(ctx, 31, 0x1E6D20u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1E6D18u, 0x1E6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D20u;
label_1e6d20:
    // 0x1e6d20: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1e6d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1e6d24:
    // 0x1e6d24: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1e6d28:
    // 0x1e6d28: 0x8c520060  lw          $s2, 0x60($v0)
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1e6d2c:
    // 0x1e6d2c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1e6d30:
    // 0x1e6d30: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1e6d34:
    // 0x1e6d34: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x1e6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_1e6d38:
    // 0x1e6d38: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x1e6d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1e6d3c:
    // 0x1e6d3c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e6d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1e6d40:
    // 0x1e6d40: 0xc105f96  jal         func_417E58
label_1e6d44:
    if (ctx->pc == 0x1E6D44u) {
        ctx->pc = 0x1E6D48u;
        goto label_1e6d48;
    }
    ctx->pc = 0x1E6D40u;
    SET_GPR_U32(ctx, 31, 0x1E6D48u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x1E6D40u, 0x1E6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D48u;
label_1e6d48:
    // 0x1e6d48: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1e6d4c:
    // 0x1e6d4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1e6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e6d50:
    // 0x1e6d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6d54:
    // 0x1e6d54: 0x0  nop
    ctx->pc = 0x1e6d54u;
    // NOP
label_1e6d58:
    // 0x1e6d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e6d5c:
    // 0x1e6d5c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e6d60:
    // 0x1e6d60: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1e6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1e6d64:
    // 0x1e6d64: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1e6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1e6d68:
    // 0x1e6d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6d6c:
    // 0x1e6d6c: 0x0  nop
    ctx->pc = 0x1e6d6cu;
    // NOP
label_1e6d70:
    // 0x1e6d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e6d74:
    // 0x1e6d74: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1e6d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1e6d78:
    // 0x1e6d78: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1e6d7c:
    // 0x1e6d7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e6d80:
    // 0x1e6d80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e6d84:
    // 0x1e6d84: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1e6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6d88:
    // 0x1e6d88: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6d88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1e6d8c:
    // 0x1e6d8c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e6d90:
    // 0x1e6d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6d94:
    // 0x1e6d94: 0x0  nop
    ctx->pc = 0x1e6d94u;
    // NOP
label_1e6d98:
    // 0x1e6d98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e6d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e6d9c:
    // 0x1e6d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6da0:
    // 0x1e6da0: 0x0  nop
    ctx->pc = 0x1e6da0u;
    // NOP
label_1e6da4:
    // 0x1e6da4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1e6da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1e6da8:
    // 0x1e6da8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e6dac:
    // 0x1e6dac: 0xc440e89c  lwc1        $f0, -0x1764($v0)
    ctx->pc = 0x1e6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6db0:
    // 0x1e6db0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1e6db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1e6db4:
    // 0x1e6db4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6db8:
    // 0x1e6db8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1e6db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e6dbc:
    // 0x1e6dbc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6dc0:
    // 0x1e6dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6dc4:
    // 0x1e6dc4: 0x0  nop
    ctx->pc = 0x1e6dc4u;
    // NOP
label_1e6dc8:
    // 0x1e6dc8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e6dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1e6dcc:
    // 0x1e6dcc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6dd0:
    // 0x1e6dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6dd4:
    // 0x1e6dd4: 0x0  nop
    ctx->pc = 0x1e6dd4u;
    // NOP
label_1e6dd8:
    // 0x1e6dd8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e6dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1e6ddc:
    // 0x1e6ddc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6de0:
    // 0x1e6de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6de4:
    // 0x1e6de4: 0x0  nop
    ctx->pc = 0x1e6de4u;
    // NOP
label_1e6de8:
    // 0x1e6de8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e6de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1e6dec:
    // 0x1e6dec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1e6decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1e6df0:
    // 0x1e6df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6df4:
    // 0x1e6df4: 0x0  nop
    ctx->pc = 0x1e6df4u;
    // NOP
label_1e6df8:
    // 0x1e6df8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e6df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1e6dfc:
    // 0x1e6dfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e00:
    // 0x1e6e00: 0x0  nop
    ctx->pc = 0x1e6e00u;
    // NOP
label_1e6e04:
    // 0x1e6e04: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e6e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e6e08:
    // 0x1e6e08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e0c:
    // 0x1e6e0c: 0x0  nop
    ctx->pc = 0x1e6e0cu;
    // NOP
label_1e6e10:
    // 0x1e6e10: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e6e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e6e14:
    // 0x1e6e14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e18:
    // 0x1e6e18: 0x0  nop
    ctx->pc = 0x1e6e18u;
    // NOP
label_1e6e1c:
    // 0x1e6e1c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1e6e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1e6e20:
    // 0x1e6e20: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1e6e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e24:
    // 0x1e6e24: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e6e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1e6e28:
    // 0x1e6e28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e6e2c:
    // 0x1e6e2c: 0xc440e89c  lwc1        $f0, -0x1764($v0)
    ctx->pc = 0x1e6e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e30:
    // 0x1e6e30: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1e6e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1e6e34:
    // 0x1e6e34: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e38:
    // 0x1e6e38: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1e6e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e6e3c:
    // 0x1e6e3c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6e40:
    // 0x1e6e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e44:
    // 0x1e6e44: 0x0  nop
    ctx->pc = 0x1e6e44u;
    // NOP
label_1e6e48:
    // 0x1e6e48: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e6e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e6e4c:
    // 0x1e6e4c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6e50:
    // 0x1e6e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e54:
    // 0x1e6e54: 0x0  nop
    ctx->pc = 0x1e6e54u;
    // NOP
label_1e6e58:
    // 0x1e6e58: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e6e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e6e5c:
    // 0x1e6e5c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6e60:
    // 0x1e6e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e64:
    // 0x1e6e64: 0x0  nop
    ctx->pc = 0x1e6e64u;
    // NOP
label_1e6e68:
    // 0x1e6e68: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e6e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1e6e6c:
    // 0x1e6e6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1e6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1e6e70:
    // 0x1e6e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e74:
    // 0x1e6e74: 0x0  nop
    ctx->pc = 0x1e6e74u;
    // NOP
label_1e6e78:
    // 0x1e6e78: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e6e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1e6e7c:
    // 0x1e6e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e80:
    // 0x1e6e80: 0x0  nop
    ctx->pc = 0x1e6e80u;
    // NOP
label_1e6e84:
    // 0x1e6e84: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1e6e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e6e88:
    // 0x1e6e88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e6e8c:
    // 0x1e6e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e90:
    // 0x1e6e90: 0x0  nop
    ctx->pc = 0x1e6e90u;
    // NOP
label_1e6e94:
    // 0x1e6e94: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1e6e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e6e98:
    // 0x1e6e98: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e6e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6e9c:
    // 0x1e6e9c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e6e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e6ea0:
    // 0x1e6ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6ea4:
    // 0x1e6ea4: 0x0  nop
    ctx->pc = 0x1e6ea4u;
    // NOP
label_1e6ea8:
    // 0x1e6ea8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e6ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e6eac:
    // 0x1e6eac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e6eb0:
    // 0x1e6eb0: 0xc440e89c  lwc1        $f0, -0x1764($v0)
    ctx->pc = 0x1e6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6eb4:
    // 0x1e6eb4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e6eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e6eb8:
    // 0x1e6eb8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ebc:
    // 0x1e6ebc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e6ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1e6ec0:
    // 0x1e6ec0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6ec4:
    // 0x1e6ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6ec8:
    // 0x1e6ec8: 0x0  nop
    ctx->pc = 0x1e6ec8u;
    // NOP
label_1e6ecc:
    // 0x1e6ecc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e6eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e6ed0:
    // 0x1e6ed0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6ed4:
    // 0x1e6ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6ed8:
    // 0x1e6ed8: 0x0  nop
    ctx->pc = 0x1e6ed8u;
    // NOP
label_1e6edc:
    // 0x1e6edc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e6edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1e6ee0:
    // 0x1e6ee0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6ee4:
    // 0x1e6ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6ee8:
    // 0x1e6ee8: 0x0  nop
    ctx->pc = 0x1e6ee8u;
    // NOP
label_1e6eec:
    // 0x1e6eec: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e6eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1e6ef0:
    // 0x1e6ef0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1e6ef4:
    // 0x1e6ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6ef8:
    // 0x1e6ef8: 0x0  nop
    ctx->pc = 0x1e6ef8u;
    // NOP
label_1e6efc:
    // 0x1e6efc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1e6f00:
    // 0x1e6f00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e6f04:
    // 0x1e6f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f08:
    // 0x1e6f08: 0x0  nop
    ctx->pc = 0x1e6f08u;
    // NOP
label_1e6f0c:
    // 0x1e6f0c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e6f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e6f10:
    // 0x1e6f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e6f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f14:
    // 0x1e6f14: 0x0  nop
    ctx->pc = 0x1e6f14u;
    // NOP
label_1e6f18:
    // 0x1e6f18: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e6f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1e6f1c:
    // 0x1e6f1c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e6f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6f20:
    // 0x1e6f20: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1e6f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1e6f24:
    // 0x1e6f24: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1e6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6f28:
    // 0x1e6f28: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1e6f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1e6f2c:
    // 0x1e6f2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e6f30:
    // 0x1e6f30: 0xc440e89c  lwc1        $f0, -0x1764($v0)
    ctx->pc = 0x1e6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6f34:
    // 0x1e6f34: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1e6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1e6f38:
    // 0x1e6f38: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1e6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6f3c:
    // 0x1e6f3c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1e6f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1e6f40:
    // 0x1e6f40: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6f44:
    // 0x1e6f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f48:
    // 0x1e6f48: 0x0  nop
    ctx->pc = 0x1e6f48u;
    // NOP
label_1e6f4c:
    // 0x1e6f4c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1e6f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1e6f50:
    // 0x1e6f50: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6f54:
    // 0x1e6f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f58:
    // 0x1e6f58: 0x0  nop
    ctx->pc = 0x1e6f58u;
    // NOP
label_1e6f5c:
    // 0x1e6f5c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1e6f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1e6f60:
    // 0x1e6f60: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1e6f64:
    // 0x1e6f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f68:
    // 0x1e6f68: 0x0  nop
    ctx->pc = 0x1e6f68u;
    // NOP
label_1e6f6c:
    // 0x1e6f6c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1e6f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1e6f70:
    // 0x1e6f70: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1e6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1e6f74:
    // 0x1e6f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f78:
    // 0x1e6f78: 0x0  nop
    ctx->pc = 0x1e6f78u;
    // NOP
label_1e6f7c:
    // 0x1e6f7c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1e6f80:
    // 0x1e6f80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e6f84:
    // 0x1e6f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f88:
    // 0x1e6f88: 0x0  nop
    ctx->pc = 0x1e6f88u;
    // NOP
label_1e6f8c:
    // 0x1e6f8c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1e6f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1e6f90:
    // 0x1e6f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e6f94:
    // 0x1e6f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6f98:
    // 0x1e6f98: 0x0  nop
    ctx->pc = 0x1e6f98u;
    // NOP
label_1e6f9c:
    // 0x1e6f9c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1e6f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1e6fa0:
    // 0x1e6fa0: 0xc10d510  jal         func_435440
label_1e6fa4:
    if (ctx->pc == 0x1E6FA4u) {
        ctx->pc = 0x1E6FA8u;
        goto label_1e6fa8;
    }
    ctx->pc = 0x1E6FA0u;
    SET_GPR_U32(ctx, 31, 0x1E6FA8u);
    ctx->pc = 0x435440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435440u, 0x1E6FA0u, 0x1E6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FA8u;
label_1e6fa8:
    // 0x1e6fa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6fac:
    // 0x1e6fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fb0:
    // 0x1e6fb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e6fb4:
    // 0x1e6fb4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1e6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1e6fb8:
    // 0x1e6fb8: 0x40f809  jalr        $v0
label_1e6fbc:
    if (ctx->pc == 0x1E6FBCu) {
        ctx->pc = 0x1E6FC0u;
        goto label_1e6fc0;
    }
    ctx->pc = 0x1E6FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6FC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6FB8u, 0x1E6FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6FC0u;
label_1e6fc0:
    // 0x1e6fc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e6fc4:
    // 0x1e6fc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e6fc8:
    // 0x1e6fc8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e6fcc:
    // 0x1e6fcc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1e6fd0:
    // 0x1e6fd0: 0x8c42e8b0  lw          $v0, -0x1750($v0)
    ctx->pc = 0x1e6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961328)));
label_1e6fd4:
    // 0x1e6fd4: 0x40f809  jalr        $v0
label_1e6fd8:
    if (ctx->pc == 0x1E6FD8u) {
        ctx->pc = 0x1E6FDCu;
        goto label_1e6fdc;
    }
    ctx->pc = 0x1E6FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6FDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6FD4u, 0x1E6FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6FDCu;
label_1e6fdc:
    // 0x1e6fdc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1e6fe0:
    // 0x1e6fe0: 0xc105f9e  jal         func_417E78
label_1e6fe4:
    if (ctx->pc == 0x1E6FE4u) {
        ctx->pc = 0x1E6FE8u;
        goto label_1e6fe8;
    }
    ctx->pc = 0x1E6FE0u;
    SET_GPR_U32(ctx, 31, 0x1E6FE8u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x1E6FE0u, 0x1E6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FE8u;
label_1e6fe8:
    // 0x1e6fe8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e6fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1e6fec:
    // 0x1e6fec: 0xac720060  sw          $s2, 0x60($v1)
    ctx->pc = 0x1e6fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 18));
label_1e6ff0:
    // 0x1e6ff0: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x1e6ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1e6ff4:
    // 0x1e6ff4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e6ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6ff8:
    // 0x1e6ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6ffc:
    // 0x1e6ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7000:
    // 0x1e7000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7004:
    // 0x1e7004: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1e7004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1e7008:
    // 0x1e7008: 0x3e00008  jr          $ra
label_1e700c:
    if (ctx->pc == 0x1E700Cu) {
        ctx->pc = 0x1E7010u;
        goto label_fallthrough_0x1e7008;
    }
    ctx->pc = 0x1E7008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e7008:
    ctx->pc = 0x1E7010u;
}
