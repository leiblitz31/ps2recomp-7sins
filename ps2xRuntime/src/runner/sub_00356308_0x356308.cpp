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

// Function: sub_00356308
// Address: 0x356308 - 0x356430
void sub_00356308_0x356308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356308_0x356308");
#endif

    switch (ctx->pc) {
        case 0x356334u: goto label_356334;
        case 0x3563b8u: goto label_3563b8;
        default: break;
    }

    ctx->pc = 0x356308u;

    // 0x356308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35630c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356310: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x356310u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x356314: 0x8cc90020  lw          $t1, 0x20($a2)
    ctx->pc = 0x356314u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x356318: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35631c: 0x152a0007  bne         $t1, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x35631Cu;
    {
        const bool branch_taken_0x35631c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x356320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35631Cu;
        // 0x356320: 0x8ccb001c  lw          $t3, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35631c) {
            ctx->pc = 0x35633Cu;
            goto label_35633c;
        }
    }
    ctx->pc = 0x356324u;
    // 0x356324: 0xa90018  mult        $zero, $a1, $t1
    ctx->pc = 0x356324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x356328: 0x3012  mflo        $a2
    ctx->pc = 0x356328u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x35632c: 0xc0d4f32  jal         func_353CC8
    ctx->pc = 0x35632Cu;
    SET_GPR_U32(ctx, 31, 0x356334u);
    ctx->pc = 0x356330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35632Cu;
    // 0x356330: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353CC8u, 0x35632Cu, 0x356334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356334u;
label_356334:
    // 0x356334: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x356334u;
    {
        const bool branch_taken_0x356334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356334u;
        // 0x356338: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356334) {
            ctx->pc = 0x356424u;
            goto label_356424;
        }
    }
    ctx->pc = 0x35633Cu;
label_35633c:
    // 0x35633c: 0x18a00038  blez        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x35633Cu;
    {
        const bool branch_taken_0x35633c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x356340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35633Cu;
        // 0x356340: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35633c) {
            ctx->pc = 0x356420u;
            goto label_356420;
        }
    }
    ctx->pc = 0x356344u;
    // 0x356344: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x356344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356348: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x356348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35634c: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35634Cu;
    {
        const bool branch_taken_0x35634c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x356350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35634Cu;
        // 0x356350: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35634c) {
            ctx->pc = 0x3563B8u;
            goto label_3563b8;
        }
    }
    ctx->pc = 0x356354u;
    // 0x356354: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x356354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x356358: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x356358u;
    {
        const bool branch_taken_0x356358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356358u;
        // 0x35635c: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356358) {
            ctx->pc = 0x3563A0u;
            goto label_3563a0;
        }
    }
    ctx->pc = 0x356360u;
    // 0x356360: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356360u;
    {
        const bool branch_taken_0x356360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356360) {
            ctx->pc = 0x356384u;
            goto label_356384;
        }
    }
    ctx->pc = 0x356368u;
    // 0x356368: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x356368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35636c: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x35636cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356370: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x356370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356374: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x356374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x356378: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x356378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35637c: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x35637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x356380: 0x1693821  addu        $a3, $t3, $t1
    ctx->pc = 0x356380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_356384:
    // 0x356384: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x356384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x356388: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x356388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35638c: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x35638cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356390: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x356390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x356394: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x356394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356398: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x356398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x35639c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x35639cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_3563a0:
    // 0x3563a0: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x3563a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3563a4: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x3563a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3563a8: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x3563a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3563ACu;
    {
        const bool branch_taken_0x3563ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3563B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563ACu;
        // 0x3563b0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3563ac) {
            ctx->pc = 0x356410u;
            goto label_356410;
        }
    }
    ctx->pc = 0x3563B4u;
    // 0x3563b4: 0x0  nop
    ctx->pc = 0x3563b4u;
    // NOP
label_3563b8:
    // 0x3563b8: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x3563b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3563bc: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x3563bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3563c0: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x3563c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563c4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3563c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3563c8: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x3563c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563cc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3563ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3563d0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x3563d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3563d4: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x3563d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3563d8: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x3563d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3563dc: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x3563dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563e0: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x3563e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563e4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3563e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3563e8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x3563e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3563ec: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x3563ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3563f0: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x3563f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3563f4: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x3563f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563f8: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x3563f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3563fc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3563fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x356400: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x356400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x356404: 0x68e80007  ldl         $t0, 0x7($a3)
    ctx->pc = 0x356404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x356408: 0x6ce80000  ldr         $t0, 0x0($a3)
    ctx->pc = 0x356408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35640c: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x35640cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356410:
    // 0x356410: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x356410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356414: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x356414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x356418: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x356418u;
    {
        const bool branch_taken_0x356418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356418u;
        // 0x35641c: 0xe93821  addu        $a3, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356418) {
            ctx->pc = 0x3563B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3563b8;
        }
    }
    ctx->pc = 0x356420u;
label_356420:
    // 0x356420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_356424:
    // 0x356424: 0x3e00008  jr          $ra
    ctx->pc = 0x356424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356424u;
        // 0x356428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35642Cu;
    // 0x35642c: 0x0  nop
    ctx->pc = 0x35642cu;
    // NOP
    ctx->pc = 0x356430u;
}
