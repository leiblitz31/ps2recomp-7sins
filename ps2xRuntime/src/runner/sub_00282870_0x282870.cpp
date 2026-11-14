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

// Function: sub_00282870
// Address: 0x282870 - 0x282a80
void sub_00282870_0x282870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282870_0x282870");
#endif

    switch (ctx->pc) {
        case 0x2828acu: goto label_2828ac;
        case 0x2828c0u: goto label_2828c0;
        case 0x2828d4u: goto label_2828d4;
        case 0x2828e4u: goto label_2828e4;
        case 0x2828fcu: goto label_2828fc;
        case 0x282914u: goto label_282914;
        case 0x28292cu: goto label_28292c;
        case 0x28294cu: goto label_28294c;
        case 0x282964u: goto label_282964;
        case 0x282974u: goto label_282974;
        case 0x28299cu: goto label_28299c;
        case 0x2829b0u: goto label_2829b0;
        case 0x2829c4u: goto label_2829c4;
        case 0x2829d0u: goto label_2829d0;
        case 0x2829e4u: goto label_2829e4;
        case 0x2829fcu: goto label_2829fc;
        case 0x282a24u: goto label_282a24;
        case 0x282a38u: goto label_282a38;
        case 0x282a54u: goto label_282a54;
        default: break;
    }

    ctx->pc = 0x282870u;

    // 0x282870: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x282870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x282874: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x282874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x282878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x282878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28287c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x282880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28288c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x28288cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x282890: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x282890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x282894: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x282894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x282898: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x282898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28289c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28289cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2828a0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2828a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2828a4: 0xc09e5b0  jal         func_2796C0
    ctx->pc = 0x2828A4u;
    SET_GPR_U32(ctx, 31, 0x2828ACu);
    ctx->pc = 0x2796C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796C0u, 0x2828A4u, 0x2828ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828ACu;
label_2828ac:
    // 0x2828ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2828b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2828b4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2828b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2828b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2828B8u;
    {
        const bool branch_taken_0x2828b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2828b8) {
            ctx->pc = 0x282934u;
            goto label_282934;
        }
    }
    ctx->pc = 0x2828C0u;
label_2828c0:
    // 0x2828c0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2828c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828c4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x2828c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2828c8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2828c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2828cc: 0xc0a0b24  jal         func_282C90
    ctx->pc = 0x2828CCu;
    SET_GPR_U32(ctx, 31, 0x2828D4u);
    ctx->pc = 0x282C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C90u, 0x2828CCu, 0x2828D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828D4u;
label_2828d4:
    // 0x2828d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2828d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2828d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828dc: 0xc0a0b14  jal         func_282C50
    ctx->pc = 0x2828DCu;
    SET_GPR_U32(ctx, 31, 0x2828E4u);
    ctx->pc = 0x282C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C50u, 0x2828DCu, 0x2828E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828E4u;
label_2828e4:
    // 0x2828e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2828e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2828e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2828ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2828ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2828f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828f4: 0xc0a0b08  jal         func_282C20
    ctx->pc = 0x2828F4u;
    SET_GPR_U32(ctx, 31, 0x2828FCu);
    ctx->pc = 0x282C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C20u, 0x2828F4u, 0x2828FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828FCu;
label_2828fc:
    // 0x2828fc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2828fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x282900: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x282900u;
    {
        const bool branch_taken_0x282900 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x282900) {
            ctx->pc = 0x282920u;
            goto label_282920;
        }
    }
    ctx->pc = 0x282908u;
    // 0x282908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28290c: 0xc0a0b00  jal         func_282C00
    ctx->pc = 0x28290Cu;
    SET_GPR_U32(ctx, 31, 0x282914u);
    ctx->pc = 0x282C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C00u, 0x28290Cu, 0x282914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282914u;
label_282914:
    // 0x282914: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x282914u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282918u;
    {
        const bool branch_taken_0x282918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282918) {
            ctx->pc = 0x282930u;
            goto label_282930;
        }
    }
    ctx->pc = 0x282920u;
label_282920:
    // 0x282920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282924: 0xc0a0af8  jal         func_282BE0
    ctx->pc = 0x282924u;
    SET_GPR_U32(ctx, 31, 0x28292Cu);
    ctx->pc = 0x282BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BE0u, 0x282924u, 0x28292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28292Cu;
label_28292c:
    // 0x28292c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28292cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282930:
    // 0x282930: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x282930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_282934:
    // 0x282934: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x282934u;
    {
        const bool branch_taken_0x282934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x282934) {
            ctx->pc = 0x2828C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2828c0;
        }
    }
    ctx->pc = 0x28293Cu;
    // 0x28293c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282944: 0xc0a0aec  jal         func_282BB0
    ctx->pc = 0x282944u;
    SET_GPR_U32(ctx, 31, 0x28294Cu);
    ctx->pc = 0x282BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282BB0u, 0x282944u, 0x28294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28294Cu;
label_28294c:
    // 0x28294c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x28294Cu;
    {
        const bool branch_taken_0x28294c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28294c) {
            ctx->pc = 0x2829C4u;
            goto label_2829c4;
        }
    }
    ctx->pc = 0x282954u;
    // 0x282954: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x282954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x282958: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x282958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28295c: 0xc0a0adc  jal         func_282B70
    ctx->pc = 0x28295Cu;
    SET_GPR_U32(ctx, 31, 0x282964u);
    ctx->pc = 0x282B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B70u, 0x28295Cu, 0x282964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282964u;
