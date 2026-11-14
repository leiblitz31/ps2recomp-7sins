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

// Function: sub_00371B30
// Address: 0x371b30 - 0x371f70
void sub_00371B30_0x371b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371B30_0x371b30");
#endif

    switch (ctx->pc) {
        case 0x371b30u: goto label_371b30;
        case 0x371b34u: goto label_371b34;
        case 0x371b38u: goto label_371b38;
        case 0x371b3cu: goto label_371b3c;
        case 0x371b40u: goto label_371b40;
        case 0x371b44u: goto label_371b44;
        case 0x371b48u: goto label_371b48;
        case 0x371b4cu: goto label_371b4c;
        case 0x371b50u: goto label_371b50;
        case 0x371b54u: goto label_371b54;
        case 0x371b58u: goto label_371b58;
        case 0x371b5cu: goto label_371b5c;
        case 0x371b60u: goto label_371b60;
        case 0x371b64u: goto label_371b64;
        case 0x371b68u: goto label_371b68;
        case 0x371b6cu: goto label_371b6c;
        case 0x371b70u: goto label_371b70;
        case 0x371b74u: goto label_371b74;
        case 0x371b78u: goto label_371b78;
        case 0x371b7cu: goto label_371b7c;
        case 0x371b80u: goto label_371b80;
        case 0x371b84u: goto label_371b84;
        case 0x371b88u: goto label_371b88;
        case 0x371b8cu: goto label_371b8c;
        case 0x371b90u: goto label_371b90;
        case 0x371b94u: goto label_371b94;
        case 0x371b98u: goto label_371b98;
        case 0x371b9cu: goto label_371b9c;
        case 0x371ba0u: goto label_371ba0;
        case 0x371ba4u: goto label_371ba4;
        case 0x371ba8u: goto label_371ba8;
        case 0x371bacu: goto label_371bac;
        case 0x371bb0u: goto label_371bb0;
        case 0x371bb4u: goto label_371bb4;
        case 0x371bb8u: goto label_371bb8;
        case 0x371bbcu: goto label_371bbc;
        case 0x371bc0u: goto label_371bc0;
        case 0x371bc4u: goto label_371bc4;
        case 0x371bc8u: goto label_371bc8;
        case 0x371bccu: goto label_371bcc;
        case 0x371bd0u: goto label_371bd0;
        case 0x371bd4u: goto label_371bd4;
        case 0x371bd8u: goto label_371bd8;
        case 0x371bdcu: goto label_371bdc;
        case 0x371be0u: goto label_371be0;
        case 0x371be4u: goto label_371be4;
        case 0x371be8u: goto label_371be8;
        case 0x371becu: goto label_371bec;
        case 0x371bf0u: goto label_371bf0;
        case 0x371bf4u: goto label_371bf4;
        case 0x371bf8u: goto label_371bf8;
        case 0x371bfcu: goto label_371bfc;
        case 0x371c00u: goto label_371c00;
        case 0x371c04u: goto label_371c04;
        case 0x371c08u: goto label_371c08;
        case 0x371c0cu: goto label_371c0c;
        case 0x371c10u: goto label_371c10;
        case 0x371c14u: goto label_371c14;
        case 0x371c18u: goto label_371c18;
        case 0x371c1cu: goto label_371c1c;
        case 0x371c20u: goto label_371c20;
        case 0x371c24u: goto label_371c24;
        case 0x371c28u: goto label_371c28;
        case 0x371c2cu: goto label_371c2c;
        case 0x371c30u: goto label_371c30;
        case 0x371c34u: goto label_371c34;
        case 0x371c38u: goto label_371c38;
        case 0x371c3cu: goto label_371c3c;
        case 0x371c40u: goto label_371c40;
        case 0x371c44u: goto label_371c44;
        case 0x371c48u: goto label_371c48;
        case 0x371c4cu: goto label_371c4c;
        case 0x371c50u: goto label_371c50;
        case 0x371c54u: goto label_371c54;
        case 0x371c58u: goto label_371c58;
        case 0x371c5cu: goto label_371c5c;
        case 0x371c60u: goto label_371c60;
        case 0x371c64u: goto label_371c64;
        case 0x371c68u: goto label_371c68;
        case 0x371c6cu: goto label_371c6c;
        case 0x371c70u: goto label_371c70;
        case 0x371c74u: goto label_371c74;
        case 0x371c78u: goto label_371c78;
        case 0x371c7cu: goto label_371c7c;
        case 0x371c80u: goto label_371c80;
        case 0x371c84u: goto label_371c84;
        case 0x371c88u: goto label_371c88;
        case 0x371c8cu: goto label_371c8c;
        case 0x371c90u: goto label_371c90;
        case 0x371c94u: goto label_371c94;
        case 0x371c98u: goto label_371c98;
        case 0x371c9cu: goto label_371c9c;
        case 0x371ca0u: goto label_371ca0;
        case 0x371ca4u: goto label_371ca4;
        case 0x371ca8u: goto label_371ca8;
        case 0x371cacu: goto label_371cac;
        case 0x371cb0u: goto label_371cb0;
        case 0x371cb4u: goto label_371cb4;
        case 0x371cb8u: goto label_371cb8;
        case 0x371cbcu: goto label_371cbc;
        case 0x371cc0u: goto label_371cc0;
        case 0x371cc4u: goto label_371cc4;
        case 0x371cc8u: goto label_371cc8;
        case 0x371cccu: goto label_371ccc;
        case 0x371cd0u: goto label_371cd0;
        case 0x371cd4u: goto label_371cd4;
        case 0x371cd8u: goto label_371cd8;
        case 0x371cdcu: goto label_371cdc;
        case 0x371ce0u: goto label_371ce0;
        case 0x371ce4u: goto label_371ce4;
        case 0x371ce8u: goto label_371ce8;
        case 0x371cecu: goto label_371cec;
        case 0x371cf0u: goto label_371cf0;
        case 0x371cf4u: goto label_371cf4;
        case 0x371cf8u: goto label_371cf8;
        case 0x371cfcu: goto label_371cfc;
        case 0x371d00u: goto label_371d00;
        case 0x371d04u: goto label_371d04;
        case 0x371d08u: goto label_371d08;
        case 0x371d0cu: goto label_371d0c;
        case 0x371d10u: goto label_371d10;
        case 0x371d14u: goto label_371d14;
        case 0x371d18u: goto label_371d18;
        case 0x371d1cu: goto label_371d1c;
        case 0x371d20u: goto label_371d20;
        case 0x371d24u: goto label_371d24;
        case 0x371d28u: goto label_371d28;
        case 0x371d2cu: goto label_371d2c;
        case 0x371d30u: goto label_371d30;
        case 0x371d34u: goto label_371d34;
        case 0x371d38u: goto label_371d38;
        case 0x371d3cu: goto label_371d3c;
        case 0x371d40u: goto label_371d40;
        case 0x371d44u: goto label_371d44;
        case 0x371d48u: goto label_371d48;
        case 0x371d4cu: goto label_371d4c;
        case 0x371d50u: goto label_371d50;
        case 0x371d54u: goto label_371d54;
        case 0x371d58u: goto label_371d58;
        case 0x371d5cu: goto label_371d5c;
        case 0x371d60u: goto label_371d60;
        case 0x371d64u: goto label_371d64;
        case 0x371d68u: goto label_371d68;
        case 0x371d6cu: goto label_371d6c;
        case 0x371d70u: goto label_371d70;
        case 0x371d74u: goto label_371d74;
        case 0x371d78u: goto label_371d78;
        case 0x371d7cu: goto label_371d7c;
        case 0x371d80u: goto label_371d80;
        case 0x371d84u: goto label_371d84;
        case 0x371d88u: goto label_371d88;
        case 0x371d8cu: goto label_371d8c;
        case 0x371d90u: goto label_371d90;
        case 0x371d94u: goto label_371d94;
        case 0x371d98u: goto label_371d98;
        case 0x371d9cu: goto label_371d9c;
        case 0x371da0u: goto label_371da0;
        case 0x371da4u: goto label_371da4;
        case 0x371da8u: goto label_371da8;
        case 0x371dacu: goto label_371dac;
        case 0x371db0u: goto label_371db0;
        case 0x371db4u: goto label_371db4;
        case 0x371db8u: goto label_371db8;
        case 0x371dbcu: goto label_371dbc;
        case 0x371dc0u: goto label_371dc0;
        case 0x371dc4u: goto label_371dc4;
        case 0x371dc8u: goto label_371dc8;
        case 0x371dccu: goto label_371dcc;
        case 0x371dd0u: goto label_371dd0;
        case 0x371dd4u: goto label_371dd4;
        case 0x371dd8u: goto label_371dd8;
        case 0x371ddcu: goto label_371ddc;
        case 0x371de0u: goto label_371de0;
        case 0x371de4u: goto label_371de4;
        case 0x371de8u: goto label_371de8;
        case 0x371decu: goto label_371dec;
        case 0x371df0u: goto label_371df0;
        case 0x371df4u: goto label_371df4;
        case 0x371df8u: goto label_371df8;
        case 0x371dfcu: goto label_371dfc;
        case 0x371e00u: goto label_371e00;
        case 0x371e04u: goto label_371e04;
        case 0x371e08u: goto label_371e08;
        case 0x371e0cu: goto label_371e0c;
        case 0x371e10u: goto label_371e10;
        case 0x371e14u: goto label_371e14;
        case 0x371e18u: goto label_371e18;
        case 0x371e1cu: goto label_371e1c;
        case 0x371e20u: goto label_371e20;
        case 0x371e24u: goto label_371e24;
        case 0x371e28u: goto label_371e28;
        case 0x371e2cu: goto label_371e2c;
        case 0x371e30u: goto label_371e30;
        case 0x371e34u: goto label_371e34;
        case 0x371e38u: goto label_371e38;
        case 0x371e3cu: goto label_371e3c;
        case 0x371e40u: goto label_371e40;
        case 0x371e44u: goto label_371e44;
        case 0x371e48u: goto label_371e48;
        case 0x371e4cu: goto label_371e4c;
        case 0x371e50u: goto label_371e50;
        case 0x371e54u: goto label_371e54;
        case 0x371e58u: goto label_371e58;
        case 0x371e5cu: goto label_371e5c;
        case 0x371e60u: goto label_371e60;
        case 0x371e64u: goto label_371e64;
        case 0x371e68u: goto label_371e68;
        case 0x371e6cu: goto label_371e6c;
        case 0x371e70u: goto label_371e70;
        case 0x371e74u: goto label_371e74;
        case 0x371e78u: goto label_371e78;
        case 0x371e7cu: goto label_371e7c;
        case 0x371e80u: goto label_371e80;
        case 0x371e84u: goto label_371e84;
        case 0x371e88u: goto label_371e88;
        case 0x371e8cu: goto label_371e8c;
        case 0x371e90u: goto label_371e90;
        case 0x371e94u: goto label_371e94;
        case 0x371e98u: goto label_371e98;
        case 0x371e9cu: goto label_371e9c;
        case 0x371ea0u: goto label_371ea0;
        case 0x371ea4u: goto label_371ea4;
        case 0x371ea8u: goto label_371ea8;
        case 0x371eacu: goto label_371eac;
        case 0x371eb0u: goto label_371eb0;
        case 0x371eb4u: goto label_371eb4;
        case 0x371eb8u: goto label_371eb8;
        case 0x371ebcu: goto label_371ebc;
        case 0x371ec0u: goto label_371ec0;
        case 0x371ec4u: goto label_371ec4;
        case 0x371ec8u: goto label_371ec8;
        case 0x371eccu: goto label_371ecc;
        case 0x371ed0u: goto label_371ed0;
        case 0x371ed4u: goto label_371ed4;
        case 0x371ed8u: goto label_371ed8;
        case 0x371edcu: goto label_371edc;
        case 0x371ee0u: goto label_371ee0;
        case 0x371ee4u: goto label_371ee4;
        case 0x371ee8u: goto label_371ee8;
        case 0x371eecu: goto label_371eec;
        case 0x371ef0u: goto label_371ef0;
        case 0x371ef4u: goto label_371ef4;
        case 0x371ef8u: goto label_371ef8;
        case 0x371efcu: goto label_371efc;
        case 0x371f00u: goto label_371f00;
        case 0x371f04u: goto label_371f04;
        case 0x371f08u: goto label_371f08;
        case 0x371f0cu: goto label_371f0c;
        case 0x371f10u: goto label_371f10;
        case 0x371f14u: goto label_371f14;
        case 0x371f18u: goto label_371f18;
        case 0x371f1cu: goto label_371f1c;
        case 0x371f20u: goto label_371f20;
        case 0x371f24u: goto label_371f24;
        case 0x371f28u: goto label_371f28;
        case 0x371f2cu: goto label_371f2c;
        case 0x371f30u: goto label_371f30;
        case 0x371f34u: goto label_371f34;
        case 0x371f38u: goto label_371f38;
        case 0x371f3cu: goto label_371f3c;
        case 0x371f40u: goto label_371f40;
        case 0x371f44u: goto label_371f44;
        case 0x371f48u: goto label_371f48;
        case 0x371f4cu: goto label_371f4c;
        case 0x371f50u: goto label_371f50;
        case 0x371f54u: goto label_371f54;
        case 0x371f58u: goto label_371f58;
        case 0x371f5cu: goto label_371f5c;
        case 0x371f60u: goto label_371f60;
        case 0x371f64u: goto label_371f64;
        case 0x371f68u: goto label_371f68;
        case 0x371f6cu: goto label_371f6c;
        default: break;
    }

    ctx->pc = 0x371b30u;

