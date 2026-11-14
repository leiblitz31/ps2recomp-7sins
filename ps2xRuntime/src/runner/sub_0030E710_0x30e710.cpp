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

// Function: sub_0030E710
// Address: 0x30e710 - 0x30e728
void sub_0030E710_0x30e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E710_0x30e710");
#endif

    ctx->pc = 0x30e710u;

    // 0x30e710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e71c: 0x80c289c  j           func_30A270
    ctx->pc = 0x30E71Cu;
    ctx->pc = 0x30E720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E71Cu;
    // 0x30e720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A270u, 0x30E71Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x30E724u;
    // 0x30e724: 0x0  nop
    ctx->pc = 0x30e724u;
    // NOP
    ctx->pc = 0x30e728u;
}
