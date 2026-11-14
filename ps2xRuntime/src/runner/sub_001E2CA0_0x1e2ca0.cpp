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

// Function: sub_001E2CA0
// Address: 0x1e2ca0 - 0x1e2cf0
void sub_001E2CA0_0x1e2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2CA0_0x1e2ca0");
#endif

    switch (ctx->pc) {
        case 0x1e2cd4u: goto label_1e2cd4;
        default: break;
    }

    ctx->pc = 0x1e2ca0u;

    // 0x1e2ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e2cac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2cb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2cb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2cb8: 0x2443001f  addiu       $v1, $v0, 0x1F
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1e2cbc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1e2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e2cc0: 0x32942  srl         $a1, $v1, 5
    ctx->pc = 0x1e2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1e2cc4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e2cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e2cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ccc: 0xc04484c  jal         func_112130
    ctx->pc = 0x1E2CCCu;
    SET_GPR_U32(ctx, 31, 0x1E2CD4u);
    ctx->pc = 0x112130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112130u, 0x1E2CCCu, 0x1E2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2CD4u;
label_1e2cd4:
    // 0x1e2cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2CE4u;
    // 0x1e2ce4: 0x0  nop
    ctx->pc = 0x1e2ce4u;
    // NOP
    // 0x1e2ce8: 0x0  nop
    ctx->pc = 0x1e2ce8u;
    // NOP
    // 0x1e2cec: 0x0  nop
    ctx->pc = 0x1e2cecu;
    // NOP
    ctx->pc = 0x1e2cf0u;
}
