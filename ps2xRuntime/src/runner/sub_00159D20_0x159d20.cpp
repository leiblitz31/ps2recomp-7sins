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

// Function: sub_00159D20
// Address: 0x159d20 - 0x159d60
void sub_00159D20_0x159d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159D20_0x159d20");
#endif

    switch (ctx->pc) {
        case 0x159d50u: goto label_159d50;
        default: break;
    }

    ctx->pc = 0x159d20u;

    // 0x159d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x159d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x159d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x159d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x159d30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x159d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x159d34: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x159d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x159d38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159d3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x159d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159d40: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x159d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159d44: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x159d44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159d48: 0xc056d00  jal         func_15B400
    ctx->pc = 0x159D48u;
    SET_GPR_U32(ctx, 31, 0x159D50u);
    ctx->pc = 0x15B400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B400u, 0x159D48u, 0x159D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D50u;
label_159d50:
    // 0x159d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d54: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159d58: 0x3e00008  jr          $ra
    ctx->pc = 0x159D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D60u;
}
