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

// Function: sub_00490BF0
// Address: 0x490bf0 - 0x490c60
void sub_00490BF0_0x490bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490BF0_0x490bf0");
#endif

    switch (ctx->pc) {
        case 0x490c10u: goto label_490c10;
        case 0x490c1cu: goto label_490c1c;
        case 0x490c38u: goto label_490c38;
        case 0x490c44u: goto label_490c44;
        default: break;
    }

    ctx->pc = 0x490bf0u;

    // 0x490bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x490bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x490bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490bf8: 0x8f82c0f8  lw          $v0, -0x3F08($gp)
    ctx->pc = 0x490bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
    // 0x490bfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x490BFCu;
    {
        const bool branch_taken_0x490bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490bfc) {
            ctx->pc = 0x490C20u;
            goto label_490c20;
        }
    }
    ctx->pc = 0x490C04u;
    // 0x490c04: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x490c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
    // 0x490c08: 0xc124380  jal         func_490E00
    ctx->pc = 0x490C08u;
    SET_GPR_U32(ctx, 31, 0x490C10u);
    ctx->pc = 0x490E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490E00u, 0x490C08u, 0x490C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490C10u;
label_490c10:
    // 0x490c10: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x490c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
    // 0x490c14: 0xc119c5c  jal         func_467170
    ctx->pc = 0x490C14u;
    SET_GPR_U32(ctx, 31, 0x490C1Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x490C14u, 0x490C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490C1Cu;
label_490c1c:
    // 0x490c1c: 0xaf80c0f8  sw          $zero, -0x3F08($gp)
    ctx->pc = 0x490c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951160), GPR_U32(ctx, 0));
label_490c20:
    // 0x490c20: 0x8f82c0fc  lw          $v0, -0x3F04($gp)
    ctx->pc = 0x490c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
    // 0x490c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x490C24u;
    {
        const bool branch_taken_0x490c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490c24) {
            ctx->pc = 0x490C48u;
            goto label_490c48;
        }
    }
    ctx->pc = 0x490C2Cu;
    // 0x490c2c: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x490c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
    // 0x490c30: 0xc124318  jal         func_490C60
    ctx->pc = 0x490C30u;
    SET_GPR_U32(ctx, 31, 0x490C38u);
    ctx->pc = 0x490C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490C60u, 0x490C30u, 0x490C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490C38u;
label_490c38:
    // 0x490c38: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x490c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
    // 0x490c3c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x490C3Cu;
    SET_GPR_U32(ctx, 31, 0x490C44u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x490C3Cu, 0x490C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490C44u;
label_490c44:
    // 0x490c44: 0xaf80c0fc  sw          $zero, -0x3F04($gp)
    ctx->pc = 0x490c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951164), GPR_U32(ctx, 0));
label_490c48:
    // 0x490c48: 0xaf80c0f4  sw          $zero, -0x3F0C($gp)
    ctx->pc = 0x490c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951156), GPR_U32(ctx, 0));
    // 0x490c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x490c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490c54: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x490c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x490c58: 0x3e00008  jr          $ra
    ctx->pc = 0x490C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490C60u;
}
