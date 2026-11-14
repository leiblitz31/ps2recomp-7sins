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

// Function: sub_004AF6F8
// Address: 0x4af6f8 - 0x4af8a8
void sub_004AF6F8_0x4af6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF6F8_0x4af6f8");
#endif

    switch (ctx->pc) {
        case 0x4af77cu: goto label_4af77c;
        case 0x4af7c4u: goto label_4af7c4;
        case 0x4af7ccu: goto label_4af7cc;
        case 0x4af7f0u: goto label_4af7f0;
        case 0x4af7f8u: goto label_4af7f8;
        default: break;
    }

    ctx->pc = 0x4af6f8u;

    // 0x4af6f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4af6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4af6fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4af6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4af700: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4af700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4af704: 0x2446ea40  addiu       $a2, $v0, -0x15C0
    ctx->pc = 0x4af704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x4af708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4af708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4af70c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4af70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af710: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4af710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4af714: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4af714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af71c: 0x8c831044  lw          $v1, 0x1044($a0)
    ctx->pc = 0x4af71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4164)));
    // 0x4af720: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4af720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4af724: 0xac43ea40  sw          $v1, -0x15C0($v0)
    ctx->pc = 0x4af724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA40u, _value); } while (0);
    // 0x4af728: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4af728u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EA44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EA44u, _value); } while (0);
    // 0x4af72c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x4af72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x4af730: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4af730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4af734: 0xacc30088  sw          $v1, 0x88($a2)
    ctx->pc = 0x4af734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65EAC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x65EAC8u, _value); } while (0);
    // 0x4af738: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4af738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4af73c: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AF73Cu;
    {
        const bool branch_taken_0x4af73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF73Cu;
        // 0x4af740: 0xc29025  or          $s2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af73c) {
            ctx->pc = 0x4AF784u;
            goto label_4af784;
        }
    }
    ctx->pc = 0x4AF744u;
    // 0x4af744: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x4af744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4af748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF748u;
    {
        const bool branch_taken_0x4af748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF748u;
        // 0x4af74c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af748) {
            ctx->pc = 0x4AF760u;
            goto label_4af760;
        }
    }
    ctx->pc = 0x4AF750u;
    // 0x4af750: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AF750u;
    {
        const bool branch_taken_0x4af750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4af750) {
            ctx->pc = 0x4AF754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF750u;
            // 0x4af754: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF774u;
            goto label_4af774;
        }
    }
    ctx->pc = 0x4AF758u;
    // 0x4af758: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4AF758u;
    {
        const bool branch_taken_0x4af758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF758u;
        // 0x4af75c: 0x2610ea40  addiu       $s0, $s0, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af758) {
            ctx->pc = 0x4AF7B8u;
            goto label_4af7b8;
        }
    }
    ctx->pc = 0x4AF760u;
label_4af760:
    // 0x4af760: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4af760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4af764: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AF764u;
    {
        const bool branch_taken_0x4af764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4af764) {
            ctx->pc = 0x4AF768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF764u;
            // 0x4af768: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF7B0u;
            goto label_4af7b0;
        }
    }
    ctx->pc = 0x4AF76Cu;
    // 0x4af76c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4AF76Cu;
    {
        const bool branch_taken_0x4af76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF76Cu;
        // 0x4af770: 0x2610ea40  addiu       $s0, $s0, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af76c) {
            ctx->pc = 0x4AF7B8u;
            goto label_4af7b8;
        }
    }
    ctx->pc = 0x4AF774u;
label_4af774:
    // 0x4af774: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4AF774u;
    SET_GPR_U32(ctx, 31, 0x4AF77Cu);
    ctx->pc = 0x4AF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF774u;
    // 0x4af778: 0x24c40008  addiu       $a0, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4AF774u, 0x4AF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF77Cu;
label_4af77c:
    // 0x4af77c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AF77Cu;
    {
        const bool branch_taken_0x4af77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF77Cu;
        // 0x4af780: 0x2610ea40  addiu       $s0, $s0, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af77c) {
            ctx->pc = 0x4AF7B8u;
            goto label_4af7b8;
        }
    }
    ctx->pc = 0x4AF784u;
label_4af784:
    // 0x4af784: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4af784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af788: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x4af788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4af78c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x4af78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4af790: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x4af790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4af794: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x4af794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4af798: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x4af798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af79c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x4af79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af7a0: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x4af7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af7a4: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x4af7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4af7a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AF7A8u;
    {
        const bool branch_taken_0x4af7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7A8u;
        // 0x4af7ac: 0x2610ea40  addiu       $s0, $s0, -0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af7a8) {
            ctx->pc = 0x4AF7B8u;
            goto label_4af7b8;
        }
    }
    ctx->pc = 0x4AF7B0u;
