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

// Function: sub_004E4858
// Address: 0x4e4858 - 0x4e4870
void sub_004E4858_0x4e4858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4858_0x4e4858");
#endif

    switch (ctx->pc) {
        case 0x4e4860u: goto label_4e4860;
        case 0x4e486cu: goto label_4e486c;
        default: break;
    }

    ctx->pc = 0x4e4858u;

    // 0x4e4858: 0x5f534d26  .word       0x5F534D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4858u;
    {
        const bool branch_taken_0x4e4858 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4858) {
            ctx->pc = 0x4E485Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4858u;
            // 0x4e485c: 0x3025646d  andi        $a1, $at, 0x646D (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25709);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7CF4u;
            return;
        }
    }
    ctx->pc = 0x4E4860u;
label_4e4860:
    // 0x4e4860: 0x30256432  andi        $a1, $at, 0x6432
    ctx->pc = 0x4e4860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25650);
    // 0x4e4864: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4864u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4868: 0x0  nop
    ctx->pc = 0x4e4868u;
    // NOP
label_4e486c:
    // 0x4e486c: 0x0  nop
    ctx->pc = 0x4e486cu;
    // NOP
    ctx->pc = 0x4e4870u;
}
