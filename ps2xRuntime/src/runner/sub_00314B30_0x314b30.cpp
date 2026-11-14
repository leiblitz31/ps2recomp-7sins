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

// Function: sub_00314B30
// Address: 0x314b30 - 0x314b60
void sub_00314B30_0x314b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314B30_0x314b30");
#endif

    switch (ctx->pc) {
        case 0x314b50u: goto label_314b50;
        default: break;
    }

    ctx->pc = 0x314b30u;

    // 0x314b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314b34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x314b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x314b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314b3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x314b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314b40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x314B40u;
    {
        const bool branch_taken_0x314b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b40) {
            ctx->pc = 0x314B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B40u;
            // 0x314b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314B54u;
            goto label_314b54;
        }
    }
    ctx->pc = 0x314B48u;
    // 0x314b48: 0xc0c4b64  jal         func_312D90
    ctx->pc = 0x314B48u;
    SET_GPR_U32(ctx, 31, 0x314B50u);
    ctx->pc = 0x312D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312D90u, 0x314B48u, 0x314B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B50u;
label_314b50:
    // 0x314b50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x314b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_314b54:
    // 0x314b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314b58: 0x3e00008  jr          $ra
    ctx->pc = 0x314B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B58u;
        // 0x314b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314B60u;
}
