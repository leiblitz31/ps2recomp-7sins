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

// Function: sub_002D6910
// Address: 0x2d6910 - 0x2d6b40
void sub_002D6910_0x2d6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6910_0x2d6910");
#endif

    switch (ctx->pc) {
        case 0x2d69bcu: goto label_2d69bc;
        case 0x2d69d0u: goto label_2d69d0;
        case 0x2d69ecu: goto label_2d69ec;
        case 0x2d6a00u: goto label_2d6a00;
        case 0x2d6a6cu: goto label_2d6a6c;
        case 0x2d6a7cu: goto label_2d6a7c;
        case 0x2d6a8cu: goto label_2d6a8c;
        case 0x2d6a9cu: goto label_2d6a9c;
        case 0x2d6aacu: goto label_2d6aac;
        case 0x2d6b1cu: goto label_2d6b1c;
        default: break;
    }

    ctx->pc = 0x2d6910u;

    // 0x2d6910: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2d6914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d6914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d6918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d691c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6924: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2d6924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2d6928: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2d6928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x2d692c: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x2d692cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
    // 0x2d6930: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2d6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d6934: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2d6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d6938: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d693c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6940: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6944: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d6944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6948: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d694c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d6950: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2d6950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d6954: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2d6954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d6958: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d695c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6960: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d6960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6964: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d6964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6968: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d6968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d696c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d6970: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2d6970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6974: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2d6974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6978: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2d6978u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d697c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2D697Cu;
    {
        const bool branch_taken_0x2d697c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d697c) {
            ctx->pc = 0x2D69A4u;
            goto label_2d69a4;
        }
    }
    ctx->pc = 0x2D6984u;
    // 0x2d6984: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2d6984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6988: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d6988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d698c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2d698cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6990: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6990u;
    {
        const bool branch_taken_0x2d6990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6990) {
            ctx->pc = 0x2D69A4u;
            goto label_2d69a4;
        }
    }
    ctx->pc = 0x2D6998u;
    // 0x2d6998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d6998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d699c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2D699Cu;
    {
        const bool branch_taken_0x2d699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d699c) {
            ctx->pc = 0x2D6B24u;
            goto label_2d6b24;
        }
    }
    ctx->pc = 0x2D69A4u;
label_2d69a4:
    // 0x2d69a4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2d69a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d69a8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2d69a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2d69ac: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2d69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d69b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2d69b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2d69b4: 0xc090864  jal         func_242190
    ctx->pc = 0x2D69B4u;
    SET_GPR_U32(ctx, 31, 0x2D69BCu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2D69B4u, 0x2D69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69BCu;
label_2d69bc:
    // 0x2d69bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d69bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69c0: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2d69c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2d69c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d69c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69c8: 0xc09088c  jal         func_242230
    ctx->pc = 0x2D69C8u;
    SET_GPR_U32(ctx, 31, 0x2D69D0u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x2D69C8u, 0x2D69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69D0u;
label_2d69d0:
    // 0x2d69d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d69d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69d4: 0x10100013  beq         $zero, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D69D4u;
    {
        const bool branch_taken_0x2d69d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d69d4) {
            ctx->pc = 0x2D6A24u;
            goto label_2d6a24;
        }
    }
    ctx->pc = 0x2D69DCu;
    // 0x2d69dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d69dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69e0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2d69e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d69e4: 0xc09381c  jal         func_24E070
    ctx->pc = 0x2D69E4u;
    SET_GPR_U32(ctx, 31, 0x2D69ECu);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x2D69E4u, 0x2D69ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69ECu;
label_2d69ec:
    // 0x2d69ec: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2d69ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d69f0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2d69f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d69f4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d69f4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d69f8: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x2D69F8u;
    SET_GPR_U32(ctx, 31, 0x2D6A00u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x2D69F8u, 0x2D6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A00u;
label_2d6a00:
    // 0x2d6a00: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d6a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6a08: 0x0  nop
    ctx->pc = 0x2d6a08u;
    // NOP
    // 0x2d6a0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d6a0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6a10: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6A10u;
    {
        const bool branch_taken_0x2d6a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6a10) {
            ctx->pc = 0x2D6A24u;
            goto label_2d6a24;
        }
    }
    ctx->pc = 0x2D6A18u;
    // 0x2d6a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a1c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2D6A1Cu;
    {
        const bool branch_taken_0x2d6a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6a1c) {
            ctx->pc = 0x2D6B24u;
            goto label_2d6b24;
        }
    }
    ctx->pc = 0x2D6A24u;
label_2d6a24:
    // 0x2d6a24: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2d6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6a28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d6a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6a30: 0x0  nop
    ctx->pc = 0x2d6a30u;
    // NOP
    // 0x2d6a34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d6a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6a38: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2d6a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2d6a3c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2d6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6a40: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d6a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6a48: 0x0  nop
    ctx->pc = 0x2d6a48u;
    // NOP
    // 0x2d6a4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d6a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6a50: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2d6a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2d6a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a58: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2d6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2d6a5c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2d6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2d6a60: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2d6a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d6a64: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D6A64u;
    SET_GPR_U32(ctx, 31, 0x2D6A6Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D6A64u, 0x2D6A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A6Cu;
label_2d6a6c:
    // 0x2d6a6c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d6a70: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2d6a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d6a74: 0xc041d58  jal         func_107560
    ctx->pc = 0x2D6A74u;
    SET_GPR_U32(ctx, 31, 0x2D6A7Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2D6A74u, 0x2D6A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A7Cu;
label_2d6a7c:
    // 0x2d6a7c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2d6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d6a80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d6a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6a84: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D6A84u;
    SET_GPR_U32(ctx, 31, 0x2D6A8Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D6A84u, 0x2D6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A8Cu;
label_2d6a8c:
    // 0x2d6a8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d6a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a94: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2D6A94u;
    SET_GPR_U32(ctx, 31, 0x2D6A9Cu);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2D6A94u, 0x2D6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A9Cu;
label_2d6a9c:
    // 0x2d6a9c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2d6a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2d6aa0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2d6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d6aa4: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2D6AA4u;
    SET_GPR_U32(ctx, 31, 0x2D6AACu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2D6AA4u, 0x2D6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AACu;
label_2d6aac:
    // 0x2d6aac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ab0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2d6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2d6ab4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2d6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2d6ab8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d6abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6ac0: 0x0  nop
    ctx->pc = 0x2d6ac0u;
    // NOP
    // 0x2d6ac4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d6ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2d6ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6acc: 0xa3a20098  sb          $v0, 0x98($sp)
    ctx->pc = 0x2d6accu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6ad0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x2d6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6ad4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2d6ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ad8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6adc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d6adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d6ae0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2d6ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6ae4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2d6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ae8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6aec: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2d6aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d6af0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x2d6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6af4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2d6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6af8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d6af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6afc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2d6afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2d6b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b04: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2d6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d6b08: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2d6b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2d6b0c: 0x24c6ffc0  addiu       $a2, $a2, -0x40
    ctx->pc = 0x2d6b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x2d6b10: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2d6b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d6b14: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2D6B14u;
    SET_GPR_U32(ctx, 31, 0x2D6B1Cu);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2D6B14u, 0x2D6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B1Cu;
label_2d6b1c:
    // 0x2d6b1c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2d6b20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d6b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6b24:
    // 0x2d6b24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d6b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6b28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b34: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2d6b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d6b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B40u;
}
