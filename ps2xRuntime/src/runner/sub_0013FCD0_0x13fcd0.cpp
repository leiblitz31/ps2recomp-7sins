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

// Function: sub_0013FCD0
// Address: 0x13fcd0 - 0x13fef0
void sub_0013FCD0_0x13fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FCD0_0x13fcd0");
#endif

    switch (ctx->pc) {
        case 0x13fd10u: goto label_13fd10;
        case 0x13fd1cu: goto label_13fd1c;
        case 0x13fd4cu: goto label_13fd4c;
        case 0x13fd9cu: goto label_13fd9c;
        case 0x13fdbcu: goto label_13fdbc;
        case 0x13fe14u: goto label_13fe14;
        case 0x13fe48u: goto label_13fe48;
        case 0x13fe60u: goto label_13fe60;
        case 0x13fe78u: goto label_13fe78;
        case 0x13fec0u: goto label_13fec0;
        case 0x13fed0u: goto label_13fed0;
        default: break;
    }

    ctx->pc = 0x13fcd0u;

    // 0x13fcd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13fcd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13fcd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13fcd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13fcdc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13fce0: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x13fce4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fce8: 0x10020079  beq         $zero, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x13FCE8u;
    {
        const bool branch_taken_0x13fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13fce8) {
            ctx->pc = 0x13FED0u;
            goto label_13fed0;
        }
    }
    ctx->pc = 0x13FCF0u;
    // 0x13fcf0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fcf4: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x13fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13fcf8: 0x10020075  beq         $zero, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x13FCF8u;
    {
        const bool branch_taken_0x13fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13fcf8) {
            ctx->pc = 0x13FED0u;
            goto label_13fed0;
        }
    }
    ctx->pc = 0x13FD00u;
    // 0x13fd00: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fd04: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13fd08: 0xc097444  jal         func_25D110
    ctx->pc = 0x13FD08u;
    SET_GPR_U32(ctx, 31, 0x13FD10u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13FD08u, 0x13FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD10u;
label_13fd10:
    // 0x13fd10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd14: 0xc089ad0  jal         func_226B40
    ctx->pc = 0x13FD14u;
    SET_GPR_U32(ctx, 31, 0x13FD1Cu);
    ctx->pc = 0x226B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B40u, 0x13FD14u, 0x13FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD1Cu;
label_13fd1c:
    // 0x13fd1c: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x13FD1Cu;
    {
        const bool branch_taken_0x13fd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd1c) {
            ctx->pc = 0x13FED0u;
            goto label_13fed0;
        }
    }
    ctx->pc = 0x13FD24u;
    // 0x13fd24: 0x8f83ba80  lw          $v1, -0x4580($gp)
    ctx->pc = 0x13fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fd28: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x13fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x13fd2c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x13fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fd30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fd34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13fd34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13fd38: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13fd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x13fd3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fd40: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fd44: 0xc08de14  jal         func_237850
    ctx->pc = 0x13FD44u;
    SET_GPR_U32(ctx, 31, 0x13FD4Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x13FD44u, 0x13FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD4Cu;
label_13fd4c:
    // 0x13fd4c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x13fd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fd50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13fd50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13fd54: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13fd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x13fd58: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fd5c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x13fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fd60: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x13fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13fd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13fd68: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13fd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13fd6c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fd70: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x13fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fd74: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x13fd78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13fd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fd7c: 0x0  nop
    ctx->pc = 0x13fd7cu;
    // NOP
    // 0x13fd80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13fd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fd84: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x13FD84u;
    {
        const bool branch_taken_0x13fd84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fd84) {
            ctx->pc = 0x13FEA4u;
            goto label_13fea4;
        }
    }
    ctx->pc = 0x13FD8Cu;
    // 0x13fd8c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fd90: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x13fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fd94: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x13FD94u;
    SET_GPR_U32(ctx, 31, 0x13FD9Cu);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x13FD94u, 0x13FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD9Cu;
