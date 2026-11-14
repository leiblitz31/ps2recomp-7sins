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

// Function: sub_003836E8
// Address: 0x3836e8 - 0x383718
void sub_003836E8_0x3836e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003836E8_0x3836e8");
#endif

    ctx->pc = 0x3836e8u;

    // 0x3836e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3836e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3836ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3836ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3836f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3836f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3836f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3836F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3836F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836F4u;
        // 0x3836f8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3836F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3836FCu;
    // 0x3836fc: 0x0  nop
    ctx->pc = 0x3836fcu;
    // NOP
    // 0x383700: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x383700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x383704: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x383704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x383708: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x383708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38370c: 0x3e00008  jr          $ra
    ctx->pc = 0x38370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38370Cu;
        // 0x383710: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383714u;
    // 0x383714: 0x0  nop
    ctx->pc = 0x383714u;
    // NOP
    ctx->pc = 0x383718u;
}
