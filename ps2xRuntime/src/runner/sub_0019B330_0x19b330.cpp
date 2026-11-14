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

// Function: sub_0019B330
// Address: 0x19b330 - 0x19c070
void sub_0019B330_0x19b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B330_0x19b330");
#endif

    switch (ctx->pc) {
        case 0x19b374u: goto label_19b374;
        case 0x19b380u: goto label_19b380;
        case 0x19b394u: goto label_19b394;
        case 0x19b3acu: goto label_19b3ac;
        case 0x19b3b8u: goto label_19b3b8;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b408u: goto label_19b408;
        case 0x19b418u: goto label_19b418;
        case 0x19b448u: goto label_19b448;
        case 0x19b454u: goto label_19b454;
        case 0x19b464u: goto label_19b464;
        case 0x19b4b0u: goto label_19b4b0;
        case 0x19b4f0u: goto label_19b4f0;
        case 0x19b530u: goto label_19b530;
        case 0x19b564u: goto label_19b564;
        case 0x19b574u: goto label_19b574;
        case 0x19b5a8u: goto label_19b5a8;
        case 0x19b5d4u: goto label_19b5d4;
        case 0x19b5f8u: goto label_19b5f8;
        case 0x19b624u: goto label_19b624;
        case 0x19b634u: goto label_19b634;
        case 0x19b644u: goto label_19b644;
        case 0x19b668u: goto label_19b668;
        case 0x19b6a0u: goto label_19b6a0;
        case 0x19b6ccu: goto label_19b6cc;
        case 0x19b6e4u: goto label_19b6e4;
        case 0x19b6f8u: goto label_19b6f8;
        case 0x19b704u: goto label_19b704;
        case 0x19b71cu: goto label_19b71c;
        case 0x19b72cu: goto label_19b72c;
        case 0x19b738u: goto label_19b738;
        case 0x19b750u: goto label_19b750;
        case 0x19b764u: goto label_19b764;
        case 0x19b770u: goto label_19b770;
        case 0x19b788u: goto label_19b788;
        case 0x19b79cu: goto label_19b79c;
        case 0x19b7a8u: goto label_19b7a8;
        case 0x19b7c0u: goto label_19b7c0;
        case 0x19b7d0u: goto label_19b7d0;
        case 0x19b7dcu: goto label_19b7dc;
        case 0x19b7f4u: goto label_19b7f4;
        case 0x19b808u: goto label_19b808;
        case 0x19b814u: goto label_19b814;
        case 0x19b82cu: goto label_19b82c;
        case 0x19b838u: goto label_19b838;
        case 0x19b84cu: goto label_19b84c;
        case 0x19b858u: goto label_19b858;
        case 0x19b870u: goto label_19b870;
        case 0x19b87cu: goto label_19b87c;
        case 0x19b8c0u: goto label_19b8c0;
        case 0x19b8d0u: goto label_19b8d0;
        case 0x19b8e4u: goto label_19b8e4;
        case 0x19b8fcu: goto label_19b8fc;
        case 0x19b90cu: goto label_19b90c;
        case 0x19b91cu: goto label_19b91c;
        case 0x19b930u: goto label_19b930;
        case 0x19b940u: goto label_19b940;
        case 0x19b950u: goto label_19b950;
        case 0x19b95cu: goto label_19b95c;
        case 0x19b970u: goto label_19b970;
        case 0x19b97cu: goto label_19b97c;
        case 0x19b994u: goto label_19b994;
        case 0x19b9a8u: goto label_19b9a8;
        case 0x19b9b4u: goto label_19b9b4;
        case 0x19b9ccu: goto label_19b9cc;
        case 0x19b9e0u: goto label_19b9e0;
        case 0x19b9f4u: goto label_19b9f4;
        case 0x19ba04u: goto label_19ba04;
        case 0x19ba14u: goto label_19ba14;
        case 0x19ba28u: goto label_19ba28;
        case 0x19ba38u: goto label_19ba38;
        case 0x19ba48u: goto label_19ba48;
        case 0x19ba54u: goto label_19ba54;
        case 0x19ba6cu: goto label_19ba6c;
        case 0x19ba80u: goto label_19ba80;
        case 0x19ba8cu: goto label_19ba8c;
        case 0x19baa4u: goto label_19baa4;
        case 0x19bab8u: goto label_19bab8;
        case 0x19bac4u: goto label_19bac4;
        case 0x19badcu: goto label_19badc;
        case 0x19baf0u: goto label_19baf0;
        case 0x19bafcu: goto label_19bafc;
        case 0x19bb14u: goto label_19bb14;
        case 0x19bb28u: goto label_19bb28;
        case 0x19bb34u: goto label_19bb34;
        case 0x19bb4cu: goto label_19bb4c;
        case 0x19bb60u: goto label_19bb60;
        case 0x19bb6cu: goto label_19bb6c;
        case 0x19bb84u: goto label_19bb84;
        case 0x19bb98u: goto label_19bb98;
        case 0x19bba4u: goto label_19bba4;
        case 0x19bbbcu: goto label_19bbbc;
        case 0x19bbd0u: goto label_19bbd0;
        case 0x19bbdcu: goto label_19bbdc;
        case 0x19bbf4u: goto label_19bbf4;
        case 0x19bc08u: goto label_19bc08;
        case 0x19bc1cu: goto label_19bc1c;
        case 0x19bc2cu: goto label_19bc2c;
        case 0x19bc3cu: goto label_19bc3c;
        case 0x19bc50u: goto label_19bc50;
        case 0x19bc60u: goto label_19bc60;
        case 0x19bc70u: goto label_19bc70;
        case 0x19bc7cu: goto label_19bc7c;
        case 0x19bc94u: goto label_19bc94;
        case 0x19bca8u: goto label_19bca8;
        case 0x19bcb4u: goto label_19bcb4;
        case 0x19bcccu: goto label_19bccc;
        case 0x19bce0u: goto label_19bce0;
        case 0x19bcecu: goto label_19bcec;
        case 0x19bd04u: goto label_19bd04;
        case 0x19bd18u: goto label_19bd18;
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd3cu: goto label_19bd3c;
        case 0x19bd50u: goto label_19bd50;
        case 0x19bd5cu: goto label_19bd5c;
        case 0x19bd74u: goto label_19bd74;
        case 0x19bd88u: goto label_19bd88;
        case 0x19bd94u: goto label_19bd94;
        case 0x19bdacu: goto label_19bdac;
        case 0x19bdc0u: goto label_19bdc0;
        case 0x19bdccu: goto label_19bdcc;
        case 0x19bde4u: goto label_19bde4;
        case 0x19bdf8u: goto label_19bdf8;
        case 0x19be04u: goto label_19be04;
        case 0x19be1cu: goto label_19be1c;
        case 0x19be30u: goto label_19be30;
        case 0x19be44u: goto label_19be44;
        case 0x19be54u: goto label_19be54;
        case 0x19be64u: goto label_19be64;
        case 0x19be78u: goto label_19be78;
        case 0x19be88u: goto label_19be88;
        case 0x19be98u: goto label_19be98;
        case 0x19bea4u: goto label_19bea4;
        case 0x19bebcu: goto label_19bebc;
        case 0x19bed0u: goto label_19bed0;
        case 0x19bedcu: goto label_19bedc;
        case 0x19befcu: goto label_19befc;
        case 0x19bf18u: goto label_19bf18;
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf44u: goto label_19bf44;
        case 0x19bf5cu: goto label_19bf5c;
        case 0x19bf74u: goto label_19bf74;
        case 0x19bf84u: goto label_19bf84;
        case 0x19bf94u: goto label_19bf94;
        case 0x19bfa0u: goto label_19bfa0;
        case 0x19bfb4u: goto label_19bfb4;
        case 0x19c018u: goto label_19c018;
        case 0x19c034u: goto label_19c034;
        case 0x19c044u: goto label_19c044;
        default: break;
    }

    ctx->pc = 0x19b330u;

    // 0x19b330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19b334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b33c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19b340: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19b340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19b344: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x19b344u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19b348: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19b348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b34c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b350: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b354: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19b354u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b358: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x19B358u;
    {
        const bool branch_taken_0x19b358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b358) {
            ctx->pc = 0x19B3C8u;
            goto label_19b3c8;
        }
    }
    ctx->pc = 0x19B360u;
    // 0x19b360: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b364: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b368: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b36c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B36Cu;
    SET_GPR_U32(ctx, 31, 0x19B374u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B36Cu, 0x19B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B374u;
label_19b374:
    // 0x19b374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b378: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19B378u;
    SET_GPR_U32(ctx, 31, 0x19B380u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19B378u, 0x19B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B380u;
label_19b380:
    // 0x19b380: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b384: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b388: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b38c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B38Cu;
    SET_GPR_U32(ctx, 31, 0x19B394u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B38Cu, 0x19B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B394u;
label_19b394:
    // 0x19b394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b398: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b39c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19b3a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b3a4: 0xc066004  jal         func_198010
    ctx->pc = 0x19B3A4u;
    SET_GPR_U32(ctx, 31, 0x19B3ACu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19B3A4u, 0x19B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3ACu;
label_19b3ac:
    // 0x19b3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3b0: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19B3B0u;
    SET_GPR_U32(ctx, 31, 0x19B3B8u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19B3B0u, 0x19B3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3B8u;
label_19b3b8:
    // 0x19b3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3c0: 0xc084400  jal         func_211000
    ctx->pc = 0x19B3C0u;
    SET_GPR_U32(ctx, 31, 0x19B3C8u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19B3C0u, 0x19B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3C8u;
label_19b3c8:
    // 0x19b3c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b3cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b3d0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x19b3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b3d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b3d8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19b3dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b3e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b3e4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b3e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b3ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b3f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19b3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19b3f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b3f8: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b3fc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b400: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B400u;
    SET_GPR_U32(ctx, 31, 0x19B408u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B400u, 0x19B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B408u;
label_19b408:
    // 0x19b408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b40c: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19b40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b410: 0xc084440  jal         func_211100
    ctx->pc = 0x19B410u;
    SET_GPR_U32(ctx, 31, 0x19B418u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19B410u, 0x19B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B418u;
label_19b418:
    // 0x19b418: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b41c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b420: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b424: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x19b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b428: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b42c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19B42Cu;
    {
        const bool branch_taken_0x19b42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b42c) {
            ctx->pc = 0x19B464u;
            goto label_19b464;
        }
    }
    ctx->pc = 0x19B434u;
    // 0x19b434: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b438: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b43c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19b43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19b440: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B440u;
    SET_GPR_U32(ctx, 31, 0x19B448u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B440u, 0x19B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B448u;
label_19b448:
    // 0x19b448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b44c: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19B44Cu;
    SET_GPR_U32(ctx, 31, 0x19B454u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19B44Cu, 0x19B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B454u;
label_19b454:
    // 0x19b454: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b45c: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19B45Cu;
    SET_GPR_U32(ctx, 31, 0x19B464u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19B45Cu, 0x19B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B464u;
label_19b464:
    // 0x19b464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b46c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19b470: 0x3e00008  jr          $ra
    ctx->pc = 0x19B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B478u;
    // 0x19b478: 0x0  nop
    ctx->pc = 0x19b478u;
    // NOP
    // 0x19b47c: 0x0  nop
    ctx->pc = 0x19b47cu;
    // NOP
    // 0x19b480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19b48c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19b490: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19b490u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19b494: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x19b494u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19b498: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b49c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b4a0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x19b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b4a4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x19b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b4a8: 0xc064e90  jal         func_193A40
    ctx->pc = 0x19B4A8u;
    SET_GPR_U32(ctx, 31, 0x19B4B0u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x19B4A8u, 0x19B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4B0u;
label_19b4b0:
    // 0x19b4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4b4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19b4b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B4C0u;
    // 0x19b4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b4c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19b4cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19b4d0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19b4d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19b4d4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x19b4d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19b4d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b4dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b4e0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x19b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b4e4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x19b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b4e8: 0xc064f2c  jal         func_193CB0
    ctx->pc = 0x19B4E8u;
    SET_GPR_U32(ctx, 31, 0x19B4F0u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x19B4E8u, 0x19B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4F0u;
label_19b4f0:
    // 0x19b4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B500u;
    // 0x19b500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19b508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19b50c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19b510: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19b510u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19b514: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x19b514u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19b518: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b51c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b520: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x19b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b524: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x19b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b528: 0xc064ff8  jal         func_193FE0
    ctx->pc = 0x19B528u;
    SET_GPR_U32(ctx, 31, 0x19B530u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x19B528u, 0x19B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B530u;
label_19b530:
    // 0x19b530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b534: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19b538: 0x3e00008  jr          $ra
    ctx->pc = 0x19B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B540u;
    // 0x19b540: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19b544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b54c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x19b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x19b550: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x19b550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x19b554: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b558: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b55c: 0xc0650f0  jal         func_1943C0
    ctx->pc = 0x19B55Cu;
    SET_GPR_U32(ctx, 31, 0x19B564u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x19B55Cu, 0x19B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B564u;
label_19b564:
    // 0x19b564: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x19b564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x19b568: 0x24c66110  addiu       $a2, $a2, 0x6110
    ctx->pc = 0x19b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24848));
    // 0x19b56c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b570: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x19b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19b574:
    // 0x19b574: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x19b574u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b578: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x19b578u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x19b57c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x19b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x19b580: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19b584: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x19b584u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b588: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x19b588u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b58c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19b590: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B590u;
    {
        const bool branch_taken_0x19b590 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x19b590) {
            ctx->pc = 0x19B574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b574;
        }
    }
    ctx->pc = 0x19B598u;
    // 0x19b598: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b59c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b5a0: 0xc05621c  jal         func_158870
    ctx->pc = 0x19B5A0u;
    SET_GPR_U32(ctx, 31, 0x19B5A8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x19B5A0u, 0x19B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5A8u;
label_19b5a8:
    // 0x19b5a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5ac: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x19B5ACu;
    {
        const bool branch_taken_0x19b5ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5ac) {
            ctx->pc = 0x19B668u;
            goto label_19b668;
        }
    }
    ctx->pc = 0x19B5B4u;
    // 0x19b5b4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x19b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x19b5b8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x19b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5bc: 0xc780baf0  lwc1        $f0, -0x4510($gp)
    ctx->pc = 0x19b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5c0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x19b5c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19b5c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19b5c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19b5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19b5cc: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x19B5CCu;
    SET_GPR_U32(ctx, 31, 0x19B5D4u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x19B5CCu, 0x19B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5D4u;
label_19b5d4:
    // 0x19b5d4: 0xe780baf0  swc1        $f0, -0x4510($gp)
    ctx->pc = 0x19b5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949616), bits); }
    // 0x19b5d8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x19b5dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b5e0: 0xc780baf0  lwc1        $f0, -0x4510($gp)
    ctx->pc = 0x19b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19b5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b5e8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x19b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x19b5ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19b5f0: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x19B5F0u;
    SET_GPR_U32(ctx, 31, 0x19B5F8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x19B5F0u, 0x19B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5F8u;
label_19b5f8:
    // 0x19b5f8: 0xc78381a0  lwc1        $f3, -0x7E60($gp)
    ctx->pc = 0x19b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19b5fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19b600: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b604: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19b604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b608: 0x0  nop
    ctx->pc = 0x19b608u;
    // NOP
    // 0x19b60c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x19b60cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x19b610: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x19b610u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x19b614: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x19b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x19b618: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b61c: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x19B61Cu;
    SET_GPR_U32(ctx, 31, 0x19B624u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x19B61Cu, 0x19B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B624u;
label_19b624:
    // 0x19b624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b62c: 0xc08c49c  jal         func_231270
    ctx->pc = 0x19B62Cu;
    SET_GPR_U32(ctx, 31, 0x19B634u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x19B62Cu, 0x19B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B634u;
label_19b634:
    // 0x19b634: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x19b634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x19b638: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x19b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b63c: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x19B63Cu;
    SET_GPR_U32(ctx, 31, 0x19B644u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x19B63Cu, 0x19B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B644u;
label_19b644:
    // 0x19b644: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19b644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19b648: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19b648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b64c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19b64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19b650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b658: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x19b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b65c: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x19b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x19b660: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x19B660u;
    SET_GPR_U32(ctx, 31, 0x19B668u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x19B660u, 0x19B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B668u;
label_19b668:
    // 0x19b668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b670: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19b674: 0x3e00008  jr          $ra
    ctx->pc = 0x19B674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B67Cu;
    // 0x19b67c: 0x0  nop
    ctx->pc = 0x19b67cu;
    // NOP
    // 0x19b680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19b688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19b68c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19b690: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b694: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19b694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b698: 0xc0650f4  jal         func_1943D0
    ctx->pc = 0x19B698u;
    SET_GPR_U32(ctx, 31, 0x19B6A0u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x19B698u, 0x19B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6A0u;
label_19b6a0:
    // 0x19b6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b6a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19b6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19b6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B6B0u;
    // 0x19b6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b6bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19b6c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b6c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B6C4u;
    SET_GPR_U32(ctx, 31, 0x19B6CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B6C4u, 0x19B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6CCu;
label_19b6cc:
    // 0x19b6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b6d4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b6d8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x19b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19b6dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B6DCu;
    SET_GPR_U32(ctx, 31, 0x19B6E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B6DCu, 0x19B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6E4u;
label_19b6e4:
    // 0x19b6e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b6f0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B6F0u;
    SET_GPR_U32(ctx, 31, 0x19B6F8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B6F0u, 0x19B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6F8u;
label_19b6f8:
    // 0x19b6f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b6fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B6FCu;
    SET_GPR_U32(ctx, 31, 0x19B704u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B6FCu, 0x19B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B704u;
label_19b704:
    // 0x19b704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b708: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b70c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b710: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19b714: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B714u;
    SET_GPR_U32(ctx, 31, 0x19B71Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B714u, 0x19B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B71Cu;
label_19b71c:
    // 0x19b71c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b724: 0xc08c258  jal         func_230960
    ctx->pc = 0x19B724u;
    SET_GPR_U32(ctx, 31, 0x19B72Cu);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x19B724u, 0x19B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B72Cu;
label_19b72c:
    // 0x19b72c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b730: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B730u;
    SET_GPR_U32(ctx, 31, 0x19B738u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B730u, 0x19B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B738u;
label_19b738:
    // 0x19b738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b73c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b740: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b744: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x19b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19b748: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B748u;
    SET_GPR_U32(ctx, 31, 0x19B750u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B748u, 0x19B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B750u;
label_19b750:
    // 0x19b750: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b75c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B75Cu;
    SET_GPR_U32(ctx, 31, 0x19B764u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B75Cu, 0x19B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B764u;
label_19b764:
    // 0x19b764: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b768: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B768u;
    SET_GPR_U32(ctx, 31, 0x19B770u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B768u, 0x19B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B770u;
label_19b770:
    // 0x19b770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b774: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b778: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b77c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19b780: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B780u;
    SET_GPR_U32(ctx, 31, 0x19B788u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B780u, 0x19B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B788u;
label_19b788:
    // 0x19b788: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b790: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b794: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B794u;
    SET_GPR_U32(ctx, 31, 0x19B79Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B794u, 0x19B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B79Cu;
label_19b79c:
    // 0x19b79c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b7a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B7A0u;
    SET_GPR_U32(ctx, 31, 0x19B7A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B7A0u, 0x19B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7A8u;
label_19b7a8:
    // 0x19b7a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b7b0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b7b4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19b7b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B7B8u;
    SET_GPR_U32(ctx, 31, 0x19B7C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B7B8u, 0x19B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7C0u;
label_19b7c0:
    // 0x19b7c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7c8: 0xc08c258  jal         func_230960
    ctx->pc = 0x19B7C8u;
    SET_GPR_U32(ctx, 31, 0x19B7D0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x19B7C8u, 0x19B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7D0u;
label_19b7d0:
    // 0x19b7d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b7d4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B7D4u;
    SET_GPR_U32(ctx, 31, 0x19B7DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B7D4u, 0x19B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7DCu;
label_19b7dc:
    // 0x19b7dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b7e4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b7e8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19b7ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B7ECu;
    SET_GPR_U32(ctx, 31, 0x19B7F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B7ECu, 0x19B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7F4u;
label_19b7f4:
    // 0x19b7f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b800: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B800u;
    SET_GPR_U32(ctx, 31, 0x19B808u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B800u, 0x19B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B808u;
label_19b808:
    // 0x19b808: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b80c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B80Cu;
    SET_GPR_U32(ctx, 31, 0x19B814u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B80Cu, 0x19B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B814u;
label_19b814:
    // 0x19b814: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19b814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b818: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x19b818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x19b81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b824: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B824u;
    SET_GPR_U32(ctx, 31, 0x19B82Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B824u, 0x19B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B82Cu;
label_19b82c:
    // 0x19b82c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b830: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B830u;
    SET_GPR_U32(ctx, 31, 0x19B838u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B830u, 0x19B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B838u;
label_19b838:
    // 0x19b838: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b83c: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x19b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x19b840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b844: 0xc08c258  jal         func_230960
    ctx->pc = 0x19B844u;
    SET_GPR_U32(ctx, 31, 0x19B84Cu);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x19B844u, 0x19B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B84Cu;
label_19b84c:
    // 0x19b84c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b850: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B850u;
    SET_GPR_U32(ctx, 31, 0x19B858u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B850u, 0x19B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B858u;
label_19b858:
    // 0x19b858: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b85c: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x19b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x19b860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b868: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B868u;
    SET_GPR_U32(ctx, 31, 0x19B870u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B868u, 0x19B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B870u;
label_19b870:
    // 0x19b870: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b874: 0xc064aec  jal         func_192BB0
    ctx->pc = 0x19B874u;
    SET_GPR_U32(ctx, 31, 0x19B87Cu);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x19B874u, 0x19B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B87Cu;
label_19b87c:
    // 0x19b87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b884: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19b884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19b888: 0x3e00008  jr          $ra
    ctx->pc = 0x19B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B890u;
    // 0x19b890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b89c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b8a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b8a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x19b8a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b8ac: 0x249200a4  addiu       $s2, $a0, 0xA4
    ctx->pc = 0x19b8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x19b8b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b8b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B8B8u;
    SET_GPR_U32(ctx, 31, 0x19B8C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B8B8u, 0x19B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8C0u;
label_19b8c0:
    // 0x19b8c0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b8c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b8c8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B8C8u;
    SET_GPR_U32(ctx, 31, 0x19B8D0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B8C8u, 0x19B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8D0u;
label_19b8d0:
    // 0x19b8d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19b8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b8dc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B8DCu;
    SET_GPR_U32(ctx, 31, 0x19B8E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B8DCu, 0x19B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8E4u;
label_19b8e4:
    // 0x19b8e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b8e8: 0x24850118  addiu       $a1, $a0, 0x118
    ctx->pc = 0x19b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x19b8ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b8f4: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B8F4u;
    SET_GPR_U32(ctx, 31, 0x19B8FCu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B8F4u, 0x19B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8FCu;
label_19b8fc:
    // 0x19b8fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b900: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b904: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B904u;
    SET_GPR_U32(ctx, 31, 0x19B90Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B904u, 0x19B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B90Cu;
label_19b90c:
    // 0x19b90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b914: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19B914u;
    SET_GPR_U32(ctx, 31, 0x19B91Cu);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19B914u, 0x19B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B91Cu;
label_19b91c:
    // 0x19b91c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b920: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b924: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19b924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b928: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B928u;
    SET_GPR_U32(ctx, 31, 0x19B930u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B928u, 0x19B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B930u;
label_19b930:
    // 0x19b930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b934: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b938: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B938u;
    SET_GPR_U32(ctx, 31, 0x19B940u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B938u, 0x19B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B940u;
label_19b940:
    // 0x19b940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b948: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19B948u;
    SET_GPR_U32(ctx, 31, 0x19B950u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19B948u, 0x19B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B950u;
label_19b950:
    // 0x19b950: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b954: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B954u;
    SET_GPR_U32(ctx, 31, 0x19B95Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B954u, 0x19B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B95Cu;
label_19b95c:
    // 0x19b95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19b960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b968: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B968u;
    SET_GPR_U32(ctx, 31, 0x19B970u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B968u, 0x19B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B970u;
label_19b970:
    // 0x19b970: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b974: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B974u;
    SET_GPR_U32(ctx, 31, 0x19B97Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B974u, 0x19B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B97Cu;
label_19b97c:
    // 0x19b97c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b980: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b984: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b988: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x19b988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19b98c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B98Cu;
    SET_GPR_U32(ctx, 31, 0x19B994u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B98Cu, 0x19B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B994u;
label_19b994:
    // 0x19b994: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b99c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b9a0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B9A0u;
    SET_GPR_U32(ctx, 31, 0x19B9A8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B9A0u, 0x19B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9A8u;
label_19b9a8:
    // 0x19b9a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b9ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B9ACu;
    SET_GPR_U32(ctx, 31, 0x19B9B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B9ACu, 0x19B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9B4u;
label_19b9b4:
    // 0x19b9b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b9bc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19b9c0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x19b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19b9c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19B9C4u;
    SET_GPR_U32(ctx, 31, 0x19B9CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19B9C4u, 0x19B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9CCu;
label_19b9cc:
    // 0x19b9cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b9d8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19B9D8u;
    SET_GPR_U32(ctx, 31, 0x19B9E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19B9D8u, 0x19B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9E0u;
label_19b9e0:
    // 0x19b9e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b9e4: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b9e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b9ec: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B9ECu;
    SET_GPR_U32(ctx, 31, 0x19B9F4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B9ECu, 0x19B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9F4u;
label_19b9f4:
    // 0x19b9f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19b9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b9fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19B9FCu;
    SET_GPR_U32(ctx, 31, 0x19BA04u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19B9FCu, 0x19BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA04u;
label_19ba04:
    // 0x19ba04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ba08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba0c: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BA0Cu;
    SET_GPR_U32(ctx, 31, 0x19BA14u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BA0Cu, 0x19BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA14u;
label_19ba14:
    // 0x19ba14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ba18: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ba1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ba20: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19BA20u;
    SET_GPR_U32(ctx, 31, 0x19BA28u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19BA20u, 0x19BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA28u;
label_19ba28:
    // 0x19ba28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19ba28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba2c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ba30: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BA30u;
    SET_GPR_U32(ctx, 31, 0x19BA38u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BA30u, 0x19BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA38u;
label_19ba38:
    // 0x19ba38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ba3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba40: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BA40u;
    SET_GPR_U32(ctx, 31, 0x19BA48u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BA40u, 0x19BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA48u;
label_19ba48:
    // 0x19ba48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ba4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BA4Cu;
    SET_GPR_U32(ctx, 31, 0x19BA54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BA4Cu, 0x19BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA54u;
label_19ba54:
    // 0x19ba54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19ba54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ba5c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19ba60: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x19ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19ba64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BA64u;
    SET_GPR_U32(ctx, 31, 0x19BA6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BA64u, 0x19BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA6Cu;
label_19ba6c:
    // 0x19ba6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ba70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ba74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba78: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BA78u;
    SET_GPR_U32(ctx, 31, 0x19BA80u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BA78u, 0x19BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA80u;
label_19ba80:
    // 0x19ba80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ba84: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BA84u;
    SET_GPR_U32(ctx, 31, 0x19BA8Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BA84u, 0x19BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA8Cu;
label_19ba8c:
    // 0x19ba8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19ba8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ba94: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19ba98: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x19ba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19ba9c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BA9Cu;
    SET_GPR_U32(ctx, 31, 0x19BAA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BA9Cu, 0x19BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAA4u;
label_19baa4:
    // 0x19baa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19baa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19baa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bab0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BAB0u;
    SET_GPR_U32(ctx, 31, 0x19BAB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BAB0u, 0x19BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAB8u;
label_19bab8:
    // 0x19bab8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19babc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BABCu;
    SET_GPR_U32(ctx, 31, 0x19BAC4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BABCu, 0x19BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAC4u;
label_19bac4:
    // 0x19bac4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bacc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bad0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19bad4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BAD4u;
    SET_GPR_U32(ctx, 31, 0x19BADCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BAD4u, 0x19BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BADCu;
label_19badc:
    // 0x19badc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19badcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bae4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bae8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BAE8u;
    SET_GPR_U32(ctx, 31, 0x19BAF0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BAE8u, 0x19BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAF0u;
label_19baf0:
    // 0x19baf0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19baf4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BAF4u;
    SET_GPR_U32(ctx, 31, 0x19BAFCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BAF4u, 0x19BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BAFCu;
label_19bafc:
    // 0x19bafc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb04: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bb08: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19bb0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BB0Cu;
    SET_GPR_U32(ctx, 31, 0x19BB14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BB0Cu, 0x19BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB14u;
label_19bb14:
    // 0x19bb14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb20: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BB20u;
    SET_GPR_U32(ctx, 31, 0x19BB28u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BB20u, 0x19BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB28u;
label_19bb28:
    // 0x19bb28: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BB2Cu;
    SET_GPR_U32(ctx, 31, 0x19BB34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BB2Cu, 0x19BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB34u;
label_19bb34:
    // 0x19bb34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb3c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bb40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19bb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19bb44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BB44u;
    SET_GPR_U32(ctx, 31, 0x19BB4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BB44u, 0x19BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB4Cu;
label_19bb4c:
    // 0x19bb4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb58: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BB58u;
    SET_GPR_U32(ctx, 31, 0x19BB60u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BB58u, 0x19BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB60u;
label_19bb60:
    // 0x19bb60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb64: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BB64u;
    SET_GPR_U32(ctx, 31, 0x19BB6Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BB64u, 0x19BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB6Cu;
label_19bb6c:
    // 0x19bb6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb74: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bb78: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x19bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19bb7c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BB7Cu;
    SET_GPR_U32(ctx, 31, 0x19BB84u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BB7Cu, 0x19BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB84u;
label_19bb84:
    // 0x19bb84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bb88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb90: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BB90u;
    SET_GPR_U32(ctx, 31, 0x19BB98u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BB90u, 0x19BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BB98u;
label_19bb98:
    // 0x19bb98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bb9c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BB9Cu;
    SET_GPR_U32(ctx, 31, 0x19BBA4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BB9Cu, 0x19BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBA4u;
label_19bba4:
    // 0x19bba4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bba8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bbac: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bbb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19bbb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BBB4u;
    SET_GPR_U32(ctx, 31, 0x19BBBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BBB4u, 0x19BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBBCu;
label_19bbbc:
    // 0x19bbbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bbc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bbc8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BBC8u;
    SET_GPR_U32(ctx, 31, 0x19BBD0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BBC8u, 0x19BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBD0u;
label_19bbd0:
    // 0x19bbd0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bbd4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BBD4u;
    SET_GPR_U32(ctx, 31, 0x19BBDCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BBD4u, 0x19BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBDCu;
label_19bbdc:
    // 0x19bbdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bbe4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bbe8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19bbec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BBECu;
    SET_GPR_U32(ctx, 31, 0x19BBF4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BBECu, 0x19BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBF4u;
label_19bbf4:
    // 0x19bbf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bbf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc00: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BC00u;
    SET_GPR_U32(ctx, 31, 0x19BC08u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BC00u, 0x19BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC08u;
label_19bc08:
    // 0x19bc08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc0c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19bc10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bc14: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19BC14u;
    SET_GPR_U32(ctx, 31, 0x19BC1Cu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19BC14u, 0x19BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC1Cu;
label_19bc1c:
    // 0x19bc1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bc1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc20: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc24: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BC24u;
    SET_GPR_U32(ctx, 31, 0x19BC2Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BC24u, 0x19BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC2Cu;
label_19bc2c:
    // 0x19bc2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc34: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BC34u;
    SET_GPR_U32(ctx, 31, 0x19BC3Cu);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BC34u, 0x19BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC3Cu;
label_19bc3c:
    // 0x19bc3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc40: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19bc44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bc48: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19BC48u;
    SET_GPR_U32(ctx, 31, 0x19BC50u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19BC48u, 0x19BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC50u;
label_19bc50:
    // 0x19bc50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bc50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc58: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BC58u;
    SET_GPR_U32(ctx, 31, 0x19BC60u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BC58u, 0x19BC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC60u;
label_19bc60:
    // 0x19bc60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc68: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BC68u;
    SET_GPR_U32(ctx, 31, 0x19BC70u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BC68u, 0x19BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC70u;
label_19bc70:
    // 0x19bc70: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc74: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BC74u;
    SET_GPR_U32(ctx, 31, 0x19BC7Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BC74u, 0x19BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC7Cu;
label_19bc7c:
    // 0x19bc7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bc7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc84: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bc88: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19bc8c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BC8Cu;
    SET_GPR_U32(ctx, 31, 0x19BC94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BC8Cu, 0x19BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC94u;
label_19bc94:
    // 0x19bc94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bc98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bca0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BCA0u;
    SET_GPR_U32(ctx, 31, 0x19BCA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BCA0u, 0x19BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCA8u;
label_19bca8:
    // 0x19bca8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bcac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BCACu;
    SET_GPR_U32(ctx, 31, 0x19BCB4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BCACu, 0x19BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCB4u;
label_19bcb4:
    // 0x19bcb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bcb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bcbc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bcc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19bcc4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BCC4u;
    SET_GPR_U32(ctx, 31, 0x19BCCCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BCC4u, 0x19BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCCCu;
label_19bccc:
    // 0x19bccc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bcd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bcd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcd8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BCD8u;
    SET_GPR_U32(ctx, 31, 0x19BCE0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BCD8u, 0x19BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCE0u;
label_19bce0:
    // 0x19bce0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bce4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BCE4u;
    SET_GPR_U32(ctx, 31, 0x19BCECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BCE4u, 0x19BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCECu;
label_19bcec:
    // 0x19bcec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcf0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bcf4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bcf8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19bcfc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BCFCu;
    SET_GPR_U32(ctx, 31, 0x19BD04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BCFCu, 0x19BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD04u;
label_19bd04:
    // 0x19bd04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bd08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd10: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BD10u;
    SET_GPR_U32(ctx, 31, 0x19BD18u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BD10u, 0x19BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD18u;
label_19bd18:
    // 0x19bd18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd1c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BD1Cu;
    SET_GPR_U32(ctx, 31, 0x19BD24u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BD1Cu, 0x19BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD24u;
label_19bd24:
    // 0x19bd24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd2c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bd30: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19bd34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BD34u;
    SET_GPR_U32(ctx, 31, 0x19BD3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BD34u, 0x19BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD3Cu;
label_19bd3c:
    // 0x19bd3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd48: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BD48u;
    SET_GPR_U32(ctx, 31, 0x19BD50u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BD48u, 0x19BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD50u;
label_19bd50:
    // 0x19bd50: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd54: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BD54u;
    SET_GPR_U32(ctx, 31, 0x19BD5Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BD54u, 0x19BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD5Cu;
label_19bd5c:
    // 0x19bd5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd64: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bd68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19bd6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BD6Cu;
    SET_GPR_U32(ctx, 31, 0x19BD74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BD6Cu, 0x19BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD74u;
label_19bd74:
    // 0x19bd74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bd78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd80: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BD80u;
    SET_GPR_U32(ctx, 31, 0x19BD88u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BD80u, 0x19BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD88u;
label_19bd88:
    // 0x19bd88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd8c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BD8Cu;
    SET_GPR_U32(ctx, 31, 0x19BD94u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BD8Cu, 0x19BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD94u;
label_19bd94:
    // 0x19bd94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bd94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bd9c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bda0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x19bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19bda4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BDA4u;
    SET_GPR_U32(ctx, 31, 0x19BDACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BDA4u, 0x19BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDACu;
label_19bdac:
    // 0x19bdac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bdb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdb8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BDB8u;
    SET_GPR_U32(ctx, 31, 0x19BDC0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BDB8u, 0x19BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDC0u;
label_19bdc0:
    // 0x19bdc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bdc4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BDC4u;
    SET_GPR_U32(ctx, 31, 0x19BDCCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BDC4u, 0x19BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDCCu;
label_19bdcc:
    // 0x19bdcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bdd4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bdd8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x19bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19bddc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BDDCu;
    SET_GPR_U32(ctx, 31, 0x19BDE4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BDDCu, 0x19BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDE4u;
label_19bde4:
    // 0x19bde4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bde8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bdf0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BDF0u;
    SET_GPR_U32(ctx, 31, 0x19BDF8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BDF0u, 0x19BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDF8u;
label_19bdf8:
    // 0x19bdf8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bdfc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BDFCu;
    SET_GPR_U32(ctx, 31, 0x19BE04u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BDFCu, 0x19BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE04u;
label_19be04:
    // 0x19be04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19be04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be0c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19be10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x19be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19be14: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BE14u;
    SET_GPR_U32(ctx, 31, 0x19BE1Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BE14u, 0x19BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE1Cu;
label_19be1c:
    // 0x19be1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19be20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19be24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be28: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BE28u;
    SET_GPR_U32(ctx, 31, 0x19BE30u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BE28u, 0x19BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE30u;
label_19be30:
    // 0x19be30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be34: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19be38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19be3c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19BE3Cu;
    SET_GPR_U32(ctx, 31, 0x19BE44u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19BE3Cu, 0x19BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE44u;
label_19be44:
    // 0x19be44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19be44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19be48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BE4Cu;
    SET_GPR_U32(ctx, 31, 0x19BE54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BE4Cu, 0x19BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE54u;
label_19be54:
    // 0x19be54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19be58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be5c: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BE5Cu;
    SET_GPR_U32(ctx, 31, 0x19BE64u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BE5Cu, 0x19BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE64u;
label_19be64:
    // 0x19be64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19be64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be68: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19be6c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19be70: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19BE70u;
    SET_GPR_U32(ctx, 31, 0x19BE78u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19BE70u, 0x19BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE78u;
label_19be78:
    // 0x19be78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19be78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be7c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be80: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BE80u;
    SET_GPR_U32(ctx, 31, 0x19BE88u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BE80u, 0x19BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE88u;
label_19be88:
    // 0x19be88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19be8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be90: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BE90u;
    SET_GPR_U32(ctx, 31, 0x19BE98u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BE90u, 0x19BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE98u;
label_19be98:
    // 0x19be98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19be98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be9c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BE9Cu;
    SET_GPR_U32(ctx, 31, 0x19BEA4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BE9Cu, 0x19BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEA4u;
label_19bea4:
    // 0x19bea4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bea8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19beac: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19beb0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19beb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BEB4u;
    SET_GPR_U32(ctx, 31, 0x19BEBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BEB4u, 0x19BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEBCu;
label_19bebc:
    // 0x19bebc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bec8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BEC8u;
    SET_GPR_U32(ctx, 31, 0x19BED0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BEC8u, 0x19BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BED0u;
label_19bed0:
    // 0x19bed0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bed4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BED4u;
    SET_GPR_U32(ctx, 31, 0x19BEDCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BED4u, 0x19BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEDCu;
label_19bedc:
    // 0x19bedc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bee0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x19bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bee4: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x19bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x19bee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19beec: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x19beecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19bef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bef4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BEF4u;
    SET_GPR_U32(ctx, 31, 0x19BEFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BEF4u, 0x19BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEFCu;
label_19befc:
    // 0x19befc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19befcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19bf04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf10: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BF10u;
    SET_GPR_U32(ctx, 31, 0x19BF18u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BF10u, 0x19BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF18u;
label_19bf18:
    // 0x19bf18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19bf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bf20: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19bf24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bf28: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19BF28u;
    SET_GPR_U32(ctx, 31, 0x19BF30u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19BF28u, 0x19BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF30u;
label_19bf30:
    // 0x19bf30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf34: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bf38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bf3c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BF3Cu;
    SET_GPR_U32(ctx, 31, 0x19BF44u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BF3Cu, 0x19BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF44u;
label_19bf44:
    // 0x19bf44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bf50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19bf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf54: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BF54u;
    SET_GPR_U32(ctx, 31, 0x19BF5Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BF54u, 0x19BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF5Cu;
label_19bf5c:
    // 0x19bf5c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bf60: 0x24850118  addiu       $a1, $a0, 0x118
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x19bf64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19bf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf6c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19BF6Cu;
    SET_GPR_U32(ctx, 31, 0x19BF74u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19BF6Cu, 0x19BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF74u;
label_19bf74:
    // 0x19bf74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19bf74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf78: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bf7c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BF7Cu;
    SET_GPR_U32(ctx, 31, 0x19BF84u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BF7Cu, 0x19BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF84u;
label_19bf84:
    // 0x19bf84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf8c: 0xc0844d0  jal         func_211340
    ctx->pc = 0x19BF8Cu;
    SET_GPR_U32(ctx, 31, 0x19BF94u);
    ctx->pc = 0x211340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211340u, 0x19BF8Cu, 0x19BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF94u;
label_19bf94:
    // 0x19bf94: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bf98: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19BF98u;
    SET_GPR_U32(ctx, 31, 0x19BFA0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19BF98u, 0x19BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFA0u;
label_19bfa0:
    // 0x19bfa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x19BFACu;
    SET_GPR_U32(ctx, 31, 0x19BFB4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x19BFACu, 0x19BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFB4u;
label_19bfb4:
    // 0x19bfb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19bfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bfb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bfb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bfbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bfc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bfc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19bfc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BFD0u;
    // 0x19bfd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19bfd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19bfd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19bfdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19bfdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19bfe0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19bfe4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bfe8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bfec: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BFECu;
    {
        const bool branch_taken_0x19bfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bfec) {
            ctx->pc = 0x19C04Cu;
            goto label_19c04c;
        }
    }
    ctx->pc = 0x19BFF4u;
    // 0x19bff4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x19bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x19bff8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bffc: 0x10030013  beq         $zero, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19BFFCu;
    {
        const bool branch_taken_0x19bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bffc) {
            ctx->pc = 0x19C04Cu;
            goto label_19c04c;
        }
    }
    ctx->pc = 0x19C004u;
    // 0x19c004: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x19c004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x19c008: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c00c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x19c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x19c010: 0xc085538  jal         func_2154E0
    ctx->pc = 0x19C010u;
    SET_GPR_U32(ctx, 31, 0x19C018u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x19C010u, 0x19C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C018u;
label_19c018:
    // 0x19c018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c01c: 0x1010000b  beq         $zero, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x19C01Cu;
    {
        const bool branch_taken_0x19c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x19c01c) {
            ctx->pc = 0x19C04Cu;
            goto label_19c04c;
        }
    }
    ctx->pc = 0x19C024u;
    // 0x19c024: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19c024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19c028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c02c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x19C02Cu;
    SET_GPR_U32(ctx, 31, 0x19C034u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x19C02Cu, 0x19C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C034u;
label_19c034:
    // 0x19c034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c03c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x19C03Cu;
    SET_GPR_U32(ctx, 31, 0x19C044u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x19C03Cu, 0x19C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C044u;
label_19c044:
    // 0x19c044: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c048: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x19c048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_19c04c:
    // 0x19c04c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c054: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19c058: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c05c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C064u;
    // 0x19c064: 0x0  nop
    ctx->pc = 0x19c064u;
    // NOP
    // 0x19c068: 0x0  nop
    ctx->pc = 0x19c068u;
    // NOP
    // 0x19c06c: 0x0  nop
    ctx->pc = 0x19c06cu;
    // NOP
    ctx->pc = 0x19c070u;
}
