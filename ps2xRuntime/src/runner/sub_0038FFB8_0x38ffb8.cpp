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

// Function: sub_0038FFB8
// Address: 0x38ffb8 - 0x38ffe0
void sub_0038FFB8_0x38ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FFB8_0x38ffb8");
#endif

    ctx->pc = 0x38ffb8u;

    // 0x38ffb8: 0x8f84bd50  lw          $a0, -0x42B0($gp)
    ctx->pc = 0x38ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x38ffbc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x38ffc0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x38ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x38ffc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38ffc8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x38ffc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38ffcc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x38ffccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38ffd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x38FFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFD4u;
        // 0x38ffd8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FFDCu;
    // 0x38ffdc: 0x0  nop
    ctx->pc = 0x38ffdcu;
    // NOP
    ctx->pc = 0x38ffe0u;
}