label_371b30:
    // 0x371b30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x371b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_371b34:
    // 0x371b34: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x371b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_371b38:
    // 0x371b38: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x371b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_371b3c:
    // 0x371b3c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x371b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_371b40:
    // 0x371b40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x371b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_371b44:
    // 0x371b44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x371b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_371b48:
    // 0x371b48: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x371b48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_371b4c:
    // 0x371b4c: 0x8e04c430  lw          $a0, -0x3BD0($s0)
    ctx->pc = 0x371b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951984)));
label_371b50:
    // 0x371b50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x371b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_371b54:
    // 0x371b54: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x371b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_371b58:
    // 0x371b58: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x371b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_371b5c:
    // 0x371b5c: 0x24a51630  addiu       $a1, $a1, 0x1630
    ctx->pc = 0x371b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
label_371b60:
    // 0x371b60: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x371b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_371b64:
    // 0x371b64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x371b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_371b68:
    // 0x371b68: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x371b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_371b6c:
    // 0x371b6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x371b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371b70:
    // 0x371b70: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x371b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_371b74:
    // 0x371b74: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x371b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_371b78:
    // 0x371b78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x371b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_371b7c:
    // 0x371b7c: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x371b7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_371b80:
    // 0x371b80: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x371b80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_371b84:
    // 0x371b84: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x371b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_371b88:
    // 0x371b88: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x371b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_371b8c:
    // 0x371b8c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x371b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_371b90:
    // 0x371b90: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x371b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_371b94:
    // 0x371b94: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x371b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_371b98:
    // 0x371b98: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x371b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_371b9c:
    // 0x371b9c: 0xc0e6984  jal         func_39A610
