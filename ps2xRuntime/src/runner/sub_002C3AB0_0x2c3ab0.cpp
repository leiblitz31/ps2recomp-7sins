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

// Function: sub_002C3AB0
// Address: 0x2c3ab0 - 0x2c3fc0
void sub_002C3AB0_0x2c3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3AB0_0x2c3ab0");
#endif

    switch (ctx->pc) {
        case 0x2c3af0u: goto label_2c3af0;
        case 0x2c3b08u: goto label_2c3b08;
        case 0x2c3b18u: goto label_2c3b18;
        case 0x2c3b30u: goto label_2c3b30;
        case 0x2c3b40u: goto label_2c3b40;
        case 0x2c3b4cu: goto label_2c3b4c;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3b6cu: goto label_2c3b6c;
        case 0x2c3b7cu: goto label_2c3b7c;
        case 0x2c3b8cu: goto label_2c3b8c;
        case 0x2c3b9cu: goto label_2c3b9c;
        case 0x2c3ba8u: goto label_2c3ba8;
        case 0x2c3bb8u: goto label_2c3bb8;
        case 0x2c3bd0u: goto label_2c3bd0;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3c10u: goto label_2c3c10;
        case 0x2c3c24u: goto label_2c3c24;
        case 0x2c3c68u: goto label_2c3c68;
        case 0x2c3c74u: goto label_2c3c74;
        case 0x2c3c8cu: goto label_2c3c8c;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d74u: goto label_2c3d74;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3ddcu: goto label_2c3ddc;
        case 0x2c3df8u: goto label_2c3df8;
        case 0x2c3e08u: goto label_2c3e08;
        case 0x2c3e1cu: goto label_2c3e1c;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e4cu: goto label_2c3e4c;
        case 0x2c3e58u: goto label_2c3e58;
        case 0x2c3e88u: goto label_2c3e88;
        case 0x2c3ea8u: goto label_2c3ea8;
        case 0x2c3ebcu: goto label_2c3ebc;
        case 0x2c3ed0u: goto label_2c3ed0;
        case 0x2c3ef0u: goto label_2c3ef0;
        case 0x2c3f08u: goto label_2c3f08;
        case 0x2c3f18u: goto label_2c3f18;
        case 0x2c3f30u: goto label_2c3f30;
        case 0x2c3f68u: goto label_2c3f68;
        case 0x2c3f84u: goto label_2c3f84;
        default: break;
    }

    ctx->pc = 0x2c3ab0u;

    // 0x2c3ab0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2c3ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2c3ab4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c3ab8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c3ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c3abc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c3ac0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c3ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c3ac4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c3ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c3ac8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c3ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3ad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3adc: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x2c3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x2c3ae0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2c3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c3ae4: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x2c3ae4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c3ae8: 0xc09a360  jal         func_268D80
    ctx->pc = 0x2C3AE8u;
    SET_GPR_U32(ctx, 31, 0x2C3AF0u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C3AE8u, 0x2C3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AF0u;
label_2c3af0:
    // 0x2c3af0: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2c3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x2c3af4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3af8: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x2c3af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2c3afc: 0x2786a4c8  addiu       $a2, $gp, -0x5B38
    ctx->pc = 0x2c3afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943944));
    // 0x2c3b00: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C3B00u;
    SET_GPR_U32(ctx, 31, 0x2C3B08u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C3B00u, 0x2C3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B08u;
label_2c3b08:
    // 0x2c3b08: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x2c3b0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b10: 0xc09a364  jal         func_268D90
    ctx->pc = 0x2C3B10u;
    SET_GPR_U32(ctx, 31, 0x2C3B18u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C3B10u, 0x2C3B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B18u;
label_2c3b18:
    // 0x2c3b18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c3b18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b1c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c3b20: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x2c3b20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c3b24: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2c3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2c3b28: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2C3B28u;
    SET_GPR_U32(ctx, 31, 0x2C3B30u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C3B28u, 0x2C3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B30u;
label_2c3b30:
    // 0x2c3b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c3b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3b38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3B38u;
    SET_GPR_U32(ctx, 31, 0x2C3B40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3B38u, 0x2C3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B40u;
label_2c3b40:
    // 0x2c3b40: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2c3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x2c3b44: 0xc090864  jal         func_242190
    ctx->pc = 0x2C3B44u;
    SET_GPR_U32(ctx, 31, 0x2C3B4Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C3B44u, 0x2C3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B4Cu;
label_2c3b4c:
    // 0x2c3b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b50: 0xc090590  jal         func_241640
    ctx->pc = 0x2C3B50u;
    SET_GPR_U32(ctx, 31, 0x2C3B58u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2C3B50u, 0x2C3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B58u;
label_2c3b58:
    // 0x2c3b58: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x2c3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x2c3b5c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x2c3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x2c3b60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c3b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3b64: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2C3B64u;
    SET_GPR_U32(ctx, 31, 0x2C3B6Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2C3B64u, 0x2C3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B6Cu;
label_2c3b6c:
    // 0x2c3b6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c3b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b70: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3b74: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2C3B74u;
    SET_GPR_U32(ctx, 31, 0x2C3B7Cu);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2C3B74u, 0x2C3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B7Cu;
label_2c3b7c:
    // 0x2c3b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c3b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c3b84: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3B84u;
    SET_GPR_U32(ctx, 31, 0x2C3B8Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3B84u, 0x2C3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B8Cu;
label_2c3b8c:
    // 0x2c3b8c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2c3b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x2c3b90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2c3b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c3b94: 0xc0516f8  jal         func_145BE0
    ctx->pc = 0x2C3B94u;
    SET_GPR_U32(ctx, 31, 0x2C3B9Cu);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x2C3B94u, 0x2C3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B9Cu;
label_2c3b9c:
    // 0x2c3b9c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x2c3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c3ba0: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2C3BA0u;
    SET_GPR_U32(ctx, 31, 0x2C3BA8u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2C3BA0u, 0x2C3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BA8u;
label_2c3ba8:
    // 0x2c3ba8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2c3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2c3bac: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2c3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c3bb0: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2C3BB0u;
    SET_GPR_U32(ctx, 31, 0x2C3BB8u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2C3BB0u, 0x2C3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BB8u;
label_2c3bb8:
    // 0x2c3bb8: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2c3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x2c3bbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c3bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c3bc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bc4: 0x24050505  addiu       $a1, $zero, 0x505
    ctx->pc = 0x2c3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x2c3bc8: 0xc042090  jal         func_108240
    ctx->pc = 0x2C3BC8u;
    SET_GPR_U32(ctx, 31, 0x2C3BD0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2C3BC8u, 0x2C3BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BD0u;
label_2c3bd0:
    // 0x2c3bd0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2c3bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2c3bd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c3bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3bd8: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x2c3bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3bdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3bdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3be0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3BE0u;
    {
        const bool branch_taken_0x2c3be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3be0) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3BE8u;
    // 0x2c3be8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3bec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c3becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3bf0: 0xc0ade68  jal         func_2B79A0
    ctx->pc = 0x2C3BF0u;
    SET_GPR_U32(ctx, 31, 0x2C3BF8u);
    ctx->pc = 0x2B79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79A0u, 0x2C3BF0u, 0x2C3BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BF8u;
label_2c3bf8:
    // 0x2c3bf8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2C3BF8u;
    {
        const bool branch_taken_0x2c3bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3bf8) {
            ctx->pc = 0x2C3E10u;
            goto label_2c3e10;
        }
    }
    ctx->pc = 0x2C3C00u;
label_2c3c00:
    // 0x2c3c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c04: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c3c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c3c08: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3C08u;
    SET_GPR_U32(ctx, 31, 0x2C3C10u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3C08u, 0x2C3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C10u;
label_2c3c10:
    // 0x2c3c10: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2c3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2c3c14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2c3c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c3c18: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2c3c1c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C3C24u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C3C1Cu, 0x2C3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C24u;
label_2c3c24:
    // 0x2c3c24: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2c3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2c3c28: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2c3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c3c2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3c30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c3c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3c34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3c38: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c3c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c3c3c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c3c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c3c40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c3c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c3c44: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2c3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3c48: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2c3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2c3c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3c50: 0x0  nop
    ctx->pc = 0x2c3c50u;
    // NOP
    // 0x2c3c54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c3c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c3c58: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2c3c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2c3c5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c60: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2C3C60u;
    SET_GPR_U32(ctx, 31, 0x2C3C68u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2C3C60u, 0x2C3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C68u;
label_2c3c68:
    // 0x2c3c68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c6c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2C3C6Cu;
    {
        const bool branch_taken_0x2c3c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c6c) {
            ctx->pc = 0x2C3DFCu;
            goto label_2c3dfc;
        }
    }
    ctx->pc = 0x2C3C74u;
label_2c3c74:
    // 0x2c3c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3c78: 0x1242005f  beq         $s2, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C3C78u;
    {
        const bool branch_taken_0x2c3c78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3c78) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3C80u;
    // 0x2c3c80: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2c3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2c3c84: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C3C84u;
    SET_GPR_U32(ctx, 31, 0x2C3C8Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C3C84u, 0x2C3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C8Cu;
label_2c3c8c:
    // 0x2c3c8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3c90: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2C3C90u;
    {
        const bool branch_taken_0x2c3c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3c90) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3C98u;
    // 0x2c3c98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c3c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3c9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c3c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c3ca0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3CA0u;
    SET_GPR_U32(ctx, 31, 0x2C3CA8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3CA0u, 0x2C3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CA8u;
label_2c3ca8:
    // 0x2c3ca8: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2c3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x2c3cac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c3cb0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x2c3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2c3cb4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C3CB4u;
    SET_GPR_U32(ctx, 31, 0x2C3CBCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C3CB4u, 0x2C3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CBCu;
label_2c3cbc:
    // 0x2c3cbc: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2c3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c3cc0: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2c3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c3cc4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c3cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3cc8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3ccc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3cd0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c3cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c3cd4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c3cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c3cd8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c3cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c3cdc: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2c3cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3ce0: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2c3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2c3ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3ce8: 0x0  nop
    ctx->pc = 0x2c3ce8u;
    // NOP
    // 0x2c3cec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c3cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c3cf0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2c3cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2c3cf4: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2c3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3cf8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2c3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3cfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c3cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3d00: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2c3d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c3d04: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2c3d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3d08: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2c3d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c3d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3d10: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2c3d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2c3d14: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2c3d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3d18: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2c3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c3d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3d20: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2c3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2c3d24: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c3d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2c3d28: 0xc104d24  jal         func_413490
    ctx->pc = 0x2C3D28u;
    SET_GPR_U32(ctx, 31, 0x2C3D30u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2C3D28u, 0x2C3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D30u;
label_2c3d30:
    // 0x2c3d30: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2c3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2c3d34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c3d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3d38: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x2c3d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d3c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3d3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3d40: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x2C3D40u;
    {
        const bool branch_taken_0x2c3d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3d40) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3D48u;
    // 0x2c3d48: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2c3d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3d4c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x2c3d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3d54: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2C3D54u;
    {
        const bool branch_taken_0x2c3d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3d54) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3D5Cu;
    // 0x2c3d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3d60: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2c3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2c3d64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2c3d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c3d68: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2c3d6c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2C3D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C3D74u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2C3D6Cu, 0x2C3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D74u;
label_2c3d74:
    // 0x2c3d74: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2c3d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2c3d78: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x2c3d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x2c3d7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d80: 0xc041d58  jal         func_107560
    ctx->pc = 0x2C3D80u;
    SET_GPR_U32(ctx, 31, 0x2C3D88u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2C3D80u, 0x2C3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D88u;
label_2c3d88:
    // 0x2c3d88: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2c3d8c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2c3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c3d90: 0xc041d58  jal         func_107560
    ctx->pc = 0x2C3D90u;
    SET_GPR_U32(ctx, 31, 0x2C3D98u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2C3D90u, 0x2C3D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D98u;
label_2c3d98:
    // 0x2c3d98: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2c3d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2c3d9c: 0x2484c330  addiu       $a0, $a0, -0x3CD0
    ctx->pc = 0x2c3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951728));
    // 0x2c3da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3da4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2C3DA4u;
    SET_GPR_U32(ctx, 31, 0x2C3DACu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2C3DA4u, 0x2C3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DACu;
label_2c3dac:
    // 0x2c3dac: 0x2782b6b0  addiu       $v0, $gp, -0x4950
    ctx->pc = 0x2c3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
    // 0x2c3db0: 0xaf82bcac  sw          $v0, -0x4354($gp)
    ctx->pc = 0x2c3db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950060), GPR_U32(ctx, 2));
    // 0x2c3db4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2c3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2c3db8: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2c3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3dbc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2c3dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2c3dc0: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2c3dc4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2c3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c3dc8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c3dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c3dcc: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x2c3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x2c3dd0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2c3dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c3dd4: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2C3DD4u;
    SET_GPR_U32(ctx, 31, 0x2C3DDCu);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2C3DD4u, 0x2C3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DDCu;
label_2c3ddc:
    // 0x2c3ddc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c3de0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3DE0u;
    {
        const bool branch_taken_0x2c3de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3de0) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3DE8u;
    // 0x2c3de8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3df0: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2C3DF0u;
    SET_GPR_U32(ctx, 31, 0x2C3DF8u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2C3DF0u, 0x2C3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DF8u;
label_2c3df8:
    // 0x2c3df8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c3df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c3dfc:
    // 0x2c3dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e00: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2C3E00u;
    SET_GPR_U32(ctx, 31, 0x2C3E08u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2C3E00u, 0x2C3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E08u;
label_2c3e08:
    // 0x2c3e08: 0x1602ff9a  bne         $s0, $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2C3E08u;
    {
        const bool branch_taken_0x2c3e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3e08) {
            ctx->pc = 0x2C3C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3c74;
        }
    }
    ctx->pc = 0x2C3E10u;
label_2c3e10:
    // 0x2c3e10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3e14: 0xc040e70  jal         func_1039C0
    ctx->pc = 0x2C3E14u;
    SET_GPR_U32(ctx, 31, 0x2C3E1Cu);
    ctx->pc = 0x1039C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039C0u, 0x2C3E14u, 0x2C3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E1Cu;
label_2c3e1c:
    // 0x2c3e1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3E1Cu;
    {
        const bool branch_taken_0x2c3e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e1c) {
            ctx->pc = 0x2C3E3Cu;
            goto label_2c3e3c;
        }
    }
    ctx->pc = 0x2C3E24u;
    // 0x2c3e24: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3e28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c3e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3e2c: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2C3E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E34u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2C3E2Cu, 0x2C3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E34u;
label_2c3e34:
    // 0x2c3e34: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2C3E34u;
    {
        const bool branch_taken_0x2c3e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e34) {
            ctx->pc = 0x2C3F84u;
            goto label_2c3f84;
        }
    }
    ctx->pc = 0x2C3E3Cu;
label_2c3e3c:
    // 0x2c3e3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c3e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e40: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3e44: 0xc042290  jal         func_108A40
    ctx->pc = 0x2C3E44u;
    SET_GPR_U32(ctx, 31, 0x2C3E4Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2C3E44u, 0x2C3E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E4Cu;
label_2c3e4c:
    // 0x2c3e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C3E50u;
    {
        const bool branch_taken_0x2c3e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e50) {
            ctx->pc = 0x2C3E7Cu;
            goto label_2c3e7c;
        }
    }
    ctx->pc = 0x2C3E58u;
label_2c3e58:
    // 0x2c3e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3e5c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c3e60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3e64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E64u;
    {
        const bool branch_taken_0x2c3e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3e64) {
            ctx->pc = 0x2C3E78u;
            goto label_2c3e78;
        }
    }
    ctx->pc = 0x2C3E6Cu;
    // 0x2c3e6c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3e70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3E70u;
    {
        const bool branch_taken_0x2c3e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e70) {
            ctx->pc = 0x2C3E90u;
            goto label_2c3e90;
        }
    }
    ctx->pc = 0x2C3E78u;
label_2c3e78:
    // 0x2c3e78: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c3e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c3e7c:
    // 0x2c3e7c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3e80: 0xc042288  jal         func_108A20
    ctx->pc = 0x2C3E80u;
    SET_GPR_U32(ctx, 31, 0x2C3E88u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2C3E80u, 0x2C3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E88u;
label_2c3e88:
    // 0x2c3e88: 0x1602fff3  bne         $s0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C3E88u;
    {
        const bool branch_taken_0x2c3e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3e88) {
            ctx->pc = 0x2C3E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3e58;
        }
    }
    ctx->pc = 0x2C3E90u;
label_2c3e90:
    // 0x2c3e90: 0x14110006  bne         $zero, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3E90u;
    {
        const bool branch_taken_0x2c3e90 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 17));
        if (branch_taken_0x2c3e90) {
            ctx->pc = 0x2C3EACu;
            goto label_2c3eac;
        }
    }
    ctx->pc = 0x2C3E98u;
    // 0x2c3e98: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ea0: 0xc09748c  jal         func_25D230
    ctx->pc = 0x2C3EA0u;
    SET_GPR_U32(ctx, 31, 0x2C3EA8u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2C3EA0u, 0x2C3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EA8u;
label_2c3ea8:
    // 0x2c3ea8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3eac:
    // 0x2c3eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3eb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c3eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c3eb4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3EB4u;
    SET_GPR_U32(ctx, 31, 0x2C3EBCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3EB4u, 0x2C3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EBCu;
label_2c3ebc:
    // 0x2c3ebc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c3ebcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ec4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c3ec8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C3EC8u;
    SET_GPR_U32(ctx, 31, 0x2C3ED0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C3EC8u, 0x2C3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3ED0u;
label_2c3ed0:
    // 0x2c3ed0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c3ed0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ed4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c3ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ed8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2c3edc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c3edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ee0: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2c3ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c3ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ee8: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x2C3EE8u;
    SET_GPR_U32(ctx, 31, 0x2C3EF0u);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x2C3EE8u, 0x2C3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EF0u;
label_2c3ef0:
    // 0x2c3ef0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3EF0u;
    {
        const bool branch_taken_0x2c3ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ef0) {
            ctx->pc = 0x2C3F10u;
            goto label_2c3f10;
        }
    }
    ctx->pc = 0x2C3EF8u;
    // 0x2c3ef8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3efc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c3efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3f00: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2C3F00u;
    SET_GPR_U32(ctx, 31, 0x2C3F08u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2C3F00u, 0x2C3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F08u;
label_2c3f08:
    // 0x2c3f08: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3F08u;
    {
        const bool branch_taken_0x2c3f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f08) {
            ctx->pc = 0x2C3F84u;
            goto label_2c3f84;
        }
    }
    ctx->pc = 0x2C3F10u;
label_2c3f10:
    // 0x2c3f10: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2C3F10u;
    SET_GPR_U32(ctx, 31, 0x2C3F18u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2C3F10u, 0x2C3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F18u;
label_2c3f18:
    // 0x2c3f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c3f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c3f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c3f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2c3f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f28: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2C3F28u;
    SET_GPR_U32(ctx, 31, 0x2C3F30u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2C3F28u, 0x2C3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F30u;
label_2c3f30:
    // 0x2c3f30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c3f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3f34: 0x0  nop
    ctx->pc = 0x2c3f34u;
    // NOP
    // 0x2c3f38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c3f38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3F40u;
    {
        const bool branch_taken_0x2c3f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3f40) {
            ctx->pc = 0x2C3F4Cu;
            goto label_2c3f4c;
        }
    }
    ctx->pc = 0x2C3F48u;
    // 0x2c3f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f4c:
    // 0x2c3f4c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2c3f4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f54: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2c3f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2c3f58: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c3f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c3f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f60: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C3F60u;
    SET_GPR_U32(ctx, 31, 0x2C3F68u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C3F60u, 0x2C3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F68u;
label_2c3f68:
    // 0x2c3f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f6c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2c3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2c3f70: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x2c3f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3f74: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2c3f78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c3f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c3f7c: 0xc0420a0  jal         func_108280
    ctx->pc = 0x2C3F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F84u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x2C3F7Cu, 0x2C3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F84u;
label_2c3f84:
    // 0x2c3f84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c3f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c3f88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c3f88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c3f8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c3f8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c3f90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c3f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3f94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c3f94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3f98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c3f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3f9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3fac: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x2c3facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c3fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3FB8u;
    // 0x2c3fb8: 0x0  nop
    ctx->pc = 0x2c3fb8u;
    // NOP
    // 0x2c3fbc: 0x0  nop
    ctx->pc = 0x2c3fbcu;
    // NOP
    ctx->pc = 0x2c3fc0u;
}
