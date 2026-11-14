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

// Function: sub_00418FD8
// Address: 0x418fd8 - 0x419018
void sub_00418FD8_0x418fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418FD8_0x418fd8");
#endif

    switch (ctx->pc) {
        case 0x419008u: goto label_419008;
        default: break;
    }

    ctx->pc = 0x418fd8u;

    // 0x418fd8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x418fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fdc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x418fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fe0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x418fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fe4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x418fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x418fe8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x418fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fec: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x418fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ff0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x418ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x418ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x418ff8: 0x2444c8b0  addiu       $a0, $v0, -0x3750
    ctx->pc = 0x418ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953136));
    // 0x418ffc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x418ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419000: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x419000u;
    SET_GPR_U32(ctx, 31, 0x419008u);
    ctx->pc = 0x419004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419000u;
    // 0x419004: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x419000u, 0x419008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419008u;
label_419008:
    // 0x419008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41900c: 0x3e00008  jr          $ra
    ctx->pc = 0x41900Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41900Cu;
        // 0x419010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41900Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419014u;
    // 0x419014: 0x0  nop
    ctx->pc = 0x419014u;
    // NOP
    ctx->pc = 0x419018u;
}