label_371ba0:
    if (ctx->pc == 0x371BA0u) {
        ctx->pc = 0x371BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B9Cu;
        // 0x371ba0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371BA4u;
        goto label_371ba4;
    }
    ctx->pc = 0x371B9Cu;
    SET_GPR_U32(ctx, 31, 0x371BA4u);
    ctx->pc = 0x371BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B9Cu;
    // 0x371ba0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x371B9Cu, 0x371BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371BA4u;
label_371ba4:
    // 0x371ba4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x371ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_371ba8:
    // 0x371ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371bac:
    // 0x371bac: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x371bacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_371bb0:
    // 0x371bb0: 0x106000de  beqz        $v1, . + 4 + (0xDE << 2)
label_371bb4:
    if (ctx->pc == 0x371BB4u) {
        ctx->pc = 0x371BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BB0u;
        // 0x371bb4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371BB8u;
        goto label_371bb8;
    }
    ctx->pc = 0x371BB0u;
    {
        const bool branch_taken_0x371bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x371BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BB0u;
        // 0x371bb4: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bb0) {
            ctx->pc = 0x371F2Cu;
            goto label_371f2c;
        }
    }
    ctx->pc = 0x371BB8u;
label_371bb8:
    // 0x371bb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x371bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_371bbc:
    // 0x371bbc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x371bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_371bc0:
    // 0x371bc0: 0x261ec430  addiu       $fp, $s0, -0x3BD0
    ctx->pc = 0x371bc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951984));
label_371bc4:
    // 0x371bc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x371bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371bc8:
    // 0x371bc8: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x371bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_371bcc:
    // 0x371bcc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x371bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_371bd0:
    // 0x371bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x371bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371bd4:
    // 0x371bd4: 0x10000030  b           . + 4 + (0x30 << 2)
label_371bd8:
    if (ctx->pc == 0x371BD8u) {
        ctx->pc = 0x371BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BD4u;
        // 0x371bd8: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371BDCu;
        goto label_371bdc;
    }
    ctx->pc = 0x371BD4u;
    {
        const bool branch_taken_0x371bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BD4u;
        // 0x371bd8: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bd4) {
            ctx->pc = 0x371C98u;
            goto label_371c98;
        }
    }
    ctx->pc = 0x371BDCu;
label_371bdc:
    // 0x371bdc: 0x0  nop
    ctx->pc = 0x371bdcu;
    // NOP
label_371be0:
    // 0x371be0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_371be4:
    // 0x371be4: 0x54a30025  bnel        $a1, $v1, . + 4 + (0x25 << 2)
label_371be8:
    if (ctx->pc == 0x371BE8u) {
        ctx->pc = 0x371BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BE4u;
        // 0x371be8: 0x8e340010  lw          $s4, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371BECu;
        goto label_371bec;
    }
    ctx->pc = 0x371BE4u;
    {
        const bool branch_taken_0x371be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x371be4) {
            ctx->pc = 0x371BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371BE4u;
            // 0x371be8: 0x8e340010  lw          $s4, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371C7Cu;
            goto label_371c7c;
        }
    }
    ctx->pc = 0x371BECu;
label_371bec:
    // 0x371bec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x371becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_371bf0:
    // 0x371bf0: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
label_371bf4:
    if (ctx->pc == 0x371BF4u) {
        ctx->pc = 0x371BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BF0u;
        // 0x371bf4: 0x8c500058  lw          $s0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371BF8u;
        goto label_371bf8;
    }
    ctx->pc = 0x371BF0u;
    {
        const bool branch_taken_0x371bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x371BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BF0u;
        // 0x371bf4: 0x8c500058  lw          $s0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bf0) {
            ctx->pc = 0x371C5Cu;
            goto label_371c5c;
        }
    }
    ctx->pc = 0x371BF8u;
label_371bf8:
    // 0x371bf8: 0x10d00018  beq         $a2, $s0, . + 4 + (0x18 << 2)
label_371bfc:
    if (ctx->pc == 0x371BFCu) {
        ctx->pc = 0x371BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BF8u;
        // 0x371bfc: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C00u;
        goto label_371c00;
    }
    ctx->pc = 0x371BF8u;
    {
        const bool branch_taken_0x371bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x371BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BF8u;
        // 0x371bfc: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bf8) {
            ctx->pc = 0x371C5Cu;
            goto label_371c5c;
        }
    }
    ctx->pc = 0x371C00u;
