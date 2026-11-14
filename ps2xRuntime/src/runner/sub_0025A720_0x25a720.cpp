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

// Function: sub_0025A720
// Address: 0x25a720 - 0x25a750
void sub_0025A720_0x25a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A720_0x25a720");
#endif

    ctx->pc = 0x25a720u;

    // 0x25a720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a728: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x25a728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x25a72c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x25a72cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a734: 0xa06400fa  sb          $a0, 0xFA($v1)
    ctx->pc = 0x25a734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 250), (uint8_t)GPR_U32(ctx, 4));
    // 0x25a738: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a73c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A744u;
    // 0x25a744: 0x0  nop
    ctx->pc = 0x25a744u;
    // NOP
    // 0x25a748: 0x0  nop
    ctx->pc = 0x25a748u;
    // NOP
    // 0x25a74c: 0x0  nop
    ctx->pc = 0x25a74cu;
    // NOP
    ctx->pc = 0x25a750u;
}
