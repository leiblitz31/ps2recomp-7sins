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

// Function: sub_0037F008
// Address: 0x37f008 - 0x37f108
void sub_0037F008_0x37f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F008_0x37f008");
#endif

    ctx->pc = 0x37f008u;

    // 0x37f008: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x37f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x37f00c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x37f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x37f010: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x37f010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37f014: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37f014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37f018: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x37f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x37f01c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F01Cu;
    {
        const bool branch_taken_0x37f01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F01Cu;
        // 0x37f020: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f01c) {
            ctx->pc = 0x37F02Cu;
            goto label_37f02c;
        }
    }
    ctx->pc = 0x37F024u;
    // 0x37f024: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x37f028: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x37f028u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
label_37f02c:
    // 0x37f02c: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x37f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x37f030: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x37f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x37f034: 0x68450087  ldl         $a1, 0x87($v0)
    ctx->pc = 0x37f034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x37f038: 0x6c450080  ldr         $a1, 0x80($v0)
    ctx->pc = 0x37f038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x37f03c: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x37f03cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x37f040: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x37f040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37f044: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x37f044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37f048: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x37f048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x37f04c: 0x68620087  ldl         $v0, 0x87($v1)
    ctx->pc = 0x37f04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x37f050: 0x6c620080  ldr         $v0, 0x80($v1)
    ctx->pc = 0x37f050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x37f054: 0x8c650088  lw          $a1, 0x88($v1)
    ctx->pc = 0x37f054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x37f058: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x37f058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37f05c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x37f05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37f060: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x37f060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x37f064: 0x68680077  ldl         $t0, 0x77($v1)
    ctx->pc = 0x37f064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x37f068: 0x6c680070  ldr         $t0, 0x70($v1)
    ctx->pc = 0x37f068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x37f06c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x37f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x37f070: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x37f070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37f074: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x37f074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37f078: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37f078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x37f07c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x37f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f080: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x37f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f084: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x37f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x37f088: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37f088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x37f08c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x37f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37f090: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x37f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37f094: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x37f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f098: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x37f098u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x37f09c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x37f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x37f0a0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x37f0a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37f0a4: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x37f0a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x37f0a8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x37f0a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x37f0ac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x37f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f0b0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x37f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37f0b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37f0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37f0b8: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x37f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x37f0bc: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x37f0bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x37f0c0: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x37f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f0c4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x37f0c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x37f0c8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x37f0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x37f0cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37f0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x37f0d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37f0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37f0d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37f0d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37f0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37f0dc: 0x0  nop
    ctx->pc = 0x37f0dcu;
    // NOP
    // 0x37f0e0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F0E0u;
    {
        const bool branch_taken_0x37f0e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x37F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F0E0u;
        // 0x37f0e4: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f0e0) {
            ctx->pc = 0x37F0F0u;
            goto label_37f0f0;
        }
    }
    ctx->pc = 0x37F0E8u;
    // 0x37f0e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F0E8u;
    {
        const bool branch_taken_0x37f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F0E8u;
        // 0x37f0ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f0e8) {
            ctx->pc = 0x37F0F8u;
            goto label_37f0f8;
        }
    }
    ctx->pc = 0x37F0F0u;
label_37f0f0:
    // 0x37f0f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37f0f4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x37f0f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_37f0f8:
    // 0x37f0f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x37f0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x37F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F0FCu;
        // 0x37f100: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F104u;
    // 0x37f104: 0x0  nop
    ctx->pc = 0x37f104u;
    // NOP
    ctx->pc = 0x37f108u;
}
