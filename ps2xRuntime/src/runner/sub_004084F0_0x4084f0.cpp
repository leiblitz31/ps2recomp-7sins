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

// Function: sub_004084F0
// Address: 0x4084f0 - 0x408a70
void sub_004084F0_0x4084f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004084F0_0x4084f0");
#endif

    switch (ctx->pc) {
        case 0x408554u: goto label_408554;
        case 0x408560u: goto label_408560;
        case 0x408570u: goto label_408570;
        case 0x4085c8u: goto label_4085c8;
        case 0x4085d4u: goto label_4085d4;
        case 0x4085e4u: goto label_4085e4;
        case 0x408740u: goto label_408740;
        case 0x40874cu: goto label_40874c;
        case 0x40875cu: goto label_40875c;
        case 0x4088a4u: goto label_4088a4;
        case 0x4088c4u: goto label_4088c4;
        case 0x4088d8u: goto label_4088d8;
        case 0x408968u: goto label_408968;
        default: break;
    }

    ctx->pc = 0x4084f0u;

    // 0x4084f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4084F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4084F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4084F8u;
    // 0x4084f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4084f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4084fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4084fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x408500: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x408500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x408504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x408504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408508: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x408508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x40850c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40850cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408510: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x408510u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x408514: 0x120000e6  beqz        $s0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x408514u;
    {
        const bool branch_taken_0x408514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x408518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408514u;
        // 0x408518: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408514) {
            ctx->pc = 0x4088B0u;
            goto label_4088b0;
        }
    }
    ctx->pc = 0x40851Cu;
    // 0x40851c: 0x122000e4  beqz        $s1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x40851Cu;
    {
        const bool branch_taken_0x40851c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x408520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40851Cu;
        // 0x408520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40851c) {
            ctx->pc = 0x4088B0u;
            goto label_4088b0;
        }
    }
    ctx->pc = 0x408524u;
    // 0x408524: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x408524u;
    {
        const bool branch_taken_0x408524 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x408524) {
            ctx->pc = 0x408598u;
            goto label_408598;
        }
    }
    ctx->pc = 0x40852Cu;
    // 0x40852c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x40852Cu;
    {
        const bool branch_taken_0x40852c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x408530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40852Cu;
        // 0x408530: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40852c) {
            ctx->pc = 0x408544u;
            goto label_408544;
        }
    }
    ctx->pc = 0x408534u;
    // 0x408534: 0x10c20076  beq         $a2, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x408534u;
    {
        const bool branch_taken_0x408534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x408538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408534u;
        // 0x408538: 0x24020195  addiu       $v0, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408534) {
            ctx->pc = 0x408710u;
            goto label_408710;
        }
    }
    ctx->pc = 0x40853Cu;
    // 0x40853c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x40853Cu;
    {
        const bool branch_taken_0x40853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40853Cu;
        // 0x408540: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40853c) {
            ctx->pc = 0x408890u;
            goto label_408890;
        }
    }
    ctx->pc = 0x408544u;
label_408544:
    // 0x408544: 0xc7948180  lwc1        $f20, -0x7E80($gp)
    ctx->pc = 0x408544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x408548: 0x46146502  mul.s       $f20, $f12, $f20
    ctx->pc = 0x408548u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x40854c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x40854Cu;
    SET_GPR_U32(ctx, 31, 0x408554u);
    ctx->pc = 0x408550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40854Cu;
    // 0x408550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x40854Cu, 0x408554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408554u;
label_408554:
    // 0x408554: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x408554u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x408558: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x408558u;
    SET_GPR_U32(ctx, 31, 0x408560u);
    ctx->pc = 0x40855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408558u;
    // 0x40855c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x408558u, 0x408560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408560u;
label_408560:
    // 0x408560: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x408560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x408564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x408564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408568: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x408568u;
    SET_GPR_U32(ctx, 31, 0x408570u);
    ctx->pc = 0x40856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408568u;
    // 0x40856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x408568u, 0x408570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408570u;