label_371c00:
    // 0x371c00: 0x2491e880  addiu       $s1, $a0, -0x1780
    ctx->pc = 0x371c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_371c04:
    // 0x371c04: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x371c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371c08:
    // 0x371c08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_371c0c:
    // 0x371c0c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_371c10:
    if (ctx->pc == 0x371C10u) {
        ctx->pc = 0x371C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C0Cu;
        // 0x371c10: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C14u;
        goto label_371c14;
    }
    ctx->pc = 0x371C0Cu;
    {
        const bool branch_taken_0x371c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x371c0c) {
            ctx->pc = 0x371C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371C0Cu;
            // 0x371c10: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371C24u;
            goto label_371c24;
        }
    }
    ctx->pc = 0x371C14u;
label_371c14:
    // 0x371c14: 0xc0ddfae  jal         func_377EB8
label_371c18:
    if (ctx->pc == 0x371C18u) {
        ctx->pc = 0x371C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C14u;
        // 0x371c18: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C1Cu;
        goto label_371c1c;
    }
    ctx->pc = 0x371C14u;
    SET_GPR_U32(ctx, 31, 0x371C1Cu);
    ctx->pc = 0x371C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C14u;
    // 0x371c18: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x371C14u, 0x371C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C1Cu;
label_371c1c:
    // 0x371c1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x371c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371c20:
    // 0x371c20: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x371c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_371c24:
    // 0x371c24: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_371c28:
    if (ctx->pc == 0x371C28u) {
        ctx->pc = 0x371C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C24u;
        // 0x371c28: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C2Cu;
        goto label_371c2c;
    }
    ctx->pc = 0x371C24u;
    {
        const bool branch_taken_0x371c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x371C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C24u;
        // 0x371c28: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c24) {
            ctx->pc = 0x371C38u;
            goto label_371c38;
        }
    }
    ctx->pc = 0x371C2Cu;
label_371c2c:
    // 0x371c2c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x371c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_371c30:
    // 0x371c30: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x371c30u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_371c34:
    // 0x371c34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x371c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371c38:
    // 0x371c38: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x371c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_371c3c:
    // 0x371c3c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x371c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_371c40:
    // 0x371c40: 0xa0f809  jalr        $a1
label_371c44:
    if (ctx->pc == 0x371C44u) {
        ctx->pc = 0x371C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C40u;
        // 0x371c44: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C48u;
        goto label_371c48;
    }
    ctx->pc = 0x371C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x371C48u);
        ctx->pc = 0x371C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C40u;
        // 0x371c44: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C40u, 0x371C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371C48u;
label_371c48:
    // 0x371c48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x371c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371c4c:
    // 0x371c4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_371c50:
    if (ctx->pc == 0x371C50u) {
        ctx->pc = 0x371C54u;
        goto label_371c54;
    }
    ctx->pc = 0x371C4Cu;
    {
        const bool branch_taken_0x371c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371c4c) {
            ctx->pc = 0x371C5Cu;
            goto label_371c5c;
        }
    }
    ctx->pc = 0x371C54u;
label_371c54:
    // 0x371c54: 0x1450ffec  bne         $v0, $s0, . + 4 + (-0x14 << 2)
label_371c58:
    if (ctx->pc == 0x371C58u) {
        ctx->pc = 0x371C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C54u;
        // 0x371c58: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C5Cu;
        goto label_371c5c;
    }
    ctx->pc = 0x371C54u;
    {
        const bool branch_taken_0x371c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x371C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C54u;
        // 0x371c58: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c54) {
            ctx->pc = 0x371C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371c08;
        }
    }
    ctx->pc = 0x371C5Cu;
label_371c5c:
    // 0x371c5c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_371c60:
    if (ctx->pc == 0x371C60u) {
        ctx->pc = 0x371C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C5Cu;
        // 0x371c60: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C64u;
        goto label_371c64;
    }
    ctx->pc = 0x371C5Cu;
    {
        const bool branch_taken_0x371c5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C5Cu;
        // 0x371c60: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c5c) {
            ctx->pc = 0x371C68u;
            goto label_371c68;
        }
    }
    ctx->pc = 0x371C64u;
label_371c64:
    // 0x371c64: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x371c64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_371c68:
    // 0x371c68: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x371c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371c6c:
    // 0x371c6c: 0x10c000b0  beqz        $a2, . + 4 + (0xB0 << 2)
label_371c70:
    if (ctx->pc == 0x371C70u) {
        ctx->pc = 0x371C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C6Cu;
        // 0x371c70: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C74u;
        goto label_371c74;
    }
    ctx->pc = 0x371C6Cu;
    {
        const bool branch_taken_0x371c6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C6Cu;
        // 0x371c70: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c6c) {
            ctx->pc = 0x371F30u;
            goto label_371f30;
        }
    }
    ctx->pc = 0x371C74u;
label_371c74:
    // 0x371c74: 0x10000006  b           . + 4 + (0x6 << 2)
label_371c78:
    if (ctx->pc == 0x371C78u) {
        ctx->pc = 0x371C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C74u;
        // 0x371c78: 0x8cc3002c  lw          $v1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C7Cu;
        goto label_371c7c;
    }
    ctx->pc = 0x371C74u;
    {
        const bool branch_taken_0x371c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C74u;
        // 0x371c78: 0x8cc3002c  lw          $v1, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c74) {
            ctx->pc = 0x371C90u;
            goto label_371c90;
        }
    }
    ctx->pc = 0x371C7Cu;
label_371c7c:
    // 0x371c7c: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x371c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_371c80:
    // 0x371c80: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_371c84:
    if (ctx->pc == 0x371C84u) {
        ctx->pc = 0x371C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C80u;
        // 0x371c84: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371C88u;
        goto label_371c88;
    }
    ctx->pc = 0x371C80u;
    {
        const bool branch_taken_0x371c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C80u;
        // 0x371c84: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c80) {
            ctx->pc = 0x371F2Cu;
            goto label_371f2c;
        }
    }
    ctx->pc = 0x371C88u;
label_371c88:
    // 0x371c88: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x371c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_371c8c:
    // 0x371c8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x371c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371c90:
    // 0x371c90: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_371c94:
    // 0x371c94: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x371c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_371c98:
    // 0x371c98: 0x10c000a5  beqz        $a2, . + 4 + (0xA5 << 2)
