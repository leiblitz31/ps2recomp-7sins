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

// Function: sub_004ED580
// Address: 0x4ed580 - 0x4ed5b8
void sub_004ED580_0x4ed580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED580_0x4ed580");
#endif

    ctx->pc = 0x4ed580u;

    // 0x4ed580: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed580u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed584: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed584u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed588: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ed588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4ed58c: 0x6f5c736d  ldr         $gp, 0x736D($k0)
    ctx->pc = 0x4ed58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29549); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
    // 0x4ed590: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x4ed590u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4ed594: 0x5c7374  teq         $v0, $gp, 461
    ctx->pc = 0x4ed594u;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed598: 0x0  nop
    ctx->pc = 0x4ed598u;
    // NOP
    // 0x4ed59c: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ed59cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x4ED59C raw=0x42A00000");
    // 0x4ed5a0: 0x0  nop
    ctx->pc = 0x4ed5a0u;
    // NOP
    // 0x4ed5a4: 0x0  nop
    ctx->pc = 0x4ed5a4u;
    // NOP
    // 0x4ed5a8: 0x5f6c6573  .word       0x5F6C6573                   # bgtzl       $k1, . + 4 + (0x6573 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ED5A8u;
    {
        const bool branch_taken_0x4ed5a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ed5a8) {
            ctx->pc = 0x4ED5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED5A8u;
            // 0x4ed5ac: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4ED5AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x506B78u;
            return;
        }
    }
    ctx->pc = 0x4ED5B0u;
    // 0x4ed5b0: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4ed5b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed5b4: 0x0  nop
    ctx->pc = 0x4ed5b4u;
    // NOP
    ctx->pc = 0x4ed5b8u;
}
