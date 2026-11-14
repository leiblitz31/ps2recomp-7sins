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

// Function: sub_004E6F18
// Address: 0x4e6f18 - 0x4e6f28
void sub_004E6F18_0x4e6f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F18_0x4e6f18");
#endif

    ctx->pc = 0x4e6f18u;

    // 0x4e6f18: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6F18u;
    {
        const bool branch_taken_0x4e6f18 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f18) {
            ctx->pc = 0x4E6F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F18u;
            // 0x4e6f1c: 0x54414c50  bnel        $v0, $at, . + 4 + (0x4C50 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6F1C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5024C0u;
            return;
        }
    }
    ctx->pc = 0x4E6F20u;
    // 0x4e6f20: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6F20 raw=0x00000045");
    // 0x4e6f24: 0x0  nop
    ctx->pc = 0x4e6f24u;
    // NOP
    ctx->pc = 0x4e6f28u;
}
