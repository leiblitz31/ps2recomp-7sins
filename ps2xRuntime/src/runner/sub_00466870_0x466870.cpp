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

// Function: sub_00466870
// Address: 0x466870 - 0x4668a0
void sub_00466870_0x466870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466870_0x466870");
#endif

    switch (ctx->pc) {
        case 0x46688cu: goto label_46688c;
        default: break;
    }

    ctx->pc = 0x466870u;

    // 0x466870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x466870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x466874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46687c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466880: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x466880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x466884: 0xc119a28  jal         func_4668A0
    ctx->pc = 0x466884u;
    SET_GPR_U32(ctx, 31, 0x46688Cu);
    ctx->pc = 0x4668A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4668A0u, 0x466884u, 0x46688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46688Cu;
label_46688c:
    // 0x46688c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466890: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x466890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x466894: 0x3e00008  jr          $ra
    ctx->pc = 0x466894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46689Cu;
    // 0x46689c: 0x0  nop
    ctx->pc = 0x46689cu;
    // NOP
    ctx->pc = 0x4668a0u;
}
