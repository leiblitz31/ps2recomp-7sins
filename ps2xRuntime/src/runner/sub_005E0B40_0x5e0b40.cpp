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

// Function: sub_005E0B40
// Address: 0x5e0b40 - 0x5e0b90
void sub_005E0B40_0x5e0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0B40_0x5e0b40");
#endif

    ctx->pc = 0x5e0b40u;

    // 0x5e0b40: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0B40u;
    {
        const bool branch_taken_0x5e0b40 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0b40) {
            ctx->pc = 0x5E0B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0B40u;
            // 0x5e0b44: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDCD4u;
            return;
        }
    }
    ctx->pc = 0x5E0B48u;
    // 0x5e0b48: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0b48u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0b4c: 0x3a3a7463  xori        $k0, $s1, 0x7463
    ctx->pc = 0x5e0b4cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29795);
    // 0x5e0b50: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0B50u;
    {
        const bool branch_taken_0x5e0b50 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0b50) {
            ctx->pc = 0x5E0B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0B50u;
            // 0x5e0b54: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDCE4u;
            return;
        }
    }
    ctx->pc = 0x5E0B58u;
    // 0x5e0b58: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0b58u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0b5c: 0x2d207463  sltiu       $zero, $t1, 0x7463
    ctx->pc = 0x5e0b5cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29795) ? 1 : 0);
    // 0x5e0b60: 0x70203e2d  .word       0x70203E2D                   # INVALID     $at, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0b60u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5E0B60 raw=0x70203E2D");
    // 0x5e0b64: 0x6d617261  ldr         $at, 0x7261($t3)
    ctx->pc = 0x5e0b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e0b68: 0x72427020  madd1       $t6, $s2, $v0
    ctx->pc = 0x5e0b68u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5e0b6c: 0x20687375  addi        $t0, $v1, 0x7375
    ctx->pc = 0x5e0b6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29557, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x5e0b70: 0x4e207369  .word       0x4E207369                   # INVALID     $s1, $zero, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0b70u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0B70 raw=0x4E207369");
    // 0x5e0b74: 0x204c4c55  addi        $t4, $v0, 0x4C55
    ctx->pc = 0x5e0b74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5e0b78: 0x4920726f  .word       0x4920726F                   # INVALID     $t1, $zero, 0x726F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5e0b78u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5E0B78 raw=0x4920726F");
    // 0x5e0b7c: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5e0b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5e0b80: 0xa6469  .word       0x000A6469                   # mtsa        $zero # 000A6440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5e0b80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x5e0b84: 0x0  nop
    ctx->pc = 0x5e0b84u;
    // NOP
    // 0x5e0b88: 0x0  nop
    ctx->pc = 0x5e0b88u;
    // NOP
    // 0x5e0b8c: 0x0  nop
    ctx->pc = 0x5e0b8cu;
    // NOP
    ctx->pc = 0x5e0b90u;
}
