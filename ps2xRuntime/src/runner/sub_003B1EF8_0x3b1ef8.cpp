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

// Function: sub_003B1EF8
// Address: 0x3b1ef8 - 0x3b1fa0
void sub_003B1EF8_0x3b1ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1EF8_0x3b1ef8");
#endif

    switch (ctx->pc) {
        case 0x3b1f08u: goto label_3b1f08;
        case 0x3b1f64u: goto label_3b1f64;
        case 0x3b1f74u: goto label_3b1f74;
        default: break;
    }

    ctx->pc = 0x3b1ef8u;

    // 0x3b1ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b1efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b1f00: 0xc0ec5aa  jal         func_3B16A8
    ctx->pc = 0x3B1F00u;
    SET_GPR_U32(ctx, 31, 0x3B1F08u);
    ctx->pc = 0x3B16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B16A8u, 0x3B1F00u, 0x3B1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F08u;
label_3b1f08:
    // 0x3b1f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F0Cu;
        // 0x3b1f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1F14u;
    // 0x3b1f14: 0x0  nop
    ctx->pc = 0x3b1f14u;
    // NOP
    // 0x3b1f18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b1f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b1f1c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3b1f20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b1f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3b1f24: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3b1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x3b1f28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b1f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3b1f2c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3b1f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b1f30: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b1f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b1f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f38: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3b1f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b1f3c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3b1f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b1f40: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3b1f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f48: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3b1f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1f4c: 0x8c620610  lw          $v0, 0x610($v1)
    ctx->pc = 0x3b1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3b1f50: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b1f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b1f58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b1f5c: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3B1F5Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F64u);
    ctx->pc = 0x3B1F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F5Cu;
    // 0x3b1f60: 0x8c650590  lw          $a1, 0x590($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3B1F5Cu, 0x3B1F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F64u;
label_3b1f64:
    // 0x3b1f64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b1f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b1f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f6c: 0xc104d64  jal         func_413590
    ctx->pc = 0x3B1F6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F74u);
    ctx->pc = 0x3B1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F6Cu;
    // 0x3b1f70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x3B1F6Cu, 0x3B1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F74u;
label_3b1f74:
    // 0x3b1f74: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3b1f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b1f78: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3b1f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b1f7c: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x3b1f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1f80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b1f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f84: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x3b1f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b1f88: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b1f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b1f8c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b1f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b1f90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b1f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b1f94: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F94u;
        // 0x3b1f98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1F9Cu;
    // 0x3b1f9c: 0x0  nop
    ctx->pc = 0x3b1f9cu;
    // NOP
    ctx->pc = 0x3b1fa0u;
}
