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

// Function: sub_002739F0
// Address: 0x2739f0 - 0x273d20
void sub_002739F0_0x2739f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002739F0_0x2739f0");
#endif

    switch (ctx->pc) {
        case 0x273a38u: goto label_273a38;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a5cu: goto label_273a5c;
        case 0x273a78u: goto label_273a78;
        case 0x273a88u: goto label_273a88;
        case 0x273aa0u: goto label_273aa0;
        case 0x273ab4u: goto label_273ab4;
        case 0x273accu: goto label_273acc;
        case 0x273af8u: goto label_273af8;
        case 0x273b14u: goto label_273b14;
        case 0x273b28u: goto label_273b28;
        case 0x273b58u: goto label_273b58;
        case 0x273bb4u: goto label_273bb4;
        case 0x273be0u: goto label_273be0;
        case 0x273bfcu: goto label_273bfc;
        case 0x273c10u: goto label_273c10;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c40u: goto label_273c40;
        case 0x273c70u: goto label_273c70;
        case 0x273cccu: goto label_273ccc;
        default: break;
    }

    ctx->pc = 0x2739f0u;

    // 0x2739f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2739f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2739f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2739f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2739f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2739f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2739fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2739fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x273a00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x273a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x273a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x273a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x273a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273a10: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x273a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x273a14: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x273a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x273a18: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x273a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
    // 0x273a1c: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x273a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x273a20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x273a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x273a24: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x273a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x273a28: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x273a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x273a2c: 0x24a5d030  addiu       $a1, $a1, -0x2FD0
    ctx->pc = 0x273a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955056));
    // 0x273a30: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x273A30u;
    SET_GPR_U32(ctx, 31, 0x273A38u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x273A30u, 0x273A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A38u;
label_273a38:
    // 0x273a38: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x273a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x273a3c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x273a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x273a40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x273a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273a44: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273A44u;
    SET_GPR_U32(ctx, 31, 0x273A4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273A44u, 0x273A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A4Cu;
label_273a4c:
    // 0x273a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a50: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x273a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x273a54: 0xc085530  jal         func_2154C0
    ctx->pc = 0x273A54u;
    SET_GPR_U32(ctx, 31, 0x273A5Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x273A54u, 0x273A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A5Cu;
label_273a5c:
    // 0x273a5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273a60: 0x14430068  bne         $v0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x273A60u;
    {
        const bool branch_taken_0x273a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273a60) {
            ctx->pc = 0x273C04u;
            goto label_273c04;
        }
    }
    ctx->pc = 0x273A68u;
    // 0x273a68: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x273a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x273a6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x273a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x273a70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273A70u;
    SET_GPR_U32(ctx, 31, 0x273A78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273A70u, 0x273A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A78u;
label_273a78:
    // 0x273a78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x273a78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a7c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x273a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273a80: 0xc097640  jal         func_25D900
    ctx->pc = 0x273A80u;
    SET_GPR_U32(ctx, 31, 0x273A88u);
    ctx->pc = 0x25D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D900u, 0x273A80u, 0x273A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A88u;
label_273a88:
    // 0x273a88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273a8c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x273a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273a90: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x273a94: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x273a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x273a98: 0xc097704  jal         func_25DC10
    ctx->pc = 0x273A98u;
    SET_GPR_U32(ctx, 31, 0x273AA0u);
    ctx->pc = 0x25DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DC10u, 0x273A98u, 0x273AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AA0u;
label_273aa0:
    // 0x273aa0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x273AA0u;
    {
        const bool branch_taken_0x273aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273aa0) {
            ctx->pc = 0x273BECu;
            goto label_273bec;
        }
    }
    ctx->pc = 0x273AA8u;
    // 0x273aa8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x273aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273aac: 0xc097634  jal         func_25D8D0
    ctx->pc = 0x273AACu;
    SET_GPR_U32(ctx, 31, 0x273AB4u);
    ctx->pc = 0x25D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D8D0u, 0x273AACu, 0x273AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AB4u;
label_273ab4:
    // 0x273ab4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x273AB4u;
    {
        const bool branch_taken_0x273ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273ab4) {
            ctx->pc = 0x273B04u;
            goto label_273b04;
        }
    }
    ctx->pc = 0x273ABCu;
    // 0x273abc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x273abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x273ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ac4: 0xc09cf48  jal         func_273D20
    ctx->pc = 0x273AC4u;
    SET_GPR_U32(ctx, 31, 0x273ACCu);
    ctx->pc = 0x273D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D20u, 0x273AC4u, 0x273ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273ACCu;
label_273acc:
    // 0x273acc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x273accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ad0: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x273ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273ad8: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x273AD8u;
    {
        const bool branch_taken_0x273ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273ad8) {
            ctx->pc = 0x273BECu;
            goto label_273bec;
        }
    }
    ctx->pc = 0x273AE0u;
    // 0x273ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ae4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273ae8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x273ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273aec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273af0: 0xc097584  jal         func_25D610
    ctx->pc = 0x273AF0u;
    SET_GPR_U32(ctx, 31, 0x273AF8u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x273AF0u, 0x273AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AF8u;
label_273af8:
    // 0x273af8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x273af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273afc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x273AFCu;
    {
        const bool branch_taken_0x273afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273afc) {
            ctx->pc = 0x273CF0u;
            goto label_273cf0;
        }
    }
    ctx->pc = 0x273B04u;
