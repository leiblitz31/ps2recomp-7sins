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

// Function: sub_0013FEF0
// Address: 0x13fef0 - 0x140110
void sub_0013FEF0_0x13fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FEF0_0x13fef0");
#endif

    switch (ctx->pc) {
        case 0x13ff30u: goto label_13ff30;
        case 0x13ff3cu: goto label_13ff3c;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ffbcu: goto label_13ffbc;
        case 0x13ffdcu: goto label_13ffdc;
        case 0x140034u: goto label_140034;
        case 0x140068u: goto label_140068;
        case 0x140080u: goto label_140080;
        case 0x140098u: goto label_140098;
        case 0x1400e0u: goto label_1400e0;
        case 0x1400f0u: goto label_1400f0;
        default: break;
    }

    ctx->pc = 0x13fef0u;

    // 0x13fef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13fef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13fef8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13fef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13fefc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13ff00: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x13ff04: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ff08: 0x10020079  beq         $zero, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x13FF08u;
    {
        const bool branch_taken_0x13ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff08) {
            ctx->pc = 0x1400F0u;
            goto label_1400f0;
        }
    }
    ctx->pc = 0x13FF10u;
    // 0x13ff10: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ff14: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x13ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13ff18: 0x10020075  beq         $zero, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x13FF18u;
    {
        const bool branch_taken_0x13ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff18) {
            ctx->pc = 0x1400F0u;
            goto label_1400f0;
        }
    }
    ctx->pc = 0x13FF20u;
    // 0x13ff20: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ff24: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x13ff28: 0xc097444  jal         func_25D110
    ctx->pc = 0x13FF28u;
    SET_GPR_U32(ctx, 31, 0x13FF30u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x13FF28u, 0x13FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF30u;
label_13ff30:
    // 0x13ff30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff34: 0xc089ad0  jal         func_226B40
    ctx->pc = 0x13FF34u;
    SET_GPR_U32(ctx, 31, 0x13FF3Cu);
    ctx->pc = 0x226B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B40u, 0x13FF34u, 0x13FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF3Cu;
label_13ff3c:
    // 0x13ff3c: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x13FF3Cu;
    {
        const bool branch_taken_0x13ff3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff3c) {
            ctx->pc = 0x1400F0u;
            goto label_1400f0;
        }
    }
    ctx->pc = 0x13FF44u;
    // 0x13ff44: 0x8f83ba80  lw          $v1, -0x4580($gp)
    ctx->pc = 0x13ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ff48: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x13ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x13ff4c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x13ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ff50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ff54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ff54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ff58: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13ff58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x13ff5c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ff60: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ff64: 0xc08de14  jal         func_237850
    ctx->pc = 0x13FF64u;
    SET_GPR_U32(ctx, 31, 0x13FF6Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x13FF64u, 0x13FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF6Cu;
label_13ff6c:
    // 0x13ff6c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x13ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ff70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ff70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ff74: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13ff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x13ff78: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ff7c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x13ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ff80: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x13ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ff84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13ff84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13ff88: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13ff88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13ff8c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ff90: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x13ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ff94: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x13ff98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ff98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ff9c: 0x0  nop
    ctx->pc = 0x13ff9cu;
    // NOP
    // 0x13ffa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13ffa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ffa4: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x13FFA4u;
    {
        const bool branch_taken_0x13ffa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ffa4) {
            ctx->pc = 0x1400C4u;
            goto label_1400c4;
        }
    }
    ctx->pc = 0x13FFACu;
    // 0x13ffac: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ffb0: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x13ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13ffb4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x13FFB4u;
    SET_GPR_U32(ctx, 31, 0x13FFBCu);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x13FFB4u, 0x13FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFBCu;
label_13ffbc:
    // 0x13ffbc: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ffc0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x13ffc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x13ffc4: 0x8f83ba80  lw          $v1, -0x4580($gp)
    ctx->pc = 0x13ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ffc8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ffcc: 0xc46c0040  lwc1        $f12, 0x40($v1)
    ctx->pc = 0x13ffccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13ffd0: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x13ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13ffd4: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x13FFD4u;
    SET_GPR_U32(ctx, 31, 0x13FFDCu);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x13FFD4u, 0x13FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFDCu;
