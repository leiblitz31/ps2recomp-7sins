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

// Function: sub_00117710
// Address: 0x117710 - 0x117920
void sub_00117710_0x117710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117710_0x117710");
#endif

    switch (ctx->pc) {
        case 0x11774cu: goto label_11774c;
        case 0x117760u: goto label_117760;
        case 0x117774u: goto label_117774;
        case 0x117784u: goto label_117784;
        case 0x11779cu: goto label_11779c;
        case 0x1177b4u: goto label_1177b4;
        case 0x1177ccu: goto label_1177cc;
        case 0x1177ecu: goto label_1177ec;
        case 0x117804u: goto label_117804;
        case 0x117814u: goto label_117814;
        case 0x11783cu: goto label_11783c;
        case 0x117850u: goto label_117850;
        case 0x117864u: goto label_117864;
        case 0x117870u: goto label_117870;
        case 0x117884u: goto label_117884;
        case 0x11789cu: goto label_11789c;
        case 0x1178c4u: goto label_1178c4;
        case 0x1178d8u: goto label_1178d8;
        case 0x1178f4u: goto label_1178f4;
        default: break;
    }

    ctx->pc = 0x117710u;

    // 0x117710: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x117710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x117714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x117718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x117718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11771c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x117720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x117720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11772c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x11772cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x117730: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x117730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x117734: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x117734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x117738: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x117738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11773c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x11773cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117740: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x117740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117744: 0xc045580  jal         func_115600
    ctx->pc = 0x117744u;
    SET_GPR_U32(ctx, 31, 0x11774Cu);
    ctx->pc = 0x115600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115600u, 0x117744u, 0x11774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11774Cu;
label_11774c:
    // 0x11774c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x11774cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117754: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x117754u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117758: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x117758u;
    {
        const bool branch_taken_0x117758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117758) {
            ctx->pc = 0x1177D4u;
            goto label_1177d4;
        }
    }
    ctx->pc = 0x117760u;
label_117760:
    // 0x117760: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x117760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117764: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x117764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x117768: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x117768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11776c: 0xc045ed8  jal         func_117B60
    ctx->pc = 0x11776Cu;
    SET_GPR_U32(ctx, 31, 0x117774u);
    ctx->pc = 0x117B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B60u, 0x11776Cu, 0x117774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117774u;
label_117774:
    // 0x117774: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x117774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11777c: 0xc045ec8  jal         func_117B20
    ctx->pc = 0x11777Cu;
    SET_GPR_U32(ctx, 31, 0x117784u);
    ctx->pc = 0x117B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B20u, 0x11777Cu, 0x117784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117784u;
label_117784:
    // 0x117784: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x117784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117788: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x117788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x11778c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117790: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x117790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117794: 0xc045ebc  jal         func_117AF0
    ctx->pc = 0x117794u;
    SET_GPR_U32(ctx, 31, 0x11779Cu);
    ctx->pc = 0x117AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AF0u, 0x117794u, 0x11779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11779Cu;
label_11779c:
    // 0x11779c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1177a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1177A0u;
    {
        const bool branch_taken_0x1177a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1177a0) {
            ctx->pc = 0x1177C0u;
            goto label_1177c0;
        }
    }
    ctx->pc = 0x1177A8u;
    // 0x1177a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177ac: 0xc045eb4  jal         func_117AD0
    ctx->pc = 0x1177ACu;
    SET_GPR_U32(ctx, 31, 0x1177B4u);
    ctx->pc = 0x117AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AD0u, 0x1177ACu, 0x1177B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177B4u;
label_1177b4:
    // 0x1177b4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1177b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1177b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1177B8u;
    {
        const bool branch_taken_0x1177b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1177b8) {
            ctx->pc = 0x1177D0u;
            goto label_1177d0;
        }
    }
    ctx->pc = 0x1177C0u;
label_1177c0:
    // 0x1177c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c4: 0xc045eac  jal         func_117AB0
    ctx->pc = 0x1177C4u;
    SET_GPR_U32(ctx, 31, 0x1177CCu);
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x1177C4u, 0x1177CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177CCu;
label_1177cc:
    // 0x1177cc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1177ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1177d0:
    // 0x1177d0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1177d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1177d4:
    // 0x1177d4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1177D4u;
    {
        const bool branch_taken_0x1177d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1177d4) {
            ctx->pc = 0x117760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117760;
        }
    }
    ctx->pc = 0x1177DCu;
    // 0x1177dc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1177dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1177e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1177e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177e4: 0xc045ea0  jal         func_117A80
    ctx->pc = 0x1177E4u;
    SET_GPR_U32(ctx, 31, 0x1177ECu);
    ctx->pc = 0x117A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A80u, 0x1177E4u, 0x1177ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177ECu;
label_1177ec:
    // 0x1177ec: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1177ECu;
    {
        const bool branch_taken_0x1177ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1177ec) {
            ctx->pc = 0x117864u;
            goto label_117864;
        }
    }
    ctx->pc = 0x1177F4u;
    // 0x1177f4: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1177f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1177f8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1177fc: 0xc045e90  jal         func_117A40
    ctx->pc = 0x1177FCu;
    SET_GPR_U32(ctx, 31, 0x117804u);
    ctx->pc = 0x117A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A40u, 0x1177FCu, 0x117804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117804u;
