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

// Function: sub_00477380
// Address: 0x477380 - 0x4773d0
void sub_00477380_0x477380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477380_0x477380");
#endif

    switch (ctx->pc) {
        case 0x477394u: goto label_477394;
        case 0x4773a4u: goto label_4773a4;
        case 0x4773b0u: goto label_4773b0;
        case 0x4773c0u: goto label_4773c0;
        default: break;
    }

    ctx->pc = 0x477380u;

    // 0x477380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x477380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x477384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477388: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x47738c: 0xc11dcf4  jal         func_4773D0
    ctx->pc = 0x47738Cu;
    SET_GPR_U32(ctx, 31, 0x477394u);
    ctx->pc = 0x4773D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4773D0u, 0x47738Cu, 0x477394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477394u;
label_477394:
    // 0x477394: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x477394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x477398: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x477398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x47739c: 0xc11e27c  jal         func_4789F0
    ctx->pc = 0x47739Cu;
    SET_GPR_U32(ctx, 31, 0x4773A4u);
    ctx->pc = 0x4789F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4789F0u, 0x47739Cu, 0x4773A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4773A4u;
label_4773a4:
    // 0x4773a4: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x4773a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x4773a8: 0xc11dcf4  jal         func_4773D0
    ctx->pc = 0x4773A8u;
    SET_GPR_U32(ctx, 31, 0x4773B0u);
    ctx->pc = 0x4773D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4773D0u, 0x4773A8u, 0x4773B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4773B0u;
label_4773b0:
    // 0x4773b0: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x4773b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x4773b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4773b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4773b8: 0xc11e27c  jal         func_4789F0
    ctx->pc = 0x4773B8u;
    SET_GPR_U32(ctx, 31, 0x4773C0u);
    ctx->pc = 0x4789F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4789F0u, 0x4773B8u, 0x4773C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4773C0u;
label_4773c0:
    // 0x4773c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4773c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4773c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4773c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4773c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4773C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4773C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4773D0u;
}
