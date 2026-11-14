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

// Function: sub_002E86B0
// Address: 0x2e86b0 - 0x2e86e0
void sub_002E86B0_0x2e86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E86B0_0x2e86b0");
#endif

    switch (ctx->pc) {
        case 0x2e86b0u: goto label_2e86b0;
        case 0x2e86b4u: goto label_2e86b4;
        case 0x2e86b8u: goto label_2e86b8;
        case 0x2e86bcu: goto label_2e86bc;
        case 0x2e86c0u: goto label_2e86c0;
        case 0x2e86c4u: goto label_2e86c4;
        case 0x2e86c8u: goto label_2e86c8;
        case 0x2e86ccu: goto label_2e86cc;
        case 0x2e86d0u: goto label_2e86d0;
        case 0x2e86d4u: goto label_2e86d4;
        case 0x2e86d8u: goto label_2e86d8;
        case 0x2e86dcu: goto label_2e86dc;
        default: break;
    }

    ctx->pc = 0x2e86b0u;

label_2e86b0:
    // 0x2e86b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e86b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e86b4:
    // 0x2e86b4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2e86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2e86b8:
    // 0x2e86b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e86bc:
    // 0x2e86bc: 0x8c42e790  lw          $v0, -0x1870($v0)
    ctx->pc = 0x2e86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961040)));
label_2e86c0:
    // 0x2e86c0: 0x40f809  jalr        $v0
label_2e86c4:
    if (ctx->pc == 0x2E86C4u) {
        ctx->pc = 0x2E86C8u;
        goto label_2e86c8;
    }
    ctx->pc = 0x2E86C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E86C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E86C0u, 0x2E86C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E86C8u;
label_2e86c8:
    // 0x2e86c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e86c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e86cc:
    // 0x2e86cc: 0x3e00008  jr          $ra
label_2e86d0:
    if (ctx->pc == 0x2E86D0u) {
        ctx->pc = 0x2E86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86CCu;
        // 0x2e86d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E86D4u;
        goto label_2e86d4;
    }
    ctx->pc = 0x2E86CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86CCu;
        // 0x2e86d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E86CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E86D4u;
label_2e86d4:
    // 0x2e86d4: 0x0  nop
    ctx->pc = 0x2e86d4u;
    // NOP
label_2e86d8:
    // 0x2e86d8: 0x0  nop
    ctx->pc = 0x2e86d8u;
    // NOP
label_2e86dc:
    // 0x2e86dc: 0x0  nop
    ctx->pc = 0x2e86dcu;
    // NOP
    ctx->pc = 0x2e86e0u;
}
