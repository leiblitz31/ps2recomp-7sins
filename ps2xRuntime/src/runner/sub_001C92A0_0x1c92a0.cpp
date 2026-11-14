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

// Function: sub_001C92A0
// Address: 0x1c92a0 - 0x1c95f0
void sub_001C92A0_0x1c92a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C92A0_0x1c92a0");
#endif

    switch (ctx->pc) {
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c93ecu: goto label_1c93ec;
        case 0x1c93fcu: goto label_1c93fc;
        case 0x1c941cu: goto label_1c941c;
        case 0x1c9444u: goto label_1c9444;
        case 0x1c9504u: goto label_1c9504;
        case 0x1c9510u: goto label_1c9510;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c959cu: goto label_1c959c;
        default: break;
    }

    ctx->pc = 0x1c92a0u;

    // 0x1c92a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c92a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c92a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c92a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c92a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c92ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c92acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c92b0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1c92b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1c92b4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c92b8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c92bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c92bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c92c0: 0x24a575e8  addiu       $a1, $a1, 0x75E8
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30184));
    // 0x1c92c4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C92C4u;
    SET_GPR_U32(ctx, 31, 0x1C92CCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C92C4u, 0x1C92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92CCu;
label_1c92cc:
    // 0x1c92cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c92ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92d0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c92d4: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1c92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c92d8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c92dc: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1c92e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c92e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c92e4: 0x0  nop
    ctx->pc = 0x1c92e4u;
    // NOP
    // 0x1c92e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c92e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c92ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c92ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c92f0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1C92F0u;
    {
        const bool branch_taken_0x1c92f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c92f0) {
            ctx->pc = 0x1C9340u;
            goto label_1c9340;
        }
    }
    ctx->pc = 0x1C92F8u;
    // 0x1c92f8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c92fc: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x1c92fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1c9300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9304: 0x0  nop
    ctx->pc = 0x1c9304u;
    // NOP
    // 0x1c9308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c930c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9310: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1c9310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1c9314: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c9314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9318: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1c9318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1c931c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9320: 0xc4610100  lwc1        $f1, 0x100($v1)
    ctx->pc = 0x1c9320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9328: 0x0  nop
    ctx->pc = 0x1c9328u;
    // NOP
    // 0x1c932c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c932cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9330: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
    ctx->pc = 0x1C9330u;
    {
        const bool branch_taken_0x1c9330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9330) {
            ctx->pc = 0x1C945Cu;
            goto label_1c945c;
        }
    }
    ctx->pc = 0x1C9338u;
    // 0x1c9338: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C9338u;
    {
        const bool branch_taken_0x1c9338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9338) {
            ctx->pc = 0x1C9454u;
            goto label_1c9454;
        }
    }
    ctx->pc = 0x1C9340u;
label_1c9340:
    // 0x1c9340: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9344: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1c9344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9348: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c934c: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x1c934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1c9350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9354: 0x0  nop
    ctx->pc = 0x1c9354u;
    // NOP
    // 0x1c9358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c935c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c935cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9360: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1C9360u;
    {
        const bool branch_taken_0x1c9360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9360) {
            ctx->pc = 0x1C93C4u;
            goto label_1c93c4;
        }
    }
    ctx->pc = 0x1C9368u;
    // 0x1c9368: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c9368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c936c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1c936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c9370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9374: 0x10830096  beq         $a0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x1C9374u;
    {
        const bool branch_taken_0x1c9374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9374) {
            ctx->pc = 0x1C95D0u;
            goto label_1c95d0;
        }
    }
    ctx->pc = 0x1C937Cu;
    // 0x1c937c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9380: 0x8c6300fc  lw          $v1, 0xFC($v1)
    ctx->pc = 0x1c9380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1c9384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9388: 0x0  nop
    ctx->pc = 0x1c9388u;
    // NOP
    // 0x1c938c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c938cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9390: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9394: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1c9394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1c9398: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c9398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c939c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1c939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1c93a0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c93a4: 0xc4610100  lwc1        $f1, 0x100($v1)
    ctx->pc = 0x1c93a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c93a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c93a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c93ac: 0x0  nop
    ctx->pc = 0x1c93acu;
    // NOP
    // 0x1c93b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c93b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c93b4: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x1C93B4u;
    {
        const bool branch_taken_0x1c93b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c93b4) {
            ctx->pc = 0x1C945Cu;
            goto label_1c945c;
        }
    }
    ctx->pc = 0x1C93BCu;
    // 0x1c93bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C93BCu;
    {
        const bool branch_taken_0x1c93bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93bc) {
            ctx->pc = 0x1C9454u;
            goto label_1c9454;
        }
    }
    ctx->pc = 0x1C93C4u;
