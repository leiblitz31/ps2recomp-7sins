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

// Function: sub_003024B0
// Address: 0x3024b0 - 0x302868
void sub_003024B0_0x3024b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003024B0_0x3024b0");
#endif

    switch (ctx->pc) {
        case 0x30254cu: goto label_30254c;
        case 0x3025a0u: goto label_3025a0;
        case 0x3025f0u: goto label_3025f0;
        case 0x302658u: goto label_302658;
        case 0x3026b4u: goto label_3026b4;
        case 0x3027e0u: goto label_3027e0;
        case 0x30281cu: goto label_30281c;
        case 0x302854u: goto label_302854;
        default: break;
    }

    ctx->pc = 0x3024b0u;

    // 0x3024b0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3024b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3024b4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3024b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3024b8: 0x8c430c20  lw          $v1, 0xC20($v0)
    ctx->pc = 0x3024b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0C20u));
    // 0x3024bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3024bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3024c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3024c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3024C4u;
    {
        const bool branch_taken_0x3024c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3024C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024C4u;
        // 0x3024c8: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024c4) {
            ctx->pc = 0x3024D0u;
            goto label_3024d0;
        }
    }
    ctx->pc = 0x3024CCu;
    // 0x3024cc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3024ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3024d0:
    // 0x3024d0: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x3024d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x3024d4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3024d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3024d8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3024d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3024dc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3024dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x3024e0: 0xac450c18  sw          $a1, 0xC18($v0)
    ctx->pc = 0x3024e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3096), GPR_U32(ctx, 5));
    // 0x3024e4: 0x24841fc0  addiu       $a0, $a0, 0x1FC0
    ctx->pc = 0x3024e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8128));
    // 0x3024e8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3024e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3024ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3024ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3024f0: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x3024f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3024f4: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3024f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3024f8: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3024f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3024fc: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x3024fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302500: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x302500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302504: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x302504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x302508: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x302508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x30250c: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x30250cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302510: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x302510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302514: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x302514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x302518: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x302518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x30251c: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x30251cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302520: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x302520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302524: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x302524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x302528: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x302528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x30252c: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x30252cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302530: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x302530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302534: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x302534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302538: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x302538u;
    {
        const bool branch_taken_0x302538 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302538u;
        // 0x30253c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302538) {
            ctx->pc = 0x30254Cu;
            goto label_30254c;
        }
    }
    ctx->pc = 0x302540u;
    // 0x302540: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x302540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x302544: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x302544u;
    SET_GPR_U32(ctx, 31, 0x30254Cu);
    ctx->pc = 0x302548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302544u;
    // 0x302548: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x302544u, 0x30254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30254Cu;
label_30254c:
    // 0x30254c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x302550: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x302550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x302554: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x302554u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x302558: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x302558u;
    {
        const bool branch_taken_0x302558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302558u;
        // 0x30255c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302558) {
            ctx->pc = 0x3027E0u;
            goto label_3027e0;
        }
    }
    ctx->pc = 0x302560u;
    // 0x302560: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x302560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x302564: 0x2442aa40  addiu       $v0, $v0, -0x55C0
    ctx->pc = 0x302564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x302568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x302568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30256c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302570: 0x800008  jr          $a0
    ctx->pc = 0x302570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302578u: goto label_302578;
            case 0x302620u: goto label_302620;
            case 0x3026FCu: goto label_3026fc;
            case 0x302798u: goto label_302798;
            case 0x3027E0u: goto label_3027e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302570u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x302578u;
label_302578:
    // 0x302578: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x302578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x30257c: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30257Cu;
    {
        const bool branch_taken_0x30257c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x302580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30257Cu;
        // 0x302580: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30257c) {
            ctx->pc = 0x3025C8u;
            goto label_3025c8;
        }
    }
    ctx->pc = 0x302584u;
    // 0x302584: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x302584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x302588: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x302588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30258c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30258cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302590: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x302590u;
    {
        const bool branch_taken_0x302590 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x302594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302590u;
        // 0x302594: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302590) {
            ctx->pc = 0x3025C8u;
            goto label_3025c8;
        }
    }
    ctx->pc = 0x302598u;
    // 0x302598: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x302598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x30259c: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x30259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_3025a0:
    // 0x3025a0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3025a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3025a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3025a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3025a8: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3025a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3025ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3025acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3025b0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3025b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3025b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3025b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3025b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3025b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3025bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3025bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3025c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3025C0u;
    {
        const bool branch_taken_0x3025c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3025C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025C0u;
        // 0x3025c4: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025c0) {
            ctx->pc = 0x3025A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3025a0;
        }
    }
    ctx->pc = 0x3025C8u;
