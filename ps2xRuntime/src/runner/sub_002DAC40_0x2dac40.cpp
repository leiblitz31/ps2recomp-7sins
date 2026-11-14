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

// Function: sub_002DAC40
// Address: 0x2dac40 - 0x2daed0
void sub_002DAC40_0x2dac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAC40_0x2dac40");
#endif

    switch (ctx->pc) {
        case 0x2dacd4u: goto label_2dacd4;
        case 0x2dacf8u: goto label_2dacf8;
        case 0x2dad0cu: goto label_2dad0c;
        case 0x2dad1cu: goto label_2dad1c;
        case 0x2dad2cu: goto label_2dad2c;
        case 0x2dad3cu: goto label_2dad3c;
        case 0x2dad68u: goto label_2dad68;
        case 0x2dad78u: goto label_2dad78;
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dadacu: goto label_2dadac;
        case 0x2dadc8u: goto label_2dadc8;
        case 0x2dadd8u: goto label_2dadd8;
        case 0x2dade8u: goto label_2dade8;
        case 0x2dadf8u: goto label_2dadf8;
        case 0x2dae24u: goto label_2dae24;
        case 0x2dae34u: goto label_2dae34;
        case 0x2dae58u: goto label_2dae58;
        case 0x2dae68u: goto label_2dae68;
        case 0x2dae8cu: goto label_2dae8c;
        case 0x2dae98u: goto label_2dae98;
        case 0x2daeb0u: goto label_2daeb0;
        default: break;
    }

    ctx->pc = 0x2dac40u;

    // 0x2dac40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dac44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dac48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dac4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dac4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dac50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2dac50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2dac54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2dac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2dac58: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x2dac58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2dac5c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2dac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2dac60: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x2dac60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2dac64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2dac64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dac68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dac68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dac6c: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2DAC6Cu;
    {
        const bool branch_taken_0x2dac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dac6c) {
            ctx->pc = 0x2DADBCu;
            goto label_2dadbc;
        }
    }
    ctx->pc = 0x2DAC74u;
    // 0x2dac74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dac78: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DAC78u;
    {
        const bool branch_taken_0x2dac78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dac78) {
            ctx->pc = 0x2DAD00u;
            goto label_2dad00;
        }
    }
    ctx->pc = 0x2DAC80u;
    // 0x2dac80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAC80u;
    {
        const bool branch_taken_0x2dac80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dac80) {
            ctx->pc = 0x2DAC90u;
            goto label_2dac90;
        }
    }
    ctx->pc = 0x2DAC88u;
    // 0x2dac88: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2DAC88u;
    {
        const bool branch_taken_0x2dac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dac88) {
            ctx->pc = 0x2DAE70u;
            goto label_2dae70;
        }
    }
    ctx->pc = 0x2DAC90u;
label_2dac90:
    // 0x2dac90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2dac90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dac94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dac98: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DAC98u;
    {
        const bool branch_taken_0x2dac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dac98) {
            ctx->pc = 0x2DACDCu;
            goto label_2dacdc;
        }
    }
    ctx->pc = 0x2DACA0u;
    // 0x2daca0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2daca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2daca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2daca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dacac: 0x0  nop
    ctx->pc = 0x2dacacu;
    // NOP
    // 0x2dacb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dacb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dacb4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2DACB4u;
    {
        const bool branch_taken_0x2dacb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dacb4) {
            ctx->pc = 0x2DACDCu;
            goto label_2dacdc;
        }
    }
    ctx->pc = 0x2DACBCu;
    // 0x2dacbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dacc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dacc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dacc4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dacc8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2daccc: 0xc09803c  jal         func_2600F0
    ctx->pc = 0x2DACCCu;
    SET_GPR_U32(ctx, 31, 0x2DACD4u);
    ctx->pc = 0x2600F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2600F0u, 0x2DACCCu, 0x2DACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACD4u;
label_2dacd4:
    // 0x2dacd4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2DACD4u;
    {
        const bool branch_taken_0x2dacd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dacd4) {
            ctx->pc = 0x2DAE70u;
            goto label_2dae70;
        }
    }
    ctx->pc = 0x2DACDCu;
label_2dacdc:
    // 0x2dacdc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2dacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dace0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2dace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dace4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2dace4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dace8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dacec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dacecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dacf0: 0xc09803c  jal         func_2600F0
    ctx->pc = 0x2DACF0u;
    SET_GPR_U32(ctx, 31, 0x2DACF8u);
    ctx->pc = 0x2600F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2600F0u, 0x2DACF0u, 0x2DACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DACF8u;
label_2dacf8:
    // 0x2dacf8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2DACF8u;
    {
        const bool branch_taken_0x2dacf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dacf8) {
            ctx->pc = 0x2DAE70u;
            goto label_2dae70;
        }
    }
    ctx->pc = 0x2DAD00u;
