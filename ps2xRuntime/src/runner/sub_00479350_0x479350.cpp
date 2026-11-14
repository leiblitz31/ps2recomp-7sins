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

// Function: sub_00479350
// Address: 0x479350 - 0x4793a0
void sub_00479350_0x479350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479350_0x479350");
#endif

    switch (ctx->pc) {
        case 0x479370u: goto label_479370;
        case 0x479388u: goto label_479388;
        default: break;
    }

    ctx->pc = 0x479350u;

    // 0x479350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x479350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x479354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479358: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x479358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47935c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x47935cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x479360: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x479360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x479364: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x479364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x479368: 0xc11e544  jal         func_479510
    ctx->pc = 0x479368u;
    SET_GPR_U32(ctx, 31, 0x479370u);
    ctx->pc = 0x479510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479510u, 0x479368u, 0x479370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479370u;
label_479370:
    // 0x479370: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x479370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479374: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x479374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479378: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x479378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47937c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x47937cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x479380: 0xc11e4e8  jal         func_4793A0
    ctx->pc = 0x479380u;
    SET_GPR_U32(ctx, 31, 0x479388u);
    ctx->pc = 0x4793A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4793A0u, 0x479380u, 0x479388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479388u;
label_479388:
    // 0x479388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47938c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47938cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x479390: 0x3e00008  jr          $ra
    ctx->pc = 0x479390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479398u;
    // 0x479398: 0x0  nop
    ctx->pc = 0x479398u;
    // NOP
    // 0x47939c: 0x0  nop
    ctx->pc = 0x47939cu;
    // NOP
    ctx->pc = 0x4793a0u;
}
