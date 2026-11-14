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

// Function: sub_004152A0
// Address: 0x4152a0 - 0x415300
void sub_004152A0_0x4152a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004152A0_0x4152a0");
#endif

    switch (ctx->pc) {
        case 0x4152ccu: goto label_4152cc;
        case 0x4152f4u: goto label_4152f4;
        default: break;
    }

    ctx->pc = 0x4152a0u;

    // 0x4152a0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4152a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4152a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4152a8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4152a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4152acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4152b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4152b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4152b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4152b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4152bc: 0x2444c898  addiu       $a0, $v0, -0x3768
    ctx->pc = 0x4152bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953112));
    // 0x4152c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4152c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152c4: 0xc104a46  jal         func_412918
    ctx->pc = 0x4152C4u;
    SET_GPR_U32(ctx, 31, 0x4152CCu);
    ctx->pc = 0x4152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4152C4u;
    // 0x4152c8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x4152C4u, 0x4152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4152CCu;
label_4152cc:
    // 0x4152cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4152ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4152d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4152D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4152D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4152D0u;
        // 0x4152d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4152D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4152D8u;
    // 0x4152d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4152d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4152dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4152e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4152e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4152e4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4152e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4152e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4152e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4152ec: 0xc104a56  jal         func_412958
    ctx->pc = 0x4152ECu;
    SET_GPR_U32(ctx, 31, 0x4152F4u);
    ctx->pc = 0x4152F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4152ECu;
    // 0x4152f0: 0x2444c898  addiu       $a0, $v0, -0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x4152ECu, 0x4152F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4152F4u;
label_4152f4:
    // 0x4152f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4152f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4152f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4152F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4152FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4152F8u;
        // 0x4152fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4152F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415300u;
}
