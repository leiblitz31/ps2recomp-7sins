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

// Function: sub_004E6ED8
// Address: 0x4e6ed8 - 0x4e6ee8
void sub_004E6ED8_0x4e6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6ED8_0x4e6ed8");
#endif

    ctx->pc = 0x4e6ed8u;

    // 0x4e6ed8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6ED8u;
    {
        const bool branch_taken_0x4e6ed8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6ed8) {
            ctx->pc = 0x4E6EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6ED8u;
            // 0x4e6edc: 0x44414548  .word       0x44414548                   # cfc1        $at, $8 # 00000548 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR8
            ctx->in_delay_slot = false;
            ctx->pc = 0x502480u;
            return;
        }
    }
    ctx->pc = 0x4E6EE0u;
    // 0x4e6ee0: 0x45504f5f  .word       0x45504F5F                   # INVALID     $t2, $s0, 0x4F5F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6ee0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1F at 0x4E6EE0 raw=0x45504F5F");
    // 0x4e6ee4: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6ee4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E6EE4 raw=0x0000004E");
    ctx->pc = 0x4e6ee8u;
}
