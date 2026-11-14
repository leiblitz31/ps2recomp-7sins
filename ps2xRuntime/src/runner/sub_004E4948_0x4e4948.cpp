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

// Function: sub_004E4948
// Address: 0x4e4948 - 0x4e4958
void sub_004E4948_0x4e4948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4948_0x4e4948");
#endif

    ctx->pc = 0x4e4948u;

    // 0x4e4948: 0x5f6c6572  .word       0x5F6C6572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4948u;
    {
        const bool branch_taken_0x4e4948 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4948) {
            ctx->pc = 0x4E494Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4948u;
            // 0x4e494c: 0x755f7866  .word       0x755F7866                   # INVALID     $t2, $ra, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E494C raw=0x755F7866");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDF14u;
            return;
        }
    }
    ctx->pc = 0x4E4950u;
    // 0x4e4950: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x4e4950u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4954: 0x0  nop
    ctx->pc = 0x4e4954u;
    // NOP
    ctx->pc = 0x4e4958u;
}
