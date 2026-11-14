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

// Function: sub_004E6CC8
// Address: 0x4e6cc8 - 0x4e6ce0
void sub_004E6CC8_0x4e6cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6CC8_0x4e6cc8");
#endif

    ctx->pc = 0x4e6cc8u;

    // 0x4e6cc8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6CC8u;
    {
        const bool branch_taken_0x4e6cc8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6cc8) {
            ctx->pc = 0x4E6CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6CC8u;
            // 0x4e6ccc: 0x3025626f  andi        $a1, $at, 0x626F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25199);
            ctx->in_delay_slot = false;
            ctx->pc = 0x504E9Cu;
            return;
        }
    }
    ctx->pc = 0x4E6CD0u;
    // 0x4e6cd0: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e6cd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6cd4: 0x0  nop
    ctx->pc = 0x4e6cd4u;
    // NOP
    // 0x4e6cd8: 0x0  nop
    ctx->pc = 0x4e6cd8u;
    // NOP
    // 0x4e6cdc: 0x0  nop
    ctx->pc = 0x4e6cdcu;
    // NOP
    ctx->pc = 0x4e6ce0u;
}
