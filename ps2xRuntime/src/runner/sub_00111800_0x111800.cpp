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

// Function: sub_00111800
// Address: 0x111800 - 0x111840
void sub_00111800_0x111800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111800_0x111800");
#endif

    switch (ctx->pc) {
        case 0x111820u: goto label_111820;
        default: break;
    }

    ctx->pc = 0x111800u;

    // 0x111800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11180c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11180cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x111810: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111814: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x111814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111818: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x111818u;
    SET_GPR_U32(ctx, 31, 0x111820u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x111818u, 0x111820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111820u;
label_111820:
    // 0x111820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111828: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11182c: 0x3e00008  jr          $ra
    ctx->pc = 0x11182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111834u;
    // 0x111834: 0x0  nop
    ctx->pc = 0x111834u;
    // NOP
    // 0x111838: 0x0  nop
    ctx->pc = 0x111838u;
    // NOP
    // 0x11183c: 0x0  nop
    ctx->pc = 0x11183cu;
    // NOP
    ctx->pc = 0x111840u;
}
