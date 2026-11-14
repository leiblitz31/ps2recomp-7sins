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

// Function: sub_003AF108
// Address: 0x3af108 - 0x3af890
void sub_003AF108_0x3af108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF108_0x3af108");
#endif

    switch (ctx->pc) {
        case 0x3af138u: goto label_3af138;
        case 0x3af144u: goto label_3af144;
        case 0x3af154u: goto label_3af154;
        case 0x3af1a8u: goto label_3af1a8;
        case 0x3af1c0u: goto label_3af1c0;
        case 0x3af2c8u: goto label_3af2c8;
        case 0x3af2d8u: goto label_3af2d8;
        case 0x3af3dcu: goto label_3af3dc;
        case 0x3af3fcu: goto label_3af3fc;
        case 0x3af428u: goto label_3af428;
        case 0x3af43cu: goto label_3af43c;
        case 0x3af458u: goto label_3af458;
        case 0x3af470u: goto label_3af470;
        case 0x3af480u: goto label_3af480;
        case 0x3af490u: goto label_3af490;
        case 0x3af498u: goto label_3af498;
        case 0x3af4e0u: goto label_3af4e0;
        case 0x3af500u: goto label_3af500;
        case 0x3af530u: goto label_3af530;
        case 0x3af544u: goto label_3af544;
        case 0x3af560u: goto label_3af560;
        case 0x3af578u: goto label_3af578;
        case 0x3af5bcu: goto label_3af5bc;
        case 0x3af5d0u: goto label_3af5d0;
        case 0x3af5f4u: goto label_3af5f4;
        case 0x3af608u: goto label_3af608;
        case 0x3af62cu: goto label_3af62c;
        case 0x3af640u: goto label_3af640;
        case 0x3af660u: goto label_3af660;
        case 0x3af668u: goto label_3af668;
        case 0x3af714u: goto label_3af714;
        case 0x3af734u: goto label_3af734;
        case 0x3af760u: goto label_3af760;
        case 0x3af774u: goto label_3af774;
        case 0x3af790u: goto label_3af790;
        case 0x3af7ecu: goto label_3af7ec;
        case 0x3af80cu: goto label_3af80c;
        case 0x3af82cu: goto label_3af82c;
        case 0x3af84cu: goto label_3af84c;
        case 0x3af854u: goto label_3af854;
        default: break;
    }

    ctx->pc = 0x3af108u;

label_3af108:
    // 0x3af108: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3af108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3af10c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3af10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3af110: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3af110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3af114: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3af114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3af118: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3af118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af11c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3af11cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3af120: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3af120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3af124: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3af124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3af128: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x3af128u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3af12c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3af12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3af130: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AF130u;
    SET_GPR_U32(ctx, 31, 0x3AF138u);
    ctx->pc = 0x3AF134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF130u;
    // 0x3af134: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AF130u, 0x3AF138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF138u;
label_3af138:
    // 0x3af138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3af138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3af13c: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AF13Cu;
    SET_GPR_U32(ctx, 31, 0x3AF144u);
    ctx->pc = 0x3AF140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF13Cu;
    // 0x3af140: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AF13Cu, 0x3AF144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF144u;
label_3af144:
    // 0x3af144: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3af144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3af148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af14c: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3AF14Cu;
    SET_GPR_U32(ctx, 31, 0x3AF154u);
    ctx->pc = 0x3AF150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF14Cu;
    // 0x3af150: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3AF14Cu, 0x3AF154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF154u;
label_3af154:
    // 0x3af154: 0x6a03000b  ldl         $v1, 0xB($s0)
    ctx->pc = 0x3af154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3af158: 0x6e030004  ldr         $v1, 0x4($s0)
    ctx->pc = 0x3af158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3af15c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3af15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af160: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3af160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af164: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3af164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af168: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3af168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af16c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3af16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3af170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3af174: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3af174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3af178: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3af178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af17c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3af17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af180: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3af180u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3af184: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF184u;
    {
        const bool branch_taken_0x3af184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF184u;
        // 0x3af188: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af184) {
            ctx->pc = 0x3AF19Cu;
            goto label_3af19c;
        }
    }
    ctx->pc = 0x3AF18Cu;
    // 0x3af18c: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x3af18cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af190: 0x0  nop
    ctx->pc = 0x3af190u;
    // NOP
    // 0x3af194: 0x45030052  bc1tl       . + 4 + (0x52 << 2)
    ctx->pc = 0x3AF194u;
    {
        const bool branch_taken_0x3af194 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3af194) {
            ctx->pc = 0x3AF198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF194u;
            // 0x3af198: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF2E0u;
            goto label_3af2e0;
        }
    }
    ctx->pc = 0x3AF19Cu;
