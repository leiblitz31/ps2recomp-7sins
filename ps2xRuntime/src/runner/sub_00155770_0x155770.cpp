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

// Function: sub_00155770
// Address: 0x155770 - 0x155980
void sub_00155770_0x155770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155770_0x155770");
#endif

    switch (ctx->pc) {
        case 0x1557acu: goto label_1557ac;
        case 0x1557c0u: goto label_1557c0;
        case 0x1557d4u: goto label_1557d4;
        case 0x1557e4u: goto label_1557e4;
        case 0x1557fcu: goto label_1557fc;
        case 0x155814u: goto label_155814;
        case 0x15582cu: goto label_15582c;
        case 0x15584cu: goto label_15584c;
        case 0x155864u: goto label_155864;
        case 0x155874u: goto label_155874;
        case 0x15589cu: goto label_15589c;
        case 0x1558b0u: goto label_1558b0;
        case 0x1558c4u: goto label_1558c4;
        case 0x1558d0u: goto label_1558d0;
        case 0x1558e4u: goto label_1558e4;
        case 0x1558fcu: goto label_1558fc;
        case 0x155924u: goto label_155924;
        case 0x155938u: goto label_155938;
        case 0x155954u: goto label_155954;
        default: break;
    }

    ctx->pc = 0x155770u;

    // 0x155770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x155774: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x155778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15577c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15578c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x155790: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x155790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x155794: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x155794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x155798: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15579c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1557a0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1557a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1557a4: 0xc054e6c  jal         func_1539B0
    ctx->pc = 0x1557A4u;
    SET_GPR_U32(ctx, 31, 0x1557ACu);
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x1557A4u, 0x1557ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557ACu;
label_1557ac:
    // 0x1557ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1557acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1557b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1557b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1557b4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1557b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1557b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x155834u;
            goto label_155834;
        }
    }
    ctx->pc = 0x1557C0u;
label_1557c0:
    // 0x1557c0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1557c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557c4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1557c8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1557c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1557cc: 0xc0556f8  jal         func_155BE0
    ctx->pc = 0x1557CCu;
    SET_GPR_U32(ctx, 31, 0x1557D4u);
    ctx->pc = 0x155BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE0u, 0x1557CCu, 0x1557D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557D4u;
label_1557d4:
    // 0x1557d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1557d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1557d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557dc: 0xc0556e8  jal         func_155BA0
    ctx->pc = 0x1557DCu;
    SET_GPR_U32(ctx, 31, 0x1557E4u);
    ctx->pc = 0x155BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BA0u, 0x1557DCu, 0x1557E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557E4u;
label_1557e4:
    // 0x1557e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1557e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1557e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1557e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1557ec: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1557ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1557f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1557f4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1557F4u;
    SET_GPR_U32(ctx, 31, 0x1557FCu);
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1557F4u, 0x1557FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557FCu;
label_1557fc:
    // 0x1557fc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1557fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155800: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x155800u;
    {
        const bool branch_taken_0x155800 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x155800) {
            ctx->pc = 0x155820u;
            goto label_155820;
        }
    }
    ctx->pc = 0x155808u;
    // 0x155808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15580c: 0xc0556cc  jal         func_155B30
    ctx->pc = 0x15580Cu;
    SET_GPR_U32(ctx, 31, 0x155814u);
    ctx->pc = 0x155B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B30u, 0x15580Cu, 0x155814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155814u;
label_155814:
    // 0x155814: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x155814u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155818u;
    {
        const bool branch_taken_0x155818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155818) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155820u;
label_155820:
    // 0x155820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155824: 0xc0556c4  jal         func_155B10
    ctx->pc = 0x155824u;
    SET_GPR_U32(ctx, 31, 0x15582Cu);
    ctx->pc = 0x155B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B10u, 0x155824u, 0x15582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15582Cu;
label_15582c:
    // 0x15582c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x15582cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155830:
    // 0x155830: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x155830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_155834:
    // 0x155834: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x155834u;
    {
        const bool branch_taken_0x155834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x155834) {
            ctx->pc = 0x1557C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1557c0;
        }
    }
    ctx->pc = 0x15583Cu;
    // 0x15583c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x15583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x155840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155844: 0xc0556b8  jal         func_155AE0
    ctx->pc = 0x155844u;
    SET_GPR_U32(ctx, 31, 0x15584Cu);
    ctx->pc = 0x155AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE0u, 0x155844u, 0x15584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15584Cu;
label_15584c:
    // 0x15584c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x15584Cu;
    {
        const bool branch_taken_0x15584c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15584c) {
            ctx->pc = 0x1558C4u;
            goto label_1558c4;
        }
    }
    ctx->pc = 0x155854u;
    // 0x155854: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x155858: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15585c: 0xc0556a8  jal         func_155AA0
    ctx->pc = 0x15585Cu;
    SET_GPR_U32(ctx, 31, 0x155864u);
    ctx->pc = 0x155AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AA0u, 0x15585Cu, 0x155864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155864u;
