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

// Function: sub_001CDF40
// Address: 0x1cdf40 - 0x1ce310
void sub_001CDF40_0x1cdf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDF40_0x1cdf40");
#endif

    switch (ctx->pc) {
        case 0x1cdf94u: goto label_1cdf94;
        case 0x1cdfc4u: goto label_1cdfc4;
        case 0x1ce020u: goto label_1ce020;
        case 0x1ce054u: goto label_1ce054;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce0f0u: goto label_1ce0f0;
        case 0x1ce110u: goto label_1ce110;
        case 0x1ce128u: goto label_1ce128;
        case 0x1ce184u: goto label_1ce184;
        case 0x1ce1b8u: goto label_1ce1b8;
        case 0x1ce1e0u: goto label_1ce1e0;
        case 0x1ce23cu: goto label_1ce23c;
        case 0x1ce270u: goto label_1ce270;
        case 0x1ce2acu: goto label_1ce2ac;
        case 0x1ce2dcu: goto label_1ce2dc;
        default: break;
    }

    ctx->pc = 0x1cdf40u;

    // 0x1cdf40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cdf44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdf48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1cdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1cdf4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1cdf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1cdf50: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1cdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1cdf54: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1cdf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf58: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cdf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1cdf5c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1cdf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdf60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cdf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdf64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdf68: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CDF68u;
    {
        const bool branch_taken_0x1cdf68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cdf68) {
            ctx->pc = 0x1CE074u;
            goto label_1ce074;
        }
    }
    ctx->pc = 0x1CDF70u;
    // 0x1cdf70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdf70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdf74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdf78: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1cdf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1cdf7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdf80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdf84: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1cdf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1cdf88: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cdf8c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF94u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CDF8Cu, 0x1CDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF94u;
