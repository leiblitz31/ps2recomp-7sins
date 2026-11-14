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

// Function: sub_00482B50
// Address: 0x482b50 - 0x482b80
void sub_00482B50_0x482b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482B50_0x482b50");
#endif

    switch (ctx->pc) {
        case 0x482b68u: goto label_482b68;
        default: break;
    }

    ctx->pc = 0x482b50u;

    // 0x482b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x482b5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482b60: 0xc120924  jal         func_482490
    ctx->pc = 0x482B60u;
    SET_GPR_U32(ctx, 31, 0x482B68u);
    ctx->pc = 0x482490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482490u, 0x482B60u, 0x482B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482B68u;
label_482b68:
    // 0x482b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482b6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x482b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x482b70: 0x3e00008  jr          $ra
    ctx->pc = 0x482B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482B78u;
    // 0x482b78: 0x0  nop
    ctx->pc = 0x482b78u;
    // NOP
    // 0x482b7c: 0x0  nop
    ctx->pc = 0x482b7cu;
    // NOP
    ctx->pc = 0x482b80u;
}
