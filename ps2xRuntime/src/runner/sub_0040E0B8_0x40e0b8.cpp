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

// Function: sub_0040E0B8
// Address: 0x40e0b8 - 0x40e578
void sub_0040E0B8_0x40e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E0B8_0x40e0b8");
#endif

    ctx->pc = 0x40e0b8u;

    // 0x40e0b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40e0bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x40e0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e0c0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x40e0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40e0c4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x40e0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40e0c8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x40e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x40e0cc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x40e0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e0d0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x40e0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e0d4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x40e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x40e0d8: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x40e0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x40e0dc: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x40e0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x40e0e0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x40e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x40e0e4: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x40e0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e0e8: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x40e0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e0ec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x40e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x40e0f0: 0x68a70027  ldl         $a3, 0x27($a1)
    ctx->pc = 0x40e0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x40e0f4: 0x6ca70020  ldr         $a3, 0x20($a1)
    ctx->pc = 0x40e0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x40e0f8: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x40e0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x40e0fc: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x40e0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e100: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x40e100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e104: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x40e104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x40e108: 0x68a40037  ldl         $a0, 0x37($a1)
    ctx->pc = 0x40e108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x40e10c: 0x6ca40030  ldr         $a0, 0x30($a1)
    ctx->pc = 0x40e10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x40e110: 0x8ca70038  lw          $a3, 0x38($a1)
    ctx->pc = 0x40e110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x40e114: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x40e114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e118: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x40e118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e11c: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x40e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x40e120: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x40e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e124: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x40e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e128: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40e128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40e12c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x40e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e130: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40e130u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40e134: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40e134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40e138: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e13c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e140: 0x46010044  c1          0x10044
    ctx->pc = 0x40e140u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40e144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e148: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40e148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e14c: 0x0  nop
    ctx->pc = 0x40e14cu;
    // NOP
    // 0x40e150: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x40E150u;
    {
        const bool branch_taken_0x40e150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e150) {
            ctx->pc = 0x40E154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E150u;
            // 0x40e154: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E168u;
            goto label_40e168;
        }
    }
    ctx->pc = 0x40E158u;
    // 0x40e158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e15c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e160: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40e160u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40e164: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x40e164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_40e168:
    // 0x40e168: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x40e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e16c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x40e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e170: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x40e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e174: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x40e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e178: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40e178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40e17c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40e17cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40e180: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40e180u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40e184: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40e184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40e188: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40e188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40e18c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x40e18cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40e190: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x40e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e194: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x40e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e198: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40e198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40e19c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x40e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e1a0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40e1a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40e1a4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40e1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40e1a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e1a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e1ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e1acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e1b0: 0x46010044  c1          0x10044
    ctx->pc = 0x40e1b0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40e1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e1b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40e1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e1bc: 0x0  nop
    ctx->pc = 0x40e1bcu;
    // NOP
    // 0x40e1c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x40E1C0u;
    {
        const bool branch_taken_0x40e1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e1c0) {
            ctx->pc = 0x40E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E1C0u;
            // 0x40e1c4: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E1D8u;
            goto label_40e1d8;
        }
    }
    ctx->pc = 0x40E1C8u;
    // 0x40e1c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e1d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40e1d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40e1d4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x40e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_40e1d8:
    // 0x40e1d8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x40e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e1dc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x40e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e1e0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x40e1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e1e4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x40e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e1e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x40e1e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40e1ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x40e1ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x40e1f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40e1f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40e1f4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x40e1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x40e1f8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x40e1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x40e1fc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x40e1fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x40e200: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x40e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e204: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x40e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e208: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40e208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40e20c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x40e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e210: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40e210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40e214: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40e214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40e218: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40e21c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40e21cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40e220: 0x46010044  c1          0x10044
    ctx->pc = 0x40e220u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40e224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e228: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40e228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e22c: 0x0  nop
    ctx->pc = 0x40e22cu;
    // NOP
    // 0x40e230: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x40E230u;
    {
        const bool branch_taken_0x40e230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e230) {
            ctx->pc = 0x40E234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E230u;
            // 0x40e234: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E248u;
            goto label_40e248;
        }
    }
    ctx->pc = 0x40E238u;
    // 0x40e238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e23c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e240: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x40e240u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40e244: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x40e244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_40e248:
    // 0x40e248: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x40e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e24c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x40e24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e250: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x40e250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e254: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x40e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e258: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x40e258u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40e25c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x40e25cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e260: 0x46040a82  mul.s       $f10, $f1, $f4
    ctx->pc = 0x40e260u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x40e264: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x40e264u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40e268: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x40e268u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x40e26c: 0xe7aa0028  swc1        $f10, 0x28($sp)
    ctx->pc = 0x40e26cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x40e270: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x40e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e274: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x40e274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40e278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40e278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e27c: 0x0  nop
    ctx->pc = 0x40e27cu;
    // NOP
    // 0x40e280: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x40E280u;
    {
        const bool branch_taken_0x40e280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E280u;
        // 0x40e284: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e280) {
            ctx->pc = 0x40E35Cu;
            goto label_40e35c;
        }
    }
    ctx->pc = 0x40E288u;
    // 0x40e288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40e288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e28c: 0x0  nop
    ctx->pc = 0x40e28cu;
    // NOP
    // 0x40e290: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x40E290u;
    {
        const bool branch_taken_0x40e290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E290u;
        // 0x40e294: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e290) {
            ctx->pc = 0x40E350u;
            goto label_40e350;
        }
    }
    ctx->pc = 0x40E298u;
    // 0x40e298: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x40e298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e29c: 0x0  nop
    ctx->pc = 0x40e29cu;
    // NOP
    // 0x40e2a0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x40E2A0u;
    {
        const bool branch_taken_0x40e2a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E2A0u;
        // 0x40e2a4: 0xc7a60010  lwc1        $f6, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e2a0) {
            ctx->pc = 0x40E340u;
            goto label_40e340;
        }
    }
    ctx->pc = 0x40E2A8u;
    // 0x40e2a8: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x40e2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40e2ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x40e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e2b0: 0x46033102  mul.s       $f4, $f6, $f3
    ctx->pc = 0x40e2b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x40e2b4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x40e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e2b8: 0x46053a42  mul.s       $f9, $f7, $f5
    ctx->pc = 0x40e2b8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x40e2bc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x40e2bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x40e2c0: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x40e2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40e2c4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x40e2c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x40e2c8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x40e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e2cc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x40e2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x40e2d0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x40e2d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x40e2d4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x40e2d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x40e2d8: 0x46015182  mul.s       $f6, $f10, $f1
    ctx->pc = 0x40e2d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x40e2dc: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x40e2dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x40e2e0: 0x460a4142  mul.s       $f5, $f8, $f10
    ctx->pc = 0x40e2e0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x40e2e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40e2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40e2e8: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x40e2e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x40e2ec: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x40e2ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x40e2f0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x40e2f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x40e2f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40e2f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x40e2f8: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x40e2f8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
    // 0x40e2fc: 0x46001885  abs.s       $f2, $f3
    ctx->pc = 0x40e2fcu;
    ctx->f[2] = FPU_ABS_S(ctx->f[3]);
    // 0x40e300: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x40e300u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x40e304: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x40e304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x40e308: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x40e308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e30c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x40e30cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x40e310: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x40E310u;
    {
        const bool branch_taken_0x40e310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E310u;
        // 0x40e314: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e310) {
            ctx->pc = 0x40E330u;
            goto label_40e330;
        }
    }
    ctx->pc = 0x40E318u;
    // 0x40e318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40e318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e31c: 0x0  nop
    ctx->pc = 0x40e31cu;
    // NOP
    // 0x40e320: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x40E320u;
    {
        const bool branch_taken_0x40e320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E320u;
        // 0x40e324: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e320) {
            ctx->pc = 0x40E360u;
            goto label_40e360;
        }
    }
    ctx->pc = 0x40E328u;
    // 0x40e328: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x40E328u;
    {
        const bool branch_taken_0x40e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E328u;
        // 0x40e32c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e328) {
            ctx->pc = 0x40E344u;
            goto label_40e344;
        }
    }
    ctx->pc = 0x40E330u;
