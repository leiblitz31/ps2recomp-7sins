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

// Function: sub_001D89F0
// Address: 0x1d89f0 - 0x1d8dc0
void sub_001D89F0_0x1d89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D89F0_0x1d89f0");
#endif

    switch (ctx->pc) {
        case 0x1d8a30u: goto label_1d8a30;
        case 0x1d8a50u: goto label_1d8a50;
        case 0x1d8a70u: goto label_1d8a70;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8b8cu: goto label_1d8b8c;
        case 0x1d8bd4u: goto label_1d8bd4;
        case 0x1d8be0u: goto label_1d8be0;
        case 0x1d8bf0u: goto label_1d8bf0;
        case 0x1d8c2cu: goto label_1d8c2c;
        case 0x1d8c74u: goto label_1d8c74;
        case 0x1d8cc0u: goto label_1d8cc0;
        case 0x1d8d08u: goto label_1d8d08;
        case 0x1d8d14u: goto label_1d8d14;
        case 0x1d8d24u: goto label_1d8d24;
        case 0x1d8d60u: goto label_1d8d60;
        case 0x1d8da8u: goto label_1d8da8;
        default: break;
    }

    ctx->pc = 0x1d89f0u;

    // 0x1d89f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d89f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d89f8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1d89f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1d89fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8a00: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x1d8a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1d8a04: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x1D8A04u;
    {
        const bool branch_taken_0x1d8a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a04) {
            ctx->pc = 0x1D8DA8u;
            goto label_1d8da8;
        }
    }
    ctx->pc = 0x1D8A0Cu;
    // 0x1d8a0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8a10: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1d8a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a18: 0x148300e3  bne         $a0, $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1D8A18u;
    {
        const bool branch_taken_0x1d8a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8a18) {
            ctx->pc = 0x1D8DA8u;
            goto label_1d8da8;
        }
    }
    ctx->pc = 0x1D8A20u;
    // 0x1d8a20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a24: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d8a28: 0xc116d44  jal         func_45B510
    ctx->pc = 0x1D8A28u;
    SET_GPR_U32(ctx, 31, 0x1D8A30u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x1D8A28u, 0x1D8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A30u;
label_1d8a30:
    // 0x1d8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8a34: 0x0  nop
    ctx->pc = 0x1d8a34u;
    // NOP
    // 0x1d8a38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8a3c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d8a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1d8a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a44: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d8a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d8a48: 0xc116d44  jal         func_45B510
    ctx->pc = 0x1D8A48u;
    SET_GPR_U32(ctx, 31, 0x1D8A50u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x1D8A48u, 0x1D8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A50u;
label_1d8a50:
    // 0x1d8a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8a54: 0x0  nop
    ctx->pc = 0x1d8a54u;
    // NOP
    // 0x1d8a58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8a5c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1d8a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d8a60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a64: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d8a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d8a68: 0xc116d44  jal         func_45B510
    ctx->pc = 0x1D8A68u;
    SET_GPR_U32(ctx, 31, 0x1D8A70u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x1D8A68u, 0x1D8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A70u;
label_1d8a70:
    // 0x1d8a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8a74: 0x0  nop
    ctx->pc = 0x1d8a74u;
    // NOP
    // 0x1d8a78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8a7c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d8a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1d8a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d8a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d8a88: 0xc116d44  jal         func_45B510
    ctx->pc = 0x1D8A88u;
    SET_GPR_U32(ctx, 31, 0x1D8A90u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x1D8A88u, 0x1D8A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A90u;
label_1d8a90:
    // 0x1d8a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8a94: 0x0  nop
    ctx->pc = 0x1d8a94u;
    // NOP
    // 0x1d8a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8a9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d8aa0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1d8aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8aa4: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1d8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1d8aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8aac: 0x0  nop
    ctx->pc = 0x1d8aacu;
    // NOP
    // 0x1d8ab0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d8ab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8ab4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1d8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1d8ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8abc: 0x0  nop
    ctx->pc = 0x1d8abcu;
    // NOP
    // 0x1d8ac0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d8ac0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8ac4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d8ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1d8ac8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1d8ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8acc: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1d8accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1d8ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8ad4: 0x0  nop
    ctx->pc = 0x1d8ad4u;
    // NOP
    // 0x1d8ad8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d8ad8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8adc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1d8ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8ae4: 0x0  nop
    ctx->pc = 0x1d8ae4u;
    // NOP
    // 0x1d8ae8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d8ae8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8aec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1d8aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d8af0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d8af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8af4: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1d8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1d8af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8afc: 0x0  nop
    ctx->pc = 0x1d8afcu;
    // NOP
    // 0x1d8b00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d8b00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8b04: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1d8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1d8b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b0c: 0x0  nop
    ctx->pc = 0x1d8b0cu;
    // NOP
    // 0x1d8b10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d8b10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8b14: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d8b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1d8b18: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1d8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8b1c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1d8b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b24: 0x0  nop
    ctx->pc = 0x1d8b24u;
    // NOP
    // 0x1d8b28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d8b28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8b2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1d8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1d8b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b34: 0x0  nop
    ctx->pc = 0x1d8b34u;
    // NOP
    // 0x1d8b38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d8b38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d8b3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d8b40: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1d8b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b48: 0x0  nop
    ctx->pc = 0x1d8b48u;
    // NOP
    // 0x1d8b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8b50: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8B50u;
    {
        const bool branch_taken_0x1d8b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8b50) {
            ctx->pc = 0x1D8B6Cu;
            goto label_1d8b6c;
        }
    }
    ctx->pc = 0x1D8B58u;
    // 0x1d8b58: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d8b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8b5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d8b5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d8b60: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d8b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1d8b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8B64u;
    {
        const bool branch_taken_0x1d8b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b64) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D8B6Cu;
label_1d8b6c:
    // 0x1d8b6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b70: 0x0  nop
    ctx->pc = 0x1d8b70u;
    // NOP
    // 0x1d8b74: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1d8b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1d8b78:
    // 0x1d8b78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8b7c: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8b80: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1d8b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8b84: 0xc076f14  jal         func_1DBC50
    ctx->pc = 0x1D8B84u;
    SET_GPR_U32(ctx, 31, 0x1D8B8Cu);
    ctx->pc = 0x1DBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC50u, 0x1D8B84u, 0x1D8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B8Cu;
label_1d8b8c:
    // 0x1d8b8c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1d8b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8b94: 0x0  nop
    ctx->pc = 0x1d8b94u;
    // NOP
    // 0x1d8b98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8b9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8B9Cu;
    {
        const bool branch_taken_0x1d8b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8b9c) {
            ctx->pc = 0x1D8BB4u;
            goto label_1d8bb4;
        }
    }
    ctx->pc = 0x1D8BA4u;
    // 0x1d8ba4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1d8ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8ba8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d8ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d8bac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BACu;
    {
        const bool branch_taken_0x1d8bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bac) {
            ctx->pc = 0x1D8BC0u;
            goto label_1d8bc0;
        }
    }
    ctx->pc = 0x1D8BB4u;
label_1d8bb4:
    // 0x1d8bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8bb8: 0x0  nop
    ctx->pc = 0x1d8bb8u;
    // NOP
    // 0x1d8bbc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1d8bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1d8bc0:
    // 0x1d8bc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8bc4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8bc8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1d8bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8bcc: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1D8BCCu;
    SET_GPR_U32(ctx, 31, 0x1D8BD4u);
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1D8BCCu, 0x1D8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BD4u;
label_1d8bd4:
    // 0x1d8bd4: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x1d8bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8bd8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1D8BD8u;
    SET_GPR_U32(ctx, 31, 0x1D8BE0u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1D8BD8u, 0x1D8BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BE0u;
label_1d8be0:
    // 0x1d8be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8be8: 0xc090074  jal         func_2401D0
    ctx->pc = 0x1D8BE8u;
    SET_GPR_U32(ctx, 31, 0x1D8BF0u);
    ctx->pc = 0x2401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401D0u, 0x1D8BE8u, 0x1D8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BF0u;
label_1d8bf0:
    // 0x1d8bf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8BF0u;
    {
        const bool branch_taken_0x1d8bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8bf0) {
            ctx->pc = 0x1D8C0Cu;
            goto label_1d8c0c;
        }
    }
    ctx->pc = 0x1D8BF8u;
    // 0x1d8bf8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1d8bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8bfc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d8bfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d8c00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d8c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1d8c04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8C04u;
    {
        const bool branch_taken_0x1d8c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c04) {
            ctx->pc = 0x1D8C18u;
            goto label_1d8c18;
        }
    }
    ctx->pc = 0x1D8C0Cu;
