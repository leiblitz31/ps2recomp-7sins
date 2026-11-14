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

// Function: sub_00145330
// Address: 0x145330 - 0x145370
void sub_00145330_0x145330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145330_0x145330");
#endif

    switch (ctx->pc) {
        case 0x145350u: goto label_145350;
        default: break;
    }

    ctx->pc = 0x145330u;

    // 0x145330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x145338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14533c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14533cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x145340: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x145340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145344: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x145344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145348: 0xc0514dc  jal         func_145370
    ctx->pc = 0x145348u;
    SET_GPR_U32(ctx, 31, 0x145350u);
    ctx->pc = 0x145370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145370u, 0x145348u, 0x145350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145350u;
label_145350:
    // 0x145350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x145350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x145358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14535c: 0x3e00008  jr          $ra
    ctx->pc = 0x14535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145364u;
    // 0x145364: 0x0  nop
    ctx->pc = 0x145364u;
    // NOP
    // 0x145368: 0x0  nop
    ctx->pc = 0x145368u;
    // NOP
    // 0x14536c: 0x0  nop
    ctx->pc = 0x14536cu;
    // NOP
    ctx->pc = 0x145370u;
}
