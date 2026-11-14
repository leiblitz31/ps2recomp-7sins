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

// Function: sub_001C2100
// Address: 0x1c2100 - 0x1c2140
void sub_001C2100_0x1c2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2100_0x1c2100");
#endif

    switch (ctx->pc) {
        case 0x1c2124u: goto label_1c2124;
        default: break;
    }

    ctx->pc = 0x1c2100u;

    // 0x1c2100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c2108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c210c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c2110: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c2110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2114: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c2114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c211c: 0xc070850  jal         func_1C2140
    ctx->pc = 0x1C211Cu;
    SET_GPR_U32(ctx, 31, 0x1C2124u);
    ctx->pc = 0x1C2140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2140u, 0x1C211Cu, 0x1C2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2124u;
label_1c2124:
    // 0x1c2124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c212c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C212Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2134u;
    // 0x1c2134: 0x0  nop
    ctx->pc = 0x1c2134u;
    // NOP
    // 0x1c2138: 0x0  nop
    ctx->pc = 0x1c2138u;
    // NOP
    // 0x1c213c: 0x0  nop
    ctx->pc = 0x1c213cu;
    // NOP
    ctx->pc = 0x1c2140u;
}
