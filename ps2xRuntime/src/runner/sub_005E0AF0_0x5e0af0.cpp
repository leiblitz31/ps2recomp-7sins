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

// Function: sub_005E0AF0
// Address: 0x5e0af0 - 0x5e0b10
void sub_005E0AF0_0x5e0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0AF0_0x5e0af0");
#endif

    ctx->pc = 0x5e0af0u;

    // 0x5e0af0: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0AF0u;
    {
        const bool branch_taken_0x5e0af0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0af0) {
            ctx->pc = 0x5E0AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0AF0u;
            // 0x5e0af4: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDC84u;
            return;
        }
    }
    ctx->pc = 0x5E0AF8u;
    // 0x5e0af8: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0af8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0afc: 0x632e7463  daddi       $t6, $t9, 0x7463
    ctx->pc = 0x5e0afcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29795; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5e0b00: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x5e0b00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e0b04: 0x0  nop
    ctx->pc = 0x5e0b04u;
    // NOP
    // 0x5e0b08: 0x0  nop
    ctx->pc = 0x5e0b08u;
    // NOP
    // 0x5e0b0c: 0x0  nop
    ctx->pc = 0x5e0b0cu;
    // NOP
    ctx->pc = 0x5e0b10u;
}
