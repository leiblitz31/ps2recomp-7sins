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

// Function: sub_003E2CA8
// Address: 0x3e2ca8 - 0x3e2cd0
void sub_003E2CA8_0x3e2ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2CA8_0x3e2ca8");
#endif

    switch (ctx->pc) {
        case 0x3e2cc4u: goto label_3e2cc4;
        default: break;
    }

    ctx->pc = 0x3e2ca8u;

    // 0x3e2ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e2cac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2CACu;
    {
        const bool branch_taken_0x3e2cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CACu;
        // 0x3e2cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2cac) {
            ctx->pc = 0x3E2CC4u;
            goto label_3e2cc4;
        }
    }
    ctx->pc = 0x3E2CB4u;
    // 0x3e2cb4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2CB4u;
    {
        const bool branch_taken_0x3e2cb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CB4u;
        // 0x3e2cb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2cb4) {
            ctx->pc = 0x3E2CC8u;
            goto label_3e2cc8;
        }
    }
    ctx->pc = 0x3E2CBCu;
    // 0x3e2cbc: 0xc0bb49a  jal         func_2ED268
    ctx->pc = 0x3E2CBCu;
    SET_GPR_U32(ctx, 31, 0x3E2CC4u);
    ctx->pc = 0x3E2CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CBCu;
    // 0x3e2cc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED268u, 0x3E2CBCu, 0x3E2CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CC4u;
label_3e2cc4:
    // 0x3e2cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2cc8:
    // 0x3e2cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CC8u;
        // 0x3e2ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2CD0u;
}