label_3af19c:
    // 0x3af19c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3af19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3af1a0: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AF1A0u;
    SET_GPR_U32(ctx, 31, 0x3AF1A8u);
    ctx->pc = 0x3AF1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1A0u;
    // 0x3af1a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AF1A0u, 0x3AF1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1A8u;
label_3af1a8:
    // 0x3af1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3af1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3af1b0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3af1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3af1b4: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3af1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x3af1b8: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AF1B8u;
    SET_GPR_U32(ctx, 31, 0x3AF1C0u);
    ctx->pc = 0x3AF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF1B8u;
    // 0x3af1bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AF1B8u, 0x3AF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF1C0u;
label_3af1c0:
    // 0x3af1c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3af1c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af1c4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3af1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af1cc: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3af1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af1d0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3af1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3af1d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3af1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3af1d8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3af1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af1dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3af1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3af1e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3af1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af1e4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3af1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af1e8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3af1e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3af1ec: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3af1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3af1f0: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3af1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af1f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3af1f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3af1f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3af1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3af1fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3af1fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3af200: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3af200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3af204: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3af204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af208: 0x46010104  c1          0x10104
    ctx->pc = 0x3af208u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3af20c: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x3af20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af210: 0x0  nop
    ctx->pc = 0x3af210u;
    // NOP
    // 0x3af214: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF214u;
    {
        const bool branch_taken_0x3af214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF214u;
        // 0x3af218: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af214) {
            ctx->pc = 0x3AF228u;
            goto label_3af228;
        }
    }
    ctx->pc = 0x3AF21Cu;
    // 0x3af21c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3af220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af224: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3af224u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_3af228:
    // 0x3af228: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3af228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af22c: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x3af22cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af230: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3af230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3af234: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3af234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af238: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af23c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3af23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3af240: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3af240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af244: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3af244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3af248: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3af248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3af24c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AF24Cu;
    {
        const bool branch_taken_0x3af24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF24Cu;
        // 0x3af250: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af24c) {
            ctx->pc = 0x3AF2B0u;
            goto label_3af2b0;
        }
    }
    ctx->pc = 0x3AF254u;
    // 0x3af254: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3af254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3af258: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3af258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af25c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3af25cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3af260: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3af260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3af264: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3af264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af268: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x3af268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af26c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3af26cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3af270: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3af270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3af274: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x3af274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3af27c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3af27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3af280: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x3af280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af284: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3af284u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3af288: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3af288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3af28c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3af28cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3af290: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3af290u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3af294: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3af294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3af298: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3af298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x3af29c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3af29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af2a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AF2A4u;
    {
        const bool branch_taken_0x3af2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF2A4u;
        // 0x3af2a8: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af2a4) {
            ctx->pc = 0x3AF2C0u;
            goto label_3af2c0;
        }
    }
    ctx->pc = 0x3AF2ACu;
    // 0x3af2ac: 0x0  nop
    ctx->pc = 0x3af2acu;
    // NOP
label_3af2b0:
    // 0x3af2b0: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x3af2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3af2b4: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x3af2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3af2b8: 0xb062fffb  sdl         $v0, -0x5($v1)
    ctx->pc = 0x3af2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af2bc: 0xb462fff4  sdr         $v0, -0xC($v1)
    ctx->pc = 0x3af2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3af2c0:
    // 0x3af2c0: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3AF2C0u;
    SET_GPR_U32(ctx, 31, 0x3AF2C8u);
    ctx->pc = 0x3AF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2C0u;
    // 0x3af2c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AF2C0u, 0x3AF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF2C8u;
label_3af2c8:
    // 0x3af2c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3af2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3af2cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af2d0: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3AF2D0u;
    SET_GPR_U32(ctx, 31, 0x3AF2D8u);
    ctx->pc = 0x3AF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF2D0u;
    // 0x3af2d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3AF2D0u, 0x3AF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF2D8u;
label_3af2d8:
    // 0x3af2d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3af2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af2dc: 0x0  nop
    ctx->pc = 0x3af2dcu;
    // NOP
