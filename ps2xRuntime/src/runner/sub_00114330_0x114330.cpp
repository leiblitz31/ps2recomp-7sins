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

// Function: sub_00114330
// Address: 0x114330 - 0x114370
void sub_00114330_0x114330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114330_0x114330");
#endif

    switch (ctx->pc) {
        case 0x114350u: goto label_114350;
        default: break;
    }

    ctx->pc = 0x114330u;

    // 0x114330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x114338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11433c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11433cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x114340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114344: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114348: 0xc0450dc  jal         func_114370
    ctx->pc = 0x114348u;
    SET_GPR_U32(ctx, 31, 0x114350u);
    ctx->pc = 0x114370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114370u, 0x114348u, 0x114350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114350u;
label_114350:
    // 0x114350: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x114350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x114358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11435c: 0x3e00008  jr          $ra
    ctx->pc = 0x11435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11435Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114364u;
    // 0x114364: 0x0  nop
    ctx->pc = 0x114364u;
    // NOP
    // 0x114368: 0x0  nop
    ctx->pc = 0x114368u;
    // NOP
    // 0x11436c: 0x0  nop
    ctx->pc = 0x11436cu;
    // NOP
    ctx->pc = 0x114370u;
}
