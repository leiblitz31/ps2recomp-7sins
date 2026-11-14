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

// Function: sub_0039CAD0
// Address: 0x39cad0 - 0x39caf8
void sub_0039CAD0_0x39cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CAD0_0x39cad0");
#endif

    ctx->pc = 0x39cad0u;

    // 0x39cad0: 0x8f85a9ec  lw          $a1, -0x5614($gp)
    ctx->pc = 0x39cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
    // 0x39cad4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x39cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x39cad8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x39cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39cadc: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x39cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
    // 0x39cae0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x39cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39cae4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x39cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x39cae8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39cae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39caec: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x39caecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x39caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x39CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAF0u;
        // 0x39caf4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CAF8u;
}
