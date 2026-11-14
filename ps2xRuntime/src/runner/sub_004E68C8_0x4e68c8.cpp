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

// Function: sub_004E68C8
// Address: 0x4e68c8 - 0x4e68d8
void sub_004E68C8_0x4e68c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68C8_0x4e68c8");
#endif

    ctx->pc = 0x4e68c8u;

    // 0x4e68c8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E68C8u;
    {
        const bool branch_taken_0x4e68c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e68c8) {
            ctx->pc = 0x4E68CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E68C8u;
            // 0x4e68cc: 0x746e6167  .word       0x746E6167                   # INVALID     $v1, $t6, 0x6167 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E68CC raw=0x746E6167");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E70u;
            return;
        }
    }
    ctx->pc = 0x4E68D0u;
    // 0x4e68d0: 0x325f  .word       0x0000325F                   # ddivu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e68d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E68D0 raw=0x0000325F");
    // 0x4e68d4: 0x0  nop
    ctx->pc = 0x4e68d4u;
    // NOP
    ctx->pc = 0x4e68d8u;
}
