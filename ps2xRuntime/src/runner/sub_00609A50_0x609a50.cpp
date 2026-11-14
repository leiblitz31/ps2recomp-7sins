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

// Function: sub_00609A50
// Address: 0x609a50 - 0x609a58
void sub_00609A50_0x609a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00609A50_0x609a50");
#endif

    ctx->pc = 0x609a50u;

    // 0x609a50: 0xa5e5b25  j           func_9796C94
    ctx->pc = 0x609A50u;
    ctx->pc = 0x609A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x609A50u;
    // 0x609a54: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x609A54 raw=0x0000005D");
    ctx->in_delay_slot = false;
    ctx->pc = 0x9796C94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9796C94u, 0x609A50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x609A58u;
}
