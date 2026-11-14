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

// Function: sub_00226B10
// Address: 0x226b10 - 0x226b40
void sub_00226B10_0x226b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226B10_0x226b10");
#endif

    ctx->pc = 0x226b10u;

    // 0x226b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226b14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x226b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x226b18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x226b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x226b1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226b20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226b24: 0xac64005c  sw          $a0, 0x5C($v1)
    ctx->pc = 0x226b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
    // 0x226b28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x226b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x226b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x226B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226B34u;
    // 0x226b34: 0x0  nop
    ctx->pc = 0x226b34u;
    // NOP
    // 0x226b38: 0x0  nop
    ctx->pc = 0x226b38u;
    // NOP
    // 0x226b3c: 0x0  nop
    ctx->pc = 0x226b3cu;
    // NOP
    ctx->pc = 0x226b40u;
}
