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

// Function: sub_0039ECF0
// Address: 0x39ecf0 - 0x39f330
void sub_0039ECF0_0x39ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039ECF0_0x39ecf0");
#endif

    switch (ctx->pc) {
        case 0x39eda0u: goto label_39eda0;
        case 0x39f010u: goto label_39f010;
        case 0x39f2a0u: goto label_39f2a0;
        default: break;
    }

    ctx->pc = 0x39ecf0u;

    // 0x39ecf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39ecf4: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x39ecf4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ecf8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x39ecfc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x39ecfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x39ed04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39ed04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x39ed0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x39ed0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed10: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x39ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x39ed14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x39ed14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x39ed1c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x39ed1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39ed24: 0x8f22000c  lw          $v0, 0xC($t9)
    ctx->pc = 0x39ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
    // 0x39ed28: 0x8f310004  lw          $s1, 0x4($t9)
    ctx->pc = 0x39ed28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4)));
    // 0x39ed2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39ed30: 0x262b01f0  addiu       $t3, $s1, 0x1F0
    ctx->pc = 0x39ed30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x39ed34: 0x262400b8  addiu       $a0, $s1, 0xB8
    ctx->pc = 0x39ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x39ed38: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x39ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
    // 0x39ed3c: 0x8f250024  lw          $a1, 0x24($t9)
    ctx->pc = 0x39ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39ed40: 0x83580b  movn        $t3, $a0, $v1
    ctx->pc = 0x39ed40u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
    // 0x39ed44: 0x8d6e0008  lw          $t6, 0x8($t3)
    ctx->pc = 0x39ed44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x39ed48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39ED48u;
    {
        const bool branch_taken_0x39ed48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED48u;
        // 0x39ed4c: 0x8d69000c  lw          $t1, 0xC($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed48) {
            ctx->pc = 0x39ED58u;
            goto label_39ed58;
        }
    }
    ctx->pc = 0x39ED50u;
    // 0x39ed50: 0x8d6e0010  lw          $t6, 0x10($t3)
    ctx->pc = 0x39ed50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x39ed54: 0x8d690014  lw          $t1, 0x14($t3)
    ctx->pc = 0x39ed54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
label_39ed58:
    // 0x39ed58: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x39ed58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x39ed5c: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x39ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x39ed60: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x39ed60u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed64: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x39ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x39ed68: 0x1c41823  subu        $v1, $t6, $a0
    ctx->pc = 0x39ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x39ed6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39ed70: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39ED70u;
    {
        const bool branch_taken_0x39ed70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ed70) {
            ctx->pc = 0x39ED74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ED70u;
            // 0x39ed74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ED78u;
            goto label_39ed78;
        }
    }
    ctx->pc = 0x39ED78u;
label_39ed78:
    // 0x39ed78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ed7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x39ed7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x39ed80: 0x4012  mflo        $t0
    ctx->pc = 0x39ed80u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x39ed84: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x39ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x39ed88: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x39ed88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ed8c: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x39ed8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39ed90: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x39ED90u;
    {
        const bool branch_taken_0x39ed90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ED90u;
        // 0x39ed94: 0x70c021  addu        $t8, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ed90) {
            ctx->pc = 0x39EDECu;
            goto label_39edec;
        }
    }
    ctx->pc = 0x39ED98u;
    // 0x39ed98: 0x25640018  addiu       $a0, $t3, 0x18
    ctx->pc = 0x39ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x39ed9c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x39ed9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_39eda0:
    // 0x39eda0: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x39eda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x39eda4: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x39eda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x39eda8: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x39eda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x39edac: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x39edacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x39edb0: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x39edb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x39edb4: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x39edb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x39edb8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x39edb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x39edbc: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x39edbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x39edc0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x39edc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x39edc4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x39edc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x39edc8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x39edc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x39edcc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39edccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39edd0: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x39edd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x39edd4: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x39edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39edd8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x39edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x39eddc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x39eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x39ede0: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x39ede0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39ede4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x39EDE4u;
    {
        const bool branch_taken_0x39ede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDE4u;
        // 0x39ede8: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ede4) {
            ctx->pc = 0x39EDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39eda0;
        }
    }
    ctx->pc = 0x39EDECu;
