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

// Function: sub_0033C530
// Address: 0x33c530 - 0x33c5d8
void sub_0033C530_0x33c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C530_0x33c530");
#endif

    switch (ctx->pc) {
        case 0x33c560u: goto label_33c560;
        case 0x33c578u: goto label_33c578;
        default: break;
    }

    ctx->pc = 0x33c530u;

    // 0x33c530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33c534: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33c534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33c538: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33c53c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33c53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33c544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33c548: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33c548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c54c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33c550: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33c554: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33c554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33c558: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33C558u;
    SET_GPR_U32(ctx, 31, 0x33C560u);
    ctx->pc = 0x33C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C558u;
    // 0x33c55c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33C558u, 0x33C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C560u;
label_33c560:
    // 0x33c560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33c560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c564: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33c564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33c568: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33c56c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x33c56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x33c570: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33C570u;
    SET_GPR_U32(ctx, 31, 0x33C578u);
    ctx->pc = 0x33C574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C570u;
    // 0x33c574: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33C570u, 0x33C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C578u;
label_33c578:
    // 0x33c578: 0x6220010  bltzl       $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33C578u;
    {
        const bool branch_taken_0x33c578 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x33c578) {
            ctx->pc = 0x33C57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C578u;
            // 0x33c57c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C5BCu;
            goto label_33c5bc;
        }
    }
    ctx->pc = 0x33C580u;
    // 0x33c580: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33C580u;
    {
        const bool branch_taken_0x33c580 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C580u;
        // 0x33c584: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c580) {
            ctx->pc = 0x33C5B8u;
            goto label_33c5b8;
        }
    }
    ctx->pc = 0x33C588u;
    // 0x33c588: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x33c588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x33c58c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x33c58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x33c590: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x33c590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x33c594: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x33c594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x33c598: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x33c598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x33c59c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x33c59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33c5a0: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x33c5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c5a4: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x33c5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c5a8: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x33c5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c5ac: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x33c5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c5b0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x33c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x33c5b4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x33c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_33c5b8:
    // 0x33c5b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c5bc:
    // 0x33c5bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33c5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c5c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33c5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c5c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33c5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x33C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5CCu;
        // 0x33c5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C5D4u;
    // 0x33c5d4: 0x0  nop
    ctx->pc = 0x33c5d4u;
    // NOP
    ctx->pc = 0x33c5d8u;
}
