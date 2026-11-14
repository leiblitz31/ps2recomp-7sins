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

// Function: sub_0024F670
// Address: 0x24f670 - 0x24f6a0
void sub_0024F670_0x24f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F670_0x24f670");
#endif

    ctx->pc = 0x24f670u;

    // 0x24f670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f674: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24f674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24f678: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24f678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24f67c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f684: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f68c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f694: 0x3e00008  jr          $ra
    ctx->pc = 0x24F694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F69Cu;
    // 0x24f69c: 0x0  nop
    ctx->pc = 0x24f69cu;
    // NOP
    ctx->pc = 0x24f6a0u;
}
