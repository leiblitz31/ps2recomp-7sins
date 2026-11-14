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

// Function: sub_00142C60
// Address: 0x142c60 - 0x142c90
void sub_00142C60_0x142c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142C60_0x142c60");
#endif

    ctx->pc = 0x142c60u;

    // 0x142c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x142c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x142c68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x142c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x142c6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x142c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142c70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x142c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142c74: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x142c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x142c78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x142C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142C84u;
    // 0x142c84: 0x0  nop
    ctx->pc = 0x142c84u;
    // NOP
    // 0x142c88: 0x0  nop
    ctx->pc = 0x142c88u;
    // NOP
    // 0x142c8c: 0x0  nop
    ctx->pc = 0x142c8cu;
    // NOP
    ctx->pc = 0x142c90u;
}