label_117804:
    // 0x117804: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x117808: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x117808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x11780c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x11780Cu;
    SET_GPR_U32(ctx, 31, 0x117814u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x11780Cu, 0x117814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117814u;
label_117814:
    // 0x117814: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x117814u;
    {
        const bool branch_taken_0x117814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117814) {
            ctx->pc = 0x117858u;
            goto label_117858;
        }
    }
    ctx->pc = 0x11781Cu;
    // 0x11781c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x117820: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x117820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117824: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x117824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117828: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x117828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11782c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117834: 0xc0460ec  jal         func_1183B0
    ctx->pc = 0x117834u;
    SET_GPR_U32(ctx, 31, 0x11783Cu);
    ctx->pc = 0x1183B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1183B0u, 0x117834u, 0x11783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11783Cu;
label_11783c:
    // 0x11783c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x11783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117840: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x117840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x117844: 0x278689a8  addiu       $a2, $gp, -0x7658
    ctx->pc = 0x117844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937000));
    // 0x117848: 0xc045e70  jal         func_1179C0
    ctx->pc = 0x117848u;
    SET_GPR_U32(ctx, 31, 0x117850u);
    ctx->pc = 0x1179C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179C0u, 0x117848u, 0x117850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117850u;
label_117850:
    // 0x117850: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x117850u;
    {
        const bool branch_taken_0x117850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117850) {
            ctx->pc = 0x1178F4u;
            goto label_1178f4;
        }
    }
    ctx->pc = 0x117858u;
label_117858:
    // 0x117858: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x117858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x11785c: 0xc045e60  jal         func_117980
    ctx->pc = 0x11785Cu;
    SET_GPR_U32(ctx, 31, 0x117864u);
    ctx->pc = 0x117980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117980u, 0x11785Cu, 0x117864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117864u;
label_117864:
    // 0x117864: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x117864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x117868: 0xc045e48  jal         func_117920
    ctx->pc = 0x117868u;
    SET_GPR_U32(ctx, 31, 0x117870u);
    ctx->pc = 0x117920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117920u, 0x117868u, 0x117870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117870u;
label_117870:
    // 0x117870: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x117870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117874: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x117874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x117878: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x117878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11787c: 0xc045ed8  jal         func_117B60
    ctx->pc = 0x11787Cu;
    SET_GPR_U32(ctx, 31, 0x117884u);
    ctx->pc = 0x117B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B60u, 0x11787Cu, 0x117884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117884u;
label_117884:
    // 0x117884: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x117884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117888: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x11788c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11788cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117890: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x117890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117894: 0xc045ebc  jal         func_117AF0
    ctx->pc = 0x117894u;
    SET_GPR_U32(ctx, 31, 0x11789Cu);
    ctx->pc = 0x117AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AF0u, 0x117894u, 0x11789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11789Cu;
label_11789c:
    // 0x11789c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11789Cu;
    {
        const bool branch_taken_0x11789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11789c) {
            ctx->pc = 0x1178E0u;
            goto label_1178e0;
        }
    }
    ctx->pc = 0x1178A4u;
    // 0x1178a4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1178a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1178a8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1178ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1178acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1178b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178b4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1178b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1178b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1178b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178bc: 0xc0460ec  jal         func_1183B0
    ctx->pc = 0x1178BCu;
    SET_GPR_U32(ctx, 31, 0x1178C4u);
    ctx->pc = 0x1183B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1183B0u, 0x1178BCu, 0x1178C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178C4u;
label_1178c4:
    // 0x1178c4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1178c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1178c8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1178c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1178cc: 0x278689ac  addiu       $a2, $gp, -0x7654
    ctx->pc = 0x1178ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937004));
    // 0x1178d0: 0xc045e70  jal         func_1179C0
    ctx->pc = 0x1178D0u;
    SET_GPR_U32(ctx, 31, 0x1178D8u);
    ctx->pc = 0x1179C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179C0u, 0x1178D0u, 0x1178D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178D8u;
label_1178d8:
    // 0x1178d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1178D8u;
    {
        const bool branch_taken_0x1178d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1178d8) {
            ctx->pc = 0x1178F4u;
            goto label_1178f4;
        }
    }
    ctx->pc = 0x1178E0u;
label_1178e0:
    // 0x1178e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1178e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1178e4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1178e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1178e8: 0x278689b0  addiu       $a2, $gp, -0x7650
    ctx->pc = 0x1178e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937008));
    // 0x1178ec: 0xc045e70  jal         func_1179C0
    ctx->pc = 0x1178ECu;
    SET_GPR_U32(ctx, 31, 0x1178F4u);
    ctx->pc = 0x1179C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179C0u, 0x1178ECu, 0x1178F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178F4u;
label_1178f4:
    // 0x1178f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1178f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1178f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1178f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1178fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1178fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11790c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x11790cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x117910: 0x3e00008  jr          $ra
    ctx->pc = 0x117910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117918u;
    // 0x117918: 0x0  nop
    ctx->pc = 0x117918u;
    // NOP
    // 0x11791c: 0x0  nop
    ctx->pc = 0x11791cu;
    // NOP
    ctx->pc = 0x117920u;
}
