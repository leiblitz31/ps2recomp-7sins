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

// Function: sub_004ED558
// Address: 0x4ed558 - 0x4ed568
void sub_004ED558_0x4ed558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED558_0x4ed558");
#endif

    ctx->pc = 0x4ed558u;

    // 0x4ed558: 0x73727563  .word       0x73727563                   # INVALID     $k1, $s2, 0x7563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed558u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ED558 raw=0x73727563");
    // 0x4ed55c: 0x5f73726f  .word       0x5F73726F                   # bgtzl       $k1, . + 4 + (0x726F << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ED55Cu;
    {
        const bool branch_taken_0x4ed55c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ed55c) {
            ctx->pc = 0x4ED560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED55Cu;
            // 0x4ed560: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x509F1Cu;
            return;
        }
    }
    ctx->pc = 0x4ED564u;
    // 0x4ed564: 0x0  nop
    ctx->pc = 0x4ed564u;
    // NOP
    ctx->pc = 0x4ed568u;
}
