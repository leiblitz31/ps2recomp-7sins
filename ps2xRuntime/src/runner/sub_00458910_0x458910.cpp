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

// Function: sub_00458910
// Address: 0x458910 - 0x458960
void sub_00458910_0x458910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458910_0x458910");
#endif

    switch (ctx->pc) {
        case 0x458930u: goto label_458930;
        case 0x458948u: goto label_458948;
        default: break;
    }

    ctx->pc = 0x458910u;

    // 0x458910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x458910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x458914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x458918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45891c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45891cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x458920: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x458920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458924: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x458924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x458928: 0xc116258  jal         func_458960
    ctx->pc = 0x458928u;
    SET_GPR_U32(ctx, 31, 0x458930u);
    ctx->pc = 0x458960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458960u, 0x458928u, 0x458930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458930u;
label_458930:
    // 0x458930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x458930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458934: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x458934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x458938: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x458938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45893c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x458940: 0xc11628c  jal         func_458A30
    ctx->pc = 0x458940u;
    SET_GPR_U32(ctx, 31, 0x458948u);
    ctx->pc = 0x458A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458A30u, 0x458940u, 0x458948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458948u;
label_458948:
    // 0x458948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45894c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45894cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x458950: 0x3e00008  jr          $ra
    ctx->pc = 0x458950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458958u;
    // 0x458958: 0x0  nop
    ctx->pc = 0x458958u;
    // NOP
    // 0x45895c: 0x0  nop
    ctx->pc = 0x45895cu;
    // NOP
    ctx->pc = 0x458960u;
}