label_40e330:
    // 0x40e330: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x40e330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e334: 0x0  nop
    ctx->pc = 0x40e334u;
    // NOP
    // 0x40e338: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x40E338u;
    {
        const bool branch_taken_0x40e338 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E338u;
        // 0x40e33c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e338) {
            ctx->pc = 0x40E350u;
            goto label_40e350;
        }
    }
    ctx->pc = 0x40E340u;
label_40e340:
    // 0x40e340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40e344:
    // 0x40e344: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x40e344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x40e348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x40E348u;
    {
        const bool branch_taken_0x40e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E348u;
        // 0x40e34c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e348) {
            ctx->pc = 0x40E368u;
            goto label_40e368;
        }
    }
    ctx->pc = 0x40E350u;
label_40e350:
    // 0x40e350: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x40e350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e354: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40E354u;
    {
        const bool branch_taken_0x40e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E354u;
        // 0x40e358: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e354) {
            ctx->pc = 0x40E368u;
            goto label_40e368;
        }
    }
    ctx->pc = 0x40E35Cu;
label_40e35c:
    // 0x40e35c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x40e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40e360:
    // 0x40e360: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x40e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x40e364: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x40e364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40e368:
    // 0x40e368: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x40e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e36c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x40e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e370: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x40e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e374: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x40e374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e378: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x40e378u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x40e37c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40e37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40e380: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x40e380u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x40e384: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x40e384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x40e388: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x40e388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e38c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x40e38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e390: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x40e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e394: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x40e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e398: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40e398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e39c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40e39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40e3a0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x40e3a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x40e3a4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x40e3a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x40e3a8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x40e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e3ac: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x40e3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40e3b0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x40e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e3b4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x40e3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e3b8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x40e3b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x40e3bc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x40e3bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x40e3c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x40e3c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x40e3c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x40e3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x40e3c8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x40e3c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40e3cc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40e3ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40e3d0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40e3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40e3d4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x40e3d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x40e3d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x40e3d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x40e3dc: 0x46030044  c1          0x30044
    ctx->pc = 0x40e3dcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40e3e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e3e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40e3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e3e8: 0x0  nop
    ctx->pc = 0x40e3e8u;
    // NOP
    // 0x40e3ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x40E3ECu;
    {
        const bool branch_taken_0x40e3ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E3ECu;
        // 0x40e3f0: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e3ec) {
            ctx->pc = 0x40E408u;
            goto label_40e408;
        }
    }
    ctx->pc = 0x40E3F4u;
    // 0x40e3f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e3f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e3fc: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x40e3fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40e400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40E400u;
    {
        const bool branch_taken_0x40e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E400u;
        // 0x40e404: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e400) {
            ctx->pc = 0x40E410u;
            goto label_40e410;
        }
    }
    ctx->pc = 0x40E408u;
