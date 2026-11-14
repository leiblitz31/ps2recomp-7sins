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

// Function: sub_00211E40
// Address: 0x211e40 - 0x212100
void sub_00211E40_0x211e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211E40_0x211e40");
#endif

    switch (ctx->pc) {
        case 0x211ee8u: goto label_211ee8;
        case 0x211ff8u: goto label_211ff8;
        case 0x212078u: goto label_212078;
        case 0x212098u: goto label_212098;
        case 0x2120bcu: goto label_2120bc;
        case 0x2120d4u: goto label_2120d4;
        case 0x2120e8u: goto label_2120e8;
        default: break;
    }

    ctx->pc = 0x211e40u;

    // 0x211e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x211e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x211e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211e48: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x211e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x211e4c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x211e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x211e50: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x211e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x211e54: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211e58: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x211e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211e5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x211e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211e64: 0x0  nop
    ctx->pc = 0x211e64u;
    // NOP
    // 0x211e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x211e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211e6c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x211E6Cu;
    {
        const bool branch_taken_0x211e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211e6c) {
            ctx->pc = 0x211E88u;
            goto label_211e88;
        }
    }
    ctx->pc = 0x211E74u;
    // 0x211e74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211e78: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x211e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211e7c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x211e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x211e80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x211E80u;
    {
        const bool branch_taken_0x211e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211e80) {
            ctx->pc = 0x211EC0u;
            goto label_211ec0;
        }
    }
    ctx->pc = 0x211E88u;
label_211e88:
    // 0x211e88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211e8c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x211e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211e90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x211e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211e94: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x211e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211e98: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x211e98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211e9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211ea0: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x211ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x211ea4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x211ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211ea8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x211ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211eb0: 0x0  nop
    ctx->pc = 0x211eb0u;
    // NOP
    // 0x211eb4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x211eb4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x211eb8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x211eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x211ebc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x211ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_211ec0:
    // 0x211ec0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x211ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211ec4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x211ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x211ec8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211ecc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211ed0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x211ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211ed4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x211ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211ed8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x211ed8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211edc: 0xc78d8254  lwc1        $f13, -0x7DAC($gp)
    ctx->pc = 0x211edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x211ee0: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x211EE0u;
    SET_GPR_U32(ctx, 31, 0x211EE8u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x211EE0u, 0x211EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211EE8u;
label_211ee8:
    // 0x211ee8: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x211ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211eec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x211eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x211ef0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x211ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x211ef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x211ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211efc: 0x0  nop
    ctx->pc = 0x211efcu;
    // NOP
    // 0x211f00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x211f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x211f04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f08: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x211f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f10: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x211f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x211f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211f18: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x211F18u;
    {
        const bool branch_taken_0x211f18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x211f18) {
            ctx->pc = 0x211F48u;
            goto label_211f48;
        }
    }
    ctx->pc = 0x211F20u;
    // 0x211f20: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x211f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f28: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x211f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f2c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x211f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x211f30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211f34: 0x0  nop
    ctx->pc = 0x211f34u;
    // NOP
    // 0x211f38: 0x0  nop
    ctx->pc = 0x211f38u;
    // NOP
    // 0x211f3c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x211f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x211f40: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x211F40u;
    {
        const bool branch_taken_0x211f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f40) {
            ctx->pc = 0x211FE0u;
            goto label_211fe0;
        }
    }
    ctx->pc = 0x211F48u;
label_211f48:
    // 0x211f48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f4c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x211f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f54: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x211f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x211f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211f5c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x211F5Cu;
    {
        const bool branch_taken_0x211f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211f5c) {
            ctx->pc = 0x211F78u;
            goto label_211f78;
        }
    }
    ctx->pc = 0x211F64u;
    // 0x211f64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211f68: 0x0  nop
    ctx->pc = 0x211f68u;
    // NOP
    // 0x211f6c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x211f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x211f70: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x211F70u;
    {
        const bool branch_taken_0x211f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211f70) {
            ctx->pc = 0x211FE0u;
            goto label_211fe0;
        }
    }
    ctx->pc = 0x211F78u;
