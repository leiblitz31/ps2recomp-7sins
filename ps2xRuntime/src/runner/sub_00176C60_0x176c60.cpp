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

// Function: sub_00176C60
// Address: 0x176c60 - 0x176c90
void sub_00176C60_0x176c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176C60_0x176c60");
#endif

    ctx->pc = 0x176c60u;

    // 0x176c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x176c68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x176c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x176c6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176c70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x176c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176c74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x176c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176c78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x176c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176c7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x176c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x176c80: 0x3e00008  jr          $ra
    ctx->pc = 0x176C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176C88u;
    // 0x176c88: 0x0  nop
    ctx->pc = 0x176c88u;
    // NOP
    // 0x176c8c: 0x0  nop
    ctx->pc = 0x176c8cu;
    // NOP
    ctx->pc = 0x176c90u;
}
