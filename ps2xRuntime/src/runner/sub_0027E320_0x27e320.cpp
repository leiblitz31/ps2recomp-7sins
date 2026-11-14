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

// Function: sub_0027E320
// Address: 0x27e320 - 0x27e350
void sub_0027E320_0x27e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E320_0x27e320");
#endif

    ctx->pc = 0x27e320u;

    // 0x27e320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e324: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27e324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27e328: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x27e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x27e32c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e330: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27e330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e334: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27e338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27e33c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e340: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e344: 0x3e00008  jr          $ra
    ctx->pc = 0x27E344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E34Cu;
    // 0x27e34c: 0x0  nop
    ctx->pc = 0x27e34cu;
    // NOP
    ctx->pc = 0x27e350u;
}
