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

// Function: sub_00111D90
// Address: 0x111d90 - 0x111dc0
void sub_00111D90_0x111d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111D90_0x111d90");
#endif

    ctx->pc = 0x111d90u;

    // 0x111d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111d94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111d98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x111d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x111d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111da0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111da4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111da8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x111da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x111dac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111db0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x111db4: 0x3e00008  jr          $ra
    ctx->pc = 0x111DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111DBCu;
    // 0x111dbc: 0x0  nop
    ctx->pc = 0x111dbcu;
    // NOP
    ctx->pc = 0x111dc0u;
}
