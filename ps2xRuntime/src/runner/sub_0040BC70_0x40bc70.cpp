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

// Function: sub_0040BC70
// Address: 0x40bc70 - 0x40c2d8
void sub_0040BC70_0x40bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BC70_0x40bc70");
#endif

    switch (ctx->pc) {
        case 0x40bd40u: goto label_40bd40;
        case 0x40c1ecu: goto label_40c1ec;
        case 0x40c258u: goto label_40c258;
        default: break;
    }

    ctx->pc = 0x40bc70u;

    // 0x40bc70: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x40bc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40bc74: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x40bc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40bc78: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x40bc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40bc7c: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x40bc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40bc80: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x40bc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bc84: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x40bc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bc88: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x40bc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bc8c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x40bc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bc90: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x40bc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x40bc94: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bc98: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x40bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bc9c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x40bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40bca0: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x40bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40bca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40bca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40bca8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x40bca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40bcac: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x40bcacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x40bcb0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x40bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40bcb4: 0xc4a7000c  lwc1        $f7, 0xC($a1)
    ctx->pc = 0x40bcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40bcb8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40bcb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40bcbc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x40bcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bcc0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40bcc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40bcc4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x40bcc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x40bcc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40bcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40bccc: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x40bcccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40bcd0: 0x46067034  c.lt.s      $f14, $f6
    ctx->pc = 0x40bcd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40bcd4: 0x0  nop
    ctx->pc = 0x40bcd4u;
    // NOP
    // 0x40bcd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40BCD8u;
    {
        const bool branch_taken_0x40bcd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BCD8u;
        // 0x40bcdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bcd8) {
            ctx->pc = 0x40BCE4u;
            goto label_40bce4;
        }
    }
    ctx->pc = 0x40BCE0u;
    // 0x40bce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40bce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40bce4:
    // 0x40bce4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x40BCE4u;
    {
        const bool branch_taken_0x40bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40bce4) {
            ctx->pc = 0x40BD4Cu;
            goto label_40bd4c;
        }
    }
    ctx->pc = 0x40BCECu;
    // 0x40bcec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x40bcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x40bcf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40bcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40bcf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40bcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40bcf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40bcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40bcfc: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x40bcfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40bd00: 0x0  nop
    ctx->pc = 0x40bd00u;
    // NOP
    // 0x40bd04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x40BD04u;
    {
        const bool branch_taken_0x40bd04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40bd04) {
            ctx->pc = 0x40BD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40BD04u;
            // 0x40bd08: 0x46007047  neg.s       $f1, $f14 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40BD0Cu;
            goto label_40bd0c;
        }
    }
    ctx->pc = 0x40BD0Cu;
label_40bd0c:
    // 0x40bd0c: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x40bd0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x40bd10: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x40bd10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x40bd14: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x40bd14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x40bd18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x40bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bd1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40bd1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40bd20: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x40bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x40bd24: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x40bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bd28: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x40bd28u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x40bd2c: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x40bd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x40bd30: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bd34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x40bd34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x40bd38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x40BD38u;
    {
        const bool branch_taken_0x40bd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD38u;
        // 0x40bd3c: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd38) {
            ctx->pc = 0x40BD78u;
            goto label_40bd78;
        }
    }
    ctx->pc = 0x40BD40u;
label_40bd40:
    // 0x40bd40: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x40bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bd44: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x40BD44u;
    {
        const bool branch_taken_0x40bd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD44u;
        // 0x40bd48: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd44) {
            ctx->pc = 0x40C00Cu;
            goto label_40c00c;
        }
    }
    ctx->pc = 0x40BD4Cu;
label_40bd4c:
    // 0x40bd4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40bd50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40bd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40bd54: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x40bd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40bd58: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x40bd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40bd5c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x40bd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40bd60: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x40bd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40bd64: 0xb0c20017  sdl         $v0, 0x17($a2)
    ctx->pc = 0x40bd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bd68: 0xb4c20010  sdr         $v0, 0x10($a2)
    ctx->pc = 0x40bd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bd6c: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x40bd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bd70: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x40bd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40bd74: 0x460073a9  min.s       $f14, $f14, $f0
    ctx->pc = 0x40bd74u;
    ctx->f[14] = std::min(ctx->f[14], ctx->f[0]);
