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

// Function: sub_002EA230
// Address: 0x2ea230 - 0x2ea248
void sub_002EA230_0x2ea230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA230_0x2ea230");
#endif

    switch (ctx->pc) {
        case 0x2ea240u: goto label_2ea240;
        default: break;
    }

    ctx->pc = 0x2ea230u;

    // 0x2ea230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ea230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ea234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea238: 0xc0bc332  jal         func_2F0CC8
    ctx->pc = 0x2EA238u;
    SET_GPR_U32(ctx, 31, 0x2EA240u);
    ctx->pc = 0x2EA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA238u;
    // 0x2ea23c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0CC8u, 0x2EA238u, 0x2EA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA240u;
label_2ea240:
    // 0x2ea240: 0xc040086  jal         func_100218
    ctx->pc = 0x2EA240u;
    SET_GPR_U32(ctx, 31, 0x2EA248u);
    ctx->pc = 0x2EA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA240u;
    // 0x2ea244: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100218u, 0x2EA240u, 0x2EA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA248u;
}
