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

// Function: sub_00370818
// Address: 0x370818 - 0x370ec0
void sub_00370818_0x370818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370818_0x370818");
#endif

    switch (ctx->pc) {
        case 0x3708d0u: goto label_3708d0;
        case 0x3708d8u: goto label_3708d8;
        case 0x370990u: goto label_370990;
        case 0x3709b8u: goto label_3709b8;
        case 0x3709ccu: goto label_3709cc;
        case 0x370a04u: goto label_370a04;
        case 0x370a60u: goto label_370a60;
        case 0x370ad8u: goto label_370ad8;
        case 0x370c80u: goto label_370c80;
        case 0x370cf8u: goto label_370cf8;
        case 0x370e88u: goto label_370e88;
        default: break;
    }

    ctx->pc = 0x370818u;

    // 0x370818: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x370818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x37081c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x37081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x370820: 0x27a900e4  addiu       $t1, $sp, 0xE4
    ctx->pc = 0x370820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x370824: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x370824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x370828: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x370828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37082c: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x37082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x370830: 0x27aa00e8  addiu       $t2, $sp, 0xE8
    ctx->pc = 0x370830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x370834: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x370834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x370838: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x370838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37083c: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x37083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x370840: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x370840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370844: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x370844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x370848: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x370848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37084c: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x37084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
    // 0x370850: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x370850u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370854: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x370854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x370858: 0x27be00dc  addiu       $fp, $sp, 0xDC
    ctx->pc = 0x370858u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x37085c: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x37085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x370860: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x370864: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x370864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x370868: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x370868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x37086c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x37086cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x370870: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x370870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x370874: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x370874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x370878: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x370878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37087c: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x37087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x370880: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x370880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x370884: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x370884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370888: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x370888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37088c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x37088cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370890: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x370890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370894: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x370894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370898: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x370898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37089c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x37089cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3708a0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3708a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x3708a4: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x3708a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x3708a8: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x3708a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x3708ac: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3708acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x3708b0: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x3708b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x3708b4: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x3708b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x3708b8: 0xafa900ec  sw          $t1, 0xEC($sp)
    ctx->pc = 0x3708b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 9));
    // 0x3708bc: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3708BCu;
    {
        const bool branch_taken_0x3708bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3708C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708BCu;
        // 0x3708c0: 0xafaa00f0  sw          $t2, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708bc) {
            ctx->pc = 0x3709A8u;
            goto label_3709a8;
        }
    }
    ctx->pc = 0x3708C4u;
    // 0x3708c4: 0xc794810c  lwc1        $f20, -0x7EF4($gp)
    ctx->pc = 0x3708c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3708c8: 0x27b700d0  addiu       $s7, $sp, 0xD0
    ctx->pc = 0x3708c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3708cc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3708ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3708d0:
    // 0x3708d0: 0xc0de06c  jal         func_3781B0
    ctx->pc = 0x3708D0u;
    SET_GPR_U32(ctx, 31, 0x3708D8u);
    ctx->pc = 0x3708D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3708D0u;
    // 0x3708d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x3708D0u, 0x3708D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708D8u;
label_3708d8:
    // 0x3708d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3708d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3708dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3708DCu;
    {
        const bool branch_taken_0x3708dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3708E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708DCu;
        // 0x3708e0: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708dc) {
            ctx->pc = 0x3708ECu;
            goto label_3708ec;
        }
    }
    ctx->pc = 0x3708E4u;
    // 0x3708e4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3708e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3708e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3708ec:
    // 0x3708ec: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3708ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3708f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3708f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3708f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3708f8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x3708f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3708fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3708FCu;
    {
        const bool branch_taken_0x3708fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708FCu;
        // 0x370900: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3708fc) {
            ctx->pc = 0x370908u;
            goto label_370908;
        }
    }
    ctx->pc = 0x370904u;
    // 0x370904: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x370904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_370908:
    // 0x370908: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x370908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x37090c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x37090cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x370910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x370914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x370918: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x370918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37091c: 0x0  nop
    ctx->pc = 0x37091cu;
    // NOP
    // 0x370920: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x370920u;
    {
        const bool branch_taken_0x370920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370920u;
        // 0x370924: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370920) {
            ctx->pc = 0x37099Cu;
            goto label_37099c;
        }
    }
    ctx->pc = 0x370928u;
    // 0x370928: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x370928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37092c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x37092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370930: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x370930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x370934: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x370934u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x370938: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x370938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37093c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x37093cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x370940: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x370940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370944: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x370944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x370948: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x370948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x37094c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x37094cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x370950: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x370950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x370954: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x370954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x370958: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x370958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37095c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x37095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370960: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x370960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370964: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x370964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x370968: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x370968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x37096c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37096cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370970: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x370970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x370974: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x370974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370978: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x370978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37097c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37097cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x370980: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x370980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x370984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x370984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370988: 0xc0de06c  jal         func_3781B0
    ctx->pc = 0x370988u;
    SET_GPR_U32(ctx, 31, 0x370990u);
    ctx->pc = 0x37098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370988u;
    // 0x37098c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x370988u, 0x370990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370990u;
