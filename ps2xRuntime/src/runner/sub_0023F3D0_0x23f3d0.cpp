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

// Function: sub_0023F3D0
// Address: 0x23f3d0 - 0x23f450
void sub_0023F3D0_0x23f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F3D0_0x23f3d0");
#endif

    switch (ctx->pc) {
        case 0x23f404u: goto label_23f404;
        case 0x23f414u: goto label_23f414;
        case 0x23f434u: goto label_23f434;
        default: break;
    }

    ctx->pc = 0x23f3d0u;

    // 0x23f3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f3d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f3dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23f3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23f3e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23F3E4u;
    {
        const bool branch_taken_0x23f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f3e4) {
            ctx->pc = 0x23F434u;
            goto label_23f434;
        }
    }
    ctx->pc = 0x23F3ECu;
    // 0x23f3ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f3f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23f3fc: 0xc08fd40  jal         func_23F500
    ctx->pc = 0x23F3FCu;
    SET_GPR_U32(ctx, 31, 0x23F404u);
    ctx->pc = 0x23F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F500u, 0x23F3FCu, 0x23F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F404u;
label_23f404:
    // 0x23f404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f40c: 0xc08fd14  jal         func_23F450
    ctx->pc = 0x23F40Cu;
    SET_GPR_U32(ctx, 31, 0x23F414u);
    ctx->pc = 0x23F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F450u, 0x23F40Cu, 0x23F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F414u;
label_23f414:
    // 0x23f414: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23f414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f418: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23f418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23f41c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23f41cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23f420: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F420u;
    {
        const bool branch_taken_0x23f420 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f420) {
            ctx->pc = 0x23F434u;
            goto label_23f434;
        }
    }
    ctx->pc = 0x23F428u;
    // 0x23f428: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f42c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23F42Cu;
    SET_GPR_U32(ctx, 31, 0x23F434u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23F42Cu, 0x23F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F434u;
label_23f434:
    // 0x23f434: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f43c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f440: 0x3e00008  jr          $ra
    ctx->pc = 0x23F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F448u;
    // 0x23f448: 0x0  nop
    ctx->pc = 0x23f448u;
    // NOP
    // 0x23f44c: 0x0  nop
    ctx->pc = 0x23f44cu;
    // NOP
    ctx->pc = 0x23f450u;
}
