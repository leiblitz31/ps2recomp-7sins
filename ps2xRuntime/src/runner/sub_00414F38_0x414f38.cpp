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

// Function: sub_00414F38
// Address: 0x414f38 - 0x415028
void sub_00414F38_0x414f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414F38_0x414f38");
#endif

    switch (ctx->pc) {
        case 0x414f80u: goto label_414f80;
        default: break;
    }

    ctx->pc = 0x414f38u;

    // 0x414f38: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x414f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x414f3c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x414f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x414f40: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x414f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x414f44: 0xb0820013  sdl         $v0, 0x13($a0)
    ctx->pc = 0x414f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x414f48: 0xb482000c  sdr         $v0, 0xC($a0)
    ctx->pc = 0x414f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x414f4c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x414f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x414f50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x414f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x414f54: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x414f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x414f58: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x414f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x414f5c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x414f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x414f60: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x414f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x414f64: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x414f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x414f68: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x414f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414f6c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x414f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x414f70: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x414f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x414f74: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x414F74u;
    {
        const bool branch_taken_0x414f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F74u;
        // 0x414f78: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414f74) {
            ctx->pc = 0x415020u;
            goto label_415020;
        }
    }
    ctx->pc = 0x414F7Cu;
    // 0x414f7c: 0x0  nop
    ctx->pc = 0x414f7cu;
    // NOP
label_414f80:
    // 0x414f80: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x414f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414f84: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x414f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x414f88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x414f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x414f8c: 0x0  nop
    ctx->pc = 0x414f8cu;
    // NOP
    // 0x414f90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x414F90u;
    {
        const bool branch_taken_0x414f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x414f90) {
            ctx->pc = 0x414F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414F90u;
            // 0x414f94: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x414F98u;
            goto label_414f98;
        }
    }
    ctx->pc = 0x414F98u;
label_414f98:
    // 0x414f98: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x414f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414f9c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x414f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x414fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x414fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x414fa4: 0x0  nop
    ctx->pc = 0x414fa4u;
    // NOP
    // 0x414fa8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x414FA8u;
    {
        const bool branch_taken_0x414fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x414fa8) {
            ctx->pc = 0x414FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414FA8u;
            // 0x414fac: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x414FB0u;
            goto label_414fb0;
        }
    }
    ctx->pc = 0x414FB0u;
label_414fb0:
    // 0x414fb0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x414fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414fb4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x414fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x414fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x414fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x414fbc: 0x0  nop
    ctx->pc = 0x414fbcu;
    // NOP
    // 0x414fc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x414FC0u;
    {
        const bool branch_taken_0x414fc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x414fc0) {
            ctx->pc = 0x414FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414FC0u;
            // 0x414fc4: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x414FC8u;
            goto label_414fc8;
        }
    }
    ctx->pc = 0x414FC8u;
label_414fc8:
    // 0x414fc8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x414fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414fcc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x414fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x414fd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x414fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x414fd4: 0x0  nop
    ctx->pc = 0x414fd4u;
    // NOP
    // 0x414fd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x414FD8u;
    {
        const bool branch_taken_0x414fd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x414fd8) {
            ctx->pc = 0x414FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414FD8u;
            // 0x414fdc: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x414FE0u;
            goto label_414fe0;
        }
    }
    ctx->pc = 0x414FE0u;
label_414fe0:
    // 0x414fe0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x414fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414fe4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x414fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x414fe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x414fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x414fec: 0x0  nop
    ctx->pc = 0x414fecu;
    // NOP
    // 0x414ff0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x414FF0u;
    {
        const bool branch_taken_0x414ff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x414ff0) {
            ctx->pc = 0x414FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414FF0u;
            // 0x414ff4: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x414FF8u;
            goto label_414ff8;
        }
    }
    ctx->pc = 0x414FF8u;
label_414ff8:
    // 0x414ff8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x414ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x414ffc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x414ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x415000: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x415000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x415004: 0x0  nop
    ctx->pc = 0x415004u;
    // NOP
    // 0x415008: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x415008u;
    {
        const bool branch_taken_0x415008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x415008) {
            ctx->pc = 0x41500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415008u;
            // 0x41500c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x415010u;
            goto label_415010;
        }
    }
    ctx->pc = 0x415010u;
label_415010:
    // 0x415010: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x415010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415014: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x415014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x415018: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x415018u;
    {
        const bool branch_taken_0x415018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415018u;
        // 0x41501c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415018) {
            ctx->pc = 0x414F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414f80;
        }
    }
    ctx->pc = 0x415020u;
label_415020:
    // 0x415020: 0x3e00008  jr          $ra
    ctx->pc = 0x415020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415020u;
        // 0x415024: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415028u;
}
