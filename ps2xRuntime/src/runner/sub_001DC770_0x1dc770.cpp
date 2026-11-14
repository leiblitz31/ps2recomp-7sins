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

// Function: sub_001DC770
// Address: 0x1dc770 - 0x1dd0e0
void sub_001DC770_0x1dc770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC770_0x1dc770");
#endif

    switch (ctx->pc) {
        case 0x1dc7f8u: goto label_1dc7f8;
        case 0x1dc85cu: goto label_1dc85c;
        case 0x1dc86cu: goto label_1dc86c;
        case 0x1dc884u: goto label_1dc884;
        case 0x1dc898u: goto label_1dc898;
        case 0x1dc8d0u: goto label_1dc8d0;
        case 0x1dc8e8u: goto label_1dc8e8;
        case 0x1dc910u: goto label_1dc910;
        case 0x1dc968u: goto label_1dc968;
        case 0x1dca04u: goto label_1dca04;
        case 0x1dca1cu: goto label_1dca1c;
        case 0x1dca2cu: goto label_1dca2c;
        case 0x1dca44u: goto label_1dca44;
        case 0x1dca54u: goto label_1dca54;
        case 0x1dca6cu: goto label_1dca6c;
        case 0x1dca80u: goto label_1dca80;
        case 0x1dcab0u: goto label_1dcab0;
        case 0x1dcac8u: goto label_1dcac8;
        case 0x1dcb1cu: goto label_1dcb1c;
        case 0x1dcb2cu: goto label_1dcb2c;
        case 0x1dcb44u: goto label_1dcb44;
        case 0x1dcb58u: goto label_1dcb58;
        case 0x1dcb68u: goto label_1dcb68;
        case 0x1dcb80u: goto label_1dcb80;
        case 0x1dcb94u: goto label_1dcb94;
        case 0x1dcbf4u: goto label_1dcbf4;
        case 0x1dcbfcu: goto label_1dcbfc;
        case 0x1dcc74u: goto label_1dcc74;
        case 0x1dcc80u: goto label_1dcc80;
        case 0x1dccf8u: goto label_1dccf8;
        case 0x1dcd1cu: goto label_1dcd1c;
        case 0x1dcd5cu: goto label_1dcd5c;
        case 0x1dcd6cu: goto label_1dcd6c;
        case 0x1dcd7cu: goto label_1dcd7c;
        case 0x1dcd94u: goto label_1dcd94;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dce84u: goto label_1dce84;
        case 0x1dce94u: goto label_1dce94;
        case 0x1dcf00u: goto label_1dcf00;
        case 0x1dcf18u: goto label_1dcf18;
        case 0x1dcf2cu: goto label_1dcf2c;
        case 0x1dcf3cu: goto label_1dcf3c;
        case 0x1dcf54u: goto label_1dcf54;
        case 0x1dcf74u: goto label_1dcf74;
        case 0x1dcf84u: goto label_1dcf84;
        case 0x1dcf9cu: goto label_1dcf9c;
        case 0x1dcfb4u: goto label_1dcfb4;
        case 0x1dcfe0u: goto label_1dcfe0;
        case 0x1dd010u: goto label_1dd010;
        case 0x1dd030u: goto label_1dd030;
        case 0x1dd048u: goto label_1dd048;
        case 0x1dd080u: goto label_1dd080;
        case 0x1dd0acu: goto label_1dd0ac;
        default: break;
    }

    ctx->pc = 0x1dc770u;

    // 0x1dc770: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1dc770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1dc774: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1dc774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1dc778: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1dc778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1dc77c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dc77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1dc780: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dc780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1dc784: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dc784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1dc788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dc788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dc78c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dc78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dc790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dc790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dc794: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dc794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dc798: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x1dc79c: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x1dc79cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1dc7a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc7a4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1dc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1dc7a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC7A8u;
    {
        const bool branch_taken_0x1dc7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc7a8) {
            ctx->pc = 0x1DC7BCu;
            goto label_1dc7bc;
        }
    }
    ctx->pc = 0x1DC7B0u;
    // 0x1dc7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc7b4: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x1DC7B4u;
    {
        const bool branch_taken_0x1dc7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc7b4) {
            ctx->pc = 0x1DD0B0u;
            goto label_1dd0b0;
        }
    }
    ctx->pc = 0x1DC7BCu;
