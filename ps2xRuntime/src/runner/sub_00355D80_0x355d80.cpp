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

// Function: sub_00355D80
// Address: 0x355d80 - 0x355ea8
void sub_00355D80_0x355d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355D80_0x355d80");
#endif

    switch (ctx->pc) {
        case 0x355dacu: goto label_355dac;
        case 0x355e30u: goto label_355e30;
        default: break;
    }

    ctx->pc = 0x355d80u;

    // 0x355d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355d88: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x355d88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x355d8c: 0x8cc90028  lw          $t1, 0x28($a2)
    ctx->pc = 0x355d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x355d90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x355d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x355d94: 0x152a0007  bne         $t1, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x355D94u;
    {
        const bool branch_taken_0x355d94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x355D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D94u;
        // 0x355d98: 0x8ccb0024  lw          $t3, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d94) {
            ctx->pc = 0x355DB4u;
            goto label_355db4;
        }
    }
    ctx->pc = 0x355D9Cu;
    // 0x355d9c: 0xa90018  mult        $zero, $a1, $t1
    ctx->pc = 0x355d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x355da0: 0x3012  mflo        $a2
    ctx->pc = 0x355da0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x355da4: 0xc0d4f32  jal         func_353CC8
    ctx->pc = 0x355DA4u;
    SET_GPR_U32(ctx, 31, 0x355DACu);
    ctx->pc = 0x355DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DA4u;
    // 0x355da8: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353CC8u, 0x355DA4u, 0x355DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DACu;
label_355dac:
    // 0x355dac: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x355DACu;
    {
        const bool branch_taken_0x355dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DACu;
        // 0x355db0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355dac) {
            ctx->pc = 0x355E9Cu;
            goto label_355e9c;
        }
    }
    ctx->pc = 0x355DB4u;
label_355db4:
    // 0x355db4: 0x18a00038  blez        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x355DB4u;
    {
        const bool branch_taken_0x355db4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x355DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DB4u;
        // 0x355db8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355db4) {
            ctx->pc = 0x355E98u;
            goto label_355e98;
        }
    }
    ctx->pc = 0x355DBCu;
    // 0x355dbc: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x355dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355dc0: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x355dc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x355dc4: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x355DC4u;
    {
        const bool branch_taken_0x355dc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x355DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DC4u;
        // 0x355dc8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355dc4) {
            ctx->pc = 0x355E30u;
            goto label_355e30;
        }
    }
    ctx->pc = 0x355DCCu;
    // 0x355dcc: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x355dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x355dd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x355DD0u;
    {
        const bool branch_taken_0x355dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355DD0u;
        // 0x355dd4: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355dd0) {
            ctx->pc = 0x355E18u;
            goto label_355e18;
        }
    }
    ctx->pc = 0x355DD8u;
    // 0x355dd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x355DD8u;
    {
        const bool branch_taken_0x355dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355dd8) {
            ctx->pc = 0x355DFCu;
            goto label_355dfc;
        }
    }
    ctx->pc = 0x355DE0u;
    // 0x355de0: 0x89620003  lwl         $v0, 0x3($t3)
    ctx->pc = 0x355de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355de4: 0x99620000  lwr         $v0, 0x0($t3)
    ctx->pc = 0x355de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355de8: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x355de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355dec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355df0: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x355df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355df4: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x355df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x355df8: 0x1693821  addu        $a3, $t3, $t1
    ctx->pc = 0x355df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_355dfc:
    // 0x355dfc: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x355dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x355e00: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x355e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x355e04: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x355e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355e0c: 0xb8680000  swr         $t0, 0x0($v1)
    ctx->pc = 0x355e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e10: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355e14: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x355e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_355e18:
    // 0x355e18: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x355e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x355e1c: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x355e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x355e20: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x355e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x355E24u;
    {
        const bool branch_taken_0x355e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E24u;
        // 0x355e28: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e24) {
            ctx->pc = 0x355E88u;
            goto label_355e88;
        }
    }
    ctx->pc = 0x355E2Cu;
    // 0x355e2c: 0x0  nop
    ctx->pc = 0x355e2cu;
    // NOP
label_355e30:
    // 0x355e30: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x355e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x355e34: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x355e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x355e38: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x355e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e3c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x355e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x355e40: 0xb8680000  swr         $t0, 0x0($v1)
    ctx->pc = 0x355e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e44: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355e48: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x355e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x355e4c: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x355e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x355e50: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x355e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x355e54: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x355e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e58: 0xb8680000  swr         $t0, 0x0($v1)
    ctx->pc = 0x355e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e5c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355e60: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x355e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x355e64: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x355e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x355e68: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x355e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x355e6c: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x355e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e70: 0xb8680000  swr         $t0, 0x0($v1)
    ctx->pc = 0x355e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e74: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355e78: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x355e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x355e7c: 0x88e80003  lwl         $t0, 0x3($a3)
    ctx->pc = 0x355e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x355e80: 0x98e80000  lwr         $t0, 0x0($a3)
    ctx->pc = 0x355e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x355e84: 0xa8680003  swl         $t0, 0x3($v1)
    ctx->pc = 0x355e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_355e88:
    // 0x355e88: 0xb8680000  swr         $t0, 0x0($v1)
    ctx->pc = 0x355e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355e8c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x355e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x355e90: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x355E90u;
    {
        const bool branch_taken_0x355e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x355E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E90u;
        // 0x355e94: 0xe93821  addu        $a3, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e90) {
            ctx->pc = 0x355E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355e30;
        }
    }
    ctx->pc = 0x355E98u;
label_355e98:
    // 0x355e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_355e9c:
    // 0x355e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x355E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E9Cu;
        // 0x355ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355EA4u;
    // 0x355ea4: 0x0  nop
    ctx->pc = 0x355ea4u;
    // NOP
    ctx->pc = 0x355ea8u;
}