label_1d8c0c:
    // 0x1d8c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8c10: 0x0  nop
    ctx->pc = 0x1d8c10u;
    // NOP
    // 0x1d8c14: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1d8c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1d8c18:
    // 0x1d8c18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8c1c: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8c20: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1d8c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8c24: 0xc076f38  jal         func_1DBCE0
    ctx->pc = 0x1D8C24u;
    SET_GPR_U32(ctx, 31, 0x1D8C2Cu);
    ctx->pc = 0x1DBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCE0u, 0x1D8C24u, 0x1D8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C2Cu;
label_1d8c2c:
    // 0x1d8c2c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1d8c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8c30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8c34: 0x0  nop
    ctx->pc = 0x1d8c34u;
    // NOP
    // 0x1d8c38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8c38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8c3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8C3Cu;
    {
        const bool branch_taken_0x1d8c3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8c3c) {
            ctx->pc = 0x1D8C54u;
            goto label_1d8c54;
        }
    }
    ctx->pc = 0x1D8C44u;
    // 0x1d8c44: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1d8c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8c48: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d8c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d8c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8C4Cu;
    {
        const bool branch_taken_0x1d8c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c4c) {
            ctx->pc = 0x1D8C60u;
            goto label_1d8c60;
        }
    }
    ctx->pc = 0x1D8C54u;