label_4af7b0:
    // 0x4af7b0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x4af7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x4af7b4: 0x2610ea40  addiu       $s0, $s0, -0x15C0
    ctx->pc = 0x4af7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961728));
label_4af7b8:
    // 0x4af7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4af7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7bc: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4AF7BCu;
    SET_GPR_U32(ctx, 31, 0x4AF7C4u);
    ctx->pc = 0x4AF7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF7BCu;
    // 0x4af7c0: 0x260500bf  addiu       $a1, $s0, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4AF7BCu, 0x4AF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7C4u;
label_4af7c4:
    // 0x4af7c4: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AF7C4u;
    SET_GPR_U32(ctx, 31, 0x4AF7CCu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AF7C4u, 0x4AF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7CCu;
label_4af7cc:
    // 0x4af7cc: 0x8f84b8e0  lw          $a0, -0x4720($gp)
    ctx->pc = 0x4af7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x4af7d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4af7d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7d4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4af7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4af7d8: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x4af7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4af7dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4af7dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4af7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4af7e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7e8: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AF7E8u;
    SET_GPR_U32(ctx, 31, 0x4AF7F0u);
    ctx->pc = 0x4AF7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF7E8u;
    // 0x4af7ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AF7E8u, 0x4AF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7F0u;
label_4af7f0:
    // 0x4af7f0: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AF7F0u;
    SET_GPR_U32(ctx, 31, 0x4AF7F8u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AF7F0u, 0x4AF7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7F8u;
label_4af7f8:
    // 0x4af7f8: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x4af7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x4af7fc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF7FCu;
    {
        const bool branch_taken_0x4af7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af7fc) {
            ctx->pc = 0x4AF800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF7FCu;
            // 0x4af800: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF814u;
            goto label_4af814;
        }
    }
    ctx->pc = 0x4AF804u;
    // 0x4af804: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x4af804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x4af808: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4af808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4af80c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4AF80Cu;
    {
        const bool branch_taken_0x4af80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF80Cu;
        // 0x4af810: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af80c) {
            ctx->pc = 0x4AF890u;
            goto label_4af890;
        }
    }
    ctx->pc = 0x4AF814u;
label_4af814:
    // 0x4af814: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4af814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af818: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4af818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4af81c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4af81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4af820: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x4af820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x4af824: 0x1464001a  bne         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4AF824u;
    {
        const bool branch_taken_0x4af824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF824u;
        // 0x4af828: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af824) {
            ctx->pc = 0x4AF890u;
            goto label_4af890;
        }
    }
    ctx->pc = 0x4AF82Cu;
    // 0x4af82c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF82Cu;
    {
        const bool branch_taken_0x4af82c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF82Cu;
        // 0x4af830: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af82c) {
            ctx->pc = 0x4AF844u;
            goto label_4af844;
        }
    }
    ctx->pc = 0x4AF834u;
    // 0x4af834: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4af834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4af838: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4af838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4af83c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AF83Cu;
    {
        const bool branch_taken_0x4af83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF83Cu;
        // 0x4af840: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af83c) {
            ctx->pc = 0x4AF85Cu;
            goto label_4af85c;
        }
    }
    ctx->pc = 0x4AF844u;
label_4af844:
    // 0x4af844: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4af844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4af848: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4af848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4af84c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4af84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4af850: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4af850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4af854: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4af854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x4af858: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x4af858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_4af85c:
    // 0x4af85c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF85Cu;
    {
        const bool branch_taken_0x4af85c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF85Cu;
        // 0x4af860: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af85c) {
            ctx->pc = 0x4AF874u;
            goto label_4af874;
        }
    }
    ctx->pc = 0x4AF864u;
    // 0x4af864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4af868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4af86c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF86Cu;
    {
        const bool branch_taken_0x4af86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af86c) {
            ctx->pc = 0x4AF888u;
            goto label_4af888;
        }
    }
    ctx->pc = 0x4AF874u;
label_4af874:
    // 0x4af874: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4af874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4af878: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4af878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4af87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4af87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4af880: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4af880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4af884: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4af884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4af888:
    // 0x4af888: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4af888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4af88c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x4af88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_4af890:
    // 0x4af890: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4af890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af894: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4af894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af898: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4af898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF8A0u;
        // 0x4af8a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF8A8u;
}