label_13fd9c:
    // 0x13fd9c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fda0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13fda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13fda4: 0x8f83ba80  lw          $v1, -0x4580($gp)
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fda8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fdac: 0xc46c0040  lwc1        $f12, 0x40($v1)
    ctx->pc = 0x13fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fdb0: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x13fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13fdb4: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x13FDB4u;
    SET_GPR_U32(ctx, 31, 0x13FDBCu);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x13FDB4u, 0x13FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDBCu;
label_13fdbc:
    // 0x13fdbc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x13fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x13fdc0: 0x8f83ba80  lw          $v1, -0x4580($gp)
    ctx->pc = 0x13fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fdc4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13fdc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13fdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13fdcc: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x13fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fdd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13fdd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13fdd4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x13fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fdd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13fdd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fddc: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x13FDDCu;
    {
        const bool branch_taken_0x13fddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fddc) {
            ctx->pc = 0x13FEA4u;
            goto label_13fea4;
        }
    }
    ctx->pc = 0x13FDE4u;
    // 0x13fde4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fde8: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x13fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13fdec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13fdf0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13fdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fdf4: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fdf8: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x13fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fdfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13fdfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fe00: 0x0  nop
    ctx->pc = 0x13fe00u;
    // NOP
    // 0x13fe04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x13fe04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x13fe08: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x13fe08u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x13fe0c: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x13FE0Cu;
    SET_GPR_U32(ctx, 31, 0x13FE14u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x13FE0Cu, 0x13FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE14u;
label_13fe14:
    // 0x13fe14: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x13fe18: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fe1c: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x13fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13fe20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13fe24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13fe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13fe28: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fe2c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x13fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fe30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13fe30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13fe34: 0x0  nop
    ctx->pc = 0x13fe34u;
    // NOP
    // 0x13fe38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x13fe38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x13fe3c: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x13fe3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x13fe40: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x13FE40u;
    SET_GPR_U32(ctx, 31, 0x13FE48u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x13FE40u, 0x13FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE48u;
label_13fe48:
    // 0x13fe48: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13fe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13fe4c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fe50: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x13fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fe54: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x13fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13fe58: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x13FE58u;
    SET_GPR_U32(ctx, 31, 0x13FE60u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x13FE58u, 0x13FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE60u;
label_13fe60:
    // 0x13fe60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13fe60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x13fe64: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fe68: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x13fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fe6c: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x13fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13fe70: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x13FE70u;
    SET_GPR_U32(ctx, 31, 0x13FE78u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x13FE70u, 0x13FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE78u;
label_13fe78:
    // 0x13fe78: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13fe78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fe7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13FE7Cu;
    {
        const bool branch_taken_0x13fe7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fe7c) {
            ctx->pc = 0x13FE98u;
            goto label_13fe98;
        }
    }
    ctx->pc = 0x13FE84u;
    // 0x13fe84: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x13fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fe88: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fe8c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13fe8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13fe90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13FE90u;
    {
        const bool branch_taken_0x13fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe90) {
            ctx->pc = 0x13FEA4u;
            goto label_13fea4;
        }
    }
    ctx->pc = 0x13FE98u;
label_13fe98:
    // 0x13fe98: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x13fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fe9c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13fea0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_13fea4:
    // 0x13fea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fea8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13feac: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x13feacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x13feb0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13feb4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13feb8: 0xc097444  jal         func_25D110
    ctx->pc = 0x13FEB8u;
    SET_GPR_U32(ctx, 31, 0x13FEC0u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13FEB8u, 0x13FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEC0u;
label_13fec0:
    // 0x13fec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fec8: 0xc089ad8  jal         func_226B60
    ctx->pc = 0x13FEC8u;
    SET_GPR_U32(ctx, 31, 0x13FED0u);
    ctx->pc = 0x226B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B60u, 0x13FEC8u, 0x13FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FED0u;
label_13fed0:
    // 0x13fed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fed8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13fedc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13fedcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fee0: 0x3e00008  jr          $ra
    ctx->pc = 0x13FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FEE8u;
    // 0x13fee8: 0x0  nop
    ctx->pc = 0x13fee8u;
    // NOP
    // 0x13feec: 0x0  nop
    ctx->pc = 0x13feecu;
    // NOP
    ctx->pc = 0x13fef0u;
}
