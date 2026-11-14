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

// Function: sub_004E6958
// Address: 0x4e6958 - 0x4e6968
void sub_004E6958_0x4e6958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6958_0x4e6958");
#endif

    ctx->pc = 0x4e6958u;

    // 0x4e6958: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6958u;
    {
        const bool branch_taken_0x4e6958 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6958) {
            ctx->pc = 0x4E695Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6958u;
            // 0x4e695c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E695C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501F00u;
            return;
        }
    }
    ctx->pc = 0x4E6960u;
    // 0x4e6960: 0x44465f45  .word       0x44465F45                   # cfc1        $a2, $11 # 00000745 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6960u;
    SET_GPR_U32(ctx, 6, 0); // Unimplemented FCR11
    // 0x4e6964: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e6964u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6968u;
}
