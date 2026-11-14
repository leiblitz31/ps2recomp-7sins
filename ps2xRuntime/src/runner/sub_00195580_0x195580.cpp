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

// Function: sub_00195580
// Address: 0x195580 - 0x1955c0
void sub_00195580_0x195580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195580_0x195580");
#endif

    switch (ctx->pc) {
        case 0x1955a0u: goto label_1955a0;
        default: break;
    }

    ctx->pc = 0x195580u;

    // 0x195580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19558c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195590: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195594: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195598: 0xc065570  jal         func_1955C0
    ctx->pc = 0x195598u;
    SET_GPR_U32(ctx, 31, 0x1955A0u);
    ctx->pc = 0x1955C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1955C0u, 0x195598u, 0x1955A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955A0u;
label_1955a0:
    // 0x1955a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1955a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1955a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1955a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1955a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1955ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1955ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1955B4u;
    // 0x1955b4: 0x0  nop
    ctx->pc = 0x1955b4u;
    // NOP
    // 0x1955b8: 0x0  nop
    ctx->pc = 0x1955b8u;
    // NOP
    // 0x1955bc: 0x0  nop
    ctx->pc = 0x1955bcu;
    // NOP
    ctx->pc = 0x1955c0u;
}
