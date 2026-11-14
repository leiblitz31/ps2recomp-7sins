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

// Function: sub_004E6908
// Address: 0x4e6908 - 0x4e6918
void sub_004E6908_0x4e6908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6908_0x4e6908");
#endif

    ctx->pc = 0x4e6908u;

    // 0x4e6908: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6908u;
    {
        const bool branch_taken_0x4e6908 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6908) {
            ctx->pc = 0x4E690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6908u;
            // 0x4e690c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E690C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501EB0u;
            return;
        }
    }
    ctx->pc = 0x4E6910u;
    // 0x4e6910: 0x47465f45  .word       0x47465F45                   # INVALID     $k0, $a2, 0x5F45 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6910u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x5 at 0x4E6910 raw=0x47465F45");
    // 0x4e6914: 0x0  nop
    ctx->pc = 0x4e6914u;
    // NOP
    ctx->pc = 0x4e6918u;
}
