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

// Function: sub_00321978
// Address: 0x321978 - 0x321998
void sub_00321978_0x321978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321978_0x321978");
#endif

    ctx->pc = 0x321978u;

    // 0x321978: 0x8f83bce0  lw          $v1, -0x4320($gp)
    ctx->pc = 0x321978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x32197c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32197cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321980: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x321980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x321984: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x321984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321988: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x321988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x32198c: 0x3e00008  jr          $ra
    ctx->pc = 0x32198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32198Cu;
        // 0x321990: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321994u;
    // 0x321994: 0x0  nop
    ctx->pc = 0x321994u;
    // NOP
    ctx->pc = 0x321998u;
}
