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

// Function: sub_003C2E20
// Address: 0x3c2e20 - 0x3c2e48
void sub_003C2E20_0x3c2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2E20_0x3c2e20");
#endif

    switch (ctx->pc) {
        case 0x3c2e20u: goto label_3c2e20;
        case 0x3c2e24u: goto label_3c2e24;
        case 0x3c2e28u: goto label_3c2e28;
        case 0x3c2e2cu: goto label_3c2e2c;
        case 0x3c2e30u: goto label_3c2e30;
        case 0x3c2e34u: goto label_3c2e34;
        case 0x3c2e38u: goto label_3c2e38;
        case 0x3c2e3cu: goto label_3c2e3c;
        case 0x3c2e40u: goto label_3c2e40;
        case 0x3c2e44u: goto label_3c2e44;
        default: break;
    }

    ctx->pc = 0x3c2e20u;

label_3c2e20:
    // 0x3c2e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c2e24:
    // 0x3c2e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2e28:
    // 0x3c2e28: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3c2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3c2e2c:
    // 0x3c2e2c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3c2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3c2e30:
    // 0x3c2e30: 0x40f809  jalr        $v0
label_3c2e34:
    if (ctx->pc == 0x3C2E34u) {
        ctx->pc = 0x3C2E38u;
        goto label_3c2e38;
    }
    ctx->pc = 0x3C2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2E38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2E30u, 0x3C2E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2E38u;
label_3c2e38:
    // 0x3c2e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2e3c:
    // 0x3c2e3c: 0x3e00008  jr          $ra
label_3c2e40:
    if (ctx->pc == 0x3C2E40u) {
        ctx->pc = 0x3C2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E3Cu;
        // 0x3c2e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2E44u;
        goto label_3c2e44;
    }
    ctx->pc = 0x3C2E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2E3Cu;
        // 0x3c2e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2E44u;
label_3c2e44:
    // 0x3c2e44: 0x0  nop
    ctx->pc = 0x3c2e44u;
    // NOP
    ctx->pc = 0x3c2e48u;
}
