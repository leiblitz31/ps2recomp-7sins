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

// Function: sub_004E4228
// Address: 0x4e4228 - 0x4e4240
void sub_004E4228_0x4e4228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4228_0x4e4228");
#endif

    ctx->pc = 0x4e4228u;

    // 0x4e4228: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4228u;
    {
        const bool branch_taken_0x4e4228 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4228) {
            ctx->pc = 0x4E422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4228u;
            // 0x4e422c: 0x3025706f  andi        $a1, $at, 0x706F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28783);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F82C4u;
            return;
        }
    }
    ctx->pc = 0x4E4230u;
    // 0x4e4230: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4230u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4234: 0x0  nop
    ctx->pc = 0x4e4234u;
    // NOP
    // 0x4e4238: 0x0  nop
    ctx->pc = 0x4e4238u;
    // NOP
    // 0x4e423c: 0x0  nop
    ctx->pc = 0x4e423cu;
    // NOP
    ctx->pc = 0x4e4240u;
}
