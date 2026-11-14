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

// Function: sub_004E4370
// Address: 0x4e4370 - 0x4e4380
void sub_004E4370_0x4e4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4370_0x4e4370");
#endif

    switch (ctx->pc) {
        case 0x4e437cu: goto label_4e437c;
        default: break;
    }

    ctx->pc = 0x4e4370u;

    // 0x4e4370: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4370u;
    {
        const bool branch_taken_0x4e4370 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4370) {
            ctx->pc = 0x4E4374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4370u;
            // 0x4e4374: 0x30256469  andi        $a1, $at, 0x6469 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)25705);
            ctx->in_delay_slot = false;
            ctx->pc = 0x502544u;
            return;
        }
    }
    ctx->pc = 0x4E4378u;
    // 0x4e4378: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4378u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_4e437c:
    // 0x4e437c: 0x0  nop
    ctx->pc = 0x4e437cu;
    // NOP
    ctx->pc = 0x4e4380u;
}
