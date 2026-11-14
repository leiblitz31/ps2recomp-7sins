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

// Function: sub_004E4738
// Address: 0x4e4738 - 0x4e4748
void sub_004E4738_0x4e4738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4738_0x4e4738");
#endif

    ctx->pc = 0x4e4738u;

    // 0x4e4738: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4738u;
    {
        const bool branch_taken_0x4e4738 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4738) {
            ctx->pc = 0x4E473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4738u;
            // 0x4e473c: 0x746e6968  .word       0x746E6968                   # INVALID     $v1, $t6, 0x6968 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E473C raw=0x746E6968");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50290Cu;
            return;
        }
    }
    ctx->pc = 0x4E4740u;
    // 0x4e4740: 0x0  nop
    ctx->pc = 0x4e4740u;
    // NOP
    // 0x4e4744: 0x0  nop
    ctx->pc = 0x4e4744u;
    // NOP
    ctx->pc = 0x4e4748u;
}