label_408570:
    // 0x408570: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x408570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408574: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x408574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408578: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x408578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x40857c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x40857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408580: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x408580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x408584: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x408584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x408588: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x408588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x40858c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x40858cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x408590: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x408590u;
    {
        const bool branch_taken_0x408590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408590u;
        // 0x408594: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408590) {
            ctx->pc = 0x4088D8u;
            goto label_4088d8;
        }
    }
    ctx->pc = 0x408598u;
label_408598:
    // 0x408598: 0xc7948180  lwc1        $f20, -0x7E80($gp)
    ctx->pc = 0x408598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40859c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x40859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4085a0: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4085a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4085a4: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x4085a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4085a8: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x4085a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4085ac: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x4085acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4085b0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x4085b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4085b4: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x4085b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4085b8: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x4085b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4085bc: 0x46146502  mul.s       $f20, $f12, $f20
    ctx->pc = 0x4085bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x4085c0: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x4085C0u;
    SET_GPR_U32(ctx, 31, 0x4085C8u);
    ctx->pc = 0x4085C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4085C0u;
    // 0x4085c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x4085C0u, 0x4085C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4085C8u;
label_4085c8:
    // 0x4085c8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4085c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x4085cc: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x4085CCu;
    SET_GPR_U32(ctx, 31, 0x4085D4u);
    ctx->pc = 0x4085D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4085CCu;
    // 0x4085d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x4085CCu, 0x4085D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4085D4u;
label_4085d4:
    // 0x4085d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4085d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4085d8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x4085d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4085dc: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x4085DCu;
    SET_GPR_U32(ctx, 31, 0x4085E4u);
    ctx->pc = 0x4085E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4085DCu;
    // 0x4085e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x4085DCu, 0x4085E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4085E4u;
label_4085e4:
    // 0x4085e4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x4085e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4085e8: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x4085e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4085ec: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x4085ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x4085f0: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x4085f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4085f4: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x4085f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x4085f8: 0x46153182  mul.s       $f6, $f6, $f21
    ctx->pc = 0x4085f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
    // 0x4085fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4085fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x408600: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x408600u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x408604: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x408604u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x408608: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x408608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40860c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x40860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408610: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x408610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x408614: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x408614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x408618: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x408618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40861c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x40861cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x408620: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x408620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408624: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x408624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x408628: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x408628u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x40862c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40862cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x408630: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x408630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x408634: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x408634u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x408638: 0xe605000c  swc1        $f5, 0xC($s0)
    ctx->pc = 0x408638u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x40863c: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x40863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x408640: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x408640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408644: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x408644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408648: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x408648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40864c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x40864cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x408650: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408654: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x408654u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x408658: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x408658u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x40865c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x40865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408660: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x408660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408664: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x408664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x408668: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x408668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40866c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x40866cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x408670: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408674: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x408674u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x408678: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x408678u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x40867c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x40867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408680: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x408680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x408684: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x408684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408688: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x408688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40868c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x40868cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x408690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408694: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x408694u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x408698: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x408698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x40869c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x40869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4086a0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x4086a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4086a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4086a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4086a8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4086a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4086ac: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x4086acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4086b0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x4086b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4086b4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4086b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4086b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4086b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4086bc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4086bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4086c0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x4086c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4086c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x4086c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4086c8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x4086c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4086cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4086ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4086d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4086d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4086d4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x4086d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4086d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x4086d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4086dc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x4086dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4086e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4086e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4086e4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4086e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4086e8: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x4086e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4086ec: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x4086ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4086f0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x4086f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4086f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4086f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4086f8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4086f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x4086fc: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x4086fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x408700: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x408700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408704: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x408704u;
    {
        const bool branch_taken_0x408704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408704u;
        // 0x408708: 0xc7a1000c  lwc1        $f1, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408704) {
            ctx->pc = 0x408880u;
            goto label_408880;
        }
    }
    ctx->pc = 0x40870Cu;
    // 0x40870c: 0x0  nop
    ctx->pc = 0x40870cu;
    // NOP
label_408710:
    // 0x408710: 0xc7948180  lwc1        $f20, -0x7E80($gp)
    ctx->pc = 0x408710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x408714: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x408714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x408718: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x408718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40871c: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x40871cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x408720: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x408720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x408724: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x408724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x408728: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x408728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40872c: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x40872cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x408730: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x408730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x408734: 0x46146502  mul.s       $f20, $f12, $f20
    ctx->pc = 0x408734u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x408738: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x408738u;
    SET_GPR_U32(ctx, 31, 0x408740u);
    ctx->pc = 0x40873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408738u;
    // 0x40873c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x408738u, 0x408740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408740u;
