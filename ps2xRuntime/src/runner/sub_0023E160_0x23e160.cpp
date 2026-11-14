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

// Function: sub_0023E160
// Address: 0x23e160 - 0x23e1a0
void sub_0023E160_0x23e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E160_0x23e160");
#endif

    switch (ctx->pc) {
        case 0x23e17cu: goto label_23e17c;
        case 0x23e18cu: goto label_23e18c;
        default: break;
    }

    ctx->pc = 0x23e160u;

    // 0x23e160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23e168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23e16c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23e170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e174: 0xc08f034  jal         func_23C0D0
    ctx->pc = 0x23E174u;
    SET_GPR_U32(ctx, 31, 0x23E17Cu);
    ctx->pc = 0x23C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0D0u, 0x23E174u, 0x23E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E17Cu;
label_23e17c:
    // 0x23e17c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e180: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23e180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23e184: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x23E184u;
    SET_GPR_U32(ctx, 31, 0x23E18Cu);
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x23E184u, 0x23E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E18Cu;
label_23e18c:
    // 0x23e18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e190: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e194: 0x3e00008  jr          $ra
    ctx->pc = 0x23E194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E19Cu;
    // 0x23e19c: 0x0  nop
    ctx->pc = 0x23e19cu;
    // NOP
    ctx->pc = 0x23e1a0u;
}
