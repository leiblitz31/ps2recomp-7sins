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

// Function: sub_0023B580
// Address: 0x23b580 - 0x23b5c0
void sub_0023B580_0x23b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B580_0x23b580");
#endif

    switch (ctx->pc) {
        case 0x23b580u: goto label_23b580;
        case 0x23b584u: goto label_23b584;
        case 0x23b588u: goto label_23b588;
        case 0x23b58cu: goto label_23b58c;
        case 0x23b590u: goto label_23b590;
        case 0x23b594u: goto label_23b594;
        case 0x23b598u: goto label_23b598;
        case 0x23b59cu: goto label_23b59c;
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b5a4u: goto label_23b5a4;
        case 0x23b5a8u: goto label_23b5a8;
        case 0x23b5acu: goto label_23b5ac;
        case 0x23b5b0u: goto label_23b5b0;
        case 0x23b5b4u: goto label_23b5b4;
        case 0x23b5b8u: goto label_23b5b8;
        case 0x23b5bcu: goto label_23b5bc;
        default: break;
    }

    ctx->pc = 0x23b580u;

label_23b580:
    // 0x23b580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b584:
    // 0x23b584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b588:
    // 0x23b588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23b58c:
    // 0x23b58c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_23b590:
    // 0x23b590: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23b594:
    // 0x23b594: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23b598:
    // 0x23b598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b59c:
    // 0x23b59c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b5a0:
    // 0x23b5a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23b5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b5a4:
    // 0x23b5a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23b5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23b5a8:
    // 0x23b5a8: 0x320f809  jalr        $t9
label_23b5ac:
    if (ctx->pc == 0x23B5ACu) {
        ctx->pc = 0x23B5B0u;
        goto label_23b5b0;
    }
    ctx->pc = 0x23B5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B5B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B5A8u, 0x23B5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B5B0u;
label_23b5b0:
    // 0x23b5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b5b4:
    // 0x23b5b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23b5b8:
    // 0x23b5b8: 0x3e00008  jr          $ra
label_23b5bc:
    if (ctx->pc == 0x23B5BCu) {
        ctx->pc = 0x23B5C0u;
        goto label_fallthrough_0x23b5b8;
    }
    ctx->pc = 0x23B5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b5b8:
    ctx->pc = 0x23B5C0u;
}
