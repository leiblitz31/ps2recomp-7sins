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

// Function: sub_0028AD70
// Address: 0x28ad70 - 0x28adb0
void sub_0028AD70_0x28ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AD70_0x28ad70");
#endif

    switch (ctx->pc) {
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad9cu: goto label_28ad9c;
        default: break;
    }

    ctx->pc = 0x28ad70u;

    // 0x28ad70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ad74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ad78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28ad7c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x28ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x28ad80: 0xc05ef60  jal         func_17BD80
    ctx->pc = 0x28AD80u;
    SET_GPR_U32(ctx, 31, 0x28AD88u);
    ctx->pc = 0x17BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD80u, 0x28AD80u, 0x28AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD88u;
label_28ad88:
    // 0x28ad88: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ad8c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x28ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28ad90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ad90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad94: 0xc0a2b6c  jal         func_28ADB0
    ctx->pc = 0x28AD94u;
    SET_GPR_U32(ctx, 31, 0x28AD9Cu);
    ctx->pc = 0x28ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ADB0u, 0x28AD94u, 0x28AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD9Cu;
label_28ad9c:
    // 0x28ad9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ada0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ada4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x28ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ADB0u;
}
