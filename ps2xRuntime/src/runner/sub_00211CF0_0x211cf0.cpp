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

// Function: sub_00211CF0
// Address: 0x211cf0 - 0x211e40
void sub_00211CF0_0x211cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211CF0_0x211cf0");
#endif

    switch (ctx->pc) {
        case 0x211e24u: goto label_211e24;
        default: break;
    }

    ctx->pc = 0x211cf0u;

    // 0x211cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x211cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x211cfc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x211cfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x211d00: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x211d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x211d04: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d08: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x211d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211d0c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x211d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x211d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x211d14: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x211d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x211d18: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x211d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211d1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211d20: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x211d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211d24: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x211d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211d28: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x211d28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211d2c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x211d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211d30: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x211d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211d3c: 0x0  nop
    ctx->pc = 0x211d3cu;
    // NOP
    // 0x211d40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211d40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211d44: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211d48: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x211d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x211d4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x211d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211d50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211d54: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x211d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211d58: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x211d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211d5c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x211d5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211d60: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x211d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211d64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d68: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x211d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211d6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211d70: 0x0  nop
    ctx->pc = 0x211d70u;
    // NOP
    // 0x211d74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211d74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211d78: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211d7c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x211d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x211d80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d84: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x211d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211d88: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x211d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211d8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211d90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x211d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211d98: 0x0  nop
    ctx->pc = 0x211d98u;
    // NOP
    // 0x211d9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211d9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211da0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x211da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x211da4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x211da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x211da8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211dac: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x211dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x211db0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x211db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211db4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211db8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x211db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211dc0: 0x0  nop
    ctx->pc = 0x211dc0u;
    // NOP
    // 0x211dc4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211dc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211dc8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x211dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x211dcc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x211dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x211dd0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211dd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x211dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211dd8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211ddc: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x211ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x211de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211de4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x211DE4u;
    {
        const bool branch_taken_0x211de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211de4) {
            ctx->pc = 0x211DFCu;
            goto label_211dfc;
        }
    }
    ctx->pc = 0x211DECu;
    // 0x211dec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211df0: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x211df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211df4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211df8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x211df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_211dfc:
    // 0x211dfc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e00: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x211e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211e04: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x211e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e08: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x211e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211e0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x211e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211e10: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x211E10u;
    {
        const bool branch_taken_0x211e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211e10) {
            ctx->pc = 0x211E24u;
            goto label_211e24;
        }
    }
    ctx->pc = 0x211E18u;
    // 0x211e18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x211e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e1c: 0xc08472c  jal         func_211CB0
    ctx->pc = 0x211E1Cu;
    SET_GPR_U32(ctx, 31, 0x211E24u);
    ctx->pc = 0x211CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211CB0u, 0x211E1Cu, 0x211E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211E24u;
label_211e24:
    // 0x211e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211e28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x211e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x211E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211E34u;
    // 0x211e34: 0x0  nop
    ctx->pc = 0x211e34u;
    // NOP
    // 0x211e38: 0x0  nop
    ctx->pc = 0x211e38u;
    // NOP
    // 0x211e3c: 0x0  nop
    ctx->pc = 0x211e3cu;
    // NOP
    ctx->pc = 0x211e40u;
}
