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

// Function: sub_004ED138
// Address: 0x4ed138 - 0x4ed150
void sub_004ED138_0x4ed138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED138_0x4ed138");
#endif

    ctx->pc = 0x4ed138u;

    // 0x4ed138: 0x54495845  bnel        $v0, $t1, . + 4 + (0x5845 << 2)
    ctx->pc = 0x4ED138u;
    {
        const bool branch_taken_0x4ed138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x4ed138) {
            ctx->pc = 0x4ED13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED138u;
            // 0x4ed13c: 0x56454c5f  bnel        $s2, $a1, . + 4 + (0x4C5F << 2) (Delay Slot)
            // Likely branch instruction at 0x4ED13C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x503250u;
            return;
        }
    }
    ctx->pc = 0x4ED140u;
    // 0x4ed140: 0x4c45  .word       0x00004C45                   # INVALID     $zero, $zero, 0x4C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed140u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4ED140 raw=0x00004C45");
    // 0x4ed144: 0x0  nop
    ctx->pc = 0x4ed144u;
    // NOP
    // 0x4ed148: 0x0  nop
    ctx->pc = 0x4ed148u;
    // NOP
    // 0x4ed14c: 0x0  nop
    ctx->pc = 0x4ed14cu;
    // NOP
    ctx->pc = 0x4ed150u;
}