label_40bd78:
    // 0x40bd78: 0x44087000  mfc1        $t0, $f14
    ctx->pc = 0x40bd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x40bd7c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x40bd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bd80: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x40bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x40bd84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x40bd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x40bd88: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x40bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x40bd8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x40bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40bd90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x40bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x40bd94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40bd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40bd98: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x40BD98u;
    {
        const bool branch_taken_0x40bd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40bd98) {
            ctx->pc = 0x40BD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40BD98u;
            // 0x40bd9c: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40BDB8u;
            goto label_40bdb8;
        }
    }
    ctx->pc = 0x40BDA0u;
    // 0x40bda0: 0x5c80009a  bgtzl       $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x40BDA0u;
    {
        const bool branch_taken_0x40bda0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x40bda0) {
            ctx->pc = 0x40BDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40BDA0u;
            // 0x40bda4: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C00Cu;
            goto label_40c00c;
        }
    }
    ctx->pc = 0x40BDA8u;
    // 0x40bda8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x40bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bdac: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x40BDACu;
    {
        const bool branch_taken_0x40bdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BDACu;
        // 0x40bdb0: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdac) {
            ctx->pc = 0x40C00Cu;
            goto label_40c00c;
        }
    }
    ctx->pc = 0x40BDB4u;
    // 0x40bdb4: 0x0  nop
    ctx->pc = 0x40bdb4u;
    // NOP
label_40bdb8:
    // 0x40bdb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x40bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x40bdbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40bdbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40bdc0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x40BDC0u;
    {
        const bool branch_taken_0x40bdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BDC0u;
        // 0x40bdc4: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdc0) {
            ctx->pc = 0x40BE78u;
            goto label_40be78;
        }
    }
    ctx->pc = 0x40BDC8u;
    // 0x40bdc8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x40bdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x40bdcc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x40BDCCu;
    {
        const bool branch_taken_0x40bdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40bdcc) {
            ctx->pc = 0x40BD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40bd40;
        }
    }
    ctx->pc = 0x40BDD4u;
    // 0x40bdd4: 0x460e7302  mul.s       $f12, $f14, $f14
    ctx->pc = 0x40bdd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x40bdd8: 0xc78081cc  lwc1        $f0, -0x7E34($gp)
    ctx->pc = 0x40bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bddc: 0xc78380bc  lwc1        $f3, -0x7F44($gp)
    ctx->pc = 0x40bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40bde0: 0xc78780c0  lwc1        $f7, -0x7F40($gp)
    ctx->pc = 0x40bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40bde4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bde4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bde8: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x40bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bdec: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x40bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40bdf0: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bdf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bdf4: 0xc78881d4  lwc1        $f8, -0x7E2C($gp)
    ctx->pc = 0x40bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40bdf8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40bdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40bdfc: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x40bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40be00: 0xc78a80d4  lwc1        $f10, -0x7F2C($gp)
    ctx->pc = 0x40be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40be04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40be04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40be08: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x40be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40be0c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40be0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40be10: 0xc78980dc  lwc1        $f9, -0x7F24($gp)
    ctx->pc = 0x40be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40be14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40be14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40be18: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x40be18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x40be1c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40be1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40be20: 0xc78280e0  lwc1        $f2, -0x7F20($gp)
    ctx->pc = 0x40be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40be24: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x40be24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x40be28: 0xc78380e4  lwc1        $f3, -0x7F1C($gp)
    ctx->pc = 0x40be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40be2c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40be2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40be30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40be30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40be34: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40be34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40be38: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x40be38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x40be3c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x40be3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x40be40: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40be40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40be44: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40be44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40be48: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x40be48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x40be4c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x40be4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x40be50: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40be50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40be54: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x40be54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x40be58: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40be58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40be5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40be5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40be60: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x40be60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x40be64: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x40be64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x40be68: 0x46027081  sub.s       $f2, $f14, $f2
    ctx->pc = 0x40be68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x40be6c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x40be6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x40be70: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x40BE70u;
    {
        const bool branch_taken_0x40be70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BE70u;
        // 0x40be74: 0xe4c30020  swc1        $f3, 0x20($a2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40be70) {
            ctx->pc = 0x40C00Cu;
            goto label_40c00c;
        }
    }
    ctx->pc = 0x40BE78u;
