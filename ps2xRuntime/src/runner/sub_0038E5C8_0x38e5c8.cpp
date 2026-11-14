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

// Function: sub_0038E5C8
// Address: 0x38e5c8 - 0x38e648
void sub_0038E5C8_0x38e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E5C8_0x38e5c8");
#endif

    ctx->pc = 0x38e5c8u;

    // 0x38e5c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38e5cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E5CCu;
    {
        const bool branch_taken_0x38e5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e5cc) {
            ctx->pc = 0x38E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E5CCu;
            // 0x38e5d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E5E4u;
            goto label_38e5e4;
        }
    }
    ctx->pc = 0x38E5D4u;
    // 0x38e5d4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x38e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x38e5d8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38E5D8u;
    {
        const bool branch_taken_0x38e5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5D8u;
        // 0x38e5dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5d8) {
            ctx->pc = 0x38E5E4u;
            goto label_38e5e4;
        }
    }
    ctx->pc = 0x38E5E0u;
    // 0x38e5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38e5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e5e4:
    // 0x38e5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E5ECu;
    // 0x38e5ec: 0x0  nop
    ctx->pc = 0x38e5ecu;
    // NOP
    // 0x38e5f0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38E5F0u;
    {
        const bool branch_taken_0x38e5f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5F0u;
        // 0x38e5f4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5f0) {
            ctx->pc = 0x38E614u;
            goto label_38e614;
        }
    }
    ctx->pc = 0x38E5F8u;
    // 0x38e5f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38e5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38e5fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38e5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38e600: 0x2443ae18  addiu       $v1, $v0, -0x51E8
    ctx->pc = 0x38e600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946328));
    // 0x38e604: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x38e604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x38e608: 0xe440ae18  swc1        $f0, -0x51E8($v0)
    ctx->pc = 0x38e608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294946328), bits); }
    // 0x38e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E60Cu;
        // 0x38e610: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E614u;
label_38e614:
    // 0x38e614: 0x2447ae18  addiu       $a3, $v0, -0x51E8
    ctx->pc = 0x38e614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946328));
    // 0x38e618: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x38e618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x38e61c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x38e61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x38e620: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x38e620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38e624: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x38e624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38e628: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x38e628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38e62c: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x38e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x38e630: 0x3e00008  jr          $ra
    ctx->pc = 0x38E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E638u;
    // 0x38e638: 0xaf84a9b8  sw          $a0, -0x5648($gp)
    ctx->pc = 0x38e638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945208), GPR_U32(ctx, 4));
    // 0x38e63c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E63Cu;
        // 0x38e640: 0xaf85a9bc  sw          $a1, -0x5644($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E644u;
    // 0x38e644: 0x0  nop
    ctx->pc = 0x38e644u;
    // NOP
    ctx->pc = 0x38e648u;
}
