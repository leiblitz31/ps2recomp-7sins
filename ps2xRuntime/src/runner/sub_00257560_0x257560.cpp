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

// Function: sub_00257560
// Address: 0x257560 - 0x257770
void sub_00257560_0x257560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257560_0x257560");
#endif

    switch (ctx->pc) {
        case 0x25759cu: goto label_25759c;
        case 0x2575b0u: goto label_2575b0;
        case 0x2575c4u: goto label_2575c4;
        case 0x2575d4u: goto label_2575d4;
        case 0x2575ecu: goto label_2575ec;
        case 0x257604u: goto label_257604;
        case 0x25761cu: goto label_25761c;
        case 0x25763cu: goto label_25763c;
        case 0x257654u: goto label_257654;
        case 0x257664u: goto label_257664;
        case 0x25768cu: goto label_25768c;
        case 0x2576a0u: goto label_2576a0;
        case 0x2576b4u: goto label_2576b4;
        case 0x2576c0u: goto label_2576c0;
        case 0x2576d4u: goto label_2576d4;
        case 0x2576ecu: goto label_2576ec;
        case 0x257714u: goto label_257714;
        case 0x257728u: goto label_257728;
        case 0x257744u: goto label_257744;
        default: break;
    }

    ctx->pc = 0x257560u;

    // 0x257560: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x257560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x257564: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x257564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x257568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x257568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25756c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x257570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x257570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x257574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25757c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x25757cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x257580: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x257580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x257584: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x257584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x257588: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x257588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25758c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257590: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x257590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257594: 0xc095140  jal         func_254500
    ctx->pc = 0x257594u;
    SET_GPR_U32(ctx, 31, 0x25759Cu);
    ctx->pc = 0x254500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254500u, 0x257594u, 0x25759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25759Cu;
label_25759c:
    // 0x25759c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25759cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2575a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2575a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2575a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2575a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2575a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2575A8u;
    {
        const bool branch_taken_0x2575a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2575a8) {
            ctx->pc = 0x257624u;
            goto label_257624;
        }
    }
    ctx->pc = 0x2575B0u;
label_2575b0:
    // 0x2575b0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2575b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575b4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2575b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2575b8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2575b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2575bc: 0xc095e6c  jal         func_2579B0
    ctx->pc = 0x2575BCu;
    SET_GPR_U32(ctx, 31, 0x2575C4u);
    ctx->pc = 0x2579B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2579B0u, 0x2575BCu, 0x2575C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575C4u;
label_2575c4:
    // 0x2575c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2575c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2575c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575cc: 0xc095e5c  jal         func_257970
    ctx->pc = 0x2575CCu;
    SET_GPR_U32(ctx, 31, 0x2575D4u);
    ctx->pc = 0x257970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257970u, 0x2575CCu, 0x2575D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575D4u;
label_2575d4:
    // 0x2575d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2575d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2575d8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2575d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2575dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2575dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2575e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575e4: 0xc095e50  jal         func_257940
    ctx->pc = 0x2575E4u;
    SET_GPR_U32(ctx, 31, 0x2575ECu);
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x2575E4u, 0x2575ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2575ECu;
label_2575ec:
    // 0x2575ec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2575ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2575f0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2575F0u;
    {
        const bool branch_taken_0x2575f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2575f0) {
            ctx->pc = 0x257610u;
            goto label_257610;
        }
    }
    ctx->pc = 0x2575F8u;
    // 0x2575f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2575f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2575fc: 0xc095e48  jal         func_257920
    ctx->pc = 0x2575FCu;
    SET_GPR_U32(ctx, 31, 0x257604u);
    ctx->pc = 0x257920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257920u, 0x2575FCu, 0x257604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257604u;
label_257604:
    // 0x257604: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x257604u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257608u;
    {
        const bool branch_taken_0x257608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257608) {
            ctx->pc = 0x257620u;
            goto label_257620;
        }
    }
    ctx->pc = 0x257610u;
label_257610:
    // 0x257610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257614: 0xc095e40  jal         func_257900
    ctx->pc = 0x257614u;
    SET_GPR_U32(ctx, 31, 0x25761Cu);
    ctx->pc = 0x257900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257900u, 0x257614u, 0x25761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25761Cu;
label_25761c:
    // 0x25761c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x25761cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_257620:
    // 0x257620: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x257620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_257624:
    // 0x257624: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x257624u;
    {
        const bool branch_taken_0x257624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x257624) {
            ctx->pc = 0x2575B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2575b0;
        }
    }
    ctx->pc = 0x25762Cu;
    // 0x25762c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x25762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x257630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x257630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257634: 0xc095e34  jal         func_2578D0
    ctx->pc = 0x257634u;
    SET_GPR_U32(ctx, 31, 0x25763Cu);
    ctx->pc = 0x2578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2578D0u, 0x257634u, 0x25763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25763Cu;
label_25763c:
    // 0x25763c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x25763Cu;
    {
        const bool branch_taken_0x25763c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25763c) {
            ctx->pc = 0x2576B4u;
            goto label_2576b4;
        }
    }
    ctx->pc = 0x257644u;
    // 0x257644: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x257644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x257648: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x257648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25764c: 0xc095e24  jal         func_257890
    ctx->pc = 0x25764Cu;
    SET_GPR_U32(ctx, 31, 0x257654u);
    ctx->pc = 0x257890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257890u, 0x25764Cu, 0x257654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257654u;
