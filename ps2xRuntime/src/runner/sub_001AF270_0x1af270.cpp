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

// Function: sub_001AF270
// Address: 0x1af270 - 0x1af2b0
void sub_001AF270_0x1af270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF270_0x1af270");
#endif

    switch (ctx->pc) {
        case 0x1af288u: goto label_1af288;
        case 0x1af298u: goto label_1af298;
        default: break;
    }

    ctx->pc = 0x1af270u;

    // 0x1af270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af278: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1af278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1af27c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1af27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1af280: 0xc06bcec  jal         func_1AF3B0
    ctx->pc = 0x1AF280u;
    SET_GPR_U32(ctx, 31, 0x1AF288u);
    ctx->pc = 0x1AF3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3B0u, 0x1AF280u, 0x1AF288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF288u;
label_1af288:
    // 0x1af288: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1af288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af28c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1af28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af290: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x1AF290u;
    SET_GPR_U32(ctx, 31, 0x1AF298u);
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x1AF290u, 0x1AF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF298u;
label_1af298:
    // 0x1af298: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1af298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af2a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF2ACu;
    // 0x1af2ac: 0x0  nop
    ctx->pc = 0x1af2acu;
    // NOP
    ctx->pc = 0x1af2b0u;
}
