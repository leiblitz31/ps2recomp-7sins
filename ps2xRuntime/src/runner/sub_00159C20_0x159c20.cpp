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

// Function: sub_00159C20
// Address: 0x159c20 - 0x159c60
void sub_00159C20_0x159c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159C20_0x159c20");
#endif

    switch (ctx->pc) {
        case 0x159c44u: goto label_159c44;
        default: break;
    }

    ctx->pc = 0x159c20u;

    // 0x159c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159c28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x159c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x159c2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x159c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x159c30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159c34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x159c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159c38: 0x27868dd4  addiu       $a2, $gp, -0x722C
    ctx->pc = 0x159c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938068));
    // 0x159c3c: 0xc056718  jal         func_159C60
    ctx->pc = 0x159C3Cu;
    SET_GPR_U32(ctx, 31, 0x159C44u);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x159C3Cu, 0x159C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C44u;
label_159c44:
    // 0x159c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159c48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x159c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x159c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x159C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159C54u;
    // 0x159c54: 0x0  nop
    ctx->pc = 0x159c54u;
    // NOP
    // 0x159c58: 0x0  nop
    ctx->pc = 0x159c58u;
    // NOP
    // 0x159c5c: 0x0  nop
    ctx->pc = 0x159c5cu;
    // NOP
    ctx->pc = 0x159c60u;
}
