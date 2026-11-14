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

// Function: sub_0046A6C0
// Address: 0x46a6c0 - 0x46a720
void sub_0046A6C0_0x46a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A6C0_0x46a6c0");
#endif

    switch (ctx->pc) {
        case 0x46a6e0u: goto label_46a6e0;
        case 0x46a6ecu: goto label_46a6ec;
        case 0x46a700u: goto label_46a700;
        case 0x46a710u: goto label_46a710;
        default: break;
    }

    ctx->pc = 0x46a6c0u;

    // 0x46a6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a6c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46a6cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46a6d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a6d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x46a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a6d8: 0xc042844  jal         func_10A110
    ctx->pc = 0x46A6D8u;
    SET_GPR_U32(ctx, 31, 0x46A6E0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46A6D8u, 0x46A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A6E0u;
label_46a6e0:
    // 0x46a6e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a6e4: 0xc11931c  jal         func_464C70
    ctx->pc = 0x46A6E4u;
    SET_GPR_U32(ctx, 31, 0x46A6ECu);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x46A6E4u, 0x46A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A6ECu;
label_46a6ec:
    // 0x46a6ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a6f0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a6f4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a6f8: 0xc11a9a4  jal         func_46A690
    ctx->pc = 0x46A6F8u;
    SET_GPR_U32(ctx, 31, 0x46A700u);
    ctx->pc = 0x46A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A690u, 0x46A6F8u, 0x46A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A700u;
label_46a700:
    // 0x46a700: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a704: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a708: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A708u;
    SET_GPR_U32(ctx, 31, 0x46A710u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A708u, 0x46A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A710u;
label_46a710:
    // 0x46a710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a714: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46a714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a718: 0x3e00008  jr          $ra
    ctx->pc = 0x46A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A720u;
}
