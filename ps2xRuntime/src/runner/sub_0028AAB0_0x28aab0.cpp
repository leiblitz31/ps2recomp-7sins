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

// Function: sub_0028AAB0
// Address: 0x28aab0 - 0x28aaf0
void sub_0028AAB0_0x28aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AAB0_0x28aab0");
#endif

    switch (ctx->pc) {
        case 0x28aad0u: goto label_28aad0;
        default: break;
    }

    ctx->pc = 0x28aab0u;

    // 0x28aab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28aab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aab8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28aabc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28aac0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aac4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aac8: 0xc0a2abc  jal         func_28AAF0
    ctx->pc = 0x28AAC8u;
    SET_GPR_U32(ctx, 31, 0x28AAD0u);
    ctx->pc = 0x28AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAF0u, 0x28AAC8u, 0x28AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAD0u;
label_28aad0:
    // 0x28aad0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28aad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28aadc: 0x3e00008  jr          $ra
    ctx->pc = 0x28AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AAE4u;
    // 0x28aae4: 0x0  nop
    ctx->pc = 0x28aae4u;
    // NOP
    // 0x28aae8: 0x0  nop
    ctx->pc = 0x28aae8u;
    // NOP
    // 0x28aaec: 0x0  nop
    ctx->pc = 0x28aaecu;
    // NOP
    ctx->pc = 0x28aaf0u;
}
