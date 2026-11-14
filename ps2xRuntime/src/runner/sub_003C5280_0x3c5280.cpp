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

// Function: sub_003C5280
// Address: 0x3c5280 - 0x3c54b0
void sub_003C5280_0x3c5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5280_0x3c5280");
#endif

    ctx->pc = 0x3c5280u;

    // 0x3c5280: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x3c5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c5284: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c5284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c5288: 0xc4e90008  lwc1        $f9, 0x8($a3)
    ctx->pc = 0x3c5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c528c: 0xc4cd0008  lwc1        $f13, 0x8($a2)
    ctx->pc = 0x3c528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3c5290: 0xc4e80004  lwc1        $f8, 0x4($a3)
    ctx->pc = 0x3c5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c5294: 0xc4cc0004  lwc1        $f12, 0x4($a2)
    ctx->pc = 0x3c5294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c5298: 0x460d4a41  sub.s       $f9, $f9, $f13
    ctx->pc = 0x3c5298u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[13]);
    // 0x3c529c: 0xc4cb0000  lwc1        $f11, 0x0($a2)
    ctx->pc = 0x3c529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3c52a0: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x3c52a0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x3c52a4: 0x460b39c1  sub.s       $f7, $f7, $f11
    ctx->pc = 0x3c52a4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
    // 0x3c52a8: 0xe7a90008  swc1        $f9, 0x8($sp)
    ctx->pc = 0x3c52a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c52ac: 0xe7a80004  swc1        $f8, 0x4($sp)
    ctx->pc = 0x3c52acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c52b0: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x3c52b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c52b4: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3c52b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c52b8: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x3c52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c52bc: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x3c52bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x3c52c0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3c52c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c52c4: 0x460d18c1  sub.s       $f3, $f3, $f13
    ctx->pc = 0x3c52c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x3c52c8: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x3c52c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x3c52cc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3c52ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3c52d0: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x3c52d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3c52d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3c52d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3c52d8: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x3c52d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c52dc: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3c52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c52e0: 0x46022a82  mul.s       $f10, $f5, $f2
    ctx->pc = 0x3c52e0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3c52e4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3c52e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c52e8: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3c52e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3c52ec: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c52ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3c52f0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3c52f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c52f4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c52f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c52f8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x3c52f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3c52fc: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x3c52fcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x3c5300: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x3c5300u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c5304: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x3c5304u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3c5308: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x3c5308u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c530c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x3c530cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3c5310: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x3c5310u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c5314: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x3c5314u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x3c5318: 0xc780812c  lwc1        $f0, -0x7ED4($gp)
    ctx->pc = 0x3c5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c531c: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x3c531cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x3c5320: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x3c5320u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x3c5324: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x3c5324u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x3c5328: 0x46093a80  add.s       $f10, $f7, $f9
    ctx->pc = 0x3c5328u;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x3c532c: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x3c532cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5330: 0x0  nop
    ctx->pc = 0x3c5330u;
    // NOP
    // 0x3c5334: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5334u;
    {
        const bool branch_taken_0x3c5334 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5334u;
        // 0x3c5338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5334) {
            ctx->pc = 0x3C5340u;
            goto label_3c5340;
        }
    }
    ctx->pc = 0x3C533Cu;
    // 0x3c533c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c533cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5340:
    // 0x3c5340: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C5340u;
    {
        const bool branch_taken_0x3c5340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5340) {
            ctx->pc = 0x3C54A8u;
            goto label_3c54a8;
        }
    }
    ctx->pc = 0x3C5348u;
    // 0x3c5348: 0x46005047  neg.s       $f1, $f10
    ctx->pc = 0x3c5348u;
    ctx->f[1] = FPU_NEG_S(ctx->f[10]);
    // 0x3c534c: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x3c534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5350: 0x46000a42  mul.s       $f9, $f1, $f0
    ctx->pc = 0x3c5350u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c5354: 0x46095381  sub.s       $f14, $f10, $f9
    ctx->pc = 0x3c5354u;
    ctx->f[14] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
    // 0x3c5358: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3c5358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c535c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3c535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5360: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x3c5360u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x3c5364: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3c5364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5368: 0x460d1081  sub.s       $f2, $f2, $f13
    ctx->pc = 0x3c5368u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x3c536c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3c536cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3c5370: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3c5370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3c5374: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3c5374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3c5378: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3c5378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3c537c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x3c537cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x3c5380: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c5380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3c5384: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c5384u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c5388: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c5388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c538c: 0x46020a00  add.s       $f8, $f1, $f2
    ctx->pc = 0x3c538cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c5390: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x3c5390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5394: 0x0  nop
    ctx->pc = 0x3c5394u;
    // NOP
    // 0x3c5398: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C5398u;
    {
        const bool branch_taken_0x3c5398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5398u;
        // 0x3c539c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5398) {
            ctx->pc = 0x3C53B0u;
            goto label_3c53b0;
        }
    }
    ctx->pc = 0x3C53A0u;
    // 0x3c53a0: 0x460e4036  c.le.s      $f8, $f14
    ctx->pc = 0x3c53a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c53a4: 0x0  nop
    ctx->pc = 0x3c53a4u;
    // NOP
    // 0x3c53a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C53A8u;
    {
        const bool branch_taken_0x3c53a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c53a8) {
            ctx->pc = 0x3C53ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C53A8u;
            // 0x3c53ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C53B0u;
            goto label_3c53b0;
        }
    }
    ctx->pc = 0x3C53B0u;
