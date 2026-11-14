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

// Function: sub_002C99A0
// Address: 0x2c99a0 - 0x2c9c90
void sub_002C99A0_0x2c99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C99A0_0x2c99a0");
#endif

    switch (ctx->pc) {
        case 0x2c99dcu: goto label_2c99dc;
        case 0x2c99e8u: goto label_2c99e8;
        case 0x2c99fcu: goto label_2c99fc;
        case 0x2c9a10u: goto label_2c9a10;
        case 0x2c9a20u: goto label_2c9a20;
        case 0x2c9a30u: goto label_2c9a30;
        case 0x2c9a48u: goto label_2c9a48;
        case 0x2c9a60u: goto label_2c9a60;
        case 0x2c9a7cu: goto label_2c9a7c;
        case 0x2c9a8cu: goto label_2c9a8c;
        case 0x2c9ab4u: goto label_2c9ab4;
        case 0x2c9ac4u: goto label_2c9ac4;
        case 0x2c9b04u: goto label_2c9b04;
        case 0x2c9b24u: goto label_2c9b24;
        case 0x2c9b38u: goto label_2c9b38;
        case 0x2c9b4cu: goto label_2c9b4c;
        case 0x2c9b58u: goto label_2c9b58;
        case 0x2c9b70u: goto label_2c9b70;
        case 0x2c9ba0u: goto label_2c9ba0;
        case 0x2c9bc4u: goto label_2c9bc4;
        case 0x2c9bd8u: goto label_2c9bd8;
        case 0x2c9bf4u: goto label_2c9bf4;
        case 0x2c9c1cu: goto label_2c9c1c;
        case 0x2c9c4cu: goto label_2c9c4c;
        default: break;
    }

    ctx->pc = 0x2c99a0u;

    // 0x2c99a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2c99a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2c99a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c99a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c99ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c99acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c99b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c99b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c99b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c99b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c99b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c99b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c99bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c99bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c99c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c99c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c99c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c99c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c99c8: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2c99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2c99cc: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x2c99ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x2c99d0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2c99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c99d4: 0xc096fec  jal         func_25BFB0
    ctx->pc = 0x2C99D4u;
    SET_GPR_U32(ctx, 31, 0x2C99DCu);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x2C99D4u, 0x2C99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99DCu;
label_2c99dc:
    // 0x2c99dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c99dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99e0: 0xc0970e8  jal         func_25C3A0
    ctx->pc = 0x2C99E0u;
    SET_GPR_U32(ctx, 31, 0x2C99E8u);
    ctx->pc = 0x25C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C3A0u, 0x2C99E0u, 0x2C99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99E8u;
label_2c99e8:
    // 0x2c99e8: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2C99E8u;
    {
        const bool branch_taken_0x2c99e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c99e8) {
            ctx->pc = 0x2C9C58u;
            goto label_2c9c58;
        }
    }
    ctx->pc = 0x2C99F0u;
    // 0x2c99f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2c99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c99f4: 0xc0516f8  jal         func_145BE0
    ctx->pc = 0x2C99F4u;
    SET_GPR_U32(ctx, 31, 0x2C99FCu);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x2C99F4u, 0x2C99FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C99FCu;
