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

// Function: sub_001B6DB0
// Address: 0x1b6db0 - 0x1b6f60
void sub_001B6DB0_0x1b6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6DB0_0x1b6db0");
#endif

    switch (ctx->pc) {
        case 0x1b6dd8u: goto label_1b6dd8;
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e38u: goto label_1b6e38;
        case 0x1b6e4cu: goto label_1b6e4c;
        case 0x1b6e70u: goto label_1b6e70;
        case 0x1b6e88u: goto label_1b6e88;
        case 0x1b6eacu: goto label_1b6eac;
        case 0x1b6ec0u: goto label_1b6ec0;
        case 0x1b6ed4u: goto label_1b6ed4;
        case 0x1b6ee8u: goto label_1b6ee8;
        case 0x1b6f24u: goto label_1b6f24;
        case 0x1b6f34u: goto label_1b6f34;
        default: break;
    }

    ctx->pc = 0x1b6db0u;

    // 0x1b6db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b6db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b6db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6dbc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b6dc0: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x1b6dc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b6dc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6dc8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6dcc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b6dd0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6DD0u;
    SET_GPR_U32(ctx, 31, 0x1B6DD8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6DD0u, 0x1B6DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DD8u;
label_1b6dd8:
    // 0x1b6dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ddc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1b6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6de0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6de4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b6de4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6de8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b6de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1b6dec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6df4: 0x0  nop
    ctx->pc = 0x1b6df4u;
    // NOP
    // 0x1b6df8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b6df8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6dfc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6DFCu;
    {
        const bool branch_taken_0x1b6dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6dfc) {
            ctx->pc = 0x1B6E4Cu;
            goto label_1b6e4c;
        }
    }
    ctx->pc = 0x1B6E04u;
    // 0x1b6e04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e08: 0x244402a4  addiu       $a0, $v0, 0x2A4
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x1b6e0c: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x1B6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E14u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x1B6E0Cu, 0x1B6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E14u;
label_1b6e14:
    // 0x1b6e14: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6e18: 0xdf829540  ld          $v0, -0x6AC0($gp)
    ctx->pc = 0x1b6e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939968)));
    // 0x1b6e1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1b6e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1b6e20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e28: 0x246402a4  addiu       $a0, $v1, 0x2A4
    ctx->pc = 0x1b6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 676));
    // 0x1b6e2c: 0x24450494  addiu       $a1, $v0, 0x494
    ctx->pc = 0x1b6e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1172));
    // 0x1b6e30: 0xc084400  jal         func_211000
    ctx->pc = 0x1B6E30u;
    SET_GPR_U32(ctx, 31, 0x1B6E38u);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x1B6E30u, 0x1B6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E38u;
label_1b6e38:
    // 0x1b6e38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e3c: 0x244402a4  addiu       $a0, $v0, 0x2A4
    ctx->pc = 0x1b6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x1b6e40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6e44: 0xc084420  jal         func_211080
    ctx->pc = 0x1B6E44u;
    SET_GPR_U32(ctx, 31, 0x1B6E4Cu);
    ctx->pc = 0x211080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211080u, 0x1B6E44u, 0x1B6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E4Cu;
label_1b6e4c:
    // 0x1b6e4c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6e50: 0xc7809548  lwc1        $f0, -0x6AB8($gp)
    ctx->pc = 0x1b6e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6e54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6e58: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1B6E58u;
    {
        const bool branch_taken_0x1b6e58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6e58) {
            ctx->pc = 0x1B6EC0u;
            goto label_1b6ec0;
        }
    }
    ctx->pc = 0x1B6E60u;
    // 0x1b6e60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e64: 0x24440334  addiu       $a0, $v0, 0x334
    ctx->pc = 0x1b6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
    // 0x1b6e68: 0xc0843f8  jal         func_210FE0
    ctx->pc = 0x1B6E68u;
    SET_GPR_U32(ctx, 31, 0x1B6E70u);
    ctx->pc = 0x210FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FE0u, 0x1B6E68u, 0x1B6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E70u;
