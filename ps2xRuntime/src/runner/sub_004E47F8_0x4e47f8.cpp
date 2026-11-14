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

// Function: sub_004E47F8
// Address: 0x4e47f8 - 0x4e4808
void sub_004E47F8_0x4e47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E47F8_0x4e47f8");
#endif

    ctx->pc = 0x4e47f8u;

    // 0x4e47f8: 0x5f534d26  .word       0x5F534D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E47F8u;
    {
        const bool branch_taken_0x4e47f8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e47f8) {
            ctx->pc = 0x4E47FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E47F8u;
            // 0x4e47fc: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E47FC raw=0x7478656E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7C94u;
            return;
        }
    }
    ctx->pc = 0x4E4800u;
    // 0x4e4800: 0x0  nop
    ctx->pc = 0x4e4800u;
    // NOP
    // 0x4e4804: 0x0  nop
    ctx->pc = 0x4e4804u;
    // NOP
    ctx->pc = 0x4e4808u;
}
