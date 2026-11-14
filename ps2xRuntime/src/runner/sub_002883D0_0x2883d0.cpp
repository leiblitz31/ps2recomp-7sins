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

// Function: sub_002883D0
// Address: 0x2883d0 - 0x288430
void sub_002883D0_0x2883d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002883D0_0x2883d0");
#endif

    switch (ctx->pc) {
        case 0x2883f0u: goto label_2883f0;
        case 0x288400u: goto label_288400;
        case 0x288418u: goto label_288418;
        default: break;
    }

    ctx->pc = 0x2883d0u;

    // 0x2883d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2883d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2883d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2883d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2883d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2883d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2883dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2883dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2883e0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2883e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2883e4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2883e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2883e8: 0xc0a210c  jal         func_288430
    ctx->pc = 0x2883E8u;
    SET_GPR_U32(ctx, 31, 0x2883F0u);
    ctx->pc = 0x288430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288430u, 0x2883E8u, 0x2883F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883F0u;
label_2883f0:
    // 0x2883f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2883f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2883f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2883f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2883f8: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x2883F8u;
    SET_GPR_U32(ctx, 31, 0x288400u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x2883F8u, 0x288400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288400u;
label_288400:
    // 0x288400: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x288400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288404: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288408: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28840c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x28840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x288410: 0xc0a210c  jal         func_288430
    ctx->pc = 0x288410u;
    SET_GPR_U32(ctx, 31, 0x288418u);
    ctx->pc = 0x288430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288430u, 0x288410u, 0x288418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288418u;
label_288418:
    // 0x288418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28841c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288420: 0x3e00008  jr          $ra
    ctx->pc = 0x288420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288428u;
    // 0x288428: 0x0  nop
    ctx->pc = 0x288428u;
    // NOP
    // 0x28842c: 0x0  nop
    ctx->pc = 0x28842cu;
    // NOP
    ctx->pc = 0x288430u;
}
