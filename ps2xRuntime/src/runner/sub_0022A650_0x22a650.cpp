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

// Function: sub_0022A650
// Address: 0x22a650 - 0x22ac40
void sub_0022A650_0x22a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A650_0x22a650");
#endif

    switch (ctx->pc) {
        case 0x22a694u: goto label_22a694;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a6d4u: goto label_22a6d4;
        case 0x22a700u: goto label_22a700;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a730u: goto label_22a730;
        case 0x22a748u: goto label_22a748;
        case 0x22a754u: goto label_22a754;
        case 0x22a760u: goto label_22a760;
        case 0x22a77cu: goto label_22a77c;
        case 0x22a794u: goto label_22a794;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7c0u: goto label_22a7c0;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a7f0u: goto label_22a7f0;
        case 0x22a808u: goto label_22a808;
        case 0x22a820u: goto label_22a820;
        case 0x22a834u: goto label_22a834;
        case 0x22a844u: goto label_22a844;
        case 0x22a8dcu: goto label_22a8dc;
        case 0x22a8f4u: goto label_22a8f4;
        case 0x22a900u: goto label_22a900;
        case 0x22a92cu: goto label_22a92c;
        case 0x22a968u: goto label_22a968;
        case 0x22a974u: goto label_22a974;
        case 0x22a990u: goto label_22a990;
        case 0x22a9b4u: goto label_22a9b4;
        case 0x22a9d0u: goto label_22a9d0;
        case 0x22a9e8u: goto label_22a9e8;
        case 0x22a9f8u: goto label_22a9f8;
        case 0x22aa10u: goto label_22aa10;
        case 0x22aa24u: goto label_22aa24;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aae0u: goto label_22aae0;
        case 0x22aaf4u: goto label_22aaf4;
        case 0x22ab24u: goto label_22ab24;
        case 0x22ab38u: goto label_22ab38;
        case 0x22ab70u: goto label_22ab70;
        case 0x22abb4u: goto label_22abb4;
        case 0x22abc8u: goto label_22abc8;
        case 0x22abecu: goto label_22abec;
        case 0x22ac00u: goto label_22ac00;
        default: break;
    }

    ctx->pc = 0x22a650u;

    // 0x22a650: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x22a654: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22a658: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x22a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x22a65c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22a65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22a660: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22a664: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22a668: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22a66c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a67c: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x22a67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x22a680: 0xafa50240  sw          $a1, 0x240($sp)
    ctx->pc = 0x22a680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 5));
    // 0x22a684: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x22a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x22a688: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x22a688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x22a68c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x22A68Cu;
    SET_GPR_U32(ctx, 31, 0x22A694u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x22A68Cu, 0x22A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A694u;
label_22a694:
    // 0x22a694: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x22a694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x22a698: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x22a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x22a69c: 0xc0bc510  jal         func_2F1440
    ctx->pc = 0x22A69Cu;
    SET_GPR_U32(ctx, 31, 0x22A6A4u);
    ctx->pc = 0x2F1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1440u, 0x22A69Cu, 0x22A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6A4u;
label_22a6a4:
    // 0x22a6a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a6a8: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x22a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x22a6ac: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x22a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x22a6b0: 0x27859cf8  addiu       $a1, $gp, -0x6308
    ctx->pc = 0x22a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941944));
    // 0x22a6b4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x22A6B4u;
    SET_GPR_U32(ctx, 31, 0x22A6BCu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x22A6B4u, 0x22A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6BCu;
label_22a6bc:
    // 0x22a6bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a6c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a6c8: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x22a6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x22a6cc: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x22A6CCu;
    SET_GPR_U32(ctx, 31, 0x22A6D4u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x22A6CCu, 0x22A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A6D4u;
label_22a6d4:
    // 0x22a6d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6d8: 0x14100003  bne         $zero, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A6D8u;
    {
        const bool branch_taken_0x22a6d8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x22a6d8) {
            ctx->pc = 0x22A6E8u;
            goto label_22a6e8;
        }
    }
    ctx->pc = 0x22A6E0u;
    // 0x22a6e0: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x22A6E0u;
    {
        const bool branch_taken_0x22a6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a6e0) {
            ctx->pc = 0x22AC04u;
            goto label_22ac04;
        }
    }
    ctx->pc = 0x22A6E8u;
