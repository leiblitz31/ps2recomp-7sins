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

// Function: sub_0046B270
// Address: 0x46b270 - 0x46b2c0
void sub_0046B270_0x46b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B270_0x46b270");
#endif

    switch (ctx->pc) {
        case 0x46b290u: goto label_46b290;
        case 0x46b2a8u: goto label_46b2a8;
        default: break;
    }

    ctx->pc = 0x46b270u;

    // 0x46b270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46b274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b27c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b280: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b284: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b288: 0xc11acb0  jal         func_46B2C0
    ctx->pc = 0x46B288u;
    SET_GPR_U32(ctx, 31, 0x46B290u);
    ctx->pc = 0x46B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B2C0u, 0x46B288u, 0x46B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B290u;
label_46b290:
    // 0x46b290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b294: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46b298: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b29c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46b29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46b2a0: 0xc11ad74  jal         func_46B5D0
    ctx->pc = 0x46B2A0u;
    SET_GPR_U32(ctx, 31, 0x46B2A8u);
    ctx->pc = 0x46B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B5D0u, 0x46B2A0u, 0x46B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B2A8u;
label_46b2a8:
    // 0x46b2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b2ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46b2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46b2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x46B2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B2B8u;
    // 0x46b2b8: 0x0  nop
    ctx->pc = 0x46b2b8u;
    // NOP
    // 0x46b2bc: 0x0  nop
    ctx->pc = 0x46b2bcu;
    // NOP
    ctx->pc = 0x46b2c0u;
}