label_371c9c:
    if (ctx->pc == 0x371C9Cu) {
        ctx->pc = 0x371C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C98u;
        // 0x371c9c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371CA0u;
        goto label_371ca0;
    }
    ctx->pc = 0x371C98u;
    {
        const bool branch_taken_0x371c98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x371C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C98u;
        // 0x371c9c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c98) {
            ctx->pc = 0x371F30u;
            goto label_371f30;
        }
    }
    ctx->pc = 0x371CA0u;
label_371ca0:
    // 0x371ca0: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x371ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_371ca4:
    // 0x371ca4: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x371ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_371ca8:
    // 0x371ca8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x371ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_371cac:
    // 0x371cac: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x371cacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
label_371cb0:
    // 0x371cb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x371cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_371cb4:
    // 0x371cb4: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x371cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_371cb8:
    // 0x371cb8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x371cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_371cbc:
    // 0x371cbc: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x371cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_371cc0:
    // 0x371cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x371cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_371cc4:
    // 0x371cc4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_371cc8:
    if (ctx->pc == 0x371CC8u) {
        ctx->pc = 0x371CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CC4u;
        // 0x371cc8: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371CCCu;
        goto label_371ccc;
    }
    ctx->pc = 0x371CC4u;
    {
        const bool branch_taken_0x371cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CC4u;
        // 0x371cc8: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cc4) {
            ctx->pc = 0x371BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371be0;
        }
    }
    ctx->pc = 0x371CCCu;
label_371ccc:
    // 0x371ccc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x371cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_371cd0:
    // 0x371cd0: 0x14a2ffc4  bne         $a1, $v0, . + 4 + (-0x3C << 2)
label_371cd4:
    if (ctx->pc == 0x371CD4u) {
        ctx->pc = 0x371CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CD0u;
        // 0x371cd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371CD8u;
        goto label_371cd8;
    }
    ctx->pc = 0x371CD0u;
    {
        const bool branch_taken_0x371cd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x371CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CD0u;
        // 0x371cd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cd0) {
            ctx->pc = 0x371BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371be4;
        }
    }
    ctx->pc = 0x371CD8u;
label_371cd8:
    // 0x371cd8: 0x10c00095  beqz        $a2, . + 4 + (0x95 << 2)
label_371cdc:
    if (ctx->pc == 0x371CDCu) {
        ctx->pc = 0x371CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CD8u;
        // 0x371cdc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371CE0u;
        goto label_371ce0;
    }
    ctx->pc = 0x371CD8u;
    {
        const bool branch_taken_0x371cd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x371CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CD8u;
        // 0x371cdc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cd8) {
            ctx->pc = 0x371F30u;
            goto label_371f30;
        }
    }
    ctx->pc = 0x371CE0u;
label_371ce0:
    // 0x371ce0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_371ce4:
    // 0x371ce4: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x371ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_371ce8:
    // 0x371ce8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x371ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
label_371cec:
    // 0x371cec: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x371cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_371cf0:
    // 0x371cf0: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x371cf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_371cf4:
    // 0x371cf4: 0x10640076  beq         $v1, $a0, . + 4 + (0x76 << 2)
label_371cf8:
    if (ctx->pc == 0x371CF8u) {
        ctx->pc = 0x371CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CF4u;
        // 0x371cf8: 0x8cd50058  lw          $s5, 0x58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371CFCu;
        goto label_371cfc;
    }
    ctx->pc = 0x371CF4u;
    {
        const bool branch_taken_0x371cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x371CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CF4u;
        // 0x371cf8: 0x8cd50058  lw          $s5, 0x58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cf4) {
            ctx->pc = 0x371ED0u;
            goto label_371ed0;
        }
    }
    ctx->pc = 0x371CFCu;
label_371cfc:
    // 0x371cfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x371cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_371d00:
    // 0x371d00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x371d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_371d04:
    // 0x371d04: 0xc0dc3b0  jal         func_370EC0
label_371d08:
    if (ctx->pc == 0x371D08u) {
        ctx->pc = 0x371D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D04u;
        // 0x371d08: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371D0Cu;
        goto label_371d0c;
    }
    ctx->pc = 0x371D04u;
    SET_GPR_U32(ctx, 31, 0x371D0Cu);
    ctx->pc = 0x371D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D04u;
    // 0x371d08: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370EC0u, 0x371D04u, 0x371D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D0Cu;
label_371d0c:
    // 0x371d0c: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
label_371d10:
    if (ctx->pc == 0x371D10u) {
        ctx->pc = 0x371D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D0Cu;
        // 0x371d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371D14u;
        goto label_371d14;
    }
    ctx->pc = 0x371D0Cu;
    {
        const bool branch_taken_0x371d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D0Cu;
        // 0x371d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d0c) {
            ctx->pc = 0x371ED0u;
            goto label_371ed0;
        }
    }
    ctx->pc = 0x371D14u;
label_371d14:
    // 0x371d14: 0xc0dc3f6  jal         func_370FD8
label_371d18:
    if (ctx->pc == 0x371D18u) {
        ctx->pc = 0x371D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D14u;
        // 0x371d18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371D1Cu;
        goto label_371d1c;
    }
    ctx->pc = 0x371D14u;
    SET_GPR_U32(ctx, 31, 0x371D1Cu);
    ctx->pc = 0x371D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D14u;
    // 0x371d18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370FD8u, 0x371D14u, 0x371D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D1Cu;
label_371d1c:
    // 0x371d1c: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_371d20:
    if (ctx->pc == 0x371D20u) {
        ctx->pc = 0x371D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D1Cu;
        // 0x371d20: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371D24u;
        goto label_371d24;
    }
    ctx->pc = 0x371D1Cu;
    {
        const bool branch_taken_0x371d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D1Cu;
        // 0x371d20: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371d1c) {
            ctx->pc = 0x371ED0u;
            goto label_371ed0;
        }
    }
    ctx->pc = 0x371D24u;
label_371d24:
    // 0x371d24: 0xc6760054  lwc1        $f22, 0x54($s3)
    ctx->pc = 0x371d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_371d28:
    // 0x371d28: 0x6bc3002b  ldl         $v1, 0x2B($fp)
    ctx->pc = 0x371d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_371d2c:
    // 0x371d2c: 0x6fc30024  ldr         $v1, 0x24($fp)
    ctx->pc = 0x371d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_371d30:
    // 0x371d30: 0x8fc4002c  lw          $a0, 0x2C($fp)
    ctx->pc = 0x371d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
