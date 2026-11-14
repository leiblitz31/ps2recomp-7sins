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

// Function: sub_00227FA0
// Address: 0x227fa0 - 0x227fe0
void sub_00227FA0_0x227fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227FA0_0x227fa0");
#endif

    switch (ctx->pc) {
        case 0x227fc4u: goto label_227fc4;
        default: break;
    }

    ctx->pc = 0x227fa0u;

    // 0x227fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227fa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x227fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x227fac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x227facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x227fb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x227fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227fb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x227fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227fbc: 0xc089ff8  jal         func_227FE0
    ctx->pc = 0x227FBCu;
    SET_GPR_U32(ctx, 31, 0x227FC4u);
    ctx->pc = 0x227FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FE0u, 0x227FBCu, 0x227FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FC4u;
label_227fc4:
    // 0x227fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227fc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x227FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FD4u;
    // 0x227fd4: 0x0  nop
    ctx->pc = 0x227fd4u;
    // NOP
    // 0x227fd8: 0x0  nop
    ctx->pc = 0x227fd8u;
    // NOP
    // 0x227fdc: 0x0  nop
    ctx->pc = 0x227fdcu;
    // NOP
    ctx->pc = 0x227fe0u;
}
