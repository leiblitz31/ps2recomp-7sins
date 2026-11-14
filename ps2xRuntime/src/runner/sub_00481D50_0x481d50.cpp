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

// Function: sub_00481D50
// Address: 0x481d50 - 0x481d90
void sub_00481D50_0x481d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481D50_0x481d50");
#endif

    switch (ctx->pc) {
        case 0x481d58u: goto label_481d58;
        case 0x481d78u: goto label_481d78;
        default: break;
    }

    ctx->pc = 0x481d50u;

    // 0x481d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x481d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x481d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_481d58:
    // 0x481d58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x481d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x481d5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x481d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x481d60: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x481d60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x481d64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x481d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481d68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x481d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481d6c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x481d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x481d70: 0xc120764  jal         func_481D90
    ctx->pc = 0x481D70u;
    SET_GPR_U32(ctx, 31, 0x481D78u);
    ctx->pc = 0x481D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481D90u, 0x481D70u, 0x481D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481D78u;
label_481d78:
    // 0x481d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481d7c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x481d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x481d80: 0x3e00008  jr          $ra
    ctx->pc = 0x481D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481D88u;
    // 0x481d88: 0x0  nop
    ctx->pc = 0x481d88u;
    // NOP
    // 0x481d8c: 0x0  nop
    ctx->pc = 0x481d8cu;
    // NOP
    ctx->pc = 0x481d90u;
}
