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

// Function: sub_0048C650
// Address: 0x48c650 - 0x48c690
void sub_0048C650_0x48c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C650_0x48c650");
#endif

    switch (ctx->pc) {
        case 0x48c680u: goto label_48c680;
        default: break;
    }

    ctx->pc = 0x48c650u;

    // 0x48c650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48c654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c658: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48c65c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48c660: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x48c660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x48c664: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c668: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c66c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x48c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c670: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x48c670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48c674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48c674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c678: 0xc1231a4  jal         func_48C690
    ctx->pc = 0x48C678u;
    SET_GPR_U32(ctx, 31, 0x48C680u);
    ctx->pc = 0x48C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C690u, 0x48C678u, 0x48C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C680u;
label_48c680:
    // 0x48c680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c684: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x48c684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48c688: 0x3e00008  jr          $ra
    ctx->pc = 0x48C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C690u;
}