label_13ffdc:
    // 0x13ffdc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x13ffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x13ffe0: 0x8f83ba80  lw          $v1, -0x4580($gp)
    ctx->pc = 0x13ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x13ffe4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13ffe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13ffe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ffec: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x13ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fff0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13fff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13fff4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x13fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fff8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13fff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13fffc: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x13FFFCu;
    {
        const bool branch_taken_0x13fffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13fffc) {
            ctx->pc = 0x1400C4u;
            goto label_1400c4;
        }
    }
    ctx->pc = 0x140004u;
    // 0x140004: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140008: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x140008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14000c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x140010: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x140010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140014: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140018: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x140018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14001c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14001cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140020: 0x0  nop
    ctx->pc = 0x140020u;
    // NOP
    // 0x140024: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x140024u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x140028: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x140028u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x14002c: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14002Cu;
    SET_GPR_U32(ctx, 31, 0x140034u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x14002Cu, 0x140034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140034u;
label_140034:
    // 0x140034: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x140034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x140038: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x14003c: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x14003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x140040: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x140040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x140044: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x140044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x140048: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x14004c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x14004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140054: 0x0  nop
    ctx->pc = 0x140054u;
    // NOP
    // 0x140058: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x140058u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14005c: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x14005cu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x140060: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x140060u;
    SET_GPR_U32(ctx, 31, 0x140068u);
    ctx->pc = 0x140F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F90u, 0x140060u, 0x140068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140068u;
label_140068:
    // 0x140068: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x140068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14006c: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x14006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140070: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x140070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140074: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x140074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x140078: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x140078u;
    SET_GPR_U32(ctx, 31, 0x140080u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x140078u, 0x140080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140080u;
label_140080:
    // 0x140080: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x140080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x140084: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x140084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x140088: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x140088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14008c: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x14008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x140090: 0xc0503f8  jal         func_140FE0
    ctx->pc = 0x140090u;
    SET_GPR_U32(ctx, 31, 0x140098u);
    ctx->pc = 0x140FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140FE0u, 0x140090u, 0x140098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140098u;
label_140098:
    // 0x140098: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14009c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14009Cu;
    {
        const bool branch_taken_0x14009c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14009c) {
            ctx->pc = 0x1400B8u;
            goto label_1400b8;
        }
    }
    ctx->pc = 0x1400A4u;
    // 0x1400a4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1400a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1400a8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1400ac: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1400acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1400b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1400B0u;
    {
        const bool branch_taken_0x1400b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1400b0) {
            ctx->pc = 0x1400C4u;
            goto label_1400c4;
        }
    }
    ctx->pc = 0x1400B8u;
label_1400b8:
    // 0x1400b8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1400b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1400bc: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1400c0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1400c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_1400c4:
    // 0x1400c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400c8: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1400c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1400cc: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x1400ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1400d0: 0x8f82ba80  lw          $v0, -0x4580($gp)
    ctx->pc = 0x1400d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949504)));
    // 0x1400d4: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1400d8: 0xc097444  jal         func_25D110
    ctx->pc = 0x1400D8u;
    SET_GPR_U32(ctx, 31, 0x1400E0u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x1400D8u, 0x1400E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400E0u;
label_1400e0:
    // 0x1400e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1400e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1400e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400e8: 0xc089ad8  jal         func_226B60
    ctx->pc = 0x1400E8u;
    SET_GPR_U32(ctx, 31, 0x1400F0u);
    ctx->pc = 0x226B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B60u, 0x1400E8u, 0x1400F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400F0u;
label_1400f0:
    // 0x1400f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1400f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1400f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1400f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1400fc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1400fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x140100: 0x3e00008  jr          $ra
    ctx->pc = 0x140100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140108u;
    // 0x140108: 0x0  nop
    ctx->pc = 0x140108u;
    // NOP
    // 0x14010c: 0x0  nop
    ctx->pc = 0x14010cu;
    // NOP
    ctx->pc = 0x140110u;
}
