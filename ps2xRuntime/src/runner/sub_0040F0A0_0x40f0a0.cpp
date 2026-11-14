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

// Function: sub_0040F0A0
// Address: 0x40f0a0 - 0x40f218
void sub_0040F0A0_0x40f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F0A0_0x40f0a0");
#endif

    switch (ctx->pc) {
        case 0x40f200u: goto label_40f200;
        default: break;
    }

    ctx->pc = 0x40f0a0u;

    // 0x40f0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40f0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40f0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40f0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40f0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f0b0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x40f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x40f0b4: 0x8f84bdc0  lw          $a0, -0x4240($gp)
    ctx->pc = 0x40f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
    // 0x40f0b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x40f0bc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x40f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x40f0c0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x40f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x40f0c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x40f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x40f0c8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x40f0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x40f0cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x40f0d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40f0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x40f0d4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x40F0D4u;
    {
        const bool branch_taken_0x40f0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0D4u;
        // 0x40f0d8: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f0d4) {
            ctx->pc = 0x40F100u;
            goto label_40f100;
        }
    }
    ctx->pc = 0x40F0DCu;
    // 0x40f0dc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x40f0dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40f0e0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x40f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x40f0e4: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x40f0e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x40f0e8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x40f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x40f0ec: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x40f0ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x40f0f0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x40f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x40f0f4: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x40f0f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x40f0f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x40F0F8u;
    {
        const bool branch_taken_0x40f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F0F8u;
        // 0x40f0fc: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f0f8) {
            ctx->pc = 0x40F200u;
            goto label_40f200;
        }
    }
    ctx->pc = 0x40F100u;
label_40f100:
    // 0x40f100: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40f104: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x40F104u;
    {
        const bool branch_taken_0x40f104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x40f104) {
            ctx->pc = 0x40F1F8u;
            goto label_40f1f8;
        }
    }
    ctx->pc = 0x40F10Cu;
    // 0x40f10c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f110: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x40f110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x40f114: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x40f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f118: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x40f118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x40f11c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x40f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f120: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x40f120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x40f124: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x40f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f128: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x40f128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x40f12c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x40f12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f130: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x40f130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x40f134: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x40f134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f138: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x40f138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x40f13c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f140: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x40f140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x40f144: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x40f144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f148: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x40f148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x40f14c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x40f14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f150: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x40f150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x40f154: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f158: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x40f158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40f15c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x40f15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f160: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x40f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f164: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f168: 0xc4a20038  lwc1        $f2, 0x38($a1)
    ctx->pc = 0x40f168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f16c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40f16cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40f170: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f174: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f174u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f178: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40f178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40f17c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40f17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40f180: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40f180u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40f184: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x40f184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x40f188: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x40f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f18c: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x40f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40f190: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x40f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f194: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x40f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f198: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40f198u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40f19c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x40f19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f1a0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40f1a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x40f1a4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x40f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f1a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f1a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f1ac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x40f1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x40f1b0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x40f1b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x40f1b4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x40f1b4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x40f1b8: 0xe6020034  swc1        $f2, 0x34($s0)
    ctx->pc = 0x40f1b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x40f1bc: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x40f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f1c0: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x40f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f1c4: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x40f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f1c8: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x40f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40f1cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40f1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40f1d0: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x40f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40f1d4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x40f1d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40f1d8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x40f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f1dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x40f1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40f1e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40f1e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40f1e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40f1e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40f1e8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40f1e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40f1ec: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x40f1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x40f1f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40F1F0u;
    {
        const bool branch_taken_0x40f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F1F0u;
        // 0x40f1f4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f1f0) {
            ctx->pc = 0x40F200u;
            goto label_40f200;
        }
    }
    ctx->pc = 0x40F1F8u;
label_40f1f8:
    // 0x40f1f8: 0xc10395e  jal         func_40E578
    ctx->pc = 0x40F1F8u;
    SET_GPR_U32(ctx, 31, 0x40F200u);
    ctx->pc = 0x40F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F1F8u;
    // 0x40f1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E578u, 0x40F1F8u, 0x40F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F200u;
label_40f200:
    // 0x40f200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40f200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40f204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40f208: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40f208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x40F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F20Cu;
        // 0x40f210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F214u;
    // 0x40f214: 0x0  nop
    ctx->pc = 0x40f214u;
    // NOP
    ctx->pc = 0x40f218u;
}