label_1d8c54:
    // 0x1d8c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8c58: 0x0  nop
    ctx->pc = 0x1d8c58u;
    // NOP
    // 0x1d8c5c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d8c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1d8c60:
    // 0x1d8c60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8c64: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8c68: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d8c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8c6c: 0xc076f2c  jal         func_1DBCB0
    ctx->pc = 0x1D8C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C74u);
    ctx->pc = 0x1DBCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCB0u, 0x1D8C6Cu, 0x1D8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C74u;
label_1d8c74:
    // 0x1d8c74: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d8c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8c7c: 0x0  nop
    ctx->pc = 0x1d8c7cu;
    // NOP
    // 0x1d8c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8c84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8C84u;
    {
        const bool branch_taken_0x1d8c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8c84) {
            ctx->pc = 0x1D8CA0u;
            goto label_1d8ca0;
        }
    }
    ctx->pc = 0x1D8C8Cu;
    // 0x1d8c8c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8c90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d8c90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d8c94: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1d8c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d8c98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8C98u;
    {
        const bool branch_taken_0x1d8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c98) {
            ctx->pc = 0x1D8CACu;
            goto label_1d8cac;
        }
    }
    ctx->pc = 0x1D8CA0u;
label_1d8ca0:
    // 0x1d8ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8ca4: 0x0  nop
    ctx->pc = 0x1d8ca4u;
    // NOP
    // 0x1d8ca8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1d8ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1d8cac:
    // 0x1d8cac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8cb0: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8cb4: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x1d8cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8cb8: 0xc076f44  jal         func_1DBD10
    ctx->pc = 0x1D8CB8u;
    SET_GPR_U32(ctx, 31, 0x1D8CC0u);
    ctx->pc = 0x1DBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD10u, 0x1D8CB8u, 0x1D8CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CC0u;
label_1d8cc0:
    // 0x1d8cc0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1d8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8cc8: 0x0  nop
    ctx->pc = 0x1d8cc8u;
    // NOP
    // 0x1d8ccc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8cccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8cd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8CD0u;
    {
        const bool branch_taken_0x1d8cd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8cd0) {
            ctx->pc = 0x1D8CE8u;
            goto label_1d8ce8;
        }
    }
    ctx->pc = 0x1D8CD8u;
    // 0x1d8cd8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d8cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8cdc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1d8cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d8ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8CE0u;
    {
        const bool branch_taken_0x1d8ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ce0) {
            ctx->pc = 0x1D8CF4u;
            goto label_1d8cf4;
        }
    }
    ctx->pc = 0x1D8CE8u;
