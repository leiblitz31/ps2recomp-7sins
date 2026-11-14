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

// Function: sub_004E31E8
// Address: 0x4e31e8 - 0x4e31f8
void sub_004E31E8_0x4e31e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31E8_0x4e31e8");
#endif

    switch (ctx->pc) {
        case 0x4e31f4u: goto label_4e31f4;
        default: break;
    }

    ctx->pc = 0x4e31e8u;

    // 0x4e31e8: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E31E8u;
    {
        const bool branch_taken_0x4e31e8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e31e8) {
            ctx->pc = 0x4E31ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E31E8u;
            // 0x4e31ec: 0x646e6f66  daddiu      $t6, $v1, 0x6F66 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28518);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500374u;
            return;
        }
    }
    ctx->pc = 0x4E31F0u;
    // 0x4e31f0: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e31f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_4e31f4:
    // 0x4e31f4: 0x0  nop
    ctx->pc = 0x4e31f4u;
    // NOP
    ctx->pc = 0x4e31f8u;
}
