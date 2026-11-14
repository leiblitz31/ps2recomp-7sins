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

// Function: sub_0019AA60
// Address: 0x19aa60 - 0x19ac20
void sub_0019AA60_0x19aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AA60_0x19aa60");
#endif

    switch (ctx->pc) {
        case 0x19aaa0u: goto label_19aaa0;
        case 0x19aaacu: goto label_19aaac;
        case 0x19aac0u: goto label_19aac0;
        case 0x19aaccu: goto label_19aacc;
        case 0x19ab64u: goto label_19ab64;
        case 0x19ab74u: goto label_19ab74;
        case 0x19abb4u: goto label_19abb4;
        case 0x19abc4u: goto label_19abc4;
        case 0x19abf4u: goto label_19abf4;
        case 0x19ac00u: goto label_19ac00;
        case 0x19ac10u: goto label_19ac10;
        default: break;
    }

    ctx->pc = 0x19aa60u;

    // 0x19aa60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19aa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19aa68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19aa6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19aa70: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x19aa70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19aa74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19aa74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19aa78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aa7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aa80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19aa80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa84: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x19AA84u;
    {
        const bool branch_taken_0x19aa84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aa84) {
            ctx->pc = 0x19AB74u;
            goto label_19ab74;
        }
    }
    ctx->pc = 0x19AA8Cu;
    // 0x19aa8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aa90: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19aa94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aa98: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AA98u;
    SET_GPR_U32(ctx, 31, 0x19AAA0u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AA98u, 0x19AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAA0u;
label_19aaa0:
    // 0x19aaa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19aaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aaa4: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19AAA4u;
    SET_GPR_U32(ctx, 31, 0x19AAACu);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19AAA4u, 0x19AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAACu;
label_19aaac:
    // 0x19aaac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aab0: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19aab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aab8: 0xc066004  jal         func_198010
    ctx->pc = 0x19AAB8u;
    SET_GPR_U32(ctx, 31, 0x19AAC0u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19AAB8u, 0x19AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAC0u;
label_19aac0:
    // 0x19aac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aac4: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19AAC4u;
    SET_GPR_U32(ctx, 31, 0x19AACCu);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19AAC4u, 0x19AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AACCu;
label_19aacc:
    // 0x19aacc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x19aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19aad0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aad4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aad8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x19aad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19aadc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19aae0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x19aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19aae4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x19aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19aae8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AAE8u;
    {
        const bool branch_taken_0x19aae8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19aae8) {
            ctx->pc = 0x19AB04u;
            goto label_19ab04;
        }
    }
    ctx->pc = 0x19AAF0u;
    // 0x19aaf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aaf4: 0x0  nop
    ctx->pc = 0x19aaf4u;
    // NOP
    // 0x19aaf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19aaf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19aafc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19AAFCu;
    {
        const bool branch_taken_0x19aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aafc) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AB04u;
label_19ab04:
    // 0x19ab04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19ab08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ab0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19ab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19ab10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ab10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ab14: 0x0  nop
    ctx->pc = 0x19ab14u;
    // NOP
    // 0x19ab18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19ab18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19ab1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19ab1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19ab20:
    // 0x19ab20: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x19ab24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ab24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ab28: 0x0  nop
    ctx->pc = 0x19ab28u;
    // NOP
    // 0x19ab2c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x19ab2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19ab30: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x19ab34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ab34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ab38: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ab3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ab3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ab40: 0x0  nop
    ctx->pc = 0x19ab40u;
    // NOP
    // 0x19ab44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19ab44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19ab48: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x19ab48u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19ab4c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x19ab4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ab50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ab54: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ab58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ab5c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AB5Cu;
    SET_GPR_U32(ctx, 31, 0x19AB64u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AB5Cu, 0x19AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB64u;
label_19ab64:
    // 0x19ab64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ab6c: 0xc084400  jal         func_211000
    ctx->pc = 0x19AB6Cu;
    SET_GPR_U32(ctx, 31, 0x19AB74u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19AB6Cu, 0x19AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB74u;
label_19ab74:
    // 0x19ab74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ab78: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ab7c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ab80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19ab80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ab84: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x19ab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19ab88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ab8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ab90: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x19ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ab94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19ab94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ab98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ab9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19ab9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19aba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aba4: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19aba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19abac: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19ABACu;
    SET_GPR_U32(ctx, 31, 0x19ABB4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19ABACu, 0x19ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABB4u;
label_19abb4:
    // 0x19abb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19abb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abb8: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x19abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19abbc: 0xc084440  jal         func_211100
    ctx->pc = 0x19ABBCu;
    SET_GPR_U32(ctx, 31, 0x19ABC4u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19ABBCu, 0x19ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABC4u;
label_19abc4:
    // 0x19abc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19abc8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19abcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19abd0: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x19abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19abd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19abd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19abd8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19ABD8u;
    {
        const bool branch_taken_0x19abd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19abd8) {
            ctx->pc = 0x19AC10u;
            goto label_19ac10;
        }
    }
    ctx->pc = 0x19ABE0u;
    // 0x19abe0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19abe4: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19abe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19abec: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19ABECu;
    SET_GPR_U32(ctx, 31, 0x19ABF4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19ABECu, 0x19ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABF4u;
label_19abf4:
    // 0x19abf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19abf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abf8: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19ABF8u;
    SET_GPR_U32(ctx, 31, 0x19AC00u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19ABF8u, 0x19AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC00u;
label_19ac00:
    // 0x19ac00: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ac04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ac04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac08: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19AC08u;
    SET_GPR_U32(ctx, 31, 0x19AC10u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19AC08u, 0x19AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC10u;
label_19ac10:
    // 0x19ac10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19ac14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19ac18: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC20u;
}
