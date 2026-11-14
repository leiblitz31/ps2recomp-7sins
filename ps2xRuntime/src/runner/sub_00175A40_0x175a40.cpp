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

// Function: sub_00175A40
// Address: 0x175a40 - 0x176c60
void sub_00175A40_0x175a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A40_0x175a40");
#endif

    switch (ctx->pc) {
        case 0x175a90u: goto label_175a90;
        case 0x175aa4u: goto label_175aa4;
        case 0x175ab4u: goto label_175ab4;
        case 0x175ac0u: goto label_175ac0;
        case 0x175adcu: goto label_175adc;
        case 0x175b18u: goto label_175b18;
        case 0x175b24u: goto label_175b24;
        case 0x175b3cu: goto label_175b3c;
        case 0x175b98u: goto label_175b98;
        case 0x175bc4u: goto label_175bc4;
        case 0x175ce8u: goto label_175ce8;
        case 0x175d00u: goto label_175d00;
        case 0x175d14u: goto label_175d14;
        case 0x175d30u: goto label_175d30;
        case 0x175d44u: goto label_175d44;
        case 0x175d60u: goto label_175d60;
        case 0x175d74u: goto label_175d74;
        case 0x175da0u: goto label_175da0;
        case 0x175db4u: goto label_175db4;
        case 0x175dd8u: goto label_175dd8;
        case 0x175decu: goto label_175dec;
        case 0x175e1cu: goto label_175e1c;
        case 0x175e34u: goto label_175e34;
        case 0x175e4cu: goto label_175e4c;
        case 0x175e64u: goto label_175e64;
        case 0x175e78u: goto label_175e78;
        case 0x175e8cu: goto label_175e8c;
        case 0x175ea0u: goto label_175ea0;
        case 0x175ec0u: goto label_175ec0;
        case 0x175f10u: goto label_175f10;
        case 0x175f40u: goto label_175f40;
        case 0x175f54u: goto label_175f54;
        case 0x175f74u: goto label_175f74;
        case 0x175f8cu: goto label_175f8c;
        case 0x175ffcu: goto label_175ffc;
        case 0x17601cu: goto label_17601c;
        case 0x176048u: goto label_176048;
        case 0x17605cu: goto label_17605c;
        case 0x176084u: goto label_176084;
        case 0x1760b8u: goto label_1760b8;
        case 0x1760ecu: goto label_1760ec;
        case 0x176124u: goto label_176124;
        case 0x176154u: goto label_176154;
        case 0x176184u: goto label_176184;
        case 0x1761a0u: goto label_1761a0;
        case 0x1761c4u: goto label_1761c4;
        case 0x1761d8u: goto label_1761d8;
        case 0x1761f8u: goto label_1761f8;
        case 0x17620cu: goto label_17620c;
        case 0x176274u: goto label_176274;
        case 0x176294u: goto label_176294;
        case 0x1762c8u: goto label_1762c8;
        case 0x1762dcu: goto label_1762dc;
        case 0x176308u: goto label_176308;
        case 0x17633cu: goto label_17633c;
        case 0x176374u: goto label_176374;
        case 0x1763acu: goto label_1763ac;
        case 0x1763e0u: goto label_1763e0;
        case 0x176414u: goto label_176414;
        case 0x17642cu: goto label_17642c;
        case 0x176448u: goto label_176448;
        case 0x176464u: goto label_176464;
        case 0x176480u: goto label_176480;
        case 0x1764a4u: goto label_1764a4;
        case 0x1764e4u: goto label_1764e4;
        case 0x176514u: goto label_176514;
        case 0x176528u: goto label_176528;
        case 0x176538u: goto label_176538;
        case 0x17655cu: goto label_17655c;
        case 0x17656cu: goto label_17656c;
        case 0x176580u: goto label_176580;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765c8u: goto label_1765c8;
        case 0x1765d8u: goto label_1765d8;
        case 0x1765fcu: goto label_1765fc;
        case 0x176620u: goto label_176620;
        case 0x17663cu: goto label_17663c;
        case 0x17665cu: goto label_17665c;
        case 0x176674u: goto label_176674;
        case 0x17668cu: goto label_17668c;
        case 0x1766c0u: goto label_1766c0;
        case 0x1766dcu: goto label_1766dc;
        case 0x176710u: goto label_176710;
        case 0x176760u: goto label_176760;
        case 0x17679cu: goto label_17679c;
        case 0x1767e4u: goto label_1767e4;
        case 0x17681cu: goto label_17681c;
        case 0x176884u: goto label_176884;
        case 0x1768b8u: goto label_1768b8;
        case 0x1768e0u: goto label_1768e0;
        case 0x17691cu: goto label_17691c;
        case 0x17692cu: goto label_17692c;
        case 0x176948u: goto label_176948;
        case 0x17697cu: goto label_17697c;
        case 0x17699cu: goto label_17699c;
        case 0x1769b4u: goto label_1769b4;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769f8u: goto label_1769f8;
        case 0x176a24u: goto label_176a24;
        case 0x176a38u: goto label_176a38;
        case 0x176aa8u: goto label_176aa8;
        case 0x176ae0u: goto label_176ae0;
        case 0x176b2cu: goto label_176b2c;
        case 0x176b74u: goto label_176b74;
        case 0x176bb4u: goto label_176bb4;
        case 0x176c08u: goto label_176c08;
        default: break;
    }

    ctx->pc = 0x175a40u;

    // 0x175a40: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x175a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x175a44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x175a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x175a48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x175a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x175a4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x175a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x175a50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x175a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x175a54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x175a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175a5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175a60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175a6c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x175a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x175a70: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x175a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
    // 0x175a74: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x175a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
    // 0x175a78: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x175a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x175a7c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x175a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x175a80: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x175a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x175a84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x175a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a88: 0xc085538  jal         func_2154E0
    ctx->pc = 0x175A88u;
    SET_GPR_U32(ctx, 31, 0x175A90u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x175A88u, 0x175A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A90u;
label_175a90:
    // 0x175a90: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x175a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x175a94: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x175a98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a9c: 0xc0984a4  jal         func_261290
    ctx->pc = 0x175A9Cu;
    SET_GPR_U32(ctx, 31, 0x175AA4u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x175A9Cu, 0x175AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AA4u;
label_175aa4:
    // 0x175aa4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x175aa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175aa8: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x175aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x175aac: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x175AACu;
    SET_GPR_U32(ctx, 31, 0x175AB4u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x175AACu, 0x175AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AB4u;
label_175ab4:
    // 0x175ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ab8: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x175AB8u;
    SET_GPR_U32(ctx, 31, 0x175AC0u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x175AB8u, 0x175AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AC0u;
label_175ac0:
    // 0x175ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ac4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x175ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x175ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175acc: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x175accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x175ad0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x175ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ad4: 0xc0b065c  jal         func_2C1970
    ctx->pc = 0x175AD4u;
    SET_GPR_U32(ctx, 31, 0x175ADCu);
    ctx->pc = 0x2C1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1970u, 0x175AD4u, 0x175ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175ADCu;
label_175adc:
    // 0x175adc: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x175ae0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x175ae0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175ae4: 0x0  nop
    ctx->pc = 0x175ae4u;
    // NOP
    // 0x175ae8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x175ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175aec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x175AECu;
    {
        const bool branch_taken_0x175aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175aec) {
            ctx->pc = 0x175B0Cu;
            goto label_175b0c;
        }
    }
    ctx->pc = 0x175AF4u;
    // 0x175af4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x175af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175afc: 0x0  nop
    ctx->pc = 0x175afcu;
    // NOP
    // 0x175b00: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x175b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x175b04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x175B04u;
    {
        const bool branch_taken_0x175b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b04) {
            ctx->pc = 0x175B40u;
            goto label_175b40;
        }
    }
    ctx->pc = 0x175B0Cu;
label_175b0c:
    // 0x175b0c: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x175b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x175b10: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x175B10u;
    SET_GPR_U32(ctx, 31, 0x175B18u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x175B10u, 0x175B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B18u;
label_175b18:
    // 0x175b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b1c: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x175B1Cu;
    SET_GPR_U32(ctx, 31, 0x175B24u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x175B1Cu, 0x175B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B24u;
label_175b24:
    // 0x175b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b28: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x175b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x175b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b30: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x175b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x175b34: 0xc0b065c  jal         func_2C1970
    ctx->pc = 0x175B34u;
    SET_GPR_U32(ctx, 31, 0x175B3Cu);
    ctx->pc = 0x2C1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1970u, 0x175B34u, 0x175B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B3Cu;
label_175b3c:
    // 0x175b3c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x175b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_175b40:
    // 0x175b40: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x175b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175b44: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x175b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x175b48: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x175b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x175b4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x175b4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175b50: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x175b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175b54: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x175b54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x175b58: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x175b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x175b5c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x175b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175b60: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x175b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175b64: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x175b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175b68: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x175b68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175b6c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x175B6Cu;
    {
        const bool branch_taken_0x175b6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x175b6c) {
            ctx->pc = 0x175BC4u;
            goto label_175bc4;
        }
    }
    ctx->pc = 0x175B74u;
    // 0x175b74: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x175b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175b78: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175b7c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x175b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x175b80: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x175b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175b84: 0x24c70058  addiu       $a3, $a2, 0x58
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x175b88: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x175b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b8c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x175b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x175b90: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175B90u;
    SET_GPR_U32(ctx, 31, 0x175B98u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175B90u, 0x175B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B98u;
label_175b98:
    // 0x175b98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175b9c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175ba0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175ba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x175ba8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x175ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175bac: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x175bb0: 0xc44c0080  lwc1        $f12, 0x80($v0)
    ctx->pc = 0x175bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x175bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175bbc: 0xc08c544  jal         func_231510
    ctx->pc = 0x175BBCu;
    SET_GPR_U32(ctx, 31, 0x175BC4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x175BBCu, 0x175BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175BC4u;
label_175bc4:
    // 0x175bc4: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x175bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175bc8: 0xc78082a4  lwc1        $f0, -0x7D5C($gp)
    ctx->pc = 0x175bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175bcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175bccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175bd0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175BD0u;
    {
        const bool branch_taken_0x175bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175bd0) {
            ctx->pc = 0x175BE8u;
            goto label_175be8;
        }
    }
    ctx->pc = 0x175BD8u;
    // 0x175bd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x175bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175bdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x175bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175be0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x175BE0u;
    {
        const bool branch_taken_0x175be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175be0) {
            ctx->pc = 0x175C88u;
            goto label_175c88;
        }
    }
    ctx->pc = 0x175BE8u;
label_175be8:
    // 0x175be8: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x175be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175bec: 0xc7808268  lwc1        $f0, -0x7D98($gp)
    ctx->pc = 0x175becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175bf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175bf4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175BF4u;
    {
        const bool branch_taken_0x175bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175bf4) {
            ctx->pc = 0x175C0Cu;
            goto label_175c0c;
        }
    }
    ctx->pc = 0x175BFCu;
    // 0x175bfc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x175bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175c00: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x175c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x175C04u;
    {
        const bool branch_taken_0x175c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c04) {
            ctx->pc = 0x175C88u;
            goto label_175c88;
        }
    }
    ctx->pc = 0x175C0Cu;
label_175c0c:
    // 0x175c0c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x175c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c10: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x175c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175c18: 0x0  nop
    ctx->pc = 0x175c18u;
    // NOP
    // 0x175c1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175C20u;
    {
        const bool branch_taken_0x175c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175c20) {
            ctx->pc = 0x175C38u;
            goto label_175c38;
        }
    }
    ctx->pc = 0x175C28u;
    // 0x175c28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x175c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175c2c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x175c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x175C30u;
    {
        const bool branch_taken_0x175c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c30) {
            ctx->pc = 0x175C88u;
            goto label_175c88;
        }
    }
    ctx->pc = 0x175C38u;
