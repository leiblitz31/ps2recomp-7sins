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

// Function: sub_004E4978
// Address: 0x4e4978 - 0x4e4988
void sub_004E4978_0x4e4978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4978_0x4e4978");
#endif

    ctx->pc = 0x4e4978u;

    // 0x4e4978: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4978u;
    {
        const bool branch_taken_0x4e4978 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4978) {
            ctx->pc = 0x4E497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4978u;
            // 0x4e497c: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500B34u;
            return;
        }
    }
    ctx->pc = 0x4E4980u;
    // 0x4e4980: 0x0  nop
    ctx->pc = 0x4e4980u;
    // NOP
    // 0x4e4984: 0x0  nop
    ctx->pc = 0x4e4984u;
    // NOP
    ctx->pc = 0x4e4988u;
}
