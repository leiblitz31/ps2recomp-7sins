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

// Function: sub_001822B0
// Address: 0x1822b0 - 0x1822f0
void sub_001822B0_0x1822b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001822B0_0x1822b0");
#endif

    switch (ctx->pc) {
        case 0x1822d4u: goto label_1822d4;
        default: break;
    }

    ctx->pc = 0x1822b0u;

    // 0x1822b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1822b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1822b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1822b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1822b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1822b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1822bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1822bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1822c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1822c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1822c8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1822c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1822cc: 0xc0608a4  jal         func_182290
    ctx->pc = 0x1822CCu;
    SET_GPR_U32(ctx, 31, 0x1822D4u);
    ctx->pc = 0x182290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182290u, 0x1822CCu, 0x1822D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822D4u;
label_1822d4:
    // 0x1822d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1822d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1822d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1822d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1822dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1822DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1822DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1822E4u;
    // 0x1822e4: 0x0  nop
    ctx->pc = 0x1822e4u;
    // NOP
    // 0x1822e8: 0x0  nop
    ctx->pc = 0x1822e8u;
    // NOP
    // 0x1822ec: 0x0  nop
    ctx->pc = 0x1822ecu;
    // NOP
    ctx->pc = 0x1822f0u;
}
