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

// Function: sub_00308520
// Address: 0x308520 - 0x308530
void sub_00308520_0x308520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308520_0x308520");
#endif

    ctx->pc = 0x308520u;

    // 0x308520: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x308520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308524: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x308524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x308528: 0x80c2124  j           func_308490
    ctx->pc = 0x308528u;
    ctx->pc = 0x30852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308528u;
    // 0x30852c: 0x34841020  ori         $a0, $a0, 0x1020 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308490u;
    entry_308490_0x308500(rdram, ctx, runtime); return;
    ctx->pc = 0x308530u;
}
