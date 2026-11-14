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

// Function: sub_00106A30
// Address: 0x106a30 - 0x106a70
void sub_00106A30_0x106a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A30_0x106a30");
#endif

    switch (ctx->pc) {
        case 0x106a48u: goto label_106a48;
        case 0x106a5cu: goto label_106a5c;
        default: break;
    }

    ctx->pc = 0x106a30u;

    // 0x106a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106a38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x106a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x106a3c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x106a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x106a40: 0xc041b1c  jal         func_106C70
    ctx->pc = 0x106A40u;
    SET_GPR_U32(ctx, 31, 0x106A48u);
    ctx->pc = 0x106C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C70u, 0x106A40u, 0x106A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A48u;
label_106a48:
    // 0x106a48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a4c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x106a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x106a50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a54: 0xc041a9c  jal         func_106A70
    ctx->pc = 0x106A54u;
    SET_GPR_U32(ctx, 31, 0x106A5Cu);
    ctx->pc = 0x106A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A70u, 0x106A54u, 0x106A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A5Cu;
label_106a5c:
    // 0x106a5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x106a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106a68: 0x3e00008  jr          $ra
    ctx->pc = 0x106A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A70u;
}
