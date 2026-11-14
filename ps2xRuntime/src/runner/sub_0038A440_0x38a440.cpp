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

// Function: sub_0038A440
// Address: 0x38a440 - 0x38a478
void sub_0038A440_0x38a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A440_0x38a440");
#endif

    switch (ctx->pc) {
        case 0x38a46cu: goto label_38a46c;
        default: break;
    }

    ctx->pc = 0x38a440u;

    // 0x38a440: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38a440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a448: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x38a448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a44c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38a44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a450: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a454: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38a458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a45c: 0x2444ada0  addiu       $a0, $v0, -0x5260
    ctx->pc = 0x38a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    // 0x38a460: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38a460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a464: 0xc104a46  jal         func_412918
    ctx->pc = 0x38A464u;
    SET_GPR_U32(ctx, 31, 0x38A46Cu);
    ctx->pc = 0x38A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A464u;
    // 0x38a468: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x38A464u, 0x38A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A46Cu;
label_38a46c:
    // 0x38a46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a470: 0x3e00008  jr          $ra
    ctx->pc = 0x38A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A470u;
        // 0x38a474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A478u;
}
