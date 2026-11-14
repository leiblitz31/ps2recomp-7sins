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

// Function: sub_003D46E0
// Address: 0x3d46e0 - 0x3d48e0
void sub_003D46E0_0x3d46e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D46E0_0x3d46e0");
#endif

    switch (ctx->pc) {
        case 0x3d4758u: goto label_3d4758;
        case 0x3d4850u: goto label_3d4850;
        case 0x3d4864u: goto label_3d4864;
        default: break;
    }

    ctx->pc = 0x3d46e0u;

    // 0x3d46e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3d46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3d46e4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3d46e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3d46e8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3d46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3d46ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d46ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46f0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3d46f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3d46f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d46f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d46f8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3d46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3d46fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d46fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4700: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3d4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3d4704: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3d4704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4708: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3d4708u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3d470c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3d470cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4710: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3d4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3d4714: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3d4714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3d4718: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d4718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3d471c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d4720: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x3d4720u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x3d4724: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3d4724u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3d4728: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3d4728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3d472c: 0x1280005b  beqz        $s4, . + 4 + (0x5B << 2)
    ctx->pc = 0x3D472Cu;
    {
        const bool branch_taken_0x3d472c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D472Cu;
        // 0x3d4730: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d472c) {
            ctx->pc = 0x3D489Cu;
            goto label_3d489c;
        }
    }
    ctx->pc = 0x3D4734u;
    // 0x3d4734: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4738: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3d4738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3d473c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3d473cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3d4740: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x3d4740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x3d4744: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d4744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3d4748: 0x2457b1e0  addiu       $s7, $v0, -0x4E20
    ctx->pc = 0x3d4748u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x3d474c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d474cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4750: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x3d4750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3d4754: 0x0  nop
    ctx->pc = 0x3d4754u;
    // NOP
label_3d4758:
    // 0x3d4758: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3d4758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d475c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3d475cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3d4760: 0x532818  mult        $a1, $v0, $s3
    ctx->pc = 0x3d4760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3d4764: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x3d4764u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d4768: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x3d4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x3d476c: 0x732818  mult        $a1, $v1, $s3
    ctx->pc = 0x3d476cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3d4770: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x3d4770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x3d4774: 0x932818  mult        $a1, $a0, $s3
    ctx->pc = 0x3d4774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3d4778: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x3d4778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x3d477c: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x3d477cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d4780: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x3d4780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d4784: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3d4784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d4788: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x3d4788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d478c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x3d478cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d4790: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3d4790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3d4794: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x3d4794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3d4798: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x3d4798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3d479c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x3d479cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d47a0: 0xb3a60013  sdl         $a2, 0x13($sp)
    ctx->pc = 0x3d47a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d47a4: 0xb7a6000c  sdr         $a2, 0xC($sp)
    ctx->pc = 0x3d47a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d47a8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3d47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x3d47ac: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x3d47acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3d47b0: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x3d47b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3d47b4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3d47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d47b8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x3d47b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d47bc: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x3d47bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d47c0: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3d47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3d47c4: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x3d47c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3d47c8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x3d47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d47cc: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x3d47ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3d47d0: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x3d47d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3d47d4: 0x46024201  sub.s       $f8, $f8, $f2
    ctx->pc = 0x3d47d4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x3d47d8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x3d47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d47dc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3d47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d47e0: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x3d47e0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x3d47e4: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x3d47e4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3d47e8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x3d47e8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3d47ec: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x3d47ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3d47f0: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x3d47f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3d47f4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3d47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d47f8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x3d47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d47fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3d47fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3d4800: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3d4800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d4804: 0x460539c1  sub.s       $f7, $f7, $f5
    ctx->pc = 0x3d4804u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x3d4808: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3d4808u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3d480c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3d480cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3d4810: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x3d4810u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3d4814: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x3d4814u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3d4818: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x3d4818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x3d481c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x3d481cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x3d4820: 0x46074002  mul.s       $f0, $f8, $f7
    ctx->pc = 0x3d4820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x3d4824: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3d4824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3d4828: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x3d4828u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x3d482c: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x3d482cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x3d4830: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x3d4830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x3d4834: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x3d4834u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x3d4838: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3d4838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3d483c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3d483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3d4840: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x3d4840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3d4844: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3d4844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3d4848: 0xc104d24  jal         func_413490
    ctx->pc = 0x3D4848u;
    SET_GPR_U32(ctx, 31, 0x3D4850u);
    ctx->pc = 0x3D484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4848u;
    // 0x3d484c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3D4848u, 0x3D4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4850u;
label_3d4850:
    // 0x3d4850: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x3d4850u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3d4854: 0x46170502  mul.s       $f20, $f0, $f23
    ctx->pc = 0x3d4854u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x3d4858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3d4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d485c: 0xc0e3df2  jal         func_38F7C8
    ctx->pc = 0x3D485Cu;
    SET_GPR_U32(ctx, 31, 0x3D4864u);
    ctx->pc = 0x3D4860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D485Cu;
    // 0x3d4860: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x3D485Cu, 0x3D4864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4864u;
label_3d4864:
    // 0x3d4864: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x3d4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x3d4868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d486c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d4870: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3d4870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d4874: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D4874u;
    {
        const bool branch_taken_0x3d4874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4874u;
        // 0x3d4878: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4874) {
            ctx->pc = 0x3D4880u;
            goto label_3d4880;
        }
    }
    ctx->pc = 0x3D487Cu;
    // 0x3d487c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3d487cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3d4880:
    // 0x3d4880: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3d4880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3d4884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d4884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d4888: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3d4888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3d488c: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3d488cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3d4890: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3d4890u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3d4894: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x3D4894u;
    {
        const bool branch_taken_0x3d4894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4894u;
        // 0x3d4898: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4894) {
            ctx->pc = 0x3D4758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4758;
        }
    }
    ctx->pc = 0x3D489Cu;
label_3d489c:
    // 0x3d489c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3d489cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x3d48a0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3d48a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3d48a4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3d48a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3d48a8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3d48a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3d48ac: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3d48acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3d48b0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3d48b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d48b4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3d48b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d48b8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3d48b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d48bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d48bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d48c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d48c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d48c4: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x3d48c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3d48c8: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3d48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3d48cc: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3d48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3d48d0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3d48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d48d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D48D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48D4u;
        // 0x3d48d8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D48D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D48DCu;
    // 0x3d48dc: 0x0  nop
    ctx->pc = 0x3d48dcu;
    // NOP
    ctx->pc = 0x3d48e0u;
}
