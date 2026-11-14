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

// Function: sub_0022A330
// Address: 0x22a330 - 0x22a3f0
void sub_0022A330_0x22a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A330_0x22a330");
#endif

    switch (ctx->pc) {
        case 0x22a360u: goto label_22a360;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a378u: goto label_22a378;
        case 0x22a390u: goto label_22a390;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3c4u: goto label_22a3c4;
        default: break;
    }

    ctx->pc = 0x22a330u;

    // 0x22a330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22a338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a344: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x22a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x22a348: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x22a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x22a34c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a350: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22a350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a354: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22a354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a358: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x22A358u;
    SET_GPR_U32(ctx, 31, 0x22A360u);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x22A358u, 0x22A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A360u;
label_22a360:
    // 0x22a360: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a364: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22A364u;
    {
        const bool branch_taken_0x22a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a364) {
            ctx->pc = 0x22A3C8u;
            goto label_22a3c8;
        }
    }
    ctx->pc = 0x22A36Cu;
label_22a36c:
    // 0x22a36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a370: 0xc08a90c  jal         func_22A430
    ctx->pc = 0x22A370u;
    SET_GPR_U32(ctx, 31, 0x22A378u);
    ctx->pc = 0x22A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A430u, 0x22A370u, 0x22A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A378u;
label_22a378:
    // 0x22a378: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a37c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22a380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a384: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x22a384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a388: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22A388u;
    SET_GPR_U32(ctx, 31, 0x22A390u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22A388u, 0x22A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A390u;
label_22a390:
    // 0x22a390: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A390u;
    {
        const bool branch_taken_0x22a390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a390) {
            ctx->pc = 0x22A3B8u;
            goto label_22a3b8;
        }
    }
    ctx->pc = 0x22A398u;
    // 0x22a398: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22a398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3a0: 0xc08a904  jal         func_22A410
    ctx->pc = 0x22A3A0u;
    SET_GPR_U32(ctx, 31, 0x22A3A8u);
    ctx->pc = 0x22A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A410u, 0x22A3A0u, 0x22A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3A8u;
label_22a3a8:
    // 0x22a3a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22a3ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x22a3acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22A3B0u;
    {
        const bool branch_taken_0x22a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3b0) {
            ctx->pc = 0x22A3C8u;
            goto label_22a3c8;
        }
    }
    ctx->pc = 0x22A3B8u;
label_22a3b8:
    // 0x22a3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3bc: 0xc08a8fc  jal         func_22A3F0
    ctx->pc = 0x22A3BCu;
    SET_GPR_U32(ctx, 31, 0x22A3C4u);
    ctx->pc = 0x22A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3F0u, 0x22A3BCu, 0x22A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3C4u;
label_22a3c4:
    // 0x22a3c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22a3c8:
    // 0x22a3c8: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x22A3C8u;
    {
        const bool branch_taken_0x22a3c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a3c8) {
            ctx->pc = 0x22A36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a36c;
        }
    }
    ctx->pc = 0x22A3D0u;
    // 0x22a3d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a3d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a3d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a3e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22a3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A3F0u;
}
