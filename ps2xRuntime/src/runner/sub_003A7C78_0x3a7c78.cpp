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

// Function: sub_003A7C78
// Address: 0x3a7c78 - 0x3a7ca8
void sub_003A7C78_0x3a7c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7C78_0x3a7c78");
#endif

    switch (ctx->pc) {
        case 0x3a7c94u: goto label_3a7c94;
        default: break;
    }

    ctx->pc = 0x3a7c78u;

    // 0x3a7c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7c80: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x3a7c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x3a7c84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7C84u;
    {
        const bool branch_taken_0x3a7c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C84u;
        // 0x3a7c88: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c84) {
            ctx->pc = 0x3A7C98u;
            goto label_3a7c98;
        }
    }
    ctx->pc = 0x3A7C8Cu;
    // 0x3a7c8c: 0xc10598e  jal         func_416638
    ctx->pc = 0x3A7C8Cu;
    SET_GPR_U32(ctx, 31, 0x3A7C94u);
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x3A7C8Cu, 0x3A7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C94u;
label_3a7c94:
    // 0x3a7c94: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3a7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_3a7c98:
    // 0x3a7c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7c9c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3a7ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CA0u;
        // 0x3a7ca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7CA8u;
}