label_39edec:
    // 0x39edec: 0x922200b4  lbu         $v0, 0xB4($s1)
    ctx->pc = 0x39edecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x39edf0: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x39EDF0u;
    {
        const bool branch_taken_0x39edf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EDF0u;
        // 0x39edf4: 0x1d21018  mult        $v0, $t6, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39edf0) {
            ctx->pc = 0x39EFDCu;
            goto label_39efdc;
        }
    }
    ctx->pc = 0x39EDF8u;
    // 0x39edf8: 0x85430010  lh          $v1, 0x10($t2)
    ctx->pc = 0x39edf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x39edfc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x39edfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ee00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39ee00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39ee04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EE08u;
    {
        const bool branch_taken_0x39ee08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE08u;
        // 0x39ee0c: 0x586023  subu        $t4, $v0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee08) {
            ctx->pc = 0x39EE24u;
            goto label_39ee24;
        }
    }
    ctx->pc = 0x39EE10u;
    // 0x39ee10: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x39ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x39ee14: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x39ee14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39ee18: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x39ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x39ee1c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39ee20: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x39ee20u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_39ee24:
    // 0x39ee24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39EE24u;
    {
        const bool branch_taken_0x39ee24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE24u;
        // 0x39ee28: 0xa5400014  sh          $zero, 0x14($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee24) {
            ctx->pc = 0x39EE38u;
            goto label_39ee38;
        }
    }
    ctx->pc = 0x39EE2Cu;
    // 0x39ee2c: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x39ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39ee30: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x39ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x39ee34: 0x25883  sra         $t3, $v0, 2
    ctx->pc = 0x39ee34u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
