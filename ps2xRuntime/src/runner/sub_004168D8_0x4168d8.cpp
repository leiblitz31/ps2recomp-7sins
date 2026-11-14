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

// Function: sub_004168D8
// Address: 0x4168d8 - 0x4168f0
void sub_004168D8_0x4168d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004168D8_0x4168d8");
#endif

    ctx->pc = 0x4168d8u;

    // 0x4168d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4168d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4168dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4168dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4168e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4168e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4168e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4168E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4168E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168E4u;
        // 0x4168e8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4168E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4168ECu;
    // 0x4168ec: 0x0  nop
    ctx->pc = 0x4168ecu;
    // NOP
    ctx->pc = 0x4168f0u;
}
