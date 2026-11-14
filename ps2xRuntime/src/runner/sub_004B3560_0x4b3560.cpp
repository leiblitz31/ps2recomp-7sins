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

// Function: sub_004B3560
// Address: 0x4b3560 - 0x4b3690
void sub_004B3560_0x4b3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3560_0x4b3560");
#endif

    switch (ctx->pc) {
        case 0x4b3590u: goto label_4b3590;
        case 0x4b360cu: goto label_4b360c;
        default: break;
    }

    ctx->pc = 0x4b3560u;

    // 0x4b3560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b3560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b3564: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b3564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b3568: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b356c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b356cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3570: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b3570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b3574: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x4b3574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x4b3578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b357c: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x4b357cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x4b3580: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3584: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x4b3584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x4b3588: 0xc12c41e  jal         func_4B1078
    ctx->pc = 0x4B3588u;
    SET_GPR_U32(ctx, 31, 0x4B3590u);
    ctx->pc = 0x4B358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3588u;
    // 0x4b358c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1078u, 0x4B3588u, 0x4B3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3590u;
label_4b3590:
    // 0x4b3590: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B3590u;
    {
        const bool branch_taken_0x4b3590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3590u;
        // 0x4b3594: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3590) {
            ctx->pc = 0x4B3674u;
            goto label_4b3674;
        }
    }
    ctx->pc = 0x4B3598u;
    // 0x4b3598: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4b3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x4b359c: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x4b359cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x4b35a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b35a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b35a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b35a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b35a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b35a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b35ac: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x4b35acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x4b35b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b35b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b35b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4b35b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4b35b8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4b35b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b35bc: 0xc78181a8  lwc1        $f1, -0x7E58($gp)
    ctx->pc = 0x4b35bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b35c0: 0xc782826c  lwc1        $f2, -0x7D94($gp)
    ctx->pc = 0x4b35c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b35c4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4b35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4b35c8: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x4b35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x4b35cc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4b35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x4b35d0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4b35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x4b35d4: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x4b35d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b35d8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4b35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4b35dc: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x4b35dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x4b35e0: 0xe6230064  swc1        $f3, 0x64($s1)
    ctx->pc = 0x4b35e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x4b35e4: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x4b35e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x4b35e8: 0xe622006c  swc1        $f2, 0x6C($s1)
    ctx->pc = 0x4b35e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x4b35ec: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x4b35ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x4b35f0: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x4b35f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x4b35f4: 0xe6230058  swc1        $f3, 0x58($s1)
    ctx->pc = 0x4b35f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x4b35f8: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x4b35f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x4b35fc: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x4b35fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x4b3600: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x4b3600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4b3604: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4B3604u;
    SET_GPR_U32(ctx, 31, 0x4B360Cu);
    ctx->pc = 0x4B3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3604u;
    // 0x4b3608: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4B3604u, 0x4B360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B360Cu;
label_4b360c:
    // 0x4b360c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4b360cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b3610: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4b3610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b3614: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4b3614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b3618: 0xb242006b  sdl         $v0, 0x6B($s2)
    ctx->pc = 0x4b3618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b361c: 0xb6420064  sdr         $v0, 0x64($s2)
    ctx->pc = 0x4b361cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3620: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x4b3620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
    // 0x4b3624: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4b3624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4b3628: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x4b3628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4b362c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x4b362cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4b3630: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4b3630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b3634: 0xb2470077  sdl         $a3, 0x77($s2)
    ctx->pc = 0x4b3634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b3638: 0xb6470070  sdr         $a3, 0x70($s2)
    ctx->pc = 0x4b3638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b363c: 0xae480078  sw          $t0, 0x78($s2)
    ctx->pc = 0x4b363cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 8));
    // 0x4b3640: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b3640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3644: 0x24045622  addiu       $a0, $zero, 0x5622
    ctx->pc = 0x4b3644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22050));
    // 0x4b3648: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4b3648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x4b364c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b364cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b3650: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b3650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3654: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x4b3654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x4b3658: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4b3658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4b365c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4b365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4b3660: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4b3660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4b3664: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4b3664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4b3668: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4b3668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4b366c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B366Cu;
    {
        const bool branch_taken_0x4b366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B366Cu;
        // 0x4b3670: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b366c) {
            ctx->pc = 0x4B3678u;
            goto label_4b3678;
        }
    }
    ctx->pc = 0x4B3674u;
label_4b3674:
    // 0x4b3674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b3674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b3678:
    // 0x4b3678: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b3678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b367c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b367cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b3680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b3680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b3684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3688: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3688u;
        // 0x4b368c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3690u;
}
