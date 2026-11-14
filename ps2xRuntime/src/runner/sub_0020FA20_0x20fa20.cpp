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

// Function: sub_0020FA20
// Address: 0x20fa20 - 0x20fcb0
void sub_0020FA20_0x20fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FA20_0x20fa20");
#endif

    switch (ctx->pc) {
        case 0x20fa38u: goto label_20fa38;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fc0cu: goto label_20fc0c;
        case 0x20fc5cu: goto label_20fc5c;
        case 0x20fc68u: goto label_20fc68;
        case 0x20fc84u: goto label_20fc84;
        case 0x20fc98u: goto label_20fc98;
        default: break;
    }

    ctx->pc = 0x20fa20u;

    // 0x20fa20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20fa24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fa28: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20fa2c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x20fa30: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20FA30u;
    SET_GPR_U32(ctx, 31, 0x20FA38u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20FA30u, 0x20FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA38u;
label_20fa38:
    // 0x20fa38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20FA38u;
    {
        const bool branch_taken_0x20fa38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20fa38) {
            ctx->pc = 0x20FA54u;
            goto label_20fa54;
        }
    }
    ctx->pc = 0x20FA40u;
    // 0x20fa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fa44: 0x0  nop
    ctx->pc = 0x20fa44u;
    // NOP
    // 0x20fa48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20fa48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20fa4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20FA4Cu;
    {
        const bool branch_taken_0x20fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa4c) {
            ctx->pc = 0x20FA70u;
            goto label_20fa70;
        }
    }
    ctx->pc = 0x20FA54u;
