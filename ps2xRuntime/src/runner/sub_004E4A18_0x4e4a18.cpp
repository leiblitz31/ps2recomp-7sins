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

// Function: sub_004E4A18
// Address: 0x4e4a18 - 0x4e4a28
void sub_004E4A18_0x4e4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A18_0x4e4a18");
#endif

    ctx->pc = 0x4e4a18u;

    // 0x4e4a18: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4A18u;
    {
        const bool branch_taken_0x4e4a18 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4a18) {
            ctx->pc = 0x4E4A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4A18u;
            // 0x4e4a1c: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500BD4u;
            return;
        }
    }
    ctx->pc = 0x4E4A20u;
    // 0x4e4a20: 0x65735f65  daddiu      $s3, $t3, 0x5F65
    ctx->pc = 0x4e4a20u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e4a24: 0x6278  dsll        $t4, $zero, 9
    ctx->pc = 0x4e4a24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 9);
    ctx->pc = 0x4e4a28u;
}
