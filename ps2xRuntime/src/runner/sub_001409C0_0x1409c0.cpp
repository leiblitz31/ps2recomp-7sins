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

// Function: sub_001409C0
// Address: 0x1409c0 - 0x140d70
void sub_001409C0_0x1409c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001409C0_0x1409c0");
#endif

    switch (ctx->pc) {
        case 0x140a00u: goto label_140a00;
        case 0x140a98u: goto label_140a98;
        case 0x140ab0u: goto label_140ab0;
        case 0x140ac0u: goto label_140ac0;
        case 0x140accu: goto label_140acc;
        case 0x140ae0u: goto label_140ae0;
        case 0x140b14u: goto label_140b14;
        case 0x140b28u: goto label_140b28;
        case 0x140b60u: goto label_140b60;
        case 0x140b74u: goto label_140b74;
        case 0x140b80u: goto label_140b80;
        case 0x140b94u: goto label_140b94;
        case 0x140ba4u: goto label_140ba4;
        case 0x140be4u: goto label_140be4;
        case 0x140c24u: goto label_140c24;
        case 0x140c34u: goto label_140c34;
        case 0x140c80u: goto label_140c80;
        case 0x140c90u: goto label_140c90;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cd8u: goto label_140cd8;
        case 0x140ce8u: goto label_140ce8;
        case 0x140d24u: goto label_140d24;
        case 0x140d34u: goto label_140d34;
        default: break;
    }

    ctx->pc = 0x1409c0u;

    // 0x1409c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1409c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1409c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1409c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1409c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1409cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1409ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1409d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1409d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1409d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1409d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1409d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1409d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1409dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1409dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1409e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1409e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1409e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1409e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1409e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1409e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1409ec: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1409ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x1409f0: 0xa3a50120  sb          $a1, 0x120($sp)
    ctx->pc = 0x1409f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 5));
    // 0x1409f4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1409f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1409f8: 0xc050530  jal         func_1414C0
    ctx->pc = 0x1409F8u;
    SET_GPR_U32(ctx, 31, 0x140A00u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1409F8u, 0x140A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A00u;
label_140a00:
    // 0x140a00: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x140a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x140a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a08: 0x0  nop
    ctx->pc = 0x140a08u;
    // NOP
    // 0x140a0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x140a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x140a10: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x140a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x140a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a18: 0x0  nop
    ctx->pc = 0x140a18u;
    // NOP
    // 0x140a1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x140a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x140a20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x140a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a28: 0x0  nop
    ctx->pc = 0x140a28u;
    // NOP
    // 0x140a2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x140a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x140a30: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x140a34: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x140a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a38: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x140a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x140a3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x140a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x140a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a44: 0x0  nop
    ctx->pc = 0x140a44u;
    // NOP
    // 0x140a48: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x140a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x140a4c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x140a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x140a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a54: 0x0  nop
    ctx->pc = 0x140a54u;
    // NOP
    // 0x140a58: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x140a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x140a5c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x140a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x140a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a64: 0x0  nop
    ctx->pc = 0x140a64u;
    // NOP
    // 0x140a68: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x140a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x140a6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140a70: 0x0  nop
    ctx->pc = 0x140a70u;
    // NOP
    // 0x140a74: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x140a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x140a78: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x140a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x140a7c: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x140A7Cu;
    {
        const bool branch_taken_0x140a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a7c) {
            ctx->pc = 0x140D24u;
            goto label_140d24;
        }
    }
    ctx->pc = 0x140A84u;
    // 0x140a84: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x140a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x140a88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x140a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140a8c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x140a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x140a90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x140A90u;
    SET_GPR_U32(ctx, 31, 0x140A98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x140A90u, 0x140A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A98u;
label_140a98:
    // 0x140a98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x140a98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a9c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x140a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x140aa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x140aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140aa4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x140aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x140aa8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x140AA8u;
    SET_GPR_U32(ctx, 31, 0x140AB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x140AA8u, 0x140AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AB0u;
label_140ab0:
    // 0x140ab0: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x140ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x140ab4: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x140ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x140ab8: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x140AB8u;
    SET_GPR_U32(ctx, 31, 0x140AC0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x140AB8u, 0x140AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AC0u;
label_140ac0:
    // 0x140ac0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x140ac0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ac4: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x140AC4u;
    SET_GPR_U32(ctx, 31, 0x140ACCu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x140AC4u, 0x140ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140ACCu;
label_140acc:
    // 0x140acc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x140accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ad0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x140ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ad4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x140ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x140ad8: 0xc121e84  jal         func_487A10
    ctx->pc = 0x140AD8u;
    SET_GPR_U32(ctx, 31, 0x140AE0u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x140AD8u, 0x140AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AE0u;
label_140ae0:
    // 0x140ae0: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x140ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x140ae4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x140ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140ae8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x140ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140aec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x140aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140af0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x140af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x140af4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x140af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x140af8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x140af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x140afc: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x140afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x140b00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b04: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x140b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140b08: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x140b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x140b0c: 0xc050368  jal         func_140DA0
    ctx->pc = 0x140B0Cu;
    SET_GPR_U32(ctx, 31, 0x140B14u);
    ctx->pc = 0x140DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140DA0u, 0x140B0Cu, 0x140B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B14u;
label_140b14:
    // 0x140b14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x140b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x140b18: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x140b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x140b1c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140B1Cu;
    {
        const bool branch_taken_0x140b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b1c) {
            ctx->pc = 0x140B44u;
            goto label_140b44;
        }
    }
    ctx->pc = 0x140B24u;
    // 0x140b24: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_140b28:
    // 0x140b28: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x140b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x140b2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x140b30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140b34: 0x0  nop
    ctx->pc = 0x140b34u;
    // NOP
    // 0x140b38: 0x0  nop
    ctx->pc = 0x140b38u;
    // NOP
    // 0x140b3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140B3Cu;
    {
        const bool branch_taken_0x140b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140b3c) {
            ctx->pc = 0x140B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140b28;
        }
    }
    ctx->pc = 0x140B44u;
label_140b44:
    // 0x140b44: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x140b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140b48: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x140b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x140b4c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x140b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140b50: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x140b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x140b54: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x140b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x140b58: 0xc090864  jal         func_242190
    ctx->pc = 0x140B58u;
    SET_GPR_U32(ctx, 31, 0x140B60u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x140B58u, 0x140B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B60u;
label_140b60:
    // 0x140b60: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x140b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b68: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x140b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140b6c: 0xc090870  jal         func_2421C0
    ctx->pc = 0x140B6Cu;
    SET_GPR_U32(ctx, 31, 0x140B74u);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x140B6Cu, 0x140B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B74u;
label_140b74:
    // 0x140b74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x140b74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b78: 0xc090864  jal         func_242190
    ctx->pc = 0x140B78u;
    SET_GPR_U32(ctx, 31, 0x140B80u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x140B78u, 0x140B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B80u;
label_140b80:
    // 0x140b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x140b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b84: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x140b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x140b88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b8c: 0xc09088c  jal         func_242230
    ctx->pc = 0x140B8Cu;
    SET_GPR_U32(ctx, 31, 0x140B94u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x140B8Cu, 0x140B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140B94u;
label_140b94:
    // 0x140b94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x140b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x140b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140b9c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x140B9Cu;
    SET_GPR_U32(ctx, 31, 0x140BA4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x140B9Cu, 0x140BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140BA4u;
label_140ba4:
    // 0x140ba4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x140ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ba8: 0x1260005b  beqz        $s3, . + 4 + (0x5B << 2)
    ctx->pc = 0x140BA8u;
    {
        const bool branch_taken_0x140ba8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ba8) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x140BB0u;
    // 0x140bb0: 0x12800059  beqz        $s4, . + 4 + (0x59 << 2)
    ctx->pc = 0x140BB0u;
    {
        const bool branch_taken_0x140bb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x140bb0) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x140BB8u;
    // 0x140bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140bbc: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140BBCu;
    {
        const bool branch_taken_0x140bbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x140bbc) {
            ctx->pc = 0x140BD0u;
            goto label_140bd0;
        }
    }
    ctx->pc = 0x140BC4u;
    // 0x140bc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x140bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140bc8: 0x16420053  bne         $s2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x140BC8u;
    {
        const bool branch_taken_0x140bc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x140bc8) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x140BD0u;
label_140bd0:
    // 0x140bd0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x140bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x140bd4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x140bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x140bd8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140BD8u;
    {
        const bool branch_taken_0x140bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140bd8) {
            ctx->pc = 0x140C00u;
            goto label_140c00;
        }
    }
    ctx->pc = 0x140BE0u;
    // 0x140be0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x140be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_140be4:
    // 0x140be4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x140be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x140be8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x140bec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140bf0: 0x0  nop
    ctx->pc = 0x140bf0u;
    // NOP
    // 0x140bf4: 0x0  nop
    ctx->pc = 0x140bf4u;
    // NOP
    // 0x140bf8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140BF8u;
    {
        const bool branch_taken_0x140bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140bf8) {
            ctx->pc = 0x140BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140be4;
        }
    }
    ctx->pc = 0x140C00u;
label_140c00:
    // 0x140c00: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x140c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140c04: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x140c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x140c08: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x140c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140c0c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x140c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x140c10: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x140c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x140c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x140c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c18: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x140c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x140c1c: 0xc09381c  jal         func_24E070
    ctx->pc = 0x140C1Cu;
    SET_GPR_U32(ctx, 31, 0x140C24u);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x140C1Cu, 0x140C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C24u;
label_140c24:
    // 0x140c24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x140c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c28: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x140c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x140c2c: 0xc09381c  jal         func_24E070
    ctx->pc = 0x140C2Cu;
    SET_GPR_U32(ctx, 31, 0x140C34u);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x140C2Cu, 0x140C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C34u;
label_140c34:
    // 0x140c34: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x140c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140c38: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x140c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140c3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x140c3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x140c40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x140c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x140c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140c48: 0x0  nop
    ctx->pc = 0x140c48u;
    // NOP
    // 0x140c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x140c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x140c50: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x140C50u;
    {
        const bool branch_taken_0x140c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x140c50) {
            ctx->pc = 0x140D18u;
            goto label_140d18;
        }
    }
    ctx->pc = 0x140C58u;
    // 0x140c58: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x140c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x140c5c: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x140c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140c60: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x140c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x140c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140c68: 0x0  nop
    ctx->pc = 0x140c68u;
    // NOP
    // 0x140c6c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x140c6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x140c70: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x140c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x140c74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x140c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x140c78: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x140C78u;
    SET_GPR_U32(ctx, 31, 0x140C80u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x140C78u, 0x140C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C80u;
label_140c80:
    // 0x140c80: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x140c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x140c84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x140c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c88: 0xc096880  jal         func_25A200
    ctx->pc = 0x140C88u;
    SET_GPR_U32(ctx, 31, 0x140C90u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x140C88u, 0x140C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C90u;
label_140c90:
    // 0x140c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x140c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c94: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x140C94u;
    {
        const bool branch_taken_0x140c94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x140c94) {
            ctx->pc = 0x140D10u;
            goto label_140d10;
        }
    }
    ctx->pc = 0x140C9Cu;
    // 0x140c9c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x140c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x140ca0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140ca4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x140ca8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x140CA8u;
    SET_GPR_U32(ctx, 31, 0x140CB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x140CA8u, 0x140CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CB0u;
label_140cb0:
    // 0x140cb0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x140cb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x140cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cb8: 0xc091008  jal         func_244020
    ctx->pc = 0x140CB8u;
    SET_GPR_U32(ctx, 31, 0x140CC0u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x140CB8u, 0x140CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CC0u;
label_140cc0:
    // 0x140cc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x140cc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x140cc4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x140cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x140cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ccc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x140cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x140cd0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x140CD0u;
    SET_GPR_U32(ctx, 31, 0x140CD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x140CD0u, 0x140CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CD8u;
label_140cd8:
    // 0x140cd8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x140cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140cdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x140cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ce0: 0xc091008  jal         func_244020
    ctx->pc = 0x140CE0u;
    SET_GPR_U32(ctx, 31, 0x140CE8u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x140CE0u, 0x140CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CE8u;
label_140ce8:
    // 0x140ce8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x140ce8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x140cec: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x140cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x140cf0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x140cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140cf4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x140cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140cf8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x140cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x140cfc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x140cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x140d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140d04: 0x0  nop
    ctx->pc = 0x140d04u;
    // NOP
    // 0x140d08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x140d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x140d0c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x140d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_140d10:
    // 0x140d10: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x140d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140d14: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x140d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_140d18:
    // 0x140d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d1c: 0xc103da2  jal         func_40F688
    ctx->pc = 0x140D1Cu;
    SET_GPR_U32(ctx, 31, 0x140D24u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x140D1Cu, 0x140D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D24u;
label_140d24:
    // 0x140d24: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x140d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x140d28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x140d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140d2c: 0xc050194  jal         func_140650
    ctx->pc = 0x140D2Cu;
    SET_GPR_U32(ctx, 31, 0x140D34u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x140D2Cu, 0x140D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D34u;
label_140d34:
    // 0x140d34: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x140d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140d38: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x140d38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140d3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x140d3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140d40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x140d40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140d44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140d44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140d48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140d48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140d4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140d50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140d5c: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x140d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x140d60: 0x3e00008  jr          $ra
    ctx->pc = 0x140D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140D68u;
    // 0x140d68: 0x0  nop
    ctx->pc = 0x140d68u;
    // NOP
    // 0x140d6c: 0x0  nop
    ctx->pc = 0x140d6cu;
    // NOP
    ctx->pc = 0x140d70u;
}
