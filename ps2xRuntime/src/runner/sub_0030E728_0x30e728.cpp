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

// Function: sub_0030E728
// Address: 0x30e728 - 0x30e740
void sub_0030E728_0x30e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E728_0x30e728");
#endif

    ctx->pc = 0x30e728u;

    // 0x30e728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e734: 0x80c2d38  j           func_30B4E0
    ctx->pc = 0x30E734u;
    ctx->pc = 0x30E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E734u;
    // 0x30e738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B4E0u, 0x30E734u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x30E73Cu;
    // 0x30e73c: 0x0  nop
    ctx->pc = 0x30e73cu;
    // NOP
    ctx->pc = 0x30e740u;
}
