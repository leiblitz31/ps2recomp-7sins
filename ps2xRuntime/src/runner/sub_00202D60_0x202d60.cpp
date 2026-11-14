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

// Function: sub_00202D60
// Address: 0x202d60 - 0x203cf0
void sub_00202D60_0x202d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D60_0x202d60");
#endif

    switch (ctx->pc) {
        case 0x202dbcu: goto label_202dbc;
        case 0x202f34u: goto label_202f34;
        case 0x202f48u: goto label_202f48;
        case 0x202f5cu: goto label_202f5c;
        case 0x202f74u: goto label_202f74;
        case 0x202f8cu: goto label_202f8c;
        case 0x202facu: goto label_202fac;
        case 0x202fc4u: goto label_202fc4;
        case 0x202fe4u: goto label_202fe4;
        case 0x202ffcu: goto label_202ffc;
        case 0x203020u: goto label_203020;
        case 0x203038u: goto label_203038;
        case 0x203058u: goto label_203058;
        case 0x203070u: goto label_203070;
        case 0x203090u: goto label_203090;
        case 0x2030a8u: goto label_2030a8;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030e0u: goto label_2030e0;
        case 0x203100u: goto label_203100;
        case 0x203118u: goto label_203118;
        case 0x203134u: goto label_203134;
        case 0x203150u: goto label_203150;
        case 0x203170u: goto label_203170;
        case 0x203188u: goto label_203188;
        case 0x2031a8u: goto label_2031a8;
        case 0x2031c4u: goto label_2031c4;
        case 0x2031e8u: goto label_2031e8;
        case 0x203200u: goto label_203200;
        case 0x203218u: goto label_203218;
        case 0x203258u: goto label_203258;
        case 0x203264u: goto label_203264;
        case 0x203290u: goto label_203290;
        case 0x2032acu: goto label_2032ac;
        case 0x2032d4u: goto label_2032d4;
        case 0x2032f8u: goto label_2032f8;
        case 0x20331cu: goto label_20331c;
        case 0x203330u: goto label_203330;
        case 0x203354u: goto label_203354;
        case 0x203390u: goto label_203390;
        case 0x2033a4u: goto label_2033a4;
        case 0x2033c0u: goto label_2033c0;
        case 0x2033e8u: goto label_2033e8;
        case 0x2033fcu: goto label_2033fc;
        case 0x203418u: goto label_203418;
        case 0x20343cu: goto label_20343c;
        case 0x203454u: goto label_203454;
        case 0x20346cu: goto label_20346c;
        case 0x203478u: goto label_203478;
        case 0x203494u: goto label_203494;
        case 0x2034a8u: goto label_2034a8;
        case 0x203504u: goto label_203504;
        case 0x20351cu: goto label_20351c;
        case 0x20352cu: goto label_20352c;
        case 0x203540u: goto label_203540;
        case 0x20354cu: goto label_20354c;
        case 0x203564u: goto label_203564;
        case 0x203578u: goto label_203578;
        case 0x203594u: goto label_203594;
        case 0x2035a0u: goto label_2035a0;
        case 0x2035b8u: goto label_2035b8;
        case 0x2035ccu: goto label_2035cc;
        case 0x2035e8u: goto label_2035e8;
        case 0x203604u: goto label_203604;
        case 0x20361cu: goto label_20361c;
        case 0x203630u: goto label_203630;
        case 0x2036c0u: goto label_2036c0;
        case 0x203700u: goto label_203700;
        case 0x203730u: goto label_203730;
        case 0x203744u: goto label_203744;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037f8u: goto label_2037f8;
        case 0x203880u: goto label_203880;
        case 0x2038b4u: goto label_2038b4;
        case 0x203940u: goto label_203940;
        case 0x20397cu: goto label_20397c;
        case 0x203990u: goto label_203990;
        case 0x20399cu: goto label_20399c;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a14u: goto label_203a14;
        case 0x203a28u: goto label_203a28;
        case 0x203a38u: goto label_203a38;
        case 0x203a44u: goto label_203a44;
        case 0x203a68u: goto label_203a68;
        case 0x203a80u: goto label_203a80;
        case 0x203a98u: goto label_203a98;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ad4u: goto label_203ad4;
        case 0x203af0u: goto label_203af0;
        case 0x203b10u: goto label_203b10;
        case 0x203b30u: goto label_203b30;
        case 0x203b50u: goto label_203b50;
        case 0x203b64u: goto label_203b64;
        case 0x203b7cu: goto label_203b7c;
        case 0x203bacu: goto label_203bac;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bc0u: goto label_203bc0;
        case 0x203be8u: goto label_203be8;
        case 0x203c08u: goto label_203c08;
        case 0x203c24u: goto label_203c24;
        case 0x203c2cu: goto label_203c2c;
        case 0x203c38u: goto label_203c38;
        case 0x203c4cu: goto label_203c4c;
        case 0x203c68u: goto label_203c68;
        case 0x203c7cu: goto label_203c7c;
        case 0x203ca8u: goto label_203ca8;
        default: break;
    }

    ctx->pc = 0x202d60u;

    // 0x202d60: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x202d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x202d64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x202d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x202d68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x202d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x202d6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x202d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x202d70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x202d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x202d74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x202d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x202d78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x202d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x202d7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x202d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x202d80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x202d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x202d84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x202d88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x202d8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x202d8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x202d90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x202d90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x202d94: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x202d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
    // 0x202d98: 0xa3a50300  sb          $a1, 0x300($sp)
    ctx->pc = 0x202d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 768), (uint8_t)GPR_U32(ctx, 5));
    // 0x202d9c: 0xafa60310  sw          $a2, 0x310($sp)
    ctx->pc = 0x202d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 6));
    // 0x202da0: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202da4: 0x93a20300  lbu         $v0, 0x300($sp)
    ctx->pc = 0x202da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x202da8: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x202da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x202dac: 0x7ba50220  lq          $a1, 0x220($sp)
    ctx->pc = 0x202dacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x202db0: 0x8fa60310  lw          $a2, 0x310($sp)
    ctx->pc = 0x202db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x202db4: 0xc064a4c  jal         func_192930
    ctx->pc = 0x202DB4u;
    SET_GPR_U32(ctx, 31, 0x202DBCu);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x202DB4u, 0x202DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DBCu;
