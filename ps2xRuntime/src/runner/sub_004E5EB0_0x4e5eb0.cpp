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

// Function: sub_004E5EB0
// Address: 0x4e5eb0 - 0x4e5ec0
void sub_004E5EB0_0x4e5eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5EB0_0x4e5eb0");
#endif

    ctx->pc = 0x4e5eb0u;

    // 0x4e5eb0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5EB0u;
    {
        const bool branch_taken_0x4e5eb0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5eb0) {
            ctx->pc = 0x4E5EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5EB0u;
            // 0x4e5eb4: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501458u;
            return;
        }
    }
    ctx->pc = 0x4E5EB8u;
    // 0x4e5eb8: 0x61776c61  daddi       $s7, $t3, 0x6C61
    ctx->pc = 0x4e5eb8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27745; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
    // 0x4e5ebc: 0x356b6c  .word       0x00356B6C                   # dadd        $t5, $at, $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5ebcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
    ctx->pc = 0x4e5ec0u;
}
