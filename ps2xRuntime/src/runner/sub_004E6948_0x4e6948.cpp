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

// Function: sub_004E6948
// Address: 0x4e6948 - 0x4e6958
void sub_004E6948_0x4e6948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6948_0x4e6948");
#endif

    ctx->pc = 0x4e6948u;

    // 0x4e6948: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6948u;
    {
        const bool branch_taken_0x4e6948 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6948) {
            ctx->pc = 0x4E694Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6948u;
            // 0x4e694c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E694C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501EF0u;
            return;
        }
    }
    ctx->pc = 0x4E6950u;
    // 0x4e6950: 0x47465f45  .word       0x47465F45                   # INVALID     $k0, $a2, 0x5F45 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6950u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x5 at 0x4E6950 raw=0x47465F45");
    // 0x4e6954: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e6954u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6958u;
}
