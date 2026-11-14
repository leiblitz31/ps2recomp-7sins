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

// Function: sub_0023AE80
// Address: 0x23ae80 - 0x23aed0
void sub_0023AE80_0x23ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE80_0x23ae80");
#endif

    switch (ctx->pc) {
        case 0x23aeb8u: goto label_23aeb8;
        default: break;
    }

    ctx->pc = 0x23ae80u;

    // 0x23ae80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ae84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ae88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ae8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23ae90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ae94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23ae98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ae9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23aea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aea4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23aea8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aeb0: 0xc08ebb4  jal         func_23AED0
    ctx->pc = 0x23AEB0u;
    SET_GPR_U32(ctx, 31, 0x23AEB8u);
    ctx->pc = 0x23AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AED0u, 0x23AEB0u, 0x23AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEB8u;
label_23aeb8:
    // 0x23aeb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aec0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AECCu;
    // 0x23aecc: 0x0  nop
    ctx->pc = 0x23aeccu;
    // NOP
    ctx->pc = 0x23aed0u;
}
