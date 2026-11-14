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

// Function: sub_0019ADE0
// Address: 0x19ade0 - 0x19afe0
void sub_0019ADE0_0x19ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ADE0_0x19ade0");
#endif

    switch (ctx->pc) {
        case 0x19ae24u: goto label_19ae24;
        case 0x19ae30u: goto label_19ae30;
        case 0x19ae44u: goto label_19ae44;
        case 0x19ae50u: goto label_19ae50;
        case 0x19ae64u: goto label_19ae64;
        case 0x19ae7cu: goto label_19ae7c;
        case 0x19ae88u: goto label_19ae88;
        case 0x19ae98u: goto label_19ae98;
        case 0x19aeacu: goto label_19aeac;
        case 0x19aec4u: goto label_19aec4;
        case 0x19aed0u: goto label_19aed0;
        case 0x19aee0u: goto label_19aee0;
        case 0x19af20u: goto label_19af20;
        case 0x19af30u: goto label_19af30;
        case 0x19af44u: goto label_19af44;
        case 0x19af54u: goto label_19af54;
        case 0x19af84u: goto label_19af84;
        case 0x19af90u: goto label_19af90;
        case 0x19afa4u: goto label_19afa4;
        case 0x19afb0u: goto label_19afb0;
        case 0x19afc0u: goto label_19afc0;
        default: break;
    }

    ctx->pc = 0x19ade0u;

    // 0x19ade0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ade4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ade4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ade8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19adec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19adecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19adf0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19adf4: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x19adf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19adf8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19adf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19adfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ae00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ae04: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19ae04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ae08: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x19AE08u;
    {
        const bool branch_taken_0x19ae08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ae08) {
            ctx->pc = 0x19AEE0u;
            goto label_19aee0;
        }
    }
    ctx->pc = 0x19AE10u;
    // 0x19ae10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae14: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ae18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ae1c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AE1Cu;
    SET_GPR_U32(ctx, 31, 0x19AE24u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AE1Cu, 0x19AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE24u;
label_19ae24:
    // 0x19ae24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae28: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19AE28u;
    SET_GPR_U32(ctx, 31, 0x19AE30u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19AE28u, 0x19AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE30u;
label_19ae30:
    // 0x19ae30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae34: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ae38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19ae3c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AE3Cu;
    SET_GPR_U32(ctx, 31, 0x19AE44u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AE3Cu, 0x19AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE44u;
label_19ae44:
    // 0x19ae44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae48: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19AE48u;
    SET_GPR_U32(ctx, 31, 0x19AE50u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19AE48u, 0x19AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE50u;
label_19ae50:
    // 0x19ae50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae54: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19ae58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ae5c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AE5Cu;
    SET_GPR_U32(ctx, 31, 0x19AE64u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AE5Cu, 0x19AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE64u;
label_19ae64:
    // 0x19ae64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ae64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae6c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19ae70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ae74: 0xc066004  jal         func_198010
    ctx->pc = 0x19AE74u;
    SET_GPR_U32(ctx, 31, 0x19AE7Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19AE74u, 0x19AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE7Cu;
label_19ae7c:
    // 0x19ae7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ae7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae80: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19AE80u;
    SET_GPR_U32(ctx, 31, 0x19AE88u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19AE80u, 0x19AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE88u;
label_19ae88:
    // 0x19ae88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ae8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae90: 0xc084400  jal         func_211000
    ctx->pc = 0x19AE90u;
    SET_GPR_U32(ctx, 31, 0x19AE98u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19AE90u, 0x19AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE98u;
label_19ae98:
    // 0x19ae98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae9c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19aea0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19aea4: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AEA4u;
    SET_GPR_U32(ctx, 31, 0x19AEACu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AEA4u, 0x19AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEACu;
label_19aeac:
    // 0x19aeac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19aeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aeb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aeb4: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19aeb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19aebc: 0xc066004  jal         func_198010
    ctx->pc = 0x19AEBCu;
    SET_GPR_U32(ctx, 31, 0x19AEC4u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19AEBCu, 0x19AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEC4u;
label_19aec4:
    // 0x19aec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aec8: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19AEC8u;
    SET_GPR_U32(ctx, 31, 0x19AED0u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19AEC8u, 0x19AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AED0u;
label_19aed0:
    // 0x19aed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19aed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aed8: 0xc084400  jal         func_211000
    ctx->pc = 0x19AED8u;
    SET_GPR_U32(ctx, 31, 0x19AEE0u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19AED8u, 0x19AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEE0u;
label_19aee0:
    // 0x19aee0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aee4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aee8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x19aee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aeec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19aeecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19aef0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19aef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19aef4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aef8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aefc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19aefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19af00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19af00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19af04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19af08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19af08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19af0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19af10: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19af14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19af14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19af18: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AF18u;
    SET_GPR_U32(ctx, 31, 0x19AF20u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AF18u, 0x19AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF20u;
label_19af20:
    // 0x19af20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19af20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af24: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19af28: 0xc084440  jal         func_211100
    ctx->pc = 0x19AF28u;
    SET_GPR_U32(ctx, 31, 0x19AF30u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19AF28u, 0x19AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF30u;
label_19af30:
    // 0x19af30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19af34: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19af38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19af3c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AF3Cu;
    SET_GPR_U32(ctx, 31, 0x19AF44u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AF3Cu, 0x19AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF44u;
label_19af44:
    // 0x19af44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af48: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19af4c: 0xc084440  jal         func_211100
    ctx->pc = 0x19AF4Cu;
    SET_GPR_U32(ctx, 31, 0x19AF54u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19AF4Cu, 0x19AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF54u;
label_19af54:
    // 0x19af54: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19af58: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19af5c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19af60: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x19af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19af64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19af64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19af68: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x19AF68u;
    {
        const bool branch_taken_0x19af68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19af68) {
            ctx->pc = 0x19AFC0u;
            goto label_19afc0;
        }
    }
    ctx->pc = 0x19AF70u;
    // 0x19af70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19af74: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19af78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19af78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19af7c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AF7Cu;
    SET_GPR_U32(ctx, 31, 0x19AF84u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AF7Cu, 0x19AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF84u;
label_19af84:
    // 0x19af84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af88: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19AF88u;
    SET_GPR_U32(ctx, 31, 0x19AF90u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19AF88u, 0x19AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF90u;
label_19af90:
    // 0x19af90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19af94: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19af98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19af9c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19AF9Cu;
    SET_GPR_U32(ctx, 31, 0x19AFA4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19AF9Cu, 0x19AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFA4u;
label_19afa4:
    // 0x19afa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19afa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afa8: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19AFA8u;
    SET_GPR_U32(ctx, 31, 0x19AFB0u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19AFA8u, 0x19AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFB0u;
label_19afb0:
    // 0x19afb0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19afb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afb8: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19AFB8u;
    SET_GPR_U32(ctx, 31, 0x19AFC0u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19AFB8u, 0x19AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFC0u;
label_19afc0:
    // 0x19afc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19afc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19afc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19afc8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19afcc: 0x3e00008  jr          $ra
    ctx->pc = 0x19AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AFD4u;
    // 0x19afd4: 0x0  nop
    ctx->pc = 0x19afd4u;
    // NOP
    // 0x19afd8: 0x0  nop
    ctx->pc = 0x19afd8u;
    // NOP
    // 0x19afdc: 0x0  nop
    ctx->pc = 0x19afdcu;
    // NOP
    ctx->pc = 0x19afe0u;
}