label_1c93c4:
    // 0x1c93c4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c93c8: 0xc4610100  lwc1        $f1, 0x100($v1)
    ctx->pc = 0x1c93c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c93cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c93ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c93d0: 0x0  nop
    ctx->pc = 0x1c93d0u;
    // NOP
    // 0x1c93d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c93d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c93d8: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1C93D8u;
    {
        const bool branch_taken_0x1c93d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c93d8) {
            ctx->pc = 0x1C9454u;
            goto label_1c9454;
        }
    }
    ctx->pc = 0x1C93E0u;
    // 0x1c93e0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c93e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C93E4u;
    SET_GPR_U32(ctx, 31, 0x1C93ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C93E4u, 0x1C93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93ECu;
label_1c93ec:
    // 0x1c93ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c93ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c93f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93f4: 0xc08c910  jal         func_232440
    ctx->pc = 0x1C93F4u;
    SET_GPR_U32(ctx, 31, 0x1C93FCu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1C93F4u, 0x1C93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93FCu;
label_1c93fc:
    // 0x1c93fc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1c93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1c9400: 0x244277b0  addiu       $v0, $v0, 0x77B0
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30640));
    // 0x1c9404: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c9408: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c9408u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E77B0u));
    // 0x1c940c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c940cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c9410: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c9410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9414: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C9414u;
    SET_GPR_U32(ctx, 31, 0x1C941Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C9414u, 0x1C941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C941Cu;
label_1c941c:
    // 0x1c941c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c941cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9428: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c942c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1c942cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c9430: 0xc78d8288  lwc1        $f13, -0x7D78($gp)
    ctx->pc = 0x1c9430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9434: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9438: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c943c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C943Cu;
    SET_GPR_U32(ctx, 31, 0x1C9444u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C943Cu, 0x1C9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9444u;
label_1c9444:
    // 0x1c9444: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c9444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c9448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c9448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c944c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9450: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c9450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c9454:
    // 0x1c9454: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1C9454u;
    {
        const bool branch_taken_0x1c9454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9454) {
            ctx->pc = 0x1C95D0u;
            goto label_1c95d0;
        }
    }
    ctx->pc = 0x1C945Cu;
label_1c945c:
    // 0x1c945c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1c945cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1c9460: 0x246377c0  addiu       $v1, $v1, 0x77C0
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30656));
    // 0x1c9464: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c9464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9468: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1c9468u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E77C0u));
    // 0x1c946c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c946cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1c9470: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1c9474: 0x246377d0  addiu       $v1, $v1, 0x77D0
    ctx->pc = 0x1c9474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30672));
    // 0x1c9478: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c947c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1c947cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E77D0u));
    // 0x1c9480: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1c9480u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1c9484: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1c9484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9488: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c9488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c948c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c9490: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c9490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9494: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c9494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9498: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c9498u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c949c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1c949cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c94a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c94a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c94a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c94a8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c94a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c94ac: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c94acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c94b0: 0x0  nop
    ctx->pc = 0x1c94b0u;
    // NOP
    // 0x1c94b4: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1c94b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c94b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c94b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c94bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C94BCu;
    {
        const bool branch_taken_0x1c94bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c94bc) {
            ctx->pc = 0x1C94E8u;
            goto label_1c94e8;
        }
    }
    ctx->pc = 0x1C94C4u;
    // 0x1c94c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c94c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c94c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c94cc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c94ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c94d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c94d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c94d4: 0x0  nop
    ctx->pc = 0x1c94d4u;
    // NOP
    // 0x1c94d8: 0x0  nop
    ctx->pc = 0x1c94d8u;
    // NOP
    // 0x1c94dc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c94dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c94e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C94E0u;
    {
        const bool branch_taken_0x1c94e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94e0) {
            ctx->pc = 0x1C94F0u;
            goto label_1c94f0;
        }
    }
    ctx->pc = 0x1C94E8u;
