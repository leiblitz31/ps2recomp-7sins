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

// Function: sub_002491F0
// Address: 0x2491f0 - 0x249230
void sub_002491F0_0x2491f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002491F0_0x2491f0");
#endif

    switch (ctx->pc) {
        case 0x249208u: goto label_249208;
        case 0x249218u: goto label_249218;
        default: break;
    }

    ctx->pc = 0x2491f0u;

    // 0x2491f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2491f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2491f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2491f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2491f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2491f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2491fc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2491fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x249200: 0xc0924cc  jal         func_249330
    ctx->pc = 0x249200u;
    SET_GPR_U32(ctx, 31, 0x249208u);
    ctx->pc = 0x249330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249330u, 0x249200u, 0x249208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249208u;
label_249208:
    // 0x249208: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x249208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24920c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24920cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249210: 0xc09248c  jal         func_249230
    ctx->pc = 0x249210u;
    SET_GPR_U32(ctx, 31, 0x249218u);
    ctx->pc = 0x249230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249230u, 0x249210u, 0x249218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249218u;
label_249218:
    // 0x249218: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x249218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24921c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24921cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249220: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x249220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x249224: 0x3e00008  jr          $ra
    ctx->pc = 0x249224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24922Cu;
    // 0x24922c: 0x0  nop
    ctx->pc = 0x24922cu;
    // NOP
    ctx->pc = 0x249230u;
}