label_3af2e0:
    // 0x3af2e0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3af2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af2e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3af2e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3af2e8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3af2e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3af2ec: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3af2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af2f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3af2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af2f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3af2f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af2f8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3af2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3af2fc: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3af2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3af304: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3af304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3af308: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3af308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af30c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3af30cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3af310: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3af310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3af314: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3af314u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3af318: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3af318u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3af31c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3af31cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3af320: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x3af320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3af324: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3af324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af328: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af32c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3af32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3af330: 0x68430013  ldl         $v1, 0x13($v0)
    ctx->pc = 0x3af330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3af334: 0x6c43000c  ldr         $v1, 0xC($v0)
    ctx->pc = 0x3af334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3af338: 0xb2030013  sdl         $v1, 0x13($s0)
    ctx->pc = 0x3af338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af33c: 0xb603000c  sdr         $v1, 0xC($s0)
    ctx->pc = 0x3af33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3af340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af344: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3af344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3af348: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3af348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af34c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3af34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3af350: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3af350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af354: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3af354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af358: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3af358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af35c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3af35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af360: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3af360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3af364: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF364u;
        // 0x3af368: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF36Cu;
    // 0x3af36c: 0x0  nop
    ctx->pc = 0x3af36cu;
    // NOP
    // 0x3af370: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3af370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3af374: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3af374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3af378: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x3af378u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3af37c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3af37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3af380: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x3af380u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x3af384: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3af384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3af388: 0x4614b836  c.le.s      $f23, $f20
    ctx->pc = 0x3af388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af38c: 0xe7b90088  swc1        $f25, 0x88($sp)
    ctx->pc = 0x3af38cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3af390: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x3af390u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3af394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af398: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3af398u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3af39c: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x3af39cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x3af3a0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3af3a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3af3a4: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x3af3a4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x3af3a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3af3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3af3ac: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x3af3acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x3af3b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3af3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3af3b4: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x3af3b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x3af3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3af3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3af3bc: 0xe7bd00a8  swc1        $f29, 0xA8($sp)
    ctx->pc = 0x3af3bcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3af3c0: 0xe7bc00a0  swc1        $f28, 0xA0($sp)
    ctx->pc = 0x3af3c0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3af3c4: 0xe7bb0098  swc1        $f27, 0x98($sp)
    ctx->pc = 0x3af3c4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3af3c8: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x3AF3C8u;
    {
        const bool branch_taken_0x3af3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3C8u;
        // 0x3af3cc: 0xe7ba0090  swc1        $f26, 0x90($sp) (Delay Slot)
        { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3c8) {
            ctx->pc = 0x3AF4A0u;
            goto label_3af4a0;
        }
    }
    ctx->pc = 0x3AF3D0u;
    // 0x3af3d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af3d4: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AF3D4u;
    SET_GPR_U32(ctx, 31, 0x3AF3DCu);
    ctx->pc = 0x3AF3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF3D4u;
    // 0x3af3d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AF3D4u, 0x3AF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF3DCu;
label_3af3dc:
    // 0x3af3dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AF3DCu;
    {
        const bool branch_taken_0x3af3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF3DCu;
        // 0x3af3e0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af3dc) {
            ctx->pc = 0x3AF420u;
            goto label_3af420;
        }
    }
    ctx->pc = 0x3AF3E4u;
    // 0x3af3e4: 0xe7b90000  swc1        $f25, 0x0($sp)
    ctx->pc = 0x3af3e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3af3e8: 0xe7b80004  swc1        $f24, 0x4($sp)
    ctx->pc = 0x3af3e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3af3ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af3f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3af3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3af3f4: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AF3F4u;
    SET_GPR_U32(ctx, 31, 0x3AF3FCu);
    ctx->pc = 0x3AF3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF3F4u;
    // 0x3af3f8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AF3F4u, 0x3AF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF3FCu;
label_3af3fc:
    // 0x3af3fc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3af3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af400: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3af400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3af404: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3af404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3af408: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3af408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af40c: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x3af40cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3af410: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3af410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3af414: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x3af414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3af418: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AF418u;
    {
        const bool branch_taken_0x3af418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF418u;
        // 0x3af41c: 0xe4540010  swc1        $f20, 0x10($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af418) {
            ctx->pc = 0x3AF458u;
            goto label_3af458;
        }
    }
    ctx->pc = 0x3AF420u;
