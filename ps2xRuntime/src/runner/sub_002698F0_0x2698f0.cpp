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

// Function: sub_002698F0
// Address: 0x2698f0 - 0x269930
void sub_002698F0_0x2698f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002698F0_0x2698f0");
#endif

    switch (ctx->pc) {
        case 0x269920u: goto label_269920;
        default: break;
    }

    ctx->pc = 0x2698f0u;

    // 0x2698f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2698f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2698f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2698f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2698f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2698f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2698fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2698fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x269900: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x269900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x269904: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x269904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269908: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x269908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26990c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x26990cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269910: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x269910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x269914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x269914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269918: 0xc09a64c  jal         func_269930
    ctx->pc = 0x269918u;
    SET_GPR_U32(ctx, 31, 0x269920u);
    ctx->pc = 0x269930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269930u, 0x269918u, 0x269920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269920u;
label_269920:
    // 0x269920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269924: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x269924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269928: 0x3e00008  jr          $ra
    ctx->pc = 0x269928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269930u;
}
