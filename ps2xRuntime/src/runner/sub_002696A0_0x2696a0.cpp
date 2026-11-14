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

// Function: sub_002696A0
// Address: 0x2696a0 - 0x269840
void sub_002696A0_0x2696a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002696A0_0x2696a0");
#endif

    switch (ctx->pc) {
        case 0x2696d4u: goto label_2696d4;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696fcu: goto label_2696fc;
        case 0x269708u: goto label_269708;
        case 0x269714u: goto label_269714;
        case 0x269748u: goto label_269748;
        case 0x269758u: goto label_269758;
        case 0x269770u: goto label_269770;
        case 0x26977cu: goto label_26977c;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697f4u: goto label_2697f4;
        case 0x269810u: goto label_269810;
        default: break;
    }

    ctx->pc = 0x2696a0u;

    // 0x2696a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2696a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2696a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2696a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2696a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2696a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2696ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2696acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2696b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2696b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2696b4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2696b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2696b8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2696b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2696bc: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x2696bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x2696c0: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x2696c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2696c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2696C4u;
    {
        const bool branch_taken_0x2696c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2696c4) {
            ctx->pc = 0x269760u;
            goto label_269760;
        }
    }
    ctx->pc = 0x2696CCu;
    // 0x2696cc: 0xc090864  jal         func_242190
    ctx->pc = 0x2696CCu;
    SET_GPR_U32(ctx, 31, 0x2696D4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2696CCu, 0x2696D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696D4u;
label_2696d4:
    // 0x2696d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2696d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696d8: 0xc090590  jal         func_241640
    ctx->pc = 0x2696D8u;
    SET_GPR_U32(ctx, 31, 0x2696E0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2696D8u, 0x2696E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696E0u;
label_2696e0:
    // 0x2696e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2696e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696e4: 0xc091574  jal         func_2455D0
    ctx->pc = 0x2696E4u;
    SET_GPR_U32(ctx, 31, 0x2696ECu);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x2696E4u, 0x2696ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696ECu;
label_2696ec:
    // 0x2696ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2696ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2696f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696f4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2696F4u;
    SET_GPR_U32(ctx, 31, 0x2696FCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2696F4u, 0x2696FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696FCu;
label_2696fc:
    // 0x2696fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2696fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269700: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x269700u;
    {
        const bool branch_taken_0x269700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269700) {
            ctx->pc = 0x26974Cu;
            goto label_26974c;
        }
    }
    ctx->pc = 0x269708u;
label_269708:
    // 0x269708: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x269708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26970c: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26970Cu;
    SET_GPR_U32(ctx, 31, 0x269714u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26970Cu, 0x269714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269714u;
label_269714:
    // 0x269714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x269714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269718: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x269718u;
    {
        const bool branch_taken_0x269718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x269718) {
            ctx->pc = 0x269734u;
            goto label_269734;
        }
    }
    ctx->pc = 0x269720u;
    // 0x269720: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x269720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x269724: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269724u;
    {
        const bool branch_taken_0x269724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x269724) {
            ctx->pc = 0x269734u;
            goto label_269734;
        }
    }
    ctx->pc = 0x26972Cu;
    // 0x26972c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26972Cu;
    {
        const bool branch_taken_0x26972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26972c) {
            ctx->pc = 0x269748u;
            goto label_269748;
        }
    }
    ctx->pc = 0x269734u;
