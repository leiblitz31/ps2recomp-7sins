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

// Function: sub_0030E770
// Address: 0x30e770 - 0x30e788
void sub_0030E770_0x30e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E770_0x30e770");
#endif

    ctx->pc = 0x30e770u;

    // 0x30e770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e77c: 0x80c2fa2  j           func_30BE88
    ctx->pc = 0x30E77Cu;
    ctx->pc = 0x30E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E77Cu;
    // 0x30e780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BE88u, 0x30E77Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x30E784u;
    // 0x30e784: 0x0  nop
    ctx->pc = 0x30e784u;
    // NOP
    ctx->pc = 0x30e788u;
}
