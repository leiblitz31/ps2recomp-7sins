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

// Function: sub_003BD410
// Address: 0x3bd410 - 0x3bd808
void sub_003BD410_0x3bd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD410_0x3bd410");
#endif

    ctx->pc = 0x3bd410u;

    // 0x3bd410: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x3bd410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bd414: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bd414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3bd418: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x3bd418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bd41c: 0xc5080004  lwc1        $f8, 0x4($t0)
    ctx->pc = 0x3bd41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3bd420: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x3bd420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd424: 0xc5070008  lwc1        $f7, 0x8($t0)
    ctx->pc = 0x3bd424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bd428: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x3bd428u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x3bd42c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3bd42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd430: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x3bd430u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x3bd434: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x3bd434u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x3bd438: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x3bd438u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3bd43c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x3bd43cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3bd440: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x3bd440u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3bd444: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3bd444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd448: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x3bd448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bd44c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3bd44cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3bd450: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3bd450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd454: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x3bd454u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x3bd458: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x3bd458u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x3bd45c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3bd45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3bd460: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x3bd460u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3bd464: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x3bd464u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3bd468: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x3bd468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x3bd46c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3bd46cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3bd470: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x3bd470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x3bd474: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bd474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bd478: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x3bd478u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x3bd47c: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x3bd47cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x3bd480: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3bd480u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3bd484: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3bd484u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x3bd488: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3bd488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3bd48c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x3bd48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3bd490: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x3bd490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3bd494: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3bd494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3bd498: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3bd498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3bd49c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x3bd49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x3bd4a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3bd4a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bd4a4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3bd4a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3bd4a8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3bd4a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3bd4ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3bd4acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3bd4b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3bd4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3bd4b4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3bd4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bd4b8: 0x0  nop
    ctx->pc = 0x3bd4b8u;
    // NOP
    // 0x3bd4bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD4BCu;
    {
        const bool branch_taken_0x3bd4bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4BCu;
        // 0x3bd4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd4bc) {
            ctx->pc = 0x3BD4C8u;
            goto label_3bd4c8;
        }
    }
    ctx->pc = 0x3BD4C4u;
    // 0x3bd4c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd4c8:
    // 0x3bd4c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BD4C8u;
    {
        const bool branch_taken_0x3bd4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd4c8) {
            ctx->pc = 0x3BD4ECu;
            goto label_3bd4ec;
        }
    }
    ctx->pc = 0x3BD4D0u;
    // 0x3bd4d0: 0x460000c4  c1          0xC4
    ctx->pc = 0x3bd4d0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x3bd4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bd4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bd4d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bd4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bd4dc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd4dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bd4e0: 0x460300c3  div.s       $f3, $f0, $f3
    ctx->pc = 0x3bd4e0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3bd4e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD4E4u;
    {
        const bool branch_taken_0x3bd4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD4E4u;
        // 0x3bd4e8: 0xc7a80050  lwc1        $f8, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd4e4) {
            ctx->pc = 0x3BD4F8u;
            goto label_3bd4f8;
        }
    }
    ctx->pc = 0x3BD4ECu;