label_40be78:
    // 0x40be78: 0x481002f  bgez        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x40BE78u;
    {
        const bool branch_taken_0x40be78 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x40be78) {
            ctx->pc = 0x40BF38u;
            goto label_40bf38;
        }
    }
    ctx->pc = 0x40BE80u;
    // 0x40be80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40be80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40be84: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x40be84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x40be88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x40be88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x40be8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x40be8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x40be90: 0x460a7080  add.s       $f2, $f14, $f10
    ctx->pc = 0x40be90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
    // 0x40be94: 0xc78081cc  lwc1        $f0, -0x7E34($gp)
    ctx->pc = 0x40be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40be98: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x40be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40be9c: 0xc78680c0  lwc1        $f6, -0x7F40($gp)
    ctx->pc = 0x40be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40bea0: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x40bea0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40bea4: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x40bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bea8: 0xc78281d0  lwc1        $f2, -0x7E30($gp)
    ctx->pc = 0x40bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40beac: 0xc78781d4  lwc1        $f7, -0x7E2C($gp)
    ctx->pc = 0x40beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40beb0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40beb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40beb4: 0xc78381d8  lwc1        $f3, -0x7E28($gp)
    ctx->pc = 0x40beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40beb8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40beb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bebc: 0xc78880d4  lwc1        $f8, -0x7F2C($gp)
    ctx->pc = 0x40bebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40bec0: 0xc78580d8  lwc1        $f5, -0x7F28($gp)
    ctx->pc = 0x40bec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40bec4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40bec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40bec8: 0xc78980dc  lwc1        $f9, -0x7F24($gp)
    ctx->pc = 0x40bec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40becc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40beccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40bed0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bed4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bed8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x40bed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x40bedc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40bedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40bee0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bee4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bee8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x40bee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x40beec: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x40beecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x40bef0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bef4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bef8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x40bef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x40befc: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x40befcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x40bf00: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bf00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bf04: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x40bf04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x40bf08: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bf0c: 0x460c0344  c1          0xC0344
    ctx->pc = 0x40bf0cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x40bf10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40bf10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40bf14: 0xc78380e0  lwc1        $f3, -0x7F20($gp)
    ctx->pc = 0x40bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40bf18: 0xc78280e8  lwc1        $f2, -0x7F18($gp)
    ctx->pc = 0x40bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40bf1c: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x40bf1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x40bf20: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x40bf20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x40bf24: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x40bf24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x40bf28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x40bf28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x40bf2c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x40BF2Cu;
    {
        const bool branch_taken_0x40bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BF2Cu;
        // 0x40bf30: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bf2c) {
            ctx->pc = 0x40C008u;
            goto label_40c008;
        }
    }
    ctx->pc = 0x40BF34u;
    // 0x40bf34: 0x0  nop
    ctx->pc = 0x40bf34u;
    // NOP
label_40bf38:
    // 0x40bf38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40bf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40bf3c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x40bf3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x40bf40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x40bf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x40bf44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40bf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40bf48: 0x460e5801  sub.s       $f0, $f11, $f14
    ctx->pc = 0x40bf48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[14]);
    // 0x40bf4c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x40bf4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40bf50: 0x460c0344  c1          0xC0344
    ctx->pc = 0x40bf50u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x40bf54: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x40bf54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x40bf58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40bf58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bf5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x40bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x40bf60: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x40bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x40bf64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40bf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x40bf68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x40bf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x40bf6c: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x40bf6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40bf70: 0xc78081cc  lwc1        $f0, -0x7E34($gp)
    ctx->pc = 0x40bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40bf74: 0xc78480bc  lwc1        $f4, -0x7F44($gp)
    ctx->pc = 0x40bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40bf78: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bf7c: 0xc78a80c0  lwc1        $f10, -0x7F40($gp)
    ctx->pc = 0x40bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40bf80: 0xc78180c4  lwc1        $f1, -0x7F3C($gp)
    ctx->pc = 0x40bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40bf84: 0x460268c0  add.s       $f3, $f13, $f2
    ctx->pc = 0x40bf84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x40bf88: 0xc78681d0  lwc1        $f6, -0x7E30($gp)
    ctx->pc = 0x40bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40bf8c: 0x46056141  sub.s       $f5, $f12, $f5
    ctx->pc = 0x40bf8cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[12], ctx->f[5]);
    // 0x40bf90: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40bf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40bf94: 0xc78781d4  lwc1        $f7, -0x7E2C($gp)
    ctx->pc = 0x40bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40bf98: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bf98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bf9c: 0xc78481d8  lwc1        $f4, -0x7E28($gp)
    ctx->pc = 0x40bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40bfa0: 0xc78980d4  lwc1        $f9, -0x7F2C($gp)
    ctx->pc = 0x40bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40bfa4: 0x46032943  div.s       $f5, $f5, $f3
    ctx->pc = 0x40bfa4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[3]); }
    // 0x40bfa8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bfa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bfac: 0xc78380d8  lwc1        $f3, -0x7F28($gp)
    ctx->pc = 0x40bfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40bfb0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x40bfb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x40bfb4: 0xc78880dc  lwc1        $f8, -0x7F24($gp)
    ctx->pc = 0x40bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40bfb8: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x40bfb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x40bfbc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bfbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bfc0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bfc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bfc4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40bfc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40bfc8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x40bfc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x40bfcc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bfccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bfd0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bfd4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40bfd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40bfd8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x40bfd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x40bfdc: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x40bfdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x40bfe0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bfe4: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x40bfe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x40bfe8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x40bfe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x40bfec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x40bfecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40bff0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40bff0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40bff4: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x40bff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x40bff8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x40bff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x40bffc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x40bffcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x40c000: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x40c000u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x40c004: 0x0  nop
    ctx->pc = 0x40c004u;
    // NOP
