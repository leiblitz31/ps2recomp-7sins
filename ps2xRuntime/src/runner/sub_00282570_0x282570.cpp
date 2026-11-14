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

// Function: sub_00282570
// Address: 0x282570 - 0x2825c0
void sub_00282570_0x282570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282570_0x282570");
#endif

    switch (ctx->pc) {
        case 0x282590u: goto label_282590;
        case 0x2825a8u: goto label_2825a8;
        default: break;
    }

    ctx->pc = 0x282570u;

    // 0x282570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28257c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x282580: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282584: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x282584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282588: 0xc0a0970  jal         func_2825C0
    ctx->pc = 0x282588u;
    SET_GPR_U32(ctx, 31, 0x282590u);
    ctx->pc = 0x2825C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2825C0u, 0x282588u, 0x282590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282590u;
label_282590:
    // 0x282590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282594: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x282594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x282598: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x282598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28259c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2825a0: 0xc0a0da4  jal         func_283690
    ctx->pc = 0x2825A0u;
    SET_GPR_U32(ctx, 31, 0x2825A8u);
    ctx->pc = 0x283690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283690u, 0x2825A0u, 0x2825A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825A8u;
label_2825a8:
    // 0x2825a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2825a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2825ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2825acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2825b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2825B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2825B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2825B8u;
    // 0x2825b8: 0x0  nop
    ctx->pc = 0x2825b8u;
    // NOP
    // 0x2825bc: 0x0  nop
    ctx->pc = 0x2825bcu;
    // NOP
    ctx->pc = 0x2825c0u;
}
