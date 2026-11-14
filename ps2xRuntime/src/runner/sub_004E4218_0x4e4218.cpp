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

// Function: sub_004E4218
// Address: 0x4e4218 - 0x4e4228
void sub_004E4218_0x4e4218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4218_0x4e4218");
#endif

    ctx->pc = 0x4e4218u;

    // 0x4e4218: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4218u;
    {
        const bool branch_taken_0x4e4218 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4218) {
            ctx->pc = 0x4E421Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4218u;
            // 0x4e421c: 0x3025706f  andi        $a1, $at, 0x706F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28783);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5023ECu;
            return;
        }
    }
    ctx->pc = 0x4E4220u;
    // 0x4e4220: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4220u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4224: 0x0  nop
    ctx->pc = 0x4e4224u;
    // NOP
    ctx->pc = 0x4e4228u;
}
