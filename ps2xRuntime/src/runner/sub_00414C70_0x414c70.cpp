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

// Function: sub_00414C70
// Address: 0x414c70 - 0x414ca0
void sub_00414C70_0x414c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414C70_0x414c70");
#endif

    switch (ctx->pc) {
        case 0x414c70u: goto label_414c70;
        case 0x414c74u: goto label_414c74;
        case 0x414c78u: goto label_414c78;
        case 0x414c7cu: goto label_414c7c;
        case 0x414c80u: goto label_414c80;
        case 0x414c84u: goto label_414c84;
        case 0x414c88u: goto label_414c88;
        case 0x414c8cu: goto label_414c8c;
        case 0x414c90u: goto label_414c90;
        case 0x414c94u: goto label_414c94;
        case 0x414c98u: goto label_414c98;
        case 0x414c9cu: goto label_414c9c;
        default: break;
    }

    ctx->pc = 0x414c70u;

label_414c70:
    // 0x414c70: 0x3e00008  jr          $ra
label_414c74:
    if (ctx->pc == 0x414C74u) {
        ctx->pc = 0x414C78u;
        goto label_414c78;
    }
    ctx->pc = 0x414C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414C78u;
label_414c78:
    // 0x414c78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x414c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_414c7c:
    // 0x414c7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x414c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_414c80:
    // 0x414c80: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x414c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_414c84:
    // 0x414c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_414c88:
    // 0x414c88: 0x40f809  jalr        $v0
label_414c8c:
    if (ctx->pc == 0x414C8Cu) {
        ctx->pc = 0x414C90u;
        goto label_414c90;
    }
    ctx->pc = 0x414C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414C90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C88u, 0x414C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414C90u;
label_414c90:
    // 0x414c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414c94:
    // 0x414c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x414c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414c98:
    // 0x414c98: 0x3e00008  jr          $ra
label_414c9c:
    if (ctx->pc == 0x414C9Cu) {
        ctx->pc = 0x414C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C98u;
        // 0x414c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414CA0u;
        goto label_fallthrough_0x414c98;
    }
    ctx->pc = 0x414C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C98u;
        // 0x414c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414c98:
    ctx->pc = 0x414CA0u;
}
