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

// Function: sub_003DC5B0
// Address: 0x3dc5b0 - 0x3dc5d0
void sub_003DC5B0_0x3dc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC5B0_0x3dc5b0");
#endif

    switch (ctx->pc) {
        case 0x3dc5c4u: goto label_3dc5c4;
        default: break;
    }

    ctx->pc = 0x3dc5b0u;

    // 0x3dc5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc5b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3dc5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc5bc: 0xc0ba8b0  jal         func_2EA2C0
    ctx->pc = 0x3DC5BCu;
    SET_GPR_U32(ctx, 31, 0x3DC5C4u);
    ctx->pc = 0x3DC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC5BCu;
    // 0x3dc5c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA2C0u, 0x3DC5BCu, 0x3DC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC5C4u;
label_3dc5c4:
    // 0x3dc5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5C8u;
        // 0x3dc5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC5D0u;
}