label_273b04:
    // 0x273b04: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x273b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x273b08: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x273b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273b0c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273B0Cu;
    SET_GPR_U32(ctx, 31, 0x273B14u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273B0Cu, 0x273B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B14u;
label_273b14:
    // 0x273b14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x273b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b18: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x273b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x273b1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x273b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b20: 0xc090f80  jal         func_243E00
    ctx->pc = 0x273B20u;
    SET_GPR_U32(ctx, 31, 0x273B28u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x273B20u, 0x273B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B28u;
label_273b28:
    // 0x273b28: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x273b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x273b2c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x273b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x273b30: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x273b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273b34: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x273b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b38: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x273b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b3c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x273b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273b40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x273b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x273b44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x273b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x273b48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x273b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x273b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b50: 0xc090f80  jal         func_243E00
    ctx->pc = 0x273B50u;
    SET_GPR_U32(ctx, 31, 0x273B58u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x273B50u, 0x273B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B58u;
label_273b58:
    // 0x273b58: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x273b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x273b5c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x273b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x273b60: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x273b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273b64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x273b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b68: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x273b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b6c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x273b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273b70: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x273b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x273b74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x273b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x273b78: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x273b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b7c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x273b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273b84: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x273b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x273b88: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x273b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b8c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x273b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273b90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273b94: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x273b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x273b98: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x273b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273b9c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x273b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ba0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273ba4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x273ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x273ba8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x273bac: 0xc104d24  jal         func_413490
    ctx->pc = 0x273BACu;
    SET_GPR_U32(ctx, 31, 0x273BB4u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x273BACu, 0x273BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BB4u;
label_273bb4:
    // 0x273bb4: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x273bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273bb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x273bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273bc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x273BC0u;
    {
        const bool branch_taken_0x273bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273bc0) {
            ctx->pc = 0x273BCCu;
            goto label_273bcc;
        }
    }
    ctx->pc = 0x273BC8u;
    // 0x273bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273bcc:
    // 0x273bcc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x273bccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x273bd0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x273bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273bd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273bd8: 0xc097584  jal         func_25D610
    ctx->pc = 0x273BD8u;
    SET_GPR_U32(ctx, 31, 0x273BE0u);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x273BD8u, 0x273BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BE0u;
label_273be0:
    // 0x273be0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x273be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273be4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x273BE4u;
    {
        const bool branch_taken_0x273be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273be4) {
            ctx->pc = 0x273CF0u;
            goto label_273cf0;
        }
    }
    ctx->pc = 0x273BECu;
label_273bec:
    // 0x273bec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x273bf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x273bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273bf4: 0xc097584  jal         func_25D610
    ctx->pc = 0x273BF4u;
    SET_GPR_U32(ctx, 31, 0x273BFCu);
    ctx->pc = 0x25D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D610u, 0x273BF4u, 0x273BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273BFCu;
label_273bfc:
    // 0x273bfc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x273BFCu;
    {
        const bool branch_taken_0x273bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273bfc) {
            ctx->pc = 0x273CECu;
            goto label_273cec;
        }
    }
    ctx->pc = 0x273C04u;
label_273c04:
    // 0x273c04: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x273c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x273c08: 0xc085530  jal         func_2154C0
    ctx->pc = 0x273C08u;
    SET_GPR_U32(ctx, 31, 0x273C10u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x273C08u, 0x273C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C10u;
label_273c10:
    // 0x273c10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x273c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x273c14: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x273C14u;
    {
        const bool branch_taken_0x273c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273c14) {
            ctx->pc = 0x273CECu;
            goto label_273cec;
        }
    }
    ctx->pc = 0x273C1Cu;
    // 0x273c1c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x273c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x273c20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x273c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273c24: 0xc085538  jal         func_2154E0
    ctx->pc = 0x273C24u;
    SET_GPR_U32(ctx, 31, 0x273C2Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x273C24u, 0x273C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C2Cu;
label_273c2c:
    // 0x273c2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x273c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x273c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x273c34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x273c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c38: 0xc090f80  jal         func_243E00
    ctx->pc = 0x273C38u;
    SET_GPR_U32(ctx, 31, 0x273C40u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x273C38u, 0x273C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C40u;
label_273c40:
    // 0x273c40: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x273c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x273c44: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x273c48: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x273c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273c4c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x273c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x273c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c54: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x273c54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273c58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x273c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x273c5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x273c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x273c60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x273c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c68: 0xc090f80  jal         func_243E00
    ctx->pc = 0x273C68u;
    SET_GPR_U32(ctx, 31, 0x273C70u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x273C68u, 0x273C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273C70u;
label_273c70:
    // 0x273c70: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x273c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x273c74: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273c78: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x273c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273c7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x273c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x273c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c84: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x273c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x273c88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x273c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x273c8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x273c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x273c90: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x273c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273c94: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x273c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273c98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273c9c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x273c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x273ca0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x273ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ca4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x273ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273ca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273cac: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x273cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x273cb0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x273cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273cb4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x273cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273cbc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x273cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x273cc0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x273cc4: 0xc104d24  jal         func_413490
    ctx->pc = 0x273CC4u;
    SET_GPR_U32(ctx, 31, 0x273CCCu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x273CC4u, 0x273CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CCCu;
label_273ccc:
    // 0x273ccc: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x273cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273cd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x273cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273cd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x273CD8u;
    {
        const bool branch_taken_0x273cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273cd8) {
            ctx->pc = 0x273CE4u;
            goto label_273ce4;
        }
    }
    ctx->pc = 0x273CE0u;
    // 0x273ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273ce4:
    // 0x273ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273CE4u;
    {
        const bool branch_taken_0x273ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ce4) {
            ctx->pc = 0x273CF0u;
            goto label_273cf0;
        }
    }
    ctx->pc = 0x273CECu;
label_273cec:
    // 0x273cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273cf0:
    // 0x273cf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x273cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273cf4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x273cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273cf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x273cf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273cfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x273cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273d00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273d0c: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x273d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x273d10: 0x3e00008  jr          $ra
    ctx->pc = 0x273D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273D18u;
    // 0x273d18: 0x0  nop
    ctx->pc = 0x273d18u;
    // NOP
    // 0x273d1c: 0x0  nop
    ctx->pc = 0x273d1cu;
    // NOP
    ctx->pc = 0x273d20u;
}
