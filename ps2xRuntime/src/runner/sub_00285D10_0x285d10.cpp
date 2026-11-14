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

// Function: sub_00285D10
// Address: 0x285d10 - 0x285d50
void sub_00285D10_0x285d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285D10_0x285d10");
#endif

    switch (ctx->pc) {
        case 0x285d34u: goto label_285d34;
        default: break;
    }

    ctx->pc = 0x285d10u;

    // 0x285d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x285d1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x285d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285d20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285d24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285d28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285d2c: 0xc0a1754  jal         func_285D50
    ctx->pc = 0x285D2Cu;
    SET_GPR_U32(ctx, 31, 0x285D34u);
    ctx->pc = 0x285D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D50u, 0x285D2Cu, 0x285D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285D34u;
label_285d34:
    // 0x285d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285d38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x285D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285D44u;
    // 0x285d44: 0x0  nop
    ctx->pc = 0x285d44u;
    // NOP
    // 0x285d48: 0x0  nop
    ctx->pc = 0x285d48u;
    // NOP
    // 0x285d4c: 0x0  nop
    ctx->pc = 0x285d4cu;
    // NOP
    ctx->pc = 0x285d50u;
}
