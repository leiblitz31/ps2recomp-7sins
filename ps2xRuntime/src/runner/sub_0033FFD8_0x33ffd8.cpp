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

// Function: sub_0033FFD8
// Address: 0x33ffd8 - 0x340068
void sub_0033FFD8_0x33ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FFD8_0x33ffd8");
#endif

    switch (ctx->pc) {
        case 0x340008u: goto label_340008;
        case 0x340020u: goto label_340020;
        default: break;
    }

    ctx->pc = 0x33ffd8u;

    // 0x33ffd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33ffdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33ffe0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33ffe4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x33ffe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffe8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33ffec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ffecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33fff0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33fff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fff4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33fff8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33fffc: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x33fffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x340000: 0xc0d120c  jal         func_344830
    ctx->pc = 0x340000u;
    SET_GPR_U32(ctx, 31, 0x340008u);
    ctx->pc = 0x340004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340000u;
    // 0x340004: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x340000u, 0x340008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340008u;
label_340008:
    // 0x340008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x340008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34000c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x34000cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340010: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x340010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x340014: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x340014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x340018: 0xc0d120c  jal         func_344830
    ctx->pc = 0x340018u;
    SET_GPR_U32(ctx, 31, 0x340020u);
    ctx->pc = 0x34001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340018u;
    // 0x34001c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x340018u, 0x340020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340020u;
label_340020:
    // 0x340020: 0x622000b  bltzl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x340020u;
    {
        const bool branch_taken_0x340020 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x340020) {
            ctx->pc = 0x340024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340020u;
            // 0x340024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340050u;
            goto label_340050;
        }
    }
    ctx->pc = 0x340028u;
    // 0x340028: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x340028u;
    {
        const bool branch_taken_0x340028 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340028u;
        // 0x34002c: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340028) {
            ctx->pc = 0x34004Cu;
            goto label_34004c;
        }
    }
    ctx->pc = 0x340030u;
    // 0x340030: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x340030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x340034: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x340034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x340038: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x340038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34003c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x34003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x340040: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x340040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x340044: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x340044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x340048: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x340048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_34004c:
    // 0x34004c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34004cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_340050:
    // 0x340050: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x340050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340054: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x340054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340058: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x340058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34005c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34005cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340060: 0x3e00008  jr          $ra
    ctx->pc = 0x340060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340060u;
        // 0x340064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340068u;
}
