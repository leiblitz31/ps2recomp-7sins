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

// Function: sub_0045A2A0
// Address: 0x45a2a0 - 0x45a560
void sub_0045A2A0_0x45a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A2A0_0x45a2a0");
#endif

    switch (ctx->pc) {
        case 0x45a2f0u: goto label_45a2f0;
        case 0x45a314u: goto label_45a314;
        case 0x45a330u: goto label_45a330;
        case 0x45a350u: goto label_45a350;
        case 0x45a37cu: goto label_45a37c;
        case 0x45a390u: goto label_45a390;
        case 0x45a3a8u: goto label_45a3a8;
        case 0x45a3e4u: goto label_45a3e4;
        case 0x45a404u: goto label_45a404;
        case 0x45a43cu: goto label_45a43c;
        case 0x45a45cu: goto label_45a45c;
        case 0x45a47cu: goto label_45a47c;
        case 0x45a4b8u: goto label_45a4b8;
        case 0x45a4f0u: goto label_45a4f0;
        case 0x45a510u: goto label_45a510;
        case 0x45a540u: goto label_45a540;
        default: break;
    }

    ctx->pc = 0x45a2a0u;

    // 0x45a2a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45a2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45a2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45a2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45a2b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45a2b4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45a2b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45a2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a2bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a2c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45A2C0u;
    {
        const bool branch_taken_0x45a2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a2c0) {
            ctx->pc = 0x45A2D4u;
            goto label_45a2d4;
        }
    }
    ctx->pc = 0x45A2C8u;
    // 0x45a2c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a2cc: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x45A2CCu;
    {
        const bool branch_taken_0x45a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a2cc) {
            ctx->pc = 0x45A544u;
            goto label_45a544;
        }
    }
    ctx->pc = 0x45A2D4u;
label_45a2d4:
    // 0x45a2d4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x45a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a2d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a2dc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x45a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45a2e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a2e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x45a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45a2e8: 0xc116b84  jal         func_45AE10
    ctx->pc = 0x45A2E8u;
    SET_GPR_U32(ctx, 31, 0x45A2F0u);
    ctx->pc = 0x45AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AE10u, 0x45A2E8u, 0x45A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A2F0u;
label_45a2f0:
    // 0x45a2f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45a2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a2f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a2f8: 0x1622001b  bne         $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x45A2F8u;
    {
        const bool branch_taken_0x45a2f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a2f8) {
            ctx->pc = 0x45A368u;
            goto label_45a368;
        }
    }
    ctx->pc = 0x45A300u;
    // 0x45a300: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a304: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a308: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45a308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a30c: 0xc116b5c  jal         func_45AD70
    ctx->pc = 0x45A30Cu;
    SET_GPR_U32(ctx, 31, 0x45A314u);
    ctx->pc = 0x45AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AD70u, 0x45A30Cu, 0x45A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A314u;
label_45a314:
    // 0x45a314: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x45a314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x45a318: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x45A318u;
    {
        const bool branch_taken_0x45a318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a318) {
            ctx->pc = 0x45A35Cu;
            goto label_45a35c;
        }
    }
    ctx->pc = 0x45A320u;
    // 0x45a320: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a324: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x45a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45a328: 0xc116dc0  jal         func_45B700
    ctx->pc = 0x45A328u;
    SET_GPR_U32(ctx, 31, 0x45A330u);
    ctx->pc = 0x45B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B700u, 0x45A328u, 0x45A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A330u;
label_45a330:
    // 0x45a330: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x45A330u;
    {
        const bool branch_taken_0x45a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a330) {
            ctx->pc = 0x45A35Cu;
            goto label_45a35c;
        }
    }
    ctx->pc = 0x45A338u;
    // 0x45a338: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a33c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a340: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45a340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45a344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a348: 0xc116b00  jal         func_45AC00
    ctx->pc = 0x45A348u;
    SET_GPR_U32(ctx, 31, 0x45A350u);
    ctx->pc = 0x45AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AC00u, 0x45A348u, 0x45A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A350u;
