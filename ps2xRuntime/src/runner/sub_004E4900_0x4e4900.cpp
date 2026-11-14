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

// Function: sub_004E4900
// Address: 0x4e4900 - 0x4e4920
void sub_004E4900_0x4e4900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4900_0x4e4900");
#endif

    ctx->pc = 0x4e4900u;

    // 0x4e4900: 0x725f6270  .word       0x725F6270                   # INVALID     $s2, $ra, 0x6270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e4900u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E4900 raw=0x725F6270");
    // 0x4e4904: 0x635f6c65  daddi       $ra, $k0, 0x6C65
    ctx->pc = 0x4e4904u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x4e4908: 0x5f657361  .word       0x5F657361                   # bgtzl       $k1, . + 4 + (0x7361 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4908u;
    {
        const bool branch_taken_0x4e4908 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4908) {
            ctx->pc = 0x4E490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4908u;
            // 0x4e490c: 0x64256f6e  daddiu      $a1, $at, 0x6F6E (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28526);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501690u;
            return;
        }
    }
    ctx->pc = 0x4E4910u;
    // 0x4e4910: 0x0  nop
    ctx->pc = 0x4e4910u;
    // NOP
    // 0x4e4914: 0x0  nop
    ctx->pc = 0x4e4914u;
    // NOP
    // 0x4e4918: 0x0  nop
    ctx->pc = 0x4e4918u;
    // NOP
    // 0x4e491c: 0x0  nop
    ctx->pc = 0x4e491cu;
    // NOP
    ctx->pc = 0x4e4920u;
}
