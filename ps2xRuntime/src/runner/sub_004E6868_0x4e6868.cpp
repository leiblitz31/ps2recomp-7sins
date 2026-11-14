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

// Function: sub_004E6868
// Address: 0x4e6868 - 0x4e6878
void sub_004E6868_0x4e6868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6868_0x4e6868");
#endif

    ctx->pc = 0x4e6868u;

    // 0x4e6868: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6868u;
    {
        const bool branch_taken_0x4e6868 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6868) {
            ctx->pc = 0x4E686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6868u;
            // 0x4e686c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E686C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E10u;
            return;
        }
    }
    ctx->pc = 0x4E6870u;
    // 0x4e6870: 0x525f45  .word       0x00525F45                   # INVALID     $v0, $s2, 0x5F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6870u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6870 raw=0x00525F45");
    // 0x4e6874: 0x0  nop
    ctx->pc = 0x4e6874u;
    // NOP
    ctx->pc = 0x4e6878u;
}
