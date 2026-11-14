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

// Function: sub_00115660
// Address: 0x115660 - 0x1156a0
void sub_00115660_0x115660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115660_0x115660");
#endif

    switch (ctx->pc) {
        case 0x115684u: goto label_115684;
        default: break;
    }

    ctx->pc = 0x115660u;

    // 0x115660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11566c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11566cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x115670: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115674: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115678: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x115678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11567c: 0xc0455a8  jal         func_1156A0
    ctx->pc = 0x11567Cu;
    SET_GPR_U32(ctx, 31, 0x115684u);
    ctx->pc = 0x1156A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156A0u, 0x11567Cu, 0x115684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115684u;
label_115684:
    // 0x115684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115688: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x115688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11568c: 0x3e00008  jr          $ra
    ctx->pc = 0x11568Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11568Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115694u;
    // 0x115694: 0x0  nop
    ctx->pc = 0x115694u;
    // NOP
    // 0x115698: 0x0  nop
    ctx->pc = 0x115698u;
    // NOP
    // 0x11569c: 0x0  nop
    ctx->pc = 0x11569cu;
    // NOP
    ctx->pc = 0x1156a0u;
}
