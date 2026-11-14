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

// Function: sub_004E6EB8
// Address: 0x4e6eb8 - 0x4e6ec8
void sub_004E6EB8_0x4e6eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6EB8_0x4e6eb8");
#endif

    ctx->pc = 0x4e6eb8u;

    // 0x4e6eb8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6EB8u;
    {
        const bool branch_taken_0x4e6eb8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6eb8) {
            ctx->pc = 0x4E6EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EB8u;
            // 0x4e6ebc: 0x59444f42  .word       0x59444F42                   # blezl       $t2, . + 4 + (0x4F42 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E6EBC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502460u;
            return;
        }
    }
    ctx->pc = 0x4E6EC0u;
    // 0x4e6ec0: 0x0  nop
    ctx->pc = 0x4e6ec0u;
    // NOP
    // 0x4e6ec4: 0x0  nop
    ctx->pc = 0x4e6ec4u;
    // NOP
    ctx->pc = 0x4e6ec8u;
}
