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

// Function: sub_004E4A08
// Address: 0x4e4a08 - 0x4e4a18
void sub_004E4A08_0x4e4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A08_0x4e4a08");
#endif

    ctx->pc = 0x4e4a08u;

    // 0x4e4a08: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4A08u;
    {
        const bool branch_taken_0x4e4a08 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4a08) {
            ctx->pc = 0x4E4A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4A08u;
            // 0x4e4a0c: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500BC4u;
            return;
        }
    }
    ctx->pc = 0x4E4A10u;
    // 0x4e4a10: 0x65735f65  daddiu      $s3, $t3, 0x5F65
    ctx->pc = 0x4e4a10u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e4a14: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4e4a14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    ctx->pc = 0x4e4a18u;
}
