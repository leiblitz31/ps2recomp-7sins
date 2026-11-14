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

// Function: sub_00216DE0
// Address: 0x216de0 - 0x216e20
void sub_00216DE0_0x216de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216DE0_0x216de0");
#endif

    ctx->pc = 0x216de0u;

    // 0x216de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216de4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216de8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x216de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x216dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216df0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x216df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216df4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216df8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x216df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x216dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216e00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x216e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x216e04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x216e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x216e0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x216e14: 0x3e00008  jr          $ra
    ctx->pc = 0x216E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216E1Cu;
    // 0x216e1c: 0x0  nop
    ctx->pc = 0x216e1cu;
    // NOP
    ctx->pc = 0x216e20u;
}