label_175c38:
    // 0x175c38: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x175c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c3c: 0xc78082a8  lwc1        $f0, -0x7D58($gp)
    ctx->pc = 0x175c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175C44u;
    {
        const bool branch_taken_0x175c44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175c44) {
            ctx->pc = 0x175C5Cu;
            goto label_175c5c;
        }
    }
    ctx->pc = 0x175C4Cu;
    // 0x175c4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175c50: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x175c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x175C54u;
    {
        const bool branch_taken_0x175c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c54) {
            ctx->pc = 0x175C88u;
            goto label_175c88;
        }
    }
    ctx->pc = 0x175C5Cu;
label_175c5c:
    // 0x175c5c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x175c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175c60: 0xc78082ac  lwc1        $f0, -0x7D54($gp)
    ctx->pc = 0x175c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x175c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175c68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x175C68u;
    {
        const bool branch_taken_0x175c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175c68) {
            ctx->pc = 0x175C80u;
            goto label_175c80;
        }
    }
    ctx->pc = 0x175C70u;
    // 0x175c70: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x175c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175c74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175C78u;
    {
        const bool branch_taken_0x175c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c78) {
            ctx->pc = 0x175C88u;
            goto label_175c88;
        }
    }
    ctx->pc = 0x175C80u;
label_175c80:
    // 0x175c80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x175c84: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x175c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_175c88:
    // 0x175c88: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175c8c: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x175c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x175c90: 0x1071032d  beq         $v1, $s1, . + 4 + (0x32D << 2)
    ctx->pc = 0x175C90u;
    {
        const bool branch_taken_0x175c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x175c90) {
            ctx->pc = 0x176948u;
            goto label_176948;
        }
    }
    ctx->pc = 0x175C98u;
    // 0x175c98: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175c9c: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x175c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x175ca0: 0xd1082b  sltu        $at, $a2, $s1
    ctx->pc = 0x175ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x175ca4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x175CA4u;
    {
        const bool branch_taken_0x175ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175ca4) {
            ctx->pc = 0x175CC0u;
            goto label_175cc0;
        }
    }
    ctx->pc = 0x175CACu;
    // 0x175cac: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x175cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x175cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175cb4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x175cb4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175CB8u;
    {
        const bool branch_taken_0x175cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cb8) {
            ctx->pc = 0x175CC8u;
            goto label_175cc8;
        }
    }
    ctx->pc = 0x175CC0u;