label_257654:
    // 0x257654: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x257654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x257658: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x257658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x25765c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x25765Cu;
    SET_GPR_U32(ctx, 31, 0x257664u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x25765Cu, 0x257664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257664u;
label_257664:
    // 0x257664: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x257664u;
    {
        const bool branch_taken_0x257664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257664) {
            ctx->pc = 0x2576A8u;
            goto label_2576a8;
        }
    }
    ctx->pc = 0x25766Cu;
    // 0x25766c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x257670: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x257670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257674: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x257674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257678: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x257678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25767c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x25767cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x257680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257684: 0xc095ea0  jal         func_257A80
    ctx->pc = 0x257684u;
    SET_GPR_U32(ctx, 31, 0x25768Cu);
    ctx->pc = 0x257A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257A80u, 0x257684u, 0x25768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25768Cu;
label_25768c:
    // 0x25768c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x25768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257690: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x257690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x257694: 0x27869edc  addiu       $a2, $gp, -0x6124
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942428));
    // 0x257698: 0xc095e04  jal         func_257810
    ctx->pc = 0x257698u;
    SET_GPR_U32(ctx, 31, 0x2576A0u);
    ctx->pc = 0x257810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257810u, 0x257698u, 0x2576A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576A0u;
label_2576a0:
    // 0x2576a0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2576A0u;
    {
        const bool branch_taken_0x2576a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2576a0) {
            ctx->pc = 0x257744u;
            goto label_257744;
        }
    }
    ctx->pc = 0x2576A8u;
label_2576a8:
    // 0x2576a8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2576ac: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x2576ACu;
    SET_GPR_U32(ctx, 31, 0x2576B4u);
    ctx->pc = 0x2577D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577D0u, 0x2576ACu, 0x2576B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576B4u;
label_2576b4:
    // 0x2576b4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2576b8: 0xc095ddc  jal         func_257770
    ctx->pc = 0x2576B8u;
    SET_GPR_U32(ctx, 31, 0x2576C0u);
    ctx->pc = 0x257770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257770u, 0x2576B8u, 0x2576C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576C0u;
label_2576c0:
    // 0x2576c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2576c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576c4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2576c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2576c8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2576c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2576cc: 0xc095e6c  jal         func_2579B0
    ctx->pc = 0x2576CCu;
    SET_GPR_U32(ctx, 31, 0x2576D4u);
    ctx->pc = 0x2579B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2579B0u, 0x2576CCu, 0x2576D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576D4u;
label_2576d4:
    // 0x2576d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2576d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2576d8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2576dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2576dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2576e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576e4: 0xc095e50  jal         func_257940
    ctx->pc = 0x2576E4u;
    SET_GPR_U32(ctx, 31, 0x2576ECu);
    ctx->pc = 0x257940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257940u, 0x2576E4u, 0x2576ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2576ECu;
label_2576ec:
    // 0x2576ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2576ECu;
    {
        const bool branch_taken_0x2576ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2576ec) {
            ctx->pc = 0x257730u;
            goto label_257730;
        }
    }
    ctx->pc = 0x2576F4u;
    // 0x2576f4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2576f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2576f8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2576f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2576fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2576fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257700: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x257700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257704: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x257704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x257708: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x257708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25770c: 0xc095ea0  jal         func_257A80
    ctx->pc = 0x25770Cu;
    SET_GPR_U32(ctx, 31, 0x257714u);
    ctx->pc = 0x257A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257A80u, 0x25770Cu, 0x257714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257714u;
label_257714:
    // 0x257714: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257718: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x257718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x25771c: 0x27869ee0  addiu       $a2, $gp, -0x6120
    ctx->pc = 0x25771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942432));
    // 0x257720: 0xc095e04  jal         func_257810
    ctx->pc = 0x257720u;
    SET_GPR_U32(ctx, 31, 0x257728u);
    ctx->pc = 0x257810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257810u, 0x257720u, 0x257728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257728u;
label_257728:
    // 0x257728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257728u;
    {
        const bool branch_taken_0x257728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257728) {
            ctx->pc = 0x257744u;
            goto label_257744;
        }
    }
    ctx->pc = 0x257730u;
label_257730:
    // 0x257730: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x257730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257734: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x257734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x257738: 0x27869ee4  addiu       $a2, $gp, -0x611C
    ctx->pc = 0x257738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942436));
    // 0x25773c: 0xc095e04  jal         func_257810
    ctx->pc = 0x25773Cu;
    SET_GPR_U32(ctx, 31, 0x257744u);
    ctx->pc = 0x257810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257810u, 0x25773Cu, 0x257744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257744u;
label_257744:
    // 0x257744: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x257744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257748: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x257748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25774c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25774cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25775c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25775cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x257760: 0x3e00008  jr          $ra
    ctx->pc = 0x257760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257768u;
    // 0x257768: 0x0  nop
    ctx->pc = 0x257768u;
    // NOP
    // 0x25776c: 0x0  nop
    ctx->pc = 0x25776cu;
    // NOP
    ctx->pc = 0x257770u;
}
