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

// Function: sub_004E4FA8
// Address: 0x4e4fa8 - 0x4e4fb8
void sub_004E4FA8_0x4e4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4FA8_0x4e4fa8");
#endif

    switch (ctx->pc) {
        case 0x4e4fb0u: goto label_4e4fb0;
        default: break;
    }

    ctx->pc = 0x4e4fa8u;

    // 0x4e4fa8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4FA8u;
    {
        const bool branch_taken_0x4e4fa8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4fa8) {
            ctx->pc = 0x4E4FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4FA8u;
            // 0x4e4fac: 0x79766e65  lq          $s6, 0x6E65($t3) (Delay Slot)
            SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 11), 28261)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9044u;
            return;
        }
    }
    ctx->pc = 0x4E4FB0u;
label_4e4fb0:
    // 0x4e4fb0: 0x0  nop
    ctx->pc = 0x4e4fb0u;
    // NOP
    // 0x4e4fb4: 0x0  nop
    ctx->pc = 0x4e4fb4u;
    // NOP
    ctx->pc = 0x4e4fb8u;
}
