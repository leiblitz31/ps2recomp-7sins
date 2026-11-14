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

// Function: sub_0015BD50
// Address: 0x15bd50 - 0x15bd90
void sub_0015BD50_0x15bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD50_0x15bd50");
#endif

    switch (ctx->pc) {
        case 0x15bd74u: goto label_15bd74;
        default: break;
    }

    ctx->pc = 0x15bd50u;

    // 0x15bd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bd58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bd5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bd60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15bd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd6c: 0xc056f64  jal         func_15BD90
    ctx->pc = 0x15BD6Cu;
    SET_GPR_U32(ctx, 31, 0x15BD74u);
    ctx->pc = 0x15BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BD90u, 0x15BD6Cu, 0x15BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD74u;
label_15bd74:
    // 0x15bd74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bd78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BD84u;
    // 0x15bd84: 0x0  nop
    ctx->pc = 0x15bd84u;
    // NOP
    // 0x15bd88: 0x0  nop
    ctx->pc = 0x15bd88u;
    // NOP
    // 0x15bd8c: 0x0  nop
    ctx->pc = 0x15bd8cu;
    // NOP
    ctx->pc = 0x15bd90u;
}
