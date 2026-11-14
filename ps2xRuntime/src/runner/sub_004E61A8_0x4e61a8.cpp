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

// Function: sub_004E61A8
// Address: 0x4e61a8 - 0x4e61b8
void sub_004E61A8_0x4e61a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E61A8_0x4e61a8");
#endif

    ctx->pc = 0x4e61a8u;

    // 0x4e61a8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E61A8u;
    {
        const bool branch_taken_0x4e61a8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e61a8) {
            ctx->pc = 0x4E61ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E61A8u;
            // 0x4e61ac: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E61AC raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501750u;
            return;
        }
    }
    ctx->pc = 0x4E61B0u;
    // 0x4e61b0: 0x4a5f45  .word       0x004A5F45                   # INVALID     $v0, $t2, 0x5F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e61b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E61B0 raw=0x004A5F45");
    // 0x4e61b4: 0x0  nop
    ctx->pc = 0x4e61b4u;
    // NOP
    ctx->pc = 0x4e61b8u;
}