label_370990:
    // 0x370990: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x370990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x370994: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x370994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x370998: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x370998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_37099c:
    // 0x37099c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x37099cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3709a0: 0x1600ffcb  bnez        $s0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3709A0u;
    {
        const bool branch_taken_0x3709a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3709A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709A0u;
        // 0x3709a4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709a0) {
            ctx->pc = 0x3708D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3708d0;
        }
    }
    ctx->pc = 0x3709A8u;
label_3709a8:
    // 0x3709a8: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x3709a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3709ac: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3709ACu;
    {
        const bool branch_taken_0x3709ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3709ac) {
            ctx->pc = 0x370A34u;
            goto label_370a34;
        }
    }
    ctx->pc = 0x3709B4u;
    // 0x3709b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3709b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3709b8:
    // 0x3709b8: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3709B8u;
    {
        const bool branch_taken_0x3709b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3709BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709B8u;
        // 0x3709bc: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709b8) {
            ctx->pc = 0x3709FCu;
            goto label_3709fc;
        }
    }
    ctx->pc = 0x3709C0u;
    // 0x3709c0: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x3709c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x3709c4: 0xc0de06c  jal         func_3781B0
    ctx->pc = 0x3709C4u;
    SET_GPR_U32(ctx, 31, 0x3709CCu);
    ctx->pc = 0x3709C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709C4u;
    // 0x3709c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x3709C4u, 0x3709CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709CCu;
label_3709cc:
    // 0x3709cc: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x3709ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x3709d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3709d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3709d4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3709d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3709d8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3709d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3709dc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3709dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3709e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3709E0u;
    {
        const bool branch_taken_0x3709e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709E0u;
        // 0x3709e4: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709e0) {
            ctx->pc = 0x3709ECu;
            goto label_3709ec;
        }
    }
    ctx->pc = 0x3709E8u;
    // 0x3709e8: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x3709e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
label_3709ec:
    // 0x3709ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3709ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3709f0: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3709F0u;
    {
        const bool branch_taken_0x3709f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3709F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3709F0u;
        // 0x3709f4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3709f0) {
            ctx->pc = 0x370A28u;
            goto label_370a28;
        }
    }
    ctx->pc = 0x3709F8u;
    // 0x3709f8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x3709f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3709fc:
    // 0x3709fc: 0xc0de06c  jal         func_3781B0
    ctx->pc = 0x3709FCu;
    SET_GPR_U32(ctx, 31, 0x370A04u);
    ctx->pc = 0x370A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709FCu;
    // 0x370a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x3709FCu, 0x370A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A04u;
label_370a04:
    // 0x370a04: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x370a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x370a08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x370a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x370a0c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x370a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370a10: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x370a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x370a14: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x370a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x370a18: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x370A18u;
    {
        const bool branch_taken_0x370a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A18u;
        // 0x370a1c: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a18) {
            ctx->pc = 0x370A24u;
            goto label_370a24;
        }
    }
    ctx->pc = 0x370A20u;
    // 0x370a20: 0xafa400e4  sw          $a0, 0xE4($sp)
    ctx->pc = 0x370a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 4));
label_370a24:
    // 0x370a24: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x370a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_370a28:
    // 0x370a28: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x370a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x370a2c: 0x5600ffe2  bnel        $s0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x370A2Cu;
    {
        const bool branch_taken_0x370a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x370a2c) {
            ctx->pc = 0x370A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370A2Cu;
            // 0x370a30: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3709B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3709b8;
        }
    }
    ctx->pc = 0x370A34u;
