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

// Function: sub_0018E6F0
// Address: 0x18e6f0 - 0x18e730
void sub_0018E6F0_0x18e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E6F0_0x18e6f0");
#endif

    switch (ctx->pc) {
        case 0x18e720u: goto label_18e720;
        default: break;
    }

    ctx->pc = 0x18e6f0u;

    // 0x18e6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e6f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18e6fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18e700: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x18e700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x18e704: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e708: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e70c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x18e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e710: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18e714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e718: 0xc0639cc  jal         func_18E730
    ctx->pc = 0x18E718u;
    SET_GPR_U32(ctx, 31, 0x18E720u);
    ctx->pc = 0x18E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E730u, 0x18E718u, 0x18E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E720u;
label_18e720:
    // 0x18e720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e724: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18e724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18e728: 0x3e00008  jr          $ra
    ctx->pc = 0x18E728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E730u;
}
