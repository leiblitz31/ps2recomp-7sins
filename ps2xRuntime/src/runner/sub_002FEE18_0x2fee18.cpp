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

// Function: sub_002FEE18
// Address: 0x2fee18 - 0x2fee40
void sub_002FEE18_0x2fee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEE18_0x2fee18");
#endif

    switch (ctx->pc) {
        case 0x2fee28u: goto label_2fee28;
        default: break;
    }

    ctx->pc = 0x2fee18u;

    // 0x2fee18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fee1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fee20: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x2FEE20u;
    SET_GPR_U32(ctx, 31, 0x2FEE28u);
    ctx->pc = 0x2FEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE20u;
    // 0x2fee24: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x2FEE20u, 0x2FEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE28u;
label_2fee28:
    // 0x2fee28: 0xf  sync
    ctx->pc = 0x2fee28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fee2c: 0x42000038  ei
    ctx->pc = 0x2fee2cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2fee30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fee34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fee34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE38u;
        // 0x2fee3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEE40u;
}
