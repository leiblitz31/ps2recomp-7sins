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

// Function: sub_00117A10
// Address: 0x117a10 - 0x117a40
void sub_00117A10_0x117a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A10_0x117a10");
#endif

    ctx->pc = 0x117a10u;

    // 0x117a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117a14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x117a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x117a18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x117a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x117a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x117a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117a24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x117a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x117a2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x117a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x117a34: 0x3e00008  jr          $ra
    ctx->pc = 0x117A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A3Cu;
    // 0x117a3c: 0x0  nop
    ctx->pc = 0x117a3cu;
    // NOP
    ctx->pc = 0x117a40u;
}