label_1c94e8:
    // 0x1c94e8: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1c94e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c94ec: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c94ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c94f0:
    // 0x1c94f0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c94f4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c94f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c94f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c94f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C94FCu;
    {
        const bool branch_taken_0x1c94fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94fc) {
            ctx->pc = 0x1C95A0u;
            goto label_1c95a0;
        }
    }
    ctx->pc = 0x1C9504u;
label_1c9504:
    // 0x1c9504: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c9504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c9508: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C9508u;
    SET_GPR_U32(ctx, 31, 0x1C9510u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C9508u, 0x1C9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9510u;
label_1c9510:
    // 0x1c9510: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c9510u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9514: 0x0  nop
    ctx->pc = 0x1c9514u;
    // NOP
    // 0x1c9518: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c9518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c951c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9520: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1c9520u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c9524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c952c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9530: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9534: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x1c9534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c953c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c953cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9540: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C9540u;
    SET_GPR_U32(ctx, 31, 0x1C9548u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C9540u, 0x1C9548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9548u;
label_1c9548:
    // 0x1c9548: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c954c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C954Cu;
    SET_GPR_U32(ctx, 31, 0x1C9554u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C954Cu, 0x1C9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9554u;
label_1c9554:
    // 0x1c9554: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c9554u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9558: 0x0  nop
    ctx->pc = 0x1c9558u;
    // NOP
    // 0x1c955c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c955cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c9560: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1c9560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9564: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c9564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c956c: 0x0  nop
    ctx->pc = 0x1c956cu;
    // NOP
    // 0x1c9570: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1c9570u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1c9574: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1c9574u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1c9578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c957c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9580: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c9580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9584: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1c9584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c9588: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x1c9588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c958c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c958cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c9590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9594: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C9594u;
    SET_GPR_U32(ctx, 31, 0x1C959Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C9594u, 0x1C959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C959Cu;
label_1c959c:
    // 0x1c959c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c95a0:
    // 0x1c95a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c95a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c95a4: 0x0  nop
    ctx->pc = 0x1c95a4u;
    // NOP
    // 0x1c95a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c95a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c95ac: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1c95acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1c95b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c95b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c95b4: 0x0  nop
    ctx->pc = 0x1c95b4u;
    // NOP
    // 0x1c95b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c95b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c95bc: 0x4501ffd1  bc1t        . + 4 + (-0x2F << 2)
    ctx->pc = 0x1C95BCu;
    {
        const bool branch_taken_0x1c95bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c95bc) {
            ctx->pc = 0x1C9504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9504;
        }
    }
    ctx->pc = 0x1C95C4u;
    // 0x1c95c4: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1c95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c95c8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c95cc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c95ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c95d0:
    // 0x1c95d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c95d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c95d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c95d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c95d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c95d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c95dc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c95e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C95E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C95E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C95E8u;
    // 0x1c95e8: 0x0  nop
    ctx->pc = 0x1c95e8u;
    // NOP
    // 0x1c95ec: 0x0  nop
    ctx->pc = 0x1c95ecu;
    // NOP
    ctx->pc = 0x1c95f0u;
}
