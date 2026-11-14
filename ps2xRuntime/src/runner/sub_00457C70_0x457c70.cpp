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

// Function: sub_00457C70
// Address: 0x457c70 - 0x457cc0
void sub_00457C70_0x457c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457C70_0x457c70");
#endif

    ctx->pc = 0x457c70u;

    // 0x457c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x457c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x457c74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x457c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x457c78: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x457c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x457c7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457c80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x457c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457c84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457c88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x457c8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457c90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x457c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x457c94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457c98: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x457c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x457c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457ca0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x457ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x457ca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457ca8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x457ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x457cac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457cb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x457cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x457cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x457CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457CBCu;
    // 0x457cbc: 0x0  nop
    ctx->pc = 0x457cbcu;
    // NOP
    ctx->pc = 0x457cc0u;
}