label_282964:
    // 0x282964: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x282964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282968: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x282968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28296c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x28296Cu;
    SET_GPR_U32(ctx, 31, 0x282974u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x28296Cu, 0x282974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282974u;
label_282974:
    // 0x282974: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x282974u;
    {
        const bool branch_taken_0x282974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282974) {
            ctx->pc = 0x2829B8u;
            goto label_2829b8;
        }
    }
    ctx->pc = 0x28297Cu;
    // 0x28297c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282980: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x282980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282984: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282988: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x282988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28298c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28298cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282994: 0xc0a0db8  jal         func_2836E0
    ctx->pc = 0x282994u;
    SET_GPR_U32(ctx, 31, 0x28299Cu);
    ctx->pc = 0x2836E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2836E0u, 0x282994u, 0x28299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28299Cu;
label_28299c:
    // 0x28299c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2829a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2829a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2829a4: 0x2786a264  addiu       $a2, $gp, -0x5D9C
    ctx->pc = 0x2829a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943332));
    // 0x2829a8: 0xc0a0ac8  jal         func_282B20
    ctx->pc = 0x2829A8u;
    SET_GPR_U32(ctx, 31, 0x2829B0u);
    ctx->pc = 0x282B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B20u, 0x2829A8u, 0x2829B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829B0u;
label_2829b0:
    // 0x2829b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2829B0u;
    {
        const bool branch_taken_0x2829b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2829b0) {
            ctx->pc = 0x282A54u;
            goto label_282a54;
        }
    }
    ctx->pc = 0x2829B8u;
label_2829b8:
    // 0x2829b8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2829b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2829bc: 0xc0a0ab8  jal         func_282AE0
    ctx->pc = 0x2829BCu;
    SET_GPR_U32(ctx, 31, 0x2829C4u);
    ctx->pc = 0x282AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AE0u, 0x2829BCu, 0x2829C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829C4u;
label_2829c4:
    // 0x2829c4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x2829c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2829c8: 0xc0a0aa0  jal         func_282A80
    ctx->pc = 0x2829C8u;
    SET_GPR_U32(ctx, 31, 0x2829D0u);
    ctx->pc = 0x282A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282A80u, 0x2829C8u, 0x2829D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829D0u;
label_2829d0:
    // 0x2829d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2829d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829d4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2829d8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2829d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2829dc: 0xc0a0b24  jal         func_282C90
    ctx->pc = 0x2829DCu;
    SET_GPR_U32(ctx, 31, 0x2829E4u);
    ctx->pc = 0x282C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C90u, 0x2829DCu, 0x2829E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829E4u;
label_2829e4:
    // 0x2829e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2829e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2829e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2829ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2829ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2829f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829f4: 0xc0a0b08  jal         func_282C20
    ctx->pc = 0x2829F4u;
    SET_GPR_U32(ctx, 31, 0x2829FCu);
    ctx->pc = 0x282C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C20u, 0x2829F4u, 0x2829FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829FCu;
label_2829fc:
    // 0x2829fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2829FCu;
    {
        const bool branch_taken_0x2829fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2829fc) {
            ctx->pc = 0x282A40u;
            goto label_282a40;
        }
    }
    ctx->pc = 0x282A04u;
    // 0x282a04: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x282a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x282a08: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x282a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282a0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x282a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a14: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x282a14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282a18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a1c: 0xc0a0db8  jal         func_2836E0
    ctx->pc = 0x282A1Cu;
    SET_GPR_U32(ctx, 31, 0x282A24u);
    ctx->pc = 0x2836E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2836E0u, 0x282A1Cu, 0x282A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A24u;
label_282a24:
    // 0x282a24: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x282a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282a28: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x282a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x282a2c: 0x2786a268  addiu       $a2, $gp, -0x5D98
    ctx->pc = 0x282a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943336));
    // 0x282a30: 0xc0a0ac8  jal         func_282B20
    ctx->pc = 0x282A30u;
    SET_GPR_U32(ctx, 31, 0x282A38u);
    ctx->pc = 0x282B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B20u, 0x282A30u, 0x282A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A38u;
label_282a38:
    // 0x282a38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x282A38u;
    {
        const bool branch_taken_0x282a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a38) {
            ctx->pc = 0x282A54u;
            goto label_282a54;
        }
    }
    ctx->pc = 0x282A40u;
label_282a40:
    // 0x282a40: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x282a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282a44: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x282a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x282a48: 0x2786a26c  addiu       $a2, $gp, -0x5D94
    ctx->pc = 0x282a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943340));
    // 0x282a4c: 0xc0a0ac8  jal         func_282B20
    ctx->pc = 0x282A4Cu;
    SET_GPR_U32(ctx, 31, 0x282A54u);
    ctx->pc = 0x282B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B20u, 0x282A4Cu, 0x282A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A54u;
label_282a54:
    // 0x282a54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x282a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282a58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x282a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x282a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282a6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x282a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x282a70: 0x3e00008  jr          $ra
    ctx->pc = 0x282A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282A78u;
    // 0x282a78: 0x0  nop
    ctx->pc = 0x282a78u;
    // NOP
    // 0x282a7c: 0x0  nop
    ctx->pc = 0x282a7cu;
    // NOP
    ctx->pc = 0x282a80u;
}