label_202dbc:
    // 0x202dbc: 0x93a50300  lbu         $a1, 0x300($sp)
    ctx->pc = 0x202dbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x202dc0: 0x10a0038b  beqz        $a1, . + 4 + (0x38B << 2)
    ctx->pc = 0x202DC0u;
    {
        const bool branch_taken_0x202dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x202dc0) {
            ctx->pc = 0x203BF0u;
            goto label_203bf0;
        }
    }
    ctx->pc = 0x202DC8u;
    // 0x202dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202dcc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202dd0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x202dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x202dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202dd8: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x202dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202ddc: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x202ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    // 0x202de0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202de4: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x202de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202de8: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x202de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x202dec: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202df0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x202df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x202df4: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x202df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202df8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202dfc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x202dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x202e00: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x202e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x202e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e08: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e0c: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x202e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x202e10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e14: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e18: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x202e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x202e1c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e20: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x202e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x202e24: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x202e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202e28: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e2c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x202e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x202e30: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x202e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x202e34: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x202e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x202e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e3c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e40: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x202e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x202e44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e48: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e4c: 0xe4800144  swc1        $f0, 0x144($a0)
    ctx->pc = 0x202e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x202e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e54: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e58: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x202e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x202e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e60: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e64: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x202e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x202e68: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x202e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e6c: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x202e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x202e70: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e74: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x202e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x202e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202e7c: 0x8fb002f0  lw          $s0, 0x2F0($sp)
    ctx->pc = 0x202e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e80: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x202e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x202e84: 0xc78082d4  lwc1        $f0, -0x7D2C($gp)
    ctx->pc = 0x202e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202e88: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e8c: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x202e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x202e90: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x202e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202e94: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202e98: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x202e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x202e9c: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x202e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x202ea0: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x202ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x202ea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202ea8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202eac: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x202eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x202eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202eb4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202eb8: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x202eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x202ebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202ec0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202ec4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x202ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x202ec8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x202ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202ecc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202ed0: 0xac450128  sw          $a1, 0x128($v0)
    ctx->pc = 0x202ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 5));
    // 0x202ed4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x202ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202ed8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202edc: 0xac50012c  sw          $s0, 0x12C($v0)
    ctx->pc = 0x202edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 16));
    // 0x202ee0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202ee4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202ee8: 0xac900130  sw          $s0, 0x130($a0)
    ctx->pc = 0x202ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 16));
    // 0x202eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x202ef0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x202ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x202ef4: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x202ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x202ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202efc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f00: 0xe4400134  swc1        $f0, 0x134($v0)
    ctx->pc = 0x202f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
    // 0x202f04: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f08: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x202f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
    // 0x202f0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x202f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x202f10: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x202f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f14: 0xaca2013c  sw          $v0, 0x13C($a1)
    ctx->pc = 0x202f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 2));
    // 0x202f18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x202f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x202f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202f20: 0x8fb002f0  lw          $s0, 0x2F0($sp)
    ctx->pc = 0x202f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f24: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x202f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x202f28: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f2c: 0xc0801e4  jal         func_200790
    ctx->pc = 0x202F2Cu;
    SET_GPR_U32(ctx, 31, 0x202F34u);
    ctx->pc = 0x200790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200790u, 0x202F2Cu, 0x202F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F34u;
label_202f34:
    // 0x202f34: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x202f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x202f38: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x202f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f40: 0xc065180  jal         func_194600
    ctx->pc = 0x202F40u;
    SET_GPR_U32(ctx, 31, 0x202F48u);
    ctx->pc = 0x194600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194600u, 0x202F40u, 0x202F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F48u;
