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

// Function: sub_004E47E8
// Address: 0x4e47e8 - 0x4e47f8
void sub_004E47E8_0x4e47e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E47E8_0x4e47e8");
#endif

    ctx->pc = 0x4e47e8u;

    // 0x4e47e8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E47E8u;
    {
        const bool branch_taken_0x4e47e8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e47e8) {
            ctx->pc = 0x4E47ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E47E8u;
            // 0x4e47ec: 0x6425786e  daddiu      $a1, $at, 0x786E (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)30830);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFD90u;
            return;
        }
    }
    ctx->pc = 0x4E47F0u;
    // 0x4e47f0: 0x0  nop
    ctx->pc = 0x4e47f0u;
    // NOP
    // 0x4e47f4: 0x0  nop
    ctx->pc = 0x4e47f4u;
    // NOP
    ctx->pc = 0x4e47f8u;
}
