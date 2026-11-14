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

// Function: sub_004E6260
// Address: 0x4e6260 - 0x4e6270
void sub_004E6260_0x4e6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6260_0x4e6260");
#endif

    ctx->pc = 0x4e6260u;

    // 0x4e6260: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6260u;
    {
        const bool branch_taken_0x4e6260 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6260) {
            ctx->pc = 0x4E6264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6260u;
            // 0x4e6264: 0x52424d4f  beql        $s2, $v0, . + 4 + (0x4D4F << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6264 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501808u;
            return;
        }
    }
    ctx->pc = 0x4E6268u;
    // 0x4e6268: 0x45565f45  .word       0x45565F45                   # INVALID     $t2, $s6, 0x5F45 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6268u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x4E6268 raw=0x45565F45");
    // 0x4e626c: 0x455252  .word       0x00455252                   # mflo        $t2 # 00450240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e626cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    ctx->pc = 0x4e6270u;
}