label_202f48:
    // 0x202f48: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f4c: 0x24a400d8  addiu       $a0, $a1, 0xD8
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x202f50: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x202f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x202f54: 0xc056708  jal         func_159C20
    ctx->pc = 0x202F54u;
    SET_GPR_U32(ctx, 31, 0x202F5Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x202F54u, 0x202F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F5Cu;
label_202f5c:
    // 0x202f5c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f60: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x202f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x202f64: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x202f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x202f68: 0x24a58e50  addiu       $a1, $a1, -0x71B0
    ctx->pc = 0x202f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938192));
    // 0x202f6c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x202F6Cu;
    SET_GPR_U32(ctx, 31, 0x202F74u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x202F6Cu, 0x202F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F74u;
label_202f74:
    // 0x202f74: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x202f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x202f78: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f7c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202F84u;
    SET_GPR_U32(ctx, 31, 0x202F8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202F84u, 0x202F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F8Cu;
label_202f8c:
    // 0x202f8c: 0x7ba301d0  lq          $v1, 0x1D0($sp)
    ctx->pc = 0x202f8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x202f90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x202f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x202f94: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202f98: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x202f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x202f9c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x202f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x202fa0: 0x24a58e70  addiu       $a1, $a1, -0x7190
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
    // 0x202fa4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x202FA4u;
    SET_GPR_U32(ctx, 31, 0x202FACu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x202FA4u, 0x202FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FACu;
label_202fac:
    // 0x202fac: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x202facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x202fb0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202fb4: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202fbc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202FBCu;
    SET_GPR_U32(ctx, 31, 0x202FC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202FBCu, 0x202FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FC4u;
label_202fc4:
    // 0x202fc4: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x202fc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x202fc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x202fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x202fcc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202fd0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x202fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x202fd4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x202fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x202fd8: 0x24a58e90  addiu       $a1, $a1, -0x7170
    ctx->pc = 0x202fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
    // 0x202fdc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x202FDCu;
    SET_GPR_U32(ctx, 31, 0x202FE4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x202FDCu, 0x202FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FE4u;
label_202fe4:
    // 0x202fe4: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x202fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x202fe8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x202fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x202fec: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x202fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x202ff0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202ff4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202FF4u;
    SET_GPR_U32(ctx, 31, 0x202FFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202FF4u, 0x202FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FFCu;
label_202ffc:
    // 0x202ffc: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x202ffcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x203000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203004: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203008: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20300c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203010: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203014: 0x24a58eb0  addiu       $a1, $a1, -0x7150
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938288));
    // 0x203018: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x203018u;
    SET_GPR_U32(ctx, 31, 0x203020u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x203018u, 0x203020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203020u;
label_203020:
    // 0x203020: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x203020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x203024: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203028: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x203028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20302c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203030: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203030u;
    SET_GPR_U32(ctx, 31, 0x203038u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203030u, 0x203038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203038u;
label_203038:
    // 0x203038: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x203038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x20303c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20303cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203040: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203044: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203048: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x20304c: 0x24a58ed0  addiu       $a1, $a1, -0x7130
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
    // 0x203050: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x203050u;
    SET_GPR_U32(ctx, 31, 0x203058u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x203050u, 0x203058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203058u;
label_203058:
    // 0x203058: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x203058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x20305c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x20305cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203060: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x203064: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203068: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203068u;
    SET_GPR_U32(ctx, 31, 0x203070u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203068u, 0x203070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203070u;
label_203070:
    // 0x203070: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x203070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x203074: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203078: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20307c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x20307cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203080: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203084: 0x24a58ef0  addiu       $a1, $a1, -0x7110
    ctx->pc = 0x203084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938352));
    // 0x203088: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x203088u;
    SET_GPR_U32(ctx, 31, 0x203090u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x203088u, 0x203090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203090u;
label_203090:
    // 0x203090: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x203090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x203094: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203098: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x203098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20309c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2030a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2030A0u;
    SET_GPR_U32(ctx, 31, 0x2030A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2030A0u, 0x2030A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030A8u;
label_2030a8:
    // 0x2030a8: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x2030a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2030ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2030acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2030b0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2030b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2030b4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2030b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2030b8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2030b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2030bc: 0x24a58f10  addiu       $a1, $a1, -0x70F0
    ctx->pc = 0x2030bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
    // 0x2030c0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x2030C0u;
    SET_GPR_U32(ctx, 31, 0x2030C8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2030C0u, 0x2030C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030C8u;
label_2030c8:
    // 0x2030c8: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x2030c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x2030cc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2030ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2030d0: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x2030d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2030d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2030d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2030D8u;
    SET_GPR_U32(ctx, 31, 0x2030E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2030D8u, 0x2030E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030E0u;
label_2030e0:
    // 0x2030e0: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x2030e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2030e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2030e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2030e8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2030e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2030ec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2030ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2030f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2030f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2030f4: 0x24a58f30  addiu       $a1, $a1, -0x70D0
    ctx->pc = 0x2030f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938416));
    // 0x2030f8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x2030F8u;
    SET_GPR_U32(ctx, 31, 0x203100u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2030F8u, 0x203100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203100u;
label_203100:
    // 0x203100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203104: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203108: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x203108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20310c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x203110: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203110u;
    SET_GPR_U32(ctx, 31, 0x203118u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203110u, 0x203118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203118u;
label_203118:
    // 0x203118: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x203118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x20311c: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x20311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203120: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x203120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x203124: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203128: 0x24a58f50  addiu       $a1, $a1, -0x70B0
    ctx->pc = 0x203128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
    // 0x20312c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x20312Cu;
    SET_GPR_U32(ctx, 31, 0x203134u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x20312Cu, 0x203134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203134u;
label_203134:
    // 0x203134: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x203134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x203138: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20313c: 0x248500d8  addiu       $a1, $a0, 0xD8
    ctx->pc = 0x20313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x203140: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203144: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x203148: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203148u;
    SET_GPR_U32(ctx, 31, 0x203150u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203148u, 0x203150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203150u;
label_203150:
    // 0x203150: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x203150u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x203154: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203158: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20315c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x20315cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203160: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203164: 0x24a58f60  addiu       $a1, $a1, -0x70A0
    ctx->pc = 0x203164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938464));
    // 0x203168: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x203168u;
    SET_GPR_U32(ctx, 31, 0x203170u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x203168u, 0x203170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203170u;
label_203170:
    // 0x203170: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x203170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x203174: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203178: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x203178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x20317c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x203180: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203180u;
    SET_GPR_U32(ctx, 31, 0x203188u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203180u, 0x203188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203188u;
label_203188:
    // 0x203188: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x203188u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x20318c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203190: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203194: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x203194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203198: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x20319c: 0x24a58f70  addiu       $a1, $a1, -0x7090
    ctx->pc = 0x20319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938480));
    // 0x2031a0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x2031A0u;
    SET_GPR_U32(ctx, 31, 0x2031A8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2031A0u, 0x2031A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031A8u;
label_2031a8:
    // 0x2031a8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2031a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2031ac: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2031acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2031b0: 0x248500d8  addiu       $a1, $a0, 0xD8
    ctx->pc = 0x2031b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2031b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2031b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2031bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2031BCu;
    SET_GPR_U32(ctx, 31, 0x2031C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2031BCu, 0x2031C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031C4u;
label_2031c4:
    // 0x2031c4: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x2031c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2031c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2031c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2031cc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2031d0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2031d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2031d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2031dc: 0x24a58f80  addiu       $a1, $a1, -0x7080
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
    // 0x2031e0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x2031E0u;
    SET_GPR_U32(ctx, 31, 0x2031E8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2031E0u, 0x2031E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2031E8u;
label_2031e8:
    // 0x2031e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2031e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031ec: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2031ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2031f0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2031f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2031f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2031f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2031F8u;
    SET_GPR_U32(ctx, 31, 0x203200u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2031F8u, 0x203200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203200u;
label_203200:
    // 0x203200: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x203200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x203204: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x203208: 0x24428dd0  addiu       $v0, $v0, -0x7230
    ctx->pc = 0x203208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x20320c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x20320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x203210: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x203214: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_203218:
    // 0x203218: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x203218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20321c: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203220: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x203220u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x203224: 0x80640001  lb          $a0, 0x1($v1)
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x203228: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x203228u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x20322c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x20322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x203230: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x203230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x203234: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x203234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x203238: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x203238u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x20323c: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x20323cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x203240: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x203240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x203244: 0x1c40fff4  bgtz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x203244u;
    {
        const bool branch_taken_0x203244 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x203244) {
            ctx->pc = 0x203218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203218;
        }
    }
    ctx->pc = 0x20324Cu;
    // 0x20324c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20324cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203250: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x203250u;
    {
        const bool branch_taken_0x203250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203250) {
            ctx->pc = 0x203424u;
            goto label_203424;
        }
    }
    ctx->pc = 0x203258u;
label_203258:
    // 0x203258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x203258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20325c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20325Cu;
    {
        const bool branch_taken_0x20325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20325c) {
            ctx->pc = 0x2032E0u;
            goto label_2032e0;
        }
    }
    ctx->pc = 0x203264u;
label_203264:
    // 0x203264: 0x102940  sll         $a1, $s0, 5
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x203268: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x203268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x20326c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x20326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x203270: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x203270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x203274: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203278: 0x24a58f90  addiu       $a1, $a1, -0x7070
    ctx->pc = 0x203278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938512));
    // 0x20327c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x20327cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x203280: 0x24460250  addiu       $a2, $v0, 0x250
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x203284: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x203284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203288: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x203288u;
    SET_GPR_U32(ctx, 31, 0x203290u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x203288u, 0x203290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203290u;
label_203290:
    // 0x203290: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x203290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203294: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x203294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x203298: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x203298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x20329c: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x20329cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2032a0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2032a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2032a4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x2032A4u;
    SET_GPR_U32(ctx, 31, 0x2032ACu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2032A4u, 0x2032ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032ACu;
label_2032ac:
    // 0x2032ac: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2032acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2032b0: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2032b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2032b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2032b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2032b8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2032bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2032c0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2032c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2032c4: 0x24a400d8  addiu       $a0, $a1, 0xD8
    ctx->pc = 0x2032c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x2032c8: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x2032c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2032cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2032CCu;
    SET_GPR_U32(ctx, 31, 0x2032D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2032CCu, 0x2032D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2032D4u;
label_2032d4:
    // 0x2032d4: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2032d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2032d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2032d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2032dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2032e0:
    // 0x2032e0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2032e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2032e4: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2032E4u;
    {
        const bool branch_taken_0x2032e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2032e4) {
            ctx->pc = 0x203264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203264;
        }
    }
    ctx->pc = 0x2032ECu;
    // 0x2032ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2032ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2032f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2032F0u;
    {
        const bool branch_taken_0x2032f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032f0) {
            ctx->pc = 0x203360u;
            goto label_203360;
        }
    }
    ctx->pc = 0x2032F8u;
label_2032f8:
    // 0x2032f8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2032f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2032fc: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x2032fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x203300: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x203300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x203304: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203308: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x203308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
    // 0x20330c: 0x24460250  addiu       $a2, $v0, 0x250
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x203310: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x203310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203314: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x203314u;
    SET_GPR_U32(ctx, 31, 0x20331Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x203314u, 0x20331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20331Cu;
label_20331c:
    // 0x20331c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x20331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203320: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x203320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203324: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x203324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x203328: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x203328u;
    SET_GPR_U32(ctx, 31, 0x203330u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x203328u, 0x203330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203330u;
label_203330:
    // 0x203330: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x203330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x203334: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203338: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x203338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x20333c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x20333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x203340: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x203344: 0x244300d8  addiu       $v1, $v0, 0xD8
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x203348: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x203348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20334c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20334Cu;
    SET_GPR_U32(ctx, 31, 0x203354u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20334Cu, 0x203354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203354u;
label_203354:
    // 0x203354: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x203354u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203358: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20335c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_203360:
    // 0x203360: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x203360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x203364: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x203364u;
    {
        const bool branch_taken_0x203364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203364) {
            ctx->pc = 0x2032F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2032f8;
        }
    }
    ctx->pc = 0x20336Cu;
    // 0x20336c: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x203370: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x203374: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x203374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x203378: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20337c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20337cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203380: 0x24a58fd0  addiu       $a1, $a1, -0x7030
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938576));
    // 0x203384: 0x24460250  addiu       $a2, $v0, 0x250
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x203388: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x203388u;
    SET_GPR_U32(ctx, 31, 0x203390u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x203388u, 0x203390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203390u;
label_203390:
    // 0x203390: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203394: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x203398: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x203398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x20339c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x20339Cu;
    SET_GPR_U32(ctx, 31, 0x2033A4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x20339Cu, 0x2033A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033A4u;
label_2033a4:
    // 0x2033a4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2033a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2033a8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2033ac: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x2033acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2033b0: 0x24a50012  addiu       $a1, $a1, 0x12
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18));
    // 0x2033b4: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2033b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2033b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2033B8u;
    SET_GPR_U32(ctx, 31, 0x2033C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2033B8u, 0x2033C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033C0u;
label_2033c0:
    // 0x2033c0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2033c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2033c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2033c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2033c8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x2033c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2033cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2033ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2033d0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2033d4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2033d8: 0x24a58ff0  addiu       $a1, $a1, -0x7010
    ctx->pc = 0x2033d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938608));
    // 0x2033dc: 0x24460250  addiu       $a2, $v0, 0x250
    ctx->pc = 0x2033dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x2033e0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2033E0u;
    SET_GPR_U32(ctx, 31, 0x2033E8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2033E0u, 0x2033E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033E8u;
label_2033e8:
    // 0x2033e8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2033ec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2033ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2033f0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2033f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2033f4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x2033F4u;
    SET_GPR_U32(ctx, 31, 0x2033FCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2033F4u, 0x2033FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033FCu;
label_2033fc:
    // 0x2033fc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2033fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x203400: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x203400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203404: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x203404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x203408: 0x24450013  addiu       $a1, $v0, 0x13
    ctx->pc = 0x203408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x20340c: 0x246400d8  addiu       $a0, $v1, 0xD8
    ctx->pc = 0x20340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
    // 0x203410: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203410u;
    SET_GPR_U32(ctx, 31, 0x203418u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203410u, 0x203418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203418u;
label_203418:
    // 0x203418: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x203418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20341c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20341cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x203420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_203424:
    // 0x203424: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x203424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x203428: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x203428u;
    {
        const bool branch_taken_0x203428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203428) {
            ctx->pc = 0x203258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203258;
        }
    }
    ctx->pc = 0x203430u;
    // 0x203430: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203434: 0xc06479c  jal         func_191E70
    ctx->pc = 0x203434u;
    SET_GPR_U32(ctx, 31, 0x20343Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x203434u, 0x20343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20343Cu;
label_20343c:
    // 0x20343c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x20343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x203440: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203444: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x203444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x203448: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20344c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20344Cu;
    SET_GPR_U32(ctx, 31, 0x203454u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20344Cu, 0x203454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203454u;
label_203454:
    // 0x203454: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203458: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20345c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x20345cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x203460: 0x2446010c  addiu       $a2, $v0, 0x10C
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x203464: 0xc08c744  jal         func_231D10
    ctx->pc = 0x203464u;
    SET_GPR_U32(ctx, 31, 0x20346Cu);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x203464u, 0x20346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20346Cu;
label_20346c:
    // 0x20346c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x20346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203470: 0xc06479c  jal         func_191E70
    ctx->pc = 0x203470u;
    SET_GPR_U32(ctx, 31, 0x203478u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x203470u, 0x203478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203478u;
label_203478:
    // 0x203478: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x203478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x20347c: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203480: 0x24c200d8  addiu       $v0, $a2, 0xD8
    ctx->pc = 0x203480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 216));
    // 0x203484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203488: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20348c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20348Cu;
    SET_GPR_U32(ctx, 31, 0x203494u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20348Cu, 0x203494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203494u;
label_203494:
    // 0x203494: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x203494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203498: 0x7ba40220  lq          $a0, 0x220($sp)
    ctx->pc = 0x203498u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x20349c: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x2034a0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x2034A0u;
    SET_GPR_U32(ctx, 31, 0x2034A8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x2034A0u, 0x2034A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034A8u;
label_2034a8:
    // 0x2034a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2034a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2034ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2034acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2034b0: 0xc7a202e0  lwc1        $f2, 0x2E0($sp)
    ctx->pc = 0x2034b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2034b4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2034b8: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x2034b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2034bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2034bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2034c0: 0x0  nop
    ctx->pc = 0x2034c0u;
    // NOP
    // 0x2034c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2034c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2034c8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2034c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2034cc: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x2034ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    // 0x2034d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2034d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2034d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2034d8: 0xc7a202e4  lwc1        $f2, 0x2E4($sp)
    ctx->pc = 0x2034d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2034dc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2034dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2034e0: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x2034e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2034e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2034e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2034e8: 0x0  nop
    ctx->pc = 0x2034e8u;
    // NOP
    // 0x2034ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2034ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2034f0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2034f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2034f4: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x2034f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    // 0x2034f8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2034fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2034FCu;
    SET_GPR_U32(ctx, 31, 0x203504u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2034FCu, 0x203504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203504u;
label_203504:
    // 0x203504: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x203504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x203508: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20350c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x20350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x203510: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203514: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x203514u;
    SET_GPR_U32(ctx, 31, 0x20351Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x203514u, 0x20351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20351Cu;
label_20351c:
    // 0x20351c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203520: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x203520u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x203524: 0xc08c49c  jal         func_231270
    ctx->pc = 0x203524u;
    SET_GPR_U32(ctx, 31, 0x20352Cu);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x203524u, 0x20352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20352Cu;
label_20352c:
    // 0x20352c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203530: 0xe4400134  swc1        $f0, 0x134($v0)
    ctx->pc = 0x203530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
    // 0x203534: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x203534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x203538: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203538u;
    {
        const bool branch_taken_0x203538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203538) {
            ctx->pc = 0x20357Cu;
            goto label_20357c;
        }
    }
    ctx->pc = 0x203540u;
label_203540:
    // 0x203540: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203544: 0xc06479c  jal         func_191E70
    ctx->pc = 0x203544u;
    SET_GPR_U32(ctx, 31, 0x20354Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x203544u, 0x20354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20354Cu;
label_20354c:
    // 0x20354c: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x20354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x203550: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203554: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x203554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x203558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20355c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x20355Cu;
    SET_GPR_U32(ctx, 31, 0x203564u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20355Cu, 0x203564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203564u;
label_203564:
    // 0x203564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x203564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203568: 0x7ba40200  lq          $a0, 0x200($sp)
    ctx->pc = 0x203568u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x20356c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20356cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203570: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x203570u;
    SET_GPR_U32(ctx, 31, 0x203578u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x203570u, 0x203578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203578u;
label_203578:
    // 0x203578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x203578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20357c:
    // 0x20357c: 0x2e02002c  sltiu       $v0, $s0, 0x2C
    ctx->pc = 0x20357cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x203580: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x203580u;
    {
        const bool branch_taken_0x203580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203580) {
            ctx->pc = 0x203540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203540;
        }
    }
    ctx->pc = 0x203588u;
    // 0x203588: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x203588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20358c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20358Cu;
    {
        const bool branch_taken_0x20358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20358c) {
            ctx->pc = 0x2035D0u;
            goto label_2035d0;
        }
    }
    ctx->pc = 0x203594u;
label_203594:
    // 0x203594: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203598: 0xc06479c  jal         func_191E70
    ctx->pc = 0x203598u;
    SET_GPR_U32(ctx, 31, 0x2035A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x203598u, 0x2035A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035A0u;
label_2035a0:
    // 0x2035a0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x2035a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x2035a4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2035a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2035a8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2035ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2035acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035b0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2035B0u;
    SET_GPR_U32(ctx, 31, 0x2035B8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2035B0u, 0x2035B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035B8u;
label_2035b8:
    // 0x2035b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2035b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2035bc: 0x7ba401f0  lq          $a0, 0x1F0($sp)
    ctx->pc = 0x2035bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2035c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2035c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035c4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x2035C4u;
    SET_GPR_U32(ctx, 31, 0x2035CCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x2035C4u, 0x2035CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035CCu;
label_2035cc:
    // 0x2035cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2035d0:
    // 0x2035d0: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x2035d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2035d4: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2035D4u;
    {
        const bool branch_taken_0x2035d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2035d4) {
            ctx->pc = 0x203594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203594;
        }
    }
    ctx->pc = 0x2035DCu;
    // 0x2035dc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2035dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2035e0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x2035E0u;
    SET_GPR_U32(ctx, 31, 0x2035E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2035E0u, 0x2035E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035E8u;
label_2035e8:
    // 0x2035e8: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x2035e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x2035ec: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2035ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2035f0: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x2035f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x2035f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2035f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2035f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2035fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2035FCu;
    SET_GPR_U32(ctx, 31, 0x203604u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2035FCu, 0x203604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203604u;
label_203604:
    // 0x203604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203608: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20360c: 0x7ba401e0  lq          $a0, 0x1E0($sp)
    ctx->pc = 0x20360cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x203610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x203610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203614: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x203614u;
    SET_GPR_U32(ctx, 31, 0x20361Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x203614u, 0x20361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20361Cu;
label_20361c:
    // 0x20361c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x20361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203620: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x203624: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x203624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x203628: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x203628u;
    SET_GPR_U32(ctx, 31, 0x203630u);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x203628u, 0x203630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203630u;
label_203630:
    // 0x203630: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x203630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x203634: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x203634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x203638: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20363c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20363Cu;
    {
        const bool branch_taken_0x20363c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x20363c) {
            ctx->pc = 0x203658u;
            goto label_203658;
        }
    }
    ctx->pc = 0x203644u;
    // 0x203644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x203644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203648: 0x0  nop
    ctx->pc = 0x203648u;
    // NOP
    // 0x20364c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20364cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x203650u;
    {
        const bool branch_taken_0x203650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203650) {
            ctx->pc = 0x203674u;
            goto label_203674;
        }
    }
    ctx->pc = 0x203658u;
label_203658:
    // 0x203658: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x203658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x20365c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x20365cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x203660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x203660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x203664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203668: 0x0  nop
    ctx->pc = 0x203668u;
    // NOP
    // 0x20366c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20366cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203670: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x203670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_203674:
    // 0x203674: 0x3c044420  lui         $a0, 0x4420
    ctx->pc = 0x203674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17440 << 16));
    // 0x203678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x203678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20367c: 0x0  nop
    ctx->pc = 0x20367cu;
    // NOP
    // 0x203680: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x203680u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x203684: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
    // 0x203688: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x203688u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20368c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x20368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203690: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x203690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x203694: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x203694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x203698: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x203698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20369c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20369cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2036a0: 0x0  nop
    ctx->pc = 0x2036a0u;
    // NOP
    // 0x2036a4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2036a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2036a8: 0x4603151d  msub.s      $f20, $f2, $f3
    ctx->pc = 0x2036a8u;
    ctx->f[20] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2036ac: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2036acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2036b0: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x2036b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x2036b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2036b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036b8: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x2036B8u;
    SET_GPR_U32(ctx, 31, 0x2036C0u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x2036B8u, 0x2036C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036C0u;
label_2036c0:
    // 0x2036c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2036c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036c4: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x2036c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2036c8: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2036c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2036cc: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x2036ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2036d0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2036d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2036d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2036d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2036d8: 0x0  nop
    ctx->pc = 0x2036d8u;
    // NOP
    // 0x2036dc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2036dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2036e0: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2036e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2036e4: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2036e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2036e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2036e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2036f0: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x2036f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x2036f4: 0x7ba501b0  lq          $a1, 0x1B0($sp)
    ctx->pc = 0x2036f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2036f8: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x2036F8u;
    SET_GPR_U32(ctx, 31, 0x203700u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x2036F8u, 0x203700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203700u;
label_203700:
    // 0x203700: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x203700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x203704: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203708: 0xc481010c  lwc1        $f1, 0x10C($a0)
    ctx->pc = 0x203708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20370c: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x203710: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x203710u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203714: 0x0  nop
    ctx->pc = 0x203714u;
    // NOP
    // 0x203718: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x203718u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20371c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203720: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x203720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x203724: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203728: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x203728u;
    SET_GPR_U32(ctx, 31, 0x203730u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x203728u, 0x203730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203730u;
label_203730:
    // 0x203730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203734: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x203734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x203738: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x203738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20373c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x20373Cu;
    {
        const bool branch_taken_0x20373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20373c) {
            ctx->pc = 0x2038C0u;
            goto label_2038c0;
        }
    }
    ctx->pc = 0x203744u;
label_203744:
    // 0x203744: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x203744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x203748: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x203748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x20374c: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x20374cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x203750: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x203750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x203754: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203754u;
    {
        const bool branch_taken_0x203754 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x203754) {
            ctx->pc = 0x203770u;
            goto label_203770;
        }
    }
    ctx->pc = 0x20375Cu;
    // 0x20375c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20375cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203760: 0x0  nop
    ctx->pc = 0x203760u;
    // NOP
    // 0x203764: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x203768u;
    {
        const bool branch_taken_0x203768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203768) {
            ctx->pc = 0x20378Cu;
            goto label_20378c;
        }
    }
    ctx->pc = 0x203770u;
label_203770:
    // 0x203770: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x203770u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x203774: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x203774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x203778: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x203778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x20377c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20377cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203780: 0x0  nop
    ctx->pc = 0x203780u;
    // NOP
    // 0x203784: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203788: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x203788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20378c:
    // 0x20378c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x20378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x203790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203794: 0x0  nop
    ctx->pc = 0x203794u;
    // NOP
    // 0x203798: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x203798u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20379c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2037a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2037a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2037a4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2037a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2037a8: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2037a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2037ac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2037acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2037b0: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x2037b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x2037b4: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2037b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2037b8: 0x7ba50190  lq          $a1, 0x190($sp)
    ctx->pc = 0x2037b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2037bc: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x2037BCu;
    SET_GPR_U32(ctx, 31, 0x2037C4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x2037BCu, 0x2037C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037C4u;
label_2037c4:
    // 0x2037c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2037c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2037c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2037cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2037ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2037d0: 0x0  nop
    ctx->pc = 0x2037d0u;
    // NOP
    // 0x2037d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2037d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2037d8: 0x4615a51c  madd.s      $f20, $f20, $f21
    ctx->pc = 0x2037d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x2037dc: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2037dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2037e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2037e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2037e4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2037e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2037e8: 0x24a400e8  addiu       $a0, $a1, 0xE8
    ctx->pc = 0x2037e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    // 0x2037ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2037ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037f0: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x2037F0u;
    SET_GPR_U32(ctx, 31, 0x2037F8u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x2037F0u, 0x2037F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037F8u;
label_2037f8:
    // 0x2037f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2037f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037fc: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x2037fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x203800: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x203800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x203804: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x203804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x203808: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x203808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x20380c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x20380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x203810: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203810u;
    {
        const bool branch_taken_0x203810 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x203810) {
            ctx->pc = 0x20382Cu;
            goto label_20382c;
        }
    }
    ctx->pc = 0x203818u;
    // 0x203818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20381c: 0x0  nop
    ctx->pc = 0x20381cu;
    // NOP
    // 0x203820: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203824: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x203824u;
    {
        const bool branch_taken_0x203824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203824) {
            ctx->pc = 0x203848u;
            goto label_203848;
        }
    }
    ctx->pc = 0x20382Cu;
label_20382c:
    // 0x20382c: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x20382cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x203830: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x203830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x203834: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x203834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x203838: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x203838u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20383c: 0x0  nop
    ctx->pc = 0x20383cu;
    // NOP
    // 0x203840: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203844: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x203844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_203848:
    // 0x203848: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x203848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x20384c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20384cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203850: 0x0  nop
    ctx->pc = 0x203850u;
    // NOP
    // 0x203854: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x203854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x203858: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x203858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x20385c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x20385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x203860: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203864: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x203864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x203868: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x20386c: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x20386cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x203870: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x203870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x203874: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x203874u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x203878: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x203878u;
    SET_GPR_U32(ctx, 31, 0x203880u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x203878u, 0x203880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203880u;
label_203880:
    // 0x203880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203884: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x203884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20388c: 0x0  nop
    ctx->pc = 0x20388cu;
    // NOP
    // 0x203890: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x203890u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x203894: 0x4615a51c  madd.s      $f20, $f20, $f21
    ctx->pc = 0x203894u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x203898: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x203898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20389c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x20389cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2038a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2038a4: 0x24a400e8  addiu       $a0, $a1, 0xE8
    ctx->pc = 0x2038a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    // 0x2038a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2038a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038ac: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x2038ACu;
    SET_GPR_U32(ctx, 31, 0x2038B4u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x2038ACu, 0x2038B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038B4u;
label_2038b4:
    // 0x2038b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2038b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038b8: 0xe4b40000  swc1        $f20, 0x0($a1)
    ctx->pc = 0x2038b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2038bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2038c0:
    // 0x2038c0: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2038c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2038c4: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2038C4u;
    {
        const bool branch_taken_0x2038c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2038c4) {
            ctx->pc = 0x203744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203744;
        }
    }
    ctx->pc = 0x2038CCu;
    // 0x2038cc: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x2038ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x2038d0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2038d4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2038D4u;
    {
        const bool branch_taken_0x2038d4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2038d4) {
            ctx->pc = 0x2038F0u;
            goto label_2038f0;
        }
    }
    ctx->pc = 0x2038DCu;
    // 0x2038dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2038dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2038e0: 0x0  nop
    ctx->pc = 0x2038e0u;
    // NOP
    // 0x2038e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2038e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2038e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2038E8u;
    {
        const bool branch_taken_0x2038e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2038e8) {
            ctx->pc = 0x20390Cu;
            goto label_20390c;
        }
    }
    ctx->pc = 0x2038F0u;
label_2038f0:
    // 0x2038f0: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2038f4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2038f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2038f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2038f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2038fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2038fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203900: 0x0  nop
    ctx->pc = 0x203900u;
    // NOP
    // 0x203904: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203908: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x203908u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20390c:
    // 0x20390c: 0x3c044420  lui         $a0, 0x4420
    ctx->pc = 0x20390cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17440 << 16));
    // 0x203910: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x203910u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203914: 0x0  nop
    ctx->pc = 0x203914u;
    // NOP
    // 0x203918: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x203918u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20391c: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x20391cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x203920: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x203920u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x203924: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203928: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x203928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x20392c: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x20392cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x203930: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x203930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x203934: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203938: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x203938u;
    SET_GPR_U32(ctx, 31, 0x203940u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x203938u, 0x203940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203940u;
label_203940:
    // 0x203940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203944: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x203944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20394c: 0x0  nop
    ctx->pc = 0x20394cu;
    // NOP
    // 0x203950: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x203950u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x203954: 0x4615a05c  madd.s      $f1, $f20, $f21
    ctx->pc = 0x203954u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[21]));
    // 0x203958: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x20395c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20395cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203960: 0x0  nop
    ctx->pc = 0x203960u;
    // NOP
    // 0x203964: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x203964u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x203968: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x20396c: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x203970: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x203974: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x203974u;
    SET_GPR_U32(ctx, 31, 0x20397Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x203974u, 0x20397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20397Cu;
label_20397c:
    // 0x20397c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x20397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x203980: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x203980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x203984: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x203984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x203988: 0xc090864  jal         func_242190
    ctx->pc = 0x203988u;
    SET_GPR_U32(ctx, 31, 0x203990u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x203988u, 0x203990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203990u;
label_203990:
    // 0x203990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203994: 0xc090590  jal         func_241640
    ctx->pc = 0x203994u;
    SET_GPR_U32(ctx, 31, 0x20399Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x203994u, 0x20399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20399Cu;
label_20399c:
    // 0x20399c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039a0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2039a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2039a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2039ac: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2039ACu;
    SET_GPR_U32(ctx, 31, 0x2039B4u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2039ACu, 0x2039B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039B4u;
label_2039b4:
    // 0x2039b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2039b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2039b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039bc: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2039BCu;
    SET_GPR_U32(ctx, 31, 0x2039C4u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2039BCu, 0x2039C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039C4u;
label_2039c4:
    // 0x2039c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2039c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2039C8u;
    {
        const bool branch_taken_0x2039c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2039c8) {
            ctx->pc = 0x203A1Cu;
            goto label_203a1c;
        }
    }
    ctx->pc = 0x2039D0u;
label_2039d0:
    // 0x2039d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2039d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2039d4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2039d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2039d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2039D8u;
    SET_GPR_U32(ctx, 31, 0x2039E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2039D8u, 0x2039E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2039e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x2039e4: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x2039e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2039e8: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x2039e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x2039ec: 0x8fa402ec  lw          $a0, 0x2EC($sp)
    ctx->pc = 0x2039ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2039f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2039f4: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2039F4u;
    SET_GPR_U32(ctx, 31, 0x2039FCu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2039F4u, 0x2039FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039FCu;
label_2039fc:
    // 0x2039fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2039fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a00: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203a04: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x203a08: 0x27a502ec  addiu       $a1, $sp, 0x2EC
    ctx->pc = 0x203a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
    // 0x203a0c: 0xc068d74  jal         func_1A35D0
    ctx->pc = 0x203A0Cu;
    SET_GPR_U32(ctx, 31, 0x203A14u);
    ctx->pc = 0x1A35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35D0u, 0x203A0Cu, 0x203A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A14u;
label_203a14:
    // 0x203a14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x203a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_203a1c:
    // 0x203a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x203a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a20: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x203A20u;
    SET_GPR_U32(ctx, 31, 0x203A28u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x203A20u, 0x203A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x1662ffe9  bne         $s3, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x203A28u;
    {
        const bool branch_taken_0x203a28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x203a28) {
            ctx->pc = 0x2039D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2039d0;
        }
    }
    ctx->pc = 0x203A30u;
    // 0x203a30: 0xc090864  jal         func_242190
    ctx->pc = 0x203A30u;
    SET_GPR_U32(ctx, 31, 0x203A38u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x203A30u, 0x203A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A38u;
label_203a38:
    // 0x203a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a3c: 0xc0905a0  jal         func_241680
    ctx->pc = 0x203A3Cu;
    SET_GPR_U32(ctx, 31, 0x203A44u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x203A3Cu, 0x203A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A44u;
label_203a44:
    // 0x203a44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a4c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203a50: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x203a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
    // 0x203a54: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x203a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x203a58: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x203a58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x203a5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x203a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203a60: 0xc068358  jal         func_1A0D60
    ctx->pc = 0x203A60u;
    SET_GPR_U32(ctx, 31, 0x203A68u);
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x203A60u, 0x203A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A68u;
label_203a68:
    // 0x203a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a6c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x203a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x203a70: 0x24c69008  addiu       $a2, $a2, -0x6FF8
    ctx->pc = 0x203a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938632));
    // 0x203a74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x203a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a78: 0xc09a364  jal         func_268D90
    ctx->pc = 0x203A78u;
    SET_GPR_U32(ctx, 31, 0x203A80u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x203A78u, 0x203A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A80u;
label_203a80:
    // 0x203a80: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x203a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x203a84: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x203a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203a88: 0x24a40154  addiu       $a0, $a1, 0x154
    ctx->pc = 0x203a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 340));
    // 0x203a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a90: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x203A90u;
    SET_GPR_U32(ctx, 31, 0x203A98u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x203A90u, 0x203A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A98u;
label_203a98:
    // 0x203a98: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x203a98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x203a9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203aa4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203aa8: 0x24a59020  addiu       $a1, $a1, -0x6FE0
    ctx->pc = 0x203aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938656));
    // 0x203aac: 0xc09a364  jal         func_268D90
    ctx->pc = 0x203AACu;
    SET_GPR_U32(ctx, 31, 0x203AB4u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x203AACu, 0x203AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AB4u;
label_203ab4:
    // 0x203ab4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x203ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x203ab8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203abc: 0x24850154  addiu       $a1, $a0, 0x154
    ctx->pc = 0x203abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x203ac0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ac4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203ac8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x203ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203acc: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x203ACCu;
    SET_GPR_U32(ctx, 31, 0x203AD4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x203ACCu, 0x203AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AD4u;
label_203ad4:
    // 0x203ad4: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x203ad4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x203ad8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ae0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x203ae4: 0x24a59030  addiu       $a1, $a1, -0x6FD0
    ctx->pc = 0x203ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938672));
    // 0x203ae8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x203AE8u;
    SET_GPR_U32(ctx, 31, 0x203AF0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x203AE8u, 0x203AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AF0u;
label_203af0:
    // 0x203af0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x203af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x203af4: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x203af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203af8: 0x24a20154  addiu       $v0, $a1, 0x154
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 340));
    // 0x203afc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x203afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x203b00: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x203b00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203b04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203b08: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x203B08u;
    SET_GPR_U32(ctx, 31, 0x203B10u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x203B08u, 0x203B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B10u;
label_203b10:
    // 0x203b10: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x203b10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x203b14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x203b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b1c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x203b20: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x203b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
    // 0x203b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b28: 0xc09a364  jal         func_268D90
    ctx->pc = 0x203B28u;
    SET_GPR_U32(ctx, 31, 0x203B30u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x203B28u, 0x203B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B30u;
label_203b30:
    // 0x203b30: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x203b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x203b34: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203b38: 0x24820154  addiu       $v0, $a0, 0x154
    ctx->pc = 0x203b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x203b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b40: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203b44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b48: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x203B48u;
    SET_GPR_U32(ctx, 31, 0x203B50u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x203B48u, 0x203B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B50u;
label_203b50:
    // 0x203b50: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x203b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x203b54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x203b58: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x203b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x203b5c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x203B5Cu;
    SET_GPR_U32(ctx, 31, 0x203B64u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x203B5Cu, 0x203B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B64u;
label_203b64:
    // 0x203b64: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x203b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203b68: 0x24850154  addiu       $a1, $a0, 0x154
    ctx->pc = 0x203b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x203b6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b74: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x203B74u;
    SET_GPR_U32(ctx, 31, 0x203B7Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x203B74u, 0x203B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B7Cu;
label_203b7c:
    // 0x203b7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x203b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x203b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203b84: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x203b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x203b88: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x203b8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x203b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203b90: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x203b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203b98: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x203b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x203b9c: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x203b9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ba4: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x203BA4u;
    SET_GPR_U32(ctx, 31, 0x203BACu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x203BA4u, 0x203BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BACu;
label_203bac:
    // 0x203bac: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x203BACu;
    SET_GPR_U32(ctx, 31, 0x203BB4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x203BACu, 0x203BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BB4u;
label_203bb4:
    // 0x203bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bb8: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x203BB8u;
    SET_GPR_U32(ctx, 31, 0x203BC0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x203BB8u, 0x203BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BC0u;
label_203bc0:
    // 0x203bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bc4: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x203bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x203bc8: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x203bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203bcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bd4: 0x247100c0  addiu       $s1, $v1, 0xC0
    ctx->pc = 0x203bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x203bd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x203bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203be0: 0xc0b43b8  jal         func_2D0EE0
    ctx->pc = 0x203BE0u;
    SET_GPR_U32(ctx, 31, 0x203BE8u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x203BE0u, 0x203BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BE8u;
label_203be8:
    // 0x203be8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x203BE8u;
    {
        const bool branch_taken_0x203be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203be8) {
            ctx->pc = 0x203CACu;
            goto label_203cac;
        }
    }
    ctx->pc = 0x203BF0u;
label_203bf0:
    // 0x203bf0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x203bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bfc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x203bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x203c00: 0xc085538  jal         func_2154E0
    ctx->pc = 0x203C00u;
    SET_GPR_U32(ctx, 31, 0x203C08u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x203C00u, 0x203C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C08u;
label_203c08:
    // 0x203c08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c0c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x203c0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x203c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x203c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c1c: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x203C1Cu;
    SET_GPR_U32(ctx, 31, 0x203C24u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x203C1Cu, 0x203C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C24u;
label_203c24:
    // 0x203c24: 0xc090864  jal         func_242190
    ctx->pc = 0x203C24u;
    SET_GPR_U32(ctx, 31, 0x203C2Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x203C24u, 0x203C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C2Cu;
label_203c2c:
    // 0x203c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c30: 0xc0905a0  jal         func_241680
    ctx->pc = 0x203C30u;
    SET_GPR_U32(ctx, 31, 0x203C38u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x203C30u, 0x203C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C38u;
label_203c38:
    // 0x203c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c3c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x203c3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x203c40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203C88u;
            goto label_203c88;
        }
    }
    ctx->pc = 0x203C4Cu;
label_203c4c:
    // 0x203c4c: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x203c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203c50: 0x24a20154  addiu       $v0, $a1, 0x154
    ctx->pc = 0x203c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 340));
    // 0x203c54: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x203c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x203c58: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x203c58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x203c5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c60: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x203C60u;
    SET_GPR_U32(ctx, 31, 0x203C68u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x203C60u, 0x203C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C68u;
label_203c68:
    // 0x203c68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x203c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x203c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x203c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c74: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x203C74u;
    SET_GPR_U32(ctx, 31, 0x203C7Cu);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x203C74u, 0x203C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C7Cu;
label_203c7c:
    // 0x203c7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203c80: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x203c84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x203c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203c88:
    // 0x203c88: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x203c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x203c8c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x203C8Cu;
    {
        const bool branch_taken_0x203c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203c8c) {
            ctx->pc = 0x203C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203c4c;
        }
    }
    ctx->pc = 0x203C94u;
    // 0x203c94: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x203c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x203c98: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
    // 0x203c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203ca0: 0xc068454  jal         func_1A1150
    ctx->pc = 0x203CA0u;
    SET_GPR_U32(ctx, 31, 0x203CA8u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x203CA0u, 0x203CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203CA8u;
label_203ca8:
    // 0x203ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203cac:
    // 0x203cac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x203cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x203cb0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x203cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203cb4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x203cb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203cb8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x203cb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203cbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x203cbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203cc0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x203cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203cc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x203cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203cc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x203cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203ccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x203cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203cd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x203cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x203cd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x203cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x203cdc: 0x27bd0320  addiu       $sp, $sp, 0x320
    ctx->pc = 0x203cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x203ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x203CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203CE8u;
    // 0x203ce8: 0x0  nop
    ctx->pc = 0x203ce8u;
    // NOP
    // 0x203cec: 0x0  nop
    ctx->pc = 0x203cecu;
    // NOP
    ctx->pc = 0x203cf0u;
}
