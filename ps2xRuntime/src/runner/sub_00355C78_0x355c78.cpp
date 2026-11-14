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

// Function: sub_00355C78
// Address: 0x355c78 - 0x355d80
void sub_00355C78_0x355c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355C78_0x355c78");
#endif

    switch (ctx->pc) {
        case 0x355c9cu: goto label_355c9c;
        case 0x355d18u: goto label_355d18;
        default: break;
    }

    ctx->pc = 0x355c78u;

    // 0x355c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x355c7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x355c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355c84: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x355c84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x355c88: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x355C88u;
    {
        const bool branch_taken_0x355c88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x355C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C88u;
        // 0x355c8c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c88) {
            ctx->pc = 0x355CA4u;
            goto label_355ca4;
        }
    }
    ctx->pc = 0x355C90u;
    // 0x355c90: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x355c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x355c94: 0xc0d498a  jal         func_352628
    ctx->pc = 0x355C94u;
    SET_GPR_U32(ctx, 31, 0x355C9Cu);
    ctx->pc = 0x355C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C94u;
    // 0x355c98: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352628u, 0x355C94u, 0x355C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C9Cu;
label_355c9c:
    // 0x355c9c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x355C9Cu;
    {
        const bool branch_taken_0x355c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C9Cu;
        // 0x355ca0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c9c) {
            ctx->pc = 0x355D74u;
            goto label_355d74;
        }
    }
    ctx->pc = 0x355CA4u;
label_355ca4:
    // 0x355ca4: 0x18a00032  blez        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x355CA4u;
    {
        const bool branch_taken_0x355ca4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x355CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CA4u;
        // 0x355ca8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ca4) {
            ctx->pc = 0x355D70u;
            goto label_355d70;
        }
    }
    ctx->pc = 0x355CACu;
    // 0x355cac: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x355cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x355cb0: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x355CB0u;
    {
        const bool branch_taken_0x355cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x355CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CB0u;
        // 0x355cb4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cb0) {
            ctx->pc = 0x355D18u;
            goto label_355d18;
        }
    }
    ctx->pc = 0x355CB8u;
    // 0x355cb8: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x355cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x355cbc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x355CBCu;
    {
        const bool branch_taken_0x355cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355CBCu;
        // 0x355cc0: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355cbc) {
            ctx->pc = 0x355CFCu;
            goto label_355cfc;
        }
    }
    ctx->pc = 0x355CC4u;
    // 0x355cc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x355CC4u;
    {
        const bool branch_taken_0x355cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355cc4) {
            ctx->pc = 0x355CE4u;
            goto label_355ce4;
        }
    }
    ctx->pc = 0x355CCCu;
    // 0x355ccc: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355cd0: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355cd4: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x355cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355cd8: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x355cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355cdc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355ce0: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x355ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_355ce4:
    // 0x355ce4: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355ce8: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355cec: 0xa8620003  swl         $v0, 0x3($v1)
    ctx->pc = 0x355cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355cf0: 0xb8620000  swr         $v0, 0x0($v1)
    ctx->pc = 0x355cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355cf4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355cf8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x355cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_355cfc:
    // 0x355cfc: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355d00: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355d04: 0xa8620003  swl         $v0, 0x3($v1)
    ctx->pc = 0x355d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d08: 0xb8620000  swr         $v0, 0x0($v1)
    ctx->pc = 0x355d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x355d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355d10: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x355D10u;
    {
        const bool branch_taken_0x355d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x355D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D10u;
        // 0x355d14: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d10) {
            ctx->pc = 0x355D70u;
            goto label_355d70;
        }
    }
    ctx->pc = 0x355D18u;
label_355d18:
    // 0x355d18: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355d1c: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355d20: 0xa8620003  swl         $v0, 0x3($v1)
    ctx->pc = 0x355d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d24: 0xb8620000  swr         $v0, 0x0($v1)
    ctx->pc = 0x355d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d28: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x355d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x355d2c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x355d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x355d30: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355d34: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355d38: 0xa8620003  swl         $v0, 0x3($v1)
    ctx->pc = 0x355d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d3c: 0xb8620000  swr         $v0, 0x0($v1)
    ctx->pc = 0x355d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d40: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x355d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x355d44: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355d48: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355d4c: 0xa8620003  swl         $v0, 0x3($v1)
    ctx->pc = 0x355d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d50: 0xb8620000  swr         $v0, 0x0($v1)
    ctx->pc = 0x355d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d54: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x355d58: 0x88c2007f  lwl         $v0, 0x7F($a2)
    ctx->pc = 0x355d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355d5c: 0x98c2007c  lwr         $v0, 0x7C($a2)
    ctx->pc = 0x355d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355d60: 0xa8620003  swl         $v0, 0x3($v1)
    ctx->pc = 0x355d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d64: 0xb8620000  swr         $v0, 0x0($v1)
    ctx->pc = 0x355d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355d68: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x355D68u;
    {
        const bool branch_taken_0x355d68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x355D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D68u;
        // 0x355d6c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355d68) {
            ctx->pc = 0x355D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355d18;
        }
    }
    ctx->pc = 0x355D70u;
label_355d70:
    // 0x355d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_355d74:
    // 0x355d74: 0x3e00008  jr          $ra
    ctx->pc = 0x355D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355D74u;
        // 0x355d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355D7Cu;
    // 0x355d7c: 0x0  nop
    ctx->pc = 0x355d7cu;
    // NOP
    ctx->pc = 0x355d80u;
}
