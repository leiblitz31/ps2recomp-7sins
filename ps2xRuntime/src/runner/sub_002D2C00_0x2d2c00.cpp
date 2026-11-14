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

// Function: sub_002D2C00
// Address: 0x2d2c00 - 0x2d3020
void sub_002D2C00_0x2d2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2C00_0x2d2c00");
#endif

    switch (ctx->pc) {
        case 0x2d2c78u: goto label_2d2c78;
        case 0x2d2c94u: goto label_2d2c94;
        case 0x2d2ca4u: goto label_2d2ca4;
        case 0x2d2cb4u: goto label_2d2cb4;
        case 0x2d2cc8u: goto label_2d2cc8;
        case 0x2d2cd8u: goto label_2d2cd8;
        case 0x2d2cfcu: goto label_2d2cfc;
        case 0x2d2dbcu: goto label_2d2dbc;
        case 0x2d2dccu: goto label_2d2dcc;
        case 0x2d2df0u: goto label_2d2df0;
        case 0x2d2e00u: goto label_2d2e00;
        case 0x2d2e14u: goto label_2d2e14;
        case 0x2d2e24u: goto label_2d2e24;
        case 0x2d2e74u: goto label_2d2e74;
        case 0x2d2ee4u: goto label_2d2ee4;
        case 0x2d2f14u: goto label_2d2f14;
        case 0x2d2f24u: goto label_2d2f24;
        case 0x2d2f50u: goto label_2d2f50;
        case 0x2d2f70u: goto label_2d2f70;
        case 0x2d2f8cu: goto label_2d2f8c;
        case 0x2d2fa0u: goto label_2d2fa0;
        case 0x2d2fb8u: goto label_2d2fb8;
        case 0x2d2fc8u: goto label_2d2fc8;
        case 0x2d2fdcu: goto label_2d2fdc;
        case 0x2d2ff8u: goto label_2d2ff8;
        default: break;
    }

    ctx->pc = 0x2d2c00u;

    // 0x2d2c00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d2c04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2c14: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2d2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2d2c18: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2c1c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d2c20: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2d2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d2c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2c28: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2C28u;
    {
        const bool branch_taken_0x2d2c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2c28) {
            ctx->pc = 0x2D2C64u;
            goto label_2d2c64;
        }
    }
    ctx->pc = 0x2D2C30u;
    // 0x2d2c30: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2c34: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2d2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d2c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2c3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2C3Cu;
    {
        const bool branch_taken_0x2d2c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2c3c) {
            ctx->pc = 0x2D2C58u;
            goto label_2d2c58;
        }
    }
    ctx->pc = 0x2D2C44u;
    // 0x2d2c44: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2c48: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2d2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d2c4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2c50: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2C50u;
    {
        const bool branch_taken_0x2d2c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d2c50) {
            ctx->pc = 0x2D2C64u;
            goto label_2d2c64;
        }
    }
    ctx->pc = 0x2D2C58u;
label_2d2c58:
    // 0x2d2c58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c5c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2D2C5Cu;
    {
        const bool branch_taken_0x2d2c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c5c) {
            ctx->pc = 0x2D2FFCu;
            goto label_2d2ffc;
        }
    }
    ctx->pc = 0x2D2C64u;
label_2d2c64:
    // 0x2d2c64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2c68: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2d2c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d2c6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d2c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d2c70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D2C70u;
    SET_GPR_U32(ctx, 31, 0x2D2C78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D2C70u, 0x2D2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C78u;
label_2d2c78:
    // 0x2d2c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c7c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2c80: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2d2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d2c84: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d2c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c8c: 0xc0b4c2c  jal         func_2D30B0
    ctx->pc = 0x2D2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C94u);
    ctx->pc = 0x2D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30B0u, 0x2D2C8Cu, 0x2D2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C94u;
label_2d2c94:
    // 0x2d2c94: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d2c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2c98: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2c9c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D2CA4u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D2C9Cu, 0x2D2CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CA4u;
