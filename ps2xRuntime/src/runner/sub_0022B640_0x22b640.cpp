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

// Function: sub_0022B640
// Address: 0x22b640 - 0x22b850
void sub_0022B640_0x22b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B640_0x22b640");
#endif

    switch (ctx->pc) {
        case 0x22b67cu: goto label_22b67c;
        case 0x22b690u: goto label_22b690;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b734u: goto label_22b734;
        case 0x22b744u: goto label_22b744;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b780u: goto label_22b780;
        case 0x22b794u: goto label_22b794;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b808u: goto label_22b808;
        case 0x22b824u: goto label_22b824;
        default: break;
    }

    ctx->pc = 0x22b640u;

    // 0x22b640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22b644: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22b648: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22b64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22b650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b65c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x22b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x22b660: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x22b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x22b664: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x22b664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x22b668: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b66c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22b66cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b670: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x22b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b674: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x22B674u;
    SET_GPR_U32(ctx, 31, 0x22B67Cu);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x22B674u, 0x22B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B67Cu;
label_22b67c:
    // 0x22b67c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22b67cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b684: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22b684u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b688: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22B688u;
    {
        const bool branch_taken_0x22b688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b688) {
            ctx->pc = 0x22B704u;
            goto label_22b704;
        }
    }
    ctx->pc = 0x22B690u;
label_22b690:
    // 0x22b690: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22b690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b694: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x22b694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x22b698: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22b698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b69c: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B69Cu;
    SET_GPR_U32(ctx, 31, 0x22B6A4u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B69Cu, 0x22B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6A4u;
label_22b6a4:
    // 0x22b6a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22b6a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6ac: 0xc08a90c  jal         func_22A430
    ctx->pc = 0x22B6ACu;
    SET_GPR_U32(ctx, 31, 0x22B6B4u);
    ctx->pc = 0x22A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A430u, 0x22B6ACu, 0x22B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6B4u;
label_22b6b4:
    // 0x22b6b4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x22b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b6b8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b6bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22b6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6c4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B6C4u;
    SET_GPR_U32(ctx, 31, 0x22B6CCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B6C4u, 0x22B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6CCu;
label_22b6cc:
    // 0x22b6cc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22b6ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b6d0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B6D0u;
    {
        const bool branch_taken_0x22b6d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6d0) {
            ctx->pc = 0x22B6F0u;
            goto label_22b6f0;
        }
    }
    ctx->pc = 0x22B6D8u;
    // 0x22b6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6dc: 0xc08a904  jal         func_22A410
    ctx->pc = 0x22B6DCu;
    SET_GPR_U32(ctx, 31, 0x22B6E4u);
    ctx->pc = 0x22A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A410u, 0x22B6DCu, 0x22B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6E4u;
label_22b6e4:
    // 0x22b6e4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x22b6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b6e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22B6E8u;
    {
        const bool branch_taken_0x22b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6e8) {
            ctx->pc = 0x22B700u;
            goto label_22b700;
        }
    }
    ctx->pc = 0x22B6F0u;
label_22b6f0:
    // 0x22b6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6f4: 0xc08a8fc  jal         func_22A3F0
    ctx->pc = 0x22B6F4u;
    SET_GPR_U32(ctx, 31, 0x22B6FCu);
    ctx->pc = 0x22A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3F0u, 0x22B6F4u, 0x22B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6FCu;
label_22b6fc:
    // 0x22b6fc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x22b6fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22b700:
    // 0x22b700: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x22b700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22b704:
    // 0x22b704: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x22B704u;
    {
        const bool branch_taken_0x22b704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b704) {
            ctx->pc = 0x22B690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b690;
        }
    }
    ctx->pc = 0x22B70Cu;
    // 0x22b70c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x22b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x22b710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b714: 0xc08a1d4  jal         func_228750
    ctx->pc = 0x22B714u;
    SET_GPR_U32(ctx, 31, 0x22B71Cu);
    ctx->pc = 0x228750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228750u, 0x22B714u, 0x22B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B71Cu;
label_22b71c:
    // 0x22b71c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x22B71Cu;
    {
        const bool branch_taken_0x22b71c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b71c) {
            ctx->pc = 0x22B794u;
            goto label_22b794;
        }
    }
    ctx->pc = 0x22B724u;
    // 0x22b724: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x22b724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x22b728: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22b728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b72c: 0xc08a230  jal         func_2288C0
    ctx->pc = 0x22B72Cu;
    SET_GPR_U32(ctx, 31, 0x22B734u);
    ctx->pc = 0x2288C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2288C0u, 0x22B72Cu, 0x22B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B734u;
