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

// Function: sub_00283070
// Address: 0x283070 - 0x2830b0
void sub_00283070_0x283070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283070_0x283070");
#endif

    switch (ctx->pc) {
        case 0x28308cu: goto label_28308c;
        case 0x28309cu: goto label_28309c;
        default: break;
    }

    ctx->pc = 0x283070u;

    // 0x283070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x283078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28307c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28307cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x283080: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283084: 0xc0a01c0  jal         func_280700
    ctx->pc = 0x283084u;
    SET_GPR_U32(ctx, 31, 0x28308Cu);
    ctx->pc = 0x280700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280700u, 0x283084u, 0x28308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28308Cu;
label_28308c:
    // 0x28308c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283090: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x283090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283094: 0xc0a0c2c  jal         func_2830B0
    ctx->pc = 0x283094u;
    SET_GPR_U32(ctx, 31, 0x28309Cu);
    ctx->pc = 0x2830B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830B0u, 0x283094u, 0x28309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28309Cu;
label_28309c:
    // 0x28309c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28309cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2830a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2830a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2830a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2830A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830ACu;
    // 0x2830ac: 0x0  nop
    ctx->pc = 0x2830acu;
    // NOP
    ctx->pc = 0x2830b0u;
}
