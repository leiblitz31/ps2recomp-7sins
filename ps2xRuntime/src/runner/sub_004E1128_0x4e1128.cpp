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

// Function: sub_004E1128
// Address: 0x4e1128 - 0x4e1140
void sub_004E1128_0x4e1128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1128_0x4e1128");
#endif

    switch (ctx->pc) {
        case 0x4e1130u: goto label_4e1130;
        default: break;
    }

    ctx->pc = 0x4e1128u;

    // 0x4e1128: 0x5353454d  beql        $k0, $s3, . + 4 + (0x454D << 2)
    ctx->pc = 0x4E1128u;
    {
        const bool branch_taken_0x4e1128 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 19));
        if (branch_taken_0x4e1128) {
            ctx->pc = 0x4E112Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1128u;
            // 0x4e112c: 0x3a454741  xori        $a1, $s2, 0x4741 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)18241);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2660u;
            return;
        }
    }
    ctx->pc = 0x4E1130u;
label_4e1130:
    // 0x4e1130: 0x0  nop
    ctx->pc = 0x4e1130u;
    // NOP
    // 0x4e1134: 0x0  nop
    ctx->pc = 0x4e1134u;
    // NOP
    // 0x4e1138: 0x0  nop
    ctx->pc = 0x4e1138u;
    // NOP
    // 0x4e113c: 0x0  nop
    ctx->pc = 0x4e113cu;
    // NOP
    ctx->pc = 0x4e1140u;
}
