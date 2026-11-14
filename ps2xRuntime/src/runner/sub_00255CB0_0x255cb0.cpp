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

// Function: sub_00255CB0
// Address: 0x255cb0 - 0x255cf0
void sub_00255CB0_0x255cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255CB0_0x255cb0");
#endif

    switch (ctx->pc) {
        case 0x255cd0u: goto label_255cd0;
        default: break;
    }

    ctx->pc = 0x255cb0u;

    // 0x255cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x255cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x255cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x255cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x255cbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x255cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x255cc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x255cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255cc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x255cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255cc8: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x255CC8u;
    SET_GPR_U32(ctx, 31, 0x255CD0u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x255CC8u, 0x255CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255CD0u;
label_255cd0:
    // 0x255cd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x255cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x255cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x255cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x255CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255CE4u;
    // 0x255ce4: 0x0  nop
    ctx->pc = 0x255ce4u;
    // NOP
    // 0x255ce8: 0x0  nop
    ctx->pc = 0x255ce8u;
    // NOP
    // 0x255cec: 0x0  nop
    ctx->pc = 0x255cecu;
    // NOP
    ctx->pc = 0x255cf0u;
}