label_22b734:
    // 0x22b734: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x22b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x22b738: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x22b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x22b73c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x22B73Cu;
    SET_GPR_U32(ctx, 31, 0x22B744u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x22B73Cu, 0x22B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B744u;
label_22b744:
    // 0x22b744: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22B744u;
    {
        const bool branch_taken_0x22b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b744) {
            ctx->pc = 0x22B788u;
            goto label_22b788;
        }
    }
    ctx->pc = 0x22B74Cu;
    // 0x22b74c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22b750: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22b754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b758: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22b758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b75c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x22b75cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b764: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B764u;
    SET_GPR_U32(ctx, 31, 0x22B76Cu);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B764u, 0x22B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B76Cu;
label_22b76c:
    // 0x22b76c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b770: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22b770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22b774: 0x27869cfc  addiu       $a2, $gp, -0x6304
    ctx->pc = 0x22b774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941948));
    // 0x22b778: 0xc08ae14  jal         func_22B850
    ctx->pc = 0x22B778u;
    SET_GPR_U32(ctx, 31, 0x22B780u);
    ctx->pc = 0x22B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B850u, 0x22B778u, 0x22B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B780u;
label_22b780:
    // 0x22b780: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22B780u;
    {
        const bool branch_taken_0x22b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b780) {
            ctx->pc = 0x22B824u;
            goto label_22b824;
        }
    }
    ctx->pc = 0x22B788u;
label_22b788:
    // 0x22b788: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x22b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x22b78c: 0xc08ad20  jal         func_22B480
    ctx->pc = 0x22B78Cu;
    SET_GPR_U32(ctx, 31, 0x22B794u);
    ctx->pc = 0x22B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B480u, 0x22B78Cu, 0x22B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B794u;
label_22b794:
    // 0x22b794: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x22b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x22b798: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22B798u;
    SET_GPR_U32(ctx, 31, 0x22B7A0u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22B798u, 0x22B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7A0u;
label_22b7a0:
    // 0x22b7a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22b7a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7a4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x22b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x22b7a8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b7ac: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B7ACu;
    SET_GPR_U32(ctx, 31, 0x22B7B4u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B7ACu, 0x22B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7B4u;
label_22b7b4:
    // 0x22b7b4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x22b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b7b8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b7bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22b7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7c4: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B7C4u;
    SET_GPR_U32(ctx, 31, 0x22B7CCu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B7C4u, 0x22B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7CCu;
label_22b7cc:
    // 0x22b7cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22B7CCu;
    {
        const bool branch_taken_0x22b7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7cc) {
            ctx->pc = 0x22B810u;
            goto label_22b810;
        }
    }
    ctx->pc = 0x22B7D4u;
    // 0x22b7d4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x22b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22b7d8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22b7dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22b7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22b7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7e4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x22b7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b7e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b7e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7ec: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B7ECu;
    SET_GPR_U32(ctx, 31, 0x22B7F4u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B7ECu, 0x22B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7F4u;
label_22b7f4:
    // 0x22b7f4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b7f8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x22b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22b7fc: 0x27869d00  addiu       $a2, $gp, -0x6300
    ctx->pc = 0x22b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941952));
    // 0x22b800: 0xc08ae14  jal         func_22B850
    ctx->pc = 0x22B800u;
    SET_GPR_U32(ctx, 31, 0x22B808u);
    ctx->pc = 0x22B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B850u, 0x22B800u, 0x22B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B808u;
label_22b808:
    // 0x22b808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22B808u;
    {
        const bool branch_taken_0x22b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b808) {
            ctx->pc = 0x22B824u;
            goto label_22b824;
        }
    }
    ctx->pc = 0x22B810u;
label_22b810:
    // 0x22b810: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22b810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22b814: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x22b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x22b818: 0x27869d04  addiu       $a2, $gp, -0x62FC
    ctx->pc = 0x22b818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941956));
    // 0x22b81c: 0xc08ae14  jal         func_22B850
    ctx->pc = 0x22B81Cu;
    SET_GPR_U32(ctx, 31, 0x22B824u);
    ctx->pc = 0x22B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B850u, 0x22B81Cu, 0x22B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B824u;
label_22b824:
    // 0x22b824: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22b824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b828: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22b828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b82c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b82cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b83c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22b83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22b840: 0x3e00008  jr          $ra
    ctx->pc = 0x22B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B848u;
    // 0x22b848: 0x0  nop
    ctx->pc = 0x22b848u;
    // NOP
    // 0x22b84c: 0x0  nop
    ctx->pc = 0x22b84cu;
    // NOP
    ctx->pc = 0x22b850u;
}