label_45a350:
    // 0x45a350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45a354: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x45A354u;
    {
        const bool branch_taken_0x45a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a354) {
            ctx->pc = 0x45A544u;
            goto label_45a544;
        }
    }
    ctx->pc = 0x45A35Cu;
label_45a35c:
    // 0x45a35c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a360: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x45A360u;
    {
        const bool branch_taken_0x45a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a360) {
            ctx->pc = 0x45A544u;
            goto label_45a544;
        }
    }
    ctx->pc = 0x45A368u;
label_45a368:
    // 0x45a368: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a36c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45a370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45a370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a374: 0xc116864  jal         func_45A190
    ctx->pc = 0x45A374u;
    SET_GPR_U32(ctx, 31, 0x45A37Cu);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45A374u, 0x45A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A37Cu;
label_45a37c:
    // 0x45a37c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x45a37cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a380: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a384: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a388: 0xc116ab8  jal         func_45AAE0
    ctx->pc = 0x45A388u;
    SET_GPR_U32(ctx, 31, 0x45A390u);
    ctx->pc = 0x45AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AAE0u, 0x45A388u, 0x45A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A390u;
label_45a390:
    // 0x45a390: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a394: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a398: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a39c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x45a39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a3a0: 0xc11687c  jal         func_45A1F0
    ctx->pc = 0x45A3A0u;
    SET_GPR_U32(ctx, 31, 0x45A3A8u);
    ctx->pc = 0x45A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A1F0u, 0x45A3A0u, 0x45A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A3A8u;
label_45a3a8:
    // 0x45a3a8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x45a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x45a3ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a3b0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x45A3B0u;
    {
        const bool branch_taken_0x45a3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45a3b0) {
            ctx->pc = 0x45A4C0u;
            goto label_45a4c0;
        }
    }
    ctx->pc = 0x45A3B8u;
    // 0x45a3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45a3bc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x45A3BCu;
    {
        const bool branch_taken_0x45a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45a3bc) {
            ctx->pc = 0x45A40Cu;
            goto label_45a40c;
        }
    }
    ctx->pc = 0x45A3C4u;
    // 0x45a3c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x45A3C4u;
    {
        const bool branch_taken_0x45a3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a3c4) {
            ctx->pc = 0x45A3D4u;
            goto label_45a3d4;
        }
    }
    ctx->pc = 0x45A3CCu;
    // 0x45a3cc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x45A3CCu;
    {
        const bool branch_taken_0x45a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a3cc) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A3D4u;
label_45a3d4:
    // 0x45a3d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a3d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a3dc: 0xc116ab8  jal         func_45AAE0
    ctx->pc = 0x45A3DCu;
    SET_GPR_U32(ctx, 31, 0x45A3E4u);
    ctx->pc = 0x45AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AAE0u, 0x45A3DCu, 0x45A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A3E4u;
label_45a3e4:
    // 0x45a3e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x45a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a3e8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x45a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x45a3ec: 0x623826  xor         $a3, $v1, $v0
    ctx->pc = 0x45a3ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x45a3f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a3f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a3f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a3fc: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45A3FCu;
    SET_GPR_U32(ctx, 31, 0x45A404u);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45A3FCu, 0x45A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A404u;
label_45a404:
    // 0x45a404: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x45A404u;
    {
        const bool branch_taken_0x45a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a404) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A40Cu;
label_45a40c:
    // 0x45a40c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x45a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45A410u;
    {
        const bool branch_taken_0x45a410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a410) {
            ctx->pc = 0x45A428u;
            goto label_45a428;
        }
    }
    ctx->pc = 0x45A418u;
    // 0x45a418: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x45a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45a420: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x45A420u;
    {
        const bool branch_taken_0x45a420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a420) {
            ctx->pc = 0x45A484u;
            goto label_45a484;
        }
    }
    ctx->pc = 0x45A428u;
label_45a428:
    // 0x45a428: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a42c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x45a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45a430: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x45a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a434: 0xc116dd8  jal         func_45B760
    ctx->pc = 0x45A434u;
    SET_GPR_U32(ctx, 31, 0x45A43Cu);
    ctx->pc = 0x45B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B760u, 0x45A434u, 0x45A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A43Cu;
