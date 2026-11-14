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

// Function: sub_004E4920
// Address: 0x4e4920 - 0x4e4938
void sub_004E4920_0x4e4920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4920_0x4e4920");
#endif

    ctx->pc = 0x4e4920u;

    // 0x4e4920: 0x725f6270  .word       0x725F6270                   # INVALID     $s2, $ra, 0x6270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e4920u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E4920 raw=0x725F6270");
    // 0x4e4924: 0x635f6c65  daddi       $ra, $k0, 0x6C65
    ctx->pc = 0x4e4924u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x4e4928: 0x5f657361  .word       0x5F657361                   # bgtzl       $k1, . + 4 + (0x7361 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4928u;
    {
        const bool branch_taken_0x4e4928 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4928) {
            ctx->pc = 0x4E492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4928u;
            // 0x4e492c: 0x696f7465  ldl         $t7, 0x7465($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5016B0u;
            return;
        }
    }
    ctx->pc = 0x4E4930u;
    // 0x4e4930: 0x6425656c  daddiu      $a1, $at, 0x656C
    ctx->pc = 0x4e4930u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25964);
    // 0x4e4934: 0x0  nop
    ctx->pc = 0x4e4934u;
    // NOP
    ctx->pc = 0x4e4938u;
}
