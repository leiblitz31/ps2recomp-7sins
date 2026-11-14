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

// Function: sub_0023C3F0
// Address: 0x23c3f0 - 0x23c450
void sub_0023C3F0_0x23c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C3F0_0x23c3f0");
#endif

    switch (ctx->pc) {
        case 0x23c414u: goto label_23c414;
        case 0x23c43cu: goto label_23c43c;
        default: break;
    }

    ctx->pc = 0x23c3f0u;

    // 0x23c3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c3f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c3fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23c400: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23c400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23c404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c408: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23c408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c40c: 0xc08f13c  jal         func_23C4F0
    ctx->pc = 0x23C40Cu;
    SET_GPR_U32(ctx, 31, 0x23C414u);
    ctx->pc = 0x23C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4F0u, 0x23C40Cu, 0x23C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C414u;
label_23c414:
    // 0x23c414: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c418: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23c418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23c41c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c420: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c424: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23c428: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x23c428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c42c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23c42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23c430: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c434: 0xc08f114  jal         func_23C450
    ctx->pc = 0x23C434u;
    SET_GPR_U32(ctx, 31, 0x23C43Cu);
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C434u, 0x23C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C43Cu;
label_23c43c:
    // 0x23c43c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c444: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23c444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23c448: 0x3e00008  jr          $ra
    ctx->pc = 0x23C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C450u;
}
