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

// Function: sub_0023CF70
// Address: 0x23cf70 - 0x23cfa0
void sub_0023CF70_0x23cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CF70_0x23cf70");
#endif

    ctx->pc = 0x23cf70u;

    // 0x23cf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cf74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23cf78: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x23cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x23cf7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cf80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cf84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23cf88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cf8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23cf8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23cf90: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF98u;
    // 0x23cf98: 0x0  nop
    ctx->pc = 0x23cf98u;
    // NOP
    // 0x23cf9c: 0x0  nop
    ctx->pc = 0x23cf9cu;
    // NOP
    ctx->pc = 0x23cfa0u;
}
