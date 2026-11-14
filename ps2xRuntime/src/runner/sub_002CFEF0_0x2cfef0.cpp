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

// Function: sub_002CFEF0
// Address: 0x2cfef0 - 0x2cffc0
void sub_002CFEF0_0x2cfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFEF0_0x2cfef0");
#endif

    switch (ctx->pc) {
        case 0x2cff54u: goto label_2cff54;
        default: break;
    }

    ctx->pc = 0x2cfef0u;

    // 0x2cfef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cfef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cfef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cfef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cfef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cfefc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cfefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cff00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2cff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2cff04: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x2cff04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2cff08: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2cff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2cff0c: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2cff0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cff10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff14: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cff18: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2cff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cff1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff20: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2cff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cff24: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CFF24u;
    {
        const bool branch_taken_0x2cff24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cff24) {
            ctx->pc = 0x2CFFA4u;
            goto label_2cffa4;
        }
    }
    ctx->pc = 0x2CFF2Cu;
    // 0x2cff2c: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x2cff2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2cff30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFF30u;
    {
        const bool branch_taken_0x2cff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff30) {
            ctx->pc = 0x2CFF5Cu;
            goto label_2cff5c;
        }
    }
    ctx->pc = 0x2CFF38u;
    // 0x2cff38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2cff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cff40: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2cff40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2cff44: 0x24c6fea0  addiu       $a2, $a2, -0x160
    ctx->pc = 0x2cff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966944));
    // 0x2cff48: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2cff48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cff4c: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2CFF4Cu;
    SET_GPR_U32(ctx, 31, 0x2CFF54u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2CFF4Cu, 0x2CFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF54u;
label_2cff54:
    // 0x2cff54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CFF54u;
    {
        const bool branch_taken_0x2cff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff54) {
            ctx->pc = 0x2CFFA4u;
            goto label_2cffa4;
        }
    }
    ctx->pc = 0x2CFF5Cu;
label_2cff5c:
    // 0x2cff5c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2cff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cff60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cff60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cff64: 0x0  nop
    ctx->pc = 0x2cff64u;
    // NOP
    // 0x2cff68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cff68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cff6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFF6Cu;
    {
        const bool branch_taken_0x2cff6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cff6c) {
            ctx->pc = 0x2CFF80u;
            goto label_2cff80;
        }
    }
    ctx->pc = 0x2CFF74u;
    // 0x2cff74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CFF78u;
    {
        const bool branch_taken_0x2cff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff78) {
            ctx->pc = 0x2CFFA8u;
            goto label_2cffa8;
        }
    }
    ctx->pc = 0x2CFF80u;
label_2cff80:
    // 0x2cff80: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2cff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cff84: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2cff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cff88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cff8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFF8Cu;
    {
        const bool branch_taken_0x2cff8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cff8c) {
            ctx->pc = 0x2CFFA4u;
            goto label_2cffa4;
        }
    }
    ctx->pc = 0x2CFF94u;
    // 0x2cff94: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2cff94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff98: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2cff98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2cff9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cffa0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2cffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2cffa4:
    // 0x2cffa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2cffa8:
    // 0x2cffa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cffac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cffacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cffb0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2cffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFFBCu;
    // 0x2cffbc: 0x0  nop
    ctx->pc = 0x2cffbcu;
    // NOP
    ctx->pc = 0x2cffc0u;
}
