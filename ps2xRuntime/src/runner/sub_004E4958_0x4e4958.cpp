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

// Function: sub_004E4958
// Address: 0x4e4958 - 0x4e4968
void sub_004E4958_0x4e4958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4958_0x4e4958");
#endif

    ctx->pc = 0x4e4958u;

    // 0x4e4958: 0x5f6c6572  .word       0x5F6C6572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4958u;
    {
        const bool branch_taken_0x4e4958 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4958) {
            ctx->pc = 0x4E495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4958u;
            // 0x4e495c: 0x645f7866  daddiu      $ra, $v0, 0x7866 (Delay Slot)
            SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)30822);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDF24u;
            return;
        }
    }
    ctx->pc = 0x4E4960u;
    // 0x4e4960: 0x6e776f  .word       0x006E776F                   # dsubu       $t6, $v1, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4960u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 14));
    // 0x4e4964: 0x0  nop
    ctx->pc = 0x4e4964u;
    // NOP
    ctx->pc = 0x4e4968u;
}