label_39ee38:
    // 0x39ee38: 0x85430028  lh          $v1, 0x28($t2)
    ctx->pc = 0x39ee38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x39ee3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EE3Cu;
    {
        const bool branch_taken_0x39ee3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE3Cu;
        // 0x39ee40: 0xa54b002c  sh          $t3, 0x2C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee3c) {
            ctx->pc = 0x39EE4Cu;
            goto label_39ee4c;
        }
    }
    ctx->pc = 0x39EE44u;
    // 0x39ee44: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39ee44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39ee48: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x39ee48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_39ee4c:
    // 0x39ee4c: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x39ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x39ee50: 0x85440040  lh          $a0, 0x40($t2)
    ctx->pc = 0x39ee50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x39ee54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EE54u;
    {
        const bool branch_taken_0x39ee54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE54u;
        // 0x39ee58: 0x43580b  movn        $t3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee54) {
            ctx->pc = 0x39EE70u;
            goto label_39ee70;
        }
    }
    ctx->pc = 0x39EE5Cu;
    // 0x39ee5c: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x39ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x39ee60: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39ee60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39ee64: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39ee68: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x39ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x39ee6c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x39ee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_39ee70:
    // 0x39ee70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EE70u;
    {
        const bool branch_taken_0x39ee70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE70u;
        // 0x39ee74: 0xa54b0044  sh          $t3, 0x44($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 68), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee70) {
            ctx->pc = 0x39EE80u;
            goto label_39ee80;
        }
    }
    ctx->pc = 0x39EE78u;
    // 0x39ee78: 0xc1043  sra         $v0, $t4, 1
    ctx->pc = 0x39ee78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 1));
    // 0x39ee7c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x39ee7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_39ee80:
    // 0x39ee80: 0x85430058  lh          $v1, 0x58($t2)
    ctx->pc = 0x39ee80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x39ee84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EE84u;
    {
        const bool branch_taken_0x39ee84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE84u;
        // 0x39ee88: 0xa54b005c  sh          $t3, 0x5C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 92), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee84) {
            ctx->pc = 0x39EE94u;
            goto label_39ee94;
        }
    }
    ctx->pc = 0x39EE8Cu;
    // 0x39ee8c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39ee8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39ee90: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x39ee90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_39ee94:
    // 0x39ee94: 0x16c1021  addu        $v0, $t3, $t4
    ctx->pc = 0x39ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x39ee98: 0x85440070  lh          $a0, 0x70($t2)
    ctx->pc = 0x39ee98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x39ee9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EE9Cu;
    {
        const bool branch_taken_0x39ee9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE9Cu;
        // 0x39eea0: 0x43580b  movn        $t3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ee9c) {
            ctx->pc = 0x39EEB4u;
            goto label_39eeb4;
        }
    }
    ctx->pc = 0x39EEA4u;
    // 0x39eea4: 0x27020003  addiu       $v0, $t8, 0x3
    ctx->pc = 0x39eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 3));
    // 0x39eea8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39eea8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39eeac: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x39eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x39eeb0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x39eeb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_39eeb4:
    // 0x39eeb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EEB4u;
    {
        const bool branch_taken_0x39eeb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEB4u;
        // 0x39eeb8: 0xa54b0074  sh          $t3, 0x74($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 116), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eeb4) {
            ctx->pc = 0x39EEC4u;
            goto label_39eec4;
        }
    }
    ctx->pc = 0x39EEBCu;
    // 0x39eebc: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x39eebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x39eec0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x39eec0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_39eec4:
    // 0x39eec4: 0x85460088  lh          $a2, 0x88($t2)
    ctx->pc = 0x39eec4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x39eec8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x39EEC8u;
    {
        const bool branch_taken_0x39eec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EEC8u;
        // 0x39eecc: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eec8) {
            ctx->pc = 0x39EF08u;
            goto label_39ef08;
        }
    }
    ctx->pc = 0x39EED0u;
    // 0x39eed0: 0xe1840  sll         $v1, $t6, 1
    ctx->pc = 0x39eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x39eed4: 0x1c22018  mult        $a0, $t6, $v0
    ctx->pc = 0x39eed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39eed8: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x39eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x39eedc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x39eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x39eee0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39eee0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39eee4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x39eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x39eee8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x39eee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39eeec: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x39eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x39eef0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x39eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x39eef4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39eef8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39eefc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x39eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x39ef00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ef04: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x39ef04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_39ef08:
    // 0x39ef08: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x39ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39ef0c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x39EF0Cu;
    {
        const bool branch_taken_0x39ef0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF0Cu;
        // 0x39ef10: 0xa54b008c  sh          $t3, 0x8C($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 140), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef0c) {
            ctx->pc = 0x39EFACu;
            goto label_39efac;
        }
    }
    ctx->pc = 0x39EF14u;
    // 0x39ef14: 0xe2840  sll         $a1, $t6, 1
    ctx->pc = 0x39ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x39ef18: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x39EF18u;
    {
        const bool branch_taken_0x39ef18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EF18u;
        // 0x39ef1c: 0x250fffff  addiu       $t7, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ef18) {
            ctx->pc = 0x39EF4Cu;
            goto label_39ef4c;
        }
    }
    ctx->pc = 0x39EF20u;
    // 0x39ef20: 0x1cf2018  mult        $a0, $t6, $t7
    ctx->pc = 0x39ef20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39ef24: 0xae1821  addu        $v1, $a1, $t6
    ctx->pc = 0x39ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x39ef28: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x39ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x39ef2c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x39ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x39ef30: 0x3042023  subu        $a0, $t8, $a0
    ctx->pc = 0x39ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x39ef34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x39ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x39ef38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39ef3c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39ef40: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x39ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x39ef44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x39ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ef48: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x39ef48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_39ef4c:
    // 0x39ef4c: 0x1cf3018  mult        $a2, $t6, $t7
    ctx->pc = 0x39ef4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x39ef50: 0xae1821  addu        $v1, $a1, $t6
    ctx->pc = 0x39ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x39ef54: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x39ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x39ef58: 0x182040  sll         $a0, $t8, 1
    ctx->pc = 0x39ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x39ef5c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x39ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x39ef60: 0xc2840  sll         $a1, $t4, 1
    ctx->pc = 0x39ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39ef64: 0x6f1818  mult        $v1, $v1, $t7
    ctx->pc = 0x39ef64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39ef68: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39ef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39ef6c: 0x3063023  subu        $a2, $t8, $a2
    ctx->pc = 0x39ef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x39ef70: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x39ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x39ef74: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x39ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x39ef78: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x39ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x39ef7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x39ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39ef80: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x39ef80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x39ef84: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39ef88: 0xa54b0104  sh          $t3, 0x104($t2)
    ctx->pc = 0x39ef88u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 260), (uint16_t)GPR_U32(ctx, 11));
    // 0x39ef8c: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x39ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x39ef90: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x39ef90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x39ef94: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x39ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x39ef98: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x39ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x39ef9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39efa0: 0xa54b011c  sh          $t3, 0x11C($t2)
    ctx->pc = 0x39efa0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 284), (uint16_t)GPR_U32(ctx, 11));
    // 0x39efa4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x39efa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x39efa8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x39efa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_39efac:
    // 0x39efac: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x39efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x39efb0: 0x1b21818  mult        $v1, $t5, $s2
    ctx->pc = 0x39efb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39efb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39efb8: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39EFB8u;
    {
        const bool branch_taken_0x39efb8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x39efb8) {
            ctx->pc = 0x39EFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EFB8u;
            // 0x39efbc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EFC0u;
            goto label_39efc0;
        }
    }
    ctx->pc = 0x39EFC0u;
