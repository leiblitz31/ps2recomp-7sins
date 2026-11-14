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

// Function: sub_003F9C30
// Address: 0x3f9c30 - 0x3f9c78
void sub_003F9C30_0x3f9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9C30_0x3f9c30");
#endif

    ctx->pc = 0x3f9c30u;

    // 0x3f9c30: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f9c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f9c34: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3f9c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3f9c38: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3f9c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3f9c3c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f9c40: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f9c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f9c44: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x3f9c44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3f9c48: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f9c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f9c4c: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x3f9c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x3f9c50: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f9c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f9c54: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C54u;
        // 0x3f9c58: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9C5Cu;
    // 0x3f9c5c: 0x0  nop
    ctx->pc = 0x3f9c5cu;
    // NOP
    // 0x3f9c60: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f9c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f9c64: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3f9c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3f9c68: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f9c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C6Cu;
        // 0x3f9c70: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9C74u;
    // 0x3f9c74: 0x0  nop
    ctx->pc = 0x3f9c74u;
    // NOP
    ctx->pc = 0x3f9c78u;
}
