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

// Function: sub_001A6E80
// Address: 0x1a6e80 - 0x1a6eb0
void sub_001A6E80_0x1a6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6E80_0x1a6e80");
#endif

    ctx->pc = 0x1a6e80u;

    // 0x1a6e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6e84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a6e88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a6e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a6e8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e90: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6e94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a6e98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a6e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6EA4u;
    // 0x1a6ea4: 0x0  nop
    ctx->pc = 0x1a6ea4u;
    // NOP
    // 0x1a6ea8: 0x0  nop
    ctx->pc = 0x1a6ea8u;
    // NOP
    // 0x1a6eac: 0x0  nop
    ctx->pc = 0x1a6eacu;
    // NOP
    ctx->pc = 0x1a6eb0u;
}
