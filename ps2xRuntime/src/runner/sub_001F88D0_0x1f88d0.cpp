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

// Function: sub_001F88D0
// Address: 0x1f88d0 - 0x1f8910
void sub_001F88D0_0x1f88d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F88D0_0x1f88d0");
#endif

    switch (ctx->pc) {
        case 0x1f88e8u: goto label_1f88e8;
        case 0x1f8900u: goto label_1f8900;
        default: break;
    }

    ctx->pc = 0x1f88d0u;

    // 0x1f88d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f88d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f88d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f88d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f88d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f88dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f88e0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F88E0u;
    SET_GPR_U32(ctx, 31, 0x1F88E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F88E0u, 0x1F88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88E8u;
label_1f88e8:
    // 0x1f88e8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1f88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f88ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88f0: 0x8c650240  lw          $a1, 0x240($v1)
    ctx->pc = 0x1f88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 576)));
    // 0x1f88f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f88f8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F88F8u;
    SET_GPR_U32(ctx, 31, 0x1F8900u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F88F8u, 0x1F8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8900u;
label_1f8900:
    // 0x1f8900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8904: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8908: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8910u;
}
