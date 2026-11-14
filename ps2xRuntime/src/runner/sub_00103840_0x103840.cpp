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

// Function: sub_00103840
// Address: 0x103840 - 0x103880
void sub_00103840_0x103840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103840_0x103840");
#endif

    switch (ctx->pc) {
        case 0x103840u: goto label_103840;
        case 0x103844u: goto label_103844;
        case 0x103848u: goto label_103848;
        case 0x10384cu: goto label_10384c;
        case 0x103850u: goto label_103850;
        case 0x103854u: goto label_103854;
        case 0x103858u: goto label_103858;
        case 0x10385cu: goto label_10385c;
        case 0x103860u: goto label_103860;
        case 0x103864u: goto label_103864;
        case 0x103868u: goto label_103868;
        case 0x10386cu: goto label_10386c;
        case 0x103870u: goto label_103870;
        case 0x103874u: goto label_103874;
        case 0x103878u: goto label_103878;
        case 0x10387cu: goto label_10387c;
        default: break;
    }

    ctx->pc = 0x103840u;

label_103840:
    // 0x103840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103844:
    // 0x103844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103848:
    // 0x103848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10384c:
    // 0x10384c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10384cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103850:
    // 0x103850: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x103850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103854:
    // 0x103854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103858:
    // 0x103858: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x103858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10385c:
    // 0x10385c: 0x320f809  jalr        $t9
label_103860:
    if (ctx->pc == 0x103860u) {
        ctx->pc = 0x103864u;
        goto label_103864;
    }
    ctx->pc = 0x10385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10385Cu, 0x103864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103864u;
label_103864:
    // 0x103864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103868:
    // 0x103868: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x103868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10386c:
    // 0x10386c: 0x3e00008  jr          $ra
label_103870:
    if (ctx->pc == 0x103870u) {
        ctx->pc = 0x103874u;
        goto label_103874;
    }
    ctx->pc = 0x10386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103874u;
label_103874:
    // 0x103874: 0x0  nop
    ctx->pc = 0x103874u;
    // NOP
label_103878:
    // 0x103878: 0x0  nop
    ctx->pc = 0x103878u;
    // NOP
label_10387c:
    // 0x10387c: 0x0  nop
    ctx->pc = 0x10387cu;
    // NOP
    ctx->pc = 0x103880u;
}
