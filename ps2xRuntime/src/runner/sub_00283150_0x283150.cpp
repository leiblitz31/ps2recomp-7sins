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

// Function: sub_00283150
// Address: 0x283150 - 0x283190
void sub_00283150_0x283150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283150_0x283150");
#endif

    switch (ctx->pc) {
        case 0x283168u: goto label_283168;
        case 0x283178u: goto label_283178;
        default: break;
    }

    ctx->pc = 0x283150u;

    // 0x283150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283158: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x283158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28315c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28315cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283160: 0xc0a0be4  jal         func_282F90
    ctx->pc = 0x283160u;
    SET_GPR_U32(ctx, 31, 0x283168u);
    ctx->pc = 0x282F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282F90u, 0x283160u, 0x283168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283168u;
label_283168:
    // 0x283168: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x283168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28316c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28316cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283170: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x283170u;
    SET_GPR_U32(ctx, 31, 0x283178u);
    ctx->pc = 0x283190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283190u, 0x283170u, 0x283178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283178u;
label_283178:
    // 0x283178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28317c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28317cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x283180: 0x3e00008  jr          $ra
    ctx->pc = 0x283180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283188u;
    // 0x283188: 0x0  nop
    ctx->pc = 0x283188u;
    // NOP
    // 0x28318c: 0x0  nop
    ctx->pc = 0x28318cu;
    // NOP
    ctx->pc = 0x283190u;
}
