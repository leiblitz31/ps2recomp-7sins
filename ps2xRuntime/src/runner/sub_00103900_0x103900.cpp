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

// Function: sub_00103900
// Address: 0x103900 - 0x103940
void sub_00103900_0x103900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103900_0x103900");
#endif

    switch (ctx->pc) {
        case 0x103900u: goto label_103900;
        case 0x103904u: goto label_103904;
        case 0x103908u: goto label_103908;
        case 0x10390cu: goto label_10390c;
        case 0x103910u: goto label_103910;
        case 0x103914u: goto label_103914;
        case 0x103918u: goto label_103918;
        case 0x10391cu: goto label_10391c;
        case 0x103920u: goto label_103920;
        case 0x103924u: goto label_103924;
        case 0x103928u: goto label_103928;
        case 0x10392cu: goto label_10392c;
        case 0x103930u: goto label_103930;
        case 0x103934u: goto label_103934;
        case 0x103938u: goto label_103938;
        case 0x10393cu: goto label_10393c;
        default: break;
    }

    ctx->pc = 0x103900u;

label_103900:
    // 0x103900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103904:
    // 0x103904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103908:
    // 0x103908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10390c:
    // 0x10390c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103910:
    // 0x103910: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x103910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103914:
    // 0x103914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103918:
    // 0x103918: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x103918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10391c:
    // 0x10391c: 0x320f809  jalr        $t9
label_103920:
    if (ctx->pc == 0x103920u) {
        ctx->pc = 0x103924u;
        goto label_103924;
    }
    ctx->pc = 0x10391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10391Cu, 0x103924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103924u;
label_103924:
    // 0x103924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103928:
    // 0x103928: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x103928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10392c:
    // 0x10392c: 0x3e00008  jr          $ra
label_103930:
    if (ctx->pc == 0x103930u) {
        ctx->pc = 0x103934u;
        goto label_103934;
    }
    ctx->pc = 0x10392Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10392Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103934u;
label_103934:
    // 0x103934: 0x0  nop
    ctx->pc = 0x103934u;
    // NOP
label_103938:
    // 0x103938: 0x0  nop
    ctx->pc = 0x103938u;
    // NOP
label_10393c:
    // 0x10393c: 0x0  nop
    ctx->pc = 0x10393cu;
    // NOP
    ctx->pc = 0x103940u;
}
