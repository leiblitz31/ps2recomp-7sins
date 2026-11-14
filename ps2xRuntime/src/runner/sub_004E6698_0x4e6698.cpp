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

// Function: sub_004E6698
// Address: 0x4e6698 - 0x4e66a8
void sub_004E6698_0x4e6698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6698_0x4e6698");
#endif

    ctx->pc = 0x4e6698u;

    // 0x4e6698: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6698u;
    {
        const bool branch_taken_0x4e6698 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6698) {
            ctx->pc = 0x4E669Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6698u;
            // 0x4e669c: 0x53525543  beql        $k0, $s2, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E669C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C40u;
            return;
        }
    }
    ctx->pc = 0x4E66A0u;
    // 0x4e66a0: 0x524f  .word       0x0000524F                   # sync # 00005000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e66a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4e66a4: 0x0  nop
    ctx->pc = 0x4e66a4u;
    // NOP
    ctx->pc = 0x4e66a8u;
}
