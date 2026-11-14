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

// Function: sub_0010A110
// Address: 0x10a110 - 0x10a160
void sub_0010A110_0x10a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A110_0x10a110");
#endif

    switch (ctx->pc) {
        case 0x10a12cu: goto label_10a12c;
        case 0x10a140u: goto label_10a140;
        default: break;
    }

    ctx->pc = 0x10a110u;

    // 0x10a110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a11c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10a120: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a124: 0xc040314  jal         func_100C50
    ctx->pc = 0x10A124u;
    SET_GPR_U32(ctx, 31, 0x10A12Cu);
    ctx->pc = 0x100C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C50u, 0x10A124u, 0x10A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A12Cu;
label_10a12c:
    // 0x10a12c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a130: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a134: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10a134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a138: 0xc040488  jal         func_101220
    ctx->pc = 0x10A138u;
    SET_GPR_U32(ctx, 31, 0x10A140u);
    ctx->pc = 0x101220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101220u, 0x10A138u, 0x10A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A140u;
label_10a140:
    // 0x10a140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a14c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A154u;
    // 0x10a154: 0x0  nop
    ctx->pc = 0x10a154u;
    // NOP
    // 0x10a158: 0x0  nop
    ctx->pc = 0x10a158u;
    // NOP
    // 0x10a15c: 0x0  nop
    ctx->pc = 0x10a15cu;
    // NOP
    ctx->pc = 0x10a160u;
}
