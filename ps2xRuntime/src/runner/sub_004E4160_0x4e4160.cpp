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

// Function: sub_004E4160
// Address: 0x4e4160 - 0x4e4170
void sub_004E4160_0x4e4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4160_0x4e4160");
#endif

    ctx->pc = 0x4e4160u;

    // 0x4e4160: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4160u;
    {
        const bool branch_taken_0x4e4160 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4160) {
            ctx->pc = 0x4E4164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4160u;
            // 0x4e4164: 0x72617473  .word       0x72617473                   # INVALID     $s3, $at, 0x7473 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E4164 raw=0x72617473");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502334u;
            return;
        }
    }
    ctx->pc = 0x4E4168u;
    // 0x4e4168: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e4168u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e416c: 0x0  nop
    ctx->pc = 0x4e416cu;
    // NOP
    ctx->pc = 0x4e4170u;
}
