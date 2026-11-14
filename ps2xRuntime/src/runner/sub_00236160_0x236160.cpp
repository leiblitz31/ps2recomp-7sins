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

// Function: sub_00236160
// Address: 0x236160 - 0x236190
void sub_00236160_0x236160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236160_0x236160");
#endif

    switch (ctx->pc) {
        case 0x23617cu: goto label_23617c;
        default: break;
    }

    ctx->pc = 0x236160u;

    // 0x236160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23616c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236170: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x236170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x236174: 0xc08cff4  jal         func_233FD0
    ctx->pc = 0x236174u;
    SET_GPR_U32(ctx, 31, 0x23617Cu);
    ctx->pc = 0x233FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233FD0u, 0x236174u, 0x23617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23617Cu;
label_23617c:
    // 0x23617c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236180: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x236180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x236184: 0x3e00008  jr          $ra
    ctx->pc = 0x236184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23618Cu;
    // 0x23618c: 0x0  nop
    ctx->pc = 0x23618cu;
    // NOP
    ctx->pc = 0x236190u;
}
