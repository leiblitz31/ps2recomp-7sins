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

// Function: sub_004E3FD0
// Address: 0x4e3fd0 - 0x4e3fe0
void sub_004E3FD0_0x4e3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FD0_0x4e3fd0");
#endif

    ctx->pc = 0x4e3fd0u;

    // 0x4e3fd0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3FD0u;
    {
        const bool branch_taken_0x4e3fd0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3fd0) {
            ctx->pc = 0x4E3FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3FD0u;
            // 0x4e3fd4: 0x30257673  andi        $a1, $at, 0x7673 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30323);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5021A4u;
            return;
        }
    }
    ctx->pc = 0x4E3FD8u;
    // 0x4e3fd8: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e3fd8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e3fdc: 0x0  nop
    ctx->pc = 0x4e3fdcu;
    // NOP
    ctx->pc = 0x4e3fe0u;
}