label_22a6e8:
    // 0x22a6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6ec: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x22a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x22a6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a6f8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x22A6F8u;
    SET_GPR_U32(ctx, 31, 0x22A700u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x22A6F8u, 0x22A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A700u;
label_22a700:
    // 0x22a700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a704: 0xc103236  jal         func_40C8D8
    ctx->pc = 0x22A704u;
    SET_GPR_U32(ctx, 31, 0x22A70Cu);
    ctx->pc = 0x40C8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C8D8u, 0x22A704u, 0x22A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A70Cu;
label_22a70c:
    // 0x22a70c: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x22a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x22a710: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x22a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x22a714: 0xc10329a  jal         func_40CA68
    ctx->pc = 0x22A714u;
    SET_GPR_U32(ctx, 31, 0x22A71Cu);
    ctx->pc = 0x40CA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA68u, 0x22A714u, 0x22A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A71Cu;
label_22a71c:
    // 0x22a71c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22a720: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x22a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x22a724: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x22a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x22a728: 0xc103290  jal         func_40CA40
    ctx->pc = 0x22A728u;
    SET_GPR_U32(ctx, 31, 0x22A730u);
    ctx->pc = 0x40CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CA40u, 0x22A728u, 0x22A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A730u;
label_22a730:
    // 0x22a730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a734: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x22a734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22a738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a73c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a740: 0xc103322  jal         func_40CC88
    ctx->pc = 0x22A740u;
    SET_GPR_U32(ctx, 31, 0x22A748u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x22A740u, 0x22A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A748u;
label_22a748:
    // 0x22a748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a74c: 0xc1058bc  jal         func_4162F0
    ctx->pc = 0x22A74Cu;
    SET_GPR_U32(ctx, 31, 0x22A754u);
    ctx->pc = 0x4162F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162F0u, 0x22A74Cu, 0x22A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A754u;
label_22a754:
    // 0x22a754: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x22a754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x22a758: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x22A758u;
    SET_GPR_U32(ctx, 31, 0x22A760u);
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x22A758u, 0x22A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A760u;
label_22a760:
    // 0x22a760: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x22a760u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a764: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x22a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x22a768: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x22a768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x22a76c: 0x24a56da0  addiu       $a1, $a1, 0x6DA0
    ctx->pc = 0x22a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28064));
    // 0x22a770: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x22a770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a774: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x22A774u;
    SET_GPR_U32(ctx, 31, 0x22A77Cu);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x22A774u, 0x22A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A77Cu;
label_22a77c:
    // 0x22a77c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x22a77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a780: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x22a780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x22a784: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x22a784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
    // 0x22a788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a78c: 0xc1082d8  jal         func_420B60
    ctx->pc = 0x22A78Cu;
    SET_GPR_U32(ctx, 31, 0x22A794u);
    ctx->pc = 0x420B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B60u, 0x22A78Cu, 0x22A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A794u;
label_22a794:
    // 0x22a794: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x22a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x22a798: 0xc1081de  jal         func_420778
    ctx->pc = 0x22A798u;
    SET_GPR_U32(ctx, 31, 0x22A7A0u);
    ctx->pc = 0x420778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420778u, 0x22A798u, 0x22A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7A0u;
