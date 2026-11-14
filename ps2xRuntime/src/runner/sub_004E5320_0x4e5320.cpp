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

// Function: sub_004E5320
// Address: 0x4e5320 - 0x4e5330
void sub_004E5320_0x4e5320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5320_0x4e5320");
#endif

    ctx->pc = 0x4e5320u;

    // 0x4e5320: 0x5f746361  .word       0x5F746361                   # bgtzl       $k1, . + 4 + (0x6361 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5320u;
    {
        const bool branch_taken_0x4e5320 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5320) {
            ctx->pc = 0x4E5324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5320u;
            // 0x4e5324: 0x625f7866  daddi       $ra, $s2, 0x7866 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0A8u;
            return;
        }
    }
    ctx->pc = 0x4E5328u;
    // 0x4e5328: 0x6769  .word       0x00006769                   # mtsa        $zero # 00006740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e5328u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x4e532c: 0x0  nop
    ctx->pc = 0x4e532cu;
    // NOP
    ctx->pc = 0x4e5330u;
}
