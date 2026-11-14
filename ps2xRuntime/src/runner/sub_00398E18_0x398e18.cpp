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

// Function: sub_00398E18
// Address: 0x398e18 - 0x398e40
void sub_00398E18_0x398e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398E18_0x398e18");
#endif

    switch (ctx->pc) {
        case 0x398e18u: goto label_398e18;
        case 0x398e1cu: goto label_398e1c;
        case 0x398e20u: goto label_398e20;
        case 0x398e24u: goto label_398e24;
        case 0x398e28u: goto label_398e28;
        case 0x398e2cu: goto label_398e2c;
        case 0x398e30u: goto label_398e30;
        case 0x398e34u: goto label_398e34;
        case 0x398e38u: goto label_398e38;
        case 0x398e3cu: goto label_398e3c;
        default: break;
    }

    ctx->pc = 0x398e18u;

label_398e18:
    // 0x398e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_398e1c:
    // 0x398e1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x398e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_398e20:
    // 0x398e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_398e24:
    // 0x398e24: 0x8c43e884  lw          $v1, -0x177C($v0)
    ctx->pc = 0x398e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961284)));
label_398e28:
    // 0x398e28: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x398e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_398e2c:
    // 0x398e2c: 0x40f809  jalr        $v0
label_398e30:
    if (ctx->pc == 0x398E30u) {
        ctx->pc = 0x398E34u;
        goto label_398e34;
    }
    ctx->pc = 0x398E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398E34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E2Cu, 0x398E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398E34u;
label_398e34:
    // 0x398e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_398e38:
    // 0x398e38: 0x3e00008  jr          $ra
label_398e3c:
    if (ctx->pc == 0x398E3Cu) {
        ctx->pc = 0x398E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E38u;
        // 0x398e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398E40u;
        goto label_fallthrough_0x398e38;
    }
    ctx->pc = 0x398E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E38u;
        // 0x398e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x398e38:
    ctx->pc = 0x398E40u;
}
