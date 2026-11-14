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

// Function: sub_002440B0
// Address: 0x2440b0 - 0x2440e0
void sub_002440B0_0x2440b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002440B0_0x2440b0");
#endif

    ctx->pc = 0x2440b0u;

    // 0x2440b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2440b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2440b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2440b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2440b8: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x2440b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x2440bc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x2440bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2440c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2440c4: 0xa0640035  sb          $a0, 0x35($v1)
    ctx->pc = 0x2440c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 53), (uint8_t)GPR_U32(ctx, 4));
    // 0x2440c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2440c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2440cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2440CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2440CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2440D4u;
    // 0x2440d4: 0x0  nop
    ctx->pc = 0x2440d4u;
    // NOP
    // 0x2440d8: 0x0  nop
    ctx->pc = 0x2440d8u;
    // NOP
    // 0x2440dc: 0x0  nop
    ctx->pc = 0x2440dcu;
    // NOP
    ctx->pc = 0x2440e0u;
}
