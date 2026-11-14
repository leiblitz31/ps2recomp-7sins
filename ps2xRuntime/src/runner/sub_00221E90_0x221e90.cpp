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

// Function: sub_00221E90
// Address: 0x221e90 - 0x221eb0
void sub_00221E90_0x221e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221E90_0x221e90");
#endif

    ctx->pc = 0x221e90u;

    // 0x221e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221e94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x221e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x221e98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x221e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221e9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x221e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x221ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x221EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221EA8u;
    // 0x221ea8: 0x0  nop
    ctx->pc = 0x221ea8u;
    // NOP
    // 0x221eac: 0x0  nop
    ctx->pc = 0x221eacu;
    // NOP
    ctx->pc = 0x221eb0u;
}
