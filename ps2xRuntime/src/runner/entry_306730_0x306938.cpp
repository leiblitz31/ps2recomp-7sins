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

// Function: entry_306730
// Address: 0x306730 - 0x306938
void entry_306730_0x306938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_306730_0x306938");
#endif

    switch (ctx->pc) {
        case 0x306768u: goto label_306768;
        case 0x306778u: goto label_306778;
        case 0x3067c4u: goto label_3067c4;
        case 0x306828u: goto label_306828;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068f4u: goto label_3068f4;
        default: break;
    }

    ctx->pc = 0x306730u;

    // 0x306730: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x306730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x306734: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x306734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x306738: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x306738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x30673c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x30673cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306740: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x306740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x306744: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x306744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306748: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x306748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30674c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30674cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306750: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x306750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x306754: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x306754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306758: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x306758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x30675c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x30675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x306760: 0xc0c18d8  jal         func_306360
    ctx->pc = 0x306760u;
    SET_GPR_U32(ctx, 31, 0x306768u);
    ctx->pc = 0x306764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306760u;
    // 0x306764: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306360u, 0x306760u, 0x306768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306768u;
label_306768:
    // 0x306768: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x306768u;
    {
        const bool branch_taken_0x306768 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306768u;
        // 0x30676c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306768) {
            ctx->pc = 0x306910u;
            goto label_306910;
        }
    }
    ctx->pc = 0x306770u;
    // 0x306770: 0xc0c1918  jal         func_306460
    ctx->pc = 0x306770u;
    SET_GPR_U32(ctx, 31, 0x306778u);
    ctx->pc = 0x306460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306460u, 0x306770u, 0x306778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306778u;
label_306778:
    // 0x306778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306778u;
    {
        const bool branch_taken_0x306778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306778u;
        // 0x30677c: 0x3c140061  lui         $s4, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306778) {
            ctx->pc = 0x30678Cu;
            goto label_30678c;
        }
    }
    ctx->pc = 0x306780u;
    // 0x306780: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x306780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x306784: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x306784u;
    {
        const bool branch_taken_0x306784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306784u;
        // 0x306788: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306784) {
            ctx->pc = 0x306910u;
            goto label_306910;
        }
    }
    ctx->pc = 0x30678Cu;
label_30678c:
    // 0x30678c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x30678cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306790: 0x26922d00  addiu       $s2, $s4, 0x2D00
    ctx->pc = 0x306790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 11520));
    // 0x306794: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x306794u;
    {
        const bool branch_taken_0x306794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x306798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306794u;
        // 0x306798: 0xae932d00  sw          $s3, 0x2D00($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 11520), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306794) {
            ctx->pc = 0x3068C0u;
            goto label_3068c0;
        }
    }
    ctx->pc = 0x30679Cu;
    // 0x30679c: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x30679cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x3067a0: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3067A0u;
    {
        const bool branch_taken_0x3067a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067A0u;
        // 0x3067a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067a0) {
            ctx->pc = 0x3068ACu;
            goto label_3068ac;
        }
    }
    ctx->pc = 0x3067A8u;
    // 0x3067a8: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x3067a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x3067ac: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x3067acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x3067b0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3067b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3067b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3067B4u;
    {
        const bool branch_taken_0x3067b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3067B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067B4u;
        // 0x3067b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067b4) {
            ctx->pc = 0x306820u;
            goto label_306820;
        }
    }
    ctx->pc = 0x3067BCu;
    // 0x3067bc: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x3067bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3067c0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3067c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3067c4:
    // 0x3067c4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3067c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3067c8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3067c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3067cc: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x3067ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3067d0: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x3067d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3067d4: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x3067d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3067d8: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x3067d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3067dc: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x3067dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3067e0: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x3067e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3067e4: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x3067e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067e8: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x3067e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067ec: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x3067ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067f0: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x3067f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067f4: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x3067f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067f8: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x3067f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3067fc: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x3067fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306800: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x306800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306804: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x306804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x306808: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x306808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30680c: 0x0  nop
    ctx->pc = 0x30680cu;
    // NOP
    // 0x306810: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x306810u;
    {
        const bool branch_taken_0x306810 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x306810) {
            ctx->pc = 0x3067C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3067c4;
        }
    }
    ctx->pc = 0x306818u;
    // 0x306818: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x306818u;
    {
        const bool branch_taken_0x306818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306818) {
            ctx->pc = 0x30685Cu;
            goto label_30685c;
        }
    }
    ctx->pc = 0x306820u;
