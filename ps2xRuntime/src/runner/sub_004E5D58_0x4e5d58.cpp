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

// Function: sub_004E5D58
// Address: 0x4e5d58 - 0x4e5d68
void sub_004E5D58_0x4e5d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D58_0x4e5d58");
#endif

    ctx->pc = 0x4e5d58u;

    // 0x4e5d58: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D58u;
    {
        const bool branch_taken_0x4e5d58 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d58) {
            ctx->pc = 0x4E5D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D58u;
            // 0x4e5d5c: 0x64616568  daddiu      $at, $v1, 0x6568 (Delay Slot)
            SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25960);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501300u;
            return;
        }
    }
    ctx->pc = 0x4E5D60u;
    // 0x4e5d60: 0x0  nop
    ctx->pc = 0x4e5d60u;
    // NOP
    // 0x4e5d64: 0x0  nop
    ctx->pc = 0x4e5d64u;
    // NOP
    ctx->pc = 0x4e5d68u;
}
