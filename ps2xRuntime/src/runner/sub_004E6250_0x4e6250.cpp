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

// Function: sub_004E6250
// Address: 0x4e6250 - 0x4e6260
void sub_004E6250_0x4e6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6250_0x4e6250");
#endif

    ctx->pc = 0x4e6250u;

    // 0x4e6250: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6250u;
    {
        const bool branch_taken_0x4e6250 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6250) {
            ctx->pc = 0x4E6254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6250u;
            // 0x4e6254: 0x52524556  beql        $s2, $s2, . + 4 + (0x4556 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6254 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5017F8u;
            return;
        }
    }
    ctx->pc = 0x4E6258u;
    // 0x4e6258: 0x4f465f45  .word       0x4F465F45                   # INVALID     $k0, $a2, 0x5F45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6258u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6258 raw=0x4F465F45");
    // 0x4e625c: 0x444e  .word       0x0000444E                   # INVALID     $zero, $zero, 0x444E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e625cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E625C raw=0x0000444E");
    ctx->pc = 0x4e6260u;
}
