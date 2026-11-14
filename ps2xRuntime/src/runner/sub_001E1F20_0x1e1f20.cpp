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

// Function: sub_001E1F20
// Address: 0x1e1f20 - 0x1e1f60
void sub_001E1F20_0x1e1f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1F20_0x1e1f20");
#endif

    switch (ctx->pc) {
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f48u: goto label_1e1f48;
        default: break;
    }

    ctx->pc = 0x1e1f20u;

    // 0x1e1f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1f28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1f2c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1e1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e1f30: 0xc078818  jal         func_1E2060
    ctx->pc = 0x1E1F30u;
    SET_GPR_U32(ctx, 31, 0x1E1F38u);
    ctx->pc = 0x1E2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2060u, 0x1E1F30u, 0x1E1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F38u;
label_1e1f38:
    // 0x1e1f38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1f3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1f40: 0xc0787d8  jal         func_1E1F60
    ctx->pc = 0x1E1F40u;
    SET_GPR_U32(ctx, 31, 0x1E1F48u);
    ctx->pc = 0x1E1F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1F60u, 0x1E1F40u, 0x1E1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1F48u;
label_1e1f48:
    // 0x1e1f48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1f50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e1f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1F5Cu;
    // 0x1e1f5c: 0x0  nop
    ctx->pc = 0x1e1f5cu;
    // NOP
    ctx->pc = 0x1e1f60u;
}
