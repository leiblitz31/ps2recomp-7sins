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

// Function: sub_00417E78
// Address: 0x417e78 - 0x417e98
void sub_00417E78_0x417e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417E78_0x417e78");
#endif

    switch (ctx->pc) {
        case 0x417e78u: goto label_417e78;
        case 0x417e7cu: goto label_417e7c;
        case 0x417e80u: goto label_417e80;
        case 0x417e84u: goto label_417e84;
        case 0x417e88u: goto label_417e88;
        case 0x417e8cu: goto label_417e8c;
        case 0x417e90u: goto label_417e90;
        case 0x417e94u: goto label_417e94;
        default: break;
    }

    ctx->pc = 0x417e78u;

label_417e78:
    // 0x417e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x417e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_417e7c:
    // 0x417e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_417e80:
    // 0x417e80: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x417e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_417e84:
    // 0x417e84: 0x40f809  jalr        $v0
label_417e88:
    if (ctx->pc == 0x417E88u) {
        ctx->pc = 0x417E8Cu;
        goto label_417e8c;
    }
    ctx->pc = 0x417E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417E8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417E84u, 0x417E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417E8Cu;
label_417e8c:
    // 0x417e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_417e90:
    // 0x417e90: 0x3e00008  jr          $ra
label_417e94:
    if (ctx->pc == 0x417E94u) {
        ctx->pc = 0x417E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E90u;
        // 0x417e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417E98u;
        goto label_fallthrough_0x417e90;
    }
    ctx->pc = 0x417E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E90u;
        // 0x417e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x417e90:
    ctx->pc = 0x417E98u;
}
