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

// Function: sub_00127ED0
// Address: 0x127ed0 - 0x127ef0
void sub_00127ED0_0x127ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127ED0_0x127ed0");
#endif

    ctx->pc = 0x127ed0u;

    // 0x127ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127ed4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x127ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x127ed8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x127ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127edc: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x127edcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x127ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127ee4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x127ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x127EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127EF0u;
}