label_211f78:
    // 0x211f78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f7c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x211f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211f80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f84: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x211f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x211f88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211f8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211f90: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x211f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211f94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x211f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211f98: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x211F98u;
    {
        const bool branch_taken_0x211f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x211f98) {
            ctx->pc = 0x211FE0u;
            goto label_211fe0;
        }
    }
    ctx->pc = 0x211FA0u;
    // 0x211fa0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fa4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x211fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211fa8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fac: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x211facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211fb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x211fb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x211fb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fb8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x211fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211fbc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x211fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x211fc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fc4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x211fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211fc8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x211fc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x211fcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x211fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x211fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x211fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211fd4: 0x0  nop
    ctx->pc = 0x211fd4u;
    // NOP
    // 0x211fd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x211fd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x211fdc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x211fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_211fe0:
    // 0x211fe0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x211fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211fe4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x211fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x211fe8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x211fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211fec: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x211fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x211ff0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x211FF0u;
    SET_GPR_U32(ctx, 31, 0x211FF8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x211FF0u, 0x211FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FF8u;
label_211ff8:
    // 0x211ff8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x211ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x211ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x211ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212000: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x212000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212004: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x212004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x212008: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x212008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21200c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x21200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x212010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212014: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x212014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212018: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x212018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21201c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21201cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x212020: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x212020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212024: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x212024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x212028: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x212028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21202c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x21202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212030: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x212030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212034: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x212034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21203c: 0x0  nop
    ctx->pc = 0x21203cu;
    // NOP
    // 0x212040: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x212040u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x212044: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x212044u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x212048: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x212048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21204c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x21204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212050: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x212050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212054: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x212054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21205c: 0x0  nop
    ctx->pc = 0x21205cu;
    // NOP
    // 0x212060: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x212060u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x212064: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x212064u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x212068: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x212068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21206c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21206cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212070: 0xc08c208  jal         func_230820
    ctx->pc = 0x212070u;
    SET_GPR_U32(ctx, 31, 0x212078u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x212070u, 0x212078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212078u;
label_212078:
    // 0x212078: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x212078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21207c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x21207cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x212080: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x212080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212084: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x212084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x212088: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x212088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21208c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212090: 0xc08c64c  jal         func_231930
    ctx->pc = 0x212090u;
    SET_GPR_U32(ctx, 31, 0x212098u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x212090u, 0x212098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212098u;
label_212098:
    // 0x212098: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x212098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21209c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x21209cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2120a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2120a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2120a4: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x2120a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2120a8: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x2120a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2120ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2120acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2120b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2120b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2120b4: 0xc08c544  jal         func_231510
    ctx->pc = 0x2120B4u;
    SET_GPR_U32(ctx, 31, 0x2120BCu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x2120B4u, 0x2120BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120BCu;
label_2120bc:
    // 0x2120bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2120bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2120c0: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2120c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2120c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2120c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2120c8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2120c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2120cc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x2120CCu;
    SET_GPR_U32(ctx, 31, 0x2120D4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x2120CCu, 0x2120D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120D4u;
label_2120d4:
    // 0x2120d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2120d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2120d8: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2120d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2120dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2120dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2120e0: 0xc08c258  jal         func_230960
    ctx->pc = 0x2120E0u;
    SET_GPR_U32(ctx, 31, 0x2120E8u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x2120E0u, 0x2120E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2120E8u;
label_2120e8:
    // 0x2120e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2120e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2120ec: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2120ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2120f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2120F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2120F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2120F8u;
    // 0x2120f8: 0x0  nop
    ctx->pc = 0x2120f8u;
    // NOP
    // 0x2120fc: 0x0  nop
    ctx->pc = 0x2120fcu;
    // NOP
    ctx->pc = 0x212100u;
}
