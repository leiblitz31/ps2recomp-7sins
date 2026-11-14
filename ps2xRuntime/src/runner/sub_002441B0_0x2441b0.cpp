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

// Function: sub_002441B0
// Address: 0x2441b0 - 0x2441f0
void sub_002441B0_0x2441b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002441B0_0x2441b0");
#endif

    switch (ctx->pc) {
        case 0x2441d4u: goto label_2441d4;
        case 0x2441e0u: goto label_2441e0;
        default: break;
    }

    ctx->pc = 0x2441b0u;

    // 0x2441b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2441b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2441b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2441b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2441b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2441bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2441bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2441c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2441c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2441c4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2441c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2441c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2441c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2441cc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2441CCu;
    SET_GPR_U32(ctx, 31, 0x2441D4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2441CCu, 0x2441D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441D4u;
label_2441d4:
    // 0x2441d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2441d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2441d8: 0xc091050  jal         func_244140
    ctx->pc = 0x2441D8u;
    SET_GPR_U32(ctx, 31, 0x2441E0u);
    ctx->pc = 0x244140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244140u, 0x2441D8u, 0x2441E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441E0u;
label_2441e0:
    // 0x2441e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2441e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2441e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2441e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2441e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2441E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2441E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2441F0u;
}