label_22a7a0:
    // 0x22a7a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7a4: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x22a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x22a7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7ac: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22a7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7b8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x22A7B8u;
    SET_GPR_U32(ctx, 31, 0x22A7C0u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x22A7B8u, 0x22A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7C0u;
label_22a7c0:
    // 0x22a7c0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22A7C0u;
    {
        const bool branch_taken_0x22a7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a7c0) {
            ctx->pc = 0x22A810u;
            goto label_22a810;
        }
    }
    ctx->pc = 0x22A7C8u;
    // 0x22a7c8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x22a7cc: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x22a7d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7d4: 0xc0f03b6  jal         func_3C0ED8
    ctx->pc = 0x22A7D4u;
    SET_GPR_U32(ctx, 31, 0x22A7DCu);
    ctx->pc = 0x3C0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0ED8u, 0x22A7D4u, 0x22A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7DCu;
label_22a7dc:
    // 0x22a7dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a7dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a7e0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x22a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x22a7e4: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x22a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x22a7e8: 0xc0f0600  jal         func_3C1800
    ctx->pc = 0x22A7E8u;
    SET_GPR_U32(ctx, 31, 0x22A7F0u);
    ctx->pc = 0x3C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1800u, 0x22A7E8u, 0x22A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A7F0u;
label_22a7f0:
    // 0x22a7f0: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x22a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x22a7f4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x22a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x22a7f8: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x22a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x22a7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a800: 0xc0f0602  jal         func_3C1808
    ctx->pc = 0x22A800u;
    SET_GPR_U32(ctx, 31, 0x22A808u);
    ctx->pc = 0x3C1808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1808u, 0x22A800u, 0x22A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A808u;
label_22a808:
    // 0x22a808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22A808u;
    {
        const bool branch_taken_0x22a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a808) {
            ctx->pc = 0x22A838u;
            goto label_22a838;
        }
    }
    ctx->pc = 0x22A810u;
label_22a810:
    // 0x22a810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a818: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x22A818u;
    SET_GPR_U32(ctx, 31, 0x22A820u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x22A818u, 0x22A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A820u;
label_22a820:
    // 0x22a820: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a828: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x22a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x22a82c: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x22A82Cu;
    SET_GPR_U32(ctx, 31, 0x22A834u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x22A82Cu, 0x22A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A834u;
label_22a834:
    // 0x22a834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a838:
    // 0x22a838: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22a838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a83c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x22A83Cu;
    {
        const bool branch_taken_0x22a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a83c) {
            ctx->pc = 0x22ABCCu;
            goto label_22abcc;
        }
    }
    ctx->pc = 0x22A844u;
label_22a844:
    // 0x22a844: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x22a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22a848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a84c: 0x0  nop
    ctx->pc = 0x22a84cu;
    // NOP
    // 0x22a850: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22a850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22a854: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x22a854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x22a858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a85c: 0x0  nop
    ctx->pc = 0x22a85cu;
    // NOP
    // 0x22a860: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22a860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22a864: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x22a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x22a868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a86c: 0x0  nop
    ctx->pc = 0x22a86cu;
    // NOP
    // 0x22a870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22a874: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22a874u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x22a878: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x22a87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a880: 0x0  nop
    ctx->pc = 0x22a880u;
    // NOP
    // 0x22a884: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22a884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22a888: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x22a888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x22a88c: 0xc7a10218  lwc1        $f1, 0x218($sp)
    ctx->pc = 0x22a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a890: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x22a894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a898: 0x0  nop
    ctx->pc = 0x22a898u;
    // NOP
    // 0x22a89c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22a89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a8a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22A8A0u;
    {
        const bool branch_taken_0x22a8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a8a0) {
            ctx->pc = 0x22A8B8u;
            goto label_22a8b8;
        }
    }
    ctx->pc = 0x22A8A8u;
    // 0x22a8a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22a8ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x22a8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x22a8b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22A8B0u;
    {
        const bool branch_taken_0x22a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a8b0) {
            ctx->pc = 0x22A8CCu;
            goto label_22a8cc;
        }
    }
    ctx->pc = 0x22A8B8u;
