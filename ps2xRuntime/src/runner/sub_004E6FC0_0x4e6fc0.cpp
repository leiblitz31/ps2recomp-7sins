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

// Function: sub_004E6FC0
// Address: 0x4e6fc0 - 0x4e6fe0
void sub_004E6FC0_0x4e6fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6FC0_0x4e6fc0");
#endif

    ctx->pc = 0x4e6fc0u;

    // 0x4e6fc0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6FC0u;
    {
        const bool branch_taken_0x4e6fc0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6fc0) {
            ctx->pc = 0x4E6FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FC0u;
            // 0x4e6fc4: 0x54524150  bnel        $v0, $s2, . + 4 + (0x4150 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6FC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502568u;
            return;
        }
    }
    ctx->pc = 0x4E6FC8u;
    // 0x4e6fc8: 0x454c4349  .word       0x454C4349                   # INVALID     $t2, $t4, 0x4349 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6fc8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x4E6FC8 raw=0x454C4349");
    // 0x4e6fcc: 0x4c50535f  .word       0x4C50535F                   # INVALID     $v0, $s0, 0x535F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6fccu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6FCC raw=0x4C50535F");
    // 0x4e6fd0: 0x485341  .word       0x00485341                   # INVALID     $v0, $t0, 0x5341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6fd0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E6FD0 raw=0x00485341");
    // 0x4e6fd4: 0x0  nop
    ctx->pc = 0x4e6fd4u;
    // NOP
    // 0x4e6fd8: 0x0  nop
    ctx->pc = 0x4e6fd8u;
    // NOP
    // 0x4e6fdc: 0x0  nop
    ctx->pc = 0x4e6fdcu;
    // NOP
    ctx->pc = 0x4e6fe0u;
}
