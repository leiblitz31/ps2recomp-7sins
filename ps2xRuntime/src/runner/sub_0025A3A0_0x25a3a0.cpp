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

// Function: sub_0025A3A0
// Address: 0x25a3a0 - 0x25a450
void sub_0025A3A0_0x25a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A3A0_0x25a3a0");
#endif

    switch (ctx->pc) {
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a3f4u: goto label_25a3f4;
        case 0x25a410u: goto label_25a410;
        case 0x25a42cu: goto label_25a42c;
        default: break;
    }

    ctx->pc = 0x25a3a0u;

    // 0x25a3a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a3ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25a3b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25a3b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25a3b8: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x25a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x25a3bc: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x25a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x25a3c0: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x25a3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a3c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a3c8: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3d0: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A3D0u;
    SET_GPR_U32(ctx, 31, 0x25A3D8u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A3D0u, 0x25A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3D8u;
label_25a3d8:
    // 0x25a3d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a3dc: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x25a3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a3e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a3e4: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a3e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a3ec: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A3ECu;
    SET_GPR_U32(ctx, 31, 0x25A3F4u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A3ECu, 0x25A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3F4u;
label_25a3f4:
    // 0x25a3f4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a3f8: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x25a3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a3fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a400: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25a404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a408: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A408u;
    SET_GPR_U32(ctx, 31, 0x25A410u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A408u, 0x25A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A410u;
label_25a410:
    // 0x25a410: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a414: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x25a414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a418: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a41c: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a420: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a424: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A424u;
    SET_GPR_U32(ctx, 31, 0x25A42Cu);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A424u, 0x25A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A42Cu;
label_25a42c:
    // 0x25a42c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a438: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25a438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A444u;
    // 0x25a444: 0x0  nop
    ctx->pc = 0x25a444u;
    // NOP
    // 0x25a448: 0x0  nop
    ctx->pc = 0x25a448u;
    // NOP
    // 0x25a44c: 0x0  nop
    ctx->pc = 0x25a44cu;
    // NOP
    ctx->pc = 0x25a450u;
}