label_22a8b8:
    // 0x22a8b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x22a8b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22a8bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a8bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22a8c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x22a8c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x22a8c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22a8c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x22a8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_22a8cc:
    // 0x22a8cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22a8d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8d4: 0xc08d48c  jal         func_235230
    ctx->pc = 0x22A8D4u;
    SET_GPR_U32(ctx, 31, 0x22A8DCu);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x22A8D4u, 0x22A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8DCu;
label_22a8dc:
    // 0x22a8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8e0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x22a8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8ec: 0xc103322  jal         func_40CC88
    ctx->pc = 0x22A8ECu;
    SET_GPR_U32(ctx, 31, 0x22A8F4u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x22A8ECu, 0x22A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8F4u;
label_22a8f4:
    // 0x22a8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8f8: 0xc105146  jal         func_414518
    ctx->pc = 0x22A8F8u;
    SET_GPR_U32(ctx, 31, 0x22A900u);
    ctx->pc = 0x414518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414518u, 0x22A8F8u, 0x22A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A900u;
label_22a900:
    // 0x22a900: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x22a900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a904: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x22a904u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a908: 0x12c0003b  beqz        $s6, . + 4 + (0x3B << 2)
    ctx->pc = 0x22A908u;
    {
        const bool branch_taken_0x22a908 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a908) {
            ctx->pc = 0x22A9F8u;
            goto label_22a9f8;
        }
    }
    ctx->pc = 0x22A910u;
    // 0x22a910: 0x16200039  bnez        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x22A910u;
    {
        const bool branch_taken_0x22a910 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a910) {
            ctx->pc = 0x22A9F8u;
            goto label_22a9f8;
        }
    }
    ctx->pc = 0x22A918u;
    // 0x22a918: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x22a91c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22a920: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A920u;
    {
        const bool branch_taken_0x22a920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a920) {
            ctx->pc = 0x22A948u;
            goto label_22a948;
        }
    }
    ctx->pc = 0x22A928u;
    // 0x22a928: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x22a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_22a92c:
    // 0x22a92c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22a92cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22a930: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22a934: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22a938: 0x0  nop
    ctx->pc = 0x22a938u;
    // NOP
    // 0x22a93c: 0x0  nop
    ctx->pc = 0x22a93cu;
    // NOP
    // 0x22a940: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22A940u;
    {
        const bool branch_taken_0x22a940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a940) {
            ctx->pc = 0x22A92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a92c;
        }
    }
    ctx->pc = 0x22A948u;
label_22a948:
    // 0x22a948: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x22a94c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x22a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x22a950: 0x24a5b8f0  addiu       $a1, $a1, -0x4710
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949104));
    // 0x22a954: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x22a958: 0x24c6b910  addiu       $a2, $a2, -0x46F0
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949136));
    // 0x22a95c: 0x26c70001  addiu       $a3, $s6, 0x1
    ctx->pc = 0x22a95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x22a960: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x22A960u;
    SET_GPR_U32(ctx, 31, 0x22A968u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x22A960u, 0x22A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A968u;
label_22a968:
    // 0x22a968: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x22a96c: 0xc0f0b92  jal         func_3C2E48
    ctx->pc = 0x22A96Cu;
    SET_GPR_U32(ctx, 31, 0x22A974u);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x22A96Cu, 0x22A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A974u;
label_22a974:
    // 0x22a974: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22A974u;
    {
        const bool branch_taken_0x22a974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a974) {
            ctx->pc = 0x22A9F8u;
            goto label_22a9f8;
        }
    }
    ctx->pc = 0x22A97Cu;
    // 0x22a97c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a984: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x22a988: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x22A988u;
    SET_GPR_U32(ctx, 31, 0x22A990u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x22A988u, 0x22A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A990u;
label_22a990:
    // 0x22a990: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22a990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a994: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x22A994u;
    {
        const bool branch_taken_0x22a994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a994) {
            ctx->pc = 0x22A9F8u;
            goto label_22a9f8;
        }
    }
    ctx->pc = 0x22A99Cu;
    // 0x22a99c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9a0: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x22a9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22a9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9ac: 0xc103322  jal         func_40CC88
    ctx->pc = 0x22A9ACu;
    SET_GPR_U32(ctx, 31, 0x22A9B4u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x22A9ACu, 0x22A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9B4u;
label_22a9b4:
    // 0x22a9b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22A9B4u;
    {
        const bool branch_taken_0x22a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a9b4) {
            ctx->pc = 0x22A9E8u;
            goto label_22a9e8;
        }
    }
    ctx->pc = 0x22A9BCu;
    // 0x22a9bc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x22a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x22a9c0: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x22a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x22a9c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9c8: 0xc0f03b6  jal         func_3C0ED8
    ctx->pc = 0x22A9C8u;
    SET_GPR_U32(ctx, 31, 0x22A9D0u);
    ctx->pc = 0x3C0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0ED8u, 0x22A9C8u, 0x22A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9D0u;
