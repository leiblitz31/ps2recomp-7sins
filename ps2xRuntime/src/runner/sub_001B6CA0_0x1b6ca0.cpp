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

// Function: sub_001B6CA0
// Address: 0x1b6ca0 - 0x1b6db0
void sub_001B6CA0_0x1b6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6CA0_0x1b6ca0");
#endif

    switch (ctx->pc) {
        case 0x1b6cc8u: goto label_1b6cc8;
        case 0x1b6d04u: goto label_1b6d04;
        case 0x1b6d28u: goto label_1b6d28;
        case 0x1b6d3cu: goto label_1b6d3c;
        case 0x1b6d50u: goto label_1b6d50;
        case 0x1b6d8cu: goto label_1b6d8c;
        default: break;
    }

    ctx->pc = 0x1b6ca0u;

    // 0x1b6ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6cac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b6cb0: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1b6cb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b6cb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6cb8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6cbc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b6cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b6cc0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6CC0u;
    SET_GPR_U32(ctx, 31, 0x1B6CC8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6CC0u, 0x1B6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CC8u;
label_1b6cc8:
    // 0x1b6cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ccc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1b6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6cd0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6cd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b6cd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6cd8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b6cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b6cdc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6ce0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6ce4: 0x0  nop
    ctx->pc = 0x1b6ce4u;
    // NOP
    // 0x1b6ce8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b6ce8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6cec: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6CECu;
    {
        const bool branch_taken_0x1b6cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6cec) {
            ctx->pc = 0x1B6D3Cu;
            goto label_1b6d3c;
        }
    }
    ctx->pc = 0x1B6CF4u;
    // 0x1b6cf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6cf8: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1b6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1b6cfc: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x1B6CFCu;
    SET_GPR_U32(ctx, 31, 0x1B6D04u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x1B6CFCu, 0x1B6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D04u;
label_1b6d04:
    // 0x1b6d04: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1b6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b6d08: 0xdf829538  ld          $v0, -0x6AC8($gp)
    ctx->pc = 0x1b6d08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939960)));
    // 0x1b6d0c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1b6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1b6d10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d18: 0x24640214  addiu       $a0, $v1, 0x214
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 532));
    // 0x1b6d1c: 0x24450134  addiu       $a1, $v0, 0x134
    ctx->pc = 0x1b6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
    // 0x1b6d20: 0xc084400  jal         func_211000
    ctx->pc = 0x1B6D20u;
    SET_GPR_U32(ctx, 31, 0x1B6D28u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x1B6D20u, 0x1B6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D28u;
label_1b6d28:
    // 0x1b6d28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d2c: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1b6d30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b6d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b6d34: 0xc084420  jal         func_211080
    ctx->pc = 0x1B6D34u;
    SET_GPR_U32(ctx, 31, 0x1B6D3Cu);
    ctx->pc = 0x211080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211080u, 0x1B6D34u, 0x1B6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D3Cu;
label_1b6d3c:
    // 0x1b6d3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d40: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1b6d44: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1b6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6d48: 0xc084440  jal         func_211100
    ctx->pc = 0x1B6D48u;
    SET_GPR_U32(ctx, 31, 0x1B6D50u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x1B6D48u, 0x1B6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D50u;
label_1b6d50:
    // 0x1b6d50: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6d54: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6d58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6d5c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6d60: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6d64: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1b6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1b6d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6d6c: 0x0  nop
    ctx->pc = 0x1b6d6cu;
    // NOP
    // 0x1b6d70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6d70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6d74: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6D74u;
    {
        const bool branch_taken_0x1b6d74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6d74) {
            ctx->pc = 0x1B6D9Cu;
            goto label_1b6d9c;
        }
    }
    ctx->pc = 0x1B6D7Cu;
    // 0x1b6d7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d80: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1b6d84: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x1B6D84u;
    SET_GPR_U32(ctx, 31, 0x1B6D8Cu);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x1B6D84u, 0x1B6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D8Cu;
label_1b6d8c:
    // 0x1b6d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6d90: 0x0  nop
    ctx->pc = 0x1b6d90u;
    // NOP
    // 0x1b6d94: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6d98: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6d9c:
    // 0x1b6d9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6da0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6da4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b6da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b6da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6DB0u;
}
