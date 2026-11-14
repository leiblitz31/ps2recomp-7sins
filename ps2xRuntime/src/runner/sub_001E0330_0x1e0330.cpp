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

// Function: sub_001E0330
// Address: 0x1e0330 - 0x1e0380
void sub_001E0330_0x1e0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0330_0x1e0330");
#endif

    switch (ctx->pc) {
        case 0x1e0368u: goto label_1e0368;
        default: break;
    }

    ctx->pc = 0x1e0330u;

    // 0x1e0330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e0338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e033c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e033cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e0340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e0344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e0348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e034c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e034cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e0350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0354: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e0354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e0358: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e0358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e035c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e035cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0360: 0xc0780e0  jal         func_1E0380
    ctx->pc = 0x1E0360u;
    SET_GPR_U32(ctx, 31, 0x1E0368u);
    ctx->pc = 0x1E0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0380u, 0x1E0360u, 0x1E0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0368u;
label_1e0368:
    // 0x1e0368: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e036c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0370: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e0374: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E037Cu;
    // 0x1e037c: 0x0  nop
    ctx->pc = 0x1e037cu;
    // NOP
    ctx->pc = 0x1e0380u;
}
