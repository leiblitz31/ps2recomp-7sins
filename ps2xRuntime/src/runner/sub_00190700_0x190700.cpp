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

// Function: sub_00190700
// Address: 0x190700 - 0x190730
void sub_00190700_0x190700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190700_0x190700");
#endif

    ctx->pc = 0x190700u;

    // 0x190700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x190704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x190708: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x190708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x19070c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190710: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x190710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x190714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x190718: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19071c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190720: 0x3e00008  jr          $ra
    ctx->pc = 0x190720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190728u;
    // 0x190728: 0x0  nop
    ctx->pc = 0x190728u;
    // NOP
    // 0x19072c: 0x0  nop
    ctx->pc = 0x19072cu;
    // NOP
    ctx->pc = 0x190730u;
}
