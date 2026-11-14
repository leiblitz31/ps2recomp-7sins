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

// Function: sub_004E61E8
// Address: 0x4e61e8 - 0x4e61f8
void sub_004E61E8_0x4e61e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E61E8_0x4e61e8");
#endif

    ctx->pc = 0x4e61e8u;

    // 0x4e61e8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E61E8u;
    {
        const bool branch_taken_0x4e61e8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e61e8) {
            ctx->pc = 0x4E61ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E61E8u;
            // 0x4e61ec: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E61EC raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501790u;
            return;
        }
    }
    ctx->pc = 0x4E61F0u;
    // 0x4e61f0: 0x43565f45  .word       0x43565F45                   # INVALID     $k0, $s6, 0x5F45 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e61f0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E61F0 raw=0x43565F45");
    // 0x4e61f4: 0x0  nop
    ctx->pc = 0x4e61f4u;
    // NOP
    ctx->pc = 0x4e61f8u;
}