label_408740:
    // 0x408740: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x408740u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x408744: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x408744u;
    SET_GPR_U32(ctx, 31, 0x40874Cu);
    ctx->pc = 0x408748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408744u;
    // 0x408748: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x408744u, 0x40874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40874Cu;
label_40874c:
    // 0x40874c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x40874cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x408750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x408750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408754: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x408754u;
    SET_GPR_U32(ctx, 31, 0x40875Cu);
    ctx->pc = 0x408758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408754u;
    // 0x408758: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x408754u, 0x40875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40875Cu;
label_40875c:
    // 0x40875c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x40875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408760: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x408760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x408764: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x408764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x408768: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x408768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40876c: 0x46153182  mul.s       $f6, $f6, $f21
    ctx->pc = 0x40876cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
    // 0x408770: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x408770u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x408774: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x408774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x408778: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x408778u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40877c: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x40877cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x408780: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x408780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408784: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x408784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408788: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x408788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40878c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40878cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x408790: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x408790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x408794: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x408794u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x408798: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x408798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40879c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x40879cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4087a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4087a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4087a4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x4087a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x4087a8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x4087a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x4087ac: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x4087acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x4087b0: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x4087b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x4087b4: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x4087b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4087b8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x4087b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4087bc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x4087bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4087c0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4087c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4087c4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x4087c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x4087c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4087c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4087cc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4087ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4087d0: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x4087d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4087d4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x4087d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4087d8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x4087d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4087dc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x4087dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4087e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4087e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4087e4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x4087e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x4087e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4087e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4087ec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4087ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x4087f0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x4087f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4087f4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x4087f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4087f8: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x4087f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4087fc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x4087fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408800: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x408800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408804: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x408804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x408808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40880c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x40880cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x408810: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x408810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x408814: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x408814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408818: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x408818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40881c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40881cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408820: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x408820u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x408824: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x408824u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x408828: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x408828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40882c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x40882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408830: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408834: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x408834u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x408838: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x408838u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x40883c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x40883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408840: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x408840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408848: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x408848u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x40884c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x40884cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x408850: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x408850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408854: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x408854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40885c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x40885cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x408860: 0xe6040000  swc1        $f4, 0x0($s0)
    ctx->pc = 0x408860u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x408864: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x408864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408868: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x408868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40886c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40886cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408870: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x408870u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x408874: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x408874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x408878: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x408878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40887c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x40887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408880:
    // 0x408880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x408884: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x408884u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x408888: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x408888u;
    {
        const bool branch_taken_0x408888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408888u;
        // 0x40888c: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408888) {
            ctx->pc = 0x4088D8u;
            goto label_4088d8;
        }
    }
    ctx->pc = 0x408890u;
label_408890:
    // 0x408890: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x408890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x408894: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x408894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x408898: 0x24a504f0  addiu       $a1, $a1, 0x4F0
    ctx->pc = 0x408898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1264));
    // 0x40889c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40889Cu;
    SET_GPR_U32(ctx, 31, 0x4088A4u);
    ctx->pc = 0x4088A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40889Cu;
    // 0x4088a0: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40889Cu, 0x4088A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4088A4u;
label_4088a4:
    // 0x4088a4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4088a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x4088a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4088A8u;
    {
        const bool branch_taken_0x4088a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4088ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088A8u;
        // 0x4088ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4088a8) {
            ctx->pc = 0x4088D0u;
            goto label_4088d0;
        }
    }
    ctx->pc = 0x4088B0u;
label_4088b0:
    // 0x4088b0: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x4088b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x4088b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4088b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4088b8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4088b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x4088bc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4088BCu;
    SET_GPR_U32(ctx, 31, 0x4088C4u);
    ctx->pc = 0x4088C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4088BCu;
    // 0x4088c0: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4088BCu, 0x4088C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4088C4u;
