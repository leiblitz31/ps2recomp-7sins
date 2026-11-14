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

// Function: sub_00115620
// Address: 0x115620 - 0x115660
void sub_00115620_0x115620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115620_0x115620");
#endif

    switch (ctx->pc) {
        case 0x115640u: goto label_115640;
        default: break;
    }

    ctx->pc = 0x115620u;

    // 0x115620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11562c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x115630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115634: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x115634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115638: 0xc045598  jal         func_115660
    ctx->pc = 0x115638u;
    SET_GPR_U32(ctx, 31, 0x115640u);
    ctx->pc = 0x115660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115660u, 0x115638u, 0x115640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115640u;
label_115640:
    // 0x115640: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x115640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115648: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x115648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11564c: 0x3e00008  jr          $ra
    ctx->pc = 0x11564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115654u;
    // 0x115654: 0x0  nop
    ctx->pc = 0x115654u;
    // NOP
    // 0x115658: 0x0  nop
    ctx->pc = 0x115658u;
    // NOP
    // 0x11565c: 0x0  nop
    ctx->pc = 0x11565cu;
    // NOP
    ctx->pc = 0x115660u;
}