label_1b6e70:
    // 0x1b6e70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6E70u;
    {
        const bool branch_taken_0x1b6e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e70) {
            ctx->pc = 0x1B6EC0u;
            goto label_1b6ec0;
        }
    }
    ctx->pc = 0x1B6E78u;
    // 0x1b6e78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e7c: 0x24440334  addiu       $a0, $v0, 0x334
    ctx->pc = 0x1b6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
    // 0x1b6e80: 0xc0843c8  jal         func_210F20
    ctx->pc = 0x1B6E80u;
    SET_GPR_U32(ctx, 31, 0x1B6E88u);
    ctx->pc = 0x210F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F20u, 0x1B6E80u, 0x1B6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E88u;
label_1b6e88:
    // 0x1b6e88: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1b6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b6e8c: 0xdf829550  ld          $v0, -0x6AB0($gp)
    ctx->pc = 0x1b6e8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939984)));
    // 0x1b6e90: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1b6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1b6e94: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6e9c: 0x24640334  addiu       $a0, $v1, 0x334
    ctx->pc = 0x1b6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 820));
    // 0x1b6ea0: 0x24450494  addiu       $a1, $v0, 0x494
    ctx->pc = 0x1b6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1172));
    // 0x1b6ea4: 0xc084400  jal         func_211000
    ctx->pc = 0x1B6EA4u;
    SET_GPR_U32(ctx, 31, 0x1B6EACu);
    ctx->pc = 0x211000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211000u, 0x1B6EA4u, 0x1B6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EACu;
label_1b6eac:
    // 0x1b6eac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6eb0: 0x24440334  addiu       $a0, $v0, 0x334
    ctx->pc = 0x1b6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
    // 0x1b6eb4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1b6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1b6eb8: 0xc084420  jal         func_211080
    ctx->pc = 0x1B6EB8u;
    SET_GPR_U32(ctx, 31, 0x1B6EC0u);
    ctx->pc = 0x211080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211080u, 0x1B6EB8u, 0x1B6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EC0u;
label_1b6ec0:
    // 0x1b6ec0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6ec4: 0x244402a4  addiu       $a0, $v0, 0x2A4
    ctx->pc = 0x1b6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x1b6ec8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1b6ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6ecc: 0xc084440  jal         func_211100
    ctx->pc = 0x1B6ECCu;
    SET_GPR_U32(ctx, 31, 0x1B6ED4u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x1B6ECCu, 0x1B6ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ED4u;
label_1b6ed4:
    // 0x1b6ed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6ed8: 0x24440334  addiu       $a0, $v0, 0x334
    ctx->pc = 0x1b6ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
    // 0x1b6edc: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1b6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6ee0: 0xc084440  jal         func_211100
    ctx->pc = 0x1B6EE0u;
    SET_GPR_U32(ctx, 31, 0x1B6EE8u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x1B6EE0u, 0x1B6EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EE8u;
label_1b6ee8:
    // 0x1b6ee8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6eec: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6ef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b6ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6ef4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6ef8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6efc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1b6f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6f04: 0x0  nop
    ctx->pc = 0x1b6f04u;
    // NOP
    // 0x1b6f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6f0c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1B6F0Cu;
    {
        const bool branch_taken_0x1b6f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6f0c) {
            ctx->pc = 0x1B6F44u;
            goto label_1b6f44;
        }
    }
    ctx->pc = 0x1B6F14u;
    // 0x1b6f14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6f18: 0x244402a4  addiu       $a0, $v0, 0x2A4
    ctx->pc = 0x1b6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x1b6f1c: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x1B6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F24u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x1B6F1Cu, 0x1B6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F24u;
label_1b6f24:
    // 0x1b6f24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6f28: 0x24440334  addiu       $a0, $v0, 0x334
    ctx->pc = 0x1b6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
    // 0x1b6f2c: 0xc0843f0  jal         func_210FC0
    ctx->pc = 0x1B6F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F34u);
    ctx->pc = 0x210FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FC0u, 0x1B6F2Cu, 0x1B6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F34u;
label_1b6f34:
    // 0x1b6f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6f38: 0x0  nop
    ctx->pc = 0x1b6f38u;
    // NOP
    // 0x1b6f3c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6f40: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6f44:
    // 0x1b6f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b6f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b6f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6F58u;
    // 0x1b6f58: 0x0  nop
    ctx->pc = 0x1b6f58u;
    // NOP
    // 0x1b6f5c: 0x0  nop
    ctx->pc = 0x1b6f5cu;
    // NOP
    ctx->pc = 0x1b6f60u;
}
