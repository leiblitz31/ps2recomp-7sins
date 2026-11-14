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

// Function: sub_004ECF50
// Address: 0x4ecf50 - 0x4ecf60
void sub_004ECF50_0x4ecf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF50_0x4ecf50");
#endif

    ctx->pc = 0x4ecf50u;

    // 0x4ecf50: 0x5f544341  .word       0x5F544341                   # bgtzl       $k0, . + 4 + (0x4341 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECF50u;
    {
        const bool branch_taken_0x4ecf50 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ecf50) {
            ctx->pc = 0x4ECF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECF50u;
            // 0x4ecf54: 0x5f6f7053  .word       0x5F6F7053                   # bgtzl       $k1, . + 4 + (0x7053 << 2) # 000F0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4ECF54 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDC58u;
            return;
        }
    }
    ctx->pc = 0x4ECF58u;
    // 0x4ecf58: 0x65706956  daddiu      $s0, $t3, 0x6956
    ctx->pc = 0x4ecf58u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26966);
    // 0x4ecf5c: 0x6572  tlt         $zero, $zero, 405
    ctx->pc = 0x4ecf5cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4ecf60u;
}
