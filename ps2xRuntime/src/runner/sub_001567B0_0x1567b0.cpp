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

// Function: sub_001567B0
// Address: 0x1567b0 - 0x156920
void sub_001567B0_0x1567b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001567B0_0x1567b0");
#endif

    switch (ctx->pc) {
        case 0x1567b0u: goto label_1567b0;
        case 0x1567b4u: goto label_1567b4;
        case 0x1567b8u: goto label_1567b8;
        case 0x1567bcu: goto label_1567bc;
        case 0x1567c0u: goto label_1567c0;
        case 0x1567c4u: goto label_1567c4;
        case 0x1567c8u: goto label_1567c8;
        case 0x1567ccu: goto label_1567cc;
        case 0x1567d0u: goto label_1567d0;
        case 0x1567d4u: goto label_1567d4;
        case 0x1567d8u: goto label_1567d8;
        case 0x1567dcu: goto label_1567dc;
        case 0x1567e0u: goto label_1567e0;
        case 0x1567e4u: goto label_1567e4;
        case 0x1567e8u: goto label_1567e8;
        case 0x1567ecu: goto label_1567ec;
        case 0x1567f0u: goto label_1567f0;
        case 0x1567f4u: goto label_1567f4;
        case 0x1567f8u: goto label_1567f8;
        case 0x1567fcu: goto label_1567fc;
        case 0x156800u: goto label_156800;
        case 0x156804u: goto label_156804;
        case 0x156808u: goto label_156808;
        case 0x15680cu: goto label_15680c;
        case 0x156810u: goto label_156810;
        case 0x156814u: goto label_156814;
        case 0x156818u: goto label_156818;
        case 0x15681cu: goto label_15681c;
        case 0x156820u: goto label_156820;
        case 0x156824u: goto label_156824;
        case 0x156828u: goto label_156828;
        case 0x15682cu: goto label_15682c;
        case 0x156830u: goto label_156830;
        case 0x156834u: goto label_156834;
        case 0x156838u: goto label_156838;
        case 0x15683cu: goto label_15683c;
        case 0x156840u: goto label_156840;
        case 0x156844u: goto label_156844;
        case 0x156848u: goto label_156848;
        case 0x15684cu: goto label_15684c;
        case 0x156850u: goto label_156850;
        case 0x156854u: goto label_156854;
        case 0x156858u: goto label_156858;
        case 0x15685cu: goto label_15685c;
        case 0x156860u: goto label_156860;
        case 0x156864u: goto label_156864;
        case 0x156868u: goto label_156868;
        case 0x15686cu: goto label_15686c;
        case 0x156870u: goto label_156870;
        case 0x156874u: goto label_156874;
        case 0x156878u: goto label_156878;
        case 0x15687cu: goto label_15687c;
        case 0x156880u: goto label_156880;
        case 0x156884u: goto label_156884;
        case 0x156888u: goto label_156888;
        case 0x15688cu: goto label_15688c;
        case 0x156890u: goto label_156890;
        case 0x156894u: goto label_156894;
        case 0x156898u: goto label_156898;
        case 0x15689cu: goto label_15689c;
        case 0x1568a0u: goto label_1568a0;
        case 0x1568a4u: goto label_1568a4;
        case 0x1568a8u: goto label_1568a8;
        case 0x1568acu: goto label_1568ac;
        case 0x1568b0u: goto label_1568b0;
        case 0x1568b4u: goto label_1568b4;
        case 0x1568b8u: goto label_1568b8;
        case 0x1568bcu: goto label_1568bc;
        case 0x1568c0u: goto label_1568c0;
        case 0x1568c4u: goto label_1568c4;
        case 0x1568c8u: goto label_1568c8;
        case 0x1568ccu: goto label_1568cc;
        case 0x1568d0u: goto label_1568d0;
        case 0x1568d4u: goto label_1568d4;
        case 0x1568d8u: goto label_1568d8;
        case 0x1568dcu: goto label_1568dc;
        case 0x1568e0u: goto label_1568e0;
        case 0x1568e4u: goto label_1568e4;
        case 0x1568e8u: goto label_1568e8;
        case 0x1568ecu: goto label_1568ec;
        case 0x1568f0u: goto label_1568f0;
        case 0x1568f4u: goto label_1568f4;
        case 0x1568f8u: goto label_1568f8;
        case 0x1568fcu: goto label_1568fc;
        case 0x156900u: goto label_156900;
        case 0x156904u: goto label_156904;
        case 0x156908u: goto label_156908;
        case 0x15690cu: goto label_15690c;
        case 0x156910u: goto label_156910;
        case 0x156914u: goto label_156914;
        case 0x156918u: goto label_156918;
        case 0x15691cu: goto label_15691c;
        default: break;
    }

    ctx->pc = 0x1567b0u;

label_1567b0:
    // 0x1567b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1567b4:
    // 0x1567b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1567b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1567b8:
    // 0x1567b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1567b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1567bc:
    // 0x1567bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1567bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1567c0:
    // 0x1567c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1567c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1567c4:
    // 0x1567c4: 0xc08ec70  jal         func_23B1C0