label_40e408:
    // 0x40e408: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x40e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e40c: 0x0  nop
    ctx->pc = 0x40e40cu;
    // NOP
label_40e410:
    // 0x40e410: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x40e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e414: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x40e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e418: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x40e418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x40e41c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40e41cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e420: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x40e420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40e424: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x40e424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x40e428: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x40e428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x40e42c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x40e42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x40e430: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x40e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e434: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x40e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e438: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x40e438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x40e43c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40e43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40e440: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x40e440u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x40e444: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x40e444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x40e448: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x40e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e44c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x40e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e450: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x40e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e454: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x40e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e458: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x40e458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x40e45c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40e45cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40e460: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x40e460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x40e464: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x40e464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x40e468: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x40e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40e46c: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x40e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40e470: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x40e470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e474: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x40e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40e478: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x40e478u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x40e47c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x40e47cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40e480: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x40e480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x40e484: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x40e484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x40e488: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40e488u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40e48c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40e48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40e490: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40e490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40e494: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x40e494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x40e498: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x40e498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x40e49c: 0x46020044  c1          0x20044
    ctx->pc = 0x40e49cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40e4a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40e4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e4a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40e4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e4a8: 0x0  nop
    ctx->pc = 0x40e4a8u;
    // NOP
    // 0x40e4ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x40E4ACu;
    {
        const bool branch_taken_0x40e4ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4ACu;
        // 0x40e4b0: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e4ac) {
            ctx->pc = 0x40E4C8u;
            goto label_40e4c8;
        }
    }
    ctx->pc = 0x40E4B4u;
    // 0x40e4b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40e4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40e4b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40e4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40e4bc: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x40e4bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40e4c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40E4C0u;
    {
        const bool branch_taken_0x40e4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E4C0u;
        // 0x40e4c4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e4c0) {
            ctx->pc = 0x40E4D0u;
            goto label_40e4d0;
        }
    }
    ctx->pc = 0x40E4C8u;
label_40e4c8:
    // 0x40e4c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x40e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e4cc: 0x0  nop
    ctx->pc = 0x40e4ccu;
    // NOP
label_40e4d0:
    // 0x40e4d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x40e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40e4d4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x40e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40e4d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x40e4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x40e4dc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x40e4dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x40e4e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x40e4e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x40e4e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x40e4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x40e4e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x40e4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x40e4ec: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x40e4ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x40e4f0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x40e4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40e4f4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x40e4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x40e4f8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x40e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x40e4fc: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x40e4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e500: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x40e500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e504: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x40e504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x40e508: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x40e508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x40e50c: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x40e50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x40e510: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x40e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x40e514: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x40e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e518: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x40e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e51c: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x40e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x40e520: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x40e520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
    // 0x40e524: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x40e524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x40e528: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x40e528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x40e52c: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x40e52cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x40e530: 0xb0c70027  sdl         $a3, 0x27($a2)
    ctx->pc = 0x40e530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e534: 0xb4c70020  sdr         $a3, 0x20($a2)
    ctx->pc = 0x40e534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e538: 0xacc80028  sw          $t0, 0x28($a2)
    ctx->pc = 0x40e538u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 8));
    // 0x40e53c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x40e53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x40e540: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x40e540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x40e544: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x40e544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x40e548: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x40e548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x40e54c: 0xb0c50037  sdl         $a1, 0x37($a2)
    ctx->pc = 0x40e54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e550: 0xb4c50030  sdr         $a1, 0x30($a2)
    ctx->pc = 0x40e550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40e554: 0xacc70038  sw          $a3, 0x38($a2)
    ctx->pc = 0x40e554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 7));
    // 0x40e558: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x40e558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40e55c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x40e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x40e560: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x40e560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x40e564: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x40e564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x40e568: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x40e568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x40e56c: 0x3e00008  jr          $ra
    ctx->pc = 0x40E56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E56Cu;
        // 0x40e570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E574u;
    // 0x40e574: 0x0  nop
    ctx->pc = 0x40e574u;
    // NOP
    ctx->pc = 0x40e578u;
}
