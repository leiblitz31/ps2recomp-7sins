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

// Function: sub_00283470
// Address: 0x283470 - 0x2834b0
void sub_00283470_0x283470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283470_0x283470");
#endif

    switch (ctx->pc) {
        case 0x283488u: goto label_283488;
        case 0x283498u: goto label_283498;
        default: break;
    }

    ctx->pc = 0x283470u;

    // 0x283470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283478: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x283478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28347c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283480: 0xc0a0414  jal         func_281050
    ctx->pc = 0x283480u;
    SET_GPR_U32(ctx, 31, 0x283488u);
    ctx->pc = 0x281050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281050u, 0x283480u, 0x283488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283488u;
label_283488:
    // 0x283488: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x283488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28348c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283490: 0xc0a040c  jal         func_281030
    ctx->pc = 0x283490u;
    SET_GPR_U32(ctx, 31, 0x283498u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x283490u, 0x283498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283498u;
label_283498:
    // 0x283498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28349c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2834a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2834A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2834A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2834A8u;
    // 0x2834a8: 0x0  nop
    ctx->pc = 0x2834a8u;
    // NOP
    // 0x2834ac: 0x0  nop
    ctx->pc = 0x2834acu;
    // NOP
    ctx->pc = 0x2834b0u;
}
