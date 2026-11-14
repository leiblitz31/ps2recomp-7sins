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

// Function: sub_002CFFC0
// Address: 0x2cffc0 - 0x2d0090
void sub_002CFFC0_0x2cffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFFC0_0x2cffc0");
#endif

    switch (ctx->pc) {
        case 0x2d0024u: goto label_2d0024;
        default: break;
    }

    ctx->pc = 0x2cffc0u;

    // 0x2cffc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cffc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cffc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cffcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cffccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cffd0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2cffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2cffd4: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x2cffd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2cffd8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x2cffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x2cffdc: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2cffdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cffe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cffe4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2cffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2cffe8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2cffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cffec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfff0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cfff4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CFFF4u;
    {
        const bool branch_taken_0x2cfff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfff4) {
            ctx->pc = 0x2D0074u;
            goto label_2d0074;
        }
    }
    ctx->pc = 0x2CFFFCu;
    // 0x2cfffc: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x2cfffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d0000: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0000u;
    {
        const bool branch_taken_0x2d0000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0000) {
            ctx->pc = 0x2D002Cu;
            goto label_2d002c;
        }
    }
    ctx->pc = 0x2D0008u;
    // 0x2d0008: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d0008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d000c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d000cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0010: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2d0010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2d0014: 0x24c6fea0  addiu       $a2, $a2, -0x160
    ctx->pc = 0x2d0014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966944));
    // 0x2d0018: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2d0018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d001c: 0xc0c6c6a  jal         func_31B1A8
    ctx->pc = 0x2D001Cu;
    SET_GPR_U32(ctx, 31, 0x2D0024u);
    ctx->pc = 0x31B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B1A8u, 0x2D001Cu, 0x2D0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0024u;
label_2d0024:
    // 0x2d0024: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0024u;
    {
        const bool branch_taken_0x2d0024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0024) {
            ctx->pc = 0x2D0074u;
            goto label_2d0074;
        }
    }
    ctx->pc = 0x2D002Cu;
label_2d002c:
    // 0x2d002c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2d002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d0030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0034: 0x0  nop
    ctx->pc = 0x2d0034u;
    // NOP
    // 0x2d0038: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d0038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d003c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D003Cu;
    {
        const bool branch_taken_0x2d003c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d003c) {
            ctx->pc = 0x2D0050u;
            goto label_2d0050;
        }
    }
    ctx->pc = 0x2D0044u;
    // 0x2d0044: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D0048u;
    {
        const bool branch_taken_0x2d0048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0048) {
            ctx->pc = 0x2D0078u;
            goto label_2d0078;
        }
    }
    ctx->pc = 0x2D0050u;
label_2d0050:
    // 0x2d0050: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2d0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0054: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d0054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0058: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d0058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d005c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D005Cu;
    {
        const bool branch_taken_0x2d005c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d005c) {
            ctx->pc = 0x2D0074u;
            goto label_2d0074;
        }
    }
    ctx->pc = 0x2D0064u;
    // 0x2d0064: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d0064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0068: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2d0068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2d006c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0070: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2d0070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2d0074:
    // 0x2d0074: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d0078:
    // 0x2d0078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d007c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d007cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0080: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d0084: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D008Cu;
    // 0x2d008c: 0x0  nop
    ctx->pc = 0x2d008cu;
    // NOP
    ctx->pc = 0x2d0090u;
}
