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

// Function: sub_003FB770
// Address: 0x3fb770 - 0x3fb7d8
void sub_003FB770_0x3fb770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB770_0x3fb770");
#endif

    ctx->pc = 0x3fb770u;

    // 0x3fb770: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3FB770u;
    {
        const bool branch_taken_0x3fb770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb770) {
            ctx->pc = 0x3FB7A8u;
            goto label_3fb7a8;
        }
    }
    ctx->pc = 0x3FB778u;
    // 0x3fb778: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3FB778u;
    {
        const bool branch_taken_0x3fb778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb778) {
            ctx->pc = 0x3FB7A8u;
            goto label_3fb7a8;
        }
    }
    ctx->pc = 0x3FB780u;
    // 0x3fb780: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x3fb780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3fb784: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x3fb784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3fb788: 0x80c30004  lb          $v1, 0x4($a2)
    ctx->pc = 0x3fb788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3fb78c: 0xa8a20057  swl         $v0, 0x57($a1)
    ctx->pc = 0x3fb78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 87); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3fb790: 0xb8a20054  swr         $v0, 0x54($a1)
    ctx->pc = 0x3fb790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 84); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3fb794: 0xa0a30058  sb          $v1, 0x58($a1)
    ctx->pc = 0x3fb794u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fb798: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fb798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fb79c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fb79cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fb7a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb7a4: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_3fb7a8:
    // 0x3fb7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB7B0u;
    // 0x3fb7b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FB7B0u;
    {
        const bool branch_taken_0x3fb7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb7b0) {
            ctx->pc = 0x3FB7D0u;
            goto label_3fb7d0;
        }
    }
    ctx->pc = 0x3FB7B8u;
    // 0x3fb7b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FB7B8u;
    {
        const bool branch_taken_0x3fb7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB7B8u;
        // 0x3fb7bc: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb7b8) {
            ctx->pc = 0x3FB7D0u;
            goto label_3fb7d0;
        }
    }
    ctx->pc = 0x3FB7C0u;
    // 0x3fb7c0: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fb7c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fb7c4: 0xa0a6003c  sb          $a2, 0x3C($a1)
    ctx->pc = 0x3fb7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 6));
    // 0x3fb7c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb7cc: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fb7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_3fb7d0:
    // 0x3fb7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB7D8u;
}
