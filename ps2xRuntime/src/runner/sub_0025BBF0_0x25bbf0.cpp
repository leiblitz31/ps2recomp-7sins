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

// Function: sub_0025BBF0
// Address: 0x25bbf0 - 0x25bc30
void sub_0025BBF0_0x25bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BBF0_0x25bbf0");
#endif

    ctx->pc = 0x25bbf0u;

    // 0x25bbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25bbf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25bbf8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25bbfc: 0xa3a60020  sb          $a2, 0x20($sp)
    ctx->pc = 0x25bbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    // 0x25bc00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bc04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bc08: 0xac64018c  sw          $a0, 0x18C($v1)
    ctx->pc = 0x25bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 4));
    // 0x25bc0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bc10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bc14: 0xa0640190  sb          $a0, 0x190($v1)
    ctx->pc = 0x25bc14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 400), (uint8_t)GPR_U32(ctx, 4));
    // 0x25bc18: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x25bc18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bc1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bc20: 0xa0640191  sb          $a0, 0x191($v1)
    ctx->pc = 0x25bc20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 401), (uint8_t)GPR_U32(ctx, 4));
    // 0x25bc24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25bc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25bc28: 0x3e00008  jr          $ra
    ctx->pc = 0x25BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BC30u;
}
