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

// Function: sub_0022E600
// Address: 0x22e600 - 0x22e640
void sub_0022E600_0x22e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E600_0x22e600");
#endif

    switch (ctx->pc) {
        case 0x22e630u: goto label_22e630;
        default: break;
    }

    ctx->pc = 0x22e600u;

    // 0x22e600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22e604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e608: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22e608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22e60c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22e610: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22e610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22e614: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22e614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e618: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22e618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e61c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22e61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e620: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x22e620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22e624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e628: 0xc08b990  jal         func_22E640
    ctx->pc = 0x22E628u;
    SET_GPR_U32(ctx, 31, 0x22E630u);
    ctx->pc = 0x22E640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E640u, 0x22E628u, 0x22E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E630u;
label_22e630:
    // 0x22e630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e634: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22e634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22e638: 0x3e00008  jr          $ra
    ctx->pc = 0x22E638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E640u;
}