label_2d2ca4:
    // 0x2d2ca4: 0x24520018  addiu       $s2, $v0, 0x18
    ctx->pc = 0x2d2ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d2ca8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2cac: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D2CACu;
    SET_GPR_U32(ctx, 31, 0x2D2CB4u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D2CACu, 0x2D2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CB4u;
label_2d2cb4:
    // 0x2d2cb4: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2CB4u;
    {
        const bool branch_taken_0x2d2cb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2cb4) {
            ctx->pc = 0x2D2CE0u;
            goto label_2d2ce0;
        }
    }
    ctx->pc = 0x2D2CBCu;
    // 0x2d2cbc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2cc0: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D2CC0u;
    SET_GPR_U32(ctx, 31, 0x2D2CC8u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D2CC0u, 0x2D2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CC8u;
label_2d2cc8:
    // 0x2d2cc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d2ccc: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2d2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d2cd0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D2CD0u;
    SET_GPR_U32(ctx, 31, 0x2D2CD8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D2CD0u, 0x2D2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CD8u;
label_2d2cd8:
    // 0x2d2cd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2CD8u;
    {
        const bool branch_taken_0x2d2cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cd8) {
            ctx->pc = 0x2D2CECu;
            goto label_2d2cec;
        }
    }
    ctx->pc = 0x2D2CE0u;
label_2d2ce0:
    // 0x2d2ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2ce4: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2D2CE4u;
    {
        const bool branch_taken_0x2d2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ce4) {
            ctx->pc = 0x2D2FFCu;
            goto label_2d2ffc;
        }
    }
    ctx->pc = 0x2D2CECu;
label_2d2cec:
    // 0x2d2cec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2d2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d2cf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cf4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D2CF4u;
    SET_GPR_U32(ctx, 31, 0x2D2CFCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D2CF4u, 0x2D2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CFCu;
label_2d2cfc:
    // 0x2d2cfc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2d2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d2d00: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d2d04: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d2d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d08: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d0c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d2d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2d10: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d2d10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d2d14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d2d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d2d18: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d2d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d2d1c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2d2d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2d28: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2d2d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2d2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d2d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d2d30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2d34: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x2D2D34u;
    {
        const bool branch_taken_0x2d2d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2d34) {
            ctx->pc = 0x2D2E7Cu;
            goto label_2d2e7c;
        }
    }
    ctx->pc = 0x2D2D3Cu;
    // 0x2d2d3c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2d2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d40: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x2d2d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d4c: 0x0  nop
    ctx->pc = 0x2d2d4cu;
    // NOP
    // 0x2d2d50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2d54: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2d2d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2d58: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x2D2D58u;
    {
        const bool branch_taken_0x2d2d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2d58) {
            ctx->pc = 0x2D2E7Cu;
            goto label_2d2e7c;
        }
    }
    ctx->pc = 0x2D2D60u;
    // 0x2d2d60: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2d2d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2d68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2d6c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2d2d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2d70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d2d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d2d74: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2d78: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2D2D78u;
    {
        const bool branch_taken_0x2d2d78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2d78) {
            ctx->pc = 0x2D2E7Cu;
            goto label_2d2e7c;
        }
    }
    ctx->pc = 0x2D2D80u;
    // 0x2d2d80: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2d2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2d84: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x2d2d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2d88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d90: 0x0  nop
    ctx->pc = 0x2d2d90u;
    // NOP
    // 0x2d2d94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2d98: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2d2d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2d9c: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x2D2D9Cu;
    {
        const bool branch_taken_0x2d2d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2d9c) {
            ctx->pc = 0x2D2E7Cu;
            goto label_2d2e7c;
        }
    }
    ctx->pc = 0x2D2DA4u;
    // 0x2d2da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d2da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2da8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2dac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d2dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d2db0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2db4: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D2DB4u;
    SET_GPR_U32(ctx, 31, 0x2D2DBCu);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D2DB4u, 0x2D2DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DBCu;
