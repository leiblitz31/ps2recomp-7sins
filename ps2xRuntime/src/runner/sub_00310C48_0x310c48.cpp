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

// Function: sub_00310C48
// Address: 0x310c48 - 0x310c68
void sub_00310C48_0x310c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310C48_0x310c48");
#endif

    ctx->pc = 0x310c48u;

    // 0x310c48: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x310c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x310c4c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x310c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x310c50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x310c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x310c54: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x310c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x310c58: 0x1812  mflo        $v1
    ctx->pc = 0x310c58u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x310c5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x310c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x310c60: 0x3e00008  jr          $ra
    ctx->pc = 0x310C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C60u;
        // 0x310c64: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310C68u;
}
