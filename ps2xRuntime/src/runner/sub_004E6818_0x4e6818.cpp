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

// Function: sub_004E6818
// Address: 0x4e6818 - 0x4e6828
void sub_004E6818_0x4e6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6818_0x4e6818");
#endif

    ctx->pc = 0x4e6818u;

    // 0x4e6818: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6818u;
    {
        const bool branch_taken_0x4e6818 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6818) {
            ctx->pc = 0x4E681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6818u;
            // 0x4e681c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E681C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501DC0u;
            return;
        }
    }
    ctx->pc = 0x4E6820u;
    // 0x4e6820: 0x4d465f45  .word       0x4D465F45                   # INVALID     $t2, $a2, 0x5F45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6820u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6820 raw=0x4D465F45");
    // 0x4e6824: 0x0  nop
    ctx->pc = 0x4e6824u;
    // NOP
    ctx->pc = 0x4e6828u;
}
