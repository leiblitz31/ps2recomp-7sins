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

// Function: sub_001B5DF0
// Address: 0x1b5df0 - 0x1b60b0
void sub_001B5DF0_0x1b5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5DF0_0x1b5df0");
#endif

    switch (ctx->pc) {
        case 0x1b5e18u: goto label_1b5e18;
        case 0x1b5fdcu: goto label_1b5fdc;
        case 0x1b5ffcu: goto label_1b5ffc;
        case 0x1b605cu: goto label_1b605c;
        default: break;
    }

    ctx->pc = 0x1b5df0u;

    // 0x1b5df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5dfc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b5dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b5e00: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1b5e00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b5e04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5e08: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b5e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e10: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B5E10u;
    SET_GPR_U32(ctx, 31, 0x1B5E18u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B5E10u, 0x1B5E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E18u;
label_1b5e18:
    // 0x1b5e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e1c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1b5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e24: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b5e24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b5e28: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b5e30: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b5e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b5e34: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b5e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5e38: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b5e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5e40: 0x0  nop
    ctx->pc = 0x1b5e40u;
    // NOP
    // 0x1b5e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5e48: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1B5E48u;
    {
        const bool branch_taken_0x1b5e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5e48) {
            ctx->pc = 0x1B5F08u;
            goto label_1b5f08;
        }
    }
    ctx->pc = 0x1B5E50u;
    // 0x1b5e50: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b5e54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5e58: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b5e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5e5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b5e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5e60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5e64: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1b5e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1b5e68: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1b5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5e6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b5e70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b5e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5e74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5e78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5e80: 0x0  nop
    ctx->pc = 0x1b5e80u;
    // NOP
    // 0x1b5e84: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b5e84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b5e88: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1b5e88u;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b5e8c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b5e90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b5e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5e94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5e98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5e9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5ea0: 0x0  nop
    ctx->pc = 0x1b5ea0u;
    // NOP
    // 0x1b5ea4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b5ea4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b5ea8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b5ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b5eac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5eb0: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1b5eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x1b5eb4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1b5eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5eb8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b5ebc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b5ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5ec0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5ec4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5ecc: 0x0  nop
    ctx->pc = 0x1b5eccu;
    // NOP
    // 0x1b5ed0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b5ed0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b5ed4: 0x460310dd  msub.s      $f3, $f2, $f3
    ctx->pc = 0x1b5ed4u;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b5ed8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b5edc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b5edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5ee0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5ee4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5eec: 0x0  nop
    ctx->pc = 0x1b5eecu;
    // NOP
    // 0x1b5ef0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b5ef0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b5ef4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b5ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b5ef8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5efc: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x1b5efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x1b5f00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B5F00u;
    {
        const bool branch_taken_0x1b5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f00) {
            ctx->pc = 0x1B5F38u;
            goto label_1b5f38;
        }
    }
    ctx->pc = 0x1B5F08u;
label_1b5f08:
    // 0x1b5f08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f14: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1b5f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1b5f18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f24: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1b5f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x1b5f28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f34: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x1b5f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_1b5f38:
    // 0x1b5f38: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b5f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5f3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b5f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f44: 0x0  nop
    ctx->pc = 0x1b5f44u;
    // NOP
    // 0x1b5f48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b5f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5f4c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B5F4Cu;
    {
        const bool branch_taken_0x1b5f4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5f4c) {
            ctx->pc = 0x1B5FB0u;
            goto label_1b5fb0;
        }
    }
    ctx->pc = 0x1B5F54u;
    // 0x1b5f54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f58: 0xc46000c8  lwc1        $f0, 0xC8($v1)
    ctx->pc = 0x1b5f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5f5c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f60: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1b5f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x1b5f64: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5f68: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5f6c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b5f6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b5f70: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f74: 0xc46100cc  lwc1        $f1, 0xCC($v1)
    ctx->pc = 0x1b5f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5f78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f7c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b5f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5f80: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1b5f80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b5f84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5f88: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1b5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5f8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f90: 0x0  nop
    ctx->pc = 0x1b5f90u;
    // NOP
    // 0x1b5f94: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b5f94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b5f98: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b5f98u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b5f9c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5fa0: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x1b5fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x1b5fa4: 0xa380bb34  sb          $zero, -0x44CC($gp)
    ctx->pc = 0x1b5fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949684), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5fa8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B5FA8u;
    {
        const bool branch_taken_0x1b5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fa8) {
            ctx->pc = 0x1B609Cu;
            goto label_1b609c;
        }
    }
    ctx->pc = 0x1B5FB0u;
label_1b5fb0:
    // 0x1b5fb0: 0x9382bb34  lbu         $v0, -0x44CC($gp)
    ctx->pc = 0x1b5fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949684)));
    // 0x1b5fb4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5FB4u;
    {
        const bool branch_taken_0x1b5fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5fb4) {
            ctx->pc = 0x1B5FE4u;
            goto label_1b5fe4;
        }
    }
    ctx->pc = 0x1B5FBCu;
    // 0x1b5fbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5fc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b5fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5fc4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1b5fc8: 0x27859528  addiu       $a1, $gp, -0x6AD8
    ctx->pc = 0x1b5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939944));
    // 0x1b5fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5fd0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1b5fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5fd4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1B5FD4u;
    SET_GPR_U32(ctx, 31, 0x1B5FDCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1B5FD4u, 0x1B5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FDCu;
label_1b5fdc:
    // 0x1b5fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5fe0: 0xa382bb34  sb          $v0, -0x44CC($gp)
    ctx->pc = 0x1b5fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949684), (uint8_t)GPR_U32(ctx, 2));
label_1b5fe4:
    // 0x1b5fe4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5fe8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5fec: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x1b5fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1b5ff0: 0x244500c8  addiu       $a1, $v0, 0xC8
    ctx->pc = 0x1b5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1b5ff4: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1B5FF4u;
    SET_GPR_U32(ctx, 31, 0x1B5FFCu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1B5FF4u, 0x1B5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FFCu;
label_1b5ffc:
    // 0x1b5ffc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6004: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6008: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b6008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b600c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6014: 0x0  nop
    ctx->pc = 0x1b6014u;
    // NOP
    // 0x1b6018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b6018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b601c: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x1b601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6020: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b6020u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b6024: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b6024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b6028: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b602c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6034: 0x0  nop
    ctx->pc = 0x1b6034u;
    // NOP
    // 0x1b6038: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b6038u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b603c: 0xc782838c  lwc1        $f2, -0x7C74($gp)
    ctx->pc = 0x1b603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6040: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1b6040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6048: 0x0  nop
    ctx->pc = 0x1b6048u;
    // NOP
    // 0x1b604c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b604cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b6050: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x1b6050u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6054: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1B6054u;
    SET_GPR_U32(ctx, 31, 0x1B605Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1B6054u, 0x1B605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B605Cu;
label_1b605c:
    // 0x1b605c: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1b605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6060: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6064: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b6064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6068: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b6068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b606c: 0x0  nop
    ctx->pc = 0x1b606cu;
    // NOP
    // 0x1b6070: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1b6070u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1b6074: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1b6074u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1b6078: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b607c: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x1b607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x1b6080: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b6080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6084: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b608c: 0xc48000dc  lwc1        $f0, 0xDC($a0)
    ctx->pc = 0x1b608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6090: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b6090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6094: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b6094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6098: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1b6098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
label_1b609c:
    // 0x1b609c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b609cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b60a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b60a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b60a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b60a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b60a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B60B0u;
}
