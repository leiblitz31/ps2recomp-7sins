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

// Function: sub_004E67B0
// Address: 0x4e67b0 - 0x4e67c0
void sub_004E67B0_0x4e67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E67B0_0x4e67b0");
#endif

    ctx->pc = 0x4e67b0u;

    // 0x4e67b0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E67B0u;
    {
        const bool branch_taken_0x4e67b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e67b0) {
            ctx->pc = 0x4E67B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E67B0u;
            // 0x4e67b4: 0x746e6167  .word       0x746E6167                   # INVALID     $v1, $t6, 0x6167 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E67B4 raw=0x746E6167");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501D58u;
            return;
        }
    }
    ctx->pc = 0x4E67B8u;
    // 0x4e67b8: 0x315f  .word       0x0000315F                   # ddivu       $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e67b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E67B8 raw=0x0000315F");
    // 0x4e67bc: 0x0  nop
    ctx->pc = 0x4e67bcu;
    // NOP
    ctx->pc = 0x4e67c0u;
}
