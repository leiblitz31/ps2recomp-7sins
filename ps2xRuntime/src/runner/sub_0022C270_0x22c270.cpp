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

// Function: sub_0022C270
// Address: 0x22c270 - 0x22c2b0
void sub_0022C270_0x22c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C270_0x22c270");
#endif

    switch (ctx->pc) {
        case 0x22c294u: goto label_22c294;
        default: break;
    }

    ctx->pc = 0x22c270u;

    // 0x22c270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c27c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c280: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c284: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c28c: 0xc08b0ac  jal         func_22C2B0
    ctx->pc = 0x22C28Cu;
    SET_GPR_U32(ctx, 31, 0x22C294u);
    ctx->pc = 0x22C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C2B0u, 0x22C28Cu, 0x22C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C294u;
label_22c294:
    // 0x22c294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c29c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C2A4u;
    // 0x22c2a4: 0x0  nop
    ctx->pc = 0x22c2a4u;
    // NOP
    // 0x22c2a8: 0x0  nop
    ctx->pc = 0x22c2a8u;
    // NOP
    // 0x22c2ac: 0x0  nop
    ctx->pc = 0x22c2acu;
    // NOP
    ctx->pc = 0x22c2b0u;
}
