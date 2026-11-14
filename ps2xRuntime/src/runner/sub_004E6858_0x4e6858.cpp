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

// Function: sub_004E6858
// Address: 0x4e6858 - 0x4e6868
void sub_004E6858_0x4e6858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6858_0x4e6858");
#endif

    ctx->pc = 0x4e6858u;

    // 0x4e6858: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6858u;
    {
        const bool branch_taken_0x4e6858 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6858) {
            ctx->pc = 0x4E685Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6858u;
            // 0x4e685c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E685C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E00u;
            return;
        }
    }
    ctx->pc = 0x4E6860u;
    // 0x4e6860: 0x524a5f45  beql        $s2, $t2, . + 4 + (0x5F45 << 2)
    ctx->pc = 0x4E6860u;
    {
        const bool branch_taken_0x4e6860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 10));
        if (branch_taken_0x4e6860) {
            ctx->pc = 0x4FE578u;
            return;
        }
    }
    ctx->pc = 0x4E6868u;
}
