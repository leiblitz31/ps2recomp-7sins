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

// Function: sub_00133A90
// Address: 0x133a90 - 0x133c50
void sub_00133A90_0x133a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133A90_0x133a90");
#endif

    switch (ctx->pc) {
        case 0x133ae8u: goto label_133ae8;
        case 0x133af8u: goto label_133af8;
        case 0x133b10u: goto label_133b10;
        case 0x133be0u: goto label_133be0;
        case 0x133becu: goto label_133bec;
        case 0x133bf8u: goto label_133bf8;
        case 0x133c08u: goto label_133c08;
        case 0x133c14u: goto label_133c14;
        case 0x133c20u: goto label_133c20;
        case 0x133c38u: goto label_133c38;
        default: break;
    }

    ctx->pc = 0x133a90u;

    // 0x133a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x133a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133a9c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x133a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x133aa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133aa4: 0x0  nop
    ctx->pc = 0x133aa4u;
    // NOP
    // 0x133aa8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x133aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x133aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133ab0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ab4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x133ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x133ab8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133abc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x133abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x133ac0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ac4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x133ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x133ac8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x133ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133acc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ad0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ad4: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x133ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x133ad8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x133adc: 0x24470034  addiu       $a3, $v0, 0x34
    ctx->pc = 0x133adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x133ae0: 0xc04d10c  jal         func_134430
    ctx->pc = 0x133AE0u;
    SET_GPR_U32(ctx, 31, 0x133AE8u);
    ctx->pc = 0x134430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134430u, 0x133AE0u, 0x133AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AE8u;
label_133ae8:
    // 0x133ae8: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x133ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x133aec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133af0: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x133AF0u;
    SET_GPR_U32(ctx, 31, 0x133AF8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x133AF0u, 0x133AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AF8u;
label_133af8:
    // 0x133af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133afc: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x133AFCu;
    {
        const bool branch_taken_0x133afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x133afc) {
            ctx->pc = 0x133C38u;
            goto label_133c38;
        }
    }
    ctx->pc = 0x133B04u;
    // 0x133b04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x133b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133b08: 0xc050530  jal         func_1414C0
    ctx->pc = 0x133B08u;
    SET_GPR_U32(ctx, 31, 0x133B10u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x133B08u, 0x133B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B10u;
label_133b10:
    // 0x133b10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b14: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b18: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x133b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133b1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b20: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b24: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x133b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x133b28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133b2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x133b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x133b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133b34: 0x0  nop
    ctx->pc = 0x133b34u;
    // NOP
    // 0x133b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x133b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x133b3c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x133b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x133b40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b44: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b48: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x133b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b4c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x133b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x133b50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b54: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x133b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b5c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x133b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x133b60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b64: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b68: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x133b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133b6c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x133b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x133b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133b74: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x133b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x133b78: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x133b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b7c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x133b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x133b80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b84: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b88: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x133b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x133b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x133b90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133b94: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b98: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x133b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b9c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x133b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x133ba0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ba4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133ba8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x133ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bac: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x133bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x133bb0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133bb4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133bb8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x133bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bbc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x133bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x133bc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133bc4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x133bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133bc8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x133bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133bcc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x133bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x133bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x133bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133bd8: 0xc050194  jal         func_140650
    ctx->pc = 0x133BD8u;
    SET_GPR_U32(ctx, 31, 0x133BE0u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x133BD8u, 0x133BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BE0u;
label_133be0:
    // 0x133be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133be4: 0xc050360  jal         func_140D80
    ctx->pc = 0x133BE4u;
    SET_GPR_U32(ctx, 31, 0x133BECu);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x133BE4u, 0x133BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BECu;
label_133bec:
    // 0x133bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bf0: 0xc097444  jal         func_25D110
    ctx->pc = 0x133BF0u;
    SET_GPR_U32(ctx, 31, 0x133BF8u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x133BF0u, 0x133BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BF8u;
label_133bf8:
    // 0x133bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133c00: 0xc089ac4  jal         func_226B10
    ctx->pc = 0x133C00u;
    SET_GPR_U32(ctx, 31, 0x133C08u);
    ctx->pc = 0x226B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B10u, 0x133C00u, 0x133C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C08u;
label_133c08:
    // 0x133c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c0c: 0xc050360  jal         func_140D80
    ctx->pc = 0x133C0Cu;
    SET_GPR_U32(ctx, 31, 0x133C14u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x133C0Cu, 0x133C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C14u;
label_133c14:
    // 0x133c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c18: 0xc097444  jal         func_25D110
    ctx->pc = 0x133C18u;
    SET_GPR_U32(ctx, 31, 0x133C20u);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x133C18u, 0x133C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C20u;
label_133c20:
    // 0x133c20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133c24: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x133c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c2c: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x133c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x133c30: 0xc089ae4  jal         func_226B90
    ctx->pc = 0x133C30u;
    SET_GPR_U32(ctx, 31, 0x133C38u);
    ctx->pc = 0x226B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226B90u, 0x133C30u, 0x133C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C38u;
label_133c38:
    // 0x133c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133c40: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x133c44: 0x3e00008  jr          $ra
    ctx->pc = 0x133C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133C4Cu;
    // 0x133c4c: 0x0  nop
    ctx->pc = 0x133c4cu;
    // NOP
    ctx->pc = 0x133c50u;
}
