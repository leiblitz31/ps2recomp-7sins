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

// Function: sub_0033F8D0
// Address: 0x33f8d0 - 0x33f970
void sub_0033F8D0_0x33f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F8D0_0x33f8d0");
#endif

    switch (ctx->pc) {
        case 0x33f900u: goto label_33f900;
        case 0x33f918u: goto label_33f918;
        default: break;
    }

    ctx->pc = 0x33f8d0u;

    // 0x33f8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f8d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33f8d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f8dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33f8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33f8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f8e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33f8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f8ec: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f8f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33f8f4: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x33f8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x33f8f8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F8F8u;
    SET_GPR_U32(ctx, 31, 0x33F900u);
    ctx->pc = 0x33F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F8F8u;
    // 0x33f8fc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F8F8u, 0x33F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F900u;
label_33f900:
    // 0x33f900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33f900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f904: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f908: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33f90c: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x33f90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x33f910: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F910u;
    SET_GPR_U32(ctx, 31, 0x33F918u);
    ctx->pc = 0x33F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F910u;
    // 0x33f914: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F910u, 0x33F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F918u;
label_33f918:
    // 0x33f918: 0x622000f  bltzl       $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x33F918u;
    {
        const bool branch_taken_0x33f918 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x33f918) {
            ctx->pc = 0x33F91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F918u;
            // 0x33f91c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F958u;
            goto label_33f958;
        }
    }
    ctx->pc = 0x33F920u;
    // 0x33f920: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33F920u;
    {
        const bool branch_taken_0x33f920 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F920u;
        // 0x33f924: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f920) {
            ctx->pc = 0x33F954u;
            goto label_33f954;
        }
    }
    ctx->pc = 0x33F928u;
    // 0x33f928: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33f92c: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x33f92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x33f930: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x33f930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x33f934: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x33f934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x33f938: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x33f938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x33f93c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x33f93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33f940: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x33f940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33f944: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x33f944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33f948: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x33f948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33f94c: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x33f94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33f950: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x33f950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_33f954:
    // 0x33f954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33f954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f958:
    // 0x33f958: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33f958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f95c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33f95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f960: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33f960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f968: 0x3e00008  jr          $ra
    ctx->pc = 0x33F968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F968u;
        // 0x33f96c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F970u;
}
