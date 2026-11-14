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

// Function: sub_002CFE10
// Address: 0x2cfe10 - 0x2cfea0
void sub_002CFE10_0x2cfe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFE10_0x2cfe10");
#endif

    switch (ctx->pc) {
        case 0x2cfe2cu: goto label_2cfe2c;
        case 0x2cfe5cu: goto label_2cfe5c;
        case 0x2cfe84u: goto label_2cfe84;
        default: break;
    }

    ctx->pc = 0x2cfe10u;

    // 0x2cfe10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cfe14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfe18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cfe18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cfe1c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2cfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2cfe20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cfe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfe24: 0xc091008  jal         func_244020
    ctx->pc = 0x2CFE24u;
    SET_GPR_U32(ctx, 31, 0x2CFE2Cu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2CFE24u, 0x2CFE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE2Cu;
label_2cfe2c:
    // 0x2cfe2c: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x2cfe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfe30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfe30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe34: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2cfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2cfe38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe3c: 0x0  nop
    ctx->pc = 0x2cfe3cu;
    // NOP
    // 0x2cfe40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2cfe40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2cfe44: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2cfe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2cfe48: 0xc78181f8  lwc1        $f1, -0x7E08($gp)
    ctx->pc = 0x2cfe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfe4c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2cfe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfe50: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cfe50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe54: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x2CFE54u;
    SET_GPR_U32(ctx, 31, 0x2CFE5Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2CFE54u, 0x2CFE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE5Cu;
label_2cfe5c:
    // 0x2cfe5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfe60: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cfe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cfe64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cfe64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfe6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2cfe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2cfe70: 0xc78181f8  lwc1        $f1, -0x7E08($gp)
    ctx->pc = 0x2cfe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfe74: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2cfe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfe78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cfe78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe7c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2CFE7Cu;
    SET_GPR_U32(ctx, 31, 0x2CFE84u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2CFE7Cu, 0x2CFE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE84u;
label_2cfe84:
    // 0x2cfe84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2cfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfe88: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2cfe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2cfe8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfe90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cfe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cfe94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE9Cu;
    // 0x2cfe9c: 0x0  nop
    ctx->pc = 0x2cfe9cu;
    // NOP
    ctx->pc = 0x2cfea0u;
}
