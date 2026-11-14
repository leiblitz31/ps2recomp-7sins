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

// Function: sub_004E5090
// Address: 0x4e5090 - 0x4e50a0
void sub_004E5090_0x4e5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5090_0x4e5090");
#endif

    switch (ctx->pc) {
        case 0x4e5094u: goto label_4e5094;
        default: break;
    }

    ctx->pc = 0x4e5090u;

    // 0x4e5090: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e5094:
    if (ctx->pc == 0x4E5094u) {
        ctx->pc = 0x4E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5090u;
        // 0x4e5094: 0x646e6f72  daddiu      $t6, $v1, 0x6F72 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28530);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5098u;
        goto label_fallthrough_0x4e5090;
    }
    ctx->pc = 0x4E5090u;
    {
        const bool branch_taken_0x4e5090 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5090) {
            ctx->pc = 0x4E5094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5090u;
            // 0x4e5094: 0x646e6f72  daddiu      $t6, $v1, 0x6F72 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28530);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50221Cu;
            return;
        }
    }
label_fallthrough_0x4e5090:
    ctx->pc = 0x4E5098u;
    // 0x4e5098: 0x0  nop
    ctx->pc = 0x4e5098u;
    // NOP
    // 0x4e509c: 0x0  nop
    ctx->pc = 0x4e509cu;
    // NOP
    ctx->pc = 0x4e50a0u;
}
