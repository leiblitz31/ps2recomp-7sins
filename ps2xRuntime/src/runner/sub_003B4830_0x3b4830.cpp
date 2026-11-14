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

// Function: sub_003B4830
// Address: 0x3b4830 - 0x3b4950
void sub_003B4830_0x3b4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4830_0x3b4830");
#endif

    ctx->pc = 0x3b4830u;

    // 0x3b4830: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3b4830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b4834: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3b4834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b4838: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x3b4838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b483c: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x3b483cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b4840: 0xb0820097  sdl         $v0, 0x97($a0)
    ctx->pc = 0x3b4840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4844: 0xb4820090  sdr         $v0, 0x90($a0)
    ctx->pc = 0x3b4844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4848: 0xb083009f  sdl         $v1, 0x9F($a0)
    ctx->pc = 0x3b4848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b484c: 0xb4830098  sdr         $v1, 0x98($a0)
    ctx->pc = 0x3b484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4850: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b4850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4854: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3b4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b4858: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3b4858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3b485c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B485Cu;
        // 0x3b4860: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4864u;
    // 0x3b4864: 0x0  nop
    ctx->pc = 0x3b4864u;
    // NOP
    // 0x3b4868: 0xdc8700a0  ld          $a3, 0xA0($a0)
    ctx->pc = 0x3b4868u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x3b486c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b486cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x3b4870: 0x24c3dc28  addiu       $v1, $a2, -0x23D8
    ctx->pc = 0x3b4870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958120));
    // 0x3b4874: 0xc7848054  lwc1        $f4, -0x7FAC($gp)
    ctx->pc = 0x3b4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b4878: 0xfcc7dc28  sd          $a3, -0x23D8($a2)
    ctx->pc = 0x3b4878u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x61DC28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x61DC28u, _value); } while (0);
    // 0x3b487c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b487cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4880: 0xdc8500a8  ld          $a1, 0xA8($a0)
    ctx->pc = 0x3b4880u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x3b4884: 0xc4c2dc28  lwc1        $f2, -0x23D8($a2)
    ctx->pc = 0x3b4884u;
    { uint32_t bits = FAST_READ32(0x61DC28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4888: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x3b4888u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61DC30u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x61DC30u, _value); } while (0);
    // 0x3b488c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3b488cu;
    { uint32_t bits = FAST_READ32(0x61DC2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b4890: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3b4890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3b4894: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3b4894u;
    { uint32_t bits = FAST_READ32(0x61DC30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4898: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3b4898u;
    { uint32_t bits = FAST_READ32(0x61DC34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b489c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3b489cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3b48a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3b48a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3b48a4: 0xe4c2dc28  swc1        $f2, -0x23D8($a2)
    ctx->pc = 0x3b48a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61DC28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DC28u, _value); } while (0); }
    // 0x3b48a8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3b48a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3b48ac: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x3b48acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61DC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DC2Cu, _value); } while (0); }
    // 0x3b48b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3b48b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61DC30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61DC30u, _value); } while (0); }
    // 0x3b48b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B48B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B48B4u;
        // 0x3b48b8: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B48B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B48BCu;
    // 0x3b48bc: 0x0  nop
    ctx->pc = 0x3b48bcu;
    // NOP
    // 0x3b48c0: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3b48c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b48c4: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3b48c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b48c8: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x3b48c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3b48cc: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x3b48ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3b48d0: 0xb08200a7  sdl         $v0, 0xA7($a0)
    ctx->pc = 0x3b48d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b48d4: 0xb48200a0  sdr         $v0, 0xA0($a0)
    ctx->pc = 0x3b48d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b48d8: 0xb08300af  sdl         $v1, 0xAF($a0)
    ctx->pc = 0x3b48d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b48dc: 0xb48300a8  sdr         $v1, 0xA8($a0)
    ctx->pc = 0x3b48dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b48e0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3b48e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3b48e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b48e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b48e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b48e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b48ec: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x3b48ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b48f0: 0xc48300a4  lwc1        $f3, 0xA4($a0)
    ctx->pc = 0x3b48f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b48f4: 0xc48400a8  lwc1        $f4, 0xA8($a0)
    ctx->pc = 0x3b48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b48f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b48f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b48fc: 0xc48200ac  lwc1        $f2, 0xAC($a0)
    ctx->pc = 0x3b48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4900: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b4900u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b4904: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3b4904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b4908: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b4908u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b490c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b490cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b4910: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x3b4910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3b4914: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3b4914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3b4918: 0xe48300a4  swc1        $f3, 0xA4($a0)
    ctx->pc = 0x3b4918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x3b491c: 0xe48400a8  swc1        $f4, 0xA8($a0)
    ctx->pc = 0x3b491cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x3b4920: 0xe48200ac  swc1        $f2, 0xAC($a0)
    ctx->pc = 0x3b4920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x3b4924: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4924u;
        // 0x3b4928: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B492Cu;
    // 0x3b492c: 0x0  nop
    ctx->pc = 0x3b492cu;
    // NOP
    // 0x3b4930: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4930u;
        // 0x3b4934: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4938u;
    // 0x3b4938: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4938u;
        // 0x3b493c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4940u;
    // 0x3b4940: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b4940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4944: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4944u;
        // 0x3b4948: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B494Cu;
    // 0x3b494c: 0x0  nop
    ctx->pc = 0x3b494cu;
    // NOP
    ctx->pc = 0x3b4950u;
}