label_1dc7bc:
    // 0x1dc7bc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc7c0: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x1dc7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc7c4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dc7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dc7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc7cc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DC7CCu;
    {
        const bool branch_taken_0x1dc7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc7cc) {
            ctx->pc = 0x1DC7F8u;
            goto label_1dc7f8;
        }
    }
    ctx->pc = 0x1DC7D4u;
    // 0x1dc7d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc7d8: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1dc7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc7dc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dc7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc7e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dc7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dc7e4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc7e8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x1dc7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x1dc7ec: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1dc7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc7f0: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DC7F0u;
    SET_GPR_U32(ctx, 31, 0x1DC7F8u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DC7F0u, 0x1DC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7F8u;
label_1dc7f8:
    // 0x1dc7f8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc7fc: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1dc7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc800: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dc800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc804: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dc804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc808: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1DC808u;
    {
        const bool branch_taken_0x1dc808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc808) {
            ctx->pc = 0x1DC844u;
            goto label_1dc844;
        }
    }
    ctx->pc = 0x1DC810u;
    // 0x1dc810: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc814: 0xa04000a8  sb          $zero, 0xA8($v0)
    ctx->pc = 0x1dc814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc818: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc81c: 0xa04000a9  sb          $zero, 0xA9($v0)
    ctx->pc = 0x1dc81cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc820: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc824: 0xa04000aa  sb          $zero, 0xAA($v0)
    ctx->pc = 0x1dc824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 170), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc828: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc82c: 0xa04000ab  sb          $zero, 0xAB($v0)
    ctx->pc = 0x1dc82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 171), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc830: 0xc7818290  lwc1        $f1, -0x7D70($gp)
    ctx->pc = 0x1dc830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc834: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dc834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dc838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dc83c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc840: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x1dc840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_1dc844:
    // 0x1dc844: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1dc844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1dc848: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1dc848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc84c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dc850: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dc850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc854: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1DC854u;
    {
        const bool branch_taken_0x1dc854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc854) {
            ctx->pc = 0x1DC914u;
            goto label_1dc914;
        }
    }
    ctx->pc = 0x1DC85Cu;
