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

// Function: sub_002D6C90
// Address: 0x2d6c90 - 0x2d6f30
void sub_002D6C90_0x2d6c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6C90_0x2d6c90");
#endif

    switch (ctx->pc) {
        case 0x2d6cf8u: goto label_2d6cf8;
        case 0x2d6f20u: goto label_2d6f20;
        default: break;
    }

    ctx->pc = 0x2d6c90u;

    // 0x2d6c90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d6c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d6c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6c98: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2d6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2d6c9c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2d6c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2d6ca0: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2d6ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2d6ca4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6ca8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6cac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6cb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6cb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6cb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6cb8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d6cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d6cbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6cc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6cc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6cc8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6cd0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d6cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d6cd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6cd8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6cdc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6ce0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ce4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6ce8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d6ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d6cec: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2d6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d6cf0: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D6CF0u;
    SET_GPR_U32(ctx, 31, 0x2D6CF8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D6CF0u, 0x2D6CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CF8u;
label_2d6cf8:
    // 0x2d6cf8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2d6cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d6cfc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d00: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x2d6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d6d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6d08: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D6D08u;
    {
        const bool branch_taken_0x2d6d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6d08) {
            ctx->pc = 0x2D6DA0u;
            goto label_2d6da0;
        }
    }
    ctx->pc = 0x2D6D10u;
    // 0x2d6d10: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6d14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6d1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d20: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x2d6d20u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6d24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6d28: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6d30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d34: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2d6d34u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6d38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6d3c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6d44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d48: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x2d6d48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6d4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6d50: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6d58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6d60: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2d6d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d6d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6d68: 0x0  nop
    ctx->pc = 0x2d6d68u;
    // NOP
    // 0x2d6d6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d6d6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d6d70: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x2d6d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2d6d74: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d6d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d6d78: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2d6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d7c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2d6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d6d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d6d84: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6d88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6d88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6d8c: 0x0  nop
    ctx->pc = 0x2d6d8cu;
    // NOP
    // 0x2d6d90: 0x0  nop
    ctx->pc = 0x2d6d90u;
    // NOP
    // 0x2d6d94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d6d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d6d98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6D98u;
    {
        const bool branch_taken_0x2d6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d98) {
            ctx->pc = 0x2D6DB0u;
            goto label_2d6db0;
        }
    }
    ctx->pc = 0x2D6DA0u;
label_2d6da0:
    // 0x2d6da0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2d6da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6da8: 0x0  nop
    ctx->pc = 0x2d6da8u;
    // NOP
    // 0x2d6dac: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2d6db0:
    // 0x2d6db0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2d6db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6db8: 0x0  nop
    ctx->pc = 0x2d6db8u;
    // NOP
    // 0x2d6dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d6dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6dc0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2D6DC0u;
    {
        const bool branch_taken_0x2d6dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6dc0) {
            ctx->pc = 0x2D6DF4u;
            goto label_2d6df4;
        }
    }
    ctx->pc = 0x2D6DC8u;
    // 0x2d6dc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6dcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6dd0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d6dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d6dd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6dd8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d6dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ddc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d6ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d6de0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6de4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6de8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d6de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d6dec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D6DECu;
    {
        const bool branch_taken_0x2d6dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6dec) {
            ctx->pc = 0x2D6ED8u;
            goto label_2d6ed8;
        }
    }
    ctx->pc = 0x2D6DF4u;
label_2d6df4:
    // 0x2d6df4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2d6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d6dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6e00: 0x0  nop
    ctx->pc = 0x2d6e00u;
    // NOP
    // 0x2d6e04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d6e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6e08: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2D6E08u;
    {
        const bool branch_taken_0x2d6e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6e08) {
            ctx->pc = 0x2D6E3Cu;
            goto label_2d6e3c;
        }
    }
    ctx->pc = 0x2D6E10u;
    // 0x2d6e10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6e14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e18: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d6e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d6e1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6e20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d6e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d6e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d6e28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6e2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d6e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d6e34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D6E34u;
    {
        const bool branch_taken_0x2d6e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e34) {
            ctx->pc = 0x2D6ED8u;
            goto label_2d6ed8;
        }
    }
    ctx->pc = 0x2D6E3Cu;
label_2d6e3c:
    // 0x2d6e3c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6e40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6e48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e4c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2d6e4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6e50: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2d6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6e54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6e58: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6e60: 0x0  nop
    ctx->pc = 0x2d6e60u;
    // NOP
    // 0x2d6e64: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d6e64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d6e68: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2d6e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d6e6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d6e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d6e70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6e74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6e7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e80: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2d6e80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6e84: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2d6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6e88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6e8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6e94: 0x0  nop
    ctx->pc = 0x2d6e94u;
    // NOP
    // 0x2d6e98: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d6e98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d6e9c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2d6e9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d6ea0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d6ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d6ea4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6ea8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6eac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6eb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6eb4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2d6eb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6eb8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2d6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6ebc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6ec0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6ec8: 0x0  nop
    ctx->pc = 0x2d6ec8u;
    // NOP
    // 0x2d6ecc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d6eccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d6ed0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2d6ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d6ed4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d6ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2d6ed8:
    // 0x2d6ed8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2d6ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6edc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6ee0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6ee8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d6ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d6eec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6ef0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6ef4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ef8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d6ef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d6efc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d6f00: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6f04: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6f08: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d6f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6f0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d6f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d6f10: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d6f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d6f14: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2d6f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2d6f18: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D6F18u;
    SET_GPR_U32(ctx, 31, 0x2D6F20u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D6F18u, 0x2D6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F20u;
label_2d6f20:
    // 0x2d6f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6f24: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d6f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d6f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6F30u;
}
