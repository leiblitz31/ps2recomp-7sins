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

// Function: sub_004E11A8
// Address: 0x4e11a8 - 0x4e11b8
void sub_004E11A8_0x4e11a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E11A8_0x4e11a8");
#endif

    ctx->pc = 0x4e11a8u;

    // 0x4e11a8: 0x5445525f  bnel        $v0, $a1, . + 4 + (0x525F << 2)
    ctx->pc = 0x4E11A8u;
    {
        const bool branch_taken_0x4e11a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e11a8) {
            ctx->pc = 0x4E11ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E11A8u;
            // 0x4e11ac: 0xa4c4941  j           func_9312504 (Delay Slot)
            // J 0x9312504 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5B28u;
            return;
        }
    }
    ctx->pc = 0x4E11B0u;
    // 0x4e11b0: 0x0  nop
    ctx->pc = 0x4e11b0u;
    // NOP
    // 0x4e11b4: 0x0  nop
    ctx->pc = 0x4e11b4u;
    // NOP
    ctx->pc = 0x4e11b8u;
}