label_3025c8:
    // 0x3025c8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3025c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3025cc: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x3025CCu;
    {
        const bool branch_taken_0x3025cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3025D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025CCu;
        // 0x3025d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025cc) {
            ctx->pc = 0x3027E0u;
            goto label_3027e0;
        }
    }
    ctx->pc = 0x3025D4u;
    // 0x3025d4: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x3025d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3025d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3025d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025dc: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x3025DCu;
    {
        const bool branch_taken_0x3025dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3025E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025DCu;
        // 0x3025e0: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025dc) {
            ctx->pc = 0x3027E0u;
            goto label_3027e0;
        }
    }
    ctx->pc = 0x3025E4u;
    // 0x3025e4: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x3025e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x3025e8: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3025ec: 0x0  nop
    ctx->pc = 0x3025ecu;
    // NOP
label_3025f0:
    // 0x3025f0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3025f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3025f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3025f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3025f8: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x3025f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3025fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3025fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x302600: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x302600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x302604: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x302604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x302608: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x302608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30260c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x30260cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x302610: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x302610u;
    {
        const bool branch_taken_0x302610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302610u;
        // 0x302614: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302610) {
            ctx->pc = 0x3025F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3025f0;
        }
    }
    ctx->pc = 0x302618u;
    // 0x302618: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x302618u;
    {
        const bool branch_taken_0x302618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302618u;
        // 0x30261c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302618) {
            ctx->pc = 0x3027E4u;
            goto label_3027e4;
        }
    }
    ctx->pc = 0x302620u;
label_302620:
    // 0x302620: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x302620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x302624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x302624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302628: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x302628u;
    {
        const bool branch_taken_0x302628 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302628u;
        // 0x30262c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302628) {
            ctx->pc = 0x3027E4u;
            goto label_3027e4;
        }
    }
    ctx->pc = 0x302630u;
    // 0x302630: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x302630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x302634: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x302634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x302638: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x302638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x30263c: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x30263cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302640: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x302640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x302644: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x302644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302648: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x302648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30264c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x30264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x302650: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x302650u;
    {
        const bool branch_taken_0x302650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302650u;
        // 0x302654: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302650) {
            ctx->pc = 0x3026B4u;
            goto label_3026b4;
        }
    }
    ctx->pc = 0x302658u;
label_302658:
    // 0x302658: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x302658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x30265c: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x30265cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x302660: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x302660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x302664: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x302664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302668: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x302668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30266c: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x30266cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x302670: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x302670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x302674: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x302674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x302678: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x302678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30267c: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x30267cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302680: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x302680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302684: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x302684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302688: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x302688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30268c: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x30268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302690: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x302690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302694: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x302694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302698: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x302698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30269c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x30269cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3026a0: 0x0  nop
    ctx->pc = 0x3026a0u;
    // NOP
    // 0x3026a4: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3026A4u;
    {
        const bool branch_taken_0x3026a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3026a4) {
            ctx->pc = 0x302658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302658;
        }
    }
    ctx->pc = 0x3026ACu;
    // 0x3026ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3026ACu;
    {
        const bool branch_taken_0x3026ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3026ac) {
            ctx->pc = 0x3026E8u;
            goto label_3026e8;
        }
    }
    ctx->pc = 0x3026B4u;
label_3026b4:
    // 0x3026b4: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x3026b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3026b8: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x3026b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3026bc: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x3026bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3026c0: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x3026c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3026c4: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x3026c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x3026c8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x3026c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x3026cc: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x3026ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x3026d0: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x3026d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x3026d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3026d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3026d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3026d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3026dc: 0x0  nop
    ctx->pc = 0x3026dcu;
    // NOP
    // 0x3026e0: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3026E0u;
    {
        const bool branch_taken_0x3026e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3026e0) {
            ctx->pc = 0x3026B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3026b4;
        }
    }
    ctx->pc = 0x3026E8u;
label_3026e8:
    // 0x3026e8: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x3026e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x3026ec: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x3026ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x3026f0: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x3026f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3026f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3026F4u;
    {
        const bool branch_taken_0x3026f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3026F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026F4u;
        // 0x3026f8: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026f4) {
            ctx->pc = 0x3027E0u;
            goto label_3027e0;
        }
    }
    ctx->pc = 0x3026FCu;
