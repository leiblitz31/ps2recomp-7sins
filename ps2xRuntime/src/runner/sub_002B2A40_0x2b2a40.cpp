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

// Function: sub_002B2A40
// Address: 0x2b2a40 - 0x2b2b10
void sub_002B2A40_0x2b2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2A40_0x2b2a40");
#endif

    switch (ctx->pc) {
        case 0x2b2aa4u: goto label_2b2aa4;
        default: break;
    }

    ctx->pc = 0x2b2a40u;

    // 0x2b2a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b2a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b2a4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b2a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b2a50: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b2a54: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x2b2a54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b2a58: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2b2a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2b2a5c: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2b2a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2a60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2a64: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2b2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2b2a68: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2a6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2a70: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2b2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2b2a74: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B2A74u;
    {
        const bool branch_taken_0x2b2a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2a74) {
            ctx->pc = 0x2B2AF4u;
            goto label_2b2af4;
        }
    }
    ctx->pc = 0x2B2A7Cu;
    // 0x2b2a7c: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x2b2a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2b2a80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2A80u;
    {
        const bool branch_taken_0x2b2a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2a80) {
            ctx->pc = 0x2B2AACu;
            goto label_2b2aac;
        }
    }
    ctx->pc = 0x2B2A88u;
    // 0x2b2a88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2b2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2a8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2a90: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x2b2a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x2b2a94: 0x24c623f0  addiu       $a2, $a2, 0x23F0
    ctx->pc = 0x2b2a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9200));
    // 0x2b2a98: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2a9c: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2B2A9Cu;
    SET_GPR_U32(ctx, 31, 0x2B2AA4u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2B2A9Cu, 0x2B2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AA4u;
label_2b2aa4:
    // 0x2b2aa4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B2AA4u;
    {
        const bool branch_taken_0x2b2aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2aa4) {
            ctx->pc = 0x2B2AF4u;
            goto label_2b2af4;
        }
    }
    ctx->pc = 0x2B2AACu;
label_2b2aac:
    // 0x2b2aac: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2b2aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2ab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2ab4: 0x0  nop
    ctx->pc = 0x2b2ab4u;
    // NOP
    // 0x2b2ab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b2ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2abc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2ABCu;
    {
        const bool branch_taken_0x2b2abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2abc) {
            ctx->pc = 0x2B2AD0u;
            goto label_2b2ad0;
        }
    }
    ctx->pc = 0x2B2AC4u;
    // 0x2b2ac4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2ac8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B2AC8u;
    {
        const bool branch_taken_0x2b2ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ac8) {
            ctx->pc = 0x2B2AF8u;
            goto label_2b2af8;
        }
    }
    ctx->pc = 0x2B2AD0u;
label_2b2ad0:
    // 0x2b2ad0: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2b2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2ad4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2b2ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2ad8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b2ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2adc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2ADCu;
    {
        const bool branch_taken_0x2b2adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2adc) {
            ctx->pc = 0x2B2AF4u;
            goto label_2b2af4;
        }
    }
    ctx->pc = 0x2B2AE4u;
    // 0x2b2ae4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2b2ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2ae8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2b2ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2b2aec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2af0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2b2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2b2af4:
    // 0x2b2af4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b2af8:
    // 0x2b2af8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2b00: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b2b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b2b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B0Cu;
    // 0x2b2b0c: 0x0  nop
    ctx->pc = 0x2b2b0cu;
    // NOP
    ctx->pc = 0x2b2b10u;
}
