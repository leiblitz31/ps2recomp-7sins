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

// Function: sub_003B78B8
// Address: 0x3b78b8 - 0x3b7900
void sub_003B78B8_0x3b78b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B78B8_0x3b78b8");
#endif

    switch (ctx->pc) {
        case 0x3b78c8u: goto label_3b78c8;
        case 0x3b78f4u: goto label_3b78f4;
        default: break;
    }

    ctx->pc = 0x3b78b8u;

    // 0x3b78b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b78b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b78bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b78bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b78c0: 0xc0ed956  jal         func_3B6558
    ctx->pc = 0x3B78C0u;
    SET_GPR_U32(ctx, 31, 0x3B78C8u);
    ctx->pc = 0x3B78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78C0u;
    // 0x3b78c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6558u, 0x3B78C0u, 0x3B78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78C8u;
label_3b78c8:
    // 0x3b78c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b78c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b78cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B78CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78CCu;
        // 0x3b78d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B78CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B78D4u;
    // 0x3b78d4: 0x0  nop
    ctx->pc = 0x3b78d4u;
    // NOP
    // 0x3b78d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b78d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b78dc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3b78dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3b78e0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3b78e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3b78e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b78e8: 0x24a5c148  addiu       $a1, $a1, -0x3EB8
    ctx->pc = 0x3b78e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951240));
    // 0x3b78ec: 0xc0ed6e4  jal         func_3B5B90
    ctx->pc = 0x3B78ECu;
    SET_GPR_U32(ctx, 31, 0x3B78F4u);
    ctx->pc = 0x3B78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B78ECu;
    // 0x3b78f0: 0x24c6c158  addiu       $a2, $a2, -0x3EA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B90u, 0x3B78ECu, 0x3B78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B78F4u;
label_3b78f4:
    // 0x3b78f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b78f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b78f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B78F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78F8u;
        // 0x3b78fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B78F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7900u;
}
