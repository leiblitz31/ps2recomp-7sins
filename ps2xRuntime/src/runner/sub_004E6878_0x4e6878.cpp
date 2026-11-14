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

// Function: sub_004E6878
// Address: 0x4e6878 - 0x4e6888
void sub_004E6878_0x4e6878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6878_0x4e6878");
#endif

    ctx->pc = 0x4e6878u;

    // 0x4e6878: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6878u;
    {
        const bool branch_taken_0x4e6878 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6878) {
            ctx->pc = 0x4E687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6878u;
            // 0x4e687c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E687C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E20u;
            return;
        }
    }
    ctx->pc = 0x4E6880u;
    // 0x4e6880: 0x32565f45  andi        $s6, $s2, 0x5F45
    ctx->pc = 0x4e6880u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)24389);
    // 0x4e6884: 0x0  nop
    ctx->pc = 0x4e6884u;
    // NOP
    ctx->pc = 0x4e6888u;
}
