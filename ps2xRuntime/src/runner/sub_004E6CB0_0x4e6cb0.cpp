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

// Function: sub_004E6CB0
// Address: 0x4e6cb0 - 0x4e6cc8
void sub_004E6CB0_0x4e6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6CB0_0x4e6cb0");
#endif

    ctx->pc = 0x4e6cb0u;

    // 0x4e6cb0: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6CB0u;
    {
        const bool branch_taken_0x4e6cb0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e6cb0) {
            ctx->pc = 0x4E6CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6CB0u;
            // 0x4e6cb4: 0x656a626f  daddiu      $t2, $t3, 0x626F (Delay Slot)
            SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA14Cu;
            return;
        }
    }
    ctx->pc = 0x4E6CB8u;
    // 0x4e6cb8: 0x76697463  .word       0x76697463                   # INVALID     $s3, $t1, 0x7463 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6cb8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6CB8 raw=0x76697463");
    // 0x4e6cbc: 0x30257365  andi        $a1, $at, 0x7365
    ctx->pc = 0x4e6cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29541);
    // 0x4e6cc0: 0x63256432  daddi       $a1, $t9, 0x6432
    ctx->pc = 0x4e6cc0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25650; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e6cc4: 0x0  nop
    ctx->pc = 0x4e6cc4u;
    // NOP
    ctx->pc = 0x4e6cc8u;
}
