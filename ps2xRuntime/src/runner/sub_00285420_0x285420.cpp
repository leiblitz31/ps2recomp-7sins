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

// Function: sub_00285420
// Address: 0x285420 - 0x2854a0
void sub_00285420_0x285420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285420_0x285420");
#endif

    switch (ctx->pc) {
        case 0x285440u: goto label_285440;
        case 0x285450u: goto label_285450;
        case 0x285468u: goto label_285468;
        case 0x285480u: goto label_285480;
        default: break;
    }

    ctx->pc = 0x285420u;

    // 0x285420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28542c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x285430: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285434: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x285434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285438: 0xc0a1528  jal         func_2854A0
    ctx->pc = 0x285438u;
    SET_GPR_U32(ctx, 31, 0x285440u);
    ctx->pc = 0x2854A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2854A0u, 0x285438u, 0x285440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285440u;
label_285440:
    // 0x285440: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x285440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x285444: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285448: 0xc0a13d4  jal         func_284F50
    ctx->pc = 0x285448u;
    SET_GPR_U32(ctx, 31, 0x285450u);
    ctx->pc = 0x284F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F50u, 0x285448u, 0x285450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285450u;
label_285450:
    // 0x285450: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x285450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x285454: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285458: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x285458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28545c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285460: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x285460u;
    SET_GPR_U32(ctx, 31, 0x285468u);
    ctx->pc = 0x284F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F30u, 0x285460u, 0x285468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285468u;
label_285468:
    // 0x285468: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x285468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28546c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285470: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x285470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285474: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285478: 0xc0a13c4  jal         func_284F10
    ctx->pc = 0x285478u;
    SET_GPR_U32(ctx, 31, 0x285480u);
    ctx->pc = 0x284F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F10u, 0x285478u, 0x285480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285480u;
label_285480:
    // 0x285480: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x285480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x285484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28548c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28548cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285490: 0x3e00008  jr          $ra
    ctx->pc = 0x285490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285498u;
    // 0x285498: 0x0  nop
    ctx->pc = 0x285498u;
    // NOP
    // 0x28549c: 0x0  nop
    ctx->pc = 0x28549cu;
    // NOP
    ctx->pc = 0x2854a0u;
}
