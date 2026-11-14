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

// Function: sub_0025AA30
// Address: 0x25aa30 - 0x25aa70
void sub_0025AA30_0x25aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA30_0x25aa30");
#endif

    ctx->pc = 0x25aa30u;

    // 0x25aa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25aa34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25aa38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25aa3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aa40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25aa44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25aa4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25aa50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25aa54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa58: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x25aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25aa5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aa60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25aa64: 0x3e00008  jr          $ra
    ctx->pc = 0x25AA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AA6Cu;
    // 0x25aa6c: 0x0  nop
    ctx->pc = 0x25aa6cu;
    // NOP
    ctx->pc = 0x25aa70u;
}
