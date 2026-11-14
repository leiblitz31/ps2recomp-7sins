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

// Function: sub_00150630
// Address: 0x150630 - 0x150670
void sub_00150630_0x150630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150630_0x150630");
#endif

    switch (ctx->pc) {
        case 0x150658u: goto label_150658;
        default: break;
    }

    ctx->pc = 0x150630u;

    // 0x150630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x150638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15063c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x150640: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x150640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x150644: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150648: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x150648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15064c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150650: 0xc05419c  jal         func_150670
    ctx->pc = 0x150650u;
    SET_GPR_U32(ctx, 31, 0x150658u);
    ctx->pc = 0x150670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150670u, 0x150650u, 0x150658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150658u;
label_150658:
    // 0x150658: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x150658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15065c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150660: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x150660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150664: 0x3e00008  jr          $ra
    ctx->pc = 0x150664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15066Cu;
    // 0x15066c: 0x0  nop
    ctx->pc = 0x15066cu;
    // NOP
    ctx->pc = 0x150670u;
}
