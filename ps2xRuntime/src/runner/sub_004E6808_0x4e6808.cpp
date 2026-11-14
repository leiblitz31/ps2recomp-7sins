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

// Function: sub_004E6808
// Address: 0x4e6808 - 0x4e6818
void sub_004E6808_0x4e6808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6808_0x4e6808");
#endif

    ctx->pc = 0x4e6808u;

    // 0x4e6808: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6808u;
    {
        const bool branch_taken_0x4e6808 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6808) {
            ctx->pc = 0x4E680Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6808u;
            // 0x4e680c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E680C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501DB0u;
            return;
        }
    }
    ctx->pc = 0x4E6810u;
    // 0x4e6810: 0x565f45  .word       0x00565F45                   # INVALID     $v0, $s6, 0x5F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6810u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6810 raw=0x00565F45");
    // 0x4e6814: 0x0  nop
    ctx->pc = 0x4e6814u;
    // NOP
    ctx->pc = 0x4e6818u;
}
