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

// Function: sub_001A0F20
// Address: 0x1a0f20 - 0x1a0f60
void sub_001A0F20_0x1a0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0F20_0x1a0f20");
#endif

    switch (ctx->pc) {
        case 0x1a0f48u: goto label_1a0f48;
        default: break;
    }

    ctx->pc = 0x1a0f20u;

    // 0x1a0f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a0f2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a0f30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1a0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1a0f34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a0f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0f38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a0f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0f3c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1a0f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0f40: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A0F40u;
    SET_GPR_U32(ctx, 31, 0x1A0F48u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A0F40u, 0x1A0F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F48u;
label_1a0f48:
    // 0x1a0f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a0f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a0f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0F58u;
    // 0x1a0f58: 0x0  nop
    ctx->pc = 0x1a0f58u;
    // NOP
    // 0x1a0f5c: 0x0  nop
    ctx->pc = 0x1a0f5cu;
    // NOP
    ctx->pc = 0x1a0f60u;
}
