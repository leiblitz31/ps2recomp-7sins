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

// Function: sub_0010E600
// Address: 0x10e600 - 0x10e630
void sub_0010E600_0x10e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E600_0x10e600");
#endif

    ctx->pc = 0x10e600u;

    // 0x10e600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e604: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e608: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x10e608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10e60c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x10e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e610: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e614: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10e614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10e618: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e61c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e620: 0x3e00008  jr          $ra
    ctx->pc = 0x10E620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E628u;
    // 0x10e628: 0x0  nop
    ctx->pc = 0x10e628u;
    // NOP
    // 0x10e62c: 0x0  nop
    ctx->pc = 0x10e62cu;
    // NOP
    ctx->pc = 0x10e630u;
}
