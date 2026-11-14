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

// Function: sub_0013A370
// Address: 0x13a370 - 0x13a430
void sub_0013A370_0x13a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A370_0x13a370");
#endif

    switch (ctx->pc) {
        case 0x13a3d8u: goto label_13a3d8;
        case 0x13a3f0u: goto label_13a3f0;
        case 0x13a408u: goto label_13a408;
        case 0x13a414u: goto label_13a414;
        default: break;
    }

    ctx->pc = 0x13a370u;

    // 0x13a370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a37c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13a380: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a384: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A384u;
    {
        const bool branch_taken_0x13a384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a384) {
            ctx->pc = 0x13A398u;
            goto label_13a398;
        }
    }
    ctx->pc = 0x13A38Cu;
    // 0x13a38c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a390: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13A390u;
    {
        const bool branch_taken_0x13a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a390) {
            ctx->pc = 0x13A418u;
            goto label_13a418;
        }
    }
    ctx->pc = 0x13A398u;
label_13a398:
    // 0x13a398: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a39c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a3a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A3A0u;
    {
        const bool branch_taken_0x13a3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a3a0) {
            ctx->pc = 0x13A3B4u;
            goto label_13a3b4;
        }
    }
    ctx->pc = 0x13A3A8u;
    // 0x13a3a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13A3ACu;
    {
        const bool branch_taken_0x13a3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3ac) {
            ctx->pc = 0x13A418u;
            goto label_13a418;
        }
    }
    ctx->pc = 0x13A3B4u;
label_13a3b4:
    // 0x13a3b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a3b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a3bc: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13a3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a3c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x13a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13a3c4: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a3c8: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x13a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13a3cc: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x13a3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a3d0: 0xc122bd0  jal         func_48AF40
    ctx->pc = 0x13A3D0u;
    SET_GPR_U32(ctx, 31, 0x13A3D8u);
    ctx->pc = 0x48AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48AF40u, 0x13A3D0u, 0x13A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3D8u;
label_13a3d8:
    // 0x13a3d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x13a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13a3dc: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a3e0: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x13a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x13a3e4: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x13a3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a3e8: 0xc122c14  jal         func_48B050
    ctx->pc = 0x13A3E8u;
    SET_GPR_U32(ctx, 31, 0x13A3F0u);
    ctx->pc = 0x48B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B050u, 0x13A3E8u, 0x13A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3F0u;
label_13a3f0:
    // 0x13a3f0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x13a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13a3f4: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a3f8: 0xc44c003c  lwc1        $f12, 0x3C($v0)
    ctx->pc = 0x13a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13a3fc: 0xc60d002c  lwc1        $f13, 0x2C($s0)
    ctx->pc = 0x13a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x13a400: 0xc122d80  jal         func_48B600
    ctx->pc = 0x13A400u;
    SET_GPR_U32(ctx, 31, 0x13A408u);
    ctx->pc = 0x48B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B600u, 0x13A400u, 0x13A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A408u;
label_13a408:
    // 0x13a408: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a40c: 0xc12272c  jal         func_489CB0
    ctx->pc = 0x13A40Cu;
    SET_GPR_U32(ctx, 31, 0x13A414u);
    ctx->pc = 0x489CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489CB0u, 0x13A40Cu, 0x13A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A414u;
label_13a414:
    // 0x13a414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a418:
    // 0x13a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a420: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13a424: 0x3e00008  jr          $ra
    ctx->pc = 0x13A424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A42Cu;
    // 0x13a42c: 0x0  nop
    ctx->pc = 0x13a42cu;
    // NOP
    ctx->pc = 0x13a430u;
}
