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

// Function: sub_00109750
// Address: 0x109750 - 0x109960
void sub_00109750_0x109750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109750_0x109750");
#endif

    switch (ctx->pc) {
        case 0x10978cu: goto label_10978c;
        case 0x1097a0u: goto label_1097a0;
        case 0x1097b4u: goto label_1097b4;
        case 0x1097c4u: goto label_1097c4;
        case 0x1097dcu: goto label_1097dc;
        case 0x1097f4u: goto label_1097f4;
        case 0x10980cu: goto label_10980c;
        case 0x10982cu: goto label_10982c;
        case 0x109844u: goto label_109844;
        case 0x109854u: goto label_109854;
        case 0x10987cu: goto label_10987c;
        case 0x109890u: goto label_109890;
        case 0x1098a4u: goto label_1098a4;
        case 0x1098b0u: goto label_1098b0;
        case 0x1098c4u: goto label_1098c4;
        case 0x1098dcu: goto label_1098dc;
        case 0x109904u: goto label_109904;
        case 0x109918u: goto label_109918;
        case 0x109934u: goto label_109934;
        default: break;
    }

    ctx->pc = 0x109750u;

    // 0x109750: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x109750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x109754: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x109758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x109758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x10975c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x109760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x109760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x109764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x109768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10976c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x10976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x109770: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x109770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x109774: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x109774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x109778: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x109778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10977c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10977cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109780: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x109780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109784: 0xc04186c  jal         func_1061B0
    ctx->pc = 0x109784u;
    SET_GPR_U32(ctx, 31, 0x10978Cu);
    ctx->pc = 0x1061B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061B0u, 0x109784u, 0x10978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10978Cu;
label_10978c:
    // 0x10978c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10978cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109794: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x109794u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x109798: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x109798u;
    {
        const bool branch_taken_0x109798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109798) {
            ctx->pc = 0x109814u;
            goto label_109814;
        }
    }
    ctx->pc = 0x1097A0u;
label_1097a0:
    // 0x1097a0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1097a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097a4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1097a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1097a8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1097a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1097ac: 0xc0426fc  jal         func_109BF0
    ctx->pc = 0x1097ACu;
    SET_GPR_U32(ctx, 31, 0x1097B4u);
    ctx->pc = 0x109BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BF0u, 0x1097ACu, 0x1097B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097B4u;
label_1097b4:
    // 0x1097b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1097b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1097b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097bc: 0xc0426ec  jal         func_109BB0
    ctx->pc = 0x1097BCu;
    SET_GPR_U32(ctx, 31, 0x1097C4u);
    ctx->pc = 0x109BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BB0u, 0x1097BCu, 0x1097C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097C4u;
label_1097c4:
    // 0x1097c4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1097c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1097c8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1097c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1097cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1097ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1097d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097d4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x1097D4u;
    SET_GPR_U32(ctx, 31, 0x1097DCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x1097D4u, 0x1097DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097DCu;
label_1097dc:
    // 0x1097dc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1097dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1097e0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1097E0u;
    {
        const bool branch_taken_0x1097e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1097e0) {
            ctx->pc = 0x109800u;
            goto label_109800;
        }
    }
    ctx->pc = 0x1097E8u;
    // 0x1097e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1097e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097ec: 0xc0426d0  jal         func_109B40
    ctx->pc = 0x1097ECu;
    SET_GPR_U32(ctx, 31, 0x1097F4u);
    ctx->pc = 0x109B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B40u, 0x1097ECu, 0x1097F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097F4u;
label_1097f4:
    // 0x1097f4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1097f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1097f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1097F8u;
    {
        const bool branch_taken_0x1097f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1097f8) {
            ctx->pc = 0x109810u;
            goto label_109810;
        }
    }
    ctx->pc = 0x109800u;
label_109800:
    // 0x109800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109804: 0xc0426c8  jal         func_109B20
    ctx->pc = 0x109804u;
    SET_GPR_U32(ctx, 31, 0x10980Cu);
    ctx->pc = 0x109B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B20u, 0x109804u, 0x10980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10980Cu;
label_10980c:
    // 0x10980c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x10980cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_109810:
    // 0x109810: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x109810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_109814:
    // 0x109814: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x109814u;
    {
        const bool branch_taken_0x109814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x109814) {
            ctx->pc = 0x1097A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1097a0;
        }
    }
    ctx->pc = 0x10981Cu;
    // 0x10981c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x10981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x109820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109824: 0xc0426bc  jal         func_109AF0
    ctx->pc = 0x109824u;
    SET_GPR_U32(ctx, 31, 0x10982Cu);
    ctx->pc = 0x109AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109AF0u, 0x109824u, 0x10982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10982Cu;
label_10982c:
    // 0x10982c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x10982Cu;
    {
        const bool branch_taken_0x10982c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10982c) {
            ctx->pc = 0x1098A4u;
            goto label_1098a4;
        }
    }
    ctx->pc = 0x109834u;
    // 0x109834: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x109834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x109838: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x109838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10983c: 0xc0426ac  jal         func_109AB0
    ctx->pc = 0x10983Cu;
    SET_GPR_U32(ctx, 31, 0x109844u);
    ctx->pc = 0x109AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109AB0u, 0x10983Cu, 0x109844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109844u;
