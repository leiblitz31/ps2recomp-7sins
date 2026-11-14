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

// Function: sub_004E4598
// Address: 0x4e4598 - 0x4e45a8
void sub_004E4598_0x4e4598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4598_0x4e4598");
#endif

    switch (ctx->pc) {
        case 0x4e459cu: goto label_4e459c;
        default: break;
    }

    ctx->pc = 0x4e4598u;

    // 0x4e4598: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e459c:
    if (ctx->pc == 0x4E459Cu) {
        ctx->pc = 0x4E459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4598u;
        // 0x4e459c: 0x316c7474  andi        $t4, $t3, 0x7474 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)29812);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E45A0u;
        goto label_fallthrough_0x4e4598;
    }
    ctx->pc = 0x4E4598u;
    {
        const bool branch_taken_0x4e4598 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4598) {
            ctx->pc = 0x4E459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4598u;
            // 0x4e459c: 0x316c7474  andi        $t4, $t3, 0x7474 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)29812);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50276Cu;
            return;
        }
    }
label_fallthrough_0x4e4598:
    ctx->pc = 0x4E45A0u;
    // 0x4e45a0: 0x0  nop
    ctx->pc = 0x4e45a0u;
    // NOP
    // 0x4e45a4: 0x0  nop
    ctx->pc = 0x4e45a4u;
    // NOP
    ctx->pc = 0x4e45a8u;
}
