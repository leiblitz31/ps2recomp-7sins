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

// Function: sub_0023E120
// Address: 0x23e120 - 0x23e160
void sub_0023E120_0x23e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E120_0x23e120");
#endif

    switch (ctx->pc) {
        case 0x23e140u: goto label_23e140;
        default: break;
    }

    ctx->pc = 0x23e120u;

    // 0x23e120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23e124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23e128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23e12c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23e130: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23e130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e134: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e138: 0xc08f858  jal         func_23E160
    ctx->pc = 0x23E138u;
    SET_GPR_U32(ctx, 31, 0x23E140u);
    ctx->pc = 0x23E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E160u, 0x23E138u, 0x23E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E140u;
label_23e140:
    // 0x23e140: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23e14c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E154u;
    // 0x23e154: 0x0  nop
    ctx->pc = 0x23e154u;
    // NOP
    // 0x23e158: 0x0  nop
    ctx->pc = 0x23e158u;
    // NOP
    // 0x23e15c: 0x0  nop
    ctx->pc = 0x23e15cu;
    // NOP
    ctx->pc = 0x23e160u;
}
