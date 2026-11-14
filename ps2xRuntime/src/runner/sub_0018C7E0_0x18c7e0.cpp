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

// Function: sub_0018C7E0
// Address: 0x18c7e0 - 0x18c830
void sub_0018C7E0_0x18c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C7E0_0x18c7e0");
#endif

    switch (ctx->pc) {
        case 0x18c818u: goto label_18c818;
        default: break;
    }

    ctx->pc = 0x18c7e0u;

    // 0x18c7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c7e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c7ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c7f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c7f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18c7f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c7fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18c800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c804: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x18c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18c808: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c810: 0xc06320c  jal         func_18C830
    ctx->pc = 0x18C810u;
    SET_GPR_U32(ctx, 31, 0x18C818u);
    ctx->pc = 0x18C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C830u, 0x18C810u, 0x18C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C818u;
label_18c818:
    // 0x18c818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c820: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c824: 0x3e00008  jr          $ra
    ctx->pc = 0x18C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C82Cu;
    // 0x18c82c: 0x0  nop
    ctx->pc = 0x18c82cu;
    // NOP
    ctx->pc = 0x18c830u;
}
