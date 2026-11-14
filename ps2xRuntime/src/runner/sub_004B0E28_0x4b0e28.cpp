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

// Function: sub_004B0E28
// Address: 0x4b0e28 - 0x4b1078
void sub_004B0E28_0x4b0e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0E28_0x4b0e28");
#endif

    switch (ctx->pc) {
        case 0x4b0f4cu: goto label_4b0f4c;
        case 0x4b1044u: goto label_4b1044;
        default: break;
    }

    ctx->pc = 0x4b0e28u;

    // 0x4b0e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b0e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b0e2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b0e30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b0e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b0e34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b0e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0e3c: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x4b0e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4b0e40: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x4b0e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4b0e44: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4b0e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b0e48: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4b0e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b0e4c: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x4b0e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b0e50: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x4b0e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b0e54: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x4b0e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4b0e58: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x4b0e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4b0e5c: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x4b0e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4b0e60: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x4b0e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4b0e64: 0xb08213ef  sdl         $v0, 0x13EF($a0)
    ctx->pc = 0x4b0e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e68: 0xb48213e8  sdr         $v0, 0x13E8($a0)
    ctx->pc = 0x4b0e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e6c: 0xb08313f7  sdl         $v1, 0x13F7($a0)
    ctx->pc = 0x4b0e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e70: 0xb48313f0  sdr         $v1, 0x13F0($a0)
    ctx->pc = 0x4b0e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e74: 0xb08513ff  sdl         $a1, 0x13FF($a0)
    ctx->pc = 0x4b0e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e78: 0xb48513f8  sdr         $a1, 0x13F8($a0)
    ctx->pc = 0x4b0e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e7c: 0xb0861407  sdl         $a2, 0x1407($a0)
    ctx->pc = 0x4b0e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e80: 0xb4861400  sdr         $a2, 0x1400($a0)
    ctx->pc = 0x4b0e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e84: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x4b0e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b0e88: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x4b0e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b0e8c: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x4b0e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4b0e90: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x4b0e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4b0e94: 0xb082140f  sdl         $v0, 0x140F($a0)
    ctx->pc = 0x4b0e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e98: 0xb4821408  sdr         $v0, 0x1408($a0)
    ctx->pc = 0x4b0e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0e9c: 0xb0831417  sdl         $v1, 0x1417($a0)
    ctx->pc = 0x4b0e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0ea0: 0xb4831410  sdr         $v1, 0x1410($a0)
    ctx->pc = 0x4b0ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 5136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b0ea4: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x4b0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x4b0ea8: 0x2403d8f0  addiu       $v1, $zero, -0x2710
    ctx->pc = 0x4b0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
    // 0x4b0eac: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x4b0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x4b0eb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b0eb4: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0EB4u;
    {
        const bool branch_taken_0x4b0eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b0eb4) {
            ctx->pc = 0x4B0EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0EB4u;
            // 0x4b0eb8: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0EC4u;
            goto label_4b0ec4;
        }
    }
    ctx->pc = 0x4B0EBCu;
    // 0x4b0ebc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x4B0EBCu;
    {
        const bool branch_taken_0x4b0ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0EBCu;
        // 0x4b0ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ebc) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0EC4u;
label_4b0ec4:
    // 0x4b0ec4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x4b0ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x4b0ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b0eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0ed0: 0x0  nop
    ctx->pc = 0x4b0ed0u;
    // NOP
    // 0x4b0ed4: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x4B0ED4u;
    {
        const bool branch_taken_0x4b0ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0ed4) {
            ctx->pc = 0x4B0ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0ED4u;
            // 0x4b0ed8: 0xc621000c  lwc1        $f1, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0F60u;
            goto label_4b0f60;
        }
    }
    ctx->pc = 0x4B0EDCu;
    // 0x4b0edc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4b0ee0: 0x443001f  bgezl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4B0EE0u;
    {
        const bool branch_taken_0x4b0ee0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b0ee0) {
            ctx->pc = 0x4B0EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0EE0u;
            // 0x4b0ee4: 0xc621000c  lwc1        $f1, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0F60u;
            goto label_4b0f60;
        }
    }
    ctx->pc = 0x4B0EE8u;
    // 0x4b0ee8: 0xc78181a0  lwc1        $f1, -0x7E60($gp)
    ctx->pc = 0x4b0ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b0eec: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x4b0eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b0ef0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x4b0ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x4b0ef4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4b0ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4b0ef8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b0ef8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4b0efc: 0xc7828044  lwc1        $f2, -0x7FBC($gp)
    ctx->pc = 0x4b0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b0f00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4b0f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4b0f04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b0f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b0f08: 0xe6010668  swc1        $f1, 0x668($s0)
    ctx->pc = 0x4b0f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1640), bits); }
    // 0x4b0f0c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x4b0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b0f10: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4b0f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0f14: 0x0  nop
    ctx->pc = 0x4b0f14u;
    // NOP
    // 0x4b0f18: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x4B0F18u;
    {
        const bool branch_taken_0x4b0f18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F18u;
        // 0x4b0f1c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f18) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0F20u;
    // 0x4b0f20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4b0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b0f24: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x4b0f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x4b0f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0f2c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x4b0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x4b0f30: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x4b0f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x4b0f34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4b0f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b0f38: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x4b0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4b0f3c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x4b0f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x4b0f40: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x4b0f40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x4b0f44: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x4B0F44u;
    SET_GPR_U32(ctx, 31, 0x4B0F4Cu);
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x4B0F44u, 0x4B0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0F4Cu;
label_4b0f4c:
    // 0x4b0f4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4b0f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4b0f50: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b0f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b0f54: 0xe601066c  swc1        $f1, 0x66C($s0)
    ctx->pc = 0x4b0f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1644), bits); }
    // 0x4b0f58: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4B0F58u;
    {
        const bool branch_taken_0x4b0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0f58) {
            ctx->pc = 0x4B1020u;
            goto label_4b1020;
        }
    }
    ctx->pc = 0x4B0F60u;
