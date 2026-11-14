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

// Function: sub_004E6EE8
// Address: 0x4e6ee8 - 0x4e6ef8
void sub_004E6EE8_0x4e6ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6EE8_0x4e6ee8");
#endif

    ctx->pc = 0x4e6ee8u;

    // 0x4e6ee8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6EE8u;
    {
        const bool branch_taken_0x4e6ee8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6ee8) {
            ctx->pc = 0x4E6EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EE8u;
            // 0x4e6eec: 0x44414548  .word       0x44414548                   # cfc1        $at, $8 # 00000548 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR8
            ctx->in_delay_slot = false;
            ctx->pc = 0x502490u;
            return;
        }
    }
    ctx->pc = 0x4E6EF0u;
    // 0x4e6ef0: 0x4d55595f  .word       0x4D55595F                   # INVALID     $t2, $s5, 0x595F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ef0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6EF0 raw=0x4D55595F");
    // 0x4e6ef4: 0x0  nop
    ctx->pc = 0x4e6ef4u;
    // NOP
    ctx->pc = 0x4e6ef8u;
}
