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

// Function: sub_004E64F0
// Address: 0x4e64f0 - 0x4e6540
void sub_004E64F0_0x4e64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E64F0_0x4e64f0");
#endif

    ctx->pc = 0x4e64f0u;

    // 0x4e64f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e64f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e64f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e64f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e64f8: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e64f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E64F8 raw=0x756F735C");
    // 0x4e64fc: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E64FCu;
    {
        const bool branch_taken_0x4e64fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e64fc) {
            ctx->pc = 0x4E6500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E64FCu;
            // 0x4e6500: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E6500 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF6B8u;
            return;
        }
    }
    ctx->pc = 0x4E6504u;
    // 0x4e6504: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4e6504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e6508: 0x5f676d5c  .word       0x5F676D5C                   # bgtzl       $k1, . + 4 + (0x6D5C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6508u;
    {
        const bool branch_taken_0x4e6508 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6508) {
            ctx->pc = 0x4E650Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6508u;
            // 0x4e650c: 0x6e697264  ldr         $t1, 0x7264($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A7Cu;
            return;
        }
    }
    ctx->pc = 0x4E6510u;
    // 0x4e6510: 0x77722e6b  .word       0x77722E6B                   # INVALID     $k1, $s2, 0x2E6B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6510u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6510 raw=0x77722E6B");
    // 0x4e6514: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e6514u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6518: 0x0  nop
    ctx->pc = 0x4e6518u;
    // NOP
    // 0x4e651c: 0x0  nop
    ctx->pc = 0x4e651cu;
    // NOP
    // 0x4e6520: 0x6082d0  .word       0x006082D0                   # mfhi        $s0 # 006002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6520u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x4e6524: 0x6082d4  .word       0x006082D4                   # dsllv       $s0, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6524u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x4e6528: 0x6082d8  .word       0x006082D8                   # mult        $s0, $v1, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e6528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4e652c: 0x6082dc  .word       0x006082DC                   # dmult       $v1, $zero # 000082C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e652cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E652C raw=0x006082DC");
    // 0x4e6530: 0x6082e0  .word       0x006082E0                   # add         $s0, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6530u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x4e6534: 0x6082e4  .word       0x006082E4                   # and         $s0, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 0));
    // 0x4e6538: 0x6082e8  .word       0x006082E8                   # mfsa        $s0 # 006002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e6538u;
    SET_GPR_U32(ctx, 16, ctx->sa);
    // 0x4e653c: 0x0  nop
    ctx->pc = 0x4e653cu;
    // NOP
    ctx->pc = 0x4e6540u;
}
