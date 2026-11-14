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

// Function: sub_0038D958
// Address: 0x38d958 - 0x38da10
void sub_0038D958_0x38d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D958_0x38d958");
#endif

    switch (ctx->pc) {
        case 0x38d9f4u: goto label_38d9f4;
        default: break;
    }

    ctx->pc = 0x38d958u;

    // 0x38d958: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x38d958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x38d95c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x38d95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x38d960: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x38d960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x38d964: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x38d964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x38d968: 0xb082001f  sdl         $v0, 0x1F($a0)
    ctx->pc = 0x38d968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38d96c: 0xb4820018  sdr         $v0, 0x18($a0)
    ctx->pc = 0x38d96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38d970: 0xb0830027  sdl         $v1, 0x27($a0)
    ctx->pc = 0x38d970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38d974: 0xb4830020  sdr         $v1, 0x20($a0)
    ctx->pc = 0x38d974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38d978: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x38d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38d97c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x38d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d980: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x38d980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d984: 0x0  nop
    ctx->pc = 0x38d984u;
    // NOP
    // 0x38d988: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x38D988u;
    {
        const bool branch_taken_0x38d988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d988) {
            ctx->pc = 0x38D98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D988u;
            // 0x38d98c: 0xa0800003  sb          $zero, 0x3($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D9B0u;
            goto label_38d9b0;
        }
    }
    ctx->pc = 0x38D990u;
    // 0x38d990: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x38d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d994: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x38d994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d998: 0x0  nop
    ctx->pc = 0x38d998u;
    // NOP
    // 0x38d99c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x38D99Cu;
    {
        const bool branch_taken_0x38d99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D99Cu;
        // 0x38d9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d99c) {
            ctx->pc = 0x38D9ACu;
            goto label_38d9ac;
        }
    }
    ctx->pc = 0x38D9A4u;
    // 0x38d9a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38D9A4u;
    {
        const bool branch_taken_0x38d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9A4u;
        // 0x38d9a8: 0xa0820003  sb          $v0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9a4) {
            ctx->pc = 0x38D9B0u;
            goto label_38d9b0;
        }
    }
    ctx->pc = 0x38D9ACu;
label_38d9ac:
    // 0x38d9ac: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x38d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_38d9b0:
    // 0x38d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9B0u;
        // 0x38d9b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D9B8u;
    // 0x38d9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38d9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38d9bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d9bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d9c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38d9c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x38d9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d9cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38D9CCu;
    {
        const bool branch_taken_0x38d9cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9CCu;
        // 0x38d9d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9cc) {
            ctx->pc = 0x38D9E4u;
            goto label_38d9e4;
        }
    }
    ctx->pc = 0x38D9D4u;
    // 0x38d9d4: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x38d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d9d8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x38d9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38d9dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x38D9DCu;
    {
        const bool branch_taken_0x38d9dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d9dc) {
            ctx->pc = 0x38D9ECu;
            goto label_38d9ec;
        }
    }
    ctx->pc = 0x38D9E4u;
label_38d9e4:
    // 0x38d9e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38D9E4u;
    {
        const bool branch_taken_0x38d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D9E4u;
        // 0x38d9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d9e4) {
            ctx->pc = 0x38DA00u;
            goto label_38da00;
        }
    }
    ctx->pc = 0x38D9ECu;
label_38d9ec:
    // 0x38d9ec: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x38D9ECu;
    SET_GPR_U32(ctx, 31, 0x38D9F4u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x38D9ECu, 0x38D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D9F4u;
label_38d9f4:
    // 0x38d9f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38d9f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38d9f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38d9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d9fc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x38d9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_38da00:
    // 0x38da00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38da00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38da04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38da04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38da08: 0x3e00008  jr          $ra
    ctx->pc = 0x38DA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA08u;
        // 0x38da0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DA10u;
}
