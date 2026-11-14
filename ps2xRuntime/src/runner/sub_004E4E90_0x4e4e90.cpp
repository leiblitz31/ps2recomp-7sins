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

// Function: sub_004E4E90
// Address: 0x4e4e90 - 0x4e4ea0
void sub_004E4E90_0x4e4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E90_0x4e4e90");
#endif

    ctx->pc = 0x4e4e90u;

    // 0x4e4e90: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4E90u;
    {
        const bool branch_taken_0x4e4e90 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4e90) {
            ctx->pc = 0x4E4E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4E90u;
            // 0x4e4e94: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500054u;
            return;
        }
    }
    ctx->pc = 0x4E4E98u;
    // 0x4e4e98: 0x65665f65  daddiu      $a2, $t3, 0x5F65
    ctx->pc = 0x4e4e98u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e4e9c: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    ctx->pc = 0x4e4ea0u;
}
