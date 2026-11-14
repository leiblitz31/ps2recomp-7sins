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

// Function: sub_00481D10
// Address: 0x481d10 - 0x481d50
void sub_00481D10_0x481d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481D10_0x481d10");
#endif

    switch (ctx->pc) {
        case 0x481d34u: goto label_481d34;
        default: break;
    }

    ctx->pc = 0x481d10u;

    // 0x481d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481d1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x481d20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481d24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x481d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x481d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481d2c: 0xc120754  jal         func_481D50
    ctx->pc = 0x481D2Cu;
    SET_GPR_U32(ctx, 31, 0x481D34u);
    ctx->pc = 0x481D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481D50u, 0x481D2Cu, 0x481D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481D34u;
label_481d34:
    // 0x481d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481d38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x481D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481D44u;
    // 0x481d44: 0x0  nop
    ctx->pc = 0x481d44u;
    // NOP
    // 0x481d48: 0x0  nop
    ctx->pc = 0x481d48u;
    // NOP
    // 0x481d4c: 0x0  nop
    ctx->pc = 0x481d4cu;
    // NOP
    ctx->pc = 0x481d50u;
}
