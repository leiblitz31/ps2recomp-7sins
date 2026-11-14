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

// Function: sub_004E6990
// Address: 0x4e6990 - 0x4e69b8
void sub_004E6990_0x4e6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6990_0x4e6990");
#endif

    ctx->pc = 0x4e6990u;

    // 0x4e6990: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6990u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6994: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6994u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6998: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6998u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6998 raw=0x756F735C");
    // 0x4e699c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E699Cu;
    {
        const bool branch_taken_0x4e699c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e699c) {
            ctx->pc = 0x4E69A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E699Cu;
            // 0x4e69a0: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E69A0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFB58u;
            return;
        }
    }
    ctx->pc = 0x4E69A4u;
    // 0x4e69a4: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4e69a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e69a8: 0x5f676d5c  .word       0x5F676D5C                   # bgtzl       $k1, . + 4 + (0x6D5C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E69A8u;
    {
        const bool branch_taken_0x4e69a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e69a8) {
            ctx->pc = 0x4E69ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E69A8u;
            // 0x4e69ac: 0x68676966  ldl         $a3, 0x6966($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501F1Cu;
            return;
        }
    }
    ctx->pc = 0x4E69B0u;
    // 0x4e69b0: 0x77722e74  .word       0x77722E74                   # INVALID     $k1, $s2, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e69b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E69B0 raw=0x77722E74");
    // 0x4e69b4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e69b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e69b8u;
}
