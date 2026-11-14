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

// Function: sub_004E4438
// Address: 0x4e4438 - 0x4e4448
void sub_004E4438_0x4e4438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4438_0x4e4438");
#endif

    ctx->pc = 0x4e4438u;

    // 0x4e4438: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4438u;
    {
        const bool branch_taken_0x4e4438 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4438) {
            ctx->pc = 0x4E443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4438u;
            // 0x4e443c: 0x795f626d  lq          $ra, 0x626D($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 10), 25197)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F84D4u;
            return;
        }
    }
    ctx->pc = 0x4E4440u;
    // 0x4e4440: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4440u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4444: 0x0  nop
    ctx->pc = 0x4e4444u;
    // NOP
    ctx->pc = 0x4e4448u;
}
