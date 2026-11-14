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

// Function: sub_00244E50
// Address: 0x244e50 - 0x244e80
void sub_00244E50_0x244e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244E50_0x244e50");
#endif

    ctx->pc = 0x244e50u;

    // 0x244e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244e54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244e58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x244e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x244e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x244e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244e60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x244e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244e64: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x244e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
    // 0x244e68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x244e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x244E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E74u;
    // 0x244e74: 0x0  nop
    ctx->pc = 0x244e74u;
    // NOP
    // 0x244e78: 0x0  nop
    ctx->pc = 0x244e78u;
    // NOP
    // 0x244e7c: 0x0  nop
    ctx->pc = 0x244e7cu;
    // NOP
    ctx->pc = 0x244e80u;
}