label_40c008:
    // 0x40c008: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x40c008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_40c00c:
    // 0x40c00c: 0xc78081dc  lwc1        $f0, -0x7E24($gp)
    ctx->pc = 0x40c00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c010: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x40c010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40c014: 0x0  nop
    ctx->pc = 0x40c014u;
    // NOP
    // 0x40c018: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40C018u;
    {
        const bool branch_taken_0x40c018 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C018u;
        // 0x40c01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c018) {
            ctx->pc = 0x40C024u;
            goto label_40c024;
        }
    }
    ctx->pc = 0x40C020u;
    // 0x40c020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c024:
    // 0x40c024: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x40C024u;
    {
        const bool branch_taken_0x40c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C024u;
        // 0x40c028: 0xacc20024  sw          $v0, 0x24($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c024) {
            ctx->pc = 0x40C0F0u;
            goto label_40c0f0;
        }
    }
    ctx->pc = 0x40C02Cu;
    // 0x40c02c: 0xc4c30020  lwc1        $f3, 0x20($a2)
    ctx->pc = 0x40c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40c030: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x40c030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40c034: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x40c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c038: 0xc78481e4  lwc1        $f4, -0x7E1C($gp)
    ctx->pc = 0x40c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40c03c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40c03cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40c040: 0xc78581e8  lwc1        $f5, -0x7E18($gp)
    ctx->pc = 0x40c040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40c044: 0xc78681ec  lwc1        $f6, -0x7E14($gp)
    ctx->pc = 0x40c044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40c048: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x40c048u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40c04c: 0xc78781f0  lwc1        $f7, -0x7E10($gp)
    ctx->pc = 0x40c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40c050: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40c050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40c054: 0xc78881f4  lwc1        $f8, -0x7E0C($gp)
    ctx->pc = 0x40c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40c058: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40c058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40c05c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x40c05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x40c060: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40c060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40c064: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x40c064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x40c068: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40c068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40c06c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x40c06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x40c070: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40c070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40c074: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x40c074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x40c078: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x40c078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x40c07c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x40c07cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x40c080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40c080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40c084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40c084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40c088: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x40c088u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x40c08c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x40c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c090: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40c090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40c094: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x40c094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x40c098: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x40c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c09c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x40c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c0a0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x40c0a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40c0a4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x40c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c0a8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40c0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40c0ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40c0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40c0b0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x40c0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x40c0b4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x40c0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x40c0b8: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x40c0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x40c0bc: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x40c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c0c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40c0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40c0c4: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x40c0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x40c0c8: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x40c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c0cc: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x40c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c0d0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40c0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40c0d4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x40c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c0d8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x40c0d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40c0dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40c0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40c0e0: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x40c0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x40c0e4: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x40c0e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x40c0e8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x40c0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x40c0ec: 0x0  nop
    ctx->pc = 0x40c0ecu;
    // NOP
label_40c0f0:
    // 0x40c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x40C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C0F8u;
    // 0x40c0f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x40c0fc: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x40c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40c100: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40c104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40c108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40c10c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40c110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40c110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c114: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x40c114u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x40c118: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x40c118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x40c11c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x40c11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x40c120: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x40c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40c124: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x40c124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c128: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x40c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c12c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x40c12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x40c130: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x40c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40c134: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x40c134u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x40c138: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x40c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40c13c: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x40c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40c140: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x40c140u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x40c144: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x40c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c148: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40c148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40c14c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x40c14cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x40c150: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40c150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40c154: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40c154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40c158: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x40c158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40c15c: 0x0  nop
    ctx->pc = 0x40c15cu;
    // NOP
    // 0x40c160: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40C160u;
    {
        const bool branch_taken_0x40c160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C160u;
        // 0x40c164: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c160) {
            ctx->pc = 0x40C16Cu;
            goto label_40c16c;
        }
    }
    ctx->pc = 0x40C168u;
    // 0x40c168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c16c:
    // 0x40c16c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40C16Cu;
    {
        const bool branch_taken_0x40c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c16c) {
            ctx->pc = 0x40C198u;
            goto label_40c198;
        }
    }
    ctx->pc = 0x40C174u;
    // 0x40c174: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x40c174u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x40c178: 0x46004047  neg.s       $f1, $f8
    ctx->pc = 0x40c178u;
    ctx->f[1] = FPU_NEG_S(ctx->f[8]);
    // 0x40c17c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x40c17cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x40c180: 0x460030c7  neg.s       $f3, $f6
    ctx->pc = 0x40c180u;
    ctx->f[3] = FPU_NEG_S(ctx->f[6]);
    // 0x40c184: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x40c184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x40c188: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40c188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40c18c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40c18cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40c190: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40C190u;
    {
        const bool branch_taken_0x40c190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C190u;
        // 0x40c194: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c190) {
            ctx->pc = 0x40C1B8u;
            goto label_40c1b8;
        }
    }
    ctx->pc = 0x40C198u;