label_3bd4ec:
    // 0x3bd4ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3bd4ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bd4f0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd4f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bd4f4: 0xc7a80050  lwc1        $f8, 0x50($sp)
    ctx->pc = 0x3bd4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3bd4f8:
    // 0x3bd4f8: 0xc7a90054  lwc1        $f9, 0x54($sp)
    ctx->pc = 0x3bd4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3bd4fc: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x3bd4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bd500: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x3bd500u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x3bd504: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x3bd504u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x3bd508: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x3bd508u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3bd50c: 0xe7a80050  swc1        $f8, 0x50($sp)
    ctx->pc = 0x3bd50cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3bd510: 0xe7a90054  swc1        $f9, 0x54($sp)
    ctx->pc = 0x3bd510u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3bd514: 0xe7ac0058  swc1        $f12, 0x58($sp)
    ctx->pc = 0x3bd514u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3bd518: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x3bd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3bd51c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3bd51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd520: 0x46083082  mul.s       $f2, $f6, $f8
    ctx->pc = 0x3bd520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x3bd524: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3bd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd528: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x3bd528u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x3bd52c: 0x46080b42  mul.s       $f13, $f1, $f8
    ctx->pc = 0x3bd52cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x3bd530: 0x46090382  mul.s       $f14, $f0, $f9
    ctx->pc = 0x3bd530u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3bd534: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x3bd534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3bd538: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3bd538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3bd53c: 0x46027381  sub.s       $f14, $f14, $f2
    ctx->pc = 0x3bd53cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x3bd540: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x3bd540u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x3bd544: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x3bd544u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x3bd548: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x3bd548u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x3bd54c: 0x46036b42  mul.s       $f13, $f13, $f3
    ctx->pc = 0x3bd54cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x3bd550: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x3bd550u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bd554: 0x46037382  mul.s       $f14, $f14, $f3
    ctx->pc = 0x3bd554u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x3bd558: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3bd558u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3bd55c: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x3bd55cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3bd560: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x3bd560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3bd564: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3bd564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd568: 0x46083882  mul.s       $f2, $f7, $f8
    ctx->pc = 0x3bd568u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x3bd56c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3bd56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd570: 0x460c39c2  mul.s       $f7, $f7, $f12
    ctx->pc = 0x3bd570u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x3bd574: 0x46080a82  mul.s       $f10, $f1, $f8
    ctx->pc = 0x3bd574u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x3bd578: 0x460902c2  mul.s       $f11, $f0, $f9
    ctx->pc = 0x3bd578u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3bd57c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x3bd57cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3bd580: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3bd580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3bd584: 0x46025ac1  sub.s       $f11, $f11, $f2
    ctx->pc = 0x3bd584u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x3bd588: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x3bd588u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x3bd58c: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x3bd58cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x3bd590: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x3bd590u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x3bd594: 0x46035ac2  mul.s       $f11, $f11, $f3
    ctx->pc = 0x3bd594u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3bd598: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x3bd598u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3bd59c: 0x46035282  mul.s       $f10, $f10, $f3
    ctx->pc = 0x3bd59cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x3bd5a0: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x3bd5a0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3bd5a4: 0xe7aa0014  swc1        $f10, 0x14($sp)
    ctx->pc = 0x3bd5a4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3bd5a8: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x3bd5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bd5ac: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x3bd5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd5b0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3bd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd5b4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3bd5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd5b8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3bd5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd5bc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3bd5bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3bd5c0: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x3bd5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bd5c4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3bd5c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3bd5c8: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x3bd5c8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x3bd5cc: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3bd5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd5d0: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x3bd5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd5d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3bd5d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3bd5d8: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x3bd5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd5dc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3bd5dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3bd5e0: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3bd5e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3bd5e4: 0xc7808144  lwc1        $f0, -0x7EBC($gp)
    ctx->pc = 0x3bd5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd5e8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3bd5e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3bd5ec: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3bd5ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3bd5f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3bd5f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3bd5f4: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x3bd5f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3bd5f8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x3bd5f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3bd5fc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x3bd5fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3bd600: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x3bd600u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3bd604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bd604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bd608: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3bd608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3bd60c: 0x46073000  add.s       $f0, $f6, $f7
    ctx->pc = 0x3bd60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x3bd610: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x3bd610u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3bd614: 0x460a6840  add.s       $f1, $f13, $f10
    ctx->pc = 0x3bd614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
    // 0x3bd618: 0xe488000c  swc1        $f8, 0xC($a0)
    ctx->pc = 0x3bd618u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3bd61c: 0x460b7080  add.s       $f2, $f14, $f11
    ctx->pc = 0x3bd61cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x3bd620: 0xe48d0010  swc1        $f13, 0x10($a0)
    ctx->pc = 0x3bd620u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3bd624: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bd624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bd628: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x3bd628u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3bd62c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3bd62cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3bd630: 0xe489001c  swc1        $f9, 0x1C($a0)
    ctx->pc = 0x3bd630u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3bd634: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3bd634u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3bd638: 0xe48e0020  swc1        $f14, 0x20($a0)
    ctx->pc = 0x3bd638u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3bd63c: 0xe48b0024  swc1        $f11, 0x24($a0)
    ctx->pc = 0x3bd63cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x3bd640: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x3bd640u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x3bd644: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3bd644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3bd648: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x3bd648u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x3bd64c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x3bd64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3bd650: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x3bd650u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x3bd654: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x3bd654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x3bd658: 0xe48c002c  swc1        $f12, 0x2C($a0)
    ctx->pc = 0x3bd658u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x3bd65c: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x3bd65cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x3bd660: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x3bd660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd664: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x3bd664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd668: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x3bd668u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x3bd66c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x3bd66cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3bd670: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3bd670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd674: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x3bd674u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x3bd678: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x3bd678u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x3bd67c: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x3bd67cu;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
    // 0x3bd680: 0x460d3180  add.s       $f6, $f6, $f13
    ctx->pc = 0x3bd680u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x3bd684: 0x460e3180  add.s       $f6, $f6, $f14
    ctx->pc = 0x3bd684u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[14]);
    // 0x3bd688: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x3bd688u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x3bd68c: 0xe4860030  swc1        $f6, 0x30($a0)
    ctx->pc = 0x3bd68cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x3bd690: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3bd690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd694: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3bd694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd698: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x3bd698u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3bd69c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x3bd69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd6a0: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x3bd6a0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x3bd6a4: 0xe488003c  swc1        $f8, 0x3C($a0)
    ctx->pc = 0x3bd6a4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x3bd6a8: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x3bd6a8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x3bd6ac: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x3bd6acu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x3bd6b0: 0x460b39c0  add.s       $f7, $f7, $f11
    ctx->pc = 0x3bd6b0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[11]);
    // 0x3bd6b4: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x3bd6b4u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x3bd6b8: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x3bd6b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x3bd6bc: 0xe4870034  swc1        $f7, 0x34($a0)
    ctx->pc = 0x3bd6bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3bd6c0: 0x46067bc1  sub.s       $f15, $f15, $f6
    ctx->pc = 0x3bd6c0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[6]);
    // 0x3bd6c4: 0xe48f0038  swc1        $f15, 0x38($a0)
    ctx->pc = 0x3bd6c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3bd6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD6C8u;
        // 0x3bd6cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD6D0u;
    // 0x3bd6d0: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x3bd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bd6d4: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x3bd6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd6d8: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x3bd6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3bd6dc: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x3bd6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3bd6e0: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x3bd6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3bd6e4: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x3bd6e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3bd6e8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3bd6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3bd6ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3bd6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3bd6f0: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x3bd6f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3bd6f4: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x3bd6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bd6f8: 0x0  nop
    ctx->pc = 0x3bd6f8u;
    // NOP
    // 0x3bd6fc: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x3BD6FCu;
    {
        const bool branch_taken_0x3bd6fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bd6fc) {
            ctx->pc = 0x3BD700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD6FCu;
            // 0x3bd700: 0xc4850004  lwc1        $f5, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD73Cu;
            goto label_3bd73c;
        }
    }
    ctx->pc = 0x3BD704u;
    // 0x3bd704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bd704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bd708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bd708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bd70c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x3bd70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd710: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3bd710u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3bd714: 0x46000004  c1          0x4
    ctx->pc = 0x3bd714u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3bd718: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bd718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bd71c: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x3bd71cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3bd720: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3bd720u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3bd724: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3bd724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3bd728: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x3bd728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x3bd72c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x3bd72cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3bd730: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x3bd730u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3bd734: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x3bd734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3bd738: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x3bd738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3bd73c:
    // 0x3bd73c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x3bd73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd740: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x3bd740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3bd744: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x3bd744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bd748: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x3bd748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3bd74c: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3bd74cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3bd750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3bd750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3bd754: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x3bd754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3bd758: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x3bd758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bd75c: 0x0  nop
    ctx->pc = 0x3bd75cu;
    // NOP
    // 0x3bd760: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x3BD760u;
    {
        const bool branch_taken_0x3bd760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bd760) {
            ctx->pc = 0x3BD764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD760u;
            // 0x3bd764: 0xc4850008  lwc1        $f5, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD7A0u;
            goto label_3bd7a0;
        }
    }
    ctx->pc = 0x3BD768u;
    // 0x3bd768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bd768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bd76c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bd76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bd770: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x3bd770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd774: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3bd774u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3bd778: 0x46000004  c1          0x4
    ctx->pc = 0x3bd778u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3bd77c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bd77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bd780: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x3bd780u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3bd784: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3bd784u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3bd788: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3bd788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3bd78c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x3bd78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3bd790: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x3bd790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3bd794: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x3bd794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3bd798: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x3bd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x3bd79c: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x3bd79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3bd7a0:
    // 0x3bd7a0: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x3bd7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd7a4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x3bd7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3bd7a8: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x3bd7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bd7ac: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x3bd7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3bd7b0: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3bd7b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3bd7b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3bd7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3bd7b8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x3bd7b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3bd7bc: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x3bd7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bd7c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3BD7C0u;
    {
        const bool branch_taken_0x3bd7c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3bd7c0) {
            ctx->pc = 0x3BD7FCu;
            goto label_3bd7fc;
        }
    }
    ctx->pc = 0x3BD7C8u;
    // 0x3bd7c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bd7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3bd7cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3bd7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bd7d0: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x3bd7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd7d4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3bd7d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3bd7d8: 0x46000004  c1          0x4
    ctx->pc = 0x3bd7d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3bd7dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bd7dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bd7e0: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x3bd7e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3bd7e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3bd7e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3bd7e8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3bd7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3bd7ec: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x3bd7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3bd7f0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x3bd7f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3bd7f4: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x3bd7f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3bd7f8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x3bd7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_3bd7fc:
    // 0x3bd7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD804u;
    // 0x3bd804: 0x0  nop
    ctx->pc = 0x3bd804u;
    // NOP
    ctx->pc = 0x3bd808u;
}
