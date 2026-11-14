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

// Function: sub_00114370
// Address: 0x114370 - 0x1143a0
void sub_00114370_0x114370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114370_0x114370");
#endif

    ctx->pc = 0x114370u;

    // 0x114370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114374: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x114374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x114378: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x114378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11437c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114380: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x114380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x114384: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x114384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114388: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x114388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11438c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11438cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114390: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x114390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x114394: 0x3e00008  jr          $ra
    ctx->pc = 0x114394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11439Cu;
    // 0x11439c: 0x0  nop
    ctx->pc = 0x11439cu;
    // NOP
    ctx->pc = 0x1143a0u;
}