label_175cc0:
    // 0x175cc0: 0x2410001b  addiu       $s0, $zero, 0x1B
    ctx->pc = 0x175cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x175cc4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x175cc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175cc8:
    // 0x175cc8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x175cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175ccc: 0xacb10084  sw          $s1, 0x84($a1)
    ctx->pc = 0x175cccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 17));
    // 0x175cd0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175cd4: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x175cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x175cd8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x175cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cdc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175ce0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175CE0u;
    SET_GPR_U32(ctx, 31, 0x175CE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175CE0u, 0x175CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175CE8u;
label_175ce8:
    // 0x175ce8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175cec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175cf0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x175cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x175cf4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x175cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x175cf8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x175CF8u;
    SET_GPR_U32(ctx, 31, 0x175D00u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x175CF8u, 0x175D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D00u;
label_175d00:
    // 0x175d00: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175d04: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x175d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x175d08: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x175d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x175d0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175D0Cu;
    SET_GPR_U32(ctx, 31, 0x175D14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175D0Cu, 0x175D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D14u;
label_175d14:
    // 0x175d14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175d18: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175d1c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x175d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x175d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d24: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x175d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x175d28: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x175D28u;
    SET_GPR_U32(ctx, 31, 0x175D30u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x175D28u, 0x175D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D30u;
label_175d30:
    // 0x175d30: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175d34: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x175d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x175d38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x175d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175d3c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175D3Cu;
    SET_GPR_U32(ctx, 31, 0x175D44u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175D3Cu, 0x175D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D44u;
label_175d44:
    // 0x175d44: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x175d44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175d48: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175d4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x175d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175d50: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x175d54: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x175d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d58: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x175D58u;
    SET_GPR_U32(ctx, 31, 0x175D60u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x175D58u, 0x175D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D60u;
label_175d60:
    // 0x175d60: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x175d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175d64: 0x24a40064  addiu       $a0, $a1, 0x64
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x175d68: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x175d6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175D6Cu;
    SET_GPR_U32(ctx, 31, 0x175D74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175D6Cu, 0x175D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D74u;
label_175d74:
    // 0x175d74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175d78: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175d7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175d80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x175d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175d84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x175d88: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x175d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175d8c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x175d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175d98: 0xc08c544  jal         func_231510
    ctx->pc = 0x175D98u;
    SET_GPR_U32(ctx, 31, 0x175DA0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x175D98u, 0x175DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DA0u;
label_175da0:
    // 0x175da0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175da4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x175da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x175da8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x175da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x175dac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175DACu;
    SET_GPR_U32(ctx, 31, 0x175DB4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175DACu, 0x175DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DB4u;
label_175db4:
    // 0x175db4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175db8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175dbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x175dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175dc0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x175dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175dc4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x175dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175dc8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x175dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175dcc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x175dd0: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x175DD0u;
    SET_GPR_U32(ctx, 31, 0x175DD8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x175DD0u, 0x175DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DD8u;
label_175dd8:
    // 0x175dd8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175ddc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x175ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x175de0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x175de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x175de4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175DE4u;
    SET_GPR_U32(ctx, 31, 0x175DECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175DE4u, 0x175DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175DECu;
label_175dec:
    // 0x175dec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175df0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175df4: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x175df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175df8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x175df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175dfc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x175dfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x175e00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175e04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175e08: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x175e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x175e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175e14: 0xc08c544  jal         func_231510
    ctx->pc = 0x175E14u;
    SET_GPR_U32(ctx, 31, 0x175E1Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x175E14u, 0x175E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E1Cu;
label_175e1c:
    // 0x175e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175e20: 0x0  nop
    ctx->pc = 0x175e20u;
    // NOP
    // 0x175e24: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x175e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x175e28: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x175e2c: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x175E2Cu;
    SET_GPR_U32(ctx, 31, 0x175E34u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x175E2Cu, 0x175E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E34u;
label_175e34:
    // 0x175e34: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175e38: 0x24a60058  addiu       $a2, $a1, 0x58
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x175e3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x175e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e40: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x175e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x175e44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175E44u;
    SET_GPR_U32(ctx, 31, 0x175E4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175E44u, 0x175E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E4Cu;
label_175e4c:
    // 0x175e4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175e50: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175e54: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x175e58: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x175e5c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x175E5Cu;
    SET_GPR_U32(ctx, 31, 0x175E64u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x175E5Cu, 0x175E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E64u;
label_175e64:
    // 0x175e64: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x175e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175e68: 0x24c40058  addiu       $a0, $a2, 0x58
    ctx->pc = 0x175e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x175e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e70: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175E70u;
    SET_GPR_U32(ctx, 31, 0x175E78u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175E70u, 0x175E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E78u;
label_175e78:
    // 0x175e78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175e7c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175e80: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x175e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x175e84: 0xc08c910  jal         func_232440
    ctx->pc = 0x175E84u;
    SET_GPR_U32(ctx, 31, 0x175E8Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x175E84u, 0x175E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E8Cu;
label_175e8c:
    // 0x175e8c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x175e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175e90: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x175e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x175e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175E98u;
    SET_GPR_U32(ctx, 31, 0x175EA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175E98u, 0x175EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EA0u;
label_175ea0:
    // 0x175ea0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175ea4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x175ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175ea8: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x175ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x175eac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x175eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175eb0: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x175eb4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x175eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175eb8: 0xc08c688  jal         func_231A20
    ctx->pc = 0x175EB8u;
    SET_GPR_U32(ctx, 31, 0x175EC0u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x175EB8u, 0x175EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EC0u;
label_175ec0:
    // 0x175ec0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x175ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x175ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x175ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175ec8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x175ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175ecc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x175eccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x175ed0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x175ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x175ed4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x175ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x175ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x175ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175edc: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x175edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175ee0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x175ee0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x175ee4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x175ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x175ee8: 0x32e400ff  andi        $a0, $s7, 0xFF
    ctx->pc = 0x175ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x175eec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ef0: 0x148500a6  bne         $a0, $a1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x175EF0u;
    {
        const bool branch_taken_0x175ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x175ef0) {
            ctx->pc = 0x17618Cu;
            goto label_17618c;
        }
    }
    ctx->pc = 0x175EF8u;
    // 0x175ef8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175efc: 0x24430058  addiu       $v1, $v0, 0x58
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x175f00: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x175f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175F08u;
    SET_GPR_U32(ctx, 31, 0x175F10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175F08u, 0x175F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F10u;
label_175f10:
    // 0x175f10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175f14: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x175f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175f18: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x175f18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x175f1c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x175f1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175f20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175f24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x175f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175f28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175f2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x175f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175f30: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x175f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x175f34: 0xc78f80ac  lwc1        $f15, -0x7F54($gp)
    ctx->pc = 0x175f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x175f38: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x175F38u;
    SET_GPR_U32(ctx, 31, 0x175F40u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x175F38u, 0x175F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F40u;
label_175f40:
    // 0x175f40: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175f44: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x175f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x175f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f4c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175F4Cu;
    SET_GPR_U32(ctx, 31, 0x175F54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175F4Cu, 0x175F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F54u;
label_175f54:
    // 0x175f54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175f58: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x175f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175f5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x175f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x175f60: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x175f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x175f64: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x175f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x175f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f6c: 0xc08c64c  jal         func_231930
    ctx->pc = 0x175F6Cu;
    SET_GPR_U32(ctx, 31, 0x175F74u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x175F6Cu, 0x175F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F74u;
label_175f74:
    // 0x175f74: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x175f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175f78: 0x24c70058  addiu       $a3, $a2, 0x58
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x175f7c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x175f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x175F84u;
    SET_GPR_U32(ctx, 31, 0x175F8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175F84u, 0x175F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175F8Cu;
label_175f8c:
    // 0x175f8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x175f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175f90: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x175f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x175f94: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x175F94u;
    {
        const bool branch_taken_0x175f94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x175f94) {
            ctx->pc = 0x175FB0u;
            goto label_175fb0;
        }
    }
    ctx->pc = 0x175F9Cu;
    // 0x175f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175fa0: 0x0  nop
    ctx->pc = 0x175fa0u;
    // NOP
    // 0x175fa4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x175fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x175fa8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175FA8u;
    {
        const bool branch_taken_0x175fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fa8) {
            ctx->pc = 0x175FCCu;
            goto label_175fcc;
        }
    }
    ctx->pc = 0x175FB0u;
label_175fb0:
    // 0x175fb0: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x175fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x175fb4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x175fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x175fb8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x175fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x175fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175fc0: 0x0  nop
    ctx->pc = 0x175fc0u;
    // NOP
    // 0x175fc4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x175fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x175fc8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x175fc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_175fcc:
    // 0x175fcc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x175fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x175fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x175fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175fd4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x175fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175fd8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x175fd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x175fdc: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x175fdcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x175fe0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x175fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x175fe4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x175fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x175fe8: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x175fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x175fec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x175fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ff0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ff4: 0xc08c208  jal         func_230820
    ctx->pc = 0x175FF4u;
    SET_GPR_U32(ctx, 31, 0x175FFCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x175FF4u, 0x175FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FFCu;
label_175ffc:
    // 0x175ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176000: 0xa3a3015f  sb          $v1, 0x15F($sp)
    ctx->pc = 0x176000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 3));
    // 0x176004: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176008: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x17600c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x17600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176014: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176014u;
    SET_GPR_U32(ctx, 31, 0x17601Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176014u, 0x17601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17601Cu;
label_17601c:
    // 0x17601c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17601cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176020: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176024: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176028: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17602c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17602cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176030: 0x27a7015f  addiu       $a3, $sp, 0x15F
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 351));
    // 0x176034: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17603c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17603cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176040: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176040u;
    SET_GPR_U32(ctx, 31, 0x176048u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176040u, 0x176048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176048u;
label_176048:
    // 0x176048: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x176048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x17604c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176050: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x176050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x176054: 0xc05db24  jal         func_176C90
    ctx->pc = 0x176054u;
    SET_GPR_U32(ctx, 31, 0x17605Cu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x176054u, 0x17605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17605Cu;
label_17605c:
    // 0x17605c: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x17605cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
    // 0x176060: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x176060u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176064: 0x0  nop
    ctx->pc = 0x176064u;
    // NOP
    // 0x176068: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x176068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x17606c: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x17606cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176070: 0x24c70058  addiu       $a3, $a2, 0x58
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x176074: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x176074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17607c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17607Cu;
    SET_GPR_U32(ctx, 31, 0x176084u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17607Cu, 0x176084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176084u;
label_176084:
    // 0x176084: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x176084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176088: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17608c: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x17608cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x176090: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x176090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176094: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x176098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17609c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x17609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1760a0: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1760a4: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1760a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1760a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1760a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1760acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760b0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1760B0u;
    SET_GPR_U32(ctx, 31, 0x1760B8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1760B0u, 0x1760B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760B8u;
label_1760b8:
    // 0x1760b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1760b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1760bc: 0x0  nop
    ctx->pc = 0x1760bcu;
    // NOP
    // 0x1760c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1760c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1760c4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1760c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1760c8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1760c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1760cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1760ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1760d0: 0x0  nop
    ctx->pc = 0x1760d0u;
    // NOP
    // 0x1760d4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1760d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1760d8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1760d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1760dc: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x1760dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1760e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1760e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760e4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1760E4u;
    SET_GPR_U32(ctx, 31, 0x1760ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1760E4u, 0x1760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760ECu;
label_1760ec:
    // 0x1760ec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760f0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1760f4: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x1760f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x1760f8: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1760f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1760fc: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1760fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x176100: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x176100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176104: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x176104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176108: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17610c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x176110: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176118: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17611c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17611Cu;
    SET_GPR_U32(ctx, 31, 0x176124u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17611Cu, 0x176124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176124u;
label_176124:
    // 0x176124: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x176124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176128: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x176128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x17612c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17612cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176130: 0x0  nop
    ctx->pc = 0x176130u;
    // NOP
    // 0x176134: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x176134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176138: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x176138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x17613c: 0xa3a0015f  sb          $zero, 0x15F($sp)
    ctx->pc = 0x17613cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 0));
    // 0x176140: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x176140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176144: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x176144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x176148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17614c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17614Cu;
    SET_GPR_U32(ctx, 31, 0x176154u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17614Cu, 0x176154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176154u;
label_176154:
    // 0x176154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x176154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176158: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x176158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17615c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x17615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176160: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176164: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x176164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x176168: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x176168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17616c: 0x27a7015f  addiu       $a3, $sp, 0x15F
    ctx->pc = 0x17616cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 351));
    // 0x176170: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176174: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176178: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17617c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17617Cu;
    SET_GPR_U32(ctx, 31, 0x176184u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17617Cu, 0x176184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176184u;
label_176184:
    // 0x176184: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x176184u;
    {
        const bool branch_taken_0x176184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176184) {
            ctx->pc = 0x176414u;
            goto label_176414;
        }
    }
    ctx->pc = 0x17618Cu;
label_17618c:
    // 0x17618c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x17618cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176190: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x176190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x176194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176198: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176198u;
    SET_GPR_U32(ctx, 31, 0x1761A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176198u, 0x1761A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761A0u;
label_1761a0:
    // 0x1761a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1761a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1761a4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1761a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1761a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1761a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1761ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1761acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1761b0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1761b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1761b4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1761b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1761b8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1761bc: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x1761BCu;
    SET_GPR_U32(ctx, 31, 0x1761C4u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1761BCu, 0x1761C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761C4u;
label_1761c4:
    // 0x1761c4: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x1761c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1761c8: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x1761c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1761cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1761ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1761D0u;
    SET_GPR_U32(ctx, 31, 0x1761D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1761D0u, 0x1761D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761D8u;
label_1761d8:
    // 0x1761d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1761d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1761dc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1761dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1761e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1761e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1761e4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1761e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1761e8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1761e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1761ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1761ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761f0: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1761F0u;
    SET_GPR_U32(ctx, 31, 0x1761F8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1761F0u, 0x1761F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761F8u;
label_1761f8:
    // 0x1761f8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1761f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1761fc: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x1761fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x176200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176204: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176204u;
    SET_GPR_U32(ctx, 31, 0x17620Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176204u, 0x17620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17620Cu;
label_17620c:
    // 0x17620c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176210: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x176210u;
    {
        const bool branch_taken_0x176210 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x176210) {
            ctx->pc = 0x17622Cu;
            goto label_17622c;
        }
    }
    ctx->pc = 0x176218u;
    // 0x176218: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x176218u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17621c: 0x0  nop
    ctx->pc = 0x17621cu;
    // NOP
    // 0x176220: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x176220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x176224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x176224u;
    {
        const bool branch_taken_0x176224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176224) {
            ctx->pc = 0x176248u;
            goto label_176248;
        }
    }
    ctx->pc = 0x17622Cu;
label_17622c:
    // 0x17622c: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x17622cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x176230: 0x32260001  andi        $a2, $s1, 0x1
    ctx->pc = 0x176230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x176234: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x176234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x176238: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x176238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17623c: 0x0  nop
    ctx->pc = 0x17623cu;
    // NOP
    // 0x176240: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x176240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x176244: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x176244u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_176248:
    // 0x176248: 0x3c0740c0  lui         $a3, 0x40C0
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16576 << 16));
    // 0x17624c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17624cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176250: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x176250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176254: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x176254u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x176258: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x176258u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17625c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x17625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176260: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176264: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x176264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x176268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17626c: 0xc08c208  jal         func_230820
    ctx->pc = 0x17626Cu;
    SET_GPR_U32(ctx, 31, 0x176274u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x17626Cu, 0x176274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176274u;
label_176274:
    // 0x176274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176278: 0xa3a2015f  sb          $v0, 0x15F($sp)
    ctx->pc = 0x176278u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 2));
    // 0x17627c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x17627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176280: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x176280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x176284: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x176284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176288: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17628c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17628Cu;
    SET_GPR_U32(ctx, 31, 0x176294u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17628Cu, 0x176294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176294u;
label_176294:
    // 0x176294: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x176294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176298: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17629c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17629cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1762a0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1762a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1762a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1762a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1762a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762ac: 0x27a2015f  addiu       $v0, $sp, 0x15F
    ctx->pc = 0x1762acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 351));
    // 0x1762b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1762b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762b4: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1762b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1762b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1762b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1762bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762c0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1762C0u;
    SET_GPR_U32(ctx, 31, 0x1762C8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1762C0u, 0x1762C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762C8u;
label_1762c8:
    // 0x1762c8: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1762cc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1762ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762d0: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1762d4: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1762D4u;
    SET_GPR_U32(ctx, 31, 0x1762DCu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1762D4u, 0x1762DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762DCu;
label_1762dc:
    // 0x1762dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1762dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762e0: 0x3c0443b4  lui         $a0, 0x43B4
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17332 << 16));
    // 0x1762e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1762e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1762e8: 0x0  nop
    ctx->pc = 0x1762e8u;
    // NOP
    // 0x1762ec: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1762ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1762f0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1762f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1762f4: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1762f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1762f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1762f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1762fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176300: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176300u;
    SET_GPR_U32(ctx, 31, 0x176308u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176300u, 0x176308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176308u;
label_176308:
    // 0x176308: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x176308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17630c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x17630cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176310: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x176310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x176314: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x176314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176318: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x176318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17631c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176320: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x176320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x176324: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x176324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x176328: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17632c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17632cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176334: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176334u;
    SET_GPR_U32(ctx, 31, 0x17633Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176334u, 0x17633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17633Cu;
label_17633c:
    // 0x17633c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176340: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176348: 0x0  nop
    ctx->pc = 0x176348u;
    // NOP
    // 0x17634c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x17634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x176350: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x176350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176354: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176358: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x176358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17635c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x176360: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x176360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176364: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x176364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x176368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x176368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17636c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17636Cu;
    SET_GPR_U32(ctx, 31, 0x176374u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17636Cu, 0x176374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176374u;
label_176374:
    // 0x176374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x176374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176378: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17637c: 0x3c073fc0  lui         $a3, 0x3FC0
    ctx->pc = 0x17637cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
    // 0x176380: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x176380u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176384: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x176384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x176388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17638c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17638cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176390: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x176390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176394: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x176394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x176398: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17639c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17639cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1763a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763a4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1763A4u;
    SET_GPR_U32(ctx, 31, 0x1763ACu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1763A4u, 0x1763ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763ACu;
label_1763ac:
    // 0x1763ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1763acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763b0: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x1763b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1763b4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1763b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1763b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1763b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1763bc: 0x0  nop
    ctx->pc = 0x1763bcu;
    // NOP
    // 0x1763c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1763c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1763c4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1763c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1763c8: 0xa3a0015f  sb          $zero, 0x15F($sp)
    ctx->pc = 0x1763c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 0));
    // 0x1763cc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1763ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1763d0: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x1763d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1763d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1763d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1763D8u;
    SET_GPR_U32(ctx, 31, 0x1763E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1763D8u, 0x1763E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763E0u;
label_1763e0:
    // 0x1763e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1763e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1763e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1763e8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1763e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1763ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1763ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1763f0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1763f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1763f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1763f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1763f8: 0x27b0015f  addiu       $s0, $sp, 0x15F
    ctx->pc = 0x1763f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 351));
    // 0x1763fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1763fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176400: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17640c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17640Cu;
    SET_GPR_U32(ctx, 31, 0x176414u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17640Cu, 0x176414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176414u;
label_176414:
    // 0x176414: 0x8fb70160  lw          $s7, 0x160($sp)
    ctx->pc = 0x176414u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176418: 0x26f00064  addiu       $s0, $s7, 0x64
    ctx->pc = 0x176418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 100));
    // 0x17641c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176420: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x176420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x176424: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176424u;
    SET_GPR_U32(ctx, 31, 0x17642Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176424u, 0x17642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17642Cu;
label_17642c:
    // 0x17642c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176430: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x176430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176434: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x176434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x176438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17643c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17643cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176440: 0xc08c910  jal         func_232440
    ctx->pc = 0x176440u;
    SET_GPR_U32(ctx, 31, 0x176448u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x176440u, 0x176448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176448u;
label_176448:
    // 0x176448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17644c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x17644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176450: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x176454: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x176454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x176458: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x176458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17645c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17645Cu;
    SET_GPR_U32(ctx, 31, 0x176464u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17645Cu, 0x176464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176464u;
label_176464:
    // 0x176464: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176468: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17646c: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x176470: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x176470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176478: 0xc08c910  jal         func_232440
    ctx->pc = 0x176478u;
    SET_GPR_U32(ctx, 31, 0x176480u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x176478u, 0x176480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176484: 0x0  nop
    ctx->pc = 0x176484u;
    // NOP
    // 0x176488: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x176488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x17648c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x17648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176490: 0x24a40064  addiu       $a0, $a1, 0x64
    ctx->pc = 0x176490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x176494: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x176498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17649c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17649Cu;
    SET_GPR_U32(ctx, 31, 0x1764A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17649Cu, 0x1764A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764A4u;
label_1764a4:
    // 0x1764a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1764a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1764a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1764ac: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1764b0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1764b4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1764b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1764b8: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1764b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1764bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1764bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1764c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1764c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1764c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1764c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764cc: 0x27a7014c  addiu       $a3, $sp, 0x14C
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1764d0: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1764d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1764d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1764d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1764d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764dc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1764DCu;
    SET_GPR_U32(ctx, 31, 0x1764E4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1764DCu, 0x1764E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764E4u;
label_1764e4:
    // 0x1764e4: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x1764e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1764e8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1764ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1764ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1764f0: 0x0  nop
    ctx->pc = 0x1764f0u;
    // NOP
    // 0x1764f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1764f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1764f8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1764f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1764fc: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1764fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x176500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176504: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x176504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x176508: 0x24a54c10  addiu       $a1, $a1, 0x4C10
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
    // 0x17650c: 0xc040304  jal         func_100C10
    ctx->pc = 0x17650Cu;
    SET_GPR_U32(ctx, 31, 0x176514u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x17650Cu, 0x176514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176514u;
label_176514:
    // 0x176514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176518: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x17651c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176520: 0xc042514  jal         func_109450
    ctx->pc = 0x176520u;
    SET_GPR_U32(ctx, 31, 0x176528u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x176520u, 0x176528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176528u;
label_176528:
    // 0x176528: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x176528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17652c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x176530: 0xc05db18  jal         func_176C60
    ctx->pc = 0x176530u;
    SET_GPR_U32(ctx, 31, 0x176538u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x176530u, 0x176538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176538u;
label_176538:
    // 0x176538: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x176538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x17653c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x17653cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x176540: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176544: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x176548: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x176548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17654c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x176550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176554: 0xc041874  jal         func_1061D0
    ctx->pc = 0x176554u;
    SET_GPR_U32(ctx, 31, 0x17655Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x176554u, 0x17655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17655Cu;
label_17655c:
    // 0x17655c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x17655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x176560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176564: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x176564u;
    SET_GPR_U32(ctx, 31, 0x17656Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x176564u, 0x17656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17656Cu;
label_17656c:
    // 0x17656c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17656cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176570: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x176570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x176574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176578: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x176578u;
    SET_GPR_U32(ctx, 31, 0x176580u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x176578u, 0x176580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176580u;
label_176580:
    // 0x176580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176584: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x176584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x176588: 0xa7a2015c  sh          $v0, 0x15C($sp)
    ctx->pc = 0x176588u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x17658c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x17658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x176590: 0x97a2015c  lhu         $v0, 0x15C($sp)
    ctx->pc = 0x176590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x176594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176598: 0xc059640  jal         func_165900
    ctx->pc = 0x176598u;
    SET_GPR_U32(ctx, 31, 0x1765A0u);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x176598u, 0x1765A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765A0u;
label_1765a0:
    // 0x1765a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1765a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1765a4: 0x10440033  beq         $v0, $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1765A4u;
    {
        const bool branch_taken_0x1765a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1765a4) {
            ctx->pc = 0x176674u;
            goto label_176674;
        }
    }
    ctx->pc = 0x1765ACu;
    // 0x1765ac: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x1765acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
    // 0x1765b0: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x1765b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1765b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1765b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765b8: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1765b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1765bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1765bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765c0: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x1765C0u;
    SET_GPR_U32(ctx, 31, 0x1765C8u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x1765C0u, 0x1765C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765C8u;
label_1765c8:
    // 0x1765c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1765c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765cc: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1765ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1765d0: 0xc096950  jal         func_25A540
    ctx->pc = 0x1765D0u;
    SET_GPR_U32(ctx, 31, 0x1765D8u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x1765D0u, 0x1765D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765D8u;
label_1765d8:
    // 0x1765d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1765D8u;
    {
        const bool branch_taken_0x1765d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1765d8) {
            ctx->pc = 0x176608u;
            goto label_176608;
        }
    }
    ctx->pc = 0x1765E0u;
    // 0x1765e0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1765e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1765e4: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x1765e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1765e8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1765e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765ec: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1765ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1765f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1765f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765f4: 0xc05e764  jal         func_179D90
    ctx->pc = 0x1765F4u;
    SET_GPR_U32(ctx, 31, 0x1765FCu);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x1765F4u, 0x1765FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1765FCu;
label_1765fc:
    // 0x1765fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1765fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176600: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x176600u;
    {
        const bool branch_taken_0x176600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176600) {
            ctx->pc = 0x176660u;
            goto label_176660;
        }
    }
    ctx->pc = 0x176608u;
label_176608:
    // 0x176608: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x176608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x17660c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176610: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x176610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x176614: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x176614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x176618: 0xc05e764  jal         func_179D90
    ctx->pc = 0x176618u;
    SET_GPR_U32(ctx, 31, 0x176620u);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x176618u, 0x176620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176620u;
label_176620:
    // 0x176620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176624: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x176624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x176628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17662c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x17662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x176630: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x176630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x176634: 0xc05e764  jal         func_179D90
    ctx->pc = 0x176634u;
    SET_GPR_U32(ctx, 31, 0x17663Cu);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x176634u, 0x17663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17663Cu;
label_17663c:
    // 0x17663c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176640: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x176640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x176644: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x176644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176648: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x176648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x17664c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17664cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176650: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x176650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x176654: 0xc05e764  jal         func_179D90
    ctx->pc = 0x176654u;
    SET_GPR_U32(ctx, 31, 0x17665Cu);
    ctx->pc = 0x179D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D90u, 0x176654u, 0x17665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17665Cu;
label_17665c:
    // 0x17665c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17665cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176660:
    // 0x176660: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x176660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x176664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176668: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x176668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17666c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x17666Cu;
    SET_GPR_U32(ctx, 31, 0x176674u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x17666Cu, 0x176674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176674u;
label_176674:
    // 0x176674: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176678: 0x24820064  addiu       $v0, $a0, 0x64
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x17667c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176680: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x176680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x176684: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176684u;
    SET_GPR_U32(ctx, 31, 0x17668Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176684u, 0x17668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17668Cu;
label_17668c:
    // 0x17668c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17668cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176690: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176694: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x176694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176698: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17669c: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x17669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1766a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1766a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1766a8: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1766ac: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1766acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1766b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1766b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1766b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766b8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1766B8u;
    SET_GPR_U32(ctx, 31, 0x1766C0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1766B8u, 0x1766C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766C0u;
label_1766c0:
    // 0x1766c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1766c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1766c4: 0xa3a2015f  sb          $v0, 0x15F($sp)
    ctx->pc = 0x1766c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 2));
    // 0x1766c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1766c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1766cc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1766ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1766d0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1766d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1766D4u;
    SET_GPR_U32(ctx, 31, 0x1766DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1766D4u, 0x1766DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766DCu;
label_1766dc:
    // 0x1766dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1766e0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1766e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1766e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1766e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1766e8: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1766e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1766ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1766ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1766f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1766f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1766f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1766f8: 0x27a7015f  addiu       $a3, $sp, 0x15F
    ctx->pc = 0x1766f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 351));
    // 0x1766fc: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1766fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176708: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176708u;
    SET_GPR_U32(ctx, 31, 0x176710u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176708u, 0x176710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176710u;
label_176710:
    // 0x176710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176718: 0x0  nop
    ctx->pc = 0x176718u;
    // NOP
    // 0x17671c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x17671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176720: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x176720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x176724: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x176724u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176728: 0x0  nop
    ctx->pc = 0x176728u;
    // NOP
    // 0x17672c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x17672cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176730: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176738: 0x0  nop
    ctx->pc = 0x176738u;
    // NOP
    // 0x17673c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x17673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x176740: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x176740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176744: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x176744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x176748: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x176748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17674c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x17674cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x176750: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x176750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x176754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176758: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x176758u;
    SET_GPR_U32(ctx, 31, 0x176760u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x176758u, 0x176760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176760u;
label_176760:
    // 0x176760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176764: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x176764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x176768: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17676c: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x17676cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x176770: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x176770u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176774: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x176778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17677c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17677cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176780: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176784: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x176788: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17678c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17678cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176790: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176794: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176794u;
    SET_GPR_U32(ctx, 31, 0x17679Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176794u, 0x17679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17679Cu;
label_17679c:
    // 0x17679c: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x17679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1767a0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1767a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1767a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1767a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1767a8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1767a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1767ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1767acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1767b0: 0x0  nop
    ctx->pc = 0x1767b0u;
    // NOP
    // 0x1767b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1767b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1767b8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1767b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1767bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1767bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1767c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1767c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1767c4: 0x0  nop
    ctx->pc = 0x1767c4u;
    // NOP
    // 0x1767c8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1767c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1767cc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1767d0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1767d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1767d4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1767d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1767d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1767d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1767DCu;
    SET_GPR_U32(ctx, 31, 0x1767E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1767DCu, 0x1767E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767E4u;
label_1767e4:
    // 0x1767e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1767e8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1767ec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1767f0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1767f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1767f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1767f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1767f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176800: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x176804: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x176804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176808: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17680c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17680cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176810: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176814: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176814u;
    SET_GPR_U32(ctx, 31, 0x17681Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176814u, 0x17681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17681Cu;
label_17681c:
    // 0x17681c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176820: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x176820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176824: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x176828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17682c: 0x0  nop
    ctx->pc = 0x17682cu;
    // NOP
    // 0x176830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x176830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176834: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x176834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x176838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17683c: 0x0  nop
    ctx->pc = 0x17683cu;
    // NOP
    // 0x176840: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176848: 0x0  nop
    ctx->pc = 0x176848u;
    // NOP
    // 0x17684c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x17684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176854: 0x0  nop
    ctx->pc = 0x176854u;
    // NOP
    // 0x176858: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x176858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x17685c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17685cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176860: 0x0  nop
    ctx->pc = 0x176860u;
    // NOP
    // 0x176864: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x176864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x176868: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17686c: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x176870: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x176870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176874: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x176874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x176878: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x176878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17687c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17687Cu;
    SET_GPR_U32(ctx, 31, 0x176884u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17687Cu, 0x176884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176884u;
label_176884:
    // 0x176884: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176888: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17688c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x176890: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x176890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176894: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x176898: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x176898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17689c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1768a0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1768a4: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1768a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1768a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1768a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1768acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768b0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1768B0u;
    SET_GPR_U32(ctx, 31, 0x1768B8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1768B0u, 0x1768B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768B8u;
label_1768b8:
    // 0x1768b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1768bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1768bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1768c0: 0x0  nop
    ctx->pc = 0x1768c0u;
    // NOP
    // 0x1768c4: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1768c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1768c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1768cc: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1768d0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1768d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1768d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1768D8u;
    SET_GPR_U32(ctx, 31, 0x1768E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1768D8u, 0x1768E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768E0u;
label_1768e0:
    // 0x1768e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1768e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768e4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1768e8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1768ec: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1768f0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1768f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1768f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1768f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1768f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176904: 0x27a7014c  addiu       $a3, $sp, 0x14C
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x176908: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x176908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17690c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17690cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176914: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176914u;
    SET_GPR_U32(ctx, 31, 0x17691Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176914u, 0x17691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17691Cu;
label_17691c:
    // 0x17691c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x176920: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176924: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x176924u;
    SET_GPR_U32(ctx, 31, 0x17692Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x176924u, 0x17692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17692Cu;
label_17692c:
    // 0x17692c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17692cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176930: 0x27a700f8  addiu       $a3, $sp, 0xF8
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x176934: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x176934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17693c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176940: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x176940u;
    SET_GPR_U32(ctx, 31, 0x176948u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x176940u, 0x176948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176948u;
label_176948:
    // 0x176948: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x176948u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17694c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x17694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176950: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x176950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x176954: 0x13c40004  beq         $fp, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176954u;
    {
        const bool branch_taken_0x176954 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 4));
        if (branch_taken_0x176954) {
            ctx->pc = 0x176968u;
            goto label_176968;
        }
    }
    ctx->pc = 0x17695Cu;
    // 0x17695c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176960: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x176960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x176964: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x176964u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176968:
    // 0x176968: 0x12c000ad  beqz        $s6, . + 4 + (0xAD << 2)
    ctx->pc = 0x176968u;
    {
        const bool branch_taken_0x176968 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x176968) {
            ctx->pc = 0x176C20u;
            goto label_176c20;
        }
    }
    ctx->pc = 0x176970u;
    // 0x176970: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x176970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176974: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x176974u;
    {
        const bool branch_taken_0x176974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176974) {
            ctx->pc = 0x176C14u;
            goto label_176c14;
        }
    }
    ctx->pc = 0x17697Cu;
label_17697c:
    // 0x17697c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x176980: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x176980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x176984: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x176984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x176988: 0x24c648f0  addiu       $a2, $a2, 0x48F0
    ctx->pc = 0x176988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18672));
    // 0x17698c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17698cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176994: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x176994u;
    SET_GPR_U32(ctx, 31, 0x17699Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x176994u, 0x17699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17699Cu;
label_17699c:
    // 0x17699c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17699cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769a0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1769a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1769a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1769a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1769a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1769ac: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1769ACu;
    SET_GPR_U32(ctx, 31, 0x1769B4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1769ACu, 0x1769B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769B4u;
label_1769b4:
    // 0x1769b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1769b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1769b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769bc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1769c0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1769c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1769c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769c8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1769cc: 0x24634900  addiu       $v1, $v1, 0x4900
    ctx->pc = 0x1769ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18688));
    // 0x1769d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1769d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1769d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769d8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1769D8u;
    SET_GPR_U32(ctx, 31, 0x1769E0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1769D8u, 0x1769E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769E0u;
label_1769e0:
    // 0x1769e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1769e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769e4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1769e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1769e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1769e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1769ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1769f0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1769F0u;
    SET_GPR_U32(ctx, 31, 0x1769F8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1769F0u, 0x1769F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769F8u;
label_1769f8:
    // 0x1769f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1769f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1769fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a00: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x176A00u;
    {
        const bool branch_taken_0x176a00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x176a00) {
            ctx->pc = 0x176A3Cu;
            goto label_176a3c;
        }
    }
    ctx->pc = 0x176A08u;
    // 0x176a08: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x176a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x176a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a10: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x176a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x176a14: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x176a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    // 0x176a18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x176a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a1c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x176A1Cu;
    SET_GPR_U32(ctx, 31, 0x176A24u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x176A1Cu, 0x176A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A24u;
label_176a24:
    // 0x176a24: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176a28: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x176a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x176a2c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x176a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a30: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x176A30u;
    SET_GPR_U32(ctx, 31, 0x176A38u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x176A30u, 0x176A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A38u;
label_176a38:
    // 0x176a38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x176a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176a3c:
    // 0x176a3c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176a40: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x176a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x176a44: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x176a44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x176a48: 0x14200070  bnez        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x176A48u;
    {
        const bool branch_taken_0x176a48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x176a48) {
            ctx->pc = 0x176C0Cu;
            goto label_176c0c;
        }
    }
    ctx->pc = 0x176A50u;
    // 0x176a50: 0x3d2082b  sltu        $at, $fp, $s2
    ctx->pc = 0x176a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x176a54: 0x1420006d  bnez        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x176A54u;
    {
        const bool branch_taken_0x176a54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x176a54) {
            ctx->pc = 0x176C0Cu;
            goto label_176c0c;
        }
    }
    ctx->pc = 0x176A5Cu;
    // 0x176a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176a60: 0x0  nop
    ctx->pc = 0x176a60u;
    // NOP
    // 0x176a64: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x176a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x176a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176a6c: 0x0  nop
    ctx->pc = 0x176a6cu;
    // NOP
    // 0x176a70: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x176a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x176a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176a78: 0xa3a2015e  sb          $v0, 0x15E($sp)
    ctx->pc = 0x176a78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 350), (uint8_t)GPR_U32(ctx, 2));
    // 0x176a7c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x176a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176a80: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176a84: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x176a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x176a88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x176a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x176a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176a90: 0x27a7015e  addiu       $a3, $sp, 0x15E
    ctx->pc = 0x176a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 350));
    // 0x176a94: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x176a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176aa0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176AA0u;
    SET_GPR_U32(ctx, 31, 0x176AA8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176AA0u, 0x176AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AA8u;
label_176aa8:
    // 0x176aa8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x176AA8u;
    {
        const bool branch_taken_0x176aa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x176aa8) {
            ctx->pc = 0x176AE4u;
            goto label_176ae4;
        }
    }
    ctx->pc = 0x176AB0u;
    // 0x176ab0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176ab4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176ab8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x176ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x176abc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x176abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x176ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176ac4: 0x27a2015e  addiu       $v0, $sp, 0x15E
    ctx->pc = 0x176ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 350));
    // 0x176ac8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x176ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176acc: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x176accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176ad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176ad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ad8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176AD8u;
    SET_GPR_U32(ctx, 31, 0x176AE0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176AD8u, 0x176AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AE0u;
label_176ae0:
    // 0x176ae0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176ae4:
    // 0x176ae4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176aec: 0x0  nop
    ctx->pc = 0x176aecu;
    // NOP
    // 0x176af0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x176af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x176af4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176af8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176afc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x176afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176b00: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x176b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x176b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x176b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176b10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b14: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x176b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x176b18: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x176b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176b1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176b20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b24: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176B24u;
    SET_GPR_U32(ctx, 31, 0x176B2Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176B24u, 0x176B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B2Cu;
label_176b2c:
    // 0x176b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b30: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x176B30u;
    {
        const bool branch_taken_0x176b30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x176b30) {
            ctx->pc = 0x176B78u;
            goto label_176b78;
        }
    }
    ctx->pc = 0x176B38u;
    // 0x176b38: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176b3c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x176b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x176b40: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x176b40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176b44: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x176b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x176b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x176b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176b54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b58: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x176b5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x176b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b60: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x176b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176b64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b6c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176B6Cu;
    SET_GPR_U32(ctx, 31, 0x176B74u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176B6Cu, 0x176B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B74u;
label_176b74:
    // 0x176b74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176b78:
    // 0x176b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176b7c: 0x0  nop
    ctx->pc = 0x176b7cu;
    // NOP
    // 0x176b80: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x176b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x176b84: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x176b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176b88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x176b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x176b8c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x176b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176b90: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x176b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x176b94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x176b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176b98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x176b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176b9c: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x176b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x176ba0: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x176ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176ba4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ba8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176ba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bac: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176BACu;
    SET_GPR_U32(ctx, 31, 0x176BB4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176BACu, 0x176BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176BB4u;
label_176bb4:
    // 0x176bb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bb8: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x176bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176bbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176bc4: 0x0  nop
    ctx->pc = 0x176bc4u;
    // NOP
    // 0x176bc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x176bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176bcc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x176bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x176bd0: 0xa3a0015e  sb          $zero, 0x15E($sp)
    ctx->pc = 0x176bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 350), (uint8_t)GPR_U32(ctx, 0));
    // 0x176bd4: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x176bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x176bd8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x176bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x176bdc: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x176bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x176be0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x176be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176be4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176be8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bec: 0x27a3015e  addiu       $v1, $sp, 0x15E
    ctx->pc = 0x176becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 350));
    // 0x176bf0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x176bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bf4: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x176bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176bf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x176bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c00: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x176C00u;
    SET_GPR_U32(ctx, 31, 0x176C08u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x176C00u, 0x176C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C08u;
label_176c08:
    // 0x176c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x176c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176c0c:
    // 0x176c0c: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x176c10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x176c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_176c14:
    // 0x176c14: 0x2e410006  sltiu       $at, $s2, 0x6
    ctx->pc = 0x176c14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x176c18: 0x1420ff58  bnez        $at, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x176C18u;
    {
        const bool branch_taken_0x176c18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x176c18) {
            ctx->pc = 0x17697Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17697c;
        }
    }
    ctx->pc = 0x176C20u;
label_176c20:
    // 0x176c20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x176c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176c24: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x176c24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176c28: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176c28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176c2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x176c2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176c30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176c34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176c34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c48: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x176c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x176c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x176C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176C54u;
    // 0x176c54: 0x0  nop
    ctx->pc = 0x176c54u;
    // NOP
    // 0x176c58: 0x0  nop
    ctx->pc = 0x176c58u;
    // NOP
    // 0x176c5c: 0x0  nop
    ctx->pc = 0x176c5cu;
    // NOP
    ctx->pc = 0x176c60u;
}
