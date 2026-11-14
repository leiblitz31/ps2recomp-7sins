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

// Function: sub_001523F0
// Address: 0x1523f0 - 0x152430
void sub_001523F0_0x1523f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001523F0_0x1523f0");
#endif

    switch (ctx->pc) {
        case 0x152408u: goto label_152408;
        case 0x152418u: goto label_152418;
        default: break;
    }

    ctx->pc = 0x1523f0u;

    // 0x1523f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1523f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1523f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1523f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1523f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1523f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1523fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1523fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152400: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x152400u;
    SET_GPR_U32(ctx, 31, 0x152408u);
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x152400u, 0x152408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152408u;
label_152408:
    // 0x152408: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x152408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15240c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152410: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152410u;
    SET_GPR_U32(ctx, 31, 0x152418u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152410u, 0x152418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152418u;
label_152418:
    // 0x152418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15241c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15241cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152420: 0x3e00008  jr          $ra
    ctx->pc = 0x152420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152428u;
    // 0x152428: 0x0  nop
    ctx->pc = 0x152428u;
    // NOP
    // 0x15242c: 0x0  nop
    ctx->pc = 0x15242cu;
    // NOP
    ctx->pc = 0x152430u;
}
