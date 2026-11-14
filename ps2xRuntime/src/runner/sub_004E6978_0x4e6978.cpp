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

// Function: sub_004E6978
// Address: 0x4e6978 - 0x4e6990
void sub_004E6978_0x4e6978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6978_0x4e6978");
#endif

    ctx->pc = 0x4e6978u;

    // 0x4e6978: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6978u;
    {
        const bool branch_taken_0x4e6978 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6978) {
            ctx->pc = 0x4E697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6978u;
            // 0x4e697c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E697C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501F20u;
            return;
        }
    }
    ctx->pc = 0x4E6980u;
    // 0x4e6980: 0x46525f45  .word       0x46525F45                   # INVALID     $s2, $s2, 0x5F45 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6980u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x5 at 0x4E6980 raw=0x46525F45");
    // 0x4e6984: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e6984u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6988: 0x0  nop
    ctx->pc = 0x4e6988u;
    // NOP
    // 0x4e698c: 0x0  nop
    ctx->pc = 0x4e698cu;
    // NOP
    ctx->pc = 0x4e6990u;
}
