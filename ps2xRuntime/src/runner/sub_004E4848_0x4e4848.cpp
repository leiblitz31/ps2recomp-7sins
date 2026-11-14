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

// Function: sub_004E4848
// Address: 0x4e4848 - 0x4e4858
void sub_004E4848_0x4e4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4848_0x4e4848");
#endif

    ctx->pc = 0x4e4848u;

    // 0x4e4848: 0x5f534d26  .word       0x5F534D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4848u;
    {
        const bool branch_taken_0x4e4848 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4848) {
            ctx->pc = 0x4E484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4848u;
            // 0x4e484c: 0x3025746d  andi        $a1, $at, 0x746D (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29805);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7CE4u;
            return;
        }
    }
    ctx->pc = 0x4E4850u;
    // 0x4e4850: 0x30256432  andi        $a1, $at, 0x6432
    ctx->pc = 0x4e4850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25650);
    // 0x4e4854: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4854u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e4858u;
}