label_370a34:
    // 0x370a34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370a38: 0x2aa40003  slti        $a0, $s5, 0x3
    ctx->pc = 0x370a38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x370a3c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x370a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x370a40: 0x2ac60003  slti        $a2, $s6, 0x3
    ctx->pc = 0x370a40u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x370a44: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x370a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x370a48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x370a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a4c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x370a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x370a50: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x370a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370a54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x370A54u;
    {
        const bool branch_taken_0x370a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A54u;
        // 0x370a58: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a54) {
            ctx->pc = 0x370A9Cu;
            goto label_370a9c;
        }
    }
    ctx->pc = 0x370A5Cu;
    // 0x370a5c: 0x0  nop
    ctx->pc = 0x370a5cu;
    // NOP
label_370a60:
    // 0x370a60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x370a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370a64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x370a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x370a68: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x370a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370a6c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x370a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370a70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x370a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x370a74: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x370a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370a78: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x370a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370a7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x370a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370a80: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x370a80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x370a84: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x370a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x370a88: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x370a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370a8c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x370a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x370a90: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x370a90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x370a94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x370A94u;
    {
        const bool branch_taken_0x370a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A94u;
        // 0x370a98: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370a94) {
            ctx->pc = 0x370A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370a60;
        }
    }
    ctx->pc = 0x370A9Cu;
label_370a9c:
    // 0x370a9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x370a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x370aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x370aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x370aa4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x370aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370aa8: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x370aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370aac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x370aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370ab0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x370ab0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x370ab4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x370ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x370ab8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x370ab8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x370abc: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x370abcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x370ac0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x370ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370ac4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x370ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x370ac8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x370AC8u;
    {
        const bool branch_taken_0x370ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AC8u;
        // 0x370acc: 0xe7a30034  swc1        $f3, 0x34($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ac8) {
            ctx->pc = 0x370B48u;
            goto label_370b48;
        }
    }
    ctx->pc = 0x370AD0u;
    // 0x370ad0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x370ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370ad4: 0x0  nop
    ctx->pc = 0x370ad4u;
    // NOP
label_370ad8:
    // 0x370ad8: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x370ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370adc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x370adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370ae0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x370ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370ae4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x370ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x370ae8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x370ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370aec: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x370aecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x370af0: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x370af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370af4: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x370af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370af8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x370af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x370afc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x370afcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x370b00: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x370b00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x370b04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x370b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x370b08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x370b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x370b0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x370b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370b10: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x370b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370b14: 0x0  nop
    ctx->pc = 0x370b14u;
    // NOP
    // 0x370b18: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x370B18u;
    {
        const bool branch_taken_0x370b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x370b18) {
            ctx->pc = 0x370B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370B18u;
            // 0x370b1c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370B40u;
            goto label_370b40;
        }
    }
    ctx->pc = 0x370B20u;
    // 0x370b20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x370b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x370b24: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x370b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x370b28: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x370b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x370b2c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x370b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x370b30: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x370b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b34: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x370b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b38: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x370b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x370b3c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x370b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_370b40:
    // 0x370b40: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x370B40u;
    {
        const bool branch_taken_0x370b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B40u;
        // 0x370b44: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b40) {
            ctx->pc = 0x370AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370ad8;
        }
    }
    ctx->pc = 0x370B48u;
