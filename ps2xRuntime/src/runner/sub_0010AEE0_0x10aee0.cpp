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

// Function: sub_0010AEE0
// Address: 0x10aee0 - 0x10af20
void sub_0010AEE0_0x10aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AEE0_0x10aee0");
#endif

    switch (ctx->pc) {
        case 0x10aefcu: goto label_10aefc;
        case 0x10af0cu: goto label_10af0c;
        default: break;
    }

    ctx->pc = 0x10aee0u;

    // 0x10aee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10aee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10aee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10aeec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10aef0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aef4: 0xc042a00  jal         func_10A800
    ctx->pc = 0x10AEF4u;
    SET_GPR_U32(ctx, 31, 0x10AEFCu);
    ctx->pc = 0x10A800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A800u, 0x10AEF4u, 0x10AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AEFCu;
label_10aefc:
    // 0x10aefc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10af00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10af04: 0xc042b4c  jal         func_10AD30
    ctx->pc = 0x10AF04u;
    SET_GPR_U32(ctx, 31, 0x10AF0Cu);
    ctx->pc = 0x10AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AD30u, 0x10AF04u, 0x10AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF0Cu;
label_10af0c:
    // 0x10af0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10af0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10af14: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF1Cu;
    // 0x10af1c: 0x0  nop
    ctx->pc = 0x10af1cu;
    // NOP
    ctx->pc = 0x10af20u;
}
