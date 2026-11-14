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

// Function: sub_002E0940
// Address: 0x2e0940 - 0x2e0980
void sub_002E0940_0x2e0940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0940_0x2e0940");
#endif

    switch (ctx->pc) {
        case 0x2e095cu: goto label_2e095c;
        case 0x2e096cu: goto label_2e096c;
        default: break;
    }

    ctx->pc = 0x2e0940u;

    // 0x2e0940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e094c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e094cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e0950: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e0950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0954: 0xc0b7d10  jal         func_2DF440
    ctx->pc = 0x2E0954u;
    SET_GPR_U32(ctx, 31, 0x2E095Cu);
    ctx->pc = 0x2DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF440u, 0x2E0954u, 0x2E095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E095Cu;
label_2e095c:
    // 0x2e095c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e095cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0960: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e0960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0964: 0xc0b8144  jal         func_2E0510
    ctx->pc = 0x2E0964u;
    SET_GPR_U32(ctx, 31, 0x2E096Cu);
    ctx->pc = 0x2E0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0510u, 0x2E0964u, 0x2E096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E096Cu;
label_2e096c:
    // 0x2e096c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e096cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0970: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0974: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E097Cu;
    // 0x2e097c: 0x0  nop
    ctx->pc = 0x2e097cu;
    // NOP
    ctx->pc = 0x2e0980u;
}