label_3af420:
    // 0x3af420: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3AF420u;
    SET_GPR_U32(ctx, 31, 0x3AF428u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3AF420u, 0x3AF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF428u;
label_3af428:
    // 0x3af428: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3af428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af42c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3af42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3af430: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af434: 0xc0ec64a  jal         func_3B1928
    ctx->pc = 0x3AF434u;
    SET_GPR_U32(ctx, 31, 0x3AF43Cu);
    ctx->pc = 0x3AF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF434u;
    // 0x3af438: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3AF434u, 0x3AF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF43Cu;
label_3af43c:
    // 0x3af43c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3af43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af444: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3af444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3af448: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3af448u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3af44c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3af44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3af450: 0xc0ec6d6  jal         func_3B1B58
    ctx->pc = 0x3AF450u;
    SET_GPR_U32(ctx, 31, 0x3AF458u);
    ctx->pc = 0x3AF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF450u;
    // 0x3af454: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B58u, 0x3AF450u, 0x3AF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF458u;
label_3af458:
    // 0x3af458: 0x4615cd00  add.s       $f20, $f25, $f21
    ctx->pc = 0x3af458u;
    ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
    // 0x3af45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af460: 0x4616c540  add.s       $f21, $f24, $f22
    ctx->pc = 0x3af460u;
    ctx->f[21] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x3af464: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3af464u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3af468: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF468u;
    SET_GPR_U32(ctx, 31, 0x3AF470u);
    ctx->pc = 0x3AF46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF468u;
    // 0x3af46c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF468u, 0x3AF470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF470u;
label_3af470:
    // 0x3af470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3af470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3af474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af478: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF478u;
    SET_GPR_U32(ctx, 31, 0x3AF480u);
    ctx->pc = 0x3AF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF478u;
    // 0x3af47c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF478u, 0x3AF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF480u;
label_3af480:
    // 0x3af480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af484: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3af484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3af488: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF488u;
    SET_GPR_U32(ctx, 31, 0x3AF490u);
    ctx->pc = 0x3AF48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF488u;
    // 0x3af48c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF488u, 0x3AF490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF490u;
label_3af490:
    // 0x3af490: 0xc0ebc42  jal         func_3AF108
    ctx->pc = 0x3AF490u;
    SET_GPR_U32(ctx, 31, 0x3AF498u);
    ctx->pc = 0x3AF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF490u;
    // 0x3af494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    goto label_3af108;
    ctx->pc = 0x3AF498u;
label_3af498:
    // 0x3af498: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3AF498u;
    {
        const bool branch_taken_0x3af498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF498u;
        // 0x3af49c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af498) {
            ctx->pc = 0x3AF66Cu;
            goto label_3af66c;
        }
    }
    ctx->pc = 0x3AF4A0u;
label_3af4a0:
    // 0x3af4a0: 0x4617b800  add.s       $f0, $f23, $f23
    ctx->pc = 0x3af4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x3af4a4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3af4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af4a8: 0x0  nop
    ctx->pc = 0x3af4a8u;
    // NOP
    // 0x3af4ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF4ACu;
    {
        const bool branch_taken_0x3af4ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4ACu;
        // 0x3af4b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4ac) {
            ctx->pc = 0x3AF4B8u;
            goto label_3af4b8;
        }
    }
    ctx->pc = 0x3AF4B4u;
    // 0x3af4b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3af4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af4b8:
    // 0x3af4b8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x3af4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af4bc: 0x0  nop
    ctx->pc = 0x3af4bcu;
    // NOP
    // 0x3af4c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF4C0u;
    {
        const bool branch_taken_0x3af4c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4C0u;
        // 0x3af4c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4c0) {
            ctx->pc = 0x3AF4CCu;
            goto label_3af4cc;
        }
    }
    ctx->pc = 0x3AF4C8u;
    // 0x3af4c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3af4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af4cc:
    // 0x3af4cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af4d0: 0x4617c800  add.s       $f0, $f25, $f23
    ctx->pc = 0x3af4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x3af4d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3af4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3af4d8: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AF4D8u;
    SET_GPR_U32(ctx, 31, 0x3AF4E0u);
    ctx->pc = 0x3AF4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF4D8u;
    // 0x3af4dc: 0x460006c6  mov.s       $f27, $f0 (Delay Slot)
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AF4D8u, 0x3AF4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF4E0u;
label_3af4e0:
    // 0x3af4e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AF4E0u;
    {
        const bool branch_taken_0x3af4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4E0u;
        // 0x3af4e4: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4e0) {
            ctx->pc = 0x3AF528u;
            goto label_3af528;
        }
    }
    ctx->pc = 0x3AF4E8u;
    // 0x3af4e8: 0xe7bb0010  swc1        $f27, 0x10($sp)
    ctx->pc = 0x3af4e8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3af4ec: 0xe7b80014  swc1        $f24, 0x14($sp)
    ctx->pc = 0x3af4ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3af4f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af4f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3af4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3af4f8: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AF4F8u;
    SET_GPR_U32(ctx, 31, 0x3AF500u);
    ctx->pc = 0x3AF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF4F8u;
    // 0x3af4fc: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AF4F8u, 0x3AF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF500u;
