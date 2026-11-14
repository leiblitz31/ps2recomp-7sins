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

// Function: sub_004E4EA0
// Address: 0x4e4ea0 - 0x4e4eb0
void sub_004E4EA0_0x4e4ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4EA0_0x4e4ea0");
#endif

    ctx->pc = 0x4e4ea0u;

    // 0x4e4ea0: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4EA0u;
    {
        const bool branch_taken_0x4e4ea0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ea0) {
            ctx->pc = 0x4E4EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4EA0u;
            // 0x4e4ea4: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500064u;
            return;
        }
    }
    ctx->pc = 0x4E4EA8u;
    // 0x4e4ea8: 0x65735f65  daddiu      $s3, $t3, 0x5F65
    ctx->pc = 0x4e4ea8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e4eac: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4e4eacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    ctx->pc = 0x4e4eb0u;
}
