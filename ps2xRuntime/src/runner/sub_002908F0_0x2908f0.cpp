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

// Function: sub_002908F0
// Address: 0x2908f0 - 0x290940
void sub_002908F0_0x2908f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002908F0_0x2908f0");
#endif

    switch (ctx->pc) {
        case 0x290928u: goto label_290928;
        default: break;
    }

    ctx->pc = 0x2908f0u;

    // 0x2908f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2908f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2908f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2908f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2908f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2908f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2908fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2908fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x290900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290904: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x290904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x290908: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29090c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29090cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x290910: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290914: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x290914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x290918: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x290918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29091c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290920: 0xc0a4250  jal         func_290940
    ctx->pc = 0x290920u;
    SET_GPR_U32(ctx, 31, 0x290928u);
    ctx->pc = 0x290940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290940u, 0x290920u, 0x290928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290928u;
label_290928:
    // 0x290928: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x290928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29092c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290930: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290934: 0x3e00008  jr          $ra
    ctx->pc = 0x290934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29093Cu;
    // 0x29093c: 0x0  nop
    ctx->pc = 0x29093cu;
    // NOP
    ctx->pc = 0x290940u;
}
