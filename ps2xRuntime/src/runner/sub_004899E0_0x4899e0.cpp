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

// Function: sub_004899E0
// Address: 0x4899e0 - 0x489a00
void sub_004899E0_0x4899e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004899E0_0x4899e0");
#endif

    ctx->pc = 0x4899e0u;

    // 0x4899e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4899e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4899e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4899e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4899e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4899e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4899ec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4899ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4899f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4899f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4899f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4899F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4899F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4899FCu;
    // 0x4899fc: 0x0  nop
    ctx->pc = 0x4899fcu;
    // NOP
    ctx->pc = 0x489a00u;
}
