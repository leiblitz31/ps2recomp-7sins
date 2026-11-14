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

// Function: sub_0019AC20
// Address: 0x19ac20 - 0x19ade0
void sub_0019AC20_0x19ac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AC20_0x19ac20");
#endif

    switch (ctx->pc) {
        case 0x19ac60u: goto label_19ac60;
        case 0x19ac6cu: goto label_19ac6c;
        case 0x19ac80u: goto label_19ac80;
        case 0x19ac8cu: goto label_19ac8c;
        case 0x19ad24u: goto label_19ad24;
        case 0x19ad34u: goto label_19ad34;
        case 0x19ad74u: goto label_19ad74;
        case 0x19ad84u: goto label_19ad84;
        case 0x19adb4u: goto label_19adb4;
        case 0x19adc0u: goto label_19adc0;
        case 0x19add0u: goto label_19add0;
        default: break;
    }

    ctx->pc = 0x19ac20u;

    // 0x19ac20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ac24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ac28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19ac2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19ac30: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x19ac30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19ac34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19ac34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ac38: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ac3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ac40: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19ac40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ac44: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x19AC44u;
    {
        const bool branch_taken_0x19ac44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ac44) {
            ctx->pc = 0x19AD34u;
            goto label_19ad34;
        }
    }
    ctx->pc = 0x19AC4Cu;
    // 0x19ac4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac50: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ac54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ac58: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AC58u;
    SET_GPR_U32(ctx, 31, 0x19AC60u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AC58u, 0x19AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC60u;
label_19ac60:
    // 0x19ac60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac64: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19AC64u;
    SET_GPR_U32(ctx, 31, 0x19AC6Cu);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19AC64u, 0x19AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC6Cu;
label_19ac6c:
    // 0x19ac6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac70: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19ac74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ac78: 0xc066004  jal         func_198010
    ctx->pc = 0x19AC78u;
    SET_GPR_U32(ctx, 31, 0x19AC80u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19AC78u, 0x19AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC80u;
label_19ac80:
    // 0x19ac80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac84: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19AC84u;
    SET_GPR_U32(ctx, 31, 0x19AC8Cu);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19AC84u, 0x19AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC8Cu;
label_19ac8c:
    // 0x19ac8c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x19ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ac90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ac94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ac98: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x19ac98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19ac9c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19ac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19aca0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19aca4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x19aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19aca8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19ACA8u;
    {
        const bool branch_taken_0x19aca8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19aca8) {
            ctx->pc = 0x19ACC4u;
            goto label_19acc4;
        }
    }
    ctx->pc = 0x19ACB0u;
    // 0x19acb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19acb4: 0x0  nop
    ctx->pc = 0x19acb4u;
    // NOP
    // 0x19acb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19acb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19acbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19ACBCu;
    {
        const bool branch_taken_0x19acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19acbc) {
            ctx->pc = 0x19ACE0u;
            goto label_19ace0;
        }
    }
    ctx->pc = 0x19ACC4u;
label_19acc4:
    // 0x19acc4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19acc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19acc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19accc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19acccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19acd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19acd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19acd4: 0x0  nop
    ctx->pc = 0x19acd4u;
    // NOP
    // 0x19acd8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19acd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19acdc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19acdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19ace0:
    // 0x19ace0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x19ace4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ace4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ace8: 0x0  nop
    ctx->pc = 0x19ace8u;
    // NOP
    // 0x19acec: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x19acecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19acf0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x19acf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19acf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19acf8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19acfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19acfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ad00: 0x0  nop
    ctx->pc = 0x19ad00u;
    // NOP
    // 0x19ad04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19ad04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19ad08: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x19ad08u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19ad0c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19ad0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ad10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad14: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ad18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ad1c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AD1Cu;
    SET_GPR_U32(ctx, 31, 0x19AD24u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AD1Cu, 0x19AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD24u;
label_19ad24:
    // 0x19ad24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad28: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ad2c: 0xc084400  jal         func_211000
    ctx->pc = 0x19AD2Cu;
    SET_GPR_U32(ctx, 31, 0x19AD34u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19AD2Cu, 0x19AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD34u;
label_19ad34:
    // 0x19ad34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ad3c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ad40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ad40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ad44: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19ad44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19ad48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ad50: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ad54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19ad54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ad58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19ad5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19ad60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad64: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ad68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ad6c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AD6Cu;
    SET_GPR_U32(ctx, 31, 0x19AD74u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AD6Cu, 0x19AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD74u;
label_19ad74:
    // 0x19ad74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad78: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x19ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ad7c: 0xc084440  jal         func_211100
    ctx->pc = 0x19AD7Cu;
    SET_GPR_U32(ctx, 31, 0x19AD84u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19AD7Cu, 0x19AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD84u;
label_19ad84:
    // 0x19ad84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ad8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad90: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x19ad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ad94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ad94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ad98: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19AD98u;
    {
        const bool branch_taken_0x19ad98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ad98) {
            ctx->pc = 0x19ADD0u;
            goto label_19add0;
        }
    }
    ctx->pc = 0x19ADA0u;
    // 0x19ada0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ada4: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ada8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19adac: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19ADACu;
    SET_GPR_U32(ctx, 31, 0x19ADB4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19ADACu, 0x19ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADB4u;
label_19adb4:
    // 0x19adb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adb8: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19ADB8u;
    SET_GPR_U32(ctx, 31, 0x19ADC0u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19ADB8u, 0x19ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADC0u;
label_19adc0:
    // 0x19adc0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x19adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19adc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19adc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adc8: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19ADC8u;
    SET_GPR_U32(ctx, 31, 0x19ADD0u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19ADC8u, 0x19ADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADD0u;
label_19add0:
    // 0x19add0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19add0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19add4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19add4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19add8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ADE0u;
}