label_155864:
    // 0x155864: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x155864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x155868: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x15586c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x15586Cu;
    SET_GPR_U32(ctx, 31, 0x155874u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x15586Cu, 0x155874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155874u;
label_155874:
    // 0x155874: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x155874u;
    {
        const bool branch_taken_0x155874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155874) {
            ctx->pc = 0x1558B8u;
            goto label_1558b8;
        }
    }
    ctx->pc = 0x15587Cu;
    // 0x15587c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x155880: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155884: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155888: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15588c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x15588cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x155890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155894: 0xc05572c  jal         func_155CB0
    ctx->pc = 0x155894u;
    SET_GPR_U32(ctx, 31, 0x15589Cu);
    ctx->pc = 0x155CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CB0u, 0x155894u, 0x15589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15589Cu;
label_15589c:
    // 0x15589c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1558a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1558a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1558a4: 0x27868d30  addiu       $a2, $gp, -0x72D0
    ctx->pc = 0x1558a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937904));
    // 0x1558a8: 0xc055688  jal         func_155A20
    ctx->pc = 0x1558A8u;
    SET_GPR_U32(ctx, 31, 0x1558B0u);
    ctx->pc = 0x155A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A20u, 0x1558A8u, 0x1558B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558B0u;
label_1558b0:
    // 0x1558b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1558B0u;
    {
        const bool branch_taken_0x1558b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558b0) {
            ctx->pc = 0x155954u;
            goto label_155954;
        }
    }
    ctx->pc = 0x1558B8u;
label_1558b8:
    // 0x1558b8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1558b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1558bc: 0xc055678  jal         func_1559E0
    ctx->pc = 0x1558BCu;
    SET_GPR_U32(ctx, 31, 0x1558C4u);
    ctx->pc = 0x1559E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559E0u, 0x1558BCu, 0x1558C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558C4u;
label_1558c4:
    // 0x1558c4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1558c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1558c8: 0xc055660  jal         func_155980
    ctx->pc = 0x1558C8u;
    SET_GPR_U32(ctx, 31, 0x1558D0u);
    ctx->pc = 0x155980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155980u, 0x1558C8u, 0x1558D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558D0u;
label_1558d0:
    // 0x1558d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1558d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1558d4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1558d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1558d8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1558d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1558dc: 0xc0556f8  jal         func_155BE0
    ctx->pc = 0x1558DCu;
    SET_GPR_U32(ctx, 31, 0x1558E4u);
    ctx->pc = 0x155BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE0u, 0x1558DCu, 0x1558E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558E4u;
label_1558e4:
    // 0x1558e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1558e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1558e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1558e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1558ec: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1558ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1558f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1558f4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1558F4u;
    SET_GPR_U32(ctx, 31, 0x1558FCu);
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1558F4u, 0x1558FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558FCu;
label_1558fc:
    // 0x1558fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1558FCu;
    {
        const bool branch_taken_0x1558fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558fc) {
            ctx->pc = 0x155940u;
            goto label_155940;
        }
    }
    ctx->pc = 0x155904u;
    // 0x155904: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x155904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x155908: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15590c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15590cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155910: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x155910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155914: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x155918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15591c: 0xc05572c  jal         func_155CB0
    ctx->pc = 0x15591Cu;
    SET_GPR_U32(ctx, 31, 0x155924u);
    ctx->pc = 0x155CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CB0u, 0x15591Cu, 0x155924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155924u;
label_155924:
    // 0x155924: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155928: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x155928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x15592c: 0x27868d34  addiu       $a2, $gp, -0x72CC
    ctx->pc = 0x15592cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937908));
    // 0x155930: 0xc055688  jal         func_155A20
    ctx->pc = 0x155930u;
    SET_GPR_U32(ctx, 31, 0x155938u);
    ctx->pc = 0x155A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A20u, 0x155930u, 0x155938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155938u;
label_155938:
    // 0x155938: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155938u;
    {
        const bool branch_taken_0x155938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155938) {
            ctx->pc = 0x155954u;
            goto label_155954;
        }
    }
    ctx->pc = 0x155940u;
label_155940:
    // 0x155940: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155944: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x155944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x155948: 0x27868d38  addiu       $a2, $gp, -0x72C8
    ctx->pc = 0x155948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937912));
    // 0x15594c: 0xc055688  jal         func_155A20
    ctx->pc = 0x15594Cu;
    SET_GPR_U32(ctx, 31, 0x155954u);
    ctx->pc = 0x155A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A20u, 0x15594Cu, 0x155954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155954u;
label_155954:
    // 0x155954: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x155954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155958: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15595c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15595cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15596c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x155970: 0x3e00008  jr          $ra
    ctx->pc = 0x155970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155978u;
    // 0x155978: 0x0  nop
    ctx->pc = 0x155978u;
    // NOP
    // 0x15597c: 0x0  nop
    ctx->pc = 0x15597cu;
    // NOP
    ctx->pc = 0x155980u;
}
