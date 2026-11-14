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

// Function: sub_004E4B98
// Address: 0x4e4b98 - 0x4e4ba8
void sub_004E4B98_0x4e4b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4B98_0x4e4b98");
#endif

    ctx->pc = 0x4e4b98u;

    // 0x4e4b98: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4B98u;
    {
        const bool branch_taken_0x4e4b98 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4b98) {
            ctx->pc = 0x4E4B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4B98u;
            // 0x4e4b9c: 0x65636166  daddiu      $v1, $t3, 0x6166 (Delay Slot)
            SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24934);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D54u;
            return;
        }
    }
    ctx->pc = 0x4E4BA0u;
    // 0x4e4ba0: 0x0  nop
    ctx->pc = 0x4e4ba0u;
    // NOP
    // 0x4e4ba4: 0x0  nop
    ctx->pc = 0x4e4ba4u;
    // NOP
    ctx->pc = 0x4e4ba8u;
}