label_3af500:
    // 0x3af500: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3af500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af504: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3af504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3af508: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3af508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3af50c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3af50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af510: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x3af510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3af514: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3af514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3af518: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x3af518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3af51c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AF51Cu;
    {
        const bool branch_taken_0x3af51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF51Cu;
        // 0x3af520: 0xe4540010  swc1        $f20, 0x10($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af51c) {
            ctx->pc = 0x3AF560u;
            goto label_3af560;
        }
    }
    ctx->pc = 0x3AF524u;
    // 0x3af524: 0x0  nop
    ctx->pc = 0x3af524u;
    // NOP
label_3af528:
    // 0x3af528: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3AF528u;
    SET_GPR_U32(ctx, 31, 0x3AF530u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3AF528u, 0x3AF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF530u;
label_3af530:
    // 0x3af530: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3af530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af534: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3af534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3af538: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af53c: 0xc0ec64a  jal         func_3B1928
    ctx->pc = 0x3AF53Cu;
    SET_GPR_U32(ctx, 31, 0x3AF544u);
    ctx->pc = 0x3AF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF53Cu;
    // 0x3af540: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3AF53Cu, 0x3AF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF544u;
label_3af544:
    // 0x3af544: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3af544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af54c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x3af54cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x3af550: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3af550u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3af554: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3af554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3af558: 0xc0ec6d6  jal         func_3B1B58
    ctx->pc = 0x3AF558u;
    SET_GPR_U32(ctx, 31, 0x3AF560u);
    ctx->pc = 0x3AF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF558u;
    // 0x3af55c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B58u, 0x3AF558u, 0x3AF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF560u;
label_3af560:
    // 0x3af560: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF560u;
    {
        const bool branch_taken_0x3af560 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF560u;
        // 0x3af564: 0x4615cd00  add.s       $f20, $f25, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[25], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af560) {
            ctx->pc = 0x3AF578u;
            goto label_3af578;
        }
    }
    ctx->pc = 0x3AF568u;
    // 0x3af568: 0x4617a301  sub.s       $f12, $f20, $f23
    ctx->pc = 0x3af568u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x3af56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af570: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF570u;
    SET_GPR_U32(ctx, 31, 0x3AF578u);
    ctx->pc = 0x3AF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF570u;
    // 0x3af574: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF570u, 0x3AF578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF578u;
label_3af578:
    // 0x3af578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3af57c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3af57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af580: 0x4616c540  add.s       $f21, $f24, $f22
    ctx->pc = 0x3af580u;
    ctx->f[21] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x3af584: 0xc780809c  lwc1        $f0, -0x7F64($gp)
    ctx->pc = 0x3af584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af588: 0x4617c740  add.s       $f29, $f24, $f23
    ctx->pc = 0x3af588u;
    ctx->f[29] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
    // 0x3af58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af590: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x3af590u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x3af594: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3af594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3af598: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3af598u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x3af59c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x3af59cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x3af5a0: 0x4600ec46  mov.s       $f17, $f29
    ctx->pc = 0x3af5a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[29]);
    // 0x3af5a4: 0x4601bd82  mul.s       $f22, $f23, $f1
    ctx->pc = 0x3af5a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x3af5a8: 0x4616a681  sub.s       $f26, $f20, $f22
    ctx->pc = 0x3af5a8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x3af5ac: 0x4616c700  add.s       $f28, $f24, $f22
    ctx->pc = 0x3af5acu;
    ctx->f[28] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
    // 0x3af5b0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x3af5b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x3af5b4: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF5B4u;
    SET_GPR_U32(ctx, 31, 0x3AF5BCu);
    ctx->pc = 0x3AF5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5B4u;
    // 0x3af5b8: 0x4600e3c6  mov.s       $f15, $f28 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF5B4u, 0x3AF5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5BCu;
label_3af5bc:
    // 0x3af5bc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF5BCu;
    {
        const bool branch_taken_0x3af5bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5BCu;
        // 0x3af5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5bc) {
            ctx->pc = 0x3AF5D0u;
            goto label_3af5d0;
        }
    }
    ctx->pc = 0x3AF5C4u;
    // 0x3af5c4: 0x4617ab41  sub.s       $f13, $f21, $f23
    ctx->pc = 0x3af5c4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x3af5c8: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF5C8u;
    SET_GPR_U32(ctx, 31, 0x3AF5D0u);
    ctx->pc = 0x3AF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5C8u;
    // 0x3af5cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF5C8u, 0x3AF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5D0u;
