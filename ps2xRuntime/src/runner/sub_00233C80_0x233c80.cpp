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

// Function: sub_00233C80
// Address: 0x233c80 - 0x233cc0
void sub_00233C80_0x233c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233C80_0x233c80");
#endif

    switch (ctx->pc) {
        case 0x233c80u: goto label_233c80;
        case 0x233c84u: goto label_233c84;
        case 0x233c88u: goto label_233c88;
        case 0x233c8cu: goto label_233c8c;
        case 0x233c90u: goto label_233c90;
        case 0x233c94u: goto label_233c94;
        case 0x233c98u: goto label_233c98;
        case 0x233c9cu: goto label_233c9c;
        case 0x233ca0u: goto label_233ca0;
        case 0x233ca4u: goto label_233ca4;
        case 0x233ca8u: goto label_233ca8;
        case 0x233cacu: goto label_233cac;
        case 0x233cb0u: goto label_233cb0;
        case 0x233cb4u: goto label_233cb4;
        case 0x233cb8u: goto label_233cb8;
        case 0x233cbcu: goto label_233cbc;
        default: break;
    }

    ctx->pc = 0x233c80u;

label_233c80:
    // 0x233c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_233c84:
    // 0x233c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233c88:
    // 0x233c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_233c8c:
    // 0x233c8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x233c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_233c90:
    // 0x233c90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x233c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_233c94:
    // 0x233c94: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x233c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_233c98:
    // 0x233c98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233c9c:
    // 0x233c9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x233c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233ca0:
    // 0x233ca0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x233ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233ca4:
    // 0x233ca4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_233ca8:
    // 0x233ca8: 0x320f809  jalr        $t9
label_233cac:
    if (ctx->pc == 0x233CACu) {
        ctx->pc = 0x233CB0u;
        goto label_233cb0;
    }
    ctx->pc = 0x233CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233CB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CA8u, 0x233CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233CB0u;
label_233cb0:
    // 0x233cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233cb4:
    // 0x233cb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_233cb8:
    // 0x233cb8: 0x3e00008  jr          $ra
label_233cbc:
    if (ctx->pc == 0x233CBCu) {
        ctx->pc = 0x233CC0u;
        goto label_fallthrough_0x233cb8;
    }
    ctx->pc = 0x233CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x233cb8:
    ctx->pc = 0x233CC0u;
}
