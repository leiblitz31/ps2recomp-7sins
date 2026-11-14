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

// Function: sub_0039CD50
// Address: 0x39cd50 - 0x39cd80
void sub_0039CD50_0x39cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CD50_0x39cd50");
#endif

    switch (ctx->pc) {
        case 0x39cd70u: goto label_39cd70;
        default: break;
    }

    ctx->pc = 0x39cd50u;

    // 0x39cd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39cd54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39cd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cd5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39cd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd60: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x39cd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x39cd64: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x39cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x39cd68: 0xc0e3ea4  jal         func_38FA90
    ctx->pc = 0x39CD68u;
    SET_GPR_U32(ctx, 31, 0x39CD70u);
    ctx->pc = 0x39CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD68u;
    // 0x39cd6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FA90u, 0x39CD68u, 0x39CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD70u;
label_39cd70:
    // 0x39cd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cd74: 0x3e00008  jr          $ra
    ctx->pc = 0x39CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD74u;
        // 0x39cd78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CD7Cu;
    // 0x39cd7c: 0x0  nop
    ctx->pc = 0x39cd7cu;
    // NOP
    ctx->pc = 0x39cd80u;
}
