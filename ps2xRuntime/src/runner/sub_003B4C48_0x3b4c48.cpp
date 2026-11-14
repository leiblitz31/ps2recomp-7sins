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

// Function: sub_003B4C48
// Address: 0x3b4c48 - 0x3b4d00
void sub_003B4C48_0x3b4c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4C48_0x3b4c48");
#endif

    switch (ctx->pc) {
        case 0x3b4cc8u: goto label_3b4cc8;
        case 0x3b4cd8u: goto label_3b4cd8;
        default: break;
    }

    ctx->pc = 0x3b4c48u;

    // 0x3b4c48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b4c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b4c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4c50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b4c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3b4c54: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3b4c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3b4c58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3b4c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4c60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b4c64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b4c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4c6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b4c70: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3b4c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b4c74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3b4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3b4c78: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b4c7c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3b4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3b4c80: 0x6a020097  ldl         $v0, 0x97($s0)
    ctx->pc = 0x3b4c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b4c84: 0x6e020090  ldr         $v0, 0x90($s0)
    ctx->pc = 0x3b4c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b4c88: 0x6a03009f  ldl         $v1, 0x9F($s0)
    ctx->pc = 0x3b4c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b4c8c: 0x6e030098  ldr         $v1, 0x98($s0)
    ctx->pc = 0x3b4c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b4c90: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x3b4c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4c94: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x3b4c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4c98: 0xb3a3001b  sdl         $v1, 0x1B($sp)
    ctx->pc = 0x3b4c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4c9c: 0xb7a30014  sdr         $v1, 0x14($sp)
    ctx->pc = 0x3b4c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4ca0: 0x6a0200a7  ldl         $v0, 0xA7($s0)
    ctx->pc = 0x3b4ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b4ca4: 0x6e0200a0  ldr         $v0, 0xA0($s0)
    ctx->pc = 0x3b4ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b4ca8: 0x6a0300af  ldl         $v1, 0xAF($s0)
    ctx->pc = 0x3b4ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b4cac: 0x6e0300a8  ldr         $v1, 0xA8($s0)
    ctx->pc = 0x3b4cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b4cb0: 0xb3a20023  sdl         $v0, 0x23($sp)
    ctx->pc = 0x3b4cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4cb4: 0xb7a2001c  sdr         $v0, 0x1C($sp)
    ctx->pc = 0x3b4cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4cb8: 0xb3a3002b  sdl         $v1, 0x2B($sp)
    ctx->pc = 0x3b4cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4cbc: 0xb7a30024  sdr         $v1, 0x24($sp)
    ctx->pc = 0x3b4cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4cc0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3B4CC0u;
    SET_GPR_U32(ctx, 31, 0x3B4CC8u);
    ctx->pc = 0x3B4CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CC0u;
    // 0x3b4cc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B4CC0u, 0x3B4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4CC8u;
label_3b4cc8:
    // 0x3b4cc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B4CC8u;
    {
        const bool branch_taken_0x3b4cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CC8u;
        // 0x3b4ccc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4cc8) {
            ctx->pc = 0x3B4CE4u;
            goto label_3b4ce4;
        }
    }
    ctx->pc = 0x3B4CD0u;
    // 0x3b4cd0: 0xc1034da  jal         func_40D368
    ctx->pc = 0x3B4CD0u;
    SET_GPR_U32(ctx, 31, 0x3B4CD8u);
    ctx->pc = 0x3B4CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4CD0u;
    // 0x3b4cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D368u, 0x3B4CD0u, 0x3B4CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4CD8u;
label_3b4cd8:
    // 0x3b4cd8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3b4cd8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3b4cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B4CDCu;
    {
        const bool branch_taken_0x3b4cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CDCu;
        // 0x3b4ce0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4cdc) {
            ctx->pc = 0x3B4CE8u;
            goto label_3b4ce8;
        }
    }
    ctx->pc = 0x3B4CE4u;
label_3b4ce4:
    // 0x3b4ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ce8:
    // 0x3b4ce8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b4ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4cec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b4cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b4cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CF4u;
        // 0x3b4cf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4CFCu;
    // 0x3b4cfc: 0x0  nop
    ctx->pc = 0x3b4cfcu;
    // NOP
    ctx->pc = 0x3b4d00u;
}
