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

// Function: sub_00153F10
// Address: 0x153f10 - 0x153f40
void sub_00153F10_0x153f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F10_0x153f10");
#endif

    ctx->pc = 0x153f10u;

    // 0x153f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153f14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x153f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x153f18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x153f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x153f1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x153f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x153f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x153f28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153f30: 0x3e00008  jr          $ra
    ctx->pc = 0x153F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F38u;
    // 0x153f38: 0x0  nop
    ctx->pc = 0x153f38u;
    // NOP
    // 0x153f3c: 0x0  nop
    ctx->pc = 0x153f3cu;
    // NOP
    ctx->pc = 0x153f40u;
}
