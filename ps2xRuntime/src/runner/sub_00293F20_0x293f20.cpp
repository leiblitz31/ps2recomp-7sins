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

// Function: sub_00293F20
// Address: 0x293f20 - 0x293f60
void sub_00293F20_0x293f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293F20_0x293f20");
#endif

    switch (ctx->pc) {
        case 0x293f50u: goto label_293f50;
        default: break;
    }

    ctx->pc = 0x293f20u;

    // 0x293f20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x293f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x293f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293f28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x293f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x293f2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x293f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x293f30: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x293f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x293f34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x293f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293f38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x293f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293f3c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x293f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293f40: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x293f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x293f44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x293f44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f48: 0xc0a4fd8  jal         func_293F60
    ctx->pc = 0x293F48u;
    SET_GPR_U32(ctx, 31, 0x293F50u);
    ctx->pc = 0x293F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293F60u, 0x293F48u, 0x293F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F50u;
label_293f50:
    // 0x293f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293f54: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x293f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293f58: 0x3e00008  jr          $ra
    ctx->pc = 0x293F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293F60u;
}
