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

// Function: sub_0013A2E0
// Address: 0x13a2e0 - 0x13a370
void sub_0013A2E0_0x13a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A2E0_0x13a2e0");
#endif

    switch (ctx->pc) {
        case 0x13a340u: goto label_13a340;
        case 0x13a34cu: goto label_13a34c;
        default: break;
    }

    ctx->pc = 0x13a2e0u;

    // 0x13a2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a2ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13a2f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a2f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A2F4u;
    {
        const bool branch_taken_0x13a2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a2f4) {
            ctx->pc = 0x13A308u;
            goto label_13a308;
        }
    }
    ctx->pc = 0x13A2FCu;
    // 0x13a2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a300: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13A300u;
    {
        const bool branch_taken_0x13a300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a300) {
            ctx->pc = 0x13A350u;
            goto label_13a350;
        }
    }
    ctx->pc = 0x13A308u;
label_13a308:
    // 0x13a308: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a30c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a310: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A310u;
    {
        const bool branch_taken_0x13a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a310) {
            ctx->pc = 0x13A324u;
            goto label_13a324;
        }
    }
    ctx->pc = 0x13A318u;
    // 0x13a318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a31c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13A31Cu;
    {
        const bool branch_taken_0x13a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a31c) {
            ctx->pc = 0x13A350u;
            goto label_13a350;
        }
    }
    ctx->pc = 0x13A324u;
label_13a324:
    // 0x13a324: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a328: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a32c: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a330: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a334: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13a338: 0xc122b84  jal         func_48AE10
    ctx->pc = 0x13A338u;
    SET_GPR_U32(ctx, 31, 0x13A340u);
    ctx->pc = 0x48AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48AE10u, 0x13A338u, 0x13A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A340u;
label_13a340:
    // 0x13a340: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a344: 0xc12272c  jal         func_489CB0
    ctx->pc = 0x13A344u;
    SET_GPR_U32(ctx, 31, 0x13A34Cu);
    ctx->pc = 0x489CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489CB0u, 0x13A344u, 0x13A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A34Cu;
label_13a34c:
    // 0x13a34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a350:
    // 0x13a350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A364u;
    // 0x13a364: 0x0  nop
    ctx->pc = 0x13a364u;
    // NOP
    // 0x13a368: 0x0  nop
    ctx->pc = 0x13a368u;
    // NOP
    // 0x13a36c: 0x0  nop
    ctx->pc = 0x13a36cu;
    // NOP
    ctx->pc = 0x13a370u;
}
