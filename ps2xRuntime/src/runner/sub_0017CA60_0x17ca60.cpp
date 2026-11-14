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

// Function: sub_0017CA60
// Address: 0x17ca60 - 0x17caa0
void sub_0017CA60_0x17ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CA60_0x17ca60");
#endif

    switch (ctx->pc) {
        case 0x17ca84u: goto label_17ca84;
        default: break;
    }

    ctx->pc = 0x17ca60u;

    // 0x17ca60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ca64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ca68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17ca6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17ca70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ca74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ca78: 0x278690d8  addiu       $a2, $gp, -0x6F28
    ctx->pc = 0x17ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938840));
    // 0x17ca7c: 0xc05f2a8  jal         func_17CAA0
    ctx->pc = 0x17CA7Cu;
    SET_GPR_U32(ctx, 31, 0x17CA84u);
    ctx->pc = 0x17CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CAA0u, 0x17CA7Cu, 0x17CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA84u;
label_17ca84:
    // 0x17ca84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ca8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CA94u;
    // 0x17ca94: 0x0  nop
    ctx->pc = 0x17ca94u;
    // NOP
    // 0x17ca98: 0x0  nop
    ctx->pc = 0x17ca98u;
    // NOP
    // 0x17ca9c: 0x0  nop
    ctx->pc = 0x17ca9cu;
    // NOP
    ctx->pc = 0x17caa0u;
}
