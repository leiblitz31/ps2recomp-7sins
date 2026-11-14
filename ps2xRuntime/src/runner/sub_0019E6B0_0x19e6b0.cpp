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

// Function: sub_0019E6B0
// Address: 0x19e6b0 - 0x19e7e0
void sub_0019E6B0_0x19e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E6B0_0x19e6b0");
#endif

    switch (ctx->pc) {
        case 0x19e75cu: goto label_19e75c;
        case 0x19e7a4u: goto label_19e7a4;
        default: break;
    }

    ctx->pc = 0x19e6b0u;

    // 0x19e6b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e6b8: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x19e6b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19e6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19e6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e6c4: 0x0  nop
    ctx->pc = 0x19e6c4u;
    // NOP
    // 0x19e6c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19e6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19e6cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19e6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e6d4: 0x0  nop
    ctx->pc = 0x19e6d4u;
    // NOP
    // 0x19e6d8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19e6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19e6dc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e6e0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e6e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e6e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19e6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19e6ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19e6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e6f0: 0x0  nop
    ctx->pc = 0x19e6f0u;
    // NOP
    // 0x19e6f4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19e6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19e6f8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x19e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19e6fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19e700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e704: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x19e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e70c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x19e70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e710: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x19E710u;
    {
        const bool branch_taken_0x19e710 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e710) {
            ctx->pc = 0x19E770u;
            goto label_19e770;
        }
    }
    ctx->pc = 0x19E718u;
    // 0x19e718: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x19e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e71c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19e720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19e724: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19e724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19e728: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19e72c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e730: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e734: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19e734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e738: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x19e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e73c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e744: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x19e744u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x19e748: 0x0  nop
    ctx->pc = 0x19e748u;
    // NOP
    // 0x19e74c: 0x0  nop
    ctx->pc = 0x19e74cu;
    // NOP
    // 0x19e750: 0x0  nop
    ctx->pc = 0x19e750u;
    // NOP
    // 0x19e754: 0xc0c3816  jal         func_30E058
    ctx->pc = 0x19E754u;
    SET_GPR_U32(ctx, 31, 0x19E75Cu);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x19E754u, 0x19E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E75Cu;
label_19e75c:
    // 0x19e75c: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x19e75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e764: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19e764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19e768: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19E768u;
    {
        const bool branch_taken_0x19e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e768) {
            ctx->pc = 0x19E7C4u;
            goto label_19e7c4;
        }
    }
    ctx->pc = 0x19E770u;
label_19e770:
    // 0x19e770: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19e774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e778: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e77c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19e77cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e780: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19e780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19e784: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x19e784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e788: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19e78c: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x19e78cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x19e790: 0x0  nop
    ctx->pc = 0x19e790u;
    // NOP
    // 0x19e794: 0x0  nop
    ctx->pc = 0x19e794u;
    // NOP
    // 0x19e798: 0x0  nop
    ctx->pc = 0x19e798u;
    // NOP
    // 0x19e79c: 0xc0c3816  jal         func_30E058
    ctx->pc = 0x19E79Cu;
    SET_GPR_U32(ctx, 31, 0x19E7A4u);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x19E79Cu, 0x19E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7A4u;
label_19e7a4:
    // 0x19e7a4: 0xc7838154  lwc1        $f3, -0x7EAC($gp)
    ctx->pc = 0x19e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19e7a8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19e7ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19e7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19e7b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19e7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e7b4: 0x0  nop
    ctx->pc = 0x19e7b4u;
    // NOP
    // 0x19e7b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x19e7b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x19e7bc: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x19e7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x19e7c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x19e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19e7c4:
    // 0x19e7c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x19e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19e7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E7D8u;
    // 0x19e7d8: 0x0  nop
    ctx->pc = 0x19e7d8u;
    // NOP
    // 0x19e7dc: 0x0  nop
    ctx->pc = 0x19e7dcu;
    // NOP
    ctx->pc = 0x19e7e0u;
}
