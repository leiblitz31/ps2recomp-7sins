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

// Function: sub_003AF890
// Address: 0x3af890 - 0x3af9b0
void sub_003AF890_0x3af890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF890_0x3af890");
#endif

    ctx->pc = 0x3af890u;

    // 0x3af890: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3af890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af894: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3af898: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x3af898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3af89c: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x3af89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af8a0: 0xc4850014  lwc1        $f5, 0x14($a0)
    ctx->pc = 0x3af8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3af8a4: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x3af8a4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3af8a8: 0x46051140  add.s       $f5, $f2, $f5
    ctx->pc = 0x3af8a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3af8ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3af8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3af8b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3af8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3af8b4: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x3af8b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x3af8b8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3af8b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3af8bc: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x3af8bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3af8c0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x3af8c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3af8c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3af8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af8c8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3af8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af8cc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3af8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3af8d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3af8d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3af8d4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af8d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3af8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3af8dc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3af8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3af8e0: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x3af8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x3af8e4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3af8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af8e8: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x3af8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af8ec: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x3af8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af8f0: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x3af8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af8f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3af8f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3af8f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3af8f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3af8fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af900: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3af900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3af904: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x3af904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x3af908: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x3af908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x3af90c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3af90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af910: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3af910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af914: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3af914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3af918: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3af918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3af91c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af920: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3af920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3af924: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x3af924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x3af928: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x3af928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x3af92c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x3af92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af930: 0xc4c30014  lwc1        $f3, 0x14($a2)
    ctx->pc = 0x3af930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af934: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3af934u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3af938: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3af938u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3af93c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3af93cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3af940: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3af940u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3af944: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x3af944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3af948: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x3af948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x3af94c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3af94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af950: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3af950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af954: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3af954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3af958: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3af958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3af95c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3af95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3af960: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3af960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3af964: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af968: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3af968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3af96c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x3af96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x3af970: 0xe4a1001c  swc1        $f1, 0x1C($a1)
    ctx->pc = 0x3af970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x3af974: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3af974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3af978: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3af978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3af97c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3af97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af980: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3af980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af984: 0x68a2001f  ldl         $v0, 0x1F($a1)
    ctx->pc = 0x3af984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3af988: 0x6ca20018  ldr         $v0, 0x18($a1)
    ctx->pc = 0x3af988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3af98c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x3af98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af990: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x3af990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af994: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x3af994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3af998: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x3af998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3af99c: 0xb0c2001f  sdl         $v0, 0x1F($a2)
    ctx->pc = 0x3af99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af9a0: 0xb4c20018  sdr         $v0, 0x18($a2)
    ctx->pc = 0x3af9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3af9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9A4u;
        // 0x3af9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF9ACu;
    // 0x3af9ac: 0x0  nop
    ctx->pc = 0x3af9acu;
    // NOP
    ctx->pc = 0x3af9b0u;
}