label_22a9d0:
    // 0x22a9d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x22a9d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9d4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x22a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x22a9d8: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x22a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x22a9dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9e0: 0xc0f0602  jal         func_3C1808
    ctx->pc = 0x22A9E0u;
    SET_GPR_U32(ctx, 31, 0x22A9E8u);
    ctx->pc = 0x3C1808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1808u, 0x22A9E0u, 0x22A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9E8u;
label_22a9e8:
    // 0x22a9e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9f0: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x22A9F0u;
    SET_GPR_U32(ctx, 31, 0x22A9F8u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x22A9F0u, 0x22A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9F8u;
label_22a9f8:
    // 0x22a9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9fc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x22a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22aa00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22aa00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22aa04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa08: 0xc103322  jal         func_40CC88
    ctx->pc = 0x22AA08u;
    SET_GPR_U32(ctx, 31, 0x22AA10u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x22AA08u, 0x22AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA10u;
label_22aa10:
    // 0x22aa10: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x22AA10u;
    {
        const bool branch_taken_0x22aa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa10) {
            ctx->pc = 0x22ABC8u;
            goto label_22abc8;
        }
    }
    ctx->pc = 0x22AA18u;
    // 0x22aa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa1c: 0xc0e237c  jal         func_388DF0
    ctx->pc = 0x22AA1Cu;
    SET_GPR_U32(ctx, 31, 0x22AA24u);
    ctx->pc = 0x388DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388DF0u, 0x22AA1Cu, 0x22AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA24u;
label_22aa24:
    // 0x22aa24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22aa24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22aa2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22aa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa30: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x22AA30u;
    SET_GPR_U32(ctx, 31, 0x22AA38u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x22AA30u, 0x22AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA38u;
label_22aa38:
    // 0x22aa38: 0x83a200a0  lb          $v0, 0xA0($sp)
    ctx->pc = 0x22aa38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22aa3c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x22aa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x22aa40: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x22aa40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x22aa44: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x22aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x22aa48: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22AA48u;
    {
        const bool branch_taken_0x22aa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aa48) {
            ctx->pc = 0x22AAC0u;
            goto label_22aac0;
        }
    }
    ctx->pc = 0x22AA50u;
    // 0x22aa50: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x22aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x22aa54: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22AA54u;
    {
        const bool branch_taken_0x22aa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aa54) {
            ctx->pc = 0x22AAA8u;
            goto label_22aaa8;
        }
    }
    ctx->pc = 0x22AA5Cu;
    // 0x22aa5c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x22aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x22aa60: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22AA60u;
    {
        const bool branch_taken_0x22aa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aa60) {
            ctx->pc = 0x22AA94u;
            goto label_22aa94;
        }
    }
    ctx->pc = 0x22AA68u;
    // 0x22aa68: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x22aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x22aa6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AA6Cu;
    {
        const bool branch_taken_0x22aa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aa6c) {
            ctx->pc = 0x22AA7Cu;
            goto label_22aa7c;
        }
    }
    ctx->pc = 0x22AA74u;
    // 0x22aa74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22AA74u;
    {
        const bool branch_taken_0x22aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa74) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AA7Cu;
