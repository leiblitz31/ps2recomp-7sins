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

// Function: sub_004E4808
// Address: 0x4e4808 - 0x4e4818
void sub_004E4808_0x4e4808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4808_0x4e4808");
#endif

    ctx->pc = 0x4e4808u;

    // 0x4e4808: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4808u;
    {
        const bool branch_taken_0x4e4808 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4808) {
            ctx->pc = 0x4E480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4808u;
            // 0x4e480c: 0x636f7478  daddi       $t7, $k1, 0x7478 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29816; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F88A4u;
            return;
        }
    }
    ctx->pc = 0x4E4810u;
    // 0x4e4810: 0x746e6f  .word       0x00746E6F                   # dsubu       $t5, $v1, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4810u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 20));
    // 0x4e4814: 0x0  nop
    ctx->pc = 0x4e4814u;
    // NOP
    ctx->pc = 0x4e4818u;
}