label_370b48:
    // 0x370b48: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x370b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370b4c: 0x46000004  c1          0x4
    ctx->pc = 0x370b4cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x370b50: 0x14800043  bnez        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x370B50u;
    {
        const bool branch_taken_0x370b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x370B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B50u;
        // 0x370b54: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b50) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x370B58u;
    // 0x370b58: 0x6a490017  ldl         $t1, 0x17($s2)
    ctx->pc = 0x370b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x370b5c: 0x6e490010  ldr         $t1, 0x10($s2)
    ctx->pc = 0x370b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x370b60: 0x6a4a001f  ldl         $t2, 0x1F($s2)
    ctx->pc = 0x370b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x370b64: 0x6e4a0018  ldr         $t2, 0x18($s2)
    ctx->pc = 0x370b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x370b68: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x370b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x370b6c: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x370b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x370b70: 0xb3a90057  sdl         $t1, 0x57($sp)
    ctx->pc = 0x370b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b74: 0xb7a90050  sdr         $t1, 0x50($sp)
    ctx->pc = 0x370b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b78: 0xb3aa005f  sdl         $t2, 0x5F($sp)
    ctx->pc = 0x370b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b7c: 0xb7aa0058  sdr         $t2, 0x58($sp)
    ctx->pc = 0x370b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b80: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x370b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b84: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x370b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b88: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x370b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x370b8c: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x370b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x370b90: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x370b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b94: 0xb3a40077  sdl         $a0, 0x77($sp)
    ctx->pc = 0x370b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b98: 0xb7a40070  sdr         $a0, 0x70($sp)
    ctx->pc = 0x370b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370b9c: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x370b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x370ba0: 0x6ba90047  ldl         $t1, 0x47($sp)
    ctx->pc = 0x370ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x370ba4: 0x6fa90040  ldr         $t1, 0x40($sp)
    ctx->pc = 0x370ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x370ba8: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x370ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370bac: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x370bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370bb0: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x370bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370bb4: 0xafaa0088  sw          $t2, 0x88($sp)
    ctx->pc = 0x370bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 10));
    // 0x370bb8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x370bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x370bbc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x370bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x370bc0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x370bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x370bc4: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x370bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x370bc8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x370bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x370bcc: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x370bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
    // 0x370bd0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x370bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370bd4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x370bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370bd8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x370bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x370bdc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x370bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x370be0: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x370be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x370be4: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x370be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x370be8: 0x6ba8005f  ldl         $t0, 0x5F($sp)
    ctx->pc = 0x370be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x370bec: 0x6fa80058  ldr         $t0, 0x58($sp)
    ctx->pc = 0x370becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x370bf0: 0x6ba90067  ldl         $t1, 0x67($sp)
    ctx->pc = 0x370bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x370bf4: 0x6fa90060  ldr         $t1, 0x60($sp)
    ctx->pc = 0x370bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x370bf8: 0xb2670017  sdl         $a3, 0x17($s3)
    ctx->pc = 0x370bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370bfc: 0xb6670010  sdr         $a3, 0x10($s3)
    ctx->pc = 0x370bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c00: 0xb268001f  sdl         $t0, 0x1F($s3)
    ctx->pc = 0x370c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c04: 0xb6680018  sdr         $t0, 0x18($s3)
    ctx->pc = 0x370c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c08: 0xb2690027  sdl         $t1, 0x27($s3)
    ctx->pc = 0x370c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c0c: 0xb6690020  sdr         $t1, 0x20($s3)
    ctx->pc = 0x370c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c10: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x370c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x370c14: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x370c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x370c18: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x370c18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x370c1c: 0xb267003f  sdl         $a3, 0x3F($s3)
    ctx->pc = 0x370c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c20: 0xb6670038  sdr         $a3, 0x38($s3)
    ctx->pc = 0x370c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c24: 0xae680040  sw          $t0, 0x40($s3)
    ctx->pc = 0x370c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 8));
    // 0x370c28: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x370c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x370c2c: 0x6ba70087  ldl         $a3, 0x87($sp)
    ctx->pc = 0x370c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x370c30: 0x6fa70080  ldr         $a3, 0x80($sp)
    ctx->pc = 0x370c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x370c34: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x370c34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x370c38: 0xb267004f  sdl         $a3, 0x4F($s3)
    ctx->pc = 0x370c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c3c: 0xb6670048  sdr         $a3, 0x48($s3)
    ctx->pc = 0x370c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370c40: 0xae680050  sw          $t0, 0x50($s3)
    ctx->pc = 0x370c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 8));
    // 0x370c44: 0xae640034  sw          $a0, 0x34($s3)
    ctx->pc = 0x370c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 4));
    // 0x370c48: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x370c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x370c4c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x370c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x370c50: 0xae650028  sw          $a1, 0x28($s3)
    ctx->pc = 0x370c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 5));
    // 0x370c54: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x370c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x370c58: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x370c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x370c5c: 0x0  nop
    ctx->pc = 0x370c5cu;
    // NOP
label_370c60:
    // 0x370c60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370c64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x370c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c68: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x370c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x370c6c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x370c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x370c70: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x370c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x370c74: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x370c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370c78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x370C78u;
    {
        const bool branch_taken_0x370c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C78u;
        // 0x370c7c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c78) {
            ctx->pc = 0x370CBCu;
            goto label_370cbc;
        }
    }
    ctx->pc = 0x370C80u;
