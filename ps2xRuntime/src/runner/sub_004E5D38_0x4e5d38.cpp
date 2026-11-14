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

// Function: sub_004E5D38
// Address: 0x4e5d38 - 0x4e5d48
void sub_004E5D38_0x4e5d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D38_0x4e5d38");
#endif

    ctx->pc = 0x4e5d38u;

    // 0x4e5d38: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D38u;
    {
        const bool branch_taken_0x4e5d38 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d38) {
            ctx->pc = 0x4E5D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D38u;
            // 0x4e5d3c: 0x676e6173  daddiu      $t6, $k1, 0x6173 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24947);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5012E0u;
            return;
        }
    }
    ctx->pc = 0x4E5D40u;
    // 0x4e5d40: 0x0  nop
    ctx->pc = 0x4e5d40u;
    // NOP
    // 0x4e5d44: 0x0  nop
    ctx->pc = 0x4e5d44u;
    // NOP
    ctx->pc = 0x4e5d48u;
}