label_39efc0:
    // 0x39efc0: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x39efc0u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x39efc4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x39efc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x39efc8: 0x1012  mflo        $v0
    ctx->pc = 0x39efc8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39efcc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x39efccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39efd0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x39efd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x39efd4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x39EFD4u;
    {
        const bool branch_taken_0x39efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EFD4u;
        // 0x39efd8: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39efd4) {
            ctx->pc = 0x39F2FCu;
            goto label_39f2fc;
        }
    }
    ctx->pc = 0x39EFDCu;
label_39efdc:
    // 0x39efdc: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x39efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x39efe0: 0x922200b5  lbu         $v0, 0xB5($s1)
    ctx->pc = 0x39efe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 181)));
    // 0x39efe4: 0x1c32818  mult        $a1, $t6, $v1
    ctx->pc = 0x39efe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39efe8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x39efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x39efec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39eff0: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x39eff0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eff4: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x39eff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x39eff8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x39eff8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39effc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39effcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f000: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x39f000u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f004: 0x3055823  subu        $t3, $t8, $a1
    ctx->pc = 0x39f004u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x39f008: 0x26380020  addiu       $t8, $s1, 0x20
    ctx->pc = 0x39f008u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x39f00c: 0xd20c0  sll         $a0, $t5, 3
    ctx->pc = 0x39f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_39f010:
    // 0x39f010: 0x3041021  addu        $v0, $t8, $a0
    ctx->pc = 0x39f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x39f014: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39f018: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x39f018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39f01c: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x39F01Cu;
    {
        const bool branch_taken_0x39f01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F01Cu;
        // 0x39f020: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f01c) {
            ctx->pc = 0x39F1FCu;
            goto label_39f1fc;
        }
    }
    ctx->pc = 0x39F024u;
    // 0x39f024: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x39F024u;
    {
        const bool branch_taken_0x39f024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F024u;
        // 0x39f028: 0x2da20006  sltiu       $v0, $t5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f024) {
            ctx->pc = 0x39F1CCu;
            goto label_39f1cc;
        }
    }
    ctx->pc = 0x39F02Cu;
    // 0x39f02c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x39F02Cu;
    {
        const bool branch_taken_0x39f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F02Cu;
        // 0x39f030: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f02c) {
            ctx->pc = 0x39F1FCu;
            goto label_39f1fc;
        }
    }
    ctx->pc = 0x39F034u;
    // 0x39f034: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x39f034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x39f038: 0x2442bb10  addiu       $v0, $v0, -0x44F0
    ctx->pc = 0x39f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949648));
    // 0x39f03c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39f040: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39f040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39f044: 0x800008  jr          $a0
    ctx->pc = 0x39F044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39F04Cu: goto label_39f04c;
            case 0x39F090u: goto label_39f090;
            case 0x39F0C0u: goto label_39f0c0;
            case 0x39F0FCu: goto label_39f0fc;
            case 0x39F12Cu: goto label_39f12c;
            case 0x39F174u: goto label_39f174;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39F04Cu;
