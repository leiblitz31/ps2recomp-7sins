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

// Function: sub_0038A3B0
// Address: 0x38a3b0 - 0x38a3f8
void sub_0038A3B0_0x38a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A3B0_0x38a3b0");
#endif

    switch (ctx->pc) {
        case 0x38a3e8u: goto label_38a3e8;
        default: break;
    }

    ctx->pc = 0x38a3b0u;

    // 0x38a3b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38a3b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a3b8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38a3b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3bc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x38a3bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3c0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x38a3c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3c4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x38a3c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3c8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38a3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a3d0: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x38a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    // 0x38a3d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38a3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38a3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3dc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x38a3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a3e0: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x38A3E0u;
    SET_GPR_U32(ctx, 31, 0x38A3E8u);
    ctx->pc = 0x38A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A3E0u;
    // 0x38a3e4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x38A3E0u, 0x38A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A3E8u;
label_38a3e8:
    // 0x38a3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x38A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3ECu;
        // 0x38a3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A3F4u;
    // 0x38a3f4: 0x0  nop
    ctx->pc = 0x38a3f4u;
    // NOP
    ctx->pc = 0x38a3f8u;
}
