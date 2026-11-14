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

// Function: sub_004E6F40
// Address: 0x4e6f40 - 0x4e6f50
void sub_004E6F40_0x4e6f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F40_0x4e6f40");
#endif

    ctx->pc = 0x4e6f40u;

    // 0x4e6f40: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6F40u;
    {
        const bool branch_taken_0x4e6f40 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f40) {
            ctx->pc = 0x4E6F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F40u;
            // 0x4e6f44: 0x414c5053  .word       0x414C5053                   # INVALID     $t2, $t4, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6F44 raw=0x414C5053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5024E8u;
            return;
        }
    }
    ctx->pc = 0x4E6F48u;
    // 0x4e6f48: 0x485f4853  .word       0x485F4853                   # cfc2.i      $ra, $vi9 # 00000052 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e6f48u;
    SET_GPR_U32(ctx, 31, static_cast<uint32_t>(ctx->vi[9]));
    // 0x4e6f4c: 0x444145  .word       0x00444145                   # INVALID     $v0, $a0, 0x4145 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6F4C raw=0x00444145");
    ctx->pc = 0x4e6f50u;
}
