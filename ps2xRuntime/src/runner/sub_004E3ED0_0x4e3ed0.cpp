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

// Function: sub_004E3ED0
// Address: 0x4e3ed0 - 0x4e3ee0
void sub_004E3ED0_0x4e3ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3ED0_0x4e3ed0");
#endif

    ctx->pc = 0x4e3ed0u;

    // 0x4e3ed0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3ED0u;
    {
        const bool branch_taken_0x4e3ed0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3ed0) {
            ctx->pc = 0x4E3ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3ED0u;
            // 0x4e3ed4: 0x30256762  andi        $a1, $at, 0x6762 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)26466);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF478u;
            return;
        }
    }
    ctx->pc = 0x4E3ED8u;
    // 0x4e3ed8: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e3ed8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e3edc: 0x0  nop
    ctx->pc = 0x4e3edcu;
    // NOP
    ctx->pc = 0x4e3ee0u;
}