label_2dad00:
    // 0x2dad00: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dad00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dad04: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAD04u;
    SET_GPR_U32(ctx, 31, 0x2DAD0Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAD04u, 0x2DAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD0Cu;
label_2dad0c:
    // 0x2dad0c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dad10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad14: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAD14u;
    SET_GPR_U32(ctx, 31, 0x2DAD1Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAD14u, 0x2DAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD1Cu;
label_2dad1c:
    // 0x2dad1c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2dad1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dad20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dad20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dad24: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAD24u;
    SET_GPR_U32(ctx, 31, 0x2DAD2Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAD24u, 0x2DAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD2Cu;
label_2dad2c:
    // 0x2dad2c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dad30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad34: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAD34u;
    SET_GPR_U32(ctx, 31, 0x2DAD3Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAD34u, 0x2DAD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD3Cu;
label_2dad3c:
    // 0x2dad3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dad40: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2dad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dad44: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2dad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dad48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dad48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dad4c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2dad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dad50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dad50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dad54: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x2DAD54u;
    {
        const bool branch_taken_0x2dad54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dad54) {
            ctx->pc = 0x2DAE70u;
            goto label_2dae70;
        }
    }
    ctx->pc = 0x2DAD5Cu;
    // 0x2dad5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dad60: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAD60u;
    SET_GPR_U32(ctx, 31, 0x2DAD68u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAD60u, 0x2DAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD68u;
label_2dad68:
    // 0x2dad68: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dad6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad70: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAD70u;
    SET_GPR_U32(ctx, 31, 0x2DAD78u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAD70u, 0x2DAD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD78u;
label_2dad78:
    // 0x2dad78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dad7c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2dad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dad80: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dad84: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2dad84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2dad88: 0x0  nop
    ctx->pc = 0x2dad88u;
    // NOP
    // 0x2dad8c: 0x0  nop
    ctx->pc = 0x2dad8cu;
    // NOP
    // 0x2dad90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dad94: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAD94u;
    SET_GPR_U32(ctx, 31, 0x2DAD9Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAD94u, 0x2DAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD9Cu;
label_2dad9c:
    // 0x2dad9c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dad9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dada0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dada4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DADA4u;
    SET_GPR_U32(ctx, 31, 0x2DADACu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DADA4u, 0x2DADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADACu;
label_2dadac:
    // 0x2dadac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dadacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dadb0: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2dadb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dadb4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2DADB4u;
    {
        const bool branch_taken_0x2dadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dadb4) {
            ctx->pc = 0x2DAE70u;
            goto label_2dae70;
        }
    }
    ctx->pc = 0x2DADBCu;
label_2dadbc:
    // 0x2dadbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dadc0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DADC0u;
    SET_GPR_U32(ctx, 31, 0x2DADC8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DADC0u, 0x2DADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADC8u;
label_2dadc8:
    // 0x2dadc8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dadc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dadcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dadccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadd0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DADD0u;
    SET_GPR_U32(ctx, 31, 0x2DADD8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DADD0u, 0x2DADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADD8u;
label_2dadd8:
    // 0x2dadd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2dadd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2daddc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2daddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dade0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DADE0u;
    SET_GPR_U32(ctx, 31, 0x2DADE8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DADE0u, 0x2DADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADE8u;
label_2dade8:
    // 0x2dade8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dadec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dadecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadf0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DADF0u;
    SET_GPR_U32(ctx, 31, 0x2DADF8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DADF0u, 0x2DADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DADF8u;
label_2dadf8:
    // 0x2dadf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dadfc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2dadfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dae00: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2dae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dae04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dae04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dae08: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2dae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dae0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dae0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dae10: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x2DAE10u;
    {
        const bool branch_taken_0x2dae10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dae10) {
            ctx->pc = 0x2DAE70u;
            goto label_2dae70;
        }
    }
    ctx->pc = 0x2DAE18u;
    // 0x2dae18: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dae1c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAE1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE24u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAE1Cu, 0x2DAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE24u;
label_2dae24:
    // 0x2dae24: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dae24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dae28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae2c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE34u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAE2Cu, 0x2DAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE34u;
label_2dae34:
    // 0x2dae34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dae38: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2dae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dae3c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dae40: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2dae40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2dae44: 0x0  nop
    ctx->pc = 0x2dae44u;
    // NOP
    // 0x2dae48: 0x0  nop
    ctx->pc = 0x2dae48u;
    // NOP
    // 0x2dae4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dae50: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAE50u;
    SET_GPR_U32(ctx, 31, 0x2DAE58u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAE50u, 0x2DAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE58u;
label_2dae58:
    // 0x2dae58: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2dae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dae5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae60: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAE60u;
    SET_GPR_U32(ctx, 31, 0x2DAE68u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAE60u, 0x2DAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE68u;
label_2dae68:
    // 0x2dae68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dae6c: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2dae6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2dae70:
    // 0x2dae70: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2dae70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dae74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dae78: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DAE78u;
    {
        const bool branch_taken_0x2dae78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dae78) {
            ctx->pc = 0x2DAEB0u;
            goto label_2daeb0;
        }
    }
    ctx->pc = 0x2DAE80u;
    // 0x2dae80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dae84: 0xc0b6a7c  jal         func_2DA9F0
    ctx->pc = 0x2DAE84u;
    SET_GPR_U32(ctx, 31, 0x2DAE8Cu);
    ctx->pc = 0x2DA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9F0u, 0x2DAE84u, 0x2DAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE8Cu;
label_2dae8c:
    // 0x2dae8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dae90: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x2DAE90u;
    SET_GPR_U32(ctx, 31, 0x2DAE98u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x2DAE90u, 0x2DAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAE98u;
label_2dae98:
    // 0x2dae98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dae9c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2dae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2daea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2daea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daea4: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x2daea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2daea8: 0xc08d48c  jal         func_235230
    ctx->pc = 0x2DAEA8u;
    SET_GPR_U32(ctx, 31, 0x2DAEB0u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x2DAEA8u, 0x2DAEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEB0u;
label_2daeb0:
    // 0x2daeb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2daeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2daeb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2daeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daeb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2daeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2daebc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2daebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2daec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAEC8u;
    // 0x2daec8: 0x0  nop
    ctx->pc = 0x2daec8u;
    // NOP
    // 0x2daecc: 0x0  nop
    ctx->pc = 0x2daeccu;
    // NOP
    ctx->pc = 0x2daed0u;
}
