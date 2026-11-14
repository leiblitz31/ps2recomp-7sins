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

// Function: sub_001FD0A0
// Address: 0x1fd0a0 - 0x1fd210
void sub_001FD0A0_0x1fd0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0A0_0x1fd0a0");
#endif

    switch (ctx->pc) {
        case 0x1fd0c8u: goto label_1fd0c8;
        case 0x1fd0e0u: goto label_1fd0e0;
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd12cu: goto label_1fd12c;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd160u: goto label_1fd160;
        case 0x1fd1c4u: goto label_1fd1c4;
        case 0x1fd1f0u: goto label_1fd1f0;
        default: break;
    }

    ctx->pc = 0x1fd0a0u;

    // 0x1fd0a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fd0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fd0a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd0a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd0ac: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1fd0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1fd0b0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1fd0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1fd0b4: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1fd0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1fd0b8: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1fd0b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fd0bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd0c0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FD0C0u;
    SET_GPR_U32(ctx, 31, 0x1FD0C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FD0C0u, 0x1FD0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0C8u;
label_1fd0c8:
    // 0x1fd0c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1fd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd0d0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fd0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fd0d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd0d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FD0D8u;
    SET_GPR_U32(ctx, 31, 0x1FD0E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FD0D8u, 0x1FD0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0E0u;
label_1fd0e0:
    // 0x1fd0e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fd0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fd0ec: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1FD0ECu;
    SET_GPR_U32(ctx, 31, 0x1FD0F4u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1FD0ECu, 0x1FD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0F4u;
label_1fd0f4:
    // 0x1fd0f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fd0f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fd0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd0fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1fd0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd100: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fd100u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fd104: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fd104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fd108: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fd10c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fd10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd110: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1fd110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd114: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fd114u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fd118: 0x0  nop
    ctx->pc = 0x1fd118u;
    // NOP
    // 0x1fd11c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fd11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fd120: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fd120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd124: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FD124u;
    SET_GPR_U32(ctx, 31, 0x1FD12Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FD124u, 0x1FD12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD12Cu;
label_1fd12c:
    // 0x1fd12c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd130: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd134: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1fd134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1fd138: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1FD138u;
    SET_GPR_U32(ctx, 31, 0x1FD140u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1FD138u, 0x1FD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD140u;
label_1fd140:
    // 0x1fd140: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd144: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FD144u;
    SET_GPR_U32(ctx, 31, 0x1FD14Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FD144u, 0x1FD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD14Cu;
label_1fd14c:
    // 0x1fd14c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd150: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1fd150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fd154: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1fd154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fd158: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1FD158u;
    SET_GPR_U32(ctx, 31, 0x1FD160u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1FD158u, 0x1FD160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD160u;
label_1fd160:
    // 0x1fd160: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1fd160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fd164: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fd164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fd168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fd168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd16c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1fd16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd170: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fd170u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fd174: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fd174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fd178: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fd178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1fd17c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1fd17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fd180: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fd180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fd184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fd184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd188: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1fd188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd18c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fd18cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fd190: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fd190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fd194: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fd194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1fd198: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1fd198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd19c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fd19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd1a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fd1a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fd1a4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fd1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1fd1a8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1fd1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd1ac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1fd1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd1b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fd1b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fd1b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fd1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1fd1b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1fd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd1bc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FD1BCu;
    SET_GPR_U32(ctx, 31, 0x1FD1C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FD1BCu, 0x1FD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1C4u;
label_1fd1c4:
    // 0x1fd1c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fd1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fd1c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd1d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1d4: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1fd1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1fd1d8: 0xc7ad0070  lwc1        $f13, 0x70($sp)
    ctx->pc = 0x1fd1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fd1dc: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fd1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1fd1e0: 0x2508f1b0  addiu       $t0, $t0, -0xE50
    ctx->pc = 0x1fd1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963632));
    // 0x1fd1e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fd1e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd1e8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FD1E8u;
    SET_GPR_U32(ctx, 31, 0x1FD1F0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FD1E8u, 0x1FD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1F0u;
label_1fd1f0:
    // 0x1fd1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd1f8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1fd1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fd1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD204u;
    // 0x1fd204: 0x0  nop
    ctx->pc = 0x1fd204u;
    // NOP
    // 0x1fd208: 0x0  nop
    ctx->pc = 0x1fd208u;
    // NOP
    // 0x1fd20c: 0x0  nop
    ctx->pc = 0x1fd20cu;
    // NOP
    ctx->pc = 0x1fd210u;
}