label_2d2dbc:
    // 0x2d2dbc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d2dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dc4: 0xc0b4c08  jal         func_2D3020
    ctx->pc = 0x2D2DC4u;
    SET_GPR_U32(ctx, 31, 0x2D2DCCu);
    ctx->pc = 0x2D3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3020u, 0x2D2DC4u, 0x2D2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DCCu;
label_2d2dcc:
    // 0x2d2dcc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d2dd0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2d2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d2dd4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d2dd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2dd8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2d2dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ddc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d2ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d2de0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d2de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d2de4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2de8: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D2DE8u;
    SET_GPR_U32(ctx, 31, 0x2D2DF0u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D2DE8u, 0x2D2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DF0u;
label_2d2df0:
    // 0x2d2df0: 0x24520018  addiu       $s2, $v0, 0x18
    ctx->pc = 0x2d2df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d2df4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2df8: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D2DF8u;
    SET_GPR_U32(ctx, 31, 0x2D2E00u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D2DF8u, 0x2D2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E00u;
label_2d2e00:
    // 0x2d2e00: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2E00u;
    {
        const bool branch_taken_0x2d2e00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2e00) {
            ctx->pc = 0x2D2E2Cu;
            goto label_2d2e2c;
        }
    }
    ctx->pc = 0x2D2E08u;
    // 0x2d2e08: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2e0c: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E14u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D2E0Cu, 0x2D2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E14u;
label_2d2e14:
    // 0x2d2e14: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d2e18: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2d2e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2d2e1c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D2E1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E24u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D2E1Cu, 0x2D2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E24u;
label_2d2e24:
    // 0x2d2e24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2E24u;
    {
        const bool branch_taken_0x2d2e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e24) {
            ctx->pc = 0x2D2E38u;
            goto label_2d2e38;
        }
    }
    ctx->pc = 0x2D2E2Cu;
label_2d2e2c:
    // 0x2d2e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e30: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2D2E30u;
    {
        const bool branch_taken_0x2d2e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e30) {
            ctx->pc = 0x2D2FFCu;
            goto label_2d2ffc;
        }
    }
    ctx->pc = 0x2D2E38u;
label_2d2e38:
    // 0x2d2e38: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2d2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2e3c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2d2e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2e40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2e44: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2d2e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2d2e48: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2d2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2e4c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2d2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2e50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2e50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2e54: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2d2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2d2e58: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2d2e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2e5c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d2e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2e60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2e64: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2d2e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2d2e68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d2e6c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D2E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E74u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D2E6Cu, 0x2D2E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E74u;
label_2d2e74:
    // 0x2d2e74: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2d2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2e78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d2e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2d2e7c:
    // 0x2d2e7c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2d2e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2e80: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2d2e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2e88: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2d2e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2d2e8c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2d2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2e90: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2d2e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2e94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2e98: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d2e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d2e9c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2d2e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ea0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2d2ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ea4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d2ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2ea8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2d2ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2d2eac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d2eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2eb0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2d2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2eb4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2d2eb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2eb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2EB8u;
    {
        const bool branch_taken_0x2d2eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2eb8) {
            ctx->pc = 0x2D2ED4u;
            goto label_2d2ed4;
        }
    }
    ctx->pc = 0x2D2EC0u;
    // 0x2d2ec0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d2ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2ec4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2d2ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ec8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2d2ec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2ecc: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x2D2ECCu;
    {
        const bool branch_taken_0x2d2ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2ecc) {
            ctx->pc = 0x2D2F94u;
            goto label_2d2f94;
        }
    }
    ctx->pc = 0x2D2ED4u;
label_2d2ed4:
    // 0x2d2ed4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d2ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d2ed8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2d2ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2edc: 0xc0b4c44  jal         func_2D3110
    ctx->pc = 0x2D2EDCu;
    SET_GPR_U32(ctx, 31, 0x2D2EE4u);
    ctx->pc = 0x2D3110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3110u, 0x2D2EDCu, 0x2D2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2EE4u;
