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

// Function: sub_00145BE0
// Address: 0x145be0 - 0x145c10
void sub_00145BE0_0x145be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145BE0_0x145be0");
#endif

    ctx->pc = 0x145be0u;

    // 0x145be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145be4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x145be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x145be8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x145be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x145becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145bf0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x145bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x145bf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x145bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145bf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x145bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x145bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x145BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145C04u;
    // 0x145c04: 0x0  nop
    ctx->pc = 0x145c04u;
    // NOP
    // 0x145c08: 0x0  nop
    ctx->pc = 0x145c08u;
    // NOP
    // 0x145c0c: 0x0  nop
    ctx->pc = 0x145c0cu;
    // NOP
    ctx->pc = 0x145c10u;
}
