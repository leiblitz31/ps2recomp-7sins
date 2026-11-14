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

// Function: sub_002E54E0
// Address: 0x2e54e0 - 0x2e5510
void sub_002E54E0_0x2e54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E54E0_0x2e54e0");
#endif

    switch (ctx->pc) {
        case 0x2e54fcu: goto label_2e54fc;
        default: break;
    }

    ctx->pc = 0x2e54e0u;

    // 0x2e54e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e54e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e54e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e54e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e54ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e54f0: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e54f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e54f4: 0xc044598  jal         func_111660
    ctx->pc = 0x2E54F4u;
    SET_GPR_U32(ctx, 31, 0x2E54FCu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2E54F4u, 0x2E54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54FCu;
label_2e54fc:
    // 0x2e54fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e54fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5500: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5504: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E550Cu;
    // 0x2e550c: 0x0  nop
    ctx->pc = 0x2e550cu;
    // NOP
    ctx->pc = 0x2e5510u;
}
