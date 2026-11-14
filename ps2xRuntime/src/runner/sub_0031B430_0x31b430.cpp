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

// Function: sub_0031B430
// Address: 0x31b430 - 0x31b570
void sub_0031B430_0x31b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B430_0x31b430");
#endif

    switch (ctx->pc) {
        case 0x31b45cu: goto label_31b45c;
        case 0x31b4d0u: goto label_31b4d0;
        case 0x31b504u: goto label_31b504;
        case 0x31b514u: goto label_31b514;
        case 0x31b550u: goto label_31b550;
        default: break;
    }

    ctx->pc = 0x31b430u;

    // 0x31b430: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31b434: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31b434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31b438: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x31b43c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b440: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31b440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31b444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31b444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31b44c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31b44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b450: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b454: 0xc107928  jal         func_41E4A0
    ctx->pc = 0x31B454u;
    SET_GPR_U32(ctx, 31, 0x31B45Cu);
    ctx->pc = 0x31B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B454u;
    // 0x31b458: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E4A0u, 0x31B454u, 0x31B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B45Cu;
label_31b45c:
    // 0x31b45c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x31b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31b460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31b464: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x31b464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31b468: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x31B468u;
    {
        const bool branch_taken_0x31b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B468u;
        // 0x31b46c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b468) {
            ctx->pc = 0x31B550u;
            goto label_31b550;
        }
    }
    ctx->pc = 0x31B470u;
    // 0x31b470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31b470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31b474: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x31b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
    // 0x31b478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31b478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31b47c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b480: 0x800008  jr          $a0
    ctx->pc = 0x31B480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31B488u: goto label_31b488;
            case 0x31B4BCu: goto label_31b4bc;
            case 0x31B4D8u: goto label_31b4d8;
            case 0x31B4F0u: goto label_31b4f0;
            case 0x31B50Cu: goto label_31b50c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31B488u;
label_31b488:
    // 0x31b488: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x31b488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31b48c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x31b48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31b490: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31b494: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x31b494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b498: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x31b498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b49c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31b49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x31b4a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4a8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4ac: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x31b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x31b4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x31B4B4u;
    {
        const bool branch_taken_0x31b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4B4u;
        // 0x31b4b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4b4) {
            ctx->pc = 0x31B548u;
            goto label_31b548;
        }
    }
    ctx->pc = 0x31B4BCu;
label_31b4bc:
    // 0x31b4bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31b4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4c8: 0xc0c56b0  jal         func_315AC0
    ctx->pc = 0x31B4C8u;
    SET_GPR_U32(ctx, 31, 0x31B4D0u);
    ctx->pc = 0x31B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4C8u;
    // 0x31b4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315AC0u, 0x31B4C8u, 0x31B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B4D0u;
label_31b4d0:
    // 0x31b4d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31B4D0u;
    {
        const bool branch_taken_0x31b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4D0u;
        // 0x31b4d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4d0) {
            ctx->pc = 0x31B554u;
            goto label_31b554;
        }
    }
    ctx->pc = 0x31B4D8u;
label_31b4d8:
    // 0x31b4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b4dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4e0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b4e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31B4E8u;
    {
        const bool branch_taken_0x31b4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4E8u;
        // 0x31b4ec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b4e8) {
            ctx->pc = 0x31B548u;
            goto label_31b548;
        }
    }
    ctx->pc = 0x31B4F0u;
label_31b4f0:
    // 0x31b4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31b4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4fc: 0xc0c5802  jal         func_316008
    ctx->pc = 0x31B4FCu;
    SET_GPR_U32(ctx, 31, 0x31B504u);
    ctx->pc = 0x31B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B4FCu;
    // 0x31b500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316008u, 0x31B4FCu, 0x31B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B504u;
label_31b504:
    // 0x31b504: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31B504u;
    {
        const bool branch_taken_0x31b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B504u;
        // 0x31b508: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b504) {
            ctx->pc = 0x31B554u;
            goto label_31b554;
        }
    }
    ctx->pc = 0x31B50Cu;
label_31b50c:
    // 0x31b50c: 0xc0e2048  jal         func_388120
    ctx->pc = 0x31B50Cu;
    SET_GPR_U32(ctx, 31, 0x31B514u);
    ctx->pc = 0x31B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B50Cu;
    // 0x31b510: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x31B50Cu, 0x31B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B514u;
label_31b514:
    // 0x31b514: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x31b514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x31b518: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x31b518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x31b51c: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x31b51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x31b520: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x31b520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x31b524: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x31b524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b528: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x31b528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b52c: 0xb3aa001f  sdl         $t2, 0x1F($sp)
    ctx->pc = 0x31b52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b530: 0xb7aa0018  sdr         $t2, 0x18($sp)
    ctx->pc = 0x31b530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b534: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31b534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b538: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31b538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b53c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x31b53cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b544: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31b544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31b548:
    // 0x31b548: 0xc0c58b2  jal         func_3162C8
    ctx->pc = 0x31B548u;
    SET_GPR_U32(ctx, 31, 0x31B550u);
    ctx->pc = 0x3162C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3162C8u, 0x31B548u, 0x31B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B550u;
label_31b550:
    // 0x31b550: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31b550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b554:
    // 0x31b554: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31b554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31b558: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31b558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31b55c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31b55cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31b560: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31b560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b568: 0x3e00008  jr          $ra
    ctx->pc = 0x31B568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B568u;
        // 0x31b56c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B570u;
}