label_1567c8:
    if (ctx->pc == 0x1567C8u) {
        ctx->pc = 0x1567CCu;
        goto label_1567cc;
    }
    ctx->pc = 0x1567C4u;
    SET_GPR_U32(ctx, 31, 0x1567CCu);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x1567C4u, 0x1567CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567CCu;
label_1567cc:
    // 0x1567cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1567ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1567d0:
    // 0x1567d0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1567d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1567d4:
    // 0x1567d4: 0xc055398  jal         func_154E60
label_1567d8:
    if (ctx->pc == 0x1567D8u) {
        ctx->pc = 0x1567DCu;
        goto label_1567dc;
    }
    ctx->pc = 0x1567D4u;
    SET_GPR_U32(ctx, 31, 0x1567DCu);
    ctx->pc = 0x154E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E60u, 0x1567D4u, 0x1567DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567DCu;
label_1567dc:
    // 0x1567dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1567dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1567e0:
    // 0x1567e0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1567e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1567e4:
    // 0x1567e4: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x1567e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_1567e8:
    // 0x1567e8: 0xc055370  jal         func_154DC0
label_1567ec:
    if (ctx->pc == 0x1567ECu) {
        ctx->pc = 0x1567F0u;
        goto label_1567f0;
    }
    ctx->pc = 0x1567E8u;
    SET_GPR_U32(ctx, 31, 0x1567F0u);
    ctx->pc = 0x154DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DC0u, 0x1567E8u, 0x1567F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567F0u;
label_1567f0:
    // 0x1567f0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1567f4:
    // 0x1567f4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x1567f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1567f8:
    // 0x1567f8: 0xc055360  jal         func_154D80
label_1567fc:
    if (ctx->pc == 0x1567FCu) {
        ctx->pc = 0x156800u;
        goto label_156800;
    }
    ctx->pc = 0x1567F8u;
    SET_GPR_U32(ctx, 31, 0x156800u);
    ctx->pc = 0x154D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D80u, 0x1567F8u, 0x156800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156800u;
label_156800:
    // 0x156800: 0x1000001a  b           . + 4 + (0x1A << 2)
label_156804:
    if (ctx->pc == 0x156804u) {
        ctx->pc = 0x156808u;
        goto label_156808;
    }
    ctx->pc = 0x156800u;
    {
        const bool branch_taken_0x156800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156800) {
            ctx->pc = 0x15686Cu;
            goto label_15686c;
        }
    }
    ctx->pc = 0x156808u;
label_156808:
    // 0x156808: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_15680c:
    // 0x15680c: 0xc055358  jal         func_154D60
label_156810:
    if (ctx->pc == 0x156810u) {
        ctx->pc = 0x156814u;
        goto label_156814;
    }
    ctx->pc = 0x15680Cu;
    SET_GPR_U32(ctx, 31, 0x156814u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x15680Cu, 0x156814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156814u;
label_156814:
    // 0x156814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x156814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156818:
    // 0x156818: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_15681c:
    if (ctx->pc == 0x15681Cu) {
        ctx->pc = 0x156820u;
        goto label_156820;
    }
    ctx->pc = 0x156818u;
    {
        const bool branch_taken_0x156818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156818) {
            ctx->pc = 0x156860u;
            goto label_156860;
        }
    }
    ctx->pc = 0x156820u;
label_156820:
    // 0x156820: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_156824:
    // 0x156824: 0xc055358  jal         func_154D60
label_156828:
    if (ctx->pc == 0x156828u) {
        ctx->pc = 0x15682Cu;
        goto label_15682c;
    }
    ctx->pc = 0x156824u;
    SET_GPR_U32(ctx, 31, 0x15682Cu);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x156824u, 0x15682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15682Cu;
label_15682c:
    // 0x15682c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156830:
    // 0x156830: 0xc055a54  jal         func_156950
label_156834:
    if (ctx->pc == 0x156834u) {
        ctx->pc = 0x156838u;
        goto label_156838;
    }
    ctx->pc = 0x156830u;
    SET_GPR_U32(ctx, 31, 0x156838u);
    ctx->pc = 0x156950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156950u, 0x156830u, 0x156838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156838u;
label_156838:
    // 0x156838: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_15683c:
    // 0x15683c: 0xc055358  jal         func_154D60