label_39f04c:
    // 0x39f04c: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x39f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x39f050: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x39f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f054: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x39f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f058: 0x85440010  lh          $a0, 0x10($t2)
    ctx->pc = 0x39f058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x39f05c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f060: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x39f060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x39f064: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F064u;
    {
        const bool branch_taken_0x39f064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F064u;
        // 0x39f068: 0x22882  srl         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f064) {
            ctx->pc = 0x39F074u;
            goto label_39f074;
        }
    }
    ctx->pc = 0x39F06Cu;
    // 0x39f06c: 0x85440012  lh          $a0, 0x12($t2)
    ctx->pc = 0x39f06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x39f070: 0x8d46000c  lw          $a2, 0xC($t2)
    ctx->pc = 0x39f070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_39f074:
    // 0x39f074: 0x8f9018  mult        $s2, $a0, $t7
    ctx->pc = 0x39f074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x39f078: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x39f078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f07c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x39f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39f080: 0xa54c0014  sh          $t4, 0x14($t2)
    ctx->pc = 0x39f080u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 20), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f084: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f088: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x39F088u;
    {
        const bool branch_taken_0x39f088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F088u;
        // 0x39f08c: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f088) {
            ctx->pc = 0x39F1B4u;
            goto label_39f1b4;
        }
    }
    ctx->pc = 0x39F090u;
label_39f090:
    // 0x39f090: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x39f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f094: 0x85440028  lh          $a0, 0x28($t2)
    ctx->pc = 0x39f094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x39f098: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F098u;
    {
        const bool branch_taken_0x39f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F098u;
        // 0x39f09c: 0x8d460020  lw          $a2, 0x20($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f098) {
            ctx->pc = 0x39F0A8u;
            goto label_39f0a8;
        }
    }
    ctx->pc = 0x39F0A0u;
    // 0x39f0a0: 0x8544002a  lh          $a0, 0x2A($t2)
    ctx->pc = 0x39f0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x39f0a4: 0x8d460024  lw          $a2, 0x24($t2)
    ctx->pc = 0x39f0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
label_39f0a8:
    // 0x39f0a8: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x39f0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f0ac: 0xa54c002c  sh          $t4, 0x2C($t2)
    ctx->pc = 0x39f0acu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 44), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f0b0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x39f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39f0b4: 0x1cb1023  subu        $v0, $t6, $t3
    ctx->pc = 0x39f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x39f0b8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x39F0B8u;
    {
        const bool branch_taken_0x39f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0B8u;
        // 0x39f0bc: 0x6e1821  addu        $v1, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0b8) {
            ctx->pc = 0x39F1C0u;
            goto label_39f1c0;
        }
    }
    ctx->pc = 0x39F0C0u;
label_39f0c0:
    // 0x39f0c0: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x39f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x39f0c4: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x39f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f0c8: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x39f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x39f0cc: 0x85440040  lh          $a0, 0x40($t2)
    ctx->pc = 0x39f0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x39f0d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F0D0u;
    {
        const bool branch_taken_0x39f0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0D0u;
        // 0x39f0d4: 0x8d460038  lw          $a2, 0x38($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0d0) {
            ctx->pc = 0x39F0E0u;
            goto label_39f0e0;
        }
    }
    ctx->pc = 0x39F0D8u;
    // 0x39f0d8: 0x85440042  lh          $a0, 0x42($t2)
    ctx->pc = 0x39f0d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 66)));
    // 0x39f0dc: 0x8d46003c  lw          $a2, 0x3C($t2)
    ctx->pc = 0x39f0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
