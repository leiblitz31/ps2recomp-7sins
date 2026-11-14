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

// Function: sub_00180F30
// Address: 0x180f30 - 0x180f80
void sub_00180F30_0x180f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F30_0x180f30");
#endif

    switch (ctx->pc) {
        case 0x180f50u: goto label_180f50;
        case 0x180f68u: goto label_180f68;
        default: break;
    }

    ctx->pc = 0x180f30u;

    // 0x180f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x180f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x180f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180f38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x180f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x180f3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x180f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x180f40: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x180f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x180f44: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x180f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x180f48: 0xc060408  jal         func_181020
    ctx->pc = 0x180F48u;
    SET_GPR_U32(ctx, 31, 0x180F50u);
    ctx->pc = 0x181020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181020u, 0x180F48u, 0x180F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F50u;
label_180f50:
    // 0x180f50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180f54: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x180f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180f58: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x180f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180f5c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x180f60: 0xc0603e0  jal         func_180F80
    ctx->pc = 0x180F60u;
    SET_GPR_U32(ctx, 31, 0x180F68u);
    ctx->pc = 0x180F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F80u, 0x180F60u, 0x180F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F68u;
label_180f68:
    // 0x180f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f6c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x180f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x180f70: 0x3e00008  jr          $ra
    ctx->pc = 0x180F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F78u;
    // 0x180f78: 0x0  nop
    ctx->pc = 0x180f78u;
    // NOP
    // 0x180f7c: 0x0  nop
    ctx->pc = 0x180f7cu;
    // NOP
    ctx->pc = 0x180f80u;
}
