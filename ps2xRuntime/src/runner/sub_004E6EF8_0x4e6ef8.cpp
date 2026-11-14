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

// Function: sub_004E6EF8
// Address: 0x4e6ef8 - 0x4e6f08
void sub_004E6EF8_0x4e6ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6EF8_0x4e6ef8");
#endif

    ctx->pc = 0x4e6ef8u;

    // 0x4e6ef8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6EF8u;
    {
        const bool branch_taken_0x4e6ef8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6ef8) {
            ctx->pc = 0x4E6EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EF8u;
            // 0x4e6efc: 0x45524f46  .word       0x45524F46                   # INVALID     $t2, $s2, 0x4F46 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x6 at 0x4E6EFC raw=0x45524F46");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5024A0u;
            return;
        }
    }
    ctx->pc = 0x4E6F00u;
    // 0x4e6f00: 0x4d5241  .word       0x004D5241                   # INVALID     $v0, $t5, 0x5241 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E6F00 raw=0x004D5241");
    // 0x4e6f04: 0x0  nop
    ctx->pc = 0x4e6f04u;
    // NOP
    ctx->pc = 0x4e6f08u;
}
