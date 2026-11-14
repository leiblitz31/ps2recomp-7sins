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

// Function: sub_00326A90
// Address: 0x326a90 - 0x326ac0
void sub_00326A90_0x326a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326A90_0x326a90");
#endif

    switch (ctx->pc) {
        case 0x326ab4u: goto label_326ab4;
        default: break;
    }

    ctx->pc = 0x326a90u;

    // 0x326a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326a94: 0x8f82a63c  lw          $v0, -0x59C4($gp)
    ctx->pc = 0x326a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944316)));
    // 0x326a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326a9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x326a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326aa0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x326aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x326aa4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x326aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x326aa8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x326aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326aac: 0xc103440  jal         func_40D100
    ctx->pc = 0x326AACu;
    SET_GPR_U32(ctx, 31, 0x326AB4u);
    ctx->pc = 0x326AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AACu;
    // 0x326ab0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x326AACu, 0x326AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AB4u;
label_326ab4:
    // 0x326ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x326AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AB8u;
        // 0x326abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326AC0u;
}
