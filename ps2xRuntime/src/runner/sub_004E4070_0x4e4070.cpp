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

// Function: sub_004E4070
// Address: 0x4e4070 - 0x4e4080
void sub_004E4070_0x4e4070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4070_0x4e4070");
#endif

    ctx->pc = 0x4e4070u;

    // 0x4e4070: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4070u;
    {
        const bool branch_taken_0x4e4070 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4070) {
            ctx->pc = 0x4E4074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4070u;
            // 0x4e4074: 0x61736f6e  daddi       $s3, $t3, 0x6F6E (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28526; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F810Cu;
            return;
        }
    }
    ctx->pc = 0x4E4078u;
    // 0x4e4078: 0x75746576  .word       0x75746576                   # INVALID     $t3, $s4, 0x6576 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4078u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4078 raw=0x75746576");
    // 0x4e407c: 0x306f74  teq         $at, $s0, 445
    ctx->pc = 0x4e407cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e4080u;
}
