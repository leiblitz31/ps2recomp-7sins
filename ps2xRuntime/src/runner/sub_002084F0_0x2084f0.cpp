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

// Function: sub_002084F0
// Address: 0x2084f0 - 0x208540
void sub_002084F0_0x2084f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002084F0_0x2084f0");
#endif

    switch (ctx->pc) {
        case 0x208528u: goto label_208528;
        default: break;
    }

    ctx->pc = 0x2084f0u;

    // 0x2084f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2084f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2084f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2084f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2084f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2084f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2084fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2084fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x208500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208504: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x208504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x208508: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20850c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20850cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x208510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208514: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x208514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x208518: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x208518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20851c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20851cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208520: 0xc082150  jal         func_208540
    ctx->pc = 0x208520u;
    SET_GPR_U32(ctx, 31, 0x208528u);
    ctx->pc = 0x208540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208540u, 0x208520u, 0x208528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208528u;
label_208528:
    // 0x208528: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20852c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x208530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x208534: 0x3e00008  jr          $ra
    ctx->pc = 0x208534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20853Cu;
    // 0x20853c: 0x0  nop
    ctx->pc = 0x20853cu;
    // NOP
    ctx->pc = 0x208540u;
}