label_39f0e0:
    // 0x39f0e0: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x39f0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f0e4: 0xa54c0044  sh          $t4, 0x44($t2)
    ctx->pc = 0x39f0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 68), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f0e8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x39f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39f0ec: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x39f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x39f0f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39f0f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x39F0F4u;
    {
        const bool branch_taken_0x39f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F0F4u;
        // 0x39f0f8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f0f4) {
            ctx->pc = 0x39F164u;
            goto label_39f164;
        }
    }
    ctx->pc = 0x39F0FCu;
label_39f0fc:
    // 0x39f0fc: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x39f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f100: 0x85440058  lh          $a0, 0x58($t2)
    ctx->pc = 0x39f100u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x39f104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F104u;
    {
        const bool branch_taken_0x39f104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F104u;
        // 0x39f108: 0x8d460050  lw          $a2, 0x50($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f104) {
            ctx->pc = 0x39F114u;
            goto label_39f114;
        }
    }
    ctx->pc = 0x39F10Cu;
    // 0x39f10c: 0x8544005a  lh          $a0, 0x5A($t2)
    ctx->pc = 0x39f10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 90)));
    // 0x39f110: 0x8d460054  lw          $a2, 0x54($t2)
    ctx->pc = 0x39f110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_39f114:
    // 0x39f114: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x39f114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f118: 0xa54c005c  sh          $t4, 0x5C($t2)
    ctx->pc = 0x39f118u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 92), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f11c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x39f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39f120: 0x1cb1023  subu        $v0, $t6, $t3
    ctx->pc = 0x39f120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x39f124: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x39F124u;
    {
        const bool branch_taken_0x39f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F124u;
        // 0x39f128: 0x6e1821  addu        $v1, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f124) {
            ctx->pc = 0x39F1C0u;
            goto label_39f1c0;
        }
    }
    ctx->pc = 0x39F12Cu;
label_39f12c:
    // 0x39f12c: 0x25c20003  addiu       $v0, $t6, 0x3
    ctx->pc = 0x39f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x39f130: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x39f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f134: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x39f134u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x39f138: 0x85440070  lh          $a0, 0x70($t2)
    ctx->pc = 0x39f138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x39f13c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F13Cu;
    {
        const bool branch_taken_0x39f13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F13Cu;
        // 0x39f140: 0x8d460068  lw          $a2, 0x68($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f13c) {
            ctx->pc = 0x39F14Cu;
            goto label_39f14c;
        }
    }
    ctx->pc = 0x39F144u;
    // 0x39f144: 0x85440072  lh          $a0, 0x72($t2)
    ctx->pc = 0x39f144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 114)));
    // 0x39f148: 0x8d46006c  lw          $a2, 0x6C($t2)
    ctx->pc = 0x39f148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 108)));
label_39f14c:
    // 0x39f14c: 0x8f1018  mult        $v0, $a0, $t7
    ctx->pc = 0x39f14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f150: 0xa54c0074  sh          $t4, 0x74($t2)
    ctx->pc = 0x39f150u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 116), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f154: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x39f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x39f158: 0x25620003  addiu       $v0, $t3, 0x3
    ctx->pc = 0x39f158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x39f15c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39f160: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x39f160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_39f164:
    // 0x39f164: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x39f164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39f168: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x39f168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39f16c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x39F16Cu;
    {
        const bool branch_taken_0x39f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F16Cu;
        // 0x39f170: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f16c) {
            ctx->pc = 0x39F1FCu;
            goto label_39f1fc;
        }
    }
    ctx->pc = 0x39F174u;
