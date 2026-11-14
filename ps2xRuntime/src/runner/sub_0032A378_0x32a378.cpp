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

// Function: sub_0032A378
// Address: 0x32a378 - 0x32a480
void sub_0032A378_0x32a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A378_0x32a378");
#endif

    ctx->pc = 0x32a378u;

    // 0x32a378: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32a378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32a37c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32a380: 0x8c652318  lw          $a1, 0x2318($v1)
    ctx->pc = 0x32a380u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F2318u));
    // 0x32a384: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x32a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x32a388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32a38c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32a38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32a390: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32a394: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x32a394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x32a398: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x32a398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x32a39c: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x32a39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x32a3a0: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x32a3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x32a3a4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x32a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a3a8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x32a3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a3ac: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x32a3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a3b0: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x32a3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a3b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32a3b8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x32a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a3bc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x32a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a3c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32a3c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32a3c4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x32a3c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x32a3c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A3C8u;
    {
        const bool branch_taken_0x32a3c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3C8u;
        // 0x32a3cc: 0xe4a20014  swc1        $f2, 0x14($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3c8) {
            ctx->pc = 0x32A3E0u;
            goto label_32a3e0;
        }
    }
    ctx->pc = 0x32A3D0u;
    // 0x32a3d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32a3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32a3d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32a3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a3d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32A3D8u;
    {
        const bool branch_taken_0x32a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3D8u;
        // 0x32a3dc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3d8) {
            ctx->pc = 0x32A3FCu;
            goto label_32a3fc;
        }
    }
    ctx->pc = 0x32A3E0u;
label_32a3e0:
    // 0x32a3e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x32a3e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32a3e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a3ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32a3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32a3f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32a3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a3f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32a3f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x32a3f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_32a3fc:
    // 0x32a3fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A3FCu;
    {
        const bool branch_taken_0x32a3fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3FCu;
        // 0x32a400: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3fc) {
            ctx->pc = 0x32A414u;
            goto label_32a414;
        }
    }
    ctx->pc = 0x32A404u;
    // 0x32a404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a40c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32A40Cu;
    {
        const bool branch_taken_0x32a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A40Cu;
        // 0x32a410: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a40c) {
            ctx->pc = 0x32A42Cu;
            goto label_32a42c;
        }
    }
    ctx->pc = 0x32A414u;
label_32a414:
    // 0x32a414: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32a418: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a424: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x32a424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x32a428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32a428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32a42c:
    // 0x32a42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a430: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x32a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a438: 0x3e00008  jr          $ra
    ctx->pc = 0x32A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A438u;
        // 0x32a43c: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A440u;
    // 0x32a440: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32a440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32a444: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x32a448: 0x8c452318  lw          $a1, 0x2318($v0)
    ctx->pc = 0x32a448u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F2318u));
    // 0x32a44c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x32a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x32a450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a454: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x32a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32a458: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x32a458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x32a45c: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x32a45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x32a460: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x32a460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x32a464: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x32a464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x32a468: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x32a468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a46c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x32a46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a470: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x32a470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x32a474: 0x3e00008  jr          $ra
    ctx->pc = 0x32A474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A474u;
        // 0x32a478: 0xb4860008  sdr         $a2, 0x8($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A47Cu;
    // 0x32a47c: 0x0  nop
    ctx->pc = 0x32a47cu;
    // NOP
    ctx->pc = 0x32a480u;
}