label_1cdf94:
    // 0x1cdf94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cdf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf98: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1cdf98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdf9c: 0xc780836c  lwc1        $f0, -0x7C94($gp)
    ctx->pc = 0x1cdf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdfa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdfa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cdfa4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1cdfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cdfa8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1cdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1cdfac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cdfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdfb0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cdfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdfb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cdfb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cdfb8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1cdfb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdfbc: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x1CDFBCu;
    SET_GPR_U32(ctx, 31, 0x1CDFC4u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x1CDFBCu, 0x1CDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFC4u;
label_1cdfc4:
    // 0x1cdfc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdfc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cdfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdfcc: 0x0  nop
    ctx->pc = 0x1cdfccu;
    // NOP
    // 0x1cdfd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdfd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cdfd4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cdfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cdfd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdfdc: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1cdfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdfe0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1cdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdfe4: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1cdfe4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cdfe8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1cdfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdfec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdff0: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1cdff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdff8: 0x0  nop
    ctx->pc = 0x1cdff8u;
    // NOP
    // 0x1cdffc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cdffcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce000: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1ce000u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ce004: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1ce004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1ce008: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce00c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce010: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce014: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce018: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE018u;
    SET_GPR_U32(ctx, 31, 0x1CE020u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE018u, 0x1CE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE020u;
label_1ce020:
    // 0x1ce020: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce024: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1ce024u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce028: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce02c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1ce02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce034: 0x450000af  bc1f        . + 4 + (0xAF << 2)
    ctx->pc = 0x1CE034u;
    {
        const bool branch_taken_0x1ce034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce034) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE03Cu;
    // 0x1ce03c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce044: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce048: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce04c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE04Cu;
    SET_GPR_U32(ctx, 31, 0x1CE054u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE04Cu, 0x1CE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE054u;
label_1ce054:
    // 0x1ce054: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce058: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce058u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce05c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce060: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1ce060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1ce064: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ce064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce068: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ce068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ce06c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CE06Cu;
    {
        const bool branch_taken_0x1ce06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce06c) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE074u;
label_1ce074:
    // 0x1ce074: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ce074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce078: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ce078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce07c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce080: 0x14830059  bne         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1CE080u;
    {
        const bool branch_taken_0x1ce080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ce080) {
            ctx->pc = 0x1CE1E8u;
            goto label_1ce1e8;
        }
    }
    ctx->pc = 0x1CE088u;
    // 0x1ce088: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce08c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ce08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ce090: 0xc0731e0  jal         func_1CC780
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x1CC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC780u, 0x1CE090u, 0x1CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE098u;
label_1ce098:
    // 0x1ce098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce09c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce0a0: 0x0  nop
    ctx->pc = 0x1ce0a0u;
    // NOP
    // 0x1ce0a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ce0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce0a8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE0A8u;
    {
        const bool branch_taken_0x1ce0a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce0a8) {
            ctx->pc = 0x1CE118u;
            goto label_1ce118;
        }
    }
    ctx->pc = 0x1CE0B0u;
    // 0x1ce0b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ce0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce0b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ce0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ce0b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce0bc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1ce0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce0c0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1ce0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce0c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce0c8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1ce0cc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1ce0ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1ce0d0: 0x1810  mfhi        $v1
    ctx->pc = 0x1ce0d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ce0d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce0d8: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1ce0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1ce0dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce0e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ce0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce0e4: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ce0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ce0e8: 0xc0731d4  jal         func_1CC750
    ctx->pc = 0x1CE0E8u;
    SET_GPR_U32(ctx, 31, 0x1CE0F0u);
    ctx->pc = 0x1CC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC750u, 0x1CE0E8u, 0x1CE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0F0u;
label_1ce0f0:
    // 0x1ce0f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce0f4: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1ce0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1ce0f8: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x1CE0F8u;
    {
        const bool branch_taken_0x1ce0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0f8) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE100u;
    // 0x1ce100: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce104: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ce104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ce108: 0xc0731e8  jal         func_1CC7A0
    ctx->pc = 0x1CE108u;
    SET_GPR_U32(ctx, 31, 0x1CE110u);
    ctx->pc = 0x1CC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC7A0u, 0x1CE108u, 0x1CE110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE110u;
label_1ce110:
    // 0x1ce110: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CE110u;
    {
        const bool branch_taken_0x1ce110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce110) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE118u;
label_1ce118:
    // 0x1ce118: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce11c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1ce120: 0xc0731e0  jal         func_1CC780
    ctx->pc = 0x1CE120u;
    SET_GPR_U32(ctx, 31, 0x1CE128u);
    ctx->pc = 0x1CC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC780u, 0x1CE120u, 0x1CE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE128u;
label_1ce128:
    // 0x1ce128: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ce128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce12c: 0x0  nop
    ctx->pc = 0x1ce12cu;
    // NOP
    // 0x1ce130: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ce130u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce134: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x1CE134u;
    {
        const bool branch_taken_0x1ce134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce134) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE13Cu;
    // 0x1ce13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce140: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce144: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1ce144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1ce148: 0xc7838278  lwc1        $f3, -0x7D88($gp)
    ctx->pc = 0x1ce148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce14c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1ce14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce150: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce154: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1ce154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce15c: 0x0  nop
    ctx->pc = 0x1ce15cu;
    // NOP
    // 0x1ce160: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ce160u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce164: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1ce164u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ce168: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1ce168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1ce16c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce174: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce178: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce17c: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE17Cu;
    SET_GPR_U32(ctx, 31, 0x1CE184u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE17Cu, 0x1CE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE184u;
label_1ce184:
    // 0x1ce184: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce188: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1ce188u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce18c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce190: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1ce190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce198: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x1CE198u;
    {
        const bool branch_taken_0x1ce198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce198) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE1A0u;
    // 0x1ce1a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce1a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce1a8: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce1ac: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce1b0: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE1B0u;
    SET_GPR_U32(ctx, 31, 0x1CE1B8u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE1B0u, 0x1CE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1B8u;
label_1ce1b8:
    // 0x1ce1b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce1bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce1c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce1c4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1ce1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1ce1c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce1cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ce1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ce1d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce1d4: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1ce1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1ce1d8: 0xc0731d4  jal         func_1CC750
    ctx->pc = 0x1CE1D8u;
    SET_GPR_U32(ctx, 31, 0x1CE1E0u);
    ctx->pc = 0x1CC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC750u, 0x1CE1D8u, 0x1CE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1E0u;
label_1ce1e0:
    // 0x1ce1e0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1CE1E0u;
    {
        const bool branch_taken_0x1ce1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1e0) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE1E8u;
label_1ce1e8:
    // 0x1ce1e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ce1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce1ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ce1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce1f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ce1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce1f4: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1CE1F4u;
    {
        const bool branch_taken_0x1ce1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ce1f4) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE1FCu;
    // 0x1ce1fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce200: 0xc4430044  lwc1        $f3, 0x44($v0)
    ctx->pc = 0x1ce200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce204: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1ce204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce208: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce20c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1ce20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce214: 0x0  nop
    ctx->pc = 0x1ce214u;
    // NOP
    // 0x1ce218: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ce218u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce21c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1ce21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ce220: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1ce220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1ce224: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce228: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce22c: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce230: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce234: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE234u;
    SET_GPR_U32(ctx, 31, 0x1CE23Cu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE234u, 0x1CE23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE23Cu;
label_1ce23c:
    // 0x1ce23c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce240: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1ce240u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce244: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce248: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1ce248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce24c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ce24cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce250: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CE250u;
    {
        const bool branch_taken_0x1ce250 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce250) {
            ctx->pc = 0x1CE294u;
            goto label_1ce294;
        }
    }
    ctx->pc = 0x1CE258u;
    // 0x1ce258: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce25c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce260: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce264: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce268: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE268u;
    SET_GPR_U32(ctx, 31, 0x1CE270u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE268u, 0x1CE270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE270u;
label_1ce270:
    // 0x1ce270: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce274: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce274u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce278: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce27c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1ce27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1ce280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce284: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce288: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1ce288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1ce28c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CE28Cu;
    {
        const bool branch_taken_0x1ce28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce28c) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE294u;
label_1ce294:
    // 0x1ce294: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce298: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce29c: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce2a0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce2a4: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE2A4u;
    SET_GPR_U32(ctx, 31, 0x1CE2ACu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE2A4u, 0x1CE2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2ACu;
label_1ce2ac:
    // 0x1ce2ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ce2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce2b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2b4: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1ce2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce2b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce2b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2bc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1CE2BCu;
    {
        const bool branch_taken_0x1ce2bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce2bc) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE2C4u;
    // 0x1ce2c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ce2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2cc: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x1ce2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ce2d0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce2d4: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1CE2D4u;
    SET_GPR_U32(ctx, 31, 0x1CE2DCu);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1CE2D4u, 0x1CE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2DCu;
label_1ce2dc:
    // 0x1ce2dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce2e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2e4: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1ce2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1ce2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce2ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ce2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce2f0: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1ce2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_1ce2f4:
    // 0x1ce2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce2f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE304u;
    // 0x1ce304: 0x0  nop
    ctx->pc = 0x1ce304u;
    // NOP
    // 0x1ce308: 0x0  nop
    ctx->pc = 0x1ce308u;
    // NOP
    // 0x1ce30c: 0x0  nop
    ctx->pc = 0x1ce30cu;
    // NOP
    ctx->pc = 0x1ce310u;
}
