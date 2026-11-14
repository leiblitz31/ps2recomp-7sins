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

// Function: sub_002E9FD0
// Address: 0x2e9fd0 - 0x2e9ff0
void sub_002E9FD0_0x2e9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9FD0_0x2e9fd0");
#endif

    ctx->pc = 0x2e9fd0u;

    // 0x2e9fd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e9fd4: 0x24426e50  addiu       $v0, $v0, 0x6E50
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28240));
    // 0x2e9fd8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2e9fdc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e9fe0: 0x24426f64  addiu       $v0, $v0, 0x6F64
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28516));
    // 0x2e9fe4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2e9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2e9fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FE8u;
        // 0x2e9fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9FF0u;
}
