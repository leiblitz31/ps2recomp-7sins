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

// Function: sub_0040FAC8
// Address: 0x40fac8 - 0x40fae8
void sub_0040FAC8_0x40fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FAC8_0x40fac8");
#endif

    ctx->pc = 0x40fac8u;

    // 0x40fac8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x40fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x40facc: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x40faccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x40fad0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x40fad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x40fad4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40fad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fad8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x40fad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x40fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x40FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FADCu;
        // 0x40fae0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FAE4u;
    // 0x40fae4: 0x0  nop
    ctx->pc = 0x40fae4u;
    // NOP
    ctx->pc = 0x40fae8u;
}
