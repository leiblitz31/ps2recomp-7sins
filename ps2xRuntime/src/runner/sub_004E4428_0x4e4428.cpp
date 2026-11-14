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

// Function: sub_004E4428
// Address: 0x4e4428 - 0x4e4438
void sub_004E4428_0x4e4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4428_0x4e4428");
#endif

    ctx->pc = 0x4e4428u;

    // 0x4e4428: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4428u;
    {
        const bool branch_taken_0x4e4428 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4428) {
            ctx->pc = 0x4E442Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4428u;
            // 0x4e442c: 0x635f626d  daddi       $ra, $k0, 0x626D (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)25197; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F84C4u;
            return;
        }
    }
    ctx->pc = 0x4E4430u;
    // 0x4e4430: 0x65636e61  daddiu      $v1, $t3, 0x6E61
    ctx->pc = 0x4e4430u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
    // 0x4e4434: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4434u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    ctx->pc = 0x4e4438u;
}