label_371d34:
    // 0x371d34: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x371d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_371d38:
    // 0x371d38: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x371d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_371d3c:
    // 0x371d3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x371d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_371d40:
    // 0x371d40: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x371d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371d44:
    // 0x371d44: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x371d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_371d48:
    // 0x371d48: 0xc662003c  lwc1        $f2, 0x3C($s3)
    ctx->pc = 0x371d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_371d4c:
    // 0x371d4c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x371d4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_371d50:
    // 0x371d50: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x371d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371d54:
    // 0x371d54: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x371d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_371d58:
    // 0x371d58: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x371d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_371d5c:
    // 0x371d5c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x371d5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_371d60:
    // 0x371d60: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x371d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_371d64:
    // 0x371d64: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x371d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_371d68:
    // 0x371d68: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x371d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_371d6c:
    // 0x371d6c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x371d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_371d70:
    // 0x371d70: 0xc104d24  jal         func_413490
label_371d74:
    if (ctx->pc == 0x371D74u) {
        ctx->pc = 0x371D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D70u;
        // 0x371d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371D78u;
        goto label_371d78;
    }
    ctx->pc = 0x371D70u;
    SET_GPR_U32(ctx, 31, 0x371D78u);
    ctx->pc = 0x371D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D70u;
    // 0x371d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x371D70u, 0x371D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D78u;
label_371d78:
    // 0x371d78: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x371d78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_371d7c:
    // 0x371d7c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x371d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371d80:
    // 0x371d80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x371d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371d84:
    // 0x371d84: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x371d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_371d88:
    // 0x371d88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x371d88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_371d8c:
    // 0x371d8c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x371d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_371d90:
    // 0x371d90: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x371d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_371d94:
    // 0x371d94: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x371d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371d98:
    // 0x371d98: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x371d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_371d9c:
    // 0x371d9c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x371d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_371da0:
    // 0x371da0: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x371da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371da4:
    // 0x371da4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x371da4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_371da8:
    // 0x371da8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x371da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_371dac:
    // 0x371dac: 0xc104d24  jal         func_413490
label_371db0:
    if (ctx->pc == 0x371DB0u) {
        ctx->pc = 0x371DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DACu;
        // 0x371db0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371DB4u;
        goto label_371db4;
    }
    ctx->pc = 0x371DACu;
    SET_GPR_U32(ctx, 31, 0x371DB4u);
    ctx->pc = 0x371DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DACu;
    // 0x371db0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x371DACu, 0x371DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DB4u;
label_371db4:
    // 0x371db4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x371db4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_371db8:
    // 0x371db8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x371db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_371dbc:
    // 0x371dbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x371dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371dc0:
    // 0x371dc0: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x371dc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_371dc4:
    // 0x371dc4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x371dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_371dc8:
    // 0x371dc8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x371dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_371dcc:
    // 0x371dcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x371dccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_371dd0:
    // 0x371dd0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x371dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_371dd4:
    // 0x371dd4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x371dd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_371dd8:
    // 0x371dd8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x371dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371ddc:
    // 0x371ddc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x371ddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_371de0:
    // 0x371de0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x371de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_371de4:
    // 0x371de4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x371de4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_371de8:
    // 0x371de8: 0x46140d03  div.s       $f20, $f1, $f20
    ctx->pc = 0x371de8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_371dec:
    // 0x371dec: 0xc0c39ca  jal         func_30E728
label_371df0:
    if (ctx->pc == 0x371DF0u) {
        ctx->pc = 0x371DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DECu;
        // 0x371df0: 0x4617a329  min.s       $f12, $f20, $f23 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x371DF4u;
        goto label_371df4;
    }
    ctx->pc = 0x371DECu;
    SET_GPR_U32(ctx, 31, 0x371DF4u);
    ctx->pc = 0x371DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DECu;
    // 0x371df0: 0x4617a329  min.s       $f12, $f20, $f23 (Delay Slot)
    ctx->f[12] = std::min(ctx->f[20], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E728u, 0x371DECu, 0x371DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DF4u;
label_371df4:
    // 0x371df4: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x371df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_371df8:
    // 0x371df8: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x371df8u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[21]); }
label_371dfc:
    // 0x371dfc: 0xc0c39d0  jal         func_30E740
label_371e00:
    if (ctx->pc == 0x371E00u) {
        ctx->pc = 0x371E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DFCu;
        // 0x371e00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E04u;
        goto label_371e04;
    }
    ctx->pc = 0x371DFCu;
    SET_GPR_U32(ctx, 31, 0x371E04u);
    ctx->pc = 0x371E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DFCu;
    // 0x371e00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E740u, 0x371DFCu, 0x371E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E04u;
label_371e04:
    // 0x371e04: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x371e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371e08:
    // 0x371e08: 0x0  nop
    ctx->pc = 0x371e08u;
    // NOP
label_371e0c:
    // 0x371e0c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_371e10:
    if (ctx->pc == 0x371E10u) {
        ctx->pc = 0x371E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E0Cu;
        // 0x371e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E14u;
        goto label_371e14;
    }
    ctx->pc = 0x371E0Cu;
    {
        const bool branch_taken_0x371e0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x371E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E0Cu;
        // 0x371e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e0c) {
            ctx->pc = 0x371E28u;
            goto label_371e28;
        }
    }
    ctx->pc = 0x371E14u;
label_371e14:
    // 0x371e14: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x371e14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_371e18:
    // 0x371e18: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x371e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_371e1c:
    // 0x371e1c: 0x0  nop
    ctx->pc = 0x371e1cu;
    // NOP
label_371e20:
    // 0x371e20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_371e24:
    if (ctx->pc == 0x371E24u) {
        ctx->pc = 0x371E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E20u;
        // 0x371e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E28u;
        goto label_371e28;
    }
    ctx->pc = 0x371E20u;
    {
        const bool branch_taken_0x371e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371e20) {
            ctx->pc = 0x371E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371E20u;
            // 0x371e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371E28u;
            goto label_371e28;
        }
    }
    ctx->pc = 0x371E28u;
label_371e28:
    // 0x371e28: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_371e2c:
    if (ctx->pc == 0x371E2Cu) {
        ctx->pc = 0x371E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E28u;
        // 0x371e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E30u;
        goto label_371e30;
    }
    ctx->pc = 0x371E28u;
    {
        const bool branch_taken_0x371e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E28u;
        // 0x371e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e28) {
            ctx->pc = 0x371ED0u;
            goto label_371ed0;
        }
    }
    ctx->pc = 0x371E30u;