label_306820:
    // 0x306820: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x306820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x306824: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x306824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_306828:
    // 0x306828: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x306828u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30682c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x30682cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x306830: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x306830u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x306834: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x306834u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x306838: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x306838u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x30683c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x30683cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x306840: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x306840u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x306844: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x306844u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x306848: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x306848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x30684c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x30684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x306850: 0x0  nop
    ctx->pc = 0x306850u;
    // NOP
    // 0x306854: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x306854u;
    {
        const bool branch_taken_0x306854 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x306854) {
            ctx->pc = 0x306828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306828;
        }
    }
    ctx->pc = 0x30685Cu;
label_30685c:
    // 0x30685c: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x30685cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x306860: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x306860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x306864: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x306864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x306868: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x306868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x30686c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x30686cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x306870: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x306870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x306874: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x306874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x306878: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x306878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x30687c: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x30687cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306880: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x306880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306884: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x306884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306888: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x306888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30688c: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x30688cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306890: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x306890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x306894: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x306894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x306898: 0x26a32d00  addiu       $v1, $s5, 0x2D00
    ctx->pc = 0x306898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 11520));
    // 0x30689c: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x30689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3068a0: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x3068a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3068a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3068A4u;
    {
        const bool branch_taken_0x3068a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068A4u;
        // 0x3068a8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068a4) {
            ctx->pc = 0x3068C8u;
            goto label_3068c8;
        }
    }
    ctx->pc = 0x3068ACu;
label_3068ac:
    // 0x3068ac: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x3068acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x3068b0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3068B0u;
    SET_GPR_U32(ctx, 31, 0x3068B8u);
    ctx->pc = 0x3068B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068B0u;
    // 0x3068b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3068B0u, 0x3068B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068B8u;
label_3068b8:
    // 0x3068b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3068B8u;
    {
        const bool branch_taken_0x3068b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3068BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068B8u;
        // 0x3068bc: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3068b8) {
            ctx->pc = 0x3068C4u;
            goto label_3068c4;
        }
    }
    ctx->pc = 0x3068C0u;
label_3068c0:
    // 0x3068c0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3068c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3068c4:
    // 0x3068c4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3068c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3068c8:
    // 0x3068c8: 0x26b02d00  addiu       $s0, $s5, 0x2D00
    ctx->pc = 0x3068c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11520));
    // 0x3068cc: 0x24a42f00  addiu       $a0, $a1, 0x2F00
    ctx->pc = 0x3068ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12032));
    // 0x3068d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3068d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3068d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3068d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3068d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3068dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068e0: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x3068e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3068e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3068e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3068e8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x3068e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3068ec: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3068ECu;
    SET_GPR_U32(ctx, 31, 0x3068F4u);
    ctx->pc = 0x3068F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068ECu;
    // 0x3068f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3068ECu, 0x3068F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068F4u;
label_3068f4:
    // 0x3068f4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3068F4u;
    {
        const bool branch_taken_0x3068f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3068f4) {
            ctx->pc = 0x3068F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3068F4u;
            // 0x3068f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306908u;
            goto label_306908;
        }
    }
    ctx->pc = 0x3068FCu;
    // 0x3068fc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3068fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x306900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x306900u;
    {
        const bool branch_taken_0x306900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306900u;
        // 0x306904: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306900) {
            ctx->pc = 0x306910u;
            goto label_306910;
        }
    }
    ctx->pc = 0x306908u;
label_306908:
    // 0x306908: 0x8e822d00  lw          $v0, 0x2D00($s4)
    ctx->pc = 0x306908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11520)));
    // 0x30690c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x30690cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_306910:
    // 0x306910: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x306910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x306914: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x306914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x306918: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x306918u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30691c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x30691cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306920: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x306920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306924: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x306924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306928: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x306928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30692c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30692cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306930: 0x3e00008  jr          $ra
    ctx->pc = 0x306930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306930u;
        // 0x306934: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306938u;
}
