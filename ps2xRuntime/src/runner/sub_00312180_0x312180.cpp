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

// Function: sub_00312180
// Address: 0x312180 - 0x3121c8
void sub_00312180_0x312180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312180_0x312180");
#endif

    ctx->pc = 0x312180u;

    // 0x312180: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x312180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x312184: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312184u;
    {
        const bool branch_taken_0x312184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x312188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312184u;
        // 0x312188: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312184) {
            ctx->pc = 0x312194u;
            goto label_312194;
        }
    }
    ctx->pc = 0x31218Cu;
    // 0x31218c: 0x3e00008  jr          $ra
    ctx->pc = 0x31218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31218Cu;
        // 0x312190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31218Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312194u;
label_312194:
    // 0x312194: 0x8f83a584  lw          $v1, -0x5A7C($gp)
    ctx->pc = 0x312194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944132)));
    // 0x312198: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x312198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31219c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3121a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3121A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121A0u;
        // 0x3121a4: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3121A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3121A8u;
    // 0x3121a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3121A8u;
    {
        const bool branch_taken_0x3121a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121A8u;
        // 0x3121ac: 0x8f83a584  lw          $v1, -0x5A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121a8) {
            ctx->pc = 0x3121B8u;
            goto label_3121b8;
        }
    }
    ctx->pc = 0x3121B0u;
    // 0x3121b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3121B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121B0u;
        // 0x3121b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3121B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3121B8u;
label_3121b8:
    // 0x3121b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3121b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3121bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3121BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121BCu;
        // 0x3121c0: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3121BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3121C4u;
    // 0x3121c4: 0x0  nop
    ctx->pc = 0x3121c4u;
    // NOP
    ctx->pc = 0x3121c8u;
}