label_3af5d0:
    // 0x3af5d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3af5d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3af5d4: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x3af5d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
    // 0x3af5d8: 0x4616ad01  sub.s       $f20, $f21, $f22
    ctx->pc = 0x3af5d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x3af5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5e0: 0x46176401  sub.s       $f16, $f12, $f23
    ctx->pc = 0x3af5e0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[12], ctx->f[23]);
    // 0x3af5e4: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3af5e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x3af5e8: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x3af5e8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x3af5ec: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF5ECu;
    SET_GPR_U32(ctx, 31, 0x3AF5F4u);
    ctx->pc = 0x3AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF5ECu;
    // 0x3af5f0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF5ECu, 0x3AF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5F4u;
label_3af5f4:
    // 0x3af5f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF5F4u;
    {
        const bool branch_taken_0x3af5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5F4u;
        // 0x3af5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5f4) {
            ctx->pc = 0x3AF608u;
            goto label_3af608;
        }
    }
    ctx->pc = 0x3AF5FCu;
    // 0x3af5fc: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x3af5fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x3af600: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF600u;
    SET_GPR_U32(ctx, 31, 0x3AF608u);
    ctx->pc = 0x3AF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF600u;
    // 0x3af604: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF600u, 0x3AF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF608u;
label_3af608:
    // 0x3af608: 0x4616cd80  add.s       $f22, $f25, $f22
    ctx->pc = 0x3af608u;
    ctx->f[22] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
    // 0x3af60c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3af60cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3af610: 0x46176c41  sub.s       $f17, $f13, $f23
    ctx->pc = 0x3af610u;
    ctx->f[17] = FPU_SUB_S(ctx->f[13], ctx->f[23]);
    // 0x3af614: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3af614u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x3af618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af61c: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x3af61cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x3af620: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3af620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3af624: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF624u;
    SET_GPR_U32(ctx, 31, 0x3AF62Cu);
    ctx->pc = 0x3AF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF624u;
    // 0x3af628: 0x4600cc06  mov.s       $f16, $f25 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF624u, 0x3AF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF62Cu;
label_3af62c:
    // 0x3af62c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF62Cu;
    {
        const bool branch_taken_0x3af62c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF62Cu;
        // 0x3af630: 0x4600eb46  mov.s       $f13, $f29 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af62c) {
            ctx->pc = 0x3AF640u;
            goto label_3af640;
        }
    }
    ctx->pc = 0x3AF634u;
    // 0x3af634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af638: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3AF638u;
    SET_GPR_U32(ctx, 31, 0x3AF640u);
    ctx->pc = 0x3AF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF638u;
    // 0x3af63c: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3AF638u, 0x3AF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF640u;
label_3af640:
    // 0x3af640: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x3af640u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x3af644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af648: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3af648u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3af64c: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x3af64cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x3af650: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3af650u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3af654: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x3af654u;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x3af658: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF658u;
    SET_GPR_U32(ctx, 31, 0x3AF660u);
    ctx->pc = 0x3AF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF658u;
    // 0x3af65c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF658u, 0x3AF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF660u;
label_3af660:
    // 0x3af660: 0xc0ebc42  jal         func_3AF108
    ctx->pc = 0x3AF660u;
    SET_GPR_U32(ctx, 31, 0x3AF668u);
    ctx->pc = 0x3AF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF660u;
    // 0x3af664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    goto label_3af108;
    ctx->pc = 0x3AF668u;