label_20fa54:
    // 0x20fa54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20fa58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20fa5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20fa60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fa60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fa64: 0x0  nop
    ctx->pc = 0x20fa64u;
    // NOP
    // 0x20fa68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20fa68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20fa6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20fa6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20fa70:
    // 0x20fa70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20fa74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fa78: 0x0  nop
    ctx->pc = 0x20fa78u;
    // NOP
    // 0x20fa7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20fa7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20fa80: 0xc7808300  lwc1        $f0, -0x7D00($gp)
    ctx->pc = 0x20fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fa84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20fa84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20fa88: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x20fa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x20fa8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fa90: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20fa94: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20fa94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20fa98: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20FA98u;
    {
        const bool branch_taken_0x20fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa98) {
            ctx->pc = 0x20FB28u;
            goto label_20fb28;
        }
    }
    ctx->pc = 0x20FAA0u;
    // 0x20faa0: 0x3c024230  lui         $v0, 0x4230
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16944 << 16));
    // 0x20faa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20faa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20faa8: 0x0  nop
    ctx->pc = 0x20faa8u;
    // NOP
    // 0x20faac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x20faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x20fab0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x20fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fab4: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x20FAB4u;
    SET_GPR_U32(ctx, 31, 0x20FABCu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x20FAB4u, 0x20FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FABCu;
label_20fabc:
    // 0x20fabc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x20fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fac0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fac4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fac8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20fac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20facc: 0x0  nop
    ctx->pc = 0x20faccu;
    // NOP
    // 0x20fad0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20fad0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x20fad4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x20fad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x20fad8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fadc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x20fadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x20fae0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fae4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20faec: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20faecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20faf0: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x20faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20faf4: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x20FAF4u;
    SET_GPR_U32(ctx, 31, 0x20FAFCu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x20FAF4u, 0x20FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FAFCu;
label_20fafc:
    // 0x20fafc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x20fafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fb00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fb04: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x20fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fb08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20fb08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fb0c: 0x0  nop
    ctx->pc = 0x20fb0cu;
    // NOP
    // 0x20fb10: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20fb10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x20fb14: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x20fb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x20fb18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fb1c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x20fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x20fb20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x20FB20u;
    {
        const bool branch_taken_0x20fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb20) {
            ctx->pc = 0x20FBB8u;
            goto label_20fbb8;
        }
    }
    ctx->pc = 0x20FB28u;
label_20fb28:
    // 0x20fb28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20fb2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fb30: 0x0  nop
    ctx->pc = 0x20fb30u;
    // NOP
    // 0x20fb34: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x20fb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20fb38: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x20fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fb3c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x20FB3Cu;
    SET_GPR_U32(ctx, 31, 0x20FB44u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x20FB3Cu, 0x20FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB44u;
label_20fb44:
    // 0x20fb44: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x20fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fb48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fb4c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x20fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fb50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20fb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fb54: 0x0  nop
    ctx->pc = 0x20fb54u;
    // NOP
    // 0x20fb58: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20fb58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x20fb5c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x20fb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x20fb60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fb64: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x20fb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x20fb68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fb6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x20fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fb70: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x20fb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fb78: 0x0  nop
    ctx->pc = 0x20fb78u;
    // NOP
    // 0x20fb7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20fb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20fb80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fb84: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20fb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x20fb88: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x20fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fb8c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x20FB8Cu;
    SET_GPR_U32(ctx, 31, 0x20FB94u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x20FB8Cu, 0x20FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB94u;
label_20fb94:
    // 0x20fb94: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x20fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20fb98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fb9c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x20fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fba0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20fba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fba4: 0x0  nop
    ctx->pc = 0x20fba4u;
    // NOP
    // 0x20fba8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x20fba8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x20fbac: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x20fbacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x20fbb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbb4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x20fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_20fbb8:
    // 0x20fbb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbbc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x20fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fbc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbc4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20fbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fbc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20fbc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20fbcc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x20fbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20fbd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbd4: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x20fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fbd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbdc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fbe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20fbe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20fbe4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x20fbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x20fbe8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbec: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x20fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fbf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fbf4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fbf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20fbf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20fbfc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x20fbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20fc00: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x20fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x20fc04: 0xc104d24  jal         func_413490
    ctx->pc = 0x20FC04u;
    SET_GPR_U32(ctx, 31, 0x20FC0Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x20FC04u, 0x20FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC0Cu;
label_20fc0c:
    // 0x20fc0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc10: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x20fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x20fc14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc18: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x20fc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fc1c: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x20fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fc20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20fc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fc24: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20FC24u;
    {
        const bool branch_taken_0x20fc24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20fc24) {
            ctx->pc = 0x20FC38u;
            goto label_20fc38;
        }
    }
    ctx->pc = 0x20FC2Cu;
    // 0x20fc2c: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x20fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fc30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc34: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x20fc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_20fc38:
    // 0x20fc38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20fc38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fc3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc40: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20fc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20fc44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc48: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20fc4c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20fc50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc54: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x20FC54u;
    SET_GPR_U32(ctx, 31, 0x20FC5Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x20FC54u, 0x20FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC5Cu;
label_20fc5c:
    // 0x20fc5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc60: 0xc041874  jal         func_1061D0
    ctx->pc = 0x20FC60u;
    SET_GPR_U32(ctx, 31, 0x20FC68u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x20FC60u, 0x20FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC68u;
label_20fc68:
    // 0x20fc68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20fc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20fc70: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x20fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x20fc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20fc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fc7c: 0xc1217cc  jal         func_485F30
    ctx->pc = 0x20FC7Cu;
    SET_GPR_U32(ctx, 31, 0x20FC84u);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x20FC7Cu, 0x20FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC84u;
label_20fc84:
    // 0x20fc84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fc88: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20fc8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20fc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc90: 0xc121904  jal         func_486410
    ctx->pc = 0x20FC90u;
    SET_GPR_U32(ctx, 31, 0x20FC98u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x20FC90u, 0x20FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC98u;
label_20fc98:
    // 0x20fc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fc9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20fca0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FCA8u;
    // 0x20fca8: 0x0  nop
    ctx->pc = 0x20fca8u;
    // NOP
    // 0x20fcac: 0x0  nop
    ctx->pc = 0x20fcacu;
    // NOP
    ctx->pc = 0x20fcb0u;
}