label_4088c4:
    // 0x4088c4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4088c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x4088c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4088c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4088cc: 0x0  nop
    ctx->pc = 0x4088ccu;
    // NOP
label_4088d0:
    // 0x4088d0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x4088D0u;
    SET_GPR_U32(ctx, 31, 0x4088D8u);
    ctx->pc = 0x4088D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4088D0u;
    // 0x4088d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4088D0u, 0x4088D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4088D8u;
label_4088d8:
    // 0x4088d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4088d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4088dc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4088dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4088e0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4088e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4088e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4088e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4088e8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x4088e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4088ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x4088ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4088f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4088F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4088F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4088F0u;
        // 0x4088f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4088F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4088F8u;
    // 0x4088f8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4088f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4088fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4088fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x408900: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x408900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408904: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x408904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408908: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x408908u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40890c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x40890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408910: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x408910u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x408914: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x408914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x408918: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x408918u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40891c: 0x46031982  mul.s       $f6, $f3, $f3
    ctx->pc = 0x40891cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x408920: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x408920u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x408924: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x408924u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x408928: 0x46043241  sub.s       $f9, $f6, $f4
    ctx->pc = 0x408928u;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x40892c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40892cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x408930: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x408930u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x408934: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x408934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x408938: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x408938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x40893c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40893cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x408940: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x408940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x408944: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x408944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x408948: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40894c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x40894cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x408950: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x408950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x408954: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x408954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x408958: 0x18c00043  blez        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x408958u;
    {
        const bool branch_taken_0x408958 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x40895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408958u;
        // 0x40895c: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408958) {
            ctx->pc = 0x408A68u;
            goto label_408a68;
        }
    }
    ctx->pc = 0x408960u;
    // 0x408960: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x408960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408964: 0x0  nop
    ctx->pc = 0x408964u;
    // NOP
label_408968:
    // 0x408968: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x408968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40896c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x40896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x408970: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x408970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408974: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x408974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x408978: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x408978u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x40897c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x40897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408980: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x408980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x408984: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x408984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x408988: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x408988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x40898c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x40898cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x408990: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x408990u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x408994: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x408994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408998: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x408998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40899c: 0x46040a02  mul.s       $f8, $f1, $f4
    ctx->pc = 0x40899cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4089a0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x4089a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4089a4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x4089a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x4089a8: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x4089a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x4089ac: 0x46070082  mul.s       $f2, $f0, $f7
    ctx->pc = 0x4089acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4089b0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4089b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4089b4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x4089b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x4089b8: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x4089b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x4089bc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x4089bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x4089c0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4089c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x4089c4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x4089c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4089c8: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x4089c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4089cc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x4089ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4089d0: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x4089d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4089d4: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x4089d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4089d8: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x4089d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4089dc: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x4089dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4089e0: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x4089e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4089e4: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x4089e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x4089e8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4089e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4089ec: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x4089ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x4089f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4089f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4089f4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x4089f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4089f8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x4089f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4089fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4089fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x408a00: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x408a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x408a04: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x408a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408a08: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x408a08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x408a0c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x408a0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x408a10: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x408a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x408a14: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x408a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408a18: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x408a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x408a1c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x408a1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x408a20: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x408a20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x408a24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x408a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408a28: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x408a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x408a2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x408a2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x408a30: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x408a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x408a34: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x408a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408a38: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x408a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x408a3c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x408a3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x408a40: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x408a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x408a44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x408a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408a48: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x408a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x408a4c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x408a4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x408a50: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x408a50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x408a54: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x408a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x408a58: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x408a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x408a5c: 0x14c0ffc2  bnez        $a2, . + 4 + (-0x3E << 2)
    ctx->pc = 0x408A5Cu;
    {
        const bool branch_taken_0x408a5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x408A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A5Cu;
        // 0x408a60: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408a5c) {
            ctx->pc = 0x408968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_408968;
        }
    }
    ctx->pc = 0x408A64u;
    // 0x408a64: 0x0  nop
    ctx->pc = 0x408a64u;
    // NOP
label_408a68:
    // 0x408a68: 0x3e00008  jr          $ra
    ctx->pc = 0x408A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A68u;
        // 0x408a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408A70u;
}