label_2d2ee4:
    // 0x2d2ee4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2d2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d2ee8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2d2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d2eec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2ef0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d2ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ef4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d2ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ef8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d2ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d2efc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d2efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d2f00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d2f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d2f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f08: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2d2f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d2f0c: 0xc090f14  jal         func_243C50
    ctx->pc = 0x2D2F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F14u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2D2F0Cu, 0x2D2F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F14u;
label_2d2f14:
    // 0x2d2f14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2d2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2f18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f1c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F24u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D2F1Cu, 0x2D2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F24u;
label_2d2f24:
    // 0x2d2f24: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2d2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d2f28: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2d2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d2f2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2f30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2f34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2f38: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d2f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d2f3c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d2f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d2f40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d2f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d2f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f48: 0xc091008  jal         func_244020
    ctx->pc = 0x2D2F48u;
    SET_GPR_U32(ctx, 31, 0x2D2F50u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D2F48u, 0x2D2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F50u;
label_2d2f50:
    // 0x2d2f50: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2d2f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2d2f54: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x2d2f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2f58: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2d2f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2d2f5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d2f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d2f60: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d2f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d2f64: 0x27a600ec  addiu       $a2, $sp, 0xEC
    ctx->pc = 0x2d2f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2d2f68: 0xc0ad368  jal         func_2B4DA0
    ctx->pc = 0x2D2F68u;
    SET_GPR_U32(ctx, 31, 0x2D2F70u);
    ctx->pc = 0x2B4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4DA0u, 0x2D2F68u, 0x2D2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F70u;
label_2d2f70:
    // 0x2d2f70: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d2f74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f7c: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x2d2f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f84: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2D2F84u;
    SET_GPR_U32(ctx, 31, 0x2D2F8Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2D2F84u, 0x2D2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F8Cu;
label_2d2f8c:
    // 0x2d2f8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2F8Cu;
    {
        const bool branch_taken_0x2d2f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f8c) {
            ctx->pc = 0x2D2FF8u;
            goto label_2d2ff8;
        }
    }
    ctx->pc = 0x2D2F94u;
label_2d2f94:
    // 0x2d2f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f98: 0xc091008  jal         func_244020
    ctx->pc = 0x2D2F98u;
    SET_GPR_U32(ctx, 31, 0x2D2FA0u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2D2F98u, 0x2D2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FA0u;
label_2d2fa0:
    // 0x2d2fa0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2d2fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2d2fa4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2d2fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2fa8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2d2fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2d2fac: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d2facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d2fb0: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D2FB0u;
    SET_GPR_U32(ctx, 31, 0x2D2FB8u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D2FB0u, 0x2D2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FB8u;
label_2d2fb8:
    // 0x2d2fb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d2fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d2fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d2fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fc0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D2FC0u;
    SET_GPR_U32(ctx, 31, 0x2D2FC8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D2FC0u, 0x2D2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FC8u;
label_2d2fc8:
    // 0x2d2fc8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d2fcc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2d2fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d2fd0: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x2d2fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2d2fd4: 0xc0ad368  jal         func_2B4DA0
    ctx->pc = 0x2D2FD4u;
    SET_GPR_U32(ctx, 31, 0x2D2FDCu);
    ctx->pc = 0x2B4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4DA0u, 0x2D2FD4u, 0x2D2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FDCu;
label_2d2fdc:
    // 0x2d2fdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d2fe0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2fe8: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x2d2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ff0: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x2D2FF0u;
    SET_GPR_U32(ctx, 31, 0x2D2FF8u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2D2FF0u, 0x2D2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2FF8u;
label_2d2ff8:
    // 0x2d2ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ffc:
    // 0x2d2ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d2ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d300c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2d300cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d3010: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3018u;
    // 0x2d3018: 0x0  nop
    ctx->pc = 0x2d3018u;
    // NOP
    // 0x2d301c: 0x0  nop
    ctx->pc = 0x2d301cu;
    // NOP
    ctx->pc = 0x2d3020u;
}
