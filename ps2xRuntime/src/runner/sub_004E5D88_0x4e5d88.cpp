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

// Function: sub_004E5D88
// Address: 0x4e5d88 - 0x4e5d98
void sub_004E5D88_0x4e5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D88_0x4e5d88");
#endif

    ctx->pc = 0x4e5d88u;

    // 0x4e5d88: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D88u;
    {
        const bool branch_taken_0x4e5d88 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d88) {
            ctx->pc = 0x4E5D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D88u;
            // 0x4e5d8c: 0x62626172  daddi       $v0, $s3, 0x6172 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501330u;
            return;
        }
    }
    ctx->pc = 0x4E5D90u;
    // 0x4e5d90: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e5d90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x4e5d94: 0x0  nop
    ctx->pc = 0x4e5d94u;
    // NOP
    ctx->pc = 0x4e5d98u;
}
