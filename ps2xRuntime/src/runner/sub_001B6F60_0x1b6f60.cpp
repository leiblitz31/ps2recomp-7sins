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

// Function: sub_001B6F60
// Address: 0x1b6f60 - 0x1b70a0
void sub_001B6F60_0x1b6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6F60_0x1b6f60");
#endif

    switch (ctx->pc) {
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6fc4u: goto label_1b6fc4;
        case 0x1b700cu: goto label_1b700c;
        case 0x1b7020u: goto label_1b7020;
        case 0x1b7034u: goto label_1b7034;
        case 0x1b7070u: goto label_1b7070;
        default: break;
    }

    ctx->pc = 0x1b6f60u;

    // 0x1b6f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6f6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b6f70: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1b6f70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b6f74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6f78: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6f7c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b6f80: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6F80u, 0x1B6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f8c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1b6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6f90: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6f94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b6f94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6f98: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b6f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b6f9c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6fa4: 0x0  nop
    ctx->pc = 0x1b6fa4u;
    // NOP
    // 0x1b6fa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b6fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6fac: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1B6FACu;
    {
        const bool branch_taken_0x1b6fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6fac) {
            ctx->pc = 0x1B7020u;
            goto label_1b7020;
        }
    }
    ctx->pc = 0x1B6FB4u;
    // 0x1b6fb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fb8: 0x244403c4  addiu       $a0, $v0, 0x3C4
    ctx->pc = 0x1b6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 964));
    // 0x1b6fbc: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x1B6FBCu;
    SET_GPR_U32(ctx, 31, 0x1B6FC4u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x1B6FBCu, 0x1B6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FC4u;
label_1b6fc4:
    // 0x1b6fc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fc8: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1b6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6fcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fd0: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x1b6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b6fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6fd8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b6fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b6fdc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fe0: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1b6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6fe4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fe8: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1b6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6fec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b6fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6ff0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b6ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b6ff4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6ff8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6ffc: 0x246403c4  addiu       $a0, $v1, 0x3C4
    ctx->pc = 0x1b6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
    // 0x1b7000: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x1b7000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1b7004: 0xc084400  jal         func_211000
    ctx->pc = 0x1B7004u;
    SET_GPR_U32(ctx, 31, 0x1B700Cu);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x1B7004u, 0x1B700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B700Cu;
label_1b700c:
    // 0x1b700c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7010: 0x244403c4  addiu       $a0, $v0, 0x3C4
    ctx->pc = 0x1b7010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 964));
    // 0x1b7014: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b7014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7018: 0xc084420  jal         func_211080
    ctx->pc = 0x1B7018u;
    SET_GPR_U32(ctx, 31, 0x1B7020u);
    ctx->pc = 0x211080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211080u, 0x1B7018u, 0x1B7020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7020u;
label_1b7020:
    // 0x1b7020: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7024: 0x244403c4  addiu       $a0, $v0, 0x3C4
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 964));
    // 0x1b7028: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1b7028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b702c: 0xc084440  jal         func_211100
    ctx->pc = 0x1B702Cu;
    SET_GPR_U32(ctx, 31, 0x1B7034u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x1B702Cu, 0x1B7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7034u;
label_1b7034:
    // 0x1b7034: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b7034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7038: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b703c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7040: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b7044: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7048: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b704c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b704cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7050: 0x0  nop
    ctx->pc = 0x1b7050u;
    // NOP
    // 0x1b7054: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7058: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7058u;
    {
        const bool branch_taken_0x1b7058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7058) {
            ctx->pc = 0x1B7080u;
            goto label_1b7080;
        }
    }
    ctx->pc = 0x1B7060u;
    // 0x1b7060: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7064: 0x244403c4  addiu       $a0, $v0, 0x3C4
    ctx->pc = 0x1b7064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 964));
    // 0x1b7068: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x1B7068u;
    SET_GPR_U32(ctx, 31, 0x1B7070u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x1B7068u, 0x1B7070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7070u;
label_1b7070:
    // 0x1b7070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7074: 0x0  nop
    ctx->pc = 0x1b7074u;
    // NOP
    // 0x1b7078: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b707c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b707cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b7080:
    // 0x1b7080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7088: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b708c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B708Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7094u;
    // 0x1b7094: 0x0  nop
    ctx->pc = 0x1b7094u;
    // NOP
    // 0x1b7098: 0x0  nop
    ctx->pc = 0x1b7098u;
    // NOP
    // 0x1b709c: 0x0  nop
    ctx->pc = 0x1b709cu;
    // NOP
    ctx->pc = 0x1b70a0u;
}
