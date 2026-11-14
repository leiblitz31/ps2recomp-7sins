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

// Function: sub_00140650
// Address: 0x140650 - 0x140900
void sub_00140650_0x140650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140650_0x140650");
#endif

    ctx->pc = 0x140650u;

    // 0x140650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140654: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x140654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x140658: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x140658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14065c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x14065cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x140660: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x140660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140664: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140668: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x140668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14066c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14066cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140670: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x140670u;
    {
        const bool branch_taken_0x140670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140670) {
            ctx->pc = 0x140688u;
            goto label_140688;
        }
    }
    ctx->pc = 0x140678u;
    // 0x140678: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14067c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140680: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140684: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x140684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_140688:
    // 0x140688: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14068c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x14068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140690: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140694: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x140694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x140698: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14069c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1406a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1406a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1406a4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1406a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1406a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1406ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1406acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1406b0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1406b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1406b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1406b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1406b8: 0x0  nop
    ctx->pc = 0x1406b8u;
    // NOP
    // 0x1406bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1406bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1406c0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1406C0u;
    {
        const bool branch_taken_0x1406c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1406c0) {
            ctx->pc = 0x140714u;
            goto label_140714;
        }
    }
    ctx->pc = 0x1406C8u;
    // 0x1406c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1406c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1406cc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1406ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1406d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1406d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1406d4: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1406d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1406d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1406d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1406dc: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1406dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1406e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1406e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1406e4: 0x0  nop
    ctx->pc = 0x1406e4u;
    // NOP
    // 0x1406e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1406e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1406ec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1406ECu;
    {
        const bool branch_taken_0x1406ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1406ec) {
            ctx->pc = 0x140714u;
            goto label_140714;
        }
    }
    ctx->pc = 0x1406F4u;
    // 0x1406f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1406f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1406f8: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1406f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1406fc: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1406fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x140700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x140700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140704: 0x0  nop
    ctx->pc = 0x140704u;
    // NOP
    // 0x140708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x140708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14070c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140710: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x140710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_140714:
    // 0x140714: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140718: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x140718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14071c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x14071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x140720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x140720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140724: 0x0  nop
    ctx->pc = 0x140724u;
    // NOP
    // 0x140728: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x140728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14072c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x14072Cu;
    {
        const bool branch_taken_0x14072c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14072c) {
            ctx->pc = 0x140780u;
            goto label_140780;
        }
    }
    ctx->pc = 0x140734u;
    // 0x140734: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140738: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x140738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14073c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140740: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x140740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x140744: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140748: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x140748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14074c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14074cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140750: 0x0  nop
    ctx->pc = 0x140750u;
    // NOP
    // 0x140754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140758: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x140758u;
    {
        const bool branch_taken_0x140758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140758) {
            ctx->pc = 0x140780u;
            goto label_140780;
        }
    }
    ctx->pc = 0x140760u;
    // 0x140760: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140764: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x140764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140768: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x140768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x14076c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14076cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140770: 0x0  nop
    ctx->pc = 0x140770u;
    // NOP
    // 0x140774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x140774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x140778: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14077c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x14077cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_140780:
    // 0x140780: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x140780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140784: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x140784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140788: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14078c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x14078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x140790: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140794: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x140794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140798: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x140798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x14079c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14079cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1407a0: 0x0  nop
    ctx->pc = 0x1407a0u;
    // NOP
    // 0x1407a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1407a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1407a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1407A8u;
    {
        const bool branch_taken_0x1407a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1407a8) {
            ctx->pc = 0x1407C0u;
            goto label_1407c0;
        }
    }
    ctx->pc = 0x1407B0u;
    // 0x1407b0: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1407b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1407b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1407b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1407b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1407b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407bc: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x1407bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
label_1407c0:
    // 0x1407c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1407c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1407c4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1407c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1407c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1407c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407cc: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1407ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1407d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1407d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1407d4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1407d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1407d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1407d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407dc: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1407dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1407e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1407e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1407e4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1407e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1407e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1407e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407ec: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1407ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1407f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1407f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407f4: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1407f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1407f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1407fc: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1407fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x140800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140804: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x140804u;
    {
        const bool branch_taken_0x140804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140804) {
            ctx->pc = 0x140824u;
            goto label_140824;
        }
    }
    ctx->pc = 0x14080Cu;
    // 0x14080c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140810: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x140810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140814: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140818: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x140818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x14081c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14081Cu;
    {
        const bool branch_taken_0x14081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14081c) {
            ctx->pc = 0x140850u;
            goto label_140850;
        }
    }
    ctx->pc = 0x140824u;
label_140824:
    // 0x140824: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140828: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x140828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14082c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140830: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x140830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140834: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x140834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140838: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x140838u;
    {
        const bool branch_taken_0x140838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140838) {
            ctx->pc = 0x140850u;
            goto label_140850;
        }
    }
    ctx->pc = 0x140840u;
    // 0x140840: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140844: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x140844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140848: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14084c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x14084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_140850:
    // 0x140850: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140854: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x140854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140858: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14085c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x14085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140860: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x140860u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140864: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140868: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x140868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14086c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14086cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140870: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x140870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x140874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140878: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x140878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x14087c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x14087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x140880: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140884: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x140884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140888: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14088c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x14088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140890: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x140890u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140894: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x140894u;
    {
        const bool branch_taken_0x140894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140894) {
            ctx->pc = 0x1408A8u;
            goto label_1408a8;
        }
    }
    ctx->pc = 0x14089Cu;
    // 0x14089c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14089cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1408a0: 0x0  nop
    ctx->pc = 0x1408a0u;
    // NOP
    // 0x1408a4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1408a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1408a8:
    // 0x1408a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1408ac: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1408acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1408b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1408b4: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1408b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1408b8: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1408b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1408bc: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x1408bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1408c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1408c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1408c4: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1408c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1408c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1408c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1408cc: 0x0  nop
    ctx->pc = 0x1408ccu;
    // NOP
    // 0x1408d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1408d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1408d4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1408d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1408d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1408d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1408dc: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1408dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1408e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1408e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1408e4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1408e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1408e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1408e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1408ec: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x1408ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x1408f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1408f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1408f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1408F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1408F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1408FCu;
    // 0x1408fc: 0x0  nop
    ctx->pc = 0x1408fcu;
    // NOP
    ctx->pc = 0x140900u;
}
