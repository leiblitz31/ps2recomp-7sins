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

// Function: sub_005DE5C0
// Address: 0x5de5c0 - 0x5de5d0
void sub_005DE5C0_0x5de5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DE5C0_0x5de5c0");
#endif

    ctx->pc = 0x5de5c0u;

    // 0x5de5c0: 0x25287325  addiu       $t0, $t1, 0x7325
    ctx->pc = 0x5de5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 29477));
    // 0x5de5c4: 0xa3a2964  j           func_8E8A590
    ctx->pc = 0x5DE5C4u;
    ctx->pc = 0x5DE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DE5C4u;
    // 0x5de5c8: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8E8A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8E8A590u, 0x5DE5C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DE5CCu;
    // 0x5de5cc: 0x0  nop
    ctx->pc = 0x5de5ccu;
    // NOP
    ctx->pc = 0x5de5d0u;
}
