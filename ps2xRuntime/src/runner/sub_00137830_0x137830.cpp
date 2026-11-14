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

// Function: sub_00137830
// Address: 0x137830 - 0x137860
void sub_00137830_0x137830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137830_0x137830");
#endif

    ctx->pc = 0x137830u;

    // 0x137830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137834: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x137834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x137838: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x137838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13783c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137840: 0x24642711  addiu       $a0, $v1, 0x2711
    ctx->pc = 0x137840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10001));
    // 0x137844: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137848: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x137848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x13784c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137850: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x137850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x137854: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x137854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137858: 0x3e00008  jr          $ra
    ctx->pc = 0x137858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137860u;
}
