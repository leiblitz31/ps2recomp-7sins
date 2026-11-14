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

// Function: sub_00417F70
// Address: 0x417f70 - 0x417fb8
void sub_00417F70_0x417f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417F70_0x417f70");
#endif

    switch (ctx->pc) {
        case 0x417fa4u: goto label_417fa4;
        default: break;
    }

    ctx->pc = 0x417f70u;

    // 0x417f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x417f74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x417f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x417f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x417f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417f80: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x417f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x417f84: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x417f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x417f88: 0xb202007f  sdl         $v0, 0x7F($s0)
    ctx->pc = 0x417f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x417f8c: 0xb6020078  sdr         $v0, 0x78($s0)
    ctx->pc = 0x417f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x417f90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x417f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x417f94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x417F94u;
    {
        const bool branch_taken_0x417f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x417F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417F94u;
        // 0x417f98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417f94) {
            ctx->pc = 0x417FA8u;
            goto label_417fa8;
        }
    }
    ctx->pc = 0x417F9Cu;
    // 0x417f9c: 0xc106794  jal         func_419E50
    ctx->pc = 0x417F9Cu;
    SET_GPR_U32(ctx, 31, 0x417FA4u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x417F9Cu, 0x417FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417FA4u;
label_417fa4:
    // 0x417fa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417fa8:
    // 0x417fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x417facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x417FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417FB0u;
        // 0x417fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417FB8u;
}