label_3af668:
    // 0x3af668: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3af668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af66c:
    // 0x3af66c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3af66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af670: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3af670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af674: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3af674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3af678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af67c: 0xc7bd00a8  lwc1        $f29, 0xA8($sp)
    ctx->pc = 0x3af67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x3af680: 0xc7bc00a0  lwc1        $f28, 0xA0($sp)
    ctx->pc = 0x3af680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x3af684: 0xc7bb0098  lwc1        $f27, 0x98($sp)
    ctx->pc = 0x3af684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3af688: 0xc7ba0090  lwc1        $f26, 0x90($sp)
    ctx->pc = 0x3af688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3af68c: 0xc7b90088  lwc1        $f25, 0x88($sp)
    ctx->pc = 0x3af68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3af690: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x3af690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3af694: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x3af694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3af698: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x3af698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3af69c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3af69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3af6a0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3af6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3af6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6A4u;
        // 0x3af6a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF6ACu;
    // 0x3af6ac: 0x0  nop
    ctx->pc = 0x3af6acu;
    // NOP
    // 0x3af6b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3af6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3af6b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3af6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3af6b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af6bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3af6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3af6c0: 0xe7bd0078  swc1        $f29, 0x78($sp)
    ctx->pc = 0x3af6c0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3af6c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af6c8: 0xe7bc0070  swc1        $f28, 0x70($sp)
    ctx->pc = 0x3af6c8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3af6cc: 0x46006746  mov.s       $f29, $f12
    ctx->pc = 0x3af6ccu;
    ctx->f[29] = FPU_MOV_S(ctx->f[12]);
    // 0x3af6d0: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x3af6d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3af6d4: 0x46006f06  mov.s       $f28, $f13
    ctx->pc = 0x3af6d4u;
    ctx->f[28] = FPU_MOV_S(ctx->f[13]);
    // 0x3af6d8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x3af6d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3af6dc: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x3af6dcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x3af6e0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3af6e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3af6e4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x3af6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x3af6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3af6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3af6ec: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x3af6ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x3af6f0: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x3af6f0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3af6f4: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x3af6f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3af6f8: 0x4600ed00  add.s       $f20, $f29, $f0
    ctx->pc = 0x3af6f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    // 0x3af6fc: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x3af6fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3af700: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x3af700u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3af704: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3af704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3af708: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af70c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AF70Cu;
    SET_GPR_U32(ctx, 31, 0x3AF714u);
    ctx->pc = 0x3AF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF70Cu;
    // 0x3af710: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AF70Cu, 0x3AF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF714u;
label_3af714:
    // 0x3af714: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AF714u;
    {
        const bool branch_taken_0x3af714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF714u;
        // 0x3af718: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af714) {
            ctx->pc = 0x3AF758u;
            goto label_3af758;
        }
    }
    ctx->pc = 0x3AF71Cu;
    // 0x3af71c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3af71cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3af720: 0xe7bc0004  swc1        $f28, 0x4($sp)
    ctx->pc = 0x3af720u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3af724: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af728: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3af728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3af72c: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AF72Cu;
    SET_GPR_U32(ctx, 31, 0x3AF734u);
    ctx->pc = 0x3AF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF72Cu;
    // 0x3af730: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AF72Cu, 0x3AF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF734u;
label_3af734:
    // 0x3af734: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3af734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af738: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3af738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3af73c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3af73cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3af740: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3af740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af744: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3af744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3af748: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3af748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3af74c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3af74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3af750: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AF750u;
    {
        const bool branch_taken_0x3af750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF750u;
        // 0x3af754: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af750) {
            ctx->pc = 0x3AF790u;
            goto label_3af790;
        }
    }
    ctx->pc = 0x3AF758u;