label_39f174:
    // 0x39f174: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x39f174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x39f178: 0x8f230024  lw          $v1, 0x24($t9)
    ctx->pc = 0x39f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f17c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x39f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x39f180: 0x85440088  lh          $a0, 0x88($t2)
    ctx->pc = 0x39f180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 136)));
    // 0x39f184: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39f188: 0x8d460080  lw          $a2, 0x80($t2)
    ctx->pc = 0x39f188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x39f18c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F18Cu;
    {
        const bool branch_taken_0x39f18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F18Cu;
        // 0x39f190: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f18c) {
            ctx->pc = 0x39F19Cu;
            goto label_39f19c;
        }
    }
    ctx->pc = 0x39F194u;
    // 0x39f194: 0x8544008a  lh          $a0, 0x8A($t2)
    ctx->pc = 0x39f194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 138)));
    // 0x39f198: 0x8d460084  lw          $a2, 0x84($t2)
    ctx->pc = 0x39f198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
label_39f19c:
    // 0x39f19c: 0x8f9018  mult        $s2, $a0, $t7
    ctx->pc = 0x39f19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x39f1a0: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x39f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f1a4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x39f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39f1a8: 0xa54c008c  sh          $t4, 0x8C($t2)
    ctx->pc = 0x39f1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 140), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f1ac: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39f1b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39f1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_39f1b4:
    // 0x39f1b4: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x39f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x39f1b8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x39f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39f1bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39f1c0:
    // 0x39f1c0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x39f1c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x39f1c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39F1C4u;
    {
        const bool branch_taken_0x39f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F1C4u;
        // 0x39f1c8: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f1c4) {
            ctx->pc = 0x39F1FCu;
            goto label_39f1fc;
        }
    }
    ctx->pc = 0x39F1CCu;
label_39f1cc:
    // 0x39f1cc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x39f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x39f1d0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x39f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39f1d4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x39f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x39f1d8: 0x1a32018  mult        $a0, $t5, $v1
    ctx->pc = 0x39f1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39f1dc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x39f1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f1e0: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x39f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x39f1e4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f1e8: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x39f1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x39f1ec: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x39f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x39f1f0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x39f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x39f1f4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x39f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x39f1f8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x39f1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_39f1fc:
    // 0x39f1fc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39f1fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39f200: 0x2da2000a  sltiu       $v0, $t5, 0xA
    ctx->pc = 0x39f200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x39f204: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x39F204u;
    {
        const bool branch_taken_0x39f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F204u;
        // 0x39f208: 0xd20c0  sll         $a0, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f204) {
            ctx->pc = 0x39F010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f010;
        }
    }
    ctx->pc = 0x39F20Cu;
    // 0x39f20c: 0x8f220024  lw          $v0, 0x24($t9)
    ctx->pc = 0x39f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f210: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39F210u;
    {
        const bool branch_taken_0x39f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F210u;
        // 0x39f214: 0xe2840  sll         $a1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f210) {
            ctx->pc = 0x39F274u;
            goto label_39f274;
        }
    }
    ctx->pc = 0x39F218u;
    // 0x39f218: 0x8544011a  lh          $a0, 0x11A($t2)
    ctx->pc = 0x39f218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 282)));
    // 0x39f21c: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x39f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x39f220: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x39f220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x39f224: 0x8f3018  mult        $a2, $a0, $t7
    ctx->pc = 0x39f224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x39f228: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x39f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x39f22c: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x39f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x39f230: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x39f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f234: 0x45882  srl         $t3, $a0, 2
    ctx->pc = 0x39f234u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x39f238: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39f238u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x39f23c: 0x8d440114  lw          $a0, 0x114($t2)
    ctx->pc = 0x39f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 276)));
    // 0x39f240: 0x1631823  subu        $v1, $t3, $v1
    ctx->pc = 0x39f240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x39f244: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x39f244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x39f248: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x39f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x39f24c: 0xa54c0104  sh          $t4, 0x104($t2)
    ctx->pc = 0x39f24cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 260), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f250: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x39f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x39f254: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x39f254u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x39f258: 0x55902  srl         $t3, $a1, 4
    ctx->pc = 0x39f258u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x39f25c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x39f25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x39f260: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x39f260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x39f264: 0x1621023  subu        $v0, $t3, $v0
    ctx->pc = 0x39f264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x39f268: 0xa54c011c  sh          $t4, 0x11C($t2)
    ctx->pc = 0x39f268u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 284), (uint16_t)GPR_U32(ctx, 12));
    // 0x39f26c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x39f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39f270: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x39f270u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_39f274:
    // 0x39f274: 0x8f250024  lw          $a1, 0x24($t9)
    ctx->pc = 0x39f274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f278: 0xcc3023  subu        $a2, $a2, $t4
    ctx->pc = 0x39f278u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39f27c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x39f27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x39f280: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x39f280u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f284: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x39f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x39f288: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x39F288u;
    {
        const bool branch_taken_0x39f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F288u;
        // 0x39f28c: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f288) {
            ctx->pc = 0x39F2FCu;
            goto label_39f2fc;
        }
    }
    ctx->pc = 0x39F290u;
    // 0x39f290: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x39f290u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f294: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x39f294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x39f298: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x39f298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x39f29c: 0x0  nop
    ctx->pc = 0x39f29cu;
    // NOP