label_269734:
    // 0x269734: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x269734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x269738: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x269738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26973c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x26973cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269740: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x269740u;
    SET_GPR_U32(ctx, 31, 0x269748u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x269740u, 0x269748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269748u;
label_269748:
    // 0x269748: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x269748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26974c:
    // 0x26974c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269750: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x269750u;
    SET_GPR_U32(ctx, 31, 0x269758u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x269750u, 0x269758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269758u;
label_269758:
    // 0x269758: 0x1622ffeb  bne         $s1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x269758u;
    {
        const bool branch_taken_0x269758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x269758) {
            ctx->pc = 0x269708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269708;
        }
    }
    ctx->pc = 0x269760u;
label_269760:
    // 0x269760: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x269760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269764: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269768: 0xc09a690  jal         func_269A40
    ctx->pc = 0x269768u;
    SET_GPR_U32(ctx, 31, 0x269770u);
    ctx->pc = 0x269A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A40u, 0x269768u, 0x269770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269770u;
label_269770:
    // 0x269770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269774: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x269774u;
    {
        const bool branch_taken_0x269774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269774) {
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x26977Cu;
label_26977c:
    // 0x26977c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26977cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269780: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x269780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269784: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x269784u;
    {
        const bool branch_taken_0x269784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x269784) {
            ctx->pc = 0x2697FCu;
            goto label_2697fc;
        }
    }
    ctx->pc = 0x26978Cu;
    // 0x26978c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x269790: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x269790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x269794: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x269794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x269798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x269798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26979c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26979Cu;
    {
        const bool branch_taken_0x26979c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26979c) {
            ctx->pc = 0x2697B8u;
            goto label_2697b8;
        }
    }
    ctx->pc = 0x2697A4u;
    // 0x2697a4: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x2697a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2697a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2697a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2697ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2697acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2697b0: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2697B0u;
    {
        const bool branch_taken_0x2697b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2697b0) {
            ctx->pc = 0x2697F4u;
            goto label_2697f4;
        }
    }
    ctx->pc = 0x2697B8u;
label_2697b8:
    // 0x2697b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2697b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2697bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2697BCu;
    {
        const bool branch_taken_0x2697bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697bc) {
            ctx->pc = 0x2697E0u;
            goto label_2697e0;
        }
    }
    ctx->pc = 0x2697C4u;
    // 0x2697c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2697c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2697c8: 0xc09a680  jal         func_269A00
    ctx->pc = 0x2697C8u;
    SET_GPR_U32(ctx, 31, 0x2697D0u);
    ctx->pc = 0x269A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A00u, 0x2697C8u, 0x2697D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697D0u;
label_2697d0:
    // 0x2697d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2697d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2697d4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2697D4u;
    SET_GPR_U32(ctx, 31, 0x2697DCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2697D4u, 0x2697DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697DCu;
label_2697dc:
    // 0x2697dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2697dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2697e0:
    // 0x2697e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2697e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2697e4: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x2697e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2697e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2697e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697ec: 0xc09a618  jal         func_269860
    ctx->pc = 0x2697ECu;
    SET_GPR_U32(ctx, 31, 0x2697F4u);
    ctx->pc = 0x269860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269860u, 0x2697ECu, 0x2697F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697F4u;
label_2697f4:
    // 0x2697f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2697F4u;
    {
        const bool branch_taken_0x2697f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697f4) {
            ctx->pc = 0x269818u;
            goto label_269818;
        }
    }
    ctx->pc = 0x2697FCu;
label_2697fc:
    // 0x2697fc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2697fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_269800:
    // 0x269800: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269804: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x269804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x269808: 0xc09a610  jal         func_269840
    ctx->pc = 0x269808u;
    SET_GPR_U32(ctx, 31, 0x269810u);
    ctx->pc = 0x269840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269840u, 0x269808u, 0x269810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269810u;
label_269810:
    // 0x269810: 0x1602ffda  bne         $s0, $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x269810u;
    {
        const bool branch_taken_0x269810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x269810) {
            ctx->pc = 0x26977Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26977c;
        }
    }
    ctx->pc = 0x269818u;
label_269818:
    // 0x269818: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x269818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26981c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26981cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269828: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x269828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26982c: 0x3e00008  jr          $ra
    ctx->pc = 0x26982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269834u;
    // 0x269834: 0x0  nop
    ctx->pc = 0x269834u;
    // NOP
    // 0x269838: 0x0  nop
    ctx->pc = 0x269838u;
    // NOP
    // 0x26983c: 0x0  nop
    ctx->pc = 0x26983cu;
    // NOP
    ctx->pc = 0x269840u;
}
