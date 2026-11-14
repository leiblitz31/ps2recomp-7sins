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

// Function: sub_00487510
// Address: 0x487510 - 0x487550
void sub_00487510_0x487510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487510_0x487510");
#endif

    switch (ctx->pc) {
        case 0x487534u: goto label_487534;
        default: break;
    }

    ctx->pc = 0x487510u;

    // 0x487510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x487510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x487514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487518: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x487518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48751c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x487520: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x487520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x487524: 0x24a57550  addiu       $a1, $a1, 0x7550
    ctx->pc = 0x487524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30032));
    // 0x487528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x487528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48752c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x48752Cu;
    SET_GPR_U32(ctx, 31, 0x487534u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x48752Cu, 0x487534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487534u;
label_487534:
    // 0x487534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487538: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x487538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48753c: 0x3e00008  jr          $ra
    ctx->pc = 0x48753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487544u;
    // 0x487544: 0x0  nop
    ctx->pc = 0x487544u;
    // NOP
    // 0x487548: 0x0  nop
    ctx->pc = 0x487548u;
    // NOP
    // 0x48754c: 0x0  nop
    ctx->pc = 0x48754cu;
    // NOP
    ctx->pc = 0x487550u;
}