label_1dc85c:
    // 0x1dc85c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc860: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dc860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dc864: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC864u;
    SET_GPR_U32(ctx, 31, 0x1DC86Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC864u, 0x1DC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC86Cu;
label_1dc86c:
    // 0x1dc86c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dc86cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc870: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc874: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dc874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dc878: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dc878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc87c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC87Cu;
    SET_GPR_U32(ctx, 31, 0x1DC884u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC87Cu, 0x1DC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC884u;
label_1dc884:
    // 0x1dc884: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dc888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc88c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1dc88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1dc890: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DC890u;
    SET_GPR_U32(ctx, 31, 0x1DC898u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DC890u, 0x1DC898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC898u;
label_1dc898:
    // 0x1dc898: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dc898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc89c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc8a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1dc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dc8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dc8a8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1dc8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1dc8ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc8b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc8b4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dc8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dc8bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dc8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dc8c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc8c4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dc8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dc8c8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC8C8u;
    SET_GPR_U32(ctx, 31, 0x1DC8D0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC8C8u, 0x1DC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC8D0u;
label_1dc8d0:
    // 0x1dc8d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dc8d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc8d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc8d8: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dc8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dc8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dc8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc8e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC8E0u;
    SET_GPR_U32(ctx, 31, 0x1DC8E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC8E0u, 0x1DC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC8E8u;
label_1dc8e8:
    // 0x1dc8e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc8ec: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1dc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1dc8f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc8f4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8f8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1dc8f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dc8fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dc8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc900: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1dc904: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc908: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1DC908u;
    SET_GPR_U32(ctx, 31, 0x1DC910u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1DC908u, 0x1DC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC910u;
label_1dc910:
    // 0x1dc910: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dc910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1dc914:
    // 0x1dc914: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc918: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x1dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1dc91c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1dc91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dc920: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1DC920u;
    {
        const bool branch_taken_0x1dc920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc920) {
            ctx->pc = 0x1DC85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc85c;
        }
    }
    ctx->pc = 0x1DC928u;
    // 0x1dc928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dc928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc92c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc930: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1dc930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc934: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dc938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc93c: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1DC93Cu;
    {
        const bool branch_taken_0x1dc93c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc93c) {
            ctx->pc = 0x1DC9DCu;
            goto label_1dc9dc;
        }
    }
    ctx->pc = 0x1DC944u;
    // 0x1dc944: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc948: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x1dc948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc94c: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1dc94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc950: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1dc950u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dc954: 0x0  nop
    ctx->pc = 0x1dc954u;
    // NOP
    // 0x1dc958: 0x0  nop
    ctx->pc = 0x1dc958u;
    // NOP
    // 0x1dc95c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1dc95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1dc960: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DC960u;
    SET_GPR_U32(ctx, 31, 0x1DC968u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DC960u, 0x1DC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC968u;
label_1dc968:
    // 0x1dc968: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1dc968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1dc96c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1dc96cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1dc970: 0x2010  mfhi        $a0
    ctx->pc = 0x1dc970u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1dc974: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1dc974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1dc978: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc97c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1dc97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc980: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dc980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dc984: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1dc984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1dc988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc98c: 0x0  nop
    ctx->pc = 0x1dc98cu;
    // NOP
    // 0x1dc990: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dc990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc994: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC994u;
    {
        const bool branch_taken_0x1dc994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc994) {
            ctx->pc = 0x1DC9ACu;
            goto label_1dc9ac;
        }
    }
    ctx->pc = 0x1DC99Cu;
    // 0x1dc99c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dc9a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dc9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dc9a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC9A4u;
    {
        const bool branch_taken_0x1dc9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9a4) {
            ctx->pc = 0x1DC9C0u;
            goto label_1dc9c0;
        }
    }
    ctx->pc = 0x1DC9ACu;
label_1dc9ac:
    // 0x1dc9ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1dc9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dc9b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1dc9b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1dc9b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dc9b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dc9b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dc9bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dc9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dc9c0:
    // 0x1dc9c0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1dc9c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dc9c4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC9C4u;
    {
        const bool branch_taken_0x1dc9c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9c4) {
            ctx->pc = 0x1DC9E4u;
            goto label_1dc9e4;
        }
    }
    ctx->pc = 0x1DC9CCu;
    // 0x1dc9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc9d0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1dc9d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc9d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC9D4u;
    {
        const bool branch_taken_0x1dc9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9d4) {
            ctx->pc = 0x1DC9E4u;
            goto label_1dc9e4;
        }
    }
    ctx->pc = 0x1DC9DCu;
label_1dc9dc:
    // 0x1dc9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc9e0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1dc9e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dc9e4:
    // 0x1dc9e4: 0x126000d9  beqz        $s3, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1DC9E4u;
    {
        const bool branch_taken_0x1dc9e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9e4) {
            ctx->pc = 0x1DCD4Cu;
            goto label_1dcd4c;
        }
    }
    ctx->pc = 0x1DC9ECu;
    // 0x1dc9ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc9f0: 0x8c51009c  lw          $s1, 0x9C($v0)
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1dc9f4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc9f8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dc9fc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC9FCu;
    SET_GPR_U32(ctx, 31, 0x1DCA04u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC9FCu, 0x1DCA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA04u;
label_1dca04:
    // 0x1dca04: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dca08: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dca0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca10: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dca10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dca14: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DCA14u;
    SET_GPR_U32(ctx, 31, 0x1DCA1Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DCA14u, 0x1DCA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA1Cu;
label_1dca1c:
    // 0x1dca1c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dca20: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dca24: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCA24u;
    SET_GPR_U32(ctx, 31, 0x1DCA2Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCA24u, 0x1DCA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA2Cu;
label_1dca2c:
    // 0x1dca2c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dca30: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dca34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca38: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x1dca38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1dca3c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1DCA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA44u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1DCA3Cu, 0x1DCA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA44u;
label_1dca44:
    // 0x1dca44: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dca48: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dca48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dca4c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCA4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA54u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCA4Cu, 0x1DCA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA54u;
label_1dca54:
    // 0x1dca54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dca54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dca5c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dca60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dca60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCA64u;
    SET_GPR_U32(ctx, 31, 0x1DCA6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCA64u, 0x1DCA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA6Cu;
label_1dca6c:
    // 0x1dca6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca74: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1dca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dca78: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1DCA78u;
    SET_GPR_U32(ctx, 31, 0x1DCA80u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1DCA78u, 0x1DCA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA80u;
label_1dca80:
    // 0x1dca80: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x1dca84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dca84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dca88: 0x0  nop
    ctx->pc = 0x1dca88u;
    // NOP
    // 0x1dca8c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dca90: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1dca94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dca94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dca98: 0x0  nop
    ctx->pc = 0x1dca98u;
    // NOP
    // 0x1dca9c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dca9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1dcaa0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcaa4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcaa8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCAA8u;
    SET_GPR_U32(ctx, 31, 0x1DCAB0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCAA8u, 0x1DCAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAB0u;
label_1dcab0:
    // 0x1dcab0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcab4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcab8: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcabc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcac0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCAC0u;
    SET_GPR_U32(ctx, 31, 0x1DCAC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCAC0u, 0x1DCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAC8u;
label_1dcac8:
    // 0x1dcac8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcacc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcad0: 0xc44300ac  lwc1        $f3, 0xAC($v0)
    ctx->pc = 0x1dcad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcad4: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x1dcad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcad8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1dcad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcae0: 0x0  nop
    ctx->pc = 0x1dcae0u;
    // NOP
    // 0x1dcae4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dcae4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dcae8: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x1dcae8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcaec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcaf0: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x1dcaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcaf4: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x1dcaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcaf8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1dcaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcb00: 0x0  nop
    ctx->pc = 0x1dcb00u;
    // NOP
    // 0x1dcb04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dcb04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dcb08: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1dcb08u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcb0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dcb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb14: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DCB14u;
    SET_GPR_U32(ctx, 31, 0x1DCB1Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DCB14u, 0x1DCB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB1Cu;
label_1dcb1c:
    // 0x1dcb1c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcb20: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcb24: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCB24u;
    SET_GPR_U32(ctx, 31, 0x1DCB2Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCB24u, 0x1DCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB2Cu;
label_1dcb2c:
    // 0x1dcb2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcb2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcb34: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcb38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb3c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB44u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCB3Cu, 0x1DCB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB44u;
label_1dcb44:
    // 0x1dcb44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcb48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcb50: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DCB50u;
    SET_GPR_U32(ctx, 31, 0x1DCB58u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DCB50u, 0x1DCB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB58u;
label_1dcb58:
    // 0x1dcb58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcb5c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcb60: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCB60u;
    SET_GPR_U32(ctx, 31, 0x1DCB68u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCB60u, 0x1DCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB68u;
label_1dcb68:
    // 0x1dcb68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcb68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb6c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcb70: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcb74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCB78u;
    SET_GPR_U32(ctx, 31, 0x1DCB80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCB78u, 0x1DCB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB80u;
label_1dcb80:
    // 0x1dcb80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcb84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb88: 0xc78c80ac  lwc1        $f12, -0x7F54($gp)
    ctx->pc = 0x1dcb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcb8c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DCB8Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB94u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DCB8Cu, 0x1DCB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB94u;
label_1dcb94:
    // 0x1dcb94: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcb98: 0xc441007c  lwc1        $f1, 0x7C($v0)
    ctx->pc = 0x1dcb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcb9c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1dcb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcba0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dcba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dcba4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1dcba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1dcba8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcbac: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x1dcbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcbb0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1dcbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcbb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dcbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dcbb8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dcbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1dcbbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dcbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcbc0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1dcbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcbc4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1dcbc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcbc8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCBC8u;
    {
        const bool branch_taken_0x1dcbc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcbc8) {
            ctx->pc = 0x1DCBE4u;
            goto label_1dcbe4;
        }
    }
    ctx->pc = 0x1DCBD0u;
    // 0x1dcbd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dcbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcbd4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dcbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcbd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1dcbd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcbdc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCBDCu;
    {
        const bool branch_taken_0x1dcbdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcbdc) {
            ctx->pc = 0x1DCBF4u;
            goto label_1dcbf4;
        }
    }
    ctx->pc = 0x1DCBE4u;
label_1dcbe4:
    // 0x1dcbe4: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1dcbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1dcbe8: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1dcbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1dcbec: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x1DCBECu;
    SET_GPR_U32(ctx, 31, 0x1DCBF4u);
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x1DCBECu, 0x1DCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBF4u;
label_1dcbf4:
    // 0x1dcbf4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DCBF4u;
    SET_GPR_U32(ctx, 31, 0x1DCBFCu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DCBF4u, 0x1DCBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBFCu;
label_1dcbfc:
    // 0x1dcbfc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1dcc00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1dcc00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1dcc04: 0x1010  mfhi        $v0
    ctx->pc = 0x1dcc04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dcc08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCC08u;
    {
        const bool branch_taken_0x1dcc08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dcc08) {
            ctx->pc = 0x1DCC24u;
            goto label_1dcc24;
        }
    }
    ctx->pc = 0x1DCC10u;
    // 0x1dcc10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcc10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc14: 0x0  nop
    ctx->pc = 0x1dcc14u;
    // NOP
    // 0x1dcc18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1dcc18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dcc1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCC1Cu;
    {
        const bool branch_taken_0x1dcc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc1c) {
            ctx->pc = 0x1DCC40u;
            goto label_1dcc40;
        }
    }
    ctx->pc = 0x1DCC24u;
label_1dcc24:
    // 0x1dcc24: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1dcc28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcc2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dcc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dcc30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dcc30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc34: 0x0  nop
    ctx->pc = 0x1dcc34u;
    // NOP
    // 0x1dcc38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1dcc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dcc3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dcc3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1dcc40:
    // 0x1dcc40: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1dcc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcc44: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dcc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dcc48: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1dcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1dcc4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc50: 0x0  nop
    ctx->pc = 0x1dcc50u;
    // NOP
    // 0x1dcc54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1dcc54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dcc58: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1dcc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcc5c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x1dcc5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dcc60: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcc64: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dcc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc6c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC74u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DCC6Cu, 0x1DCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC74u;
label_1dcc74:
    // 0x1dcc74: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1dcc74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dcc78: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DCC78u;
    SET_GPR_U32(ctx, 31, 0x1DCC80u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DCC78u, 0x1DCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC80u;
label_1dcc80:
    // 0x1dcc80: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1dcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1dcc84: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1dcc84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1dcc88: 0x1010  mfhi        $v0
    ctx->pc = 0x1dcc88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dcc8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCC8Cu;
    {
        const bool branch_taken_0x1dcc8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dcc8c) {
            ctx->pc = 0x1DCCA8u;
            goto label_1dcca8;
        }
    }
    ctx->pc = 0x1DCC94u;
    // 0x1dcc94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc98: 0x0  nop
    ctx->pc = 0x1dcc98u;
    // NOP
    // 0x1dcc9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1dcc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dcca0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCCA0u;
    {
        const bool branch_taken_0x1dcca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcca0) {
            ctx->pc = 0x1DCCC4u;
            goto label_1dccc4;
        }
    }
    ctx->pc = 0x1DCCA8u;
label_1dcca8:
    // 0x1dcca8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dcca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1dccac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dccacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dccb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dccb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dccb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dccb8: 0x0  nop
    ctx->pc = 0x1dccb8u;
    // NOP
    // 0x1dccbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1dccbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dccc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dccc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1dccc4:
    // 0x1dccc4: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1dccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dccc8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dccc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dcccc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1dccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1dccd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dccd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dccd4: 0x0  nop
    ctx->pc = 0x1dccd4u;
    // NOP
    // 0x1dccd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1dccd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dccdc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcce0: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x1dcce0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dcce4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcce8: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dccec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dccecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccf0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DCCF0u;
    SET_GPR_U32(ctx, 31, 0x1DCCF8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DCCF0u, 0x1DCCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCF8u;
label_1dccf8:
    // 0x1dccf8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1dccf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dccfc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd00: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1dcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x1dcd04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcd08: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x1dcd08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x1dcd0c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd10: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcd14: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DCD14u;
    SET_GPR_U32(ctx, 31, 0x1DCD1Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DCD14u, 0x1DCD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD1Cu;
label_1dcd1c:
    // 0x1dcd1c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd20: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x1dcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x1dcd24: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1dcd24u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1dcd28: 0x1810  mfhi        $v1
    ctx->pc = 0x1dcd28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1dcd2c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd30: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x1dcd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x1dcd34: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1dcd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd38: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd3c: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1dcd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1dcd40: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1dcd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcd44: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd48: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1dcd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_1dcd4c:
    // 0x1dcd4c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd50: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcd54: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DCD54u;
    SET_GPR_U32(ctx, 31, 0x1DCD5Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DCD54u, 0x1DCD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD5Cu;
label_1dcd5c:
    // 0x1dcd5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dcd5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dcd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd64: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x1DCD64u;
    {
        const bool branch_taken_0x1dcd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd64) {
            ctx->pc = 0x1DD014u;
            goto label_1dd014;
        }
    }
    ctx->pc = 0x1DCD6Cu;
label_1dcd6c:
    // 0x1dcd6c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd70: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcd74: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCD74u;
    SET_GPR_U32(ctx, 31, 0x1DCD7Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCD74u, 0x1DCD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD7Cu;
label_1dcd7c:
    // 0x1dcd7c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcd7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd80: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcd84: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcd88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd8c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCD8Cu;
    SET_GPR_U32(ctx, 31, 0x1DCD94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCD8Cu, 0x1DCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD94u;
label_1dcd94:
    // 0x1dcd94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcd98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd9c: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1DCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDA4u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1DCD9Cu, 0x1DCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDA4u;
label_1dcda4:
    // 0x1dcda4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dcda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dcda8: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1dcda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1dcdac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dcdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dcdb0: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x1dcdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcdb4: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dcdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcdb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcdb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcdbc: 0x0  nop
    ctx->pc = 0x1dcdbcu;
    // NOP
    // 0x1dcdc0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dcdc0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dcdc4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1dcdc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dcdc8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dcdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dcdcc: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dcdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcdd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dcdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dcdd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dcdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcdd8: 0x0  nop
    ctx->pc = 0x1dcdd8u;
    // NOP
    // 0x1dcddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcde0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1DCDE0u;
    {
        const bool branch_taken_0x1dcde0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcde0) {
            ctx->pc = 0x1DCE14u;
            goto label_1dce14;
        }
    }
    ctx->pc = 0x1DCDE8u;
    // 0x1dcde8: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1dcde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1dcdec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dcdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dcdf0: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x1dcdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcdf4: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dcdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcdf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcdf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcdfc: 0x0  nop
    ctx->pc = 0x1dcdfcu;
    // NOP
    // 0x1dce00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dce00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dce04: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1dce04u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dce08: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dce08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dce0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DCE0Cu;
    {
        const bool branch_taken_0x1dce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce0c) {
            ctx->pc = 0x1DCE38u;
            goto label_1dce38;
        }
    }
    ctx->pc = 0x1DCE14u;
label_1dce14:
    // 0x1dce14: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1dce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1dce18: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dce18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dce1c: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x1dce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dce20: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dce24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dce24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dce28: 0x0  nop
    ctx->pc = 0x1dce28u;
    // NOP
    // 0x1dce2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dce2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dce30: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1dce30u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dce34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dce34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1dce38:
    // 0x1dce38: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1dce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dce3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dce3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dce40: 0x0  nop
    ctx->pc = 0x1dce40u;
    // NOP
    // 0x1dce44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dce44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dce48: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCE48u;
    {
        const bool branch_taken_0x1dce48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dce48) {
            ctx->pc = 0x1DCE5Cu;
            goto label_1dce5c;
        }
    }
    ctx->pc = 0x1DCE50u;
    // 0x1dce50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dce50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dce54: 0x0  nop
    ctx->pc = 0x1dce54u;
    // NOP
    // 0x1dce58: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1dce5c:
    // 0x1dce5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dce60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dce60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dce64: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dce68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dce6c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1dce6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1dce70: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1dce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce74: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1dce74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1dce78: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x1dce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dce7c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1DCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE84u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1DCE7Cu, 0x1DCE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE84u;
label_1dce84:
    // 0x1dce84: 0xdf858030  ld          $a1, -0x7FD0($gp)
    ctx->pc = 0x1dce84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dce88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce8c: 0xc090074  jal         func_2401D0
    ctx->pc = 0x1DCE8Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE94u);
    ctx->pc = 0x2401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401D0u, 0x1DCE8Cu, 0x1DCE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE94u;
label_1dce94:
    // 0x1dce94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCE94u;
    {
        const bool branch_taken_0x1dce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce94) {
            ctx->pc = 0x1DCEB8u;
            goto label_1dceb8;
        }
    }
    ctx->pc = 0x1DCE9Cu;
    // 0x1dce9c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1dce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1dcea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dcea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcea4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1dcea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcea8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dcea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dceac: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1dceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1dceb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DCEB0u;
    {
        const bool branch_taken_0x1dceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dceb0) {
            ctx->pc = 0x1DCEE0u;
            goto label_1dcee0;
        }
    }
    ctx->pc = 0x1DCEB8u;
label_1dceb8:
    // 0x1dceb8: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1dceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcebc: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1dcebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcec0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1dcec0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dcec4: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x1dcec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcec8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1dcec8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dcecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dced0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dced0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dced4: 0x0  nop
    ctx->pc = 0x1dced4u;
    // NOP
    // 0x1dced8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dced8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1dcedc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1dcedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1dcee0:
    // 0x1dcee0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1dcee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcee4: 0xc780834c  lwc1        $f0, -0x7CB4($gp)
    ctx->pc = 0x1dcee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcee8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dcee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dceec: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1dceecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1dcef0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcef4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcef8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCEF8u;
    SET_GPR_U32(ctx, 31, 0x1DCF00u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCEF8u, 0x1DCF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF00u;
label_1dcf00:
    // 0x1dcf00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcf00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf04: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcf08: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcf0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCF10u;
    SET_GPR_U32(ctx, 31, 0x1DCF18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCF10u, 0x1DCF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF18u;
label_1dcf18:
    // 0x1dcf18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcf1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf20: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x1dcf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcf24: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DCF24u;
    SET_GPR_U32(ctx, 31, 0x1DCF2Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DCF24u, 0x1DCF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF2Cu;
label_1dcf2c:
    // 0x1dcf2c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcf30: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcf34: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCF34u;
    SET_GPR_U32(ctx, 31, 0x1DCF3Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCF34u, 0x1DCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF3Cu;
label_1dcf3c:
    // 0x1dcf3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcf3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf40: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcf44: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcf48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCF4Cu, 0x1DCF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF54u;
label_1dcf54:
    // 0x1dcf54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcf58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf5c: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1dcf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcf60: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x1dcf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dcf64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dcf64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dcf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf6c: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF74u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DCF6Cu, 0x1DCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF74u;
label_1dcf74:
    // 0x1dcf74: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcf78: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dcf7c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DCF7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF84u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DCF7Cu, 0x1DCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF84u;
label_1dcf84:
    // 0x1dcf84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dcf84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf88: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcf8c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dcf90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf94: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DCF94u;
    SET_GPR_U32(ctx, 31, 0x1DCF9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DCF94u, 0x1DCF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF9Cu;
label_1dcf9c:
    // 0x1dcf9c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1dcf9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dcfa0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcfa4: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dcfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dcfa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcfac: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DCFACu;
    SET_GPR_U32(ctx, 31, 0x1DCFB4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DCFACu, 0x1DCFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFB4u;
label_1dcfb4:
    // 0x1dcfb4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1dcfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1dcfb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dcfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcfbc: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dcfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcfc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dcfc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dcfc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dcfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcfc8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1dcfc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dcfcc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dcfd0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dcfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dcfd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcfd8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DCFD8u;
    SET_GPR_U32(ctx, 31, 0x1DCFE0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DCFD8u, 0x1DCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFE0u;
label_1dcfe0:
    // 0x1dcfe0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1dcfe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dcfe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcfe8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dcfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcfec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dcfecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dcff0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1dcff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcff4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1dcff4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dcff8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dcff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcffc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1dcffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd004: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dd004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd008: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DD008u;
    SET_GPR_U32(ctx, 31, 0x1DD010u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DD008u, 0x1DD010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD010u;
label_1dd010:
    // 0x1dd010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dd014:
    // 0x1dd014: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1dd014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1dd018: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x1DD018u;
    {
        const bool branch_taken_0x1dd018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd018) {
            ctx->pc = 0x1DCD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcd6c;
        }
    }
    ctx->pc = 0x1DD020u;
    // 0x1dd020: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dd024: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd028: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD028u;
    SET_GPR_U32(ctx, 31, 0x1DD030u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD028u, 0x1DD030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD030u;
label_1dd030:
    // 0x1dd030: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dd030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dd034: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd03c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dd040: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DD040u;
    SET_GPR_U32(ctx, 31, 0x1DD048u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DD040u, 0x1DD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD048u;
label_1dd048:
    // 0x1dd048: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dd04c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd050: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1dd050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dd054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dd058: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1dd058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1dd05c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dd060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd064: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1dd064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dd068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1dd06c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1dd06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dd070: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dd074: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd078: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD078u;
    SET_GPR_U32(ctx, 31, 0x1DD080u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD078u, 0x1DD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD080u;
label_1dd080:
    // 0x1dd080: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dd080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dd084: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1dd084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd088: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x1dd088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x1dd08c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dd08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd090: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dd090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd094: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1dd094u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dd098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd09c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dd0a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0a4: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1DD0A4u;
    SET_GPR_U32(ctx, 31, 0x1DD0ACu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1DD0A4u, 0x1DD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0ACu;
label_1dd0ac:
    // 0x1dd0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd0b0:
    // 0x1dd0b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1dd0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dd0b4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1dd0b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dd0b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dd0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dd0bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dd0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dd0c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dd0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dd0c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dd0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd0c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd0cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dd0d4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1dd0d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0E0u;
}