label_1d8ce8:
    // 0x1d8ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8cec: 0x0  nop
    ctx->pc = 0x1d8cecu;
    // NOP
    // 0x1d8cf0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1d8cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d8cf4:
    // 0x1d8cf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8cf8: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8cfc: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1d8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8d00: 0xc076f50  jal         func_1DBD40
    ctx->pc = 0x1D8D00u;
    SET_GPR_U32(ctx, 31, 0x1D8D08u);
    ctx->pc = 0x1DBD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD40u, 0x1D8D00u, 0x1D8D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D08u;
label_1d8d08:
    // 0x1d8d08: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1d8d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8d0c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1D8D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8D14u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1D8D0Cu, 0x1D8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D14u;
label_1d8d14:
    // 0x1d8d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8d1c: 0xc090074  jal         func_2401D0
    ctx->pc = 0x1D8D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8D24u);
    ctx->pc = 0x2401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401D0u, 0x1D8D1Cu, 0x1D8D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D24u;
label_1d8d24:
    // 0x1d8d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8D24u;
    {
        const bool branch_taken_0x1d8d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d24) {
            ctx->pc = 0x1D8D40u;
            goto label_1d8d40;
        }
    }
    ctx->pc = 0x1D8D2Cu;
    // 0x1d8d2c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8d30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d8d30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d8d34: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1d8d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d8d38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8D38u;
    {
        const bool branch_taken_0x1d8d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d38) {
            ctx->pc = 0x1D8D4Cu;
            goto label_1d8d4c;
        }
    }
    ctx->pc = 0x1D8D40u;
label_1d8d40:
    // 0x1d8d40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8d44: 0x0  nop
    ctx->pc = 0x1d8d44u;
    // NOP
    // 0x1d8d48: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1d8d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1d8d4c:
    // 0x1d8d4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8d50: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8d54: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1d8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8d58: 0xc076f68  jal         func_1DBDA0
    ctx->pc = 0x1D8D58u;
    SET_GPR_U32(ctx, 31, 0x1D8D60u);
    ctx->pc = 0x1DBDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDA0u, 0x1D8D58u, 0x1D8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8D60u;
label_1d8d60:
    // 0x1d8d60: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1d8d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8d68: 0x0  nop
    ctx->pc = 0x1d8d68u;
    // NOP
    // 0x1d8d6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8d6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8d70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D70u;
    {
        const bool branch_taken_0x1d8d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8d70) {
            ctx->pc = 0x1D8D88u;
            goto label_1d8d88;
        }
    }
    ctx->pc = 0x1D8D78u;
    // 0x1d8d78: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1d8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8d7c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d8d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d8d80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8D80u;
    {
        const bool branch_taken_0x1d8d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d80) {
            ctx->pc = 0x1D8D94u;
            goto label_1d8d94;
        }
    }
    ctx->pc = 0x1D8D88u;
label_1d8d88:
    // 0x1d8d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d8d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8d8c: 0x0  nop
    ctx->pc = 0x1d8d8cu;
    // NOP
    // 0x1d8d90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d8d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d8d94:
    // 0x1d8d94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8d98: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d8d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d8d9c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1d8d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8da0: 0xc076f5c  jal         func_1DBD70
    ctx->pc = 0x1D8DA0u;
    SET_GPR_U32(ctx, 31, 0x1D8DA8u);
    ctx->pc = 0x1DBD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD70u, 0x1D8DA0u, 0x1D8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8DA8u;
label_1d8da8:
    // 0x1d8da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8dac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d8db0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DB8u;
    // 0x1d8db8: 0x0  nop
    ctx->pc = 0x1d8db8u;
    // NOP
    // 0x1d8dbc: 0x0  nop
    ctx->pc = 0x1d8dbcu;
    // NOP
    ctx->pc = 0x1d8dc0u;
}