label_3af758:
    // 0x3af758: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3AF758u;
    SET_GPR_U32(ctx, 31, 0x3AF760u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3AF758u, 0x3AF760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF760u;
label_3af760:
    // 0x3af760: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3af760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af764: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3af764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3af768: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3af768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af76c: 0xc0ec64a  jal         func_3B1928
    ctx->pc = 0x3AF76Cu;
    SET_GPR_U32(ctx, 31, 0x3AF774u);
    ctx->pc = 0x3AF770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF76Cu;
    // 0x3af770: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3AF76Cu, 0x3AF774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF774u;
label_3af774:
    // 0x3af774: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3af774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3af778: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3af778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3af77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af780: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x3af780u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x3af784: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3af784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3af788: 0xc0ec6d6  jal         func_3B1B58
    ctx->pc = 0x3AF788u;
    SET_GPR_U32(ctx, 31, 0x3AF790u);
    ctx->pc = 0x3AF78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF788u;
    // 0x3af78c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B58u, 0x3AF788u, 0x3AF790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF790u;
label_3af790:
    // 0x3af790: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3af790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3af794: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3af794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3af798: 0x4616e680  add.s       $f26, $f28, $f22
    ctx->pc = 0x3af798u;
    ctx->f[26] = FPU_ADD_S(ctx->f[28], ctx->f[22]);
    // 0x3af79c: 0xc79580a0  lwc1        $f21, -0x7F60($gp)
    ctx->pc = 0x3af79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3af7a0: 0x4618ee40  add.s       $f25, $f29, $f24
    ctx->pc = 0x3af7a0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[29], ctx->f[24]);
    // 0x3af7a4: 0x4614b5c2  mul.s       $f23, $f22, $f20
    ctx->pc = 0x3af7a4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x3af7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af7ac: 0x4614c502  mul.s       $f20, $f24, $f20
    ctx->pc = 0x3af7acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x3af7b0: 0x4600e346  mov.s       $f13, $f28
    ctx->pc = 0x3af7b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    // 0x3af7b4: 0x4615b582  mul.s       $f22, $f22, $f21
    ctx->pc = 0x3af7b4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x3af7b8: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x3af7b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x3af7bc: 0x4617e5c0  add.s       $f23, $f28, $f23
    ctx->pc = 0x3af7bcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[28], ctx->f[23]);
    // 0x3af7c0: 0x4600cc06  mov.s       $f16, $f25
    ctx->pc = 0x3af7c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[25]);
    // 0x3af7c4: 0x4614ed00  add.s       $f20, $f29, $f20
    ctx->pc = 0x3af7c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[29], ctx->f[20]);
    // 0x3af7c8: 0x4615c542  mul.s       $f21, $f24, $f21
    ctx->pc = 0x3af7c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x3af7cc: 0x4616bec1  sub.s       $f27, $f23, $f22
    ctx->pc = 0x3af7ccu;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x3af7d0: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x3af7d0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x3af7d4: 0x4616bd80  add.s       $f22, $f23, $f22
    ctx->pc = 0x3af7d4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x3af7d8: 0x4615a600  add.s       $f24, $f20, $f21
    ctx->pc = 0x3af7d8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x3af7dc: 0x4600dbc6  mov.s       $f15, $f27
    ctx->pc = 0x3af7dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[27]);
    // 0x3af7e0: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x3af7e0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x3af7e4: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF7E4u;
    SET_GPR_U32(ctx, 31, 0x3AF7ECu);
    ctx->pc = 0x3AF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF7E4u;
    // 0x3af7e8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF7E4u, 0x3AF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF7ECu;
label_3af7ec:
    // 0x3af7ec: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x3af7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x3af7f0: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x3af7f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x3af7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af7f8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3af7f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x3af7fc: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x3af7fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x3af800: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x3af800u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x3af804: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF804u;
    SET_GPR_U32(ctx, 31, 0x3AF80Cu);
    ctx->pc = 0x3AF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF804u;
    // 0x3af808: 0x4600d446  mov.s       $f17, $f26 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF804u, 0x3AF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF80Cu;
label_3af80c:
    // 0x3af80c: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3af80cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x3af810: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x3af810u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x3af814: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x3af814u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
    // 0x3af818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af81c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3af81cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3af820: 0x4600eb86  mov.s       $f14, $f29
    ctx->pc = 0x3af820u;
    ctx->f[14] = FPU_MOV_S(ctx->f[29]);
    // 0x3af824: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF824u;
    SET_GPR_U32(ctx, 31, 0x3AF82Cu);
    ctx->pc = 0x3AF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF824u;
    // 0x3af828: 0x4600ec06  mov.s       $f16, $f29 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[29]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF824u, 0x3AF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF82Cu;
label_3af82c:
    // 0x3af82c: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x3af82cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
    // 0x3af830: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x3af830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x3af834: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x3af834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
    // 0x3af838: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x3af838u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x3af83c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x3af83cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x3af840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af844: 0xc0ebb98  jal         func_3AEE60
    ctx->pc = 0x3AF844u;
    SET_GPR_U32(ctx, 31, 0x3AF84Cu);
    ctx->pc = 0x3AF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF844u;
    // 0x3af848: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE60u, 0x3AF844u, 0x3AF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF84Cu;
label_3af84c:
    // 0x3af84c: 0xc0ebc42  jal         func_3AF108
    ctx->pc = 0x3AF84Cu;
    SET_GPR_U32(ctx, 31, 0x3AF854u);
    ctx->pc = 0x3AF850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF84Cu;
    // 0x3af850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    goto label_3af108;
    ctx->pc = 0x3AF854u;
label_3af854:
    // 0x3af854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3af854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3af858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af85c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3af85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af860: 0xc7bd0078  lwc1        $f29, 0x78($sp)
    ctx->pc = 0x3af860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x3af864: 0xc7bc0070  lwc1        $f28, 0x70($sp)
    ctx->pc = 0x3af864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x3af868: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x3af868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3af86c: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x3af86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3af870: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x3af870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3af874: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x3af874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3af878: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x3af878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3af87c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x3af87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3af880: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3af880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3af884: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3af884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3af888: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF888u;
        // 0x3af88c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF890u;
}
