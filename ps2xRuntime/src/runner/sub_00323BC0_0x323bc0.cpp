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

// Function: sub_00323BC0
// Address: 0x323bc0 - 0x323be0
void sub_00323BC0_0x323bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323BC0_0x323bc0");
#endif

    ctx->pc = 0x323bc0u;

    // 0x323bc0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x323bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x323BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BC4u;
        // 0x323bc8: 0x8c62b234  lw          $v0, -0x4DCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947380)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BCCu;
    // 0x323bcc: 0x0  nop
    ctx->pc = 0x323bccu;
    // NOP
    // 0x323bd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x323bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x323BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BD8u;
        // 0x323bdc: 0xac64b234  sw          $a0, -0x4DCC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947380), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BE0u;
}
