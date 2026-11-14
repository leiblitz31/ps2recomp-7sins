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

// Function: sub_00101B40
// Address: 0x101b40 - 0x101b90
void sub_00101B40_0x101b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101B40_0x101b40");
#endif

    switch (ctx->pc) {
        case 0x101b5cu: goto label_101b5c;
        case 0x101b70u: goto label_101b70;
        default: break;
    }

    ctx->pc = 0x101b40u;

    // 0x101b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x101b4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x101b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x101b50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b54: 0xc0406e4  jal         func_101B90
    ctx->pc = 0x101B54u;
    SET_GPR_U32(ctx, 31, 0x101B5Cu);
    ctx->pc = 0x101B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B90u, 0x101B54u, 0x101B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B5Cu;
label_101b5c:
    // 0x101b5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x101b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101b68: 0xc04071c  jal         func_101C70
    ctx->pc = 0x101B68u;
    SET_GPR_U32(ctx, 31, 0x101B70u);
    ctx->pc = 0x101C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C70u, 0x101B68u, 0x101B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B70u;
label_101b70:
    // 0x101b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101b78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x101b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x101b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x101B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B84u;
    // 0x101b84: 0x0  nop
    ctx->pc = 0x101b84u;
    // NOP
    // 0x101b88: 0x0  nop
    ctx->pc = 0x101b88u;
    // NOP
    // 0x101b8c: 0x0  nop
    ctx->pc = 0x101b8cu;
    // NOP
    ctx->pc = 0x101b90u;
}