label_109844:
    // 0x109844: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x109844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x109848: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x109848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x10984c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x10984Cu;
    SET_GPR_U32(ctx, 31, 0x109854u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x10984Cu, 0x109854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109854u;
label_109854:
    // 0x109854: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109854u;
    {
        const bool branch_taken_0x109854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109854) {
            ctx->pc = 0x109898u;
            goto label_109898;
        }
    }
    ctx->pc = 0x10985Cu;
    // 0x10985c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x10985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109860: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x109860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109864: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x109864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109868: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10986c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x10986cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109874: 0xc042788  jal         func_109E20
    ctx->pc = 0x109874u;
    SET_GPR_U32(ctx, 31, 0x10987Cu);
    ctx->pc = 0x109E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109E20u, 0x109874u, 0x10987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10987Cu;
label_10987c:
    // 0x10987c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x10987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109880: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x109880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109884: 0x278684d8  addiu       $a2, $gp, -0x7B28
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935768));
    // 0x109888: 0xc042680  jal         func_109A00
    ctx->pc = 0x109888u;
    SET_GPR_U32(ctx, 31, 0x109890u);
    ctx->pc = 0x109A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A00u, 0x109888u, 0x109890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109890u;
label_109890:
    // 0x109890: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x109890u;
    {
        const bool branch_taken_0x109890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109890) {
            ctx->pc = 0x109934u;
            goto label_109934;
        }
    }
    ctx->pc = 0x109898u;
label_109898:
    // 0x109898: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x10989c: 0xc042670  jal         func_1099C0
    ctx->pc = 0x10989Cu;
    SET_GPR_U32(ctx, 31, 0x1098A4u);
    ctx->pc = 0x1099C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1099C0u, 0x10989Cu, 0x1098A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098A4u;
label_1098a4:
    // 0x1098a4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1098a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1098a8: 0xc042658  jal         func_109960
    ctx->pc = 0x1098A8u;
    SET_GPR_U32(ctx, 31, 0x1098B0u);
    ctx->pc = 0x109960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109960u, 0x1098A8u, 0x1098B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098B0u;
label_1098b0:
    // 0x1098b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1098b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098b4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1098b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1098b8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1098b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1098bc: 0xc0426fc  jal         func_109BF0
    ctx->pc = 0x1098BCu;
    SET_GPR_U32(ctx, 31, 0x1098C4u);
    ctx->pc = 0x109BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BF0u, 0x1098BCu, 0x1098C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098C4u;
label_1098c4:
    // 0x1098c4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1098c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1098c8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1098c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1098cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1098ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1098d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098d4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x1098D4u;
    SET_GPR_U32(ctx, 31, 0x1098DCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x1098D4u, 0x1098DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098DCu;
label_1098dc:
    // 0x1098dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1098DCu;
    {
        const bool branch_taken_0x1098dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1098dc) {
            ctx->pc = 0x109920u;
            goto label_109920;
        }
    }
    ctx->pc = 0x1098E4u;
    // 0x1098e4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1098e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1098e8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1098e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1098ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1098ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1098f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098f4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1098f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1098f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1098f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098fc: 0xc042788  jal         func_109E20
    ctx->pc = 0x1098FCu;
    SET_GPR_U32(ctx, 31, 0x109904u);
    ctx->pc = 0x109E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109E20u, 0x1098FCu, 0x109904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109904u;
label_109904:
    // 0x109904: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109908: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x109908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x10990c: 0x278684dc  addiu       $a2, $gp, -0x7B24
    ctx->pc = 0x10990cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935772));
    // 0x109910: 0xc042680  jal         func_109A00
    ctx->pc = 0x109910u;
    SET_GPR_U32(ctx, 31, 0x109918u);
    ctx->pc = 0x109A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A00u, 0x109910u, 0x109918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109918u;
label_109918:
    // 0x109918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x109918u;
    {
        const bool branch_taken_0x109918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109918) {
            ctx->pc = 0x109934u;
            goto label_109934;
        }
    }
    ctx->pc = 0x109920u;
label_109920:
    // 0x109920: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109924: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x109924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x109928: 0x278684e0  addiu       $a2, $gp, -0x7B20
    ctx->pc = 0x109928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935776));
    // 0x10992c: 0xc042680  jal         func_109A00
    ctx->pc = 0x10992Cu;
    SET_GPR_U32(ctx, 31, 0x109934u);
    ctx->pc = 0x109A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A00u, 0x10992Cu, 0x109934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109934u;
label_109934:
    // 0x109934: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109938: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x109938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10993c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10993cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x109940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10994c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x10994cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x109950: 0x3e00008  jr          $ra
    ctx->pc = 0x109950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109958u;
    // 0x109958: 0x0  nop
    ctx->pc = 0x109958u;
    // NOP
    // 0x10995c: 0x0  nop
    ctx->pc = 0x10995cu;
    // NOP
    ctx->pc = 0x109960u;
}
