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

// Function: sub_004E6828
// Address: 0x4e6828 - 0x4e6838
void sub_004E6828_0x4e6828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6828_0x4e6828");
#endif

    ctx->pc = 0x4e6828u;

    // 0x4e6828: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6828u;
    {
        const bool branch_taken_0x4e6828 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6828) {
            ctx->pc = 0x4E682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6828u;
            // 0x4e682c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E682C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501DD0u;
            return;
        }
    }
    ctx->pc = 0x4E6830u;
    // 0x4e6830: 0x4d465f45  .word       0x4D465F45                   # INVALID     $t2, $a2, 0x5F45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6830u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6830 raw=0x4D465F45");
    // 0x4e6834: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e6834u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6838u;
}
