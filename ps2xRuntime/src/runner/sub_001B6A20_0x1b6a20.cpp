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

// Function: sub_001B6A20
// Address: 0x1b6a20 - 0x1b6b60
void sub_001B6A20_0x1b6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6A20_0x1b6a20");
#endif

    switch (ctx->pc) {
        case 0x1b6a50u: goto label_1b6a50;
        case 0x1b6a80u: goto label_1b6a80;
        case 0x1b6a9cu: goto label_1b6a9c;
        case 0x1b6adcu: goto label_1b6adc;
        case 0x1b6b00u: goto label_1b6b00;
        default: break;
    }

    ctx->pc = 0x1b6a20u;

    // 0x1b6a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b6a24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6a28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b6a2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6a30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b6a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b6a34: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b6a38: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x1b6a38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b6a3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6a40: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6a44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6a48: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6A48u;
    SET_GPR_U32(ctx, 31, 0x1B6A50u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6A48u, 0x1B6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A50u;
label_1b6a50:
    // 0x1b6a50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a54: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1b6a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6a58: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6a5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b6a5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6a60: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6a64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6a68: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6a6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6a70: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6a74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b6a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b6a78: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6A78u;
    SET_GPR_U32(ctx, 31, 0x1B6A80u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6A78u, 0x1B6A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A80u;
label_1b6a80:
    // 0x1b6a80: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1b6a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6a84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b6a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b6a88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6a8c: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6a90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b6a94: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6A94u;
    SET_GPR_U32(ctx, 31, 0x1B6A9Cu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6A94u, 0x1B6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A9Cu;
label_1b6a9c:
    // 0x1b6a9c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b6a9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b6aa0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6aa4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6aa8: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x1b6aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
    // 0x1b6aac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6ab0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6ab8: 0x0  nop
    ctx->pc = 0x1b6ab8u;
    // NOP
    // 0x1b6abc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6ac0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6AC0u;
    {
        const bool branch_taken_0x1b6ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6ac0) {
            ctx->pc = 0x1B6B04u;
            goto label_1b6b04;
        }
    }
    ctx->pc = 0x1B6AC8u;
    // 0x1b6ac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6acc: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6ad4: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6AD4u;
    SET_GPR_U32(ctx, 31, 0x1B6ADCu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6AD4u, 0x1B6ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ADCu;
label_1b6adc:
    // 0x1b6adc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b6adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6ae0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6AE0u;
    {
        const bool branch_taken_0x1b6ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ae0) {
            ctx->pc = 0x1B6B04u;
            goto label_1b6b04;
        }
    }
    ctx->pc = 0x1B6AE8u;
    // 0x1b6ae8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b6ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6aec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6af0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6af8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6AF8u;
    SET_GPR_U32(ctx, 31, 0x1B6B00u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6AF8u, 0x1B6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B00u;
label_1b6b00:
    // 0x1b6b00: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x1b6b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
label_1b6b04:
    // 0x1b6b04: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6b08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6b10: 0x0  nop
    ctx->pc = 0x1b6b10u;
    // NOP
    // 0x1b6b14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6b18: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6B18u;
    {
        const bool branch_taken_0x1b6b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6b18) {
            ctx->pc = 0x1B6B3Cu;
            goto label_1b6b3c;
        }
    }
    ctx->pc = 0x1B6B20u;
    // 0x1b6b20: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6b24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6b28: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x1b6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
    // 0x1b6b2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6b30: 0x0  nop
    ctx->pc = 0x1b6b30u;
    // NOP
    // 0x1b6b34: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6b38: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6b3c:
    // 0x1b6b3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6b40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b6b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6b44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6b48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b6b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6b4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b6b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b6b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6B58u;
    // 0x1b6b58: 0x0  nop
    ctx->pc = 0x1b6b58u;
    // NOP
    // 0x1b6b5c: 0x0  nop
    ctx->pc = 0x1b6b5cu;
    // NOP
    ctx->pc = 0x1b6b60u;
}