label_3c53b0:
    // 0x3c53b0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3C53B0u;
    {
        const bool branch_taken_0x3c53b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C53B0u;
        // 0x3c53b4: 0xc7a30028  lwc1        $f3, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c53b0) {
            ctx->pc = 0x3C54A8u;
            goto label_3c54a8;
        }
    }
    ctx->pc = 0x3C53B8u;
    // 0x3c53b8: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3c53b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c53bc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3c53bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c53c0: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x3c53c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c53c4: 0x460419c2  mul.s       $f7, $f3, $f4
    ctx->pc = 0x3c53c4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3c53c8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c53c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c53cc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3c53ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c53d0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x3c53d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3c53d4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x3c53d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c53d8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3c53d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c53dc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3c53dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3c53e0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3c53e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3c53e4: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x3c53e4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x3c53e8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x3c53e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x3c53ec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3c53ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3c53f0: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x3c53f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c53f4: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x3c53f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3c53f8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x3c53f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c53fc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3c53fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5400: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3c5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5404: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3c5404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x3c5408: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c540c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3c540cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3c5410: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c5410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c5414: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3c5414u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3c5418: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3c5418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c541c: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x3c541cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5420: 0x0  nop
    ctx->pc = 0x3c5420u;
    // NOP
    // 0x3c5424: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5424u;
    {
        const bool branch_taken_0x3c5424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5424u;
        // 0x3c5428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5424) {
            ctx->pc = 0x3C5440u;
            goto label_3c5440;
        }
    }
    ctx->pc = 0x3C542Cu;
    // 0x3c542c: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x3c542cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x3c5430: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x3c5430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5434: 0x0  nop
    ctx->pc = 0x3c5434u;
    // NOP
    // 0x3c5438: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C5438u;
    {
        const bool branch_taken_0x3c5438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5438) {
            ctx->pc = 0x3C543Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5438u;
            // 0x3c543c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5440u;
            goto label_3c5440;
        }
    }
    ctx->pc = 0x3C5440u;
label_3c5440:
    // 0x3c5440: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C5440u;
    {
        const bool branch_taken_0x3c5440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5440u;
        // 0x3c5444: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5440) {
            ctx->pc = 0x3C54A8u;
            goto label_3c54a8;
        }
    }
    ctx->pc = 0x3C5448u;
    // 0x3c5448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c5448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c544c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x3c544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c5450: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3c5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5454: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x3c5454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c5458: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3c5458u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3c545c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3c545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5460: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c5460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3c5464: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3c5464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5468: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c5468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c546c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3c546cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3c5470: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3c5470u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3c5474: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x3c5474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5478: 0x0  nop
    ctx->pc = 0x3c5478u;
    // NOP
    // 0x3c547c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C547Cu;
    {
        const bool branch_taken_0x3c547c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C547Cu;
        // 0x3c5480: 0xe5230000  swc1        $f3, 0x0($t1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c547c) {
            ctx->pc = 0x3C5494u;
            goto label_3c5494;
        }
    }
    ctx->pc = 0x3C5484u;
    // 0x3c5484: 0x460e1836  c.le.s      $f3, $f14
    ctx->pc = 0x3c5484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5488: 0x0  nop
    ctx->pc = 0x3c5488u;
    // NOP
    // 0x3c548c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3C548Cu;
    {
        const bool branch_taken_0x3c548c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c548c) {
            ctx->pc = 0x3C5490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C548Cu;
            // 0x3c5490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5494u;
            goto label_3c5494;
        }
    }
    ctx->pc = 0x3C5494u;
label_3c5494:
    // 0x3c5494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5494u;
    {
        const bool branch_taken_0x3c5494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5494) {
            ctx->pc = 0x3C54A8u;
            goto label_3c54a8;
        }
    }
    ctx->pc = 0x3C549Cu;
    // 0x3c549c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x3c549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c54a0: 0x460a0003  div.s       $f0, $f0, $f10
    ctx->pc = 0x3c54a0u;
    { if (ctx->f[10] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[10]); }
    // 0x3c54a4: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x3c54a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_3c54a8:
    // 0x3c54a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C54A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C54A8u;
        // 0x3c54ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C54A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C54B0u;
}
