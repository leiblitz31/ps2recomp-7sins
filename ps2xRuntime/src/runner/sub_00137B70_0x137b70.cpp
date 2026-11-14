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

// Function: sub_00137B70
// Address: 0x137b70 - 0x137bc0
void sub_00137B70_0x137b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137B70_0x137b70");
#endif

    ctx->pc = 0x137b70u;

    // 0x137b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137b74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x137b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x137b78: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x137b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x137b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137b84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137b88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x137b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x137b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x137b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x137b94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137b98: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x137b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x137b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ba0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x137ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x137ba4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ba8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x137ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x137bac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137bb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x137BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137BBCu;
    // 0x137bbc: 0x0  nop
    ctx->pc = 0x137bbcu;
    // NOP
    ctx->pc = 0x137bc0u;
}
