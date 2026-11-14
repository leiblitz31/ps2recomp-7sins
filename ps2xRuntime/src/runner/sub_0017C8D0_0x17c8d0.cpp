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

// Function: sub_0017C8D0
// Address: 0x17c8d0 - 0x17c910
void sub_0017C8D0_0x17c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C8D0_0x17c8d0");
#endif

    switch (ctx->pc) {
        case 0x17c900u: goto label_17c900;
        default: break;
    }

    ctx->pc = 0x17c8d0u;

    // 0x17c8d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17c8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17c8dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17c8e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17c8e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c8e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c8ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x17c8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c8f0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17c8f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17c8f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8f8: 0xc05f244  jal         func_17C910
    ctx->pc = 0x17C8F8u;
    SET_GPR_U32(ctx, 31, 0x17C900u);
    ctx->pc = 0x17C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C910u, 0x17C8F8u, 0x17C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C900u;
label_17c900:
    // 0x17c900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c904: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17c904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c908: 0x3e00008  jr          $ra
    ctx->pc = 0x17C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C910u;
}
