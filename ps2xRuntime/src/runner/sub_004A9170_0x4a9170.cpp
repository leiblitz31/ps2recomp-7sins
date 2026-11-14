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

// Function: sub_004A9170
// Address: 0x4a9170 - 0x4a91f8
void sub_004A9170_0x4a9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9170_0x4a9170");
#endif

    switch (ctx->pc) {
        case 0x4a918cu: goto label_4a918c;
        case 0x4a91a4u: goto label_4a91a4;
        default: break;
    }

    ctx->pc = 0x4a9170u;

    // 0x4a9170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a9174: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a9174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a9178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a9178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a917c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a9180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9184: 0xc12a4b6  jal         func_4A92D8
    ctx->pc = 0x4A9184u;
    SET_GPR_U32(ctx, 31, 0x4A918Cu);
    ctx->pc = 0x4A9188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9184u;
    // 0x4a9188: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A92D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A92D8u, 0x4A9184u, 0x4A918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A918Cu;
label_4a918c:
    // 0x4a918c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4A918Cu;
    {
        const bool branch_taken_0x4a918c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A918Cu;
        // 0x4a9190: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a918c) {
            ctx->pc = 0x4A91E0u;
            goto label_4a91e0;
        }
    }
    ctx->pc = 0x4A9194u;
    // 0x4a9194: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a9194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a9198: 0x248488a8  addiu       $a0, $a0, -0x7758
    ctx->pc = 0x4a9198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    // 0x4a919c: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4A919Cu;
    SET_GPR_U32(ctx, 31, 0x4A91A4u);
    ctx->pc = 0x4A91A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A919Cu;
    // 0x4a91a0: 0x34a50802  ori         $a1, $a1, 0x802 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2050);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4A919Cu, 0x4A91A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A91A4u;
label_4a91a4:
    // 0x4a91a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A91A4u;
    {
        const bool branch_taken_0x4a91a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91A4u;
        // 0x4a91a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a91a4) {
            ctx->pc = 0x4A91B4u;
            goto label_4a91b4;
        }
    }
    ctx->pc = 0x4A91ACu;
    // 0x4a91ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4A91ACu;
    {
        const bool branch_taken_0x4a91ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91ACu;
        // 0x4a91b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a91ac) {
            ctx->pc = 0x4A91E4u;
            goto label_4a91e4;
        }
    }
    ctx->pc = 0x4A91B4u;
label_4a91b4:
    // 0x4a91b4: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x4a91b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a91b8: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x4a91b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a91bc: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x4a91bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4a91c0: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x4a91c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4a91c4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4a91c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a91c8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4a91c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a91cc: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x4a91ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a91d0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x4a91d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a91d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a91d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4a91d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4a91dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4a91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4a91e0:
    // 0x4a91e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a91e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a91e4:
    // 0x4a91e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a91e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a91e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a91e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a91ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a91ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a91f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A91F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A91F0u;
        // 0x4a91f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A91F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A91F8u;
}