label_4b0f60:
    // 0x4b0f60: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x4b0f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x4b0f64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0f68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b0f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0f6c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x4B0F6Cu;
    {
        const bool branch_taken_0x4b0f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0f6c) {
            ctx->pc = 0x4B0F98u;
            goto label_4b0f98;
        }
    }
    ctx->pc = 0x4B0F74u;
    // 0x4b0f74: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4b0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b0f78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b0f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b0f7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0f80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b0f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0f84: 0x0  nop
    ctx->pc = 0x4b0f84u;
    // NOP
    // 0x4b0f88: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x4B0F88u;
    {
        const bool branch_taken_0x4b0f88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F88u;
        // 0x4b0f8c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f88) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0F90u;
    // 0x4b0f90: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4B0F90u;
    {
        const bool branch_taken_0x4b0f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0F90u;
        // 0x4b0f94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f90) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0F98u;
label_4b0f98:
    // 0x4b0f98: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x4b0f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x4b0f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0fa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b0fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0fa4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x4B0FA4u;
    {
        const bool branch_taken_0x4b0fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0fa4) {
            ctx->pc = 0x4B0FD0u;
            goto label_4b0fd0;
        }
    }
    ctx->pc = 0x4B0FACu;
    // 0x4b0fac: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4b0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b0fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b0fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b0fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0fb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b0fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0fbc: 0x0  nop
    ctx->pc = 0x4b0fbcu;
    // NOP
    // 0x4b0fc0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x4B0FC0u;
    {
        const bool branch_taken_0x4b0fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FC0u;
        // 0x4b0fc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0fc0) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0FC8u;
    // 0x4b0fc8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B0FC8u;
    {
        const bool branch_taken_0x4b0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FC8u;
        // 0x4b0fcc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0fc8) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0FD0u;
label_4b0fd0:
    // 0x4b0fd0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4b0fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4b0fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b0fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b0fd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b0fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b0fdc: 0x0  nop
    ctx->pc = 0x4b0fdcu;
    // NOP
    // 0x4b0fe0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x4B0FE0u;
    {
        const bool branch_taken_0x4b0fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0fe0) {
            ctx->pc = 0x4B0FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0FE0u;
            // 0x4b0fe4: 0xc6210010  lwc1        $f1, 0x10($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1000u;
            goto label_4b1000;
        }
    }
    ctx->pc = 0x4B0FE8u;
    // 0x4b0fe8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4b0fec: 0x28420191  slti        $v0, $v0, 0x191
    ctx->pc = 0x4b0fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x4b0ff0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B0FF0u;
    {
        const bool branch_taken_0x4b0ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FF0u;
        // 0x4b0ff4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ff0) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B0FF8u;
    // 0x4b0ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B0FF8u;
    {
        const bool branch_taken_0x4b0ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0FF8u;
        // 0x4b0ffc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ff8) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B1000u;
label_4b1000:
    // 0x4b1000: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b1000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b1004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4b1004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b1008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b1008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b100c: 0x0  nop
    ctx->pc = 0x4b100cu;
    // NOP
    // 0x4b1010: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4B1010u;
    {
        const bool branch_taken_0x4b1010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1010u;
        // 0x4b1014: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1010) {
            ctx->pc = 0x4B101Cu;
            goto label_4b101c;
        }
    }
    ctx->pc = 0x4B1018u;
    // 0x4b1018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b1018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b101c:
    // 0x4b101c: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x4b101cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
label_4b1020:
    // 0x4b1020: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x4b1020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b1024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b1024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4b1028: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x4b1028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x4b102c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x4b102cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4b1030: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x4b1030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x4b1034: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4b1034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b1038: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x4b1038u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x4b103c: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x4B103Cu;
    SET_GPR_U32(ctx, 31, 0x4B1044u);
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x4B103Cu, 0x4B1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1044u;
label_4b1044:
    // 0x4b1044: 0xc7818198  lwc1        $f1, -0x7E68($gp)
    ctx->pc = 0x4b1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b1048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b1048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b104c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b104cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b1050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1054: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x4b1054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4b1058: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b1058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b105c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4b105cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b1060: 0xa602065e  sh          $v0, 0x65E($s0)
    ctx->pc = 0x4b1060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1630), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1064: 0xa602065c  sh          $v0, 0x65C($s0)
    ctx->pc = 0x4b1064u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1628), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1068: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b1068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b106c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B106Cu;
        // 0x4b1070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1074u;
    // 0x4b1074: 0x0  nop
    ctx->pc = 0x4b1074u;
    // NOP
    ctx->pc = 0x4b1078u;
}