label_3026fc:
    // 0x3026fc: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x3026fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x302700: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x302700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x302704: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x302704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x302708: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x302708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x30270c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x30270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302710: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x302710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x302714: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x302714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302718: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x302718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x30271c: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x30271cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x302720: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x302720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x302724: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x302724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x302728: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x302728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30272c: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x30272cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x302730: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x302730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302734: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x302734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302738: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x302738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30273c: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x30273cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302740: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x302740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302744: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x302744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302748: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x302748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30274c: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x30274cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302750: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x302750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x302754: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x302754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302758: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x302758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x30275c: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x30275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x302760: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x302760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x302764: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x302764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x302768: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x302768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30276c: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x30276cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x302770: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x302770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302774: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x302774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302778: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x302778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30277c: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x30277cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302780: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x302780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302784: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x302784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302788: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x302788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30278c: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x30278cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302790: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x302790u;
    {
        const bool branch_taken_0x302790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302790u;
        // 0x302794: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302790) {
            ctx->pc = 0x3027E4u;
            goto label_3027e4;
        }
    }
    ctx->pc = 0x302798u;
label_302798:
    // 0x302798: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x302798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x30279c: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x30279cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3027a0: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x3027a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3027a4: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x3027a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3027a8: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x3027a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3027ac: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x3027acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3027b0: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x3027b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3027b4: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x3027b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3027b8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3027bc: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x3027bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x3027c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3027C0u;
    {
        const bool branch_taken_0x3027c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3027C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027C0u;
        // 0x3027c4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027c0) {
            ctx->pc = 0x3027D8u;
            goto label_3027d8;
        }
    }
    ctx->pc = 0x3027C8u;
    // 0x3027c8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3027cc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3027ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3027d0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3027d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3027d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3027d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3027d8:
    // 0x3027d8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3027D8u;
    SET_GPR_U32(ctx, 31, 0x3027E0u);
    ctx->pc = 0x3027DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027D8u;
    // 0x3027dc: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3027D8u, 0x3027E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027E0u;
label_3027e0:
    // 0x3027e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3027e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3027e4:
    // 0x3027e4: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3027E4u;
    {
        const bool branch_taken_0x3027e4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027E4u;
        // 0x3027e8: 0x3c07004f  lui         $a3, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027e4) {
            ctx->pc = 0x30284Cu;
            goto label_30284c;
        }
    }
    ctx->pc = 0x3027ECu;
    // 0x3027ec: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3027ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x3027f0: 0x8ce30b98  lw          $v1, 0xB98($a3)
    ctx->pc = 0x3027f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2968)));
    // 0x3027f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3027f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3027f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3027fc: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3027FCu;
    {
        const bool branch_taken_0x3027fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x302800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027FCu;
        // 0x302800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027fc) {
            ctx->pc = 0x302818u;
            goto label_302818;
        }
    }
    ctx->pc = 0x302804u;
    // 0x302804: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x302804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302808: 0xace20b98  sw          $v0, 0xB98($a3)
    ctx->pc = 0x302808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2968), GPR_U32(ctx, 2));
    // 0x30280c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30280Cu;
    {
        const bool branch_taken_0x30280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30280Cu;
        // 0x302810: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30280c) {
            ctx->pc = 0x302858u;
            goto label_302858;
        }
    }
    ctx->pc = 0x302814u;
    // 0x302814: 0x0  nop
    ctx->pc = 0x302814u;
    // NOP
label_302818:
    // 0x302818: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x302818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30281c:
    // 0x30281c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x30281cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x302820: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x302820u;
    {
        const bool branch_taken_0x302820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302820u;
        // 0x302824: 0x24e20b98  addiu       $v0, $a3, 0xB98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302820) {
            ctx->pc = 0x302854u;
            goto label_302854;
        }
    }
    ctx->pc = 0x302828u;
    // 0x302828: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x302828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30282c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x302830: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x302830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x302834: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x302834u;
    {
        const bool branch_taken_0x302834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x302838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302834u;
        // 0x302838: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302834) {
            ctx->pc = 0x30281Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30281c;
        }
    }
    ctx->pc = 0x30283Cu;
    // 0x30283c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302840: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x302840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x302844: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302844u;
    {
        const bool branch_taken_0x302844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302844u;
        // 0x302848: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302844) {
            ctx->pc = 0x302858u;
            goto label_302858;
        }
    }
    ctx->pc = 0x30284Cu;
label_30284c:
    // 0x30284c: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x30284Cu;
    SET_GPR_U32(ctx, 31, 0x302854u);
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x30284Cu, 0x302854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302854u;
label_302854:
    // 0x302854: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x302854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_302858:
    // 0x302858: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x302858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30285c: 0x3e00008  jr          $ra
    ctx->pc = 0x30285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30285Cu;
        // 0x302860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302864u;
    // 0x302864: 0x0  nop
    ctx->pc = 0x302864u;
    // NOP
    ctx->pc = 0x302868u;
}
