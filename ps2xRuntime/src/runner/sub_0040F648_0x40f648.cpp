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

// Function: sub_0040F648
// Address: 0x40f648 - 0x40f688
void sub_0040F648_0x40f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F648_0x40f648");
#endif

    ctx->pc = 0x40f648u;

    // 0x40f648: 0x8f85bdc0  lw          $a1, -0x4240($gp)
    ctx->pc = 0x40f648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
    // 0x40f64c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x40f650: 0x2463e88c  addiu       $v1, $v1, -0x1774
    ctx->pc = 0x40f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961292));
    // 0x40f654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40f658: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x40f658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x40f65c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x40f65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40f660: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x40f660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40f664: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x40f664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x40f668: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x40f668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40f66c: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x40f66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40f670: 0x3e00008  jr          $ra
    ctx->pc = 0x40F670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F670u;
        // 0x40f674: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F678u;
    // 0x40f678: 0xaf84ad20  sw          $a0, -0x52E0($gp)
    ctx->pc = 0x40f678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946080), GPR_U32(ctx, 4));
    // 0x40f67c: 0x3e00008  jr          $ra
    ctx->pc = 0x40F67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F67Cu;
        // 0x40f680: 0xaf85ad24  sw          $a1, -0x52DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946084), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F684u;
    // 0x40f684: 0x0  nop
    ctx->pc = 0x40f684u;
    // NOP
    ctx->pc = 0x40f688u;
}