label_40c198:
    // 0x40c198: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x40c198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40c19c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x40c19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40c1a0: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x40c1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40c1a4: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x40c1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40c1a8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x40c1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40c1ac: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x40c1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40c1b0: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x40c1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40c1b4: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x40c1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_40c1b8:
    // 0x40c1b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x40c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c1bc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x40c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c1c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40c1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40c1c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x40c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c1c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40c1c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40c1cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40c1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40c1d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40c1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40c1d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40c1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40c1d8: 0x46000504  c1          0x504
    ctx->pc = 0x40c1d8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x40c1dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40c1dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x40c1e0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x40c1e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x40c1e4: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x40C1E4u;
    SET_GPR_U32(ctx, 31, 0x40C1ECu);
    ctx->pc = 0x40C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C1E4u;
    // 0x40c1e8: 0xc7ad000c  lwc1        $f13, 0xC($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x40C1E4u, 0x40C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C1ECu;
label_40c1ec:
    // 0x40c1ec: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x40c1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40c1f0: 0x0  nop
    ctx->pc = 0x40c1f0u;
    // NOP
    // 0x40c1f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x40C1F4u;
    {
        const bool branch_taken_0x40c1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C1F4u;
        // 0x40c1f8: 0x4600a8c6  mov.s       $f3, $f21 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c1f4) {
            ctx->pc = 0x40C200u;
            goto label_40c200;
        }
    }
    ctx->pc = 0x40C1FCu;
    // 0x40c1fc: 0x461400c3  div.s       $f3, $f0, $f20
    ctx->pc = 0x40c1fcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_40c200:
    // 0x40c200: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x40c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c204: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x40c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c208: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x40c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c20c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40c20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40c210: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40c210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40c214: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x40c214u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40c218: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x40c218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x40c21c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x40c21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x40c220: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x40c220u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x40c224: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x40c224u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x40c228: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x40c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c22c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x40c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c230: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40c230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40c234: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x40c234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c238: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40c238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40c23c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40c23cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40c240: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40c240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40c244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40c244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40c248: 0x46000504  c1          0x504
    ctx->pc = 0x40c248u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x40c24c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40c24cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x40c250: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x40C250u;
    SET_GPR_U32(ctx, 31, 0x40C258u);
    ctx->pc = 0x40C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C250u;
    // 0x40c254: 0xc62d000c  lwc1        $f13, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x40C250u, 0x40C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C258u;
label_40c258:
    // 0x40c258: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x40c258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40c25c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x40c25cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x40c260: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x40C260u;
    {
        const bool branch_taken_0x40c260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C260u;
        // 0x40c264: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c260) {
            ctx->pc = 0x40C270u;
            goto label_40c270;
        }
    }
    ctx->pc = 0x40C268u;
    // 0x40c268: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x40c268u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x40c26c: 0x0  nop
    ctx->pc = 0x40c26cu;
    // NOP
label_40c270:
    // 0x40c270: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x40c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40c274: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x40c274u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x40c278: 0xe6050010  swc1        $f5, 0x10($s0)
    ctx->pc = 0x40c278u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x40c27c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x40c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40c280: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40c280u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40c284: 0xe6030014  swc1        $f3, 0x14($s0)
    ctx->pc = 0x40c284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x40c288: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x40c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40c28c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x40c28cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x40c290: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x40c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c294: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x40c294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x40c298: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x40c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40c29c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x40c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40c2a0: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x40c2a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x40c2a4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x40c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40c2a8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x40c2a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x40c2ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c2b0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x40c2b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x40c2b4: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x40c2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x40c2b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40c2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c2bc: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x40c2bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x40c2c0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x40c2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x40c2c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c2c8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x40c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x40c2cc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x40c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x40C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C2D0u;
        // 0x40c2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C2D8u;
}
