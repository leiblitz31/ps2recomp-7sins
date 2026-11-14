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

// Function: sub_002423F0
// Address: 0x2423f0 - 0x242430
void sub_002423F0_0x2423f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002423F0_0x2423f0");
#endif

    switch (ctx->pc) {
        case 0x242408u: goto label_242408;
        default: break;
    }

    ctx->pc = 0x2423f0u;

    // 0x2423f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2423f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2423f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2423f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2423f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2423f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2423fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2423fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242400: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x242400u;
    SET_GPR_U32(ctx, 31, 0x242408u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x242400u, 0x242408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242408u;
label_242408:
    // 0x242408: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24240c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24240cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x242410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242414: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x242414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x242418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24241c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242424: 0x3e00008  jr          $ra
    ctx->pc = 0x242424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24242Cu;
    // 0x24242c: 0x0  nop
    ctx->pc = 0x24242cu;
    // NOP
    ctx->pc = 0x242430u;
}
