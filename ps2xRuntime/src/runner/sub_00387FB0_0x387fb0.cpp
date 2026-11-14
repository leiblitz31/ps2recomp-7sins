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

// Function: sub_00387FB0
// Address: 0x387fb0 - 0x388120
void sub_00387FB0_0x387fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387FB0_0x387fb0");
#endif

    ctx->pc = 0x387fb0u;

    // 0x387fb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x387fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387fb4: 0x8ca70018  lw          $a3, 0x18($a1)
    ctx->pc = 0x387fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x387fb8: 0x10e00057  beqz        $a3, . + 4 + (0x57 << 2)
    ctx->pc = 0x387FB8u;
    {
        const bool branch_taken_0x387fb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x387FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FB8u;
        // 0x387fbc: 0x24a8004c  addiu       $t0, $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fb8) {
            ctx->pc = 0x388118u;
            goto label_388118;
        }
    }
    ctx->pc = 0x387FC0u;
    // 0x387fc0: 0x85040004  lh          $a0, 0x4($t0)
    ctx->pc = 0x387fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x387fc4: 0x85060006  lh          $a2, 0x6($t0)
    ctx->pc = 0x387fc4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x387fc8: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x387FC8u;
    {
        const bool branch_taken_0x387fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x387FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FC8u;
        // 0x387fcc: 0x8ce30018  lw          $v1, 0x18($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fc8) {
            ctx->pc = 0x387FE4u;
            goto label_387fe4;
        }
    }
    ctx->pc = 0x387FD0u;
    // 0x387fd0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x387fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x387fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x387FD4u;
    {
        const bool branch_taken_0x387fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FD4u;
        // 0x387fd8: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fd4) {
            ctx->pc = 0x387FF8u;
            goto label_387ff8;
        }
    }
    ctx->pc = 0x387FDCu;
    // 0x387fdc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x387FDCu;
    {
        const bool branch_taken_0x387fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387fdc) {
            ctx->pc = 0x387FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387FDCu;
            // 0x387fe0: 0x8ce2005c  lw          $v0, 0x5C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388058u;
            goto label_388058;
        }
    }
    ctx->pc = 0x387FE4u;
label_387fe4:
    // 0x387fe4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x387fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x387fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387FE8u;
    {
        const bool branch_taken_0x387fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FE8u;
        // 0x387fec: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fe8) {
            ctx->pc = 0x387FF8u;
            goto label_387ff8;
        }
    }
    ctx->pc = 0x387FF0u;
    // 0x387ff0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x387FF0u;
    {
        const bool branch_taken_0x387ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FF0u;
        // 0x387ff4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ff0) {
            ctx->pc = 0x388024u;
            goto label_388024;
        }
    }
    ctx->pc = 0x387FF8u;
label_387ff8:
    // 0x387ff8: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x387ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x387ffc: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x387ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x388000: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x388000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x388004: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x388004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x388008: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x388008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x38800c: 0xb0a30023  sdl         $v1, 0x23($a1)
    ctx->pc = 0x38800cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388010: 0xb4a3001c  sdr         $v1, 0x1C($a1)
    ctx->pc = 0x388010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388014: 0xb0a4002b  sdl         $a0, 0x2B($a1)
    ctx->pc = 0x388014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388018: 0xb4a40024  sdr         $a0, 0x24($a1)
    ctx->pc = 0x388018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38801c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x38801Cu;
    {
        const bool branch_taken_0x38801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38801Cu;
        // 0x388020: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38801c) {
            ctx->pc = 0x388100u;
            goto label_388100;
        }
    }
    ctx->pc = 0x388024u;
label_388024:
    // 0x388024: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x388024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x388028: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x388028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38802c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x388030: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x388030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x388034: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x388034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x388038: 0x68440013  ldl         $a0, 0x13($v0)
    ctx->pc = 0x388038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x38803c: 0x6c44000c  ldr         $a0, 0xC($v0)
    ctx->pc = 0x38803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x388040: 0xb0a30023  sdl         $v1, 0x23($a1)
    ctx->pc = 0x388040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388044: 0xb4a3001c  sdr         $v1, 0x1C($a1)
    ctx->pc = 0x388044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388048: 0xb0a4002b  sdl         $a0, 0x2B($a1)
    ctx->pc = 0x388048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38804c: 0xb4a40024  sdr         $a0, 0x24($a1)
    ctx->pc = 0x38804cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388050: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x388050u;
    {
        const bool branch_taken_0x388050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388050u;
        // 0x388054: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388050) {
            ctx->pc = 0x388100u;
            goto label_388100;
        }
    }
    ctx->pc = 0x388058u;
label_388058:
    // 0x388058: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x388058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38805c: 0xc33818  mult        $a3, $a2, $v1
    ctx->pc = 0x38805cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x388060: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x388060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x388064: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x388064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x388068: 0xc504000c  lwc1        $f4, 0xC($t0)
    ctx->pc = 0x388068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x38806c: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x38806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x388070: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x388070u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x388074: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x388074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x388078: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x388078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38807c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x38807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x388080: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x388080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x388084: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x388084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x388088: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x388088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38808c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x38808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x388090: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x388090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x388094: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x388094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x388098: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x388098u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x38809c: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x38809cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x3880a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3880a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3880a4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3880a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3880a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3880a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3880ac: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x3880acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x3880b0: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x3880b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3880b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3880b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3880b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3880b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3880bc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3880bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3880c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3880c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3880c4: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x3880c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x3880c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3880c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3880cc: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x3880ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x3880d0: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x3880d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x3880d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3880d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3880d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3880d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3880dc: 0xe4a3001c  swc1        $f3, 0x1C($a1)
    ctx->pc = 0x3880dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x3880e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3880e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3880e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3880e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3880e8: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x3880e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x3880ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3880ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3880f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3880f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3880f4: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x3880f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x3880f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3880f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3880fc: 0x0  nop
    ctx->pc = 0x3880fcu;
    // NOP
label_388100:
    // 0x388100: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x388100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x388104: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x388104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x388108: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x388108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x38810c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x38810cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x388110: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x388110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x388114: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x388114u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_388118:
    // 0x388118: 0x3e00008  jr          $ra
    ctx->pc = 0x388118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388120u;
}
