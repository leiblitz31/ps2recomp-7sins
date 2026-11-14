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

// Function: sub_0019AFE0
// Address: 0x19afe0 - 0x19b1e0
void sub_0019AFE0_0x19afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AFE0_0x19afe0");
#endif

    switch (ctx->pc) {
        case 0x19b024u: goto label_19b024;
        case 0x19b030u: goto label_19b030;
        case 0x19b044u: goto label_19b044;
        case 0x19b050u: goto label_19b050;
        case 0x19b064u: goto label_19b064;
        case 0x19b07cu: goto label_19b07c;
        case 0x19b088u: goto label_19b088;
        case 0x19b098u: goto label_19b098;
        case 0x19b0acu: goto label_19b0ac;
        case 0x19b0c4u: goto label_19b0c4;
        case 0x19b0d0u: goto label_19b0d0;
        case 0x19b0e0u: goto label_19b0e0;
        case 0x19b120u: goto label_19b120;
        case 0x19b130u: goto label_19b130;
        case 0x19b144u: goto label_19b144;
        case 0x19b154u: goto label_19b154;
        case 0x19b184u: goto label_19b184;
        case 0x19b190u: goto label_19b190;
        case 0x19b1a4u: goto label_19b1a4;
        case 0x19b1b0u: goto label_19b1b0;
        case 0x19b1c0u: goto label_19b1c0;
        default: break;
    }

    ctx->pc = 0x19afe0u;

    // 0x19afe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19afe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19afe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19afec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19afecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19aff0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19aff4: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x19aff4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19aff8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19aff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19affc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b000: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19b000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b004: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19b004u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b008: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x19B008u;
    {
        const bool branch_taken_0x19b008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b008) {
            ctx->pc = 0x19B0E0u;
            goto label_19b0e0;
        }
    }
    ctx->pc = 0x19B010u;
    // 0x19b010: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b014: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b018: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b01c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B01Cu;
    SET_GPR_U32(ctx, 31, 0x19B024u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B01Cu, 0x19B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B024u;
label_19b024:
    // 0x19b024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b028: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19B028u;
    SET_GPR_U32(ctx, 31, 0x19B030u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19B028u, 0x19B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B030u;
label_19b030:
    // 0x19b030: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b034: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b038: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b03c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B03Cu;
    SET_GPR_U32(ctx, 31, 0x19B044u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B03Cu, 0x19B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B044u;
label_19b044:
    // 0x19b044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b048: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19B048u;
    SET_GPR_U32(ctx, 31, 0x19B050u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19B048u, 0x19B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B050u;
label_19b050:
    // 0x19b050: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b054: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b058: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b05c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B05Cu;
    SET_GPR_U32(ctx, 31, 0x19B064u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B05Cu, 0x19B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B064u;
label_19b064:
    // 0x19b064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b068: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b06c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19b070: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b074: 0xc066004  jal         func_198010
    ctx->pc = 0x19B074u;
    SET_GPR_U32(ctx, 31, 0x19B07Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19B074u, 0x19B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B07Cu;
label_19b07c:
    // 0x19b07c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b080: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19B080u;
    SET_GPR_U32(ctx, 31, 0x19B088u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19B080u, 0x19B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B088u;
label_19b088:
    // 0x19b088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b090: 0xc084400  jal         func_211000
    ctx->pc = 0x19B090u;
    SET_GPR_U32(ctx, 31, 0x19B098u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19B090u, 0x19B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B098u;
label_19b098:
    // 0x19b098: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b09c: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b0a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b0a4: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B0A4u;
    SET_GPR_U32(ctx, 31, 0x19B0ACu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B0A4u, 0x19B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0ACu;
label_19b0ac:
    // 0x19b0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b0b4: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19b0b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b0bc: 0xc066004  jal         func_198010
    ctx->pc = 0x19B0BCu;
    SET_GPR_U32(ctx, 31, 0x19B0C4u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19B0BCu, 0x19B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0C4u;
label_19b0c4:
    // 0x19b0c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0c8: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19B0C8u;
    SET_GPR_U32(ctx, 31, 0x19B0D0u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19B0C8u, 0x19B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0D0u;
label_19b0d0:
    // 0x19b0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0d8: 0xc084400  jal         func_211000
    ctx->pc = 0x19B0D8u;
    SET_GPR_U32(ctx, 31, 0x19B0E0u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19B0D8u, 0x19B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0E0u;
label_19b0e0:
    // 0x19b0e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b0e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b0e8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x19b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b0ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b0f0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19b0f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b0f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b0fc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b100: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b104: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b108: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19b108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19b10c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b110: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b114: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b118: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B118u;
    SET_GPR_U32(ctx, 31, 0x19B120u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B118u, 0x19B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B120u;
label_19b120:
    // 0x19b120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b124: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b128: 0xc084440  jal         func_211100
    ctx->pc = 0x19B128u;
    SET_GPR_U32(ctx, 31, 0x19B130u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19B128u, 0x19B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B130u;
label_19b130:
    // 0x19b130: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b134: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b138: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b13c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B13Cu;
    SET_GPR_U32(ctx, 31, 0x19B144u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B13Cu, 0x19B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B144u;
label_19b144:
    // 0x19b144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b148: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19b148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b14c: 0xc084440  jal         func_211100
    ctx->pc = 0x19B14Cu;
    SET_GPR_U32(ctx, 31, 0x19B154u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19B14Cu, 0x19B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B154u;
label_19b154:
    // 0x19b154: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b158: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b15c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b160: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x19b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b168: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x19B168u;
    {
        const bool branch_taken_0x19b168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b168) {
            ctx->pc = 0x19B1C0u;
            goto label_19b1c0;
        }
    }
    ctx->pc = 0x19B170u;
    // 0x19b170: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b174: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b178: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b17c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B17Cu;
    SET_GPR_U32(ctx, 31, 0x19B184u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B17Cu, 0x19B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B184u;
label_19b184:
    // 0x19b184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b188: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19B188u;
    SET_GPR_U32(ctx, 31, 0x19B190u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19B188u, 0x19B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B190u;
label_19b190:
    // 0x19b190: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b194: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b198: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b19c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B19Cu;
    SET_GPR_U32(ctx, 31, 0x19B1A4u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B19Cu, 0x19B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1A4u;
label_19b1a4:
    // 0x19b1a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1a8: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19B1A8u;
    SET_GPR_U32(ctx, 31, 0x19B1B0u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19B1A8u, 0x19B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1B0u;
label_19b1b0:
    // 0x19b1b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1b8: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19B1B8u;
    SET_GPR_U32(ctx, 31, 0x19B1C0u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19B1B8u, 0x19B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1C0u;
label_19b1c0:
    // 0x19b1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b1c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19b1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19B1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B1D4u;
    // 0x19b1d4: 0x0  nop
    ctx->pc = 0x19b1d4u;
    // NOP
    // 0x19b1d8: 0x0  nop
    ctx->pc = 0x19b1d8u;
    // NOP
    // 0x19b1dc: 0x0  nop
    ctx->pc = 0x19b1dcu;
    // NOP
    ctx->pc = 0x19b1e0u;
}
