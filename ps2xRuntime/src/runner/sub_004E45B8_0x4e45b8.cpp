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

// Function: sub_004E45B8
// Address: 0x4e45b8 - 0x4e45c8
void sub_004E45B8_0x4e45b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E45B8_0x4e45b8");
#endif

    ctx->pc = 0x4e45b8u;

    // 0x4e45b8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E45B8u;
    {
        const bool branch_taken_0x4e45b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e45b8) {
            ctx->pc = 0x4E45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E45B8u;
            // 0x4e45bc: 0x736c726c  .word       0x736C726C                   # INVALID     $k1, $t4, 0x726C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E45BC raw=0x736C726C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50278Cu;
            return;
        }
    }
    ctx->pc = 0x4E45C0u;
    // 0x4e45c0: 0x0  nop
    ctx->pc = 0x4e45c0u;
    // NOP
    // 0x4e45c4: 0x0  nop
    ctx->pc = 0x4e45c4u;
    // NOP
    ctx->pc = 0x4e45c8u;
}
