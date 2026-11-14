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

// Function: sub_001F0800
// Address: 0x1f0800 - 0x1f09d0
void sub_001F0800_0x1f0800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0800_0x1f0800");
#endif

    switch (ctx->pc) {
        case 0x1f082cu: goto label_1f082c;
        case 0x1f0854u: goto label_1f0854;
        case 0x1f0868u: goto label_1f0868;
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0890u: goto label_1f0890;
        case 0x1f089cu: goto label_1f089c;
        case 0x1f08b0u: goto label_1f08b0;
        case 0x1f08bcu: goto label_1f08bc;
        case 0x1f08e0u: goto label_1f08e0;
        case 0x1f0904u: goto label_1f0904;
        case 0x1f0918u: goto label_1f0918;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f099cu: goto label_1f099c;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09b8u: goto label_1f09b8;
        default: break;
    }

    ctx->pc = 0x1f0800u;

    // 0x1f0800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f0804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0808: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f0808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f080c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f0810: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1f0810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1f0814: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x1f0814u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f0818: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1f0818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f081c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f0820: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0820u;
    {
        const bool branch_taken_0x1f0820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0820) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F0828u;
    // 0x1f0828: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1f0828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1f082c:
    // 0x1f082c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1f082cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0830: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f0834: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f0834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f0838: 0x0  nop
    ctx->pc = 0x1f0838u;
    // NOP
    // 0x1f083c: 0x0  nop
    ctx->pc = 0x1f083cu;
    // NOP
    // 0x1f0840: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F0840u;
    {
        const bool branch_taken_0x1f0840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0840) {
            ctx->pc = 0x1F082Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f082c;
        }
    }
    ctx->pc = 0x1F0848u;
label_1f0848:
    // 0x1f0848: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f084c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F084Cu;
    SET_GPR_U32(ctx, 31, 0x1F0854u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F084Cu, 0x1F0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0854u;
label_1f0854:
    // 0x1f0854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0858: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f0858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f085c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f085cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0860: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F0860u;
    SET_GPR_U32(ctx, 31, 0x1F0868u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F0860u, 0x1F0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0868u;
label_1f0868:
    // 0x1f0868: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f0868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f086c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F086Cu;
    SET_GPR_U32(ctx, 31, 0x1F0874u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F086Cu, 0x1F0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0874u;
label_1f0874:
    // 0x1f0874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0878: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f0878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f087c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1f087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0880: 0xc7ad001c  lwc1        $f13, 0x1C($sp)
    ctx->pc = 0x1f0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0888: 0xc08c208  jal         func_230820
    ctx->pc = 0x1F0888u;
    SET_GPR_U32(ctx, 31, 0x1F0890u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F0888u, 0x1F0890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0890u;
label_1f0890:
    // 0x1f0890: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f0890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0894: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F0894u;
    SET_GPR_U32(ctx, 31, 0x1F089Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F0894u, 0x1F089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F089Cu;
label_1f089c:
    // 0x1f089c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f08a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f08a4: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1f08a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f08a8: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1F08A8u;
    SET_GPR_U32(ctx, 31, 0x1F08B0u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1F08A8u, 0x1F08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08B0u;
label_1f08b0:
    // 0x1f08b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f08b4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F08B4u;
    SET_GPR_U32(ctx, 31, 0x1F08BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F08B4u, 0x1F08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08BCu;
label_1f08bc:
    // 0x1f08bc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f08c0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1f08c0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1f08c4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1f08c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f08c8: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1f08c8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1f08cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f08ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08d0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f08d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f08d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f08d8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1F08D8u;
    SET_GPR_U32(ctx, 31, 0x1F08E0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F08D8u, 0x1F08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08E0u;
label_1f08e0:
    // 0x1f08e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1f08e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f08e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f08e8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f08e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f08ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f08ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f08f0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1F08F0u;
    {
        const bool branch_taken_0x1f08f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f08f0) {
            ctx->pc = 0x1F096Cu;
            goto label_1f096c;
        }
    }
    ctx->pc = 0x1F08F8u;
    // 0x1f08f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f08f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f08fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F08FCu;
    SET_GPR_U32(ctx, 31, 0x1F0904u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F08FCu, 0x1F0904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0904u;
label_1f0904:
    // 0x1f0904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0908: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f0908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f090c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1f090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0910: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1F0910u;
    SET_GPR_U32(ctx, 31, 0x1F0918u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1F0910u, 0x1F0918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0918u;
label_1f0918:
    // 0x1f0918: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f0918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f091c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0920: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0924: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f0924u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f0928: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f0928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f092c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f0930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f0930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0934: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1f0934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0938: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f0938u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f093c: 0x0  nop
    ctx->pc = 0x1f093cu;
    // NOP
    // 0x1f0940: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1f0940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1f0944: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f0944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0948: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F0948u;
    SET_GPR_U32(ctx, 31, 0x1F0950u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F0948u, 0x1F0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0950u;
label_1f0950:
    // 0x1f0950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0954: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f0954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0958: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1f0958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1f095c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1f095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0960: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f0960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0964: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1F0964u;
    SET_GPR_U32(ctx, 31, 0x1F096Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1F0964u, 0x1F096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F096Cu;
label_1f096c:
    // 0x1f096c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f096cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0970: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F0970u;
    SET_GPR_U32(ctx, 31, 0x1F0978u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F0970u, 0x1F0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0978u;
label_1f0978:
    // 0x1f0978: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f097c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0984: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f0984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0988: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x1f0988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f098c: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x1f098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0990: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f0990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0994: 0xc08c208  jal         func_230820
    ctx->pc = 0x1F0994u;
    SET_GPR_U32(ctx, 31, 0x1F099Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1F0994u, 0x1F099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F099Cu;
label_1f099c:
    // 0x1f099c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f09a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F09A0u;
    SET_GPR_U32(ctx, 31, 0x1F09A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F09A0u, 0x1F09A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09A8u;
label_1f09a8:
    // 0x1f09a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f09a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f09ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f09acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f09b0: 0xc08c258  jal         func_230960
    ctx->pc = 0x1F09B0u;
    SET_GPR_U32(ctx, 31, 0x1F09B8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x1F09B0u, 0x1F09B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F09B8u;
label_1f09b8:
    // 0x1f09b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f09bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f09bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f09c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1f09c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f09c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F09C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F09C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F09CCu;
    // 0x1f09cc: 0x0  nop
    ctx->pc = 0x1f09ccu;
    // NOP
    ctx->pc = 0x1f09d0u;
}
