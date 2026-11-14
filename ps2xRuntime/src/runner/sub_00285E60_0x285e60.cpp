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

// Function: sub_00285E60
// Address: 0x285e60 - 0x285ea0
void sub_00285E60_0x285e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285E60_0x285e60");
#endif

    switch (ctx->pc) {
        case 0x285e7cu: goto label_285e7c;
        case 0x285e8cu: goto label_285e8c;
        default: break;
    }

    ctx->pc = 0x285e60u;

    // 0x285e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x285e6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x285e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285e70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285e74: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x285E74u;
    SET_GPR_U32(ctx, 31, 0x285E7Cu);
    ctx->pc = 0x284F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F30u, 0x285E74u, 0x285E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E7Cu;
label_285e7c:
    // 0x285e7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285e80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285e84: 0xc0a1754  jal         func_285D50
    ctx->pc = 0x285E84u;
    SET_GPR_U32(ctx, 31, 0x285E8Cu);
    ctx->pc = 0x285D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D50u, 0x285E84u, 0x285E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E8Cu;
label_285e8c:
    // 0x285e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285e90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285e94: 0x3e00008  jr          $ra
    ctx->pc = 0x285E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285E9Cu;
    // 0x285e9c: 0x0  nop
    ctx->pc = 0x285e9cu;
    // NOP
    ctx->pc = 0x285ea0u;
}
