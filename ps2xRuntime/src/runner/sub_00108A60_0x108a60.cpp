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

// Function: sub_00108A60
// Address: 0x108a60 - 0x108aa0
void sub_00108A60_0x108a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108A60_0x108a60");
#endif

    switch (ctx->pc) {
        case 0x108a60u: goto label_108a60;
        case 0x108a64u: goto label_108a64;
        case 0x108a68u: goto label_108a68;
        case 0x108a6cu: goto label_108a6c;
        case 0x108a70u: goto label_108a70;
        case 0x108a74u: goto label_108a74;
        case 0x108a78u: goto label_108a78;
        case 0x108a7cu: goto label_108a7c;
        case 0x108a80u: goto label_108a80;
        case 0x108a84u: goto label_108a84;
        case 0x108a88u: goto label_108a88;
        case 0x108a8cu: goto label_108a8c;
        case 0x108a90u: goto label_108a90;
        case 0x108a94u: goto label_108a94;
        case 0x108a98u: goto label_108a98;
        case 0x108a9cu: goto label_108a9c;
        default: break;
    }

    ctx->pc = 0x108a60u;

label_108a60:
    // 0x108a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_108a64:
    // 0x108a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108a68:
    // 0x108a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_108a6c:
    // 0x108a6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x108a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_108a70:
    // 0x108a70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_108a74:
    // 0x108a74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_108a78:
    // 0x108a78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x108a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_108a7c:
    // 0x108a7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x108a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108a80:
    // 0x108a80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x108a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_108a84:
    // 0x108a84: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x108a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_108a88:
    // 0x108a88: 0x320f809  jalr        $t9
label_108a8c:
    if (ctx->pc == 0x108A8Cu) {
        ctx->pc = 0x108A90u;
        goto label_108a90;
    }
    ctx->pc = 0x108A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x108A90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A88u, 0x108A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108A90u;
label_108a90:
    // 0x108a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108a94:
    // 0x108a94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x108a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_108a98:
    // 0x108a98: 0x3e00008  jr          $ra
label_108a9c:
    if (ctx->pc == 0x108A9Cu) {
        ctx->pc = 0x108AA0u;
        goto label_fallthrough_0x108a98;
    }
    ctx->pc = 0x108A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x108a98:
    ctx->pc = 0x108AA0u;
}
