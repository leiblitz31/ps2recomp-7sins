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

// Function: sub_004E6F50
// Address: 0x4e6f50 - 0x4e6f60
void sub_004E6F50_0x4e6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F50_0x4e6f50");
#endif

    ctx->pc = 0x4e6f50u;

    // 0x4e6f50: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6F50u;
    {
        const bool branch_taken_0x4e6f50 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f50) {
            ctx->pc = 0x4E6F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F50u;
            // 0x4e6f54: 0x414c5053  .word       0x414C5053                   # INVALID     $t2, $t4, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6F54 raw=0x414C5053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5024F8u;
            return;
        }
    }
    ctx->pc = 0x4E6F58u;
    // 0x4e6f58: 0x425f4853  .word       0x425F4853                   # INVALID     $s2, $ra, 0x4853 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6f58u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E6F58 raw=0x425F4853");
    // 0x4e6f5c: 0x59444f  .word       0x0059444F                   # sync.p # 00594000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x4e6f60u;
}