label_2c99fc:
    // 0x2c99fc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c9a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9a04: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c9a08: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9A08u;
    SET_GPR_U32(ctx, 31, 0x2C9A10u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9A08u, 0x2C9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A10u;
label_2c9a10:
    // 0x2c9a10: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c9a10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a18: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2C9A18u;
    SET_GPR_U32(ctx, 31, 0x2C9A20u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2C9A18u, 0x2C9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A20u;
label_2c9a20:
    // 0x2c9a20: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2c9a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2c9a24: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2c9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c9a28: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2C9A28u;
    SET_GPR_U32(ctx, 31, 0x2C9A30u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2C9A28u, 0x2C9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A30u;
label_2c9a30:
    // 0x2c9a30: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c9a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a34: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2c9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c9a38: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c9a3c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c9a40: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9A40u;
    SET_GPR_U32(ctx, 31, 0x2C9A48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9A40u, 0x2C9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A48u;
label_2c9a48:
    // 0x2c9a48: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c9a48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a4c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c9a50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c9a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9a54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c9a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c9a58: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9A58u;
    SET_GPR_U32(ctx, 31, 0x2C9A60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9A58u, 0x2C9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A60u;
label_2c9a60:
    // 0x2c9a60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c9a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a68: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2c9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2c9a6c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c9a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c9a70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c9a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a74: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C9A74u;
    SET_GPR_U32(ctx, 31, 0x2C9A7Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C9A74u, 0x2C9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A7Cu;
label_2c9a7c:
    // 0x2c9a7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c9a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c9a80: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2c9a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c9a84: 0xc041d58  jal         func_107560
    ctx->pc = 0x2C9A84u;
    SET_GPR_U32(ctx, 31, 0x2C9A8Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2C9A84u, 0x2C9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9A8Cu;
label_2c9a8c:
    // 0x2c9a8c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2c9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9a90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c9a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9a98: 0x0  nop
    ctx->pc = 0x2c9a98u;
    // NOP
    // 0x2c9a9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c9a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9aa0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2c9aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2c9aa4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c9aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c9aa8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c9aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9aac: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C9AACu;
    SET_GPR_U32(ctx, 31, 0x2C9AB4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C9AACu, 0x2C9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AB4u;
label_2c9ab4:
    // 0x2c9ab4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x2c9ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2c9ab8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2c9ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2c9abc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2C9ABCu;
    SET_GPR_U32(ctx, 31, 0x2C9AC4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2C9ABCu, 0x2C9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AC4u;
label_2c9ac4:
    // 0x2c9ac4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2c9ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9ac8: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2c9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2c9acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9ad0: 0x0  nop
    ctx->pc = 0x2c9ad0u;
    // NOP
    // 0x2c9ad4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c9ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9ad8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2c9ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2c9adc: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2c9adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ae0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2c9ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2c9ae4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2c9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2c9ae8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9aec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c9aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c9af0: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c9af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c9af4: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x2c9af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x2c9af8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2c9af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c9afc: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2C9AFCu;
    SET_GPR_U32(ctx, 31, 0x2C9B04u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2C9AFCu, 0x2C9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B04u;
label_2c9b04:
    // 0x2c9b04: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c9b08: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2C9B08u;
    {
        const bool branch_taken_0x2c9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b08) {
            ctx->pc = 0x2C9C58u;
            goto label_2c9c58;
        }
    }
    ctx->pc = 0x2C9B10u;
    // 0x2c9b10: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2c9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c9b14: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c9b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c9b18: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c9b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9b1c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9B1Cu;
    SET_GPR_U32(ctx, 31, 0x2C9B24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9B1Cu, 0x2C9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B24u;
label_2c9b24:
    // 0x2c9b24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c9b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b30: 0xc09ad7c  jal         func_26B5F0
    ctx->pc = 0x2C9B30u;
    SET_GPR_U32(ctx, 31, 0x2C9B38u);
    ctx->pc = 0x26B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B5F0u, 0x2C9B30u, 0x2C9B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B38u;
label_2c9b38:
    // 0x2c9b38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b44: 0xc04809c  jal         func_120270
    ctx->pc = 0x2C9B44u;
    SET_GPR_U32(ctx, 31, 0x2C9B4Cu);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x2C9B44u, 0x2C9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B4Cu;
label_2c9b4c:
    // 0x2c9b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C9B50u;
    {
        const bool branch_taken_0x2c9b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b50) {
            ctx->pc = 0x2C9BB8u;
            goto label_2c9bb8;
        }
    }
    ctx->pc = 0x2C9B58u;
label_2c9b58:
    // 0x2c9b58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9b5c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c9b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c9b60: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c9b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c9b64: 0x24a5e298  addiu       $a1, $a1, -0x1D68
    ctx->pc = 0x2c9b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959768));
    // 0x2c9b68: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2C9B68u;
    SET_GPR_U32(ctx, 31, 0x2C9B70u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2C9B68u, 0x2C9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B70u;
label_2c9b70:
    // 0x2c9b70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9B70u;
    {
        const bool branch_taken_0x2c9b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b70) {
            ctx->pc = 0x2C9B84u;
            goto label_2c9b84;
        }
    }
    ctx->pc = 0x2C9B78u;
    // 0x2c9b78: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9b7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C9B7Cu;
    {
        const bool branch_taken_0x2c9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b7c) {
            ctx->pc = 0x2C9BB4u;
            goto label_2c9bb4;
        }
    }
    ctx->pc = 0x2C9B84u;
label_2c9b84:
    // 0x2c9b84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9b88: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c9b8c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c9b90: 0x24a5e2a8  addiu       $a1, $a1, -0x1D58
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959784));
    // 0x2c9b94: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c9b98: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2C9B98u;
    SET_GPR_U32(ctx, 31, 0x2C9BA0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2C9B98u, 0x2C9BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BA0u;
label_2c9ba0:
    // 0x2c9ba0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9BA0u;
    {
        const bool branch_taken_0x2c9ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ba0) {
            ctx->pc = 0x2C9BB4u;
            goto label_2c9bb4;
        }
    }
    ctx->pc = 0x2C9BA8u;
    // 0x2c9ba8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2c9ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9bac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9BACu;
    {
        const bool branch_taken_0x2c9bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bac) {
            ctx->pc = 0x2C9BCCu;
            goto label_2c9bcc;
        }
    }
    ctx->pc = 0x2C9BB4u;
label_2c9bb4:
    // 0x2c9bb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c9bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c9bb8:
    // 0x2c9bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bbc: 0xc04808c  jal         func_120230
    ctx->pc = 0x2C9BBCu;
    SET_GPR_U32(ctx, 31, 0x2C9BC4u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x2C9BBCu, 0x2C9BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BC4u;
label_2c9bc4:
    // 0x2c9bc4: 0x1602ffe4  bne         $s0, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2C9BC4u;
    {
        const bool branch_taken_0x2c9bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9bc4) {
            ctx->pc = 0x2C9B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9b58;
        }
    }
    ctx->pc = 0x2C9BCCu;
label_2c9bcc:
    // 0x2c9bcc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c9bd0: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2C9BD0u;
    SET_GPR_U32(ctx, 31, 0x2C9BD8u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C9BD0u, 0x2C9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BD8u;
label_2c9bd8:
    // 0x2c9bd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c9bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bdc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2c9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c9be0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c9be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9be4: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x2c9be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c9be8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9bec: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x2C9BECu;
    SET_GPR_U32(ctx, 31, 0x2C9BF4u);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x2C9BECu, 0x2C9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BF4u;
label_2c9bf4:
    // 0x2c9bf4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C9BF4u;
    {
        const bool branch_taken_0x2c9bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bf4) {
            ctx->pc = 0x2C9C58u;
            goto label_2c9c58;
        }
    }
    ctx->pc = 0x2C9BFCu;
    // 0x2c9bfc: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c9c00: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2c9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c9c04: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2c9c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c9c08: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c9c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9c0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c9c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c10: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x2c9c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c9c14: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2C9C14u;
    SET_GPR_U32(ctx, 31, 0x2C9C1Cu);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2C9C14u, 0x2C9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C1Cu;
label_2c9c1c:
    // 0x2c9c1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c9c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9c20: 0x0  nop
    ctx->pc = 0x2c9c20u;
    // NOP
    // 0x2c9c24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9c28: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C9C28u;
    {
        const bool branch_taken_0x2c9c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c9c28) {
            ctx->pc = 0x2C9C58u;
            goto label_2c9c58;
        }
    }
    ctx->pc = 0x2C9C30u;
    // 0x2c9c30: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2c9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c9c34: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c9c38: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c9c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c9c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c44: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2C9C44u;
    SET_GPR_U32(ctx, 31, 0x2C9C4Cu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2C9C44u, 0x2C9C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C4Cu;
label_2c9c4c:
    // 0x2c9c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C9C50u;
    {
        const bool branch_taken_0x2c9c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c50) {
            ctx->pc = 0x2C9C5Cu;
            goto label_2c9c5c;
        }
    }
    ctx->pc = 0x2C9C58u;
label_2c9c58:
    // 0x2c9c58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c5c:
    // 0x2c9c5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c9c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c9c60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c9c60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c9c64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c9c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9c68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c9c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9c6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9c70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9c70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9c74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9c80: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2c9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c9c84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9C8Cu;
    // 0x2c9c8c: 0x0  nop
    ctx->pc = 0x2c9c8cu;
    // NOP
    ctx->pc = 0x2c9c90u;
}