label_156840:
    if (ctx->pc == 0x156840u) {
        ctx->pc = 0x156844u;
        goto label_156844;
    }
    ctx->pc = 0x15683Cu;
    SET_GPR_U32(ctx, 31, 0x156844u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x15683Cu, 0x156844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156844u;
label_156844:
    // 0x156844: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156848:
    // 0x156848: 0xc119c5c  jal         func_467170
label_15684c:
    if (ctx->pc == 0x15684Cu) {
        ctx->pc = 0x156850u;
        goto label_156850;
    }
    ctx->pc = 0x156848u;
    SET_GPR_U32(ctx, 31, 0x156850u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x156848u, 0x156850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156850u;
label_156850:
    // 0x156850: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_156854:
    // 0x156854: 0xc055358  jal         func_154D60
label_156858:
    if (ctx->pc == 0x156858u) {
        ctx->pc = 0x15685Cu;
        goto label_15685c;
    }
    ctx->pc = 0x156854u;
    SET_GPR_U32(ctx, 31, 0x15685Cu);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x156854u, 0x15685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15685Cu;
label_15685c:
    // 0x15685c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_156860:
    // 0x156860: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_156864:
    // 0x156864: 0xc055348  jal         func_154D20
label_156868:
    if (ctx->pc == 0x156868u) {
        ctx->pc = 0x15686Cu;
        goto label_15686c;
    }
    ctx->pc = 0x156864u;
    SET_GPR_U32(ctx, 31, 0x15686Cu);
    ctx->pc = 0x154D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D20u, 0x156864u, 0x15686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15686Cu;
label_15686c:
    // 0x15686c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156870:
    // 0x156870: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x156870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_156874:
    // 0x156874: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x156874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_156878:
    // 0x156878: 0xc05531c  jal         func_154C70
label_15687c:
    if (ctx->pc == 0x15687Cu) {
        ctx->pc = 0x156880u;
        goto label_156880;
    }
    ctx->pc = 0x156878u;
    SET_GPR_U32(ctx, 31, 0x156880u);
    ctx->pc = 0x154C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154C70u, 0x156878u, 0x156880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156880u;
label_156880:
    // 0x156880: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x156880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_156884:
    // 0x156884: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x156884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_156888:
    // 0x156888: 0xc041998  jal         func_106660
label_15688c:
    if (ctx->pc == 0x15688Cu) {
        ctx->pc = 0x156890u;
        goto label_156890;
    }
    ctx->pc = 0x156888u;
    SET_GPR_U32(ctx, 31, 0x156890u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x156888u, 0x156890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156890u;
label_156890:
    // 0x156890: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_156894:
    if (ctx->pc == 0x156894u) {
        ctx->pc = 0x156898u;
        goto label_156898;
    }
    ctx->pc = 0x156890u;
    {
        const bool branch_taken_0x156890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156890) {
            ctx->pc = 0x156808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156808;
        }
    }
    ctx->pc = 0x156898u;
label_156898:
    // 0x156898: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x156898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_15689c:
    // 0x15689c: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x15689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_1568a0:
    // 0x1568a0: 0xc055a48  jal         func_156920
label_1568a4:
    if (ctx->pc == 0x1568A4u) {
        ctx->pc = 0x1568A8u;
        goto label_1568a8;
    }
    ctx->pc = 0x1568A0u;
    SET_GPR_U32(ctx, 31, 0x1568A8u);
    ctx->pc = 0x156920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156920u, 0x1568A0u, 0x1568A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1568A8u;
label_1568a8:
    // 0x1568a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1568a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1568ac:
    // 0x1568ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1568acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1568b0:
    // 0x1568b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1568b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1568b4:
    // 0x1568b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1568b8:
    // 0x1568b8: 0x320f809  jalr        $t9
label_1568bc:
    if (ctx->pc == 0x1568BCu) {
        ctx->pc = 0x1568C0u;
        goto label_1568c0;
    }
    ctx->pc = 0x1568B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1568C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568B8u, 0x1568C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1568C0u;
label_1568c0:
    // 0x1568c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1568c4:
    // 0x1568c4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1568c8:
    // 0x1568c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1568c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1568cc:
    // 0x1568cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1568d0:
    // 0x1568d0: 0x320f809  jalr        $t9
label_1568d4:
    if (ctx->pc == 0x1568D4u) {
        ctx->pc = 0x1568D8u;
        goto label_1568d8;
    }
    ctx->pc = 0x1568D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1568D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568D0u, 0x1568D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1568D8u;
label_1568d8:
    // 0x1568d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1568dc:
    // 0x1568dc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1568e0:
    // 0x1568e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1568e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1568e4:
    // 0x1568e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1568e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1568e8:
    // 0x1568e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1568ec:
    // 0x1568ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1568f0:
    // 0x1568f0: 0x320f809  jalr        $t9
label_1568f4:
    if (ctx->pc == 0x1568F4u) {
        ctx->pc = 0x1568F8u;
        goto label_1568f8;
    }
    ctx->pc = 0x1568F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1568F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1568F0u, 0x1568F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1568F8u;
label_1568f8:
    // 0x1568f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1568f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1568fc:
    // 0x1568fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_156900:
    // 0x156900: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x156900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
label_156904:
    // 0x156904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_156908:
    // 0x156908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15690c:
    // 0x15690c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15690cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_156910:
    // 0x156910: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x156910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_156914:
    // 0x156914: 0x3e00008  jr          $ra
label_156918:
    if (ctx->pc == 0x156918u) {
        ctx->pc = 0x15691Cu;
        goto label_15691c;
    }
    ctx->pc = 0x156914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15691Cu;
label_15691c:
    // 0x15691c: 0x0  nop
    ctx->pc = 0x15691cu;
    // NOP
    ctx->pc = 0x156920u;
}