label_45a43c:
    // 0x45a43c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45A43Cu;
    {
        const bool branch_taken_0x45a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a43c) {
            ctx->pc = 0x45A464u;
            goto label_45a464;
        }
    }
    ctx->pc = 0x45A444u;
    // 0x45a444: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a448: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a44c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a450: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x45a450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x45a454: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45A454u;
    SET_GPR_U32(ctx, 31, 0x45A45Cu);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45A454u, 0x45A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A45Cu;
label_45a45c:
    // 0x45a45c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x45A45Cu;
    {
        const bool branch_taken_0x45a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a45c) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A464u;
label_45a464:
    // 0x45a464: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a468: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a46c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45a470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a474: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45A474u;
    SET_GPR_U32(ctx, 31, 0x45A47Cu);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45A474u, 0x45A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A47Cu;
label_45a47c:
    // 0x45a47c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x45A47Cu;
    {
        const bool branch_taken_0x45a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a47c) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A484u;
label_45a484:
    // 0x45a484: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x45a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a48c: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x45A48Cu;
    {
        const bool branch_taken_0x45a48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a48c) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A494u;
    // 0x45a494: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a498: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x45a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45a49c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x45a49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x45a4a0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x45a4a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45a4a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a4a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a4ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a4b0: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45A4B0u;
    SET_GPR_U32(ctx, 31, 0x45A4B8u);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45A4B0u, 0x45A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A4B8u;
label_45a4b8:
    // 0x45a4b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x45A4B8u;
    {
        const bool branch_taken_0x45a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a4b8) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A4C0u;
label_45a4c0:
    // 0x45a4c0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x45a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45A4C4u;
    {
        const bool branch_taken_0x45a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a4c4) {
            ctx->pc = 0x45A4DCu;
            goto label_45a4dc;
        }
    }
    ctx->pc = 0x45A4CCu;
    // 0x45a4cc: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x45a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45a4d4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x45A4D4u;
    {
        const bool branch_taken_0x45a4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a4d4) {
            ctx->pc = 0x45A518u;
            goto label_45a518;
        }
    }
    ctx->pc = 0x45A4DCu;
label_45a4dc:
    // 0x45a4dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45a4e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x45a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x45a4e4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x45a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a4e8: 0xc116dd8  jal         func_45B760
    ctx->pc = 0x45A4E8u;
    SET_GPR_U32(ctx, 31, 0x45A4F0u);
    ctx->pc = 0x45B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B760u, 0x45A4E8u, 0x45A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A4F0u;
label_45a4f0:
    // 0x45a4f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x45A4F0u;
    {
        const bool branch_taken_0x45a4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a4f0) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A4F8u;
    // 0x45a4f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a4fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a500: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a504: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45a504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45a508: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45A508u;
    SET_GPR_U32(ctx, 31, 0x45A510u);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45A508u, 0x45A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A510u;
label_45a510:
    // 0x45a510: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45A510u;
    {
        const bool branch_taken_0x45a510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a510) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A518u;
label_45a518:
    // 0x45a518: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x45a518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x45a51c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a520: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x45A520u;
    {
        const bool branch_taken_0x45a520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45a520) {
            ctx->pc = 0x45A540u;
            goto label_45a540;
        }
    }
    ctx->pc = 0x45A528u;
    // 0x45a528: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a52c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x45a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45a530: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45a530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45a534: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45a534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45a538: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45A538u;
    SET_GPR_U32(ctx, 31, 0x45A540u);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45A538u, 0x45A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45A540u;
label_45a540:
    // 0x45a540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a544:
    // 0x45a544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45a548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45a548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a550: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45a554: 0x3e00008  jr          $ra
    ctx->pc = 0x45A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A55Cu;
    // 0x45a55c: 0x0  nop
    ctx->pc = 0x45a55cu;
    // NOP
    ctx->pc = 0x45a560u;
}