label_371e30:
    // 0x371e30: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x371e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_371e34:
    // 0x371e34: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x371e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_371e38:
    // 0x371e38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x371e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_371e3c:
    // 0x371e3c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x371e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_371e40:
    // 0x371e40: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x371e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_371e44:
    // 0x371e44: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x371e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_371e48:
    // 0x371e48: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x371e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_371e4c:
    // 0x371e4c: 0x27a8003c  addiu       $t0, $sp, 0x3C
    ctx->pc = 0x371e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_371e50:
    // 0x371e50: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x371e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_371e54:
    // 0x371e54: 0xc0dc4ac  jal         func_3712B0
label_371e58:
    if (ctx->pc == 0x371E58u) {
        ctx->pc = 0x371E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E54u;
        // 0x371e58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E5Cu;
        goto label_371e5c;
    }
    ctx->pc = 0x371E54u;
    SET_GPR_U32(ctx, 31, 0x371E5Cu);
    ctx->pc = 0x371E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E54u;
    // 0x371e58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3712B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3712B0u, 0x371E54u, 0x371E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E5Cu;
label_371e5c:
    // 0x371e5c: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x371e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_371e60:
    // 0x371e60: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_371e64:
    if (ctx->pc == 0x371E64u) {
        ctx->pc = 0x371E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E60u;
        // 0x371e64: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E68u;
        goto label_371e68;
    }
    ctx->pc = 0x371E60u;
    {
        const bool branch_taken_0x371e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E60u;
        // 0x371e64: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e60) {
            ctx->pc = 0x371E98u;
            goto label_371e98;
        }
    }
    ctx->pc = 0x371E68u;
label_371e68:
    // 0x371e68: 0x2472e880  addiu       $s2, $v1, -0x1780
    ctx->pc = 0x371e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_371e6c:
    // 0x371e6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x371e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371e70:
    // 0x371e70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_371e74:
    if (ctx->pc == 0x371E74u) {
        ctx->pc = 0x371E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E70u;
        // 0x371e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E78u;
        goto label_371e78;
    }
    ctx->pc = 0x371E70u;
    {
        const bool branch_taken_0x371e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E70u;
        // 0x371e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e70) {
            ctx->pc = 0x371E84u;
            goto label_371e84;
        }
    }
    ctx->pc = 0x371E78u;
label_371e78:
    // 0x371e78: 0xc0ddfae  jal         func_377EB8
label_371e7c:
    if (ctx->pc == 0x371E7Cu) {
        ctx->pc = 0x371E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E78u;
        // 0x371e7c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E80u;
        goto label_371e80;
    }
    ctx->pc = 0x371E78u;
    SET_GPR_U32(ctx, 31, 0x371E80u);
    ctx->pc = 0x371E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E78u;
    // 0x371e7c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x371E78u, 0x371E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E80u;
label_371e80:
    // 0x371e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x371e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_371e84:
    // 0x371e84: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x371e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_371e88:
    // 0x371e88: 0x40f809  jalr        $v0
label_371e8c:
    if (ctx->pc == 0x371E8Cu) {
        ctx->pc = 0x371E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E88u;
        // 0x371e8c: 0x8e100058  lw          $s0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E90u;
        goto label_371e90;
    }
    ctx->pc = 0x371E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x371E90u);
        ctx->pc = 0x371E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E88u;
        // 0x371e8c: 0x8e100058  lw          $s0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371E88u, 0x371E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x371E90u;
label_371e90:
    // 0x371e90: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_371e94:
    if (ctx->pc == 0x371E94u) {
        ctx->pc = 0x371E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E90u;
        // 0x371e94: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371E98u;
        goto label_371e98;
    }
    ctx->pc = 0x371E90u;
    {
        const bool branch_taken_0x371e90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x371e90) {
            ctx->pc = 0x371E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371E90u;
            // 0x371e94: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371e70;
        }
    }
    ctx->pc = 0x371E98u;
label_371e98:
    // 0x371e98: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_371e9c:
    if (ctx->pc == 0x371E9Cu) {
        ctx->pc = 0x371E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E98u;
        // 0x371e9c: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EA0u;
        goto label_371ea0;
    }
    ctx->pc = 0x371E98u;
    {
        const bool branch_taken_0x371e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E98u;
        // 0x371e9c: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e98) {
            ctx->pc = 0x371EA8u;
            goto label_371ea8;
        }
    }
    ctx->pc = 0x371EA0u;
label_371ea0:
    // 0x371ea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_371ea4:
    if (ctx->pc == 0x371EA4u) {
        ctx->pc = 0x371EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EA0u;
        // 0x371ea4: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EA8u;
        goto label_371ea8;
    }
    ctx->pc = 0x371EA0u;
    {
        const bool branch_taken_0x371ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EA0u;
        // 0x371ea4: 0xae820058  sw          $v0, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ea0) {
            ctx->pc = 0x371EACu;
            goto label_371eac;
        }
    }
    ctx->pc = 0x371EA8u;
label_371ea8:
    // 0x371ea8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x371ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_371eac:
    // 0x371eac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x371eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_371eb0:
    // 0x371eb0: 0xac550058  sw          $s5, 0x58($v0)
    ctx->pc = 0x371eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 21));
label_371eb4:
    // 0x371eb4: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
label_371eb8:
    if (ctx->pc == 0x371EB8u) {
        ctx->pc = 0x371EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EB4u;
        // 0x371eb8: 0x8fb40040  lw          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EBCu;
        goto label_371ebc;
    }
    ctx->pc = 0x371EB4u;
    {
        const bool branch_taken_0x371eb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x371EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EB4u;
        // 0x371eb8: 0x8fb40040  lw          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371eb4) {
            ctx->pc = 0x371F20u;
            goto label_371f20;
        }
    }
    ctx->pc = 0x371EBCu;
label_371ebc:
    // 0x371ebc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x371ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371ec0:
    // 0x371ec0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_371ec4:
    if (ctx->pc == 0x371EC4u) {
        ctx->pc = 0x371EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EC0u;
        // 0x371ec4: 0xae340010  sw          $s4, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EC8u;
        goto label_371ec8;
    }
    ctx->pc = 0x371EC0u;
    {
        const bool branch_taken_0x371ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371ec0) {
            ctx->pc = 0x371EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371EC0u;
            // 0x371ec4: 0xae340010  sw          $s4, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371F20u;
            goto label_371f20;
        }
    }
    ctx->pc = 0x371EC8u;
label_371ec8:
    // 0x371ec8: 0x10000016  b           . + 4 + (0x16 << 2)
label_371ecc:
    if (ctx->pc == 0x371ECCu) {
        ctx->pc = 0x371ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EC8u;
        // 0x371ecc: 0xafb50030  sw          $s5, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371ED0u;
        goto label_371ed0;
    }
    ctx->pc = 0x371EC8u;
    {
        const bool branch_taken_0x371ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EC8u;
        // 0x371ecc: 0xafb50030  sw          $s5, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ec8) {
            ctx->pc = 0x371F24u;
            goto label_371f24;
        }
    }
    ctx->pc = 0x371ED0u;
