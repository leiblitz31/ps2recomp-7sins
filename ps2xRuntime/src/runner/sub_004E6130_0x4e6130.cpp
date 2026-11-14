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

// Function: sub_004E6130
// Address: 0x4e6130 - 0x4e6158
void sub_004E6130_0x4e6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6130_0x4e6130");
#endif

    ctx->pc = 0x4e6130u;

    // 0x4e6130: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6130u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6134: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6134u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6138: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6138u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6138 raw=0x756F735C");
    // 0x4e613c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E613Cu;
    {
        const bool branch_taken_0x4e613c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e613c) {
            ctx->pc = 0x4E6140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E613Cu;
            // 0x4e6140: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E6140 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF2F8u;
            return;
        }
    }
    ctx->pc = 0x4E6144u;
    // 0x4e6144: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4e6144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e6148: 0x5f676d5c  .word       0x5F676D5C                   # bgtzl       $k1, . + 4 + (0x6D5C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6148u;
    {
        const bool branch_taken_0x4e6148 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6148) {
            ctx->pc = 0x4E614Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6148u;
            // 0x4e614c: 0x2e677562  sltiu       $a3, $s3, 0x7562 (Delay Slot)
            SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30050) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5016BCu;
            return;
        }
    }
    ctx->pc = 0x4E6150u;
    // 0x4e6150: 0x737772  tlt         $v1, $s3, 477
    ctx->pc = 0x4e6150u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6154: 0x0  nop
    ctx->pc = 0x4e6154u;
    // NOP
    ctx->pc = 0x4e6158u;
}
