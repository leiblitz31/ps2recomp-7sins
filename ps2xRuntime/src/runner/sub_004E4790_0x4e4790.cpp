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

// Function: sub_004E4790
// Address: 0x4e4790 - 0x4e47a0
void sub_004E4790_0x4e4790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4790_0x4e4790");
#endif

    ctx->pc = 0x4e4790u;

    // 0x4e4790: 0x5f4e5326  .word       0x5F4E5326                   # bgtzl       $k0, . + 4 + (0x5326 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4790u;
    {
        const bool branch_taken_0x4e4790 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4790) {
            ctx->pc = 0x4E4794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4790u;
            // 0x4e4794: 0x30257325  andi        $a1, $at, 0x7325 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F942Cu;
            return;
        }
    }
    ctx->pc = 0x4E4798u;
    // 0x4e4798: 0x30256432  andi        $a1, $at, 0x6432
    ctx->pc = 0x4e4798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25650);
    // 0x4e479c: 0x626432  tlt         $v1, $v0, 400
    ctx->pc = 0x4e479cu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e47a0u;
}
