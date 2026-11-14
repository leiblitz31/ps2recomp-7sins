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

// Function: sub_004E4838
// Address: 0x4e4838 - 0x4e4848
void sub_004E4838_0x4e4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4838_0x4e4838");
#endif

    ctx->pc = 0x4e4838u;

    // 0x4e4838: 0x5f534d26  .word       0x5F534D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4838u;
    {
        const bool branch_taken_0x4e4838 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4838) {
            ctx->pc = 0x4E483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4838u;
            // 0x4e483c: 0x30257463  andi        $a1, $at, 0x7463 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29795);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7CD4u;
            return;
        }
    }
    ctx->pc = 0x4E4840u;
    // 0x4e4840: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4840u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4844: 0x0  nop
    ctx->pc = 0x4e4844u;
    // NOP
    ctx->pc = 0x4e4848u;
}