label_22aa7c:
    // 0x22aa7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22aa80: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x22aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x22aa84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aa88: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22aa88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22aa8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22AA8Cu;
    {
        const bool branch_taken_0x22aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa8c) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AA94u;
label_22aa94:
    // 0x22aa94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22aa98: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x22aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x22aa9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22aa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aaa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22AAA0u;
    {
        const bool branch_taken_0x22aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aaa0) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AAA8u;
label_22aaa8:
    // 0x22aaa8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22aaac: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x22aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x22aab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aab4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22aab4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22aab8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22AAB8u;
    {
        const bool branch_taken_0x22aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aab8) {
            ctx->pc = 0x22AAD0u;
            goto label_22aad0;
        }
    }
    ctx->pc = 0x22AAC0u;
label_22aac0:
    // 0x22aac0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22aac4: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x22aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x22aac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aacc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22aaccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22aad0:
    // 0x22aad0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x22aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x22aad4: 0x27a500a1  addiu       $a1, $sp, 0xA1
    ctx->pc = 0x22aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 161));
    // 0x22aad8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x22AAD8u;
    SET_GPR_U32(ctx, 31, 0x22AAE0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x22AAD8u, 0x22AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAE0u;
label_22aae0:
    // 0x22aae0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22aae4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x22aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x22aae8: 0x24a5b930  addiu       $a1, $a1, -0x46D0
    ctx->pc = 0x22aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949168));
    // 0x22aaec: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x22AAECu;
    SET_GPR_U32(ctx, 31, 0x22AAF4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x22AAECu, 0x22AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAF4u;
label_22aaf4:
    // 0x22aaf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AAF4u;
    {
        const bool branch_taken_0x22aaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aaf4) {
            ctx->pc = 0x22AB0Cu;
            goto label_22ab0c;
        }
    }
    ctx->pc = 0x22AAFCu;
    // 0x22aafc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22ab00: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x22ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x22ab04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab08: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22ab08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22ab0c:
    // 0x22ab0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x22ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x22ab14: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x22ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x22ab18: 0x27a60214  addiu       $a2, $sp, 0x214
    ctx->pc = 0x22ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    // 0x22ab1c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x22AB1Cu;
    SET_GPR_U32(ctx, 31, 0x22AB24u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x22AB1Cu, 0x22AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB24u;
label_22ab24:
    // 0x22ab24: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AB24u;
    {
        const bool branch_taken_0x22ab24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab24) {
            ctx->pc = 0x22AB38u;
            goto label_22ab38;
        }
    }
    ctx->pc = 0x22AB2Cu;
    // 0x22ab2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab30: 0xc124efc  jal         func_493BF0
    ctx->pc = 0x22AB30u;
    SET_GPR_U32(ctx, 31, 0x22AB38u);
    ctx->pc = 0x493BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493BF0u, 0x22AB30u, 0x22AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB38u;
label_22ab38:
    // 0x22ab38: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x22ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x22ab3c: 0xafb300c4  sw          $s3, 0xC4($sp)
    ctx->pc = 0x22ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 19));
    // 0x22ab40: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x22ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x22ab44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ab48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AB48u;
    {
        const bool branch_taken_0x22ab48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ab48) {
            ctx->pc = 0x22AB60u;
            goto label_22ab60;
        }
    }
    ctx->pc = 0x22AB50u;
    // 0x22ab50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab54: 0xa3a200c1  sb          $v0, 0xC1($sp)
    ctx->pc = 0x22ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 193), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22AB58u;
    {
        const bool branch_taken_0x22ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab58) {
            ctx->pc = 0x22AB64u;
            goto label_22ab64;
        }
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0xa3a000c1  sb          $zero, 0xC1($sp)
    ctx->pc = 0x22ab60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 193), (uint8_t)GPR_U32(ctx, 0));
