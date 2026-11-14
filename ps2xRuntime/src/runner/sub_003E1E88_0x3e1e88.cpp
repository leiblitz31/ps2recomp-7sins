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

// Function: sub_003E1E88
// Address: 0x3e1e88 - 0x3e1e98
void sub_003E1E88_0x3e1e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1E88_0x3e1e88");
#endif

    ctx->pc = 0x3e1e88u;

    // 0x3e1e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e1e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1e90: 0xc0bc21a  jal         func_2F0868
    ctx->pc = 0x3E1E90u;
    SET_GPR_U32(ctx, 31, 0x3E1E98u);
    ctx->pc = 0x3E1E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E90u;
    // 0x3e1e94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0868u, 0x3E1E90u, 0x3E1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E98u;
}