label_371ed0:
    // 0x371ed0: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_371ed4:
    if (ctx->pc == 0x371ED4u) {
        ctx->pc = 0x371ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371ED0u;
        // 0x371ed4: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371ED8u;
        goto label_371ed8;
    }
    ctx->pc = 0x371ED0u;
    {
        const bool branch_taken_0x371ed0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x371ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371ED0u;
        // 0x371ed4: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ed0) {
            ctx->pc = 0x371F00u;
            goto label_371f00;
        }
    }
    ctx->pc = 0x371ED8u;
label_371ed8:
    // 0x371ed8: 0x54c00011  bnel        $a2, $zero, . + 4 + (0x11 << 2)
label_371edc:
    if (ctx->pc == 0x371EDCu) {
        ctx->pc = 0x371EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371ED8u;
        // 0x371edc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EE0u;
        goto label_371ee0;
    }
    ctx->pc = 0x371ED8u;
    {
        const bool branch_taken_0x371ed8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x371ed8) {
            ctx->pc = 0x371EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371ED8u;
            // 0x371edc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371F20u;
            goto label_371f20;
        }
    }
    ctx->pc = 0x371EE0u;
label_371ee0:
    // 0x371ee0: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
label_371ee4:
    if (ctx->pc == 0x371EE4u) {
        ctx->pc = 0x371EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EE0u;
        // 0x371ee4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EE8u;
        goto label_371ee8;
    }
    ctx->pc = 0x371EE0u;
    {
        const bool branch_taken_0x371ee0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x371ee0) {
            ctx->pc = 0x371EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371EE0u;
            // 0x371ee4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371F00u;
            goto label_371f00;
        }
    }
    ctx->pc = 0x371EE8u;
label_371ee8:
    // 0x371ee8: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x371ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_371eec:
    // 0x371eec: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x371eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_371ef0:
    // 0x371ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_371ef4:
    // 0x371ef4: 0x54510002  bnel        $v0, $s1, . + 4 + (0x2 << 2)
label_371ef8:
    if (ctx->pc == 0x371EF8u) {
        ctx->pc = 0x371EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EF4u;
        // 0x371ef8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371EFCu;
        goto label_371efc;
    }
    ctx->pc = 0x371EF4u;
    {
        const bool branch_taken_0x371ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x371ef4) {
            ctx->pc = 0x371EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371EF4u;
            // 0x371ef8: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371F00u;
            goto label_371f00;
        }
    }
    ctx->pc = 0x371EFCu;
label_371efc:
    // 0x371efc: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x371efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
label_371f00:
    // 0x371f00: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x371f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_371f04:
    // 0x371f04: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_371f08:
    if (ctx->pc == 0x371F08u) {
        ctx->pc = 0x371F0Cu;
        goto label_371f0c;
    }
    ctx->pc = 0x371F04u;
    {
        const bool branch_taken_0x371f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x371f04) {
            ctx->pc = 0x371F14u;
            goto label_371f14;
        }
    }
    ctx->pc = 0x371F0Cu;
label_371f0c:
    // 0x371f0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_371f10:
    if (ctx->pc == 0x371F10u) {
        ctx->pc = 0x371F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F0Cu;
        // 0x371f10: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371F14u;
        goto label_371f14;
    }
    ctx->pc = 0x371F0Cu;
    {
        const bool branch_taken_0x371f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F0Cu;
        // 0x371f10: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f0c) {
            ctx->pc = 0x371F20u;
            goto label_371f20;
        }
    }
    ctx->pc = 0x371F14u;
label_371f14:
    // 0x371f14: 0x52800002  beql        $s4, $zero, . + 4 + (0x2 << 2)
label_371f18:
    if (ctx->pc == 0x371F18u) {
        ctx->pc = 0x371F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F14u;
        // 0x371f18: 0xaef50000  sw          $s5, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371F1Cu;
        goto label_371f1c;
    }
    ctx->pc = 0x371F14u;
    {
        const bool branch_taken_0x371f14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x371f14) {
            ctx->pc = 0x371F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x371F14u;
            // 0x371f18: 0xaef50000  sw          $s5, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371F20u;
            goto label_371f20;
        }
    }
    ctx->pc = 0x371F1Cu;
label_371f1c:
    // 0x371f1c: 0xae950058  sw          $s5, 0x58($s4)
    ctx->pc = 0x371f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 21));
label_371f20:
    // 0x371f20: 0xafb50030  sw          $s5, 0x30($sp)
    ctx->pc = 0x371f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 21));
label_371f24:
    // 0x371f24: 0x16a0ff28  bnez        $s5, . + 4 + (-0xD8 << 2)
label_371f28:
    if (ctx->pc == 0x371F28u) {
        ctx->pc = 0x371F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F24u;
        // 0x371f28: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371F2Cu;
        goto label_371f2c;
    }
    ctx->pc = 0x371F24u;
    {
        const bool branch_taken_0x371f24 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x371F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F24u;
        // 0x371f28: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f24) {
            ctx->pc = 0x371BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371bc8;
        }
    }
    ctx->pc = 0x371F2Cu;
label_371f2c:
    // 0x371f2c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x371f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_371f30:
    // 0x371f30: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x371f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_371f34:
    // 0x371f34: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x371f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_371f38:
    // 0x371f38: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x371f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_371f3c:
    // 0x371f3c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x371f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_371f40:
    // 0x371f40: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x371f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_371f44:
    // 0x371f44: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x371f44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_371f48:
    // 0x371f48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x371f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_371f4c:
    // 0x371f4c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x371f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_371f50:
    // 0x371f50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x371f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_371f54:
    // 0x371f54: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x371f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_371f58:
    // 0x371f58: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x371f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_371f5c:
    // 0x371f5c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x371f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_371f60:
    // 0x371f60: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x371f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_371f64:
    // 0x371f64: 0x3e00008  jr          $ra
label_371f68:
    if (ctx->pc == 0x371F68u) {
        ctx->pc = 0x371F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F64u;
        // 0x371f68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x371F6Cu;
        goto label_371f6c;
    }
    ctx->pc = 0x371F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F64u;
        // 0x371f68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371F6Cu;
label_371f6c:
    // 0x371f6c: 0x0  nop
    ctx->pc = 0x371f6cu;
    // NOP
    ctx->pc = 0x371f70u;
}
