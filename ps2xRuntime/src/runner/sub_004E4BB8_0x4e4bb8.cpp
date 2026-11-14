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

// Function: sub_004E4BB8
// Address: 0x4e4bb8 - 0x4e4bc8
void sub_004E4BB8_0x4e4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BB8_0x4e4bb8");
#endif

    ctx->pc = 0x4e4bb8u;

    // 0x4e4bb8: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4BB8u;
    {
        const bool branch_taken_0x4e4bb8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4bb8) {
            ctx->pc = 0x4E4BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4BB8u;
            // 0x4e4bbc: 0x63736564  daddi       $s3, $k1, 0x6564 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D74u;
            return;
        }
    }
    ctx->pc = 0x4E4BC0u;
    // 0x4e4bc0: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x4e4bc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4bc4: 0x0  nop
    ctx->pc = 0x4e4bc4u;
    // NOP
    ctx->pc = 0x4e4bc8u;
}