label_22ab64:
    // 0x22ab64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x22ab68: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x22AB68u;
    SET_GPR_U32(ctx, 31, 0x22AB70u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x22AB68u, 0x22AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB70u;
label_22ab70:
    // 0x22ab70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22ab74: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x22ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x22ab78: 0x804200a0  lb          $v0, 0xA0($v0)
    ctx->pc = 0x22ab78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x22ab7c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x22ab7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x22ab80: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x22ab80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x22ab84: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x22ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x22ab88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AB88u;
    {
        const bool branch_taken_0x22ab88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ab88) {
            ctx->pc = 0x22AB9Cu;
            goto label_22ab9c;
        }
    }
    ctx->pc = 0x22AB90u;
    // 0x22ab90: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x22ab90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ab94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22AB94u;
    {
        const bool branch_taken_0x22ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab94) {
            ctx->pc = 0x22ABA4u;
            goto label_22aba4;
        }
    }
    ctx->pc = 0x22AB9Cu;
label_22ab9c:
    // 0x22ab9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aba0: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x22aba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
label_22aba4:
    // 0x22aba4: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x22aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x22aba8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22aba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abac: 0xc08a604  jal         func_229810
    ctx->pc = 0x22ABACu;
    SET_GPR_U32(ctx, 31, 0x22ABB4u);
    ctx->pc = 0x229810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229810u, 0x22ABACu, 0x22ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABB4u;
label_22abb4:
    // 0x22abb4: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x22abb8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x22abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x22abbc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x22abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22abc0: 0xc08a390  jal         func_228E40
    ctx->pc = 0x22ABC0u;
    SET_GPR_U32(ctx, 31, 0x22ABC8u);
    ctx->pc = 0x228E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228E40u, 0x22ABC0u, 0x22ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABC8u;
label_22abc8:
    // 0x22abc8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22abc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_22abcc:
    // 0x22abcc: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x22abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x22abd0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x22abd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22abd4: 0x1440ff1b  bnez        $v0, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x22ABD4u;
    {
        const bool branch_taken_0x22abd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22abd4) {
            ctx->pc = 0x22A844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a844;
        }
    }
    ctx->pc = 0x22ABDCu;
    // 0x22abdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abe4: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x22ABE4u;
    SET_GPR_U32(ctx, 31, 0x22ABECu);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x22ABE4u, 0x22ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABECu;
label_22abec:
    // 0x22abec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ABECu;
    {
        const bool branch_taken_0x22abec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abec) {
            ctx->pc = 0x22AC04u;
            goto label_22ac04;
        }
    }
    ctx->pc = 0x22ABF4u;
    // 0x22abf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22abf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22abf8: 0xc0f0606  jal         func_3C1818
    ctx->pc = 0x22ABF8u;
    SET_GPR_U32(ctx, 31, 0x22AC00u);
    ctx->pc = 0x3C1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1818u, 0x22ABF8u, 0x22AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC00u;
label_22ac00:
    // 0x22ac00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ac00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ac04:
    // 0x22ac04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22ac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ac08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x22ac08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ac0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22ac0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ac10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22ac10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ac14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22ac14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ac18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ac18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ac1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ac1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ac20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ac20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ac24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ac24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ac28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ac28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ac2c: 0x27bd0250  addiu       $sp, $sp, 0x250
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x22ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x22AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AC38u;
    // 0x22ac38: 0x0  nop
    ctx->pc = 0x22ac38u;
    // NOP
    // 0x22ac3c: 0x0  nop
    ctx->pc = 0x22ac3cu;
    // NOP
    ctx->pc = 0x22ac40u;
}
