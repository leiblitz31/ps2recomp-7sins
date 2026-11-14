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

// Function: sub_004E61C8
// Address: 0x4e61c8 - 0x4e61d8
void sub_004E61C8_0x4e61c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E61C8_0x4e61c8");
#endif

    ctx->pc = 0x4e61c8u;

    // 0x4e61c8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E61C8u;
    {
        const bool branch_taken_0x4e61c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e61c8) {
            ctx->pc = 0x4E61CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E61C8u;
            // 0x4e61cc: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E61CC raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501770u;
            return;
        }
    }
    ctx->pc = 0x4E61D0u;
    // 0x4e61d0: 0x565f45  .word       0x00565F45                   # INVALID     $v0, $s6, 0x5F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e61d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E61D0 raw=0x00565F45");
    // 0x4e61d4: 0x0  nop
    ctx->pc = 0x4e61d4u;
    // NOP
    ctx->pc = 0x4e61d8u;
}
