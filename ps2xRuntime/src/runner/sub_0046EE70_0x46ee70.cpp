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

// Function: sub_0046EE70
// Address: 0x46ee70 - 0x46eea0
void sub_0046EE70_0x46ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EE70_0x46ee70");
#endif

    switch (ctx->pc) {
        case 0x46ee88u: goto label_46ee88;
        default: break;
    }

    ctx->pc = 0x46ee70u;

    // 0x46ee70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46ee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46ee74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46ee78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46ee7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ee80: 0xc11bba8  jal         func_46EEA0
    ctx->pc = 0x46EE80u;
    SET_GPR_U32(ctx, 31, 0x46EE88u);
    ctx->pc = 0x46EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46EEA0u, 0x46EE80u, 0x46EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EE88u;
label_46ee88:
    // 0x46ee88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ee88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ee8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46ee8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46ee90: 0x3e00008  jr          $ra
    ctx->pc = 0x46EE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46EE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46EE98u;
    // 0x46ee98: 0x0  nop
    ctx->pc = 0x46ee98u;
    // NOP
    // 0x46ee9c: 0x0  nop
    ctx->pc = 0x46ee9cu;
    // NOP
    ctx->pc = 0x46eea0u;
}