label_39f2a0:
    // 0x39f2a0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x39f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x39f2a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x39f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x39f2a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39F2A8u;
    {
        const bool branch_taken_0x39f2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2A8u;
        // 0x39f2ac: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2a8) {
            ctx->pc = 0x39F2DCu;
            goto label_39f2dc;
        }
    }
    ctx->pc = 0x39F2B0u;
    // 0x39f2b0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x39F2B0u;
    {
        const bool branch_taken_0x39f2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39f2b0) {
            ctx->pc = 0x39F2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F2B0u;
            // 0x39f2b4: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2E0u;
            goto label_39f2e0;
        }
    }
    ctx->pc = 0x39F2B8u;
    // 0x39f2b8: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x39F2B8u;
    {
        const bool branch_taken_0x39f2b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f2b8) {
            ctx->pc = 0x39F2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F2B8u;
            // 0x39f2bc: 0xad460000  sw          $a2, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F2C4u;
            goto label_39f2c4;
        }
    }
    ctx->pc = 0x39F2C0u;
    // 0x39f2c0: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x39f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
label_39f2c4:
    // 0x39f2c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f2c8: 0x8f2c0024  lw          $t4, 0x24($t9)
    ctx->pc = 0x39f2c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
    // 0x39f2cc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x39f2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39f2d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x39f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x39f2d4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x39f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x39f2d8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x39f2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_39f2dc:
    // 0x39f2dc: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x39f2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_39f2e0:
    // 0x39f2e0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x39f2e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x39f2e4: 0x24a2000a  addiu       $v0, $a1, 0xA
    ctx->pc = 0x39f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x39f2e8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x39f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x39f2ec: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x39f2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39f2f0: 0x254a0018  addiu       $t2, $t2, 0x18
    ctx->pc = 0x39f2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x39f2f4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x39F2F4u;
    {
        const bool branch_taken_0x39f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2F4u;
        // 0x39f2f8: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2f4) {
            ctx->pc = 0x39F2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f2a0;
        }
    }
    ctx->pc = 0x39F2FCu;
label_39f2fc:
    // 0x39f2fc: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x39f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
    // 0x39f300: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x39f300u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x39f304: 0xae890000  sw          $t1, 0x0($s4)
    ctx->pc = 0x39f304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 9));
    // 0x39f308: 0x24e2022f  addiu       $v0, $a3, 0x22F
    ctx->pc = 0x39f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 559));
    // 0x39f30c: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x39f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x39f310: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39f310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39f314: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39f314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39f318: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39f318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39f31c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39f31cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f320: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39f320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f324: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x39f324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f328: 0x3e00008  jr          $ra
    ctx->pc = 0x39F328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F328u;
        // 0x39f32c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F330u;
}
