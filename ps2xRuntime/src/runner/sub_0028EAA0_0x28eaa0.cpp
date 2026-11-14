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

// Function: sub_0028EAA0
// Address: 0x28eaa0 - 0x28eae0
void sub_0028EAA0_0x28eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EAA0_0x28eaa0");
#endif

    switch (ctx->pc) {
        case 0x28eab8u: goto label_28eab8;
        case 0x28eac8u: goto label_28eac8;
        default: break;
    }

    ctx->pc = 0x28eaa0u;

    // 0x28eaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28eaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28eaa8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28eaac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eab0: 0xc0a3ab8  jal         func_28EAE0
    ctx->pc = 0x28EAB0u;
    SET_GPR_U32(ctx, 31, 0x28EAB8u);
    ctx->pc = 0x28EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAE0u, 0x28EAB0u, 0x28EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAB8u;
label_28eab8:
    // 0x28eab8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28eabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28eabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eac0: 0xc0a3b40  jal         func_28ED00
    ctx->pc = 0x28EAC0u;
    SET_GPR_U32(ctx, 31, 0x28EAC8u);
    ctx->pc = 0x28ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED00u, 0x28EAC0u, 0x28EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAC8u;
label_28eac8:
    // 0x28eac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eacc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28eaccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ead0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EAD8u;
    // 0x28ead8: 0x0  nop
    ctx->pc = 0x28ead8u;
    // NOP
    // 0x28eadc: 0x0  nop
    ctx->pc = 0x28eadcu;
    // NOP
    ctx->pc = 0x28eae0u;
}
