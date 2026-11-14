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

// Function: sub_001CE700
// Address: 0x1ce700 - 0x1ce790
void sub_001CE700_0x1ce700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE700_0x1ce700");
#endif

    switch (ctx->pc) {
        case 0x1ce720u: goto label_1ce720;
        case 0x1ce758u: goto label_1ce758;
        case 0x1ce778u: goto label_1ce778;
        default: break;
    }

    ctx->pc = 0x1ce700u;

    // 0x1ce700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce708: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ce708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ce70c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ce70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ce710: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1ce710u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ce714: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ce714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce718: 0xc091008  jal         func_244020
    ctx->pc = 0x1CE718u;
    SET_GPR_U32(ctx, 31, 0x1CE720u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1CE718u, 0x1CE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE720u;
label_1ce720:
    // 0x1ce720: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1ce720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce724: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce724u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce728: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1ce728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce72c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ce72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce730: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1ce734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce738: 0x0  nop
    ctx->pc = 0x1ce738u;
    // NOP
    // 0x1ce73c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ce73cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ce740: 0xc78081f8  lwc1        $f0, -0x7E08($gp)
    ctx->pc = 0x1ce740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce748: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ce748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ce74c: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x1ce74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce750: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1CE750u;
    SET_GPR_U32(ctx, 31, 0x1CE758u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CE750u, 0x1CE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE758u;
label_1ce758:
    // 0x1ce758: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ce758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce75c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ce760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce764: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ce764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce768: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ce768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ce76c: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x1ce76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce770: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1CE770u;
    SET_GPR_U32(ctx, 31, 0x1CE778u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1CE770u, 0x1CE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE778u;
label_1ce778:
    // 0x1ce778: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ce778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce77c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ce77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1ce780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce784: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ce784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce788: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE790u;
}