label_370c80:
    // 0x370c80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x370c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x370c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x370c88: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x370c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370c8c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x370c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370c90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x370c90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x370c94: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x370c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370c98: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x370c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370c9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x370c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370ca0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x370ca0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x370ca4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x370ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x370ca8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x370ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370cac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x370cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x370cb0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x370cb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x370cb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x370CB4u;
    {
        const bool branch_taken_0x370cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CB4u;
        // 0x370cb8: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cb4) {
            ctx->pc = 0x370C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370c80;
        }
    }
    ctx->pc = 0x370CBCu;
label_370cbc:
    // 0x370cbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x370cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x370cc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x370cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x370cc4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x370cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370cc8: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x370cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370ccc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x370cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370cd0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x370cd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x370cd4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x370cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x370cd8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x370cd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x370cdc: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x370cdcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x370ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x370ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370ce4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x370ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370ce8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x370ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x370cec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x370CECu;
    {
        const bool branch_taken_0x370cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x370CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CECu;
        // 0x370cf0: 0xe7a30034  swc1        $f3, 0x34($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370cec) {
            ctx->pc = 0x370D68u;
            goto label_370d68;
        }
    }
    ctx->pc = 0x370CF4u;
    // 0x370cf4: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x370cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_370cf8:
    // 0x370cf8: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x370cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370cfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x370cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370d00: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x370d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370d04: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x370d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x370d08: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x370d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370d0c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x370d0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x370d10: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x370d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370d14: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x370d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x370d18: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x370d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x370d1c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x370d1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x370d20: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x370d20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x370d24: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x370d24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x370d28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x370d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x370d2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x370d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370d30: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x370d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370d34: 0x0  nop
    ctx->pc = 0x370d34u;
    // NOP
    // 0x370d38: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x370D38u;
    {
        const bool branch_taken_0x370d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x370d38) {
            ctx->pc = 0x370D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370D38u;
            // 0x370d3c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370D60u;
            goto label_370d60;
        }
    }
    ctx->pc = 0x370D40u;
    // 0x370d40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x370d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x370d44: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x370d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x370d48: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x370d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x370d4c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x370d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x370d50: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x370d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370d54: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x370d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370d58: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x370d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x370d5c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x370d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_370d60:
    // 0x370d60: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x370D60u;
    {
        const bool branch_taken_0x370d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D60u;
        // 0x370d64: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d60) {
            ctx->pc = 0x370CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370cf8;
        }
    }
    ctx->pc = 0x370D68u;
