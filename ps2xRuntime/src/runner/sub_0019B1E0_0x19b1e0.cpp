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

// Function: sub_0019B1E0
// Address: 0x19b1e0 - 0x19b330
void sub_0019B1E0_0x19b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B1E0_0x19b1e0");
#endif

    switch (ctx->pc) {
        case 0x19b224u: goto label_19b224;
        case 0x19b230u: goto label_19b230;
        case 0x19b244u: goto label_19b244;
        case 0x19b25cu: goto label_19b25c;
        case 0x19b268u: goto label_19b268;
        case 0x19b278u: goto label_19b278;
        case 0x19b2b8u: goto label_19b2b8;
        case 0x19b2c8u: goto label_19b2c8;
        case 0x19b2f8u: goto label_19b2f8;
        case 0x19b304u: goto label_19b304;
        case 0x19b314u: goto label_19b314;
        default: break;
    }

    ctx->pc = 0x19b1e0u;

    // 0x19b1e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19b1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b1ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19b1f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19b1f4: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x19b1f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19b1f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19b1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b1fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b200: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19b200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b204: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19b204u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b208: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x19B208u;
    {
        const bool branch_taken_0x19b208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b208) {
            ctx->pc = 0x19B278u;
            goto label_19b278;
        }
    }
    ctx->pc = 0x19B210u;
    // 0x19b210: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b214: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b218: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b21c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B21Cu;
    SET_GPR_U32(ctx, 31, 0x19B224u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B21Cu, 0x19B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B224u;
label_19b224:
    // 0x19b224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b228: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x19B228u;
    SET_GPR_U32(ctx, 31, 0x19B230u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x19B228u, 0x19B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B230u;
label_19b230:
    // 0x19b230: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b234: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b238: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b23c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B23Cu;
    SET_GPR_U32(ctx, 31, 0x19B244u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B23Cu, 0x19B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B244u;
label_19b244:
    // 0x19b244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b248: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b24c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x19b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19b250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b254: 0xc066004  jal         func_198010
    ctx->pc = 0x19B254u;
    SET_GPR_U32(ctx, 31, 0x19B25Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x19B254u, 0x19B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B25Cu;
label_19b25c:
    // 0x19b25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b260: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x19B260u;
    SET_GPR_U32(ctx, 31, 0x19B268u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x19B260u, 0x19B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B268u;
label_19b268:
    // 0x19b268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b270: 0xc084400  jal         func_211000
    ctx->pc = 0x19B270u;
    SET_GPR_U32(ctx, 31, 0x19B278u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x19B270u, 0x19B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B278u;
label_19b278:
    // 0x19b278: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b27c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b280: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x19b280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b288: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19b28c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b290: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b294: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b298: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b29c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b2a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19b2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19b2a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b2a8: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b2ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19b2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b2b0: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B2B0u;
    SET_GPR_U32(ctx, 31, 0x19B2B8u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B2B0u, 0x19B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2B8u;
label_19b2b8:
    // 0x19b2b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2bc: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b2c0: 0xc084440  jal         func_211100
    ctx->pc = 0x19B2C0u;
    SET_GPR_U32(ctx, 31, 0x19B2C8u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x19B2C0u, 0x19B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2C8u;
label_19b2c8:
    // 0x19b2c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x19b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b2cc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19b2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b2d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b2d4: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x19b2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b2d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b2dc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19B2DCu;
    {
        const bool branch_taken_0x19b2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b2dc) {
            ctx->pc = 0x19B314u;
            goto label_19b314;
        }
    }
    ctx->pc = 0x19B2E4u;
    // 0x19b2e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b2e8: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x19b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x19b2ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b2f0: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x19B2F0u;
    SET_GPR_U32(ctx, 31, 0x19B2F8u);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x19B2F0u, 0x19B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F8u;
label_19b2f8:
    // 0x19b2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2fc: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x19B2FCu;
    SET_GPR_U32(ctx, 31, 0x19B304u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x19B2FCu, 0x19B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B304u;
label_19b304:
    // 0x19b304: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b30c: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x19B30Cu;
    SET_GPR_U32(ctx, 31, 0x19B314u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x19B30Cu, 0x19B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B314u;
label_19b314:
    // 0x19b314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b31c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19b31cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19b320: 0x3e00008  jr          $ra
    ctx->pc = 0x19B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B328u;
    // 0x19b328: 0x0  nop
    ctx->pc = 0x19b328u;
    // NOP
    // 0x19b32c: 0x0  nop
    ctx->pc = 0x19b32cu;
    // NOP
    ctx->pc = 0x19b330u;
}
