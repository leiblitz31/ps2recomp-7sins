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

// Function: sub_0019CAE0
// Address: 0x19cae0 - 0x19cc10
void sub_0019CAE0_0x19cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CAE0_0x19cae0");
#endif

    ctx->pc = 0x19cae0u;

    // 0x19cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cae4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19cae8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x19cae8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19caec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19caf0: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19caf4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x19caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19caf8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CAF8u;
    {
        const bool branch_taken_0x19caf8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x19caf8) {
            ctx->pc = 0x19CB14u;
            goto label_19cb14;
        }
    }
    ctx->pc = 0x19CB00u;
    // 0x19cb00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19cb00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cb04: 0x0  nop
    ctx->pc = 0x19cb04u;
    // NOP
    // 0x19cb08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19cb08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cb0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CB0Cu;
    {
        const bool branch_taken_0x19cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cb0c) {
            ctx->pc = 0x19CB30u;
            goto label_19cb30;
        }
    }
    ctx->pc = 0x19CB14u;
label_19cb14:
    // 0x19cb14: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x19cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x19cb18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19cb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19cb1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19cb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19cb20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cb20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cb24: 0x0  nop
    ctx->pc = 0x19cb24u;
    // NOP
    // 0x19cb28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19cb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cb2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19cb2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19cb30:
    // 0x19cb30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cb34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19cb34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19cb38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cb3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19cb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19cb40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb44: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x19cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19cb48: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x19cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19cb4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb50: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cb54: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cb58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19cb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19cb5c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cb60: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x19cb60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19cb64: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x19cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19cb68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x19cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cb70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cb74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19cb74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19cb78: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cb7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x19cb7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19cb80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cb80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cb84: 0x0  nop
    ctx->pc = 0x19cb84u;
    // NOP
    // 0x19cb88: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19cb88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19cb8c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x19cb8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19cb90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19cb90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cb94: 0x0  nop
    ctx->pc = 0x19cb94u;
    // NOP
    // 0x19cb98: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19cb98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19cb9c: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x19cb9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x19cba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cba4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x19cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19cba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19cbac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cbb0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19cbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19cbb4: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x19cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19cbb8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x19cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19cbbc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CBBCu;
    {
        const bool branch_taken_0x19cbbc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x19cbbc) {
            ctx->pc = 0x19CBD8u;
            goto label_19cbd8;
        }
    }
    ctx->pc = 0x19CBC4u;
    // 0x19cbc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19cbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cbc8: 0x0  nop
    ctx->pc = 0x19cbc8u;
    // NOP
    // 0x19cbcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19cbccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cbd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CBD0u;
    {
        const bool branch_taken_0x19cbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cbd0) {
            ctx->pc = 0x19CBF4u;
            goto label_19cbf4;
        }
    }
    ctx->pc = 0x19CBD8u;
label_19cbd8:
    // 0x19cbd8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x19cbdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19cbe0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19cbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19cbe4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cbe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cbe8: 0x0  nop
    ctx->pc = 0x19cbe8u;
    // NOP
    // 0x19cbec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19cbecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cbf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19cbf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19cbf4:
    // 0x19cbf4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cbf8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x19cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cbfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19cbfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19cc00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19cc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19cc04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x19CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CC10u;
}
