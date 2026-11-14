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

// Function: sub_004E5D78
// Address: 0x4e5d78 - 0x4e5d88
void sub_004E5D78_0x4e5d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D78_0x4e5d78");
#endif

    ctx->pc = 0x4e5d78u;

    // 0x4e5d78: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D78u;
    {
        const bool branch_taken_0x4e5d78 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d78) {
            ctx->pc = 0x4E5D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D78u;
            // 0x4e5d7c: 0x74616566  .word       0x74616566                   # INVALID     $v1, $at, 0x6566 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5D7C raw=0x74616566");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501320u;
            return;
        }
    }
    ctx->pc = 0x4E5D80u;
    // 0x4e5d80: 0x726568  .word       0x00726568                   # mfsa        $t4 # 00720540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e5d80u;
    SET_GPR_U32(ctx, 12, ctx->sa);
    // 0x4e5d84: 0x0  nop
    ctx->pc = 0x4e5d84u;
    // NOP
    ctx->pc = 0x4e5d88u;
}
