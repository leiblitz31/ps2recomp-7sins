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

// Function: sub_00244F70
// Address: 0x244f70 - 0x244f90
void sub_00244F70_0x244f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F70_0x244f70");
#endif

    ctx->pc = 0x244f70u;

    // 0x244f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244f74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244f78: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x244f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244f7c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x244f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x244f80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244f84: 0x3e00008  jr          $ra
    ctx->pc = 0x244F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244F8Cu;
    // 0x244f8c: 0x0  nop
    ctx->pc = 0x244f8cu;
    // NOP
    ctx->pc = 0x244f90u;
}
