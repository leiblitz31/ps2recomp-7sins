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

// Function: sub_001E86E0
// Address: 0x1e86e0 - 0x1e8720
void sub_001E86E0_0x1e86e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E86E0_0x1e86e0");
#endif

    switch (ctx->pc) {
        case 0x1e8704u: goto label_1e8704;
        default: break;
    }

    ctx->pc = 0x1e86e0u;

    // 0x1e86e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e86e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e86e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e86e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e86e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e86ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e86f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e86f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86f8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1e86f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e86fc: 0xc058d20  jal         func_163480
    ctx->pc = 0x1E86FCu;
    SET_GPR_U32(ctx, 31, 0x1E8704u);
    ctx->pc = 0x163480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163480u, 0x1E86FCu, 0x1E8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8704u;
label_1e8704:
    // 0x1e8704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8708: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e8708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e870c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E870Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E870Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8714u;
    // 0x1e8714: 0x0  nop
    ctx->pc = 0x1e8714u;
    // NOP
    // 0x1e8718: 0x0  nop
    ctx->pc = 0x1e8718u;
    // NOP
    // 0x1e871c: 0x0  nop
    ctx->pc = 0x1e871cu;
    // NOP
    ctx->pc = 0x1e8720u;
}