label_370d68:
    // 0x370d68: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x370d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370d6c: 0x46000004  c1          0x4
    ctx->pc = 0x370d6cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x370d70: 0x14c00043  bnez        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x370D70u;
    {
        const bool branch_taken_0x370d70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x370D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D70u;
        // 0x370d74: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d70) {
            ctx->pc = 0x370E80u;
            goto label_370e80;
        }
    }
    ctx->pc = 0x370D78u;
    // 0x370d78: 0x6a490017  ldl         $t1, 0x17($s2)
    ctx->pc = 0x370d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x370d7c: 0x6e490010  ldr         $t1, 0x10($s2)
    ctx->pc = 0x370d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x370d80: 0x6a4a001f  ldl         $t2, 0x1F($s2)
    ctx->pc = 0x370d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x370d84: 0x6e4a0018  ldr         $t2, 0x18($s2)
    ctx->pc = 0x370d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x370d88: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x370d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x370d8c: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x370d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x370d90: 0xb3a90097  sdl         $t1, 0x97($sp)
    ctx->pc = 0x370d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370d94: 0xb7a90090  sdr         $t1, 0x90($sp)
    ctx->pc = 0x370d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370d98: 0xb3aa009f  sdl         $t2, 0x9F($sp)
    ctx->pc = 0x370d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370d9c: 0xb7aa0098  sdr         $t2, 0x98($sp)
    ctx->pc = 0x370d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370da0: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x370da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370da4: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x370da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370da8: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x370da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x370dac: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x370dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x370db0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x370db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370db4: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x370db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370db8: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x370db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370dbc: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x370dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x370dc0: 0x6ba80047  ldl         $t0, 0x47($sp)
    ctx->pc = 0x370dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x370dc4: 0x6fa80040  ldr         $t0, 0x40($sp)
    ctx->pc = 0x370dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x370dc8: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x370dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x370dcc: 0xb3a800c7  sdl         $t0, 0xC7($sp)
    ctx->pc = 0x370dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370dd0: 0xb7a800c0  sdr         $t0, 0xC0($sp)
    ctx->pc = 0x370dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370dd4: 0xafa900c8  sw          $t1, 0xC8($sp)
    ctx->pc = 0x370dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 9));
    // 0x370dd8: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x370dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x370ddc: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x370ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x370de0: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x370de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x370de4: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x370de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x370de8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x370de8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x370dec: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x370decu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x370df0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x370df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370df4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x370df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370df8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x370df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x370dfc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x370dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x370e00: 0x6ba60097  ldl         $a2, 0x97($sp)
    ctx->pc = 0x370e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x370e04: 0x6fa60090  ldr         $a2, 0x90($sp)
    ctx->pc = 0x370e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x370e08: 0x6ba7009f  ldl         $a3, 0x9F($sp)
    ctx->pc = 0x370e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x370e0c: 0x6fa70098  ldr         $a3, 0x98($sp)
    ctx->pc = 0x370e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x370e10: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x370e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x370e14: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x370e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x370e18: 0xb2860017  sdl         $a2, 0x17($s4)
    ctx->pc = 0x370e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e1c: 0xb6860010  sdr         $a2, 0x10($s4)
    ctx->pc = 0x370e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e20: 0xb287001f  sdl         $a3, 0x1F($s4)
    ctx->pc = 0x370e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e24: 0xb6870018  sdr         $a3, 0x18($s4)
    ctx->pc = 0x370e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e28: 0xb2880027  sdl         $t0, 0x27($s4)
    ctx->pc = 0x370e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e2c: 0xb6880020  sdr         $t0, 0x20($s4)
    ctx->pc = 0x370e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e30: 0x6baa00b7  ldl         $t2, 0xB7($sp)
    ctx->pc = 0x370e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x370e34: 0x6faa00b0  ldr         $t2, 0xB0($sp)
    ctx->pc = 0x370e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x370e38: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x370e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x370e3c: 0xb28a003f  sdl         $t2, 0x3F($s4)
    ctx->pc = 0x370e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e40: 0xb68a0038  sdr         $t2, 0x38($s4)
    ctx->pc = 0x370e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e44: 0xae860040  sw          $a2, 0x40($s4)
    ctx->pc = 0x370e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 6));
    // 0x370e48: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x370e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
    // 0x370e4c: 0x6ba900c7  ldl         $t1, 0xC7($sp)
    ctx->pc = 0x370e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x370e50: 0x6fa900c0  ldr         $t1, 0xC0($sp)
    ctx->pc = 0x370e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x370e54: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x370e54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x370e58: 0xb289004f  sdl         $t1, 0x4F($s4)
    ctx->pc = 0x370e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e5c: 0xb6890048  sdr         $t1, 0x48($s4)
    ctx->pc = 0x370e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x370e60: 0xae8a0050  sw          $t2, 0x50($s4)
    ctx->pc = 0x370e60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 10));
    // 0x370e64: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x370e64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
    // 0x370e68: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x370e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x370e6c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x370e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x370e70: 0xae850028  sw          $a1, 0x28($s4)
    ctx->pc = 0x370e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 5));
    // 0x370e74: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x370e74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
    // 0x370e78: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x370e78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x370e7c: 0x0  nop
    ctx->pc = 0x370e7cu;
    // NOP
label_370e80:
    // 0x370e80: 0xc0ddfae  jal         func_377EB8
    ctx->pc = 0x370E80u;
    SET_GPR_U32(ctx, 31, 0x370E88u);
    ctx->pc = 0x370E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E80u;
    // 0x370e84: 0x8fa400f0  lw          $a0, 0xF0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377EB8u, 0x370E80u, 0x370E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E88u;
label_370e88:
    // 0x370e88: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x370e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x370e8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x370e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x370e90: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x370e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x370e94: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x370e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x370e98: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x370e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x370e9c: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x370e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x370ea0: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x370ea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x370ea4: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x370ea4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x370ea8: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x370ea8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x370eac: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x370eacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x370eb0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x370eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x370eb4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x370eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x370eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x370EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370EB8u;
        // 0x370ebc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370EC0u;
}
