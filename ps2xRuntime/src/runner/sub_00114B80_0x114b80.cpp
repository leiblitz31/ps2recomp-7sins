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

// Function: sub_00114B80
// Address: 0x114b80 - 0x114bc0
void sub_00114B80_0x114b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114B80_0x114b80");
#endif

    switch (ctx->pc) {
        case 0x114b98u: goto label_114b98;
        case 0x114ba8u: goto label_114ba8;
        default: break;
    }

    ctx->pc = 0x114b80u;

    // 0x114b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114b88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x114b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x114b8c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x114b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x114b90: 0xc041b1c  jal         func_106C70
    ctx->pc = 0x114B90u;
    SET_GPR_U32(ctx, 31, 0x114B98u);
    ctx->pc = 0x106C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C70u, 0x114B90u, 0x114B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B98u;
label_114b98:
    // 0x114b98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x114b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114b9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ba0: 0xc0452f0  jal         func_114BC0
    ctx->pc = 0x114BA0u;
    SET_GPR_U32(ctx, 31, 0x114BA8u);
    ctx->pc = 0x114BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114BC0u, 0x114BA0u, 0x114BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BA8u;
label_114ba8:
    // 0x114ba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x114ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114bb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x114bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x114BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114BBCu;
    // 0x114bbc: 0x0  nop
    ctx->pc = 0x114bbcu;
    // NOP
    ctx->pc = 0x114bc0u;
}
