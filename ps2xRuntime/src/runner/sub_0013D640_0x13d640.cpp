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

// Function: sub_0013D640
// Address: 0x13d640 - 0x13d680
void sub_0013D640_0x13d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D640_0x13d640");
#endif

    switch (ctx->pc) {
        case 0x13d664u: goto label_13d664;
        default: break;
    }

    ctx->pc = 0x13d640u;

    // 0x13d640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d64c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d654: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d658: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x13d658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13d65c: 0xc04e134  jal         func_1384D0
    ctx->pc = 0x13D65Cu;
    SET_GPR_U32(ctx, 31, 0x13D664u);
    ctx->pc = 0x1384D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1384D0u, 0x13D65Cu, 0x13D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D664u;
label_13d664:
    // 0x13d664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d66c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D674u;
    // 0x13d674: 0x0  nop
    ctx->pc = 0x13d674u;
    // NOP
    // 0x13d678: 0x0  nop
    ctx->pc = 0x13d678u;
    // NOP
    // 0x13d67c: 0x0  nop
    ctx->pc = 0x13d67cu;
    // NOP
    ctx->pc = 0x13d680u;
}
