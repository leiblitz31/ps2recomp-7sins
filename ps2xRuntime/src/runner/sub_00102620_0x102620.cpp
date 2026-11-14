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

// Function: sub_00102620
// Address: 0x102620 - 0x102680
void sub_00102620_0x102620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102620_0x102620");
#endif

    switch (ctx->pc) {
        case 0x102620u: goto label_102620;
        case 0x102624u: goto label_102624;
        case 0x102628u: goto label_102628;
        case 0x10262cu: goto label_10262c;
        case 0x102630u: goto label_102630;
        case 0x102634u: goto label_102634;
        case 0x102638u: goto label_102638;
        case 0x10263cu: goto label_10263c;
        case 0x102640u: goto label_102640;
        case 0x102644u: goto label_102644;
        case 0x102648u: goto label_102648;
        case 0x10264cu: goto label_10264c;
        case 0x102650u: goto label_102650;
        case 0x102654u: goto label_102654;
        case 0x102658u: goto label_102658;
        case 0x10265cu: goto label_10265c;
        case 0x102660u: goto label_102660;
        case 0x102664u: goto label_102664;
        case 0x102668u: goto label_102668;
        case 0x10266cu: goto label_10266c;
        case 0x102670u: goto label_102670;
        case 0x102674u: goto label_102674;
        case 0x102678u: goto label_102678;
        case 0x10267cu: goto label_10267c;
        default: break;
    }

    ctx->pc = 0x102620u;

label_102620:
    // 0x102620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_102624:
    // 0x102624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102628:
    // 0x102628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10262c:
    // 0x10262c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102630:
    // 0x102630: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x102630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102634:
    // 0x102634: 0xc050b2c  jal         func_142CB0
label_102638:
    if (ctx->pc == 0x102638u) {
        ctx->pc = 0x10263Cu;
        goto label_10263c;
    }
    ctx->pc = 0x102634u;
    SET_GPR_U32(ctx, 31, 0x10263Cu);
    ctx->pc = 0x142CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142CB0u, 0x102634u, 0x10263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10263Cu;
label_10263c:
    // 0x10263c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102640:
    // 0x102640: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x102640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_102644:
    // 0x102644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102648:
    // 0x102648: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x102648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10264c:
    // 0x10264c: 0x320f809  jalr        $t9
label_102650:
    if (ctx->pc == 0x102650u) {
        ctx->pc = 0x102654u;
        goto label_102654;
    }
    ctx->pc = 0x10264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10264Cu, 0x102654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102654u;
label_102654:
    // 0x102654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_102658:
    // 0x102658: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x102658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_10265c:
    // 0x10265c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102660:
    // 0x102660: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x102660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_102664:
    // 0x102664: 0x320f809  jalr        $t9
label_102668:
    if (ctx->pc == 0x102668u) {
        ctx->pc = 0x10266Cu;
        goto label_10266c;
    }
    ctx->pc = 0x102664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10266Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102664u, 0x10266Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10266Cu;
label_10266c:
    // 0x10266c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102670:
    // 0x102670: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x102670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_102674:
    // 0x102674: 0x3e00008  jr          $ra
label_102678:
    if (ctx->pc == 0x102678u) {
        ctx->pc = 0x10267Cu;
        goto label_10267c;
    }
    ctx->pc = 0x102674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10267Cu;
label_10267c:
    // 0x10267c: 0x0  nop
    ctx->pc = 0x10267cu;
    // NOP
    ctx->pc = 0x102680u;
}
