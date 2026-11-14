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

// Function: sub_004E4F88
// Address: 0x4e4f88 - 0x4e4f98
void sub_004E4F88_0x4e4f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F88_0x4e4f88");
#endif

    ctx->pc = 0x4e4f88u;

    // 0x4e4f88: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4F88u;
    {
        const bool branch_taken_0x4e4f88 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4f88) {
            ctx->pc = 0x4E4F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4F88u;
            // 0x4e4f8c: 0x65676e61  daddiu      $a3, $t3, 0x6E61 (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9024u;
            return;
        }
    }
    ctx->pc = 0x4E4F90u;
    // 0x4e4f90: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x4e4f90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4f94: 0x0  nop
    ctx->pc = 0x4e4f94u;
    // NOP
    ctx->pc = 0x4e4f98u;
}
