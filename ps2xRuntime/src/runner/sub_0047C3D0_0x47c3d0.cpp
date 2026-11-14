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

// Function: sub_0047C3D0
// Address: 0x47c3d0 - 0x47c460
void sub_0047C3D0_0x47c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C3D0_0x47c3d0");
#endif

    switch (ctx->pc) {
        case 0x47c3f8u: goto label_47c3f8;
        case 0x47c424u: goto label_47c424;
        case 0x47c444u: goto label_47c444;
        default: break;
    }

    ctx->pc = 0x47c3d0u;

    // 0x47c3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x47c3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47c3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c3dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x47c3e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x47c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x47c3e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c3e8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x47c3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x47c3ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c3f0: 0xc11f0c0  jal         func_47C300
    ctx->pc = 0x47C3F0u;
    SET_GPR_U32(ctx, 31, 0x47C3F8u);
    ctx->pc = 0x47C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C300u, 0x47C3F0u, 0x47C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C3F8u;
label_47c3f8:
    // 0x47c3f8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47C3F8u;
    {
        const bool branch_taken_0x47c3f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x47c3f8) {
            ctx->pc = 0x47C424u;
            goto label_47c424;
        }
    }
    ctx->pc = 0x47C400u;
    // 0x47c400: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x47c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c404: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c408: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x47c408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x47c40c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x47c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x47c410: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x47c410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47c414: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x47c414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c418: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x47c418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x47c41c: 0xc11f0b0  jal         func_47C2C0
    ctx->pc = 0x47C41Cu;
    SET_GPR_U32(ctx, 31, 0x47C424u);
    ctx->pc = 0x47C2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C2C0u, 0x47C41Cu, 0x47C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C424u;
label_47c424:
    // 0x47c424: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x47c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c428: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x47c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x47c42c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x47c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x47c430: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x47c430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x47c434: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c438: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47c438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47c43c: 0xc11f118  jal         func_47C460
    ctx->pc = 0x47C43Cu;
    SET_GPR_U32(ctx, 31, 0x47C444u);
    ctx->pc = 0x47C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C460u, 0x47C43Cu, 0x47C444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C444u;
label_47c444:
    // 0x47c444: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47c444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c44c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c450: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47c454: 0x3e00008  jr          $ra
    ctx->pc = 0x47C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C45Cu;
    // 0x47c45c: 0x0  nop
    ctx->pc = 0x47c45cu;
    // NOP
    ctx->pc = 0x47c460u;
}
